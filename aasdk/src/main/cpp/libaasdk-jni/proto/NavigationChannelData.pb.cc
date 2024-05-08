// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NavigationChannelData.proto

#include "NavigationChannelData.pb.h"

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
constexpr NavigationChannel::NavigationChannel(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : image_options_(nullptr)
  , minimum_interval_ms_(0u)
  , type_(0)
{}
struct NavigationChannelDefaultTypeInternal {
  constexpr NavigationChannelDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~NavigationChannelDefaultTypeInternal() {}
  union {
    NavigationChannel _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT NavigationChannelDefaultTypeInternal _NavigationChannel_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_NavigationChannelData_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_NavigationChannelData_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_NavigationChannelData_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_NavigationChannelData_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::NavigationChannel, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::NavigationChannel, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::NavigationChannel, minimum_interval_ms_),
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::NavigationChannel, type_),
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::NavigationChannel, image_options_),
  1,
  2,
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::aasdk::proto::data::NavigationChannel)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::aasdk::proto::data::_NavigationChannel_default_instance_),
};

const char descriptor_table_protodef_NavigationChannelData_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033NavigationChannelData.proto\022\020aasdk.pro"
  "to.data\032\034NavigationTurnTypeEnum.proto\032 N"
  "avigationImageOptionsData.proto\"\253\001\n\021Navi"
  "gationChannel\022\033\n\023minimum_interval_ms\030\001 \002"
  "(\r\0228\n\004type\030\002 \002(\0162*.aasdk.proto.enums.Nav"
  "igationTurnType.Enum\022\?\n\rimage_options\030\003 "
  "\002(\0132(.aasdk.proto.data.NavigationImageOp"
  "tions"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_NavigationChannelData_2eproto_deps[2] = {
  &::descriptor_table_NavigationImageOptionsData_2eproto,
  &::descriptor_table_NavigationTurnTypeEnum_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_NavigationChannelData_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_NavigationChannelData_2eproto = {
  false, false, 285, descriptor_table_protodef_NavigationChannelData_2eproto, "NavigationChannelData.proto", 
  &descriptor_table_NavigationChannelData_2eproto_once, descriptor_table_NavigationChannelData_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_NavigationChannelData_2eproto::offsets,
  file_level_metadata_NavigationChannelData_2eproto, file_level_enum_descriptors_NavigationChannelData_2eproto, file_level_service_descriptors_NavigationChannelData_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_NavigationChannelData_2eproto_getter() {
  return &descriptor_table_NavigationChannelData_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_NavigationChannelData_2eproto(&descriptor_table_NavigationChannelData_2eproto);
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class NavigationChannel::_Internal {
 public:
  using HasBits = decltype(std::declval<NavigationChannel>()._has_bits_);
  static void set_has_minimum_interval_ms(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::aasdk::proto::data::NavigationImageOptions& image_options(const NavigationChannel* msg);
  static void set_has_image_options(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000007) ^ 0x00000007) != 0;
  }
};

const ::aasdk::proto::data::NavigationImageOptions&
NavigationChannel::_Internal::image_options(const NavigationChannel* msg) {
  return *msg->image_options_;
}
void NavigationChannel::clear_image_options() {
  if (image_options_ != nullptr) image_options_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
NavigationChannel::NavigationChannel(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:aasdk.proto.data.NavigationChannel)
}
NavigationChannel::NavigationChannel(const NavigationChannel& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_image_options()) {
    image_options_ = new ::aasdk::proto::data::NavigationImageOptions(*from.image_options_);
  } else {
    image_options_ = nullptr;
  }
  ::memcpy(&minimum_interval_ms_, &from.minimum_interval_ms_,
    static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&minimum_interval_ms_)) + sizeof(type_));
  // @@protoc_insertion_point(copy_constructor:aasdk.proto.data.NavigationChannel)
}

void NavigationChannel::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&image_options_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&image_options_)) + sizeof(type_));
}

NavigationChannel::~NavigationChannel() {
  // @@protoc_insertion_point(destructor:aasdk.proto.data.NavigationChannel)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void NavigationChannel::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete image_options_;
}

void NavigationChannel::ArenaDtor(void* object) {
  NavigationChannel* _this = reinterpret_cast< NavigationChannel* >(object);
  (void)_this;
}
void NavigationChannel::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void NavigationChannel::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void NavigationChannel::Clear() {
// @@protoc_insertion_point(message_clear_start:aasdk.proto.data.NavigationChannel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(image_options_ != nullptr);
    image_options_->Clear();
  }
  if (cached_has_bits & 0x00000006u) {
    ::memset(&minimum_interval_ms_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&type_) -
        reinterpret_cast<char*>(&minimum_interval_ms_)) + sizeof(type_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* NavigationChannel::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required uint32 minimum_interval_ms = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_minimum_interval_ms(&has_bits);
          minimum_interval_ms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required .aasdk.proto.enums.NavigationTurnType.Enum type = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::aasdk::proto::enums::NavigationTurnType_Enum_IsValid(val))) {
            _internal_set_type(static_cast<::aasdk::proto::enums::NavigationTurnType_Enum>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(2, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // required .aasdk.proto.data.NavigationImageOptions image_options = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_image_options(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* NavigationChannel::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:aasdk.proto.data.NavigationChannel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 minimum_interval_ms = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_minimum_interval_ms(), target);
  }

  // required .aasdk.proto.enums.NavigationTurnType.Enum type = 2;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_type(), target);
  }

  // required .aasdk.proto.data.NavigationImageOptions image_options = 3;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::image_options(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:aasdk.proto.data.NavigationChannel)
  return target;
}

size_t NavigationChannel::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:aasdk.proto.data.NavigationChannel)
  size_t total_size = 0;

  if (_internal_has_image_options()) {
    // required .aasdk.proto.data.NavigationImageOptions image_options = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *image_options_);
  }

  if (_internal_has_minimum_interval_ms()) {
    // required uint32 minimum_interval_ms = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_minimum_interval_ms());
  }

  if (_internal_has_type()) {
    // required .aasdk.proto.enums.NavigationTurnType.Enum type = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_type());
  }

  return total_size;
}
size_t NavigationChannel::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aasdk.proto.data.NavigationChannel)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required .aasdk.proto.data.NavigationImageOptions image_options = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *image_options_);

    // required uint32 minimum_interval_ms = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_minimum_interval_ms());

    // required .aasdk.proto.enums.NavigationTurnType.Enum type = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_type());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void NavigationChannel::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:aasdk.proto.data.NavigationChannel)
  GOOGLE_DCHECK_NE(&from, this);
  const NavigationChannel* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<NavigationChannel>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:aasdk.proto.data.NavigationChannel)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:aasdk.proto.data.NavigationChannel)
    MergeFrom(*source);
  }
}

void NavigationChannel::MergeFrom(const NavigationChannel& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aasdk.proto.data.NavigationChannel)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_image_options()->::aasdk::proto::data::NavigationImageOptions::MergeFrom(from._internal_image_options());
    }
    if (cached_has_bits & 0x00000002u) {
      minimum_interval_ms_ = from.minimum_interval_ms_;
    }
    if (cached_has_bits & 0x00000004u) {
      type_ = from.type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void NavigationChannel::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:aasdk.proto.data.NavigationChannel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void NavigationChannel::CopyFrom(const NavigationChannel& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aasdk.proto.data.NavigationChannel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NavigationChannel::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  if (_internal_has_image_options()) {
    if (!image_options_->IsInitialized()) return false;
  }
  return true;
}

void NavigationChannel::InternalSwap(NavigationChannel* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(NavigationChannel, type_)
      + sizeof(NavigationChannel::type_)
      - PROTOBUF_FIELD_OFFSET(NavigationChannel, image_options_)>(
          reinterpret_cast<char*>(&image_options_),
          reinterpret_cast<char*>(&other->image_options_));
}

::PROTOBUF_NAMESPACE_ID::Metadata NavigationChannel::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_NavigationChannelData_2eproto_getter, &descriptor_table_NavigationChannelData_2eproto_once,
      file_level_metadata_NavigationChannelData_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::aasdk::proto::data::NavigationChannel* Arena::CreateMaybeMessage< ::aasdk::proto::data::NavigationChannel >(Arena* arena) {
  return Arena::CreateMessageInternal< ::aasdk::proto::data::NavigationChannel >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>