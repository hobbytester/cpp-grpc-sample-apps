// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sample.proto

#include "sample.pb.h"

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
namespace sample {
template <typename>
PROTOBUF_CONSTEXPR SampleRequest::SampleRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.request_sample_field_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SampleRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SampleRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~SampleRequestDefaultTypeInternal() {}
  union {
    SampleRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SampleRequestDefaultTypeInternal _SampleRequest_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR SampleResponse::SampleResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.response_sample_field_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SampleResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SampleResponseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~SampleResponseDefaultTypeInternal() {}
  union {
    SampleResponse _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SampleResponseDefaultTypeInternal _SampleResponse_default_instance_;
}  // namespace sample
static ::_pb::Metadata file_level_metadata_sample_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_sample_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_sample_2eproto = nullptr;
const ::uint32_t TableStruct_sample_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::sample::SampleRequest, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::sample::SampleRequest, _impl_.request_sample_field_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::sample::SampleResponse, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::sample::SampleResponse, _impl_.response_sample_field_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::sample::SampleRequest)},
        { 9, -1, -1, sizeof(::sample::SampleResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::sample::_SampleRequest_default_instance_._instance,
    &::sample::_SampleResponse_default_instance_._instance,
};
const char descriptor_table_protodef_sample_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\014sample.proto\022\006sample\"-\n\rSampleRequest\022"
    "\034\n\024request_sample_field\030\001 \001(\t\"/\n\016SampleR"
    "esponse\022\035\n\025response_sample_field\030\001 \001(\t2P"
    "\n\rSampleService\022\?\n\014SampleMethod\022\025.sample"
    ".SampleRequest\032\026.sample.SampleResponse\"\000"
    "b\006proto3"
};
static ::absl::once_flag descriptor_table_sample_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_sample_2eproto = {
    false,
    false,
    208,
    descriptor_table_protodef_sample_2eproto,
    "sample.proto",
    &descriptor_table_sample_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_sample_2eproto::offsets,
    file_level_metadata_sample_2eproto,
    file_level_enum_descriptors_sample_2eproto,
    file_level_service_descriptors_sample_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_sample_2eproto_getter() {
  return &descriptor_table_sample_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_sample_2eproto(&descriptor_table_sample_2eproto);
namespace sample {
// ===================================================================

class SampleRequest::_Internal {
 public:
};

SampleRequest::SampleRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:sample.SampleRequest)
}
SampleRequest::SampleRequest(const SampleRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SampleRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.request_sample_field_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.request_sample_field_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.request_sample_field_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_request_sample_field().empty()) {
    _this->_impl_.request_sample_field_.Set(from._internal_request_sample_field(), _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:sample.SampleRequest)
}

inline void SampleRequest::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.request_sample_field_) {}

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.request_sample_field_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.request_sample_field_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SampleRequest::~SampleRequest() {
  // @@protoc_insertion_point(destructor:sample.SampleRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SampleRequest::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.request_sample_field_.Destroy();
}

void SampleRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SampleRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:sample.SampleRequest)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.request_sample_field_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SampleRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string request_sample_field = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_request_sample_field();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "sample.SampleRequest.request_sample_field"));
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

::uint8_t* SampleRequest::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:sample.SampleRequest)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string request_sample_field = 1;
  if (!this->_internal_request_sample_field().empty()) {
    const std::string& _s = this->_internal_request_sample_field();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "sample.SampleRequest.request_sample_field");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sample.SampleRequest)
  return target;
}

::size_t SampleRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sample.SampleRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string request_sample_field = 1;
  if (!this->_internal_request_sample_field().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_request_sample_field());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SampleRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SampleRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SampleRequest::GetClassData() const { return &_class_data_; }


void SampleRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SampleRequest*>(&to_msg);
  auto& from = static_cast<const SampleRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:sample.SampleRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_request_sample_field().empty()) {
    _this->_internal_set_request_sample_field(from._internal_request_sample_field());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SampleRequest::CopyFrom(const SampleRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sample.SampleRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SampleRequest::IsInitialized() const {
  return true;
}

void SampleRequest::InternalSwap(SampleRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.request_sample_field_, lhs_arena,
                                       &other->_impl_.request_sample_field_, rhs_arena);
}

::PROTOBUF_NAMESPACE_ID::Metadata SampleRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_sample_2eproto_getter, &descriptor_table_sample_2eproto_once,
      file_level_metadata_sample_2eproto[0]);
}
// ===================================================================

class SampleResponse::_Internal {
 public:
};

SampleResponse::SampleResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:sample.SampleResponse)
}
SampleResponse::SampleResponse(const SampleResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SampleResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.response_sample_field_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.response_sample_field_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.response_sample_field_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_response_sample_field().empty()) {
    _this->_impl_.response_sample_field_.Set(from._internal_response_sample_field(), _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:sample.SampleResponse)
}

inline void SampleResponse::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.response_sample_field_) {}

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.response_sample_field_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.response_sample_field_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SampleResponse::~SampleResponse() {
  // @@protoc_insertion_point(destructor:sample.SampleResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SampleResponse::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.response_sample_field_.Destroy();
}

void SampleResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SampleResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:sample.SampleResponse)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.response_sample_field_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SampleResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string response_sample_field = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_response_sample_field();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "sample.SampleResponse.response_sample_field"));
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

::uint8_t* SampleResponse::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:sample.SampleResponse)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string response_sample_field = 1;
  if (!this->_internal_response_sample_field().empty()) {
    const std::string& _s = this->_internal_response_sample_field();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "sample.SampleResponse.response_sample_field");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sample.SampleResponse)
  return target;
}

::size_t SampleResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sample.SampleResponse)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string response_sample_field = 1;
  if (!this->_internal_response_sample_field().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_response_sample_field());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SampleResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SampleResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SampleResponse::GetClassData() const { return &_class_data_; }


void SampleResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SampleResponse*>(&to_msg);
  auto& from = static_cast<const SampleResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:sample.SampleResponse)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_response_sample_field().empty()) {
    _this->_internal_set_response_sample_field(from._internal_response_sample_field());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SampleResponse::CopyFrom(const SampleResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sample.SampleResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SampleResponse::IsInitialized() const {
  return true;
}

void SampleResponse::InternalSwap(SampleResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.response_sample_field_, lhs_arena,
                                       &other->_impl_.response_sample_field_, rhs_arena);
}

::PROTOBUF_NAMESPACE_ID::Metadata SampleResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_sample_2eproto_getter, &descriptor_table_sample_2eproto_once,
      file_level_metadata_sample_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace sample
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::sample::SampleRequest*
Arena::CreateMaybeMessage< ::sample::SampleRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::sample::SampleRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::sample::SampleResponse*
Arena::CreateMaybeMessage< ::sample::SampleResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::sample::SampleResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
