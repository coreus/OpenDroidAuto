// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: OdometerData.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_OdometerData_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_OdometerData_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_OdometerData_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_OdometerData_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_OdometerData_2eproto;
namespace aasdk {
namespace proto {
namespace data {
class Odometer;
struct OdometerDefaultTypeInternal;
extern OdometerDefaultTypeInternal _Odometer_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
PROTOBUF_NAMESPACE_OPEN
template<> ::aasdk::proto::data::Odometer* Arena::CreateMaybeMessage<::aasdk::proto::data::Odometer>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class Odometer final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:aasdk.proto.data.Odometer) */ {
 public:
  inline Odometer() : Odometer(nullptr) {}
  ~Odometer() override;
  explicit constexpr Odometer(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Odometer(const Odometer& from);
  Odometer(Odometer&& from) noexcept
    : Odometer() {
    *this = ::std::move(from);
  }

  inline Odometer& operator=(const Odometer& from) {
    CopyFrom(from);
    return *this;
  }
  inline Odometer& operator=(Odometer&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Odometer& default_instance() {
    return *internal_default_instance();
  }
  static inline const Odometer* internal_default_instance() {
    return reinterpret_cast<const Odometer*>(
               &_Odometer_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Odometer& a, Odometer& b) {
    a.Swap(&b);
  }
  inline void Swap(Odometer* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Odometer* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Odometer* New() const final {
    return new Odometer();
  }

  Odometer* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Odometer>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Odometer& from);
  void MergeFrom(const Odometer& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Odometer* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "aasdk.proto.data.Odometer";
  }
  protected:
  explicit Odometer(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTotalMileageFieldNumber = 1,
    kTripMileageFieldNumber = 2,
  };
  // required int32 total_mileage = 1;
  bool has_total_mileage() const;
  private:
  bool _internal_has_total_mileage() const;
  public:
  void clear_total_mileage();
  ::PROTOBUF_NAMESPACE_ID::int32 total_mileage() const;
  void set_total_mileage(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_total_mileage() const;
  void _internal_set_total_mileage(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required int32 trip_mileage = 2;
  bool has_trip_mileage() const;
  private:
  bool _internal_has_trip_mileage() const;
  public:
  void clear_trip_mileage();
  ::PROTOBUF_NAMESPACE_ID::int32 trip_mileage() const;
  void set_trip_mileage(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_trip_mileage() const;
  void _internal_set_trip_mileage(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:aasdk.proto.data.Odometer)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 total_mileage_;
  ::PROTOBUF_NAMESPACE_ID::int32 trip_mileage_;
  friend struct ::TableStruct_OdometerData_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Odometer

// required int32 total_mileage = 1;
inline bool Odometer::_internal_has_total_mileage() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Odometer::has_total_mileage() const {
  return _internal_has_total_mileage();
}
inline void Odometer::clear_total_mileage() {
  total_mileage_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Odometer::_internal_total_mileage() const {
  return total_mileage_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Odometer::total_mileage() const {
  // @@protoc_insertion_point(field_get:aasdk.proto.data.Odometer.total_mileage)
  return _internal_total_mileage();
}
inline void Odometer::_internal_set_total_mileage(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  total_mileage_ = value;
}
inline void Odometer::set_total_mileage(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_total_mileage(value);
  // @@protoc_insertion_point(field_set:aasdk.proto.data.Odometer.total_mileage)
}

// required int32 trip_mileage = 2;
inline bool Odometer::_internal_has_trip_mileage() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Odometer::has_trip_mileage() const {
  return _internal_has_trip_mileage();
}
inline void Odometer::clear_trip_mileage() {
  trip_mileage_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Odometer::_internal_trip_mileage() const {
  return trip_mileage_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Odometer::trip_mileage() const {
  // @@protoc_insertion_point(field_get:aasdk.proto.data.Odometer.trip_mileage)
  return _internal_trip_mileage();
}
inline void Odometer::_internal_set_trip_mileage(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  trip_mileage_ = value;
}
inline void Odometer::set_trip_mileage(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_trip_mileage(value);
  // @@protoc_insertion_point(field_set:aasdk.proto.data.Odometer.trip_mileage)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace data
}  // namespace proto
}  // namespace aasdk

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_OdometerData_2eproto