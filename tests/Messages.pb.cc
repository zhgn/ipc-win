// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Messages.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* request_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  request_reflection_ = NULL;
const ::google::protobuf::Descriptor* response_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  response_reflection_ = NULL;
const ::google::protobuf::Descriptor* batch_request_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  batch_request_reflection_ = NULL;
const ::google::protobuf::Descriptor* batch_response_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  batch_response_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Messages_2eproto() {
  protobuf_AddDesc_Messages_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Messages.proto");
  GOOGLE_CHECK(file != NULL);
  request_descriptor_ = file->message_type(0);
  static const int request_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request, ids_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request, types_),
  };
  request_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      request_descriptor_,
      request::default_instance_,
      request_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(request));
  response_descriptor_ = file->message_type(1);
  static const int response_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(response, data_),
  };
  response_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      response_descriptor_,
      response::default_instance_,
      response_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(response, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(response, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(response));
  batch_request_descriptor_ = file->message_type(2);
  static const int batch_request_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(batch_request, requests_),
  };
  batch_request_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      batch_request_descriptor_,
      batch_request::default_instance_,
      batch_request_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(batch_request, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(batch_request, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(batch_request));
  batch_response_descriptor_ = file->message_type(3);
  static const int batch_response_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(batch_response, responses_),
  };
  batch_response_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      batch_response_descriptor_,
      batch_response::default_instance_,
      batch_response_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(batch_response, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(batch_response, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(batch_response));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Messages_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    request_descriptor_, &request::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    response_descriptor_, &response::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    batch_request_descriptor_, &batch_request::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    batch_response_descriptor_, &batch_response::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Messages_2eproto() {
  delete request::default_instance_;
  delete request_reflection_;
  delete response::default_instance_;
  delete response_reflection_;
  delete batch_request::default_instance_;
  delete batch_request_reflection_;
  delete batch_response::default_instance_;
  delete batch_response_reflection_;
}

void protobuf_AddDesc_Messages_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016Messages.proto\"3\n\007request\022\014\n\004name\030\001 \002("
    "\t\022\013\n\003ids\030\002 \003(\t\022\r\n\005types\030\003 \003(\t\"\030\n\010respons"
    "e\022\014\n\004data\030\001 \003(\t\"+\n\rbatch_request\022\032\n\010requ"
    "ests\030\001 \003(\0132\010.request\".\n\016batch_response\022\034"
    "\n\tresponses\030\001 \003(\0132\t.response", 188);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Messages.proto", &protobuf_RegisterTypes);
  request::default_instance_ = new request();
  response::default_instance_ = new response();
  batch_request::default_instance_ = new batch_request();
  batch_response::default_instance_ = new batch_response();
  request::default_instance_->InitAsDefaultInstance();
  response::default_instance_->InitAsDefaultInstance();
  batch_request::default_instance_->InitAsDefaultInstance();
  batch_response::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Messages_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Messages_2eproto {
  StaticDescriptorInitializer_Messages_2eproto() {
    protobuf_AddDesc_Messages_2eproto();
  }
} static_descriptor_initializer_Messages_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int request::kNameFieldNumber;
const int request::kIdsFieldNumber;
const int request::kTypesFieldNumber;
#endif  // !_MSC_VER

request::request()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void request::InitAsDefaultInstance() {
}

request::request(const request& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void request::SharedCtor() {
  _cached_size_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

request::~request() {
  SharedDtor();
}

void request::SharedDtor() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (this != default_instance_) {
  }
}

void request::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* request::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return request_descriptor_;
}

const request& request::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Messages_2eproto();  return *default_instance_;
}

request* request::default_instance_ = NULL;

request* request::New() const {
  return new request;
}

void request::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
  }
  ids_.Clear();
  types_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool request::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string name = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_ids;
        break;
      }
      
      // repeated string ids = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_ids:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_ids()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->ids(0).data(), this->ids(0).length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_ids;
        if (input->ExpectTag(26)) goto parse_types;
        break;
      }
      
      // repeated string types = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_types:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_types()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->types(0).data(), this->types(0).length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_types;
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void request::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->name(), output);
  }
  
  // repeated string ids = 2;
  for (int i = 0; i < this->ids_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8String(
    this->ids(i).data(), this->ids(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->ids(i), output);
  }
  
  // repeated string types = 3;
  for (int i = 0; i < this->types_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8String(
    this->types(i).data(), this->types(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->types(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* request::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }
  
  // repeated string ids = 2;
  for (int i = 0; i < this->ids_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->ids(i).data(), this->ids(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->ids(i), target);
  }
  
  // repeated string types = 3;
  for (int i = 0; i < this->types_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->types(i).data(), this->types(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(3, this->types(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int request::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }
    
  }
  // repeated string ids = 2;
  total_size += 1 * this->ids_size();
  for (int i = 0; i < this->ids_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->ids(i));
  }
  
  // repeated string types = 3;
  total_size += 1 * this->types_size();
  for (int i = 0; i < this->types_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->types(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void request::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const request* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const request*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void request::MergeFrom(const request& from) {
  GOOGLE_CHECK_NE(&from, this);
  ids_.MergeFrom(from.ids_);
  types_.MergeFrom(from.types_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_name(from.name());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void request::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void request::CopyFrom(const request& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool request::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void request::Swap(request* other) {
  if (other != this) {
    std::swap(name_, other->name_);
    ids_.Swap(&other->ids_);
    types_.Swap(&other->types_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata request::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = request_descriptor_;
  metadata.reflection = request_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int response::kDataFieldNumber;
#endif  // !_MSC_VER

response::response()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void response::InitAsDefaultInstance() {
}

response::response(const response& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void response::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

response::~response() {
  SharedDtor();
}

void response::SharedDtor() {
  if (this != default_instance_) {
  }
}

void response::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* response::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return response_descriptor_;
}

const response& response::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Messages_2eproto();  return *default_instance_;
}

response* response::default_instance_ = NULL;

response* response::New() const {
  return new response;
}

void response::Clear() {
  data_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool response::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string data = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_data()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->data(0).data(), this->data(0).length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_data;
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void response::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated string data = 1;
  for (int i = 0; i < this->data_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8String(
    this->data(i).data(), this->data(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->data(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* response::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated string data = 1;
  for (int i = 0; i < this->data_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->data(i).data(), this->data(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->data(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int response::ByteSize() const {
  int total_size = 0;
  
  // repeated string data = 1;
  total_size += 1 * this->data_size();
  for (int i = 0; i < this->data_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->data(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void response::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const response* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const response*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void response::MergeFrom(const response& from) {
  GOOGLE_CHECK_NE(&from, this);
  data_.MergeFrom(from.data_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void response::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void response::CopyFrom(const response& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool response::IsInitialized() const {
  
  return true;
}

void response::Swap(response* other) {
  if (other != this) {
    data_.Swap(&other->data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata response::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = response_descriptor_;
  metadata.reflection = response_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int batch_request::kRequestsFieldNumber;
#endif  // !_MSC_VER

batch_request::batch_request()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void batch_request::InitAsDefaultInstance() {
}

batch_request::batch_request(const batch_request& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void batch_request::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

batch_request::~batch_request() {
  SharedDtor();
}

void batch_request::SharedDtor() {
  if (this != default_instance_) {
  }
}

void batch_request::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* batch_request::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return batch_request_descriptor_;
}

const batch_request& batch_request::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Messages_2eproto();  return *default_instance_;
}

batch_request* batch_request::default_instance_ = NULL;

batch_request* batch_request::New() const {
  return new batch_request;
}

void batch_request::Clear() {
  requests_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool batch_request::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .request requests = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_requests:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_requests()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_requests;
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void batch_request::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .request requests = 1;
  for (int i = 0; i < this->requests_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->requests(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* batch_request::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .request requests = 1;
  for (int i = 0; i < this->requests_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->requests(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int batch_request::ByteSize() const {
  int total_size = 0;
  
  // repeated .request requests = 1;
  total_size += 1 * this->requests_size();
  for (int i = 0; i < this->requests_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->requests(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void batch_request::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const batch_request* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const batch_request*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void batch_request::MergeFrom(const batch_request& from) {
  GOOGLE_CHECK_NE(&from, this);
  requests_.MergeFrom(from.requests_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void batch_request::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void batch_request::CopyFrom(const batch_request& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool batch_request::IsInitialized() const {
  
  for (int i = 0; i < requests_size(); i++) {
    if (!this->requests(i).IsInitialized()) return false;
  }
  return true;
}

void batch_request::Swap(batch_request* other) {
  if (other != this) {
    requests_.Swap(&other->requests_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata batch_request::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = batch_request_descriptor_;
  metadata.reflection = batch_request_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int batch_response::kResponsesFieldNumber;
#endif  // !_MSC_VER

batch_response::batch_response()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void batch_response::InitAsDefaultInstance() {
}

batch_response::batch_response(const batch_response& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void batch_response::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

batch_response::~batch_response() {
  SharedDtor();
}

void batch_response::SharedDtor() {
  if (this != default_instance_) {
  }
}

void batch_response::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* batch_response::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return batch_response_descriptor_;
}

const batch_response& batch_response::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Messages_2eproto();  return *default_instance_;
}

batch_response* batch_response::default_instance_ = NULL;

batch_response* batch_response::New() const {
  return new batch_response;
}

void batch_response::Clear() {
  responses_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool batch_response::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .response responses = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_responses:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_responses()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_responses;
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void batch_response::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .response responses = 1;
  for (int i = 0; i < this->responses_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->responses(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* batch_response::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .response responses = 1;
  for (int i = 0; i < this->responses_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->responses(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int batch_response::ByteSize() const {
  int total_size = 0;
  
  // repeated .response responses = 1;
  total_size += 1 * this->responses_size();
  for (int i = 0; i < this->responses_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->responses(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void batch_response::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const batch_response* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const batch_response*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void batch_response::MergeFrom(const batch_response& from) {
  GOOGLE_CHECK_NE(&from, this);
  responses_.MergeFrom(from.responses_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void batch_response::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void batch_response::CopyFrom(const batch_response& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool batch_response::IsInitialized() const {
  
  return true;
}

void batch_response::Swap(batch_response* other) {
  if (other != this) {
    responses_.Swap(&other->responses_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata batch_response::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = batch_response_descriptor_;
  metadata.reflection = batch_response_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
