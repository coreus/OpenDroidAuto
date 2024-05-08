#include <transport/Transport.hpp>

namespace aasdk
{
namespace transport
{

Transport::Transport(boost::asio::io_service& ioService)
    : receiveStrand_(ioService)
    , sendStrand_(ioService)
{}

void Transport::receive(size_t size, ReceivePromise::Pointer promise) {
    receiveStrand_.dispatch([this, size, promise = std::move(promise)]() mutable {
        receiveQueue_.emplace_back(std::make_pair(size, std::move(promise)));

        if(receiveQueue_.size() == 1) {
            try {
                this->distributeReceivedData();
            } catch(const error::Error& e) {
                this->rejectReceivePromises(e);
            }
        }
    });
}

void Transport::receiveHandler(size_t bytesTransferred) {
    try {
        receivedDataSink_.commit(bytesTransferred);

        this->distributeReceivedData();
    } catch(const error::Error& e) {
        this->rejectReceivePromises(e);
    }
}

void Transport::distributeReceivedData() {
    for(auto queueElement = receiveQueue_.begin(); queueElement != receiveQueue_.end();) {
        if(receivedDataSink_.getAvailableSize() < queueElement->first) {
            auto buffer = receivedDataSink_.fill();
            this->enqueueReceive(std::move(buffer));

            break;
        } else {
            auto data(receivedDataSink_.consume(queueElement->first));
            queueElement->second->resolve(std::move(data));
            queueElement = receiveQueue_.erase(queueElement);
        }
    }
}

void Transport::rejectReceivePromises(const error::Error& e)
{
    for(auto& queueElement : receiveQueue_)
    {
        queueElement.second->reject(e);
    }

    receiveQueue_.clear();
}

void Transport::send(common::Data data, SendPromise::Pointer promise)
{
    sendStrand_.dispatch([this, data = std::move(data), promise = std::move(promise)]() mutable {
        sendQueue_.emplace_back(std::make_pair(std::move(data), std::move(promise)));

        if(sendQueue_.size() == 1)
        {
            this->enqueueSend(sendQueue_.begin());
        }
    });
}

}
}