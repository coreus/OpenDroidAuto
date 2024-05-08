#pragma once

#include <memory>
#include <functional>
#include <messenger/ICryptor.hpp>
#include <messenger/Message.hpp>
#include <messenger/Promise.hpp>


namespace aasdk
{
namespace messenger
{

class IMessenger
{
public:
    IMessenger() = default;
    virtual ~IMessenger() = default;

    typedef IMessenger* Pointer;

    virtual void enqueueReceive(ChannelId channelId, ReceivePromise::Pointer promise) = 0;
    virtual void enqueueSend(Message::Pointer message, SendPromise::Pointer promise) = 0;
    virtual void stop() = 0;
};

}
}