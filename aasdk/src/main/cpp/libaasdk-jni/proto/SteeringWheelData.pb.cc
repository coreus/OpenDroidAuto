// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SteeringWheelData.proto

#include "SteeringWheelData.pb.h"

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
constexpr SteeringWheel::SteeringWheel(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : steering_angle_(0)
  , wheel_speed_(0){}
struct SteeringWheelDefaultTypeInternal {
  constexpr SteeringWheelDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~SteeringWheelDefaultTypeInternal() {}
  union {
    SteeringWheel _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT SteeringWheelDefaultTypeInternal _SteeringWheel_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_SteeringWheelData_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_SteeringWheelData_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_SteeringWheelData_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_SteeringWheelData_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::SteeringWheel, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::SteeringWheel, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::SteeringWheel, steering_angle_),
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::SteeringWheel, wheel_speed_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::aasdk::proto::data::SteeringWheel)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::aasdk::proto::data::_SteeringWheel_default_instance_),
};

const char descriptor_table_protodef_SteeringWheelData_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027SteeringWheelData.proto\022\020aasdk.proto.d"
  "ata\"<\n\rSteeringWheel\022\026\n\016steering_angle\030\001"
  " \002(\005\022\023\n\013wheel_speed\030\002 \002(\005"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_SteeringWheelData_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SteeringWheelData_2eproto = {
  false, false, 105, descriptor_table_protodef_SteeringWheelData_2eproto, "SteeringWheelData.proto", 
  &descriptor_table_SteeringWheelData_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_SteeringWheelData_2eproto::offsets,
  file_level_metadata_SteeringWheelData_2eproto, file_level_enum_descriptors_SteeringWheelData_2eproto, file_level_service_descriptors_SteeringWheelData_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_SteeringWheelData_2eproto_getter() {
  return &descriptor_table_SteeringWheelData_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_SteeringWheelData_2eproto(&descriptor_table_SteeringWheelData_2eproto);
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class SteeringWheel::_Internal {
 public:
  using HasBits = decltype(std::declval<SteeringWheel>()._has_bits_);
  static void set_has_steering_angle(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_wheel_speed(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000003) ^ 0x00000003) != 0;
  }
};

SteeringWheel::SteeringWheel(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:aasdk.proto.data.SteeringWheel)
}
SteeringWheel::SteeringWheel(const SteeringWheel& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&steering_angle_, &from.steering_angle_,
    static_cast<size_t>(reinterpret_cast<char*>(&wheel_speed_) -
    reinterpret_cast<char*>(&steering_angle_)) + sizeof(wheel_speed_));
  // @@protoc_insertion_point(copy_constructor:aasdk.proto.data.SteeringWheel)
}

void SteeringWheel::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&steering_angle_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&wheel_speed_) -
    reinterpret_cast<char*>(&steering_angle_)) + sizeof(wheel_speed_));
}

SteeringWheel::~SteeringWheel() {
  // @@protoc_insertion_point(destructor:aasdk.proto.data.SteeringWheel)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void SteeringWheel::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void SteeringWheel::ArenaDtor(void* object) {
  SteeringWheel* _this = reinterpret_cast< SteeringWheel* >(object);
  (void)_this;
}
void SteeringWheel::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SteeringWheel::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void SteeringWheel::Clear() {
// @@protoc_insertion_point(message_clear_start:aasdk.proto.data.SteeringWheel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&steering_angle_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&wheel_speed_) -
        reinterpret_cast<char*>(&steering_angle_)) + sizeof(wheel_speed_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SteeringWheel::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required int32 steering_angle = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_steering_angle(&has_bits);
          steering_angle_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required int32 wheel_speed = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_wheel_speed(&has_bits);
          wheel_speed_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* SteeringWheel::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:aasdk.proto.data.SteeringWheel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 steering_angle = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_steering_angle(), target);
  }

  // required int32 wheel_speed = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_wheel_speed(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:aasdk.proto.data.SteeringWheel)
  return target;
}

size_t SteeringWheel::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:aasdk.proto.data.SteeringWheel)
  size_t total_size = 0;

  if (_internal_has_steering_angle()) {
    // required int32 steering_angle = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_steering_angle());
  }

  if (_internal_has_wheel_speed()) {
    // required int32 wheel_speed = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_wheel_speed());
  }

  return total_size;
}
size_t SteeringWheel::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aasdk.proto.data.SteeringWheel)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required int32 steering_angle = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_steering_angle());

    // required int32 wheel_speed = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_wheel_speed());

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

void SteeringWheel::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:aasdk.proto.data.SteeringWheel)
  GOOGLE_DCHECK_NE(&from, this);
  const SteeringWheel* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SteeringWheel>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:aasdk.proto.data.SteeringWheel)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:aasdk.proto.data.SteeringWheel)
    MergeFrom(*source);
  }
}

void SteeringWheel::MergeFrom(const SteeringWheel& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aasdk.proto.data.SteeringWheel)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      steering_angle_ = from.steering_angle_;
    }
    if (cached_has_bits & 0x00000002u) {
      wheel_speed_ = from.wheel_speed_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void SteeringWheel::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:aasdk.proto.data.SteeringWheel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SteeringWheel::CopyFrom(const SteeringWheel& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aasdk.proto.data.SteeringWheel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SteeringWheel::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void SteeringWheel::InternalSwap(SteeringWheel* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SteeringWheel, wheel_speed_)
      + sizeof(SteeringWheel::wheel_speed_)
      - PROTOBUF_FIELD_OFFSET(SteeringWheel, steering_angle_)>(
          reinterpret_cast<char*>(&steering_angle_),
          reinterpret_cast<char*>(&other->steering_angle_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SteeringWheel::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_SteeringWheelData_2eproto_getter, &descriptor_table_SteeringWheelData_2eproto_once,
      file_level_metadata_SteeringWheelData_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::aasdk::proto::data::SteeringWheel* Arena::CreateMaybeMessage< ::aasdk::proto::data::SteeringWheel >(Arena* arena) {
  return Arena::CreateMessageInternal< ::aasdk::proto::data::SteeringWheel >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>