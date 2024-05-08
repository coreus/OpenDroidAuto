// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AVChannelData.proto

#include "AVChannelData.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace aasdk {
namespace proto {
namespace data {
constexpr AVChannel::AVChannel(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : audio_configs_()
  , video_configs_()
  , stream_type_(0)

  , audio_type_(0)

  , available_while_in_call_(false){}
struct AVChannelDefaultTypeInternal {
  constexpr AVChannelDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~AVChannelDefaultTypeInternal() {}
  union {
    AVChannel _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT AVChannelDefaultTypeInternal _AVChannel_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_AVChannelData_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_AVChannelData_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_AVChannelData_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_AVChannelData_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::AVChannel, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::AVChannel, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::AVChannel, stream_type_),
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::AVChannel, audio_type_),
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::AVChannel, audio_configs_),
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::AVChannel, video_configs_),
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::AVChannel, available_while_in_call_),
  0,
  1,
  ~0u,
  ~0u,
  2,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, sizeof(::aasdk::proto::data::AVChannel)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::aasdk::proto::data::_AVChannel_default_instance_),
};

const char descriptor_table_protodef_AVChannelData_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023AVChannelData.proto\022\020aasdk.proto.data\032"
  "\026AVStreamTypeEnum.proto\032\023AudioTypeEnum.p"
  "roto\032\025AudioConfigData.proto\032\025VideoConfig"
  "Data.proto\"\212\002\n\tAVChannel\0229\n\013stream_type\030"
  "\001 \002(\0162$.aasdk.proto.enums.AVStreamType.E"
  "num\0225\n\naudio_type\030\002 \001(\0162!.aasdk.proto.en"
  "ums.AudioType.Enum\0224\n\raudio_configs\030\003 \003("
  "\0132\035.aasdk.proto.data.AudioConfig\0224\n\rvide"
  "o_configs\030\004 \003(\0132\035.aasdk.proto.data.Video"
  "Config\022\037\n\027available_while_in_call\030\005 \001(\010"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_AVChannelData_2eproto_deps[4] = {
  &::descriptor_table_AVStreamTypeEnum_2eproto,
  &::descriptor_table_AudioConfigData_2eproto,
  &::descriptor_table_AudioTypeEnum_2eproto,
  &::descriptor_table_VideoConfigData_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_AVChannelData_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AVChannelData_2eproto = {
  false, false, 399, descriptor_table_protodef_AVChannelData_2eproto, "AVChannelData.proto", 
  &descriptor_table_AVChannelData_2eproto_once, descriptor_table_AVChannelData_2eproto_deps, 4, 1,
  schemas, file_default_instances, TableStruct_AVChannelData_2eproto::offsets,
  file_level_metadata_AVChannelData_2eproto, file_level_enum_descriptors_AVChannelData_2eproto, file_level_service_descriptors_AVChannelData_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_AVChannelData_2eproto_getter() {
  return &descriptor_table_AVChannelData_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_AVChannelData_2eproto(&descriptor_table_AVChannelData_2eproto);
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class AVChannel::_Internal {
 public:
  using HasBits = decltype(std::declval<AVChannel>()._has_bits_);
  static void set_has_stream_type(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_audio_type(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_available_while_in_call(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000001) ^ 0x00000001) != 0;
  }
};

void AVChannel::clear_audio_configs() {
  audio_configs_.Clear();
}
void AVChannel::clear_video_configs() {
  video_configs_.Clear();
}
AVChannel::AVChannel(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  audio_configs_(arena),
  video_configs_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:aasdk.proto.data.AVChannel)
}
AVChannel::AVChannel(const AVChannel& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_),
      audio_configs_(from.audio_configs_),
      video_configs_(from.video_configs_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&stream_type_, &from.stream_type_,
    static_cast<size_t>(reinterpret_cast<char*>(&available_while_in_call_) -
    reinterpret_cast<char*>(&stream_type_)) + sizeof(available_while_in_call_));
  // @@protoc_insertion_point(copy_constructor:aasdk.proto.data.AVChannel)
}

void AVChannel::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&stream_type_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&available_while_in_call_) -
    reinterpret_cast<char*>(&stream_type_)) + sizeof(available_while_in_call_));
}

AVChannel::~AVChannel() {
  // @@protoc_insertion_point(destructor:aasdk.proto.data.AVChannel)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void AVChannel::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void AVChannel::ArenaDtor(void* object) {
  AVChannel* _this = reinterpret_cast< AVChannel* >(object);
  (void)_this;
}
void AVChannel::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void AVChannel::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void AVChannel::Clear() {
// @@protoc_insertion_point(message_clear_start:aasdk.proto.data.AVChannel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  audio_configs_.Clear();
  video_configs_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&stream_type_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&available_while_in_call_) -
        reinterpret_cast<char*>(&stream_type_)) + sizeof(available_while_in_call_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AVChannel::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required .aasdk.proto.enums.AVStreamType.Enum stream_type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::aasdk::proto::enums::AVStreamType_Enum_IsValid(val))) {
            _internal_set_stream_type(static_cast<::aasdk::proto::enums::AVStreamType_Enum>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // optional .aasdk.proto.enums.AudioType.Enum audio_type = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::aasdk::proto::enums::AudioType_Enum_IsValid(val))) {
            _internal_set_audio_type(static_cast<::aasdk::proto::enums::AudioType_Enum>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(2, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // repeated .aasdk.proto.data.AudioConfig audio_configs = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_audio_configs(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .aasdk.proto.data.VideoConfig video_configs = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_video_configs(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else goto handle_unusual;
        continue;
      // optional bool available_while_in_call = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          _Internal::set_has_available_while_in_call(&has_bits);
          available_while_in_call_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* AVChannel::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:aasdk.proto.data.AVChannel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .aasdk.proto.enums.AVStreamType.Enum stream_type = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_stream_type(), target);
  }

  // optional .aasdk.proto.enums.AudioType.Enum audio_type = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_audio_type(), target);
  }

  // repeated .aasdk.proto.data.AudioConfig audio_configs = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_audio_configs_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, this->_internal_audio_configs(i), target, stream);
  }

  // repeated .aasdk.proto.data.VideoConfig video_configs = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_video_configs_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, this->_internal_video_configs(i), target, stream);
  }

  // optional bool available_while_in_call = 5;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(5, this->_internal_available_while_in_call(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:aasdk.proto.data.AVChannel)
  return target;
}

size_t AVChannel::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aasdk.proto.data.AVChannel)
  size_t total_size = 0;

  // required .aasdk.proto.enums.AVStreamType.Enum stream_type = 1;
  if (_internal_has_stream_type()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_stream_type());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .aasdk.proto.data.AudioConfig audio_configs = 3;
  total_size += 1UL * this->_internal_audio_configs_size();
  for (const auto& msg : this->audio_configs_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .aasdk.proto.data.VideoConfig video_configs = 4;
  total_size += 1UL * this->_internal_video_configs_size();
  for (const auto& msg : this->video_configs_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000006u) {
    // optional .aasdk.proto.enums.AudioType.Enum audio_type = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_audio_type());
    }

    // optional bool available_while_in_call = 5;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 1;
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AVChannel::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:aasdk.proto.data.AVChannel)
  GOOGLE_DCHECK_NE(&from, this);
  const AVChannel* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<AVChannel>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:aasdk.proto.data.AVChannel)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:aasdk.proto.data.AVChannel)
    MergeFrom(*source);
  }
}

void AVChannel::MergeFrom(const AVChannel& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aasdk.proto.data.AVChannel)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  audio_configs_.MergeFrom(from.audio_configs_);
  video_configs_.MergeFrom(from.video_configs_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      stream_type_ = from.stream_type_;
    }
    if (cached_has_bits & 0x00000002u) {
      audio_type_ = from.audio_type_;
    }
    if (cached_has_bits & 0x00000004u) {
      available_while_in_call_ = from.available_while_in_call_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void AVChannel::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:aasdk.proto.data.AVChannel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AVChannel::CopyFrom(const AVChannel& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aasdk.proto.data.AVChannel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AVChannel::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(audio_configs_)) return false;
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(video_configs_)) return false;
  return true;
}

void AVChannel::InternalSwap(AVChannel* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  audio_configs_.InternalSwap(&other->audio_configs_);
  video_configs_.InternalSwap(&other->video_configs_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(AVChannel, available_while_in_call_)
      + sizeof(AVChannel::available_while_in_call_)
      - PROTOBUF_FIELD_OFFSET(AVChannel, stream_type_)>(
          reinterpret_cast<char*>(&stream_type_),
          reinterpret_cast<char*>(&other->stream_type_));
}

::PROTOBUF_NAMESPACE_ID::Metadata AVChannel::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_AVChannelData_2eproto_getter, &descriptor_table_AVChannelData_2eproto_once,
      file_level_metadata_AVChannelData_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::aasdk::proto::data::AVChannel* Arena::CreateMaybeMessage< ::aasdk::proto::data::AVChannel >(Arena* arena) {
  return Arena::CreateMessageInternal< ::aasdk::proto::data::AVChannel >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>