// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contacts.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_contacts_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_contacts_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_contacts_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_contacts_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_contacts_2eproto;
namespace contacts {
class Contacts;
class ContactsDefaultTypeInternal;
extern ContactsDefaultTypeInternal _Contacts_default_instance_;
class PeopleInfo;
class PeopleInfoDefaultTypeInternal;
extern PeopleInfoDefaultTypeInternal _PeopleInfo_default_instance_;
class PeopleInfo_Phone;
class PeopleInfo_PhoneDefaultTypeInternal;
extern PeopleInfo_PhoneDefaultTypeInternal _PeopleInfo_Phone_default_instance_;
}  // namespace contacts
PROTOBUF_NAMESPACE_OPEN
template<> ::contacts::Contacts* Arena::CreateMaybeMessage<::contacts::Contacts>(Arena*);
template<> ::contacts::PeopleInfo* Arena::CreateMaybeMessage<::contacts::PeopleInfo>(Arena*);
template<> ::contacts::PeopleInfo_Phone* Arena::CreateMaybeMessage<::contacts::PeopleInfo_Phone>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace contacts {

// ===================================================================

class PeopleInfo_Phone PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:contacts.PeopleInfo.Phone) */ {
 public:
  inline PeopleInfo_Phone() : PeopleInfo_Phone(nullptr) {};
  virtual ~PeopleInfo_Phone();

  PeopleInfo_Phone(const PeopleInfo_Phone& from);
  PeopleInfo_Phone(PeopleInfo_Phone&& from) noexcept
    : PeopleInfo_Phone() {
    *this = ::std::move(from);
  }

  inline PeopleInfo_Phone& operator=(const PeopleInfo_Phone& from) {
    CopyFrom(from);
    return *this;
  }
  inline PeopleInfo_Phone& operator=(PeopleInfo_Phone&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const PeopleInfo_Phone& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PeopleInfo_Phone* internal_default_instance() {
    return reinterpret_cast<const PeopleInfo_Phone*>(
               &_PeopleInfo_Phone_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PeopleInfo_Phone& a, PeopleInfo_Phone& b) {
    a.Swap(&b);
  }
  inline void Swap(PeopleInfo_Phone* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PeopleInfo_Phone* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PeopleInfo_Phone* New() const final {
    return CreateMaybeMessage<PeopleInfo_Phone>(nullptr);
  }

  PeopleInfo_Phone* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PeopleInfo_Phone>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PeopleInfo_Phone& from);
  void MergeFrom(const PeopleInfo_Phone& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PeopleInfo_Phone* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "contacts.PeopleInfo.Phone";
  }
  protected:
  explicit PeopleInfo_Phone(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_contacts_2eproto);
    return ::descriptor_table_contacts_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNumFieldNumber = 1,
  };
  // string num = 1;
  void clear_num();
  const std::string& num() const;
  void set_num(const std::string& value);
  void set_num(std::string&& value);
  void set_num(const char* value);
  void set_num(const char* value, size_t size);
  std::string* mutable_num();
  std::string* release_num();
  void set_allocated_num(std::string* num);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_num();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_num(
      std::string* num);
  private:
  const std::string& _internal_num() const;
  void _internal_set_num(const std::string& value);
  std::string* _internal_mutable_num();
  public:

  // @@protoc_insertion_point(class_scope:contacts.PeopleInfo.Phone)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr num_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_contacts_2eproto;
};
// -------------------------------------------------------------------

class PeopleInfo PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:contacts.PeopleInfo) */ {
 public:
  inline PeopleInfo() : PeopleInfo(nullptr) {};
  virtual ~PeopleInfo();

  PeopleInfo(const PeopleInfo& from);
  PeopleInfo(PeopleInfo&& from) noexcept
    : PeopleInfo() {
    *this = ::std::move(from);
  }

  inline PeopleInfo& operator=(const PeopleInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline PeopleInfo& operator=(PeopleInfo&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const PeopleInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PeopleInfo* internal_default_instance() {
    return reinterpret_cast<const PeopleInfo*>(
               &_PeopleInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(PeopleInfo& a, PeopleInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(PeopleInfo* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PeopleInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PeopleInfo* New() const final {
    return CreateMaybeMessage<PeopleInfo>(nullptr);
  }

  PeopleInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PeopleInfo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PeopleInfo& from);
  void MergeFrom(const PeopleInfo& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PeopleInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "contacts.PeopleInfo";
  }
  protected:
  explicit PeopleInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_contacts_2eproto);
    return ::descriptor_table_contacts_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef PeopleInfo_Phone Phone;

  // accessors -------------------------------------------------------

  enum : int {
    kPhoneFieldNumber = 3,
    kNameFieldNumber = 1,
    kBirthdayFieldNumber = 4,
  };
  // repeated .contacts.PeopleInfo.Phone phone = 3;
  int phone_size() const;
  private:
  int _internal_phone_size() const;
  public:
  void clear_phone();
  ::contacts::PeopleInfo_Phone* mutable_phone(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::contacts::PeopleInfo_Phone >*
      mutable_phone();
  private:
  const ::contacts::PeopleInfo_Phone& _internal_phone(int index) const;
  ::contacts::PeopleInfo_Phone* _internal_add_phone();
  public:
  const ::contacts::PeopleInfo_Phone& phone(int index) const;
  ::contacts::PeopleInfo_Phone* add_phone();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::contacts::PeopleInfo_Phone >&
      phone() const;

  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_name();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_name(
      std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // int32 birthday = 4;
  void clear_birthday();
  ::PROTOBUF_NAMESPACE_ID::int32 birthday() const;
  void set_birthday(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_birthday() const;
  void _internal_set_birthday(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:contacts.PeopleInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::contacts::PeopleInfo_Phone > phone_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::int32 birthday_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_contacts_2eproto;
};
// -------------------------------------------------------------------

class Contacts PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:contacts.Contacts) */ {
 public:
  inline Contacts() : Contacts(nullptr) {};
  virtual ~Contacts();

  Contacts(const Contacts& from);
  Contacts(Contacts&& from) noexcept
    : Contacts() {
    *this = ::std::move(from);
  }

  inline Contacts& operator=(const Contacts& from) {
    CopyFrom(from);
    return *this;
  }
  inline Contacts& operator=(Contacts&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Contacts& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Contacts* internal_default_instance() {
    return reinterpret_cast<const Contacts*>(
               &_Contacts_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Contacts& a, Contacts& b) {
    a.Swap(&b);
  }
  inline void Swap(Contacts* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Contacts* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Contacts* New() const final {
    return CreateMaybeMessage<Contacts>(nullptr);
  }

  Contacts* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Contacts>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Contacts& from);
  void MergeFrom(const Contacts& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Contacts* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "contacts.Contacts";
  }
  protected:
  explicit Contacts(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_contacts_2eproto);
    return ::descriptor_table_contacts_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kContactsFieldNumber = 1,
  };
  // repeated .contacts.PeopleInfo contacts = 1;
  int contacts_size() const;
  private:
  int _internal_contacts_size() const;
  public:
  void clear_contacts();
  ::contacts::PeopleInfo* mutable_contacts(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::contacts::PeopleInfo >*
      mutable_contacts();
  private:
  const ::contacts::PeopleInfo& _internal_contacts(int index) const;
  ::contacts::PeopleInfo* _internal_add_contacts();
  public:
  const ::contacts::PeopleInfo& contacts(int index) const;
  ::contacts::PeopleInfo* add_contacts();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::contacts::PeopleInfo >&
      contacts() const;

  // @@protoc_insertion_point(class_scope:contacts.Contacts)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::contacts::PeopleInfo > contacts_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_contacts_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PeopleInfo_Phone

// string num = 1;
inline void PeopleInfo_Phone::clear_num() {
  num_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& PeopleInfo_Phone::num() const {
  // @@protoc_insertion_point(field_get:contacts.PeopleInfo.Phone.num)
  return _internal_num();
}
inline void PeopleInfo_Phone::set_num(const std::string& value) {
  _internal_set_num(value);
  // @@protoc_insertion_point(field_set:contacts.PeopleInfo.Phone.num)
}
inline std::string* PeopleInfo_Phone::mutable_num() {
  // @@protoc_insertion_point(field_mutable:contacts.PeopleInfo.Phone.num)
  return _internal_mutable_num();
}
inline const std::string& PeopleInfo_Phone::_internal_num() const {
  return num_.Get();
}
inline void PeopleInfo_Phone::_internal_set_num(const std::string& value) {
  
  num_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void PeopleInfo_Phone::set_num(std::string&& value) {
  
  num_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:contacts.PeopleInfo.Phone.num)
}
inline void PeopleInfo_Phone::set_num(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  num_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:contacts.PeopleInfo.Phone.num)
}
inline void PeopleInfo_Phone::set_num(const char* value,
    size_t size) {
  
  num_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:contacts.PeopleInfo.Phone.num)
}
inline std::string* PeopleInfo_Phone::_internal_mutable_num() {
  
  return num_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* PeopleInfo_Phone::release_num() {
  // @@protoc_insertion_point(field_release:contacts.PeopleInfo.Phone.num)
  return num_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void PeopleInfo_Phone::set_allocated_num(std::string* num) {
  if (num != nullptr) {
    
  } else {
    
  }
  num_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), num,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:contacts.PeopleInfo.Phone.num)
}
inline std::string* PeopleInfo_Phone::unsafe_arena_release_num() {
  // @@protoc_insertion_point(field_unsafe_arena_release:contacts.PeopleInfo.Phone.num)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return num_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void PeopleInfo_Phone::unsafe_arena_set_allocated_num(
    std::string* num) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (num != nullptr) {
    
  } else {
    
  }
  num_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      num, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:contacts.PeopleInfo.Phone.num)
}

// -------------------------------------------------------------------

// PeopleInfo

// string name = 1;
inline void PeopleInfo::clear_name() {
  name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& PeopleInfo::name() const {
  // @@protoc_insertion_point(field_get:contacts.PeopleInfo.name)
  return _internal_name();
}
inline void PeopleInfo::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:contacts.PeopleInfo.name)
}
inline std::string* PeopleInfo::mutable_name() {
  // @@protoc_insertion_point(field_mutable:contacts.PeopleInfo.name)
  return _internal_mutable_name();
}
inline const std::string& PeopleInfo::_internal_name() const {
  return name_.Get();
}
inline void PeopleInfo::_internal_set_name(const std::string& value) {
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void PeopleInfo::set_name(std::string&& value) {
  
  name_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:contacts.PeopleInfo.name)
}
inline void PeopleInfo::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:contacts.PeopleInfo.name)
}
inline void PeopleInfo::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:contacts.PeopleInfo.name)
}
inline std::string* PeopleInfo::_internal_mutable_name() {
  
  return name_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* PeopleInfo::release_name() {
  // @@protoc_insertion_point(field_release:contacts.PeopleInfo.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void PeopleInfo::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:contacts.PeopleInfo.name)
}
inline std::string* PeopleInfo::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:contacts.PeopleInfo.name)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return name_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void PeopleInfo::unsafe_arena_set_allocated_name(
    std::string* name) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (name != nullptr) {
    
  } else {
    
  }
  name_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      name, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:contacts.PeopleInfo.name)
}

// int32 birthday = 4;
inline void PeopleInfo::clear_birthday() {
  birthday_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PeopleInfo::_internal_birthday() const {
  return birthday_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PeopleInfo::birthday() const {
  // @@protoc_insertion_point(field_get:contacts.PeopleInfo.birthday)
  return _internal_birthday();
}
inline void PeopleInfo::_internal_set_birthday(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  birthday_ = value;
}
inline void PeopleInfo::set_birthday(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_birthday(value);
  // @@protoc_insertion_point(field_set:contacts.PeopleInfo.birthday)
}

// repeated .contacts.PeopleInfo.Phone phone = 3;
inline int PeopleInfo::_internal_phone_size() const {
  return phone_.size();
}
inline int PeopleInfo::phone_size() const {
  return _internal_phone_size();
}
inline void PeopleInfo::clear_phone() {
  phone_.Clear();
}
inline ::contacts::PeopleInfo_Phone* PeopleInfo::mutable_phone(int index) {
  // @@protoc_insertion_point(field_mutable:contacts.PeopleInfo.phone)
  return phone_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::contacts::PeopleInfo_Phone >*
PeopleInfo::mutable_phone() {
  // @@protoc_insertion_point(field_mutable_list:contacts.PeopleInfo.phone)
  return &phone_;
}
inline const ::contacts::PeopleInfo_Phone& PeopleInfo::_internal_phone(int index) const {
  return phone_.Get(index);
}
inline const ::contacts::PeopleInfo_Phone& PeopleInfo::phone(int index) const {
  // @@protoc_insertion_point(field_get:contacts.PeopleInfo.phone)
  return _internal_phone(index);
}
inline ::contacts::PeopleInfo_Phone* PeopleInfo::_internal_add_phone() {
  return phone_.Add();
}
inline ::contacts::PeopleInfo_Phone* PeopleInfo::add_phone() {
  // @@protoc_insertion_point(field_add:contacts.PeopleInfo.phone)
  return _internal_add_phone();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::contacts::PeopleInfo_Phone >&
PeopleInfo::phone() const {
  // @@protoc_insertion_point(field_list:contacts.PeopleInfo.phone)
  return phone_;
}

// -------------------------------------------------------------------

// Contacts

// repeated .contacts.PeopleInfo contacts = 1;
inline int Contacts::_internal_contacts_size() const {
  return contacts_.size();
}
inline int Contacts::contacts_size() const {
  return _internal_contacts_size();
}
inline void Contacts::clear_contacts() {
  contacts_.Clear();
}
inline ::contacts::PeopleInfo* Contacts::mutable_contacts(int index) {
  // @@protoc_insertion_point(field_mutable:contacts.Contacts.contacts)
  return contacts_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::contacts::PeopleInfo >*
Contacts::mutable_contacts() {
  // @@protoc_insertion_point(field_mutable_list:contacts.Contacts.contacts)
  return &contacts_;
}
inline const ::contacts::PeopleInfo& Contacts::_internal_contacts(int index) const {
  return contacts_.Get(index);
}
inline const ::contacts::PeopleInfo& Contacts::contacts(int index) const {
  // @@protoc_insertion_point(field_get:contacts.Contacts.contacts)
  return _internal_contacts(index);
}
inline ::contacts::PeopleInfo* Contacts::_internal_add_contacts() {
  return contacts_.Add();
}
inline ::contacts::PeopleInfo* Contacts::add_contacts() {
  // @@protoc_insertion_point(field_add:contacts.Contacts.contacts)
  return _internal_add_contacts();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::contacts::PeopleInfo >&
Contacts::contacts() const {
  // @@protoc_insertion_point(field_list:contacts.Contacts.contacts)
  return contacts_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace contacts

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_contacts_2eproto
