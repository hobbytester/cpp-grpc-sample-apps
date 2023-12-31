// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: greeter.proto

#include "greeter.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = ::PROTOBUF_NAMESPACE_ID::internal;
namespace Greeter {
template <typename>
PROTOBUF_CONSTEXPR HiRequest::HiRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.target_name_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct HiRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR HiRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~HiRequestDefaultTypeInternal() {}
  union {
    HiRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 HiRequestDefaultTypeInternal _HiRequest_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR HiResponse::HiResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.message_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct HiResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR HiResponseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~HiResponseDefaultTypeInternal() {}
  union {
    HiResponse _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 HiResponseDefaultTypeInternal _HiResponse_default_instance_;
}  // namespace Greeter
static ::_pb::Metadata file_level_metadata_greeter_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_greeter_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_greeter_2eproto = nullptr;
const ::uint32_t TableStruct_greeter_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::Greeter::HiRequest, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::Greeter::HiRequest, _impl_.target_name_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::Greeter::HiResponse, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::Greeter::HiResponse, _impl_.message_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::Greeter::HiRequest)},
        { 9, -1, -1, sizeof(::Greeter::HiResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::Greeter::_HiRequest_default_instance_._instance,
    &::Greeter::_HiResponse_default_instance_._instance,
};
const char descriptor_table_protodef_greeter_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\rgreeter.proto\022\007Greeter\" \n\tHiRequest\022\023\n"
    "\013target_name\030\001 \001(\t\"\035\n\nHiResponse\022\017\n\007mess"
    "age\030\001 \001(\t2}\n\016GreeterService\0222\n\005SayHi\022\022.G"
    "reeter.HiRequest\032\023.Greeter.HiResponse\"\000\022"
    "7\n\nSayHiAgain\022\022.Greeter.HiRequest\032\023.Gree"
    "ter.HiResponse\"\000b\006proto3"
};
static ::absl::once_flag descriptor_table_greeter_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_greeter_2eproto = {
    false,
    false,
    224,
    descriptor_table_protodef_greeter_2eproto,
    "greeter.proto",
    &descriptor_table_greeter_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_greeter_2eproto::offsets,
    file_level_metadata_greeter_2eproto,
    file_level_enum_descriptors_greeter_2eproto,
    file_level_service_descriptors_greeter_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_greeter_2eproto_getter() {
  return &descriptor_table_greeter_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_greeter_2eproto(&descriptor_table_greeter_2eproto);
namespace Greeter {
// ===================================================================

class HiRequest::_Internal {
 public:
};

HiRequest::HiRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:Greeter.HiRequest)
}
HiRequest::HiRequest(const HiRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  HiRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.target_name_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.target_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.target_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_target_name().empty()) {
    _this->_impl_.target_name_.Set(from._internal_target_name(), _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:Greeter.HiRequest)
}

inline void HiRequest::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.target_name_) {}

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.target_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.target_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

HiRequest::~HiRequest() {
  // @@protoc_insertion_point(destructor:Greeter.HiRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void HiRequest::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.target_name_.Destroy();
}

void HiRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void HiRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:Greeter.HiRequest)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.target_name_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* HiRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string target_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_target_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Greeter.HiRequest.target_name"));
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* HiRequest::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Greeter.HiRequest)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string target_name = 1;
  if (!this->_internal_target_name().empty()) {
    const std::string& _s = this->_internal_target_name();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "Greeter.HiRequest.target_name");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Greeter.HiRequest)
  return target;
}

::size_t HiRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Greeter.HiRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string target_name = 1;
  if (!this->_internal_target_name().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_target_name());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData HiRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    HiRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*HiRequest::GetClassData() const { return &_class_data_; }


void HiRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<HiRequest*>(&to_msg);
  auto& from = static_cast<const HiRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Greeter.HiRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_target_name().empty()) {
    _this->_internal_set_target_name(from._internal_target_name());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void HiRequest::CopyFrom(const HiRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Greeter.HiRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HiRequest::IsInitialized() const {
  return true;
}

void HiRequest::InternalSwap(HiRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.target_name_, lhs_arena,
                                       &other->_impl_.target_name_, rhs_arena);
}

::PROTOBUF_NAMESPACE_ID::Metadata HiRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_greeter_2eproto_getter, &descriptor_table_greeter_2eproto_once,
      file_level_metadata_greeter_2eproto[0]);
}
// ===================================================================

class HiResponse::_Internal {
 public:
};

HiResponse::HiResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:Greeter.HiResponse)
}
HiResponse::HiResponse(const HiResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  HiResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.message_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.message_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.message_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_message().empty()) {
    _this->_impl_.message_.Set(from._internal_message(), _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:Greeter.HiResponse)
}

inline void HiResponse::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.message_) {}

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.message_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.message_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

HiResponse::~HiResponse() {
  // @@protoc_insertion_point(destructor:Greeter.HiResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void HiResponse::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.message_.Destroy();
}

void HiResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void HiResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:Greeter.HiResponse)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.message_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* HiResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string message = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_message();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Greeter.HiResponse.message"));
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* HiResponse::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Greeter.HiResponse)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string message = 1;
  if (!this->_internal_message().empty()) {
    const std::string& _s = this->_internal_message();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "Greeter.HiResponse.message");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Greeter.HiResponse)
  return target;
}

::size_t HiResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Greeter.HiResponse)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string message = 1;
  if (!this->_internal_message().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_message());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData HiResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    HiResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*HiResponse::GetClassData() const { return &_class_data_; }


void HiResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<HiResponse*>(&to_msg);
  auto& from = static_cast<const HiResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Greeter.HiResponse)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_message().empty()) {
    _this->_internal_set_message(from._internal_message());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void HiResponse::CopyFrom(const HiResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Greeter.HiResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HiResponse::IsInitialized() const {
  return true;
}

void HiResponse::InternalSwap(HiResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.message_, lhs_arena,
                                       &other->_impl_.message_, rhs_arena);
}

::PROTOBUF_NAMESPACE_ID::Metadata HiResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_greeter_2eproto_getter, &descriptor_table_greeter_2eproto_once,
      file_level_metadata_greeter_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace Greeter
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Greeter::HiRequest*
Arena::CreateMaybeMessage< ::Greeter::HiRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Greeter::HiRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::Greeter::HiResponse*
Arena::CreateMaybeMessage< ::Greeter::HiResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Greeter::HiResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
