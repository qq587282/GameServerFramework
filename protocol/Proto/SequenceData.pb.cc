// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protocol/Proto/SequenceData.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "protocol/Proto/SequenceData.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace protocol {
namespace serialize {

namespace {

const ::google::protobuf::Descriptor* UserSequenceData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UserSequenceData_reflection_ = NULL;
const ::google::protobuf::Descriptor* UserSequenceData_SequenceValue_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UserSequenceData_SequenceValue_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_protocol_2fProto_2fSequenceData_2eproto() {
  protobuf_AddDesc_protocol_2fProto_2fSequenceData_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "protocol/Proto/SequenceData.proto");
  GOOGLE_CHECK(file != NULL);
  UserSequenceData_descriptor_ = file->message_type(0);
  static const int UserSequenceData_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserSequenceData, data_),
  };
  UserSequenceData_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      UserSequenceData_descriptor_,
      UserSequenceData::default_instance_,
      UserSequenceData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserSequenceData, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserSequenceData, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(UserSequenceData));
  UserSequenceData_SequenceValue_descriptor_ = UserSequenceData_descriptor_->nested_type(0);
  static const int UserSequenceData_SequenceValue_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserSequenceData_SequenceValue, charid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserSequenceData_SequenceValue, seqdata_),
  };
  UserSequenceData_SequenceValue_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      UserSequenceData_SequenceValue_descriptor_,
      UserSequenceData_SequenceValue::default_instance_,
      UserSequenceData_SequenceValue_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserSequenceData_SequenceValue, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserSequenceData_SequenceValue, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(UserSequenceData_SequenceValue));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_protocol_2fProto_2fSequenceData_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    UserSequenceData_descriptor_, &UserSequenceData::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    UserSequenceData_SequenceValue_descriptor_, &UserSequenceData_SequenceValue::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_protocol_2fProto_2fSequenceData_2eproto() {
  delete UserSequenceData::default_instance_;
  delete UserSequenceData_reflection_;
  delete UserSequenceData_SequenceValue::default_instance_;
  delete UserSequenceData_SequenceValue_reflection_;
}

void protobuf_AddDesc_protocol_2fProto_2fSequenceData_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n!protocol/Proto/SequenceData.proto\022\022pro"
    "tocol.serialize\"\206\001\n\020UserSequenceData\022@\n\004"
    "data\030\001 \003(\01322.protocol.serialize.UserSequ"
    "enceData.SequenceValue\0320\n\rSequenceValue\022"
    "\016\n\006charID\030\001 \002(\r\022\017\n\007seqData\030\002 \001(\r", 192);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "protocol/Proto/SequenceData.proto", &protobuf_RegisterTypes);
  UserSequenceData::default_instance_ = new UserSequenceData();
  UserSequenceData_SequenceValue::default_instance_ = new UserSequenceData_SequenceValue();
  UserSequenceData::default_instance_->InitAsDefaultInstance();
  UserSequenceData_SequenceValue::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_protocol_2fProto_2fSequenceData_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_protocol_2fProto_2fSequenceData_2eproto {
  StaticDescriptorInitializer_protocol_2fProto_2fSequenceData_2eproto() {
    protobuf_AddDesc_protocol_2fProto_2fSequenceData_2eproto();
  }
} static_descriptor_initializer_protocol_2fProto_2fSequenceData_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int UserSequenceData_SequenceValue::kCharIDFieldNumber;
const int UserSequenceData_SequenceValue::kSeqDataFieldNumber;
#endif  // !_MSC_VER

UserSequenceData_SequenceValue::UserSequenceData_SequenceValue()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void UserSequenceData_SequenceValue::InitAsDefaultInstance() {
}

UserSequenceData_SequenceValue::UserSequenceData_SequenceValue(const UserSequenceData_SequenceValue& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void UserSequenceData_SequenceValue::SharedCtor() {
  _cached_size_ = 0;
  charid_ = 0u;
  seqdata_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UserSequenceData_SequenceValue::~UserSequenceData_SequenceValue() {
  SharedDtor();
}

void UserSequenceData_SequenceValue::SharedDtor() {
  if (this != default_instance_) {
  }
}

void UserSequenceData_SequenceValue::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UserSequenceData_SequenceValue::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserSequenceData_SequenceValue_descriptor_;
}

const UserSequenceData_SequenceValue& UserSequenceData_SequenceValue::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_protocol_2fProto_2fSequenceData_2eproto();
  return *default_instance_;
}

UserSequenceData_SequenceValue* UserSequenceData_SequenceValue::default_instance_ = NULL;

UserSequenceData_SequenceValue* UserSequenceData_SequenceValue::New() const {
  return new UserSequenceData_SequenceValue;
}

void UserSequenceData_SequenceValue::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    charid_ = 0u;
    seqdata_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool UserSequenceData_SequenceValue::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 charID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &charid_)));
          set_has_charid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_seqData;
        break;
      }

      // optional uint32 seqData = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_seqData:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &seqdata_)));
          set_has_seqdata();
        } else {
          goto handle_uninterpreted;
        }
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

void UserSequenceData_SequenceValue::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 charID = 1;
  if (has_charid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->charid(), output);
  }

  // optional uint32 seqData = 2;
  if (has_seqdata()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->seqdata(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* UserSequenceData_SequenceValue::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 charID = 1;
  if (has_charid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->charid(), target);
  }

  // optional uint32 seqData = 2;
  if (has_seqdata()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->seqdata(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int UserSequenceData_SequenceValue::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 charID = 1;
    if (has_charid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->charid());
    }

    // optional uint32 seqData = 2;
    if (has_seqdata()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->seqdata());
    }

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

void UserSequenceData_SequenceValue::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const UserSequenceData_SequenceValue* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const UserSequenceData_SequenceValue*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void UserSequenceData_SequenceValue::MergeFrom(const UserSequenceData_SequenceValue& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_charid()) {
      set_charid(from.charid());
    }
    if (from.has_seqdata()) {
      set_seqdata(from.seqdata());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void UserSequenceData_SequenceValue::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserSequenceData_SequenceValue::CopyFrom(const UserSequenceData_SequenceValue& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserSequenceData_SequenceValue::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void UserSequenceData_SequenceValue::Swap(UserSequenceData_SequenceValue* other) {
  if (other != this) {
    std::swap(charid_, other->charid_);
    std::swap(seqdata_, other->seqdata_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata UserSequenceData_SequenceValue::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UserSequenceData_SequenceValue_descriptor_;
  metadata.reflection = UserSequenceData_SequenceValue_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int UserSequenceData::kDataFieldNumber;
#endif  // !_MSC_VER

UserSequenceData::UserSequenceData()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void UserSequenceData::InitAsDefaultInstance() {
}

UserSequenceData::UserSequenceData(const UserSequenceData& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void UserSequenceData::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UserSequenceData::~UserSequenceData() {
  SharedDtor();
}

void UserSequenceData::SharedDtor() {
  if (this != default_instance_) {
  }
}

void UserSequenceData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UserSequenceData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserSequenceData_descriptor_;
}

const UserSequenceData& UserSequenceData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_protocol_2fProto_2fSequenceData_2eproto();
  return *default_instance_;
}

UserSequenceData* UserSequenceData::default_instance_ = NULL;

UserSequenceData* UserSequenceData::New() const {
  return new UserSequenceData;
}

void UserSequenceData::Clear() {
  data_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool UserSequenceData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .protocol.serialize.UserSequenceData.SequenceValue data = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_data()));
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

void UserSequenceData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .protocol.serialize.UserSequenceData.SequenceValue data = 1;
  for (int i = 0; i < this->data_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->data(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* UserSequenceData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .protocol.serialize.UserSequenceData.SequenceValue data = 1;
  for (int i = 0; i < this->data_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->data(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int UserSequenceData::ByteSize() const {
  int total_size = 0;

  // repeated .protocol.serialize.UserSequenceData.SequenceValue data = 1;
  total_size += 1 * this->data_size();
  for (int i = 0; i < this->data_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
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

void UserSequenceData::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const UserSequenceData* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const UserSequenceData*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void UserSequenceData::MergeFrom(const UserSequenceData& from) {
  GOOGLE_CHECK_NE(&from, this);
  data_.MergeFrom(from.data_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void UserSequenceData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserSequenceData::CopyFrom(const UserSequenceData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserSequenceData::IsInitialized() const {

  for (int i = 0; i < data_size(); i++) {
    if (!this->data(i).IsInitialized()) return false;
  }
  return true;
}

void UserSequenceData::Swap(UserSequenceData* other) {
  if (other != this) {
    data_.Swap(&other->data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata UserSequenceData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UserSequenceData_descriptor_;
  metadata.reflection = UserSequenceData_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace serialize
}  // namespace protocol

// @@protoc_insertion_point(global_scope)
