// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ccl/baseccl/encryption_options.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ccl/baseccl/encryption_options.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace cockroach {
namespace ccl {
namespace baseccl {
class EncryptionKeyFilesDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<EncryptionKeyFiles>
     _instance;
} _EncryptionKeyFiles_default_instance_;
class EncryptionOptionsDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<EncryptionOptions>
     _instance;
} _EncryptionOptions_default_instance_;

namespace protobuf_ccl_2fbaseccl_2fencryption_5foptions_2eproto {

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _EncryptionKeyFiles_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_EncryptionKeyFiles_default_instance_);_EncryptionOptions_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_EncryptionOptions_default_instance_);_EncryptionOptions_default_instance_._instance.get_mutable()->key_files_ = const_cast< ::cockroach::ccl::baseccl::EncryptionKeyFiles*>(
      ::cockroach::ccl::baseccl::EncryptionKeyFiles::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}

}  // namespace protobuf_ccl_2fbaseccl_2fencryption_5foptions_2eproto

bool EncryptionKeySource_IsValid(int value) {
  switch (value) {
    case 0:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EncryptionKeyFiles::kCurrentKeyFieldNumber;
const int EncryptionKeyFiles::kOldKeyFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EncryptionKeyFiles::EncryptionKeyFiles()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_ccl_2fbaseccl_2fencryption_5foptions_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:cockroach.ccl.baseccl.EncryptionKeyFiles)
}
EncryptionKeyFiles::EncryptionKeyFiles(const EncryptionKeyFiles& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  current_key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.current_key().size() > 0) {
    current_key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.current_key_);
  }
  old_key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.old_key().size() > 0) {
    old_key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.old_key_);
  }
  // @@protoc_insertion_point(copy_constructor:cockroach.ccl.baseccl.EncryptionKeyFiles)
}

void EncryptionKeyFiles::SharedCtor() {
  current_key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  old_key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

EncryptionKeyFiles::~EncryptionKeyFiles() {
  // @@protoc_insertion_point(destructor:cockroach.ccl.baseccl.EncryptionKeyFiles)
  SharedDtor();
}

void EncryptionKeyFiles::SharedDtor() {
  current_key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  old_key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void EncryptionKeyFiles::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const EncryptionKeyFiles& EncryptionKeyFiles::default_instance() {
  protobuf_ccl_2fbaseccl_2fencryption_5foptions_2eproto::InitDefaults();
  return *internal_default_instance();
}

EncryptionKeyFiles* EncryptionKeyFiles::New(::google::protobuf::Arena* arena) const {
  EncryptionKeyFiles* n = new EncryptionKeyFiles;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void EncryptionKeyFiles::Clear() {
// @@protoc_insertion_point(message_clear_start:cockroach.ccl.baseccl.EncryptionKeyFiles)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  current_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  old_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool EncryptionKeyFiles::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:cockroach.ccl.baseccl.EncryptionKeyFiles)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string current_key = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_current_key()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->current_key().data(), static_cast<int>(this->current_key().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "cockroach.ccl.baseccl.EncryptionKeyFiles.current_key"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string old_key = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_old_key()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->old_key().data(), static_cast<int>(this->old_key().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "cockroach.ccl.baseccl.EncryptionKeyFiles.old_key"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cockroach.ccl.baseccl.EncryptionKeyFiles)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cockroach.ccl.baseccl.EncryptionKeyFiles)
  return false;
#undef DO_
}

void EncryptionKeyFiles::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cockroach.ccl.baseccl.EncryptionKeyFiles)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string current_key = 1;
  if (this->current_key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->current_key().data(), static_cast<int>(this->current_key().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "cockroach.ccl.baseccl.EncryptionKeyFiles.current_key");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->current_key(), output);
  }

  // string old_key = 2;
  if (this->old_key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->old_key().data(), static_cast<int>(this->old_key().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "cockroach.ccl.baseccl.EncryptionKeyFiles.old_key");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->old_key(), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:cockroach.ccl.baseccl.EncryptionKeyFiles)
}

size_t EncryptionKeyFiles::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cockroach.ccl.baseccl.EncryptionKeyFiles)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // string current_key = 1;
  if (this->current_key().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->current_key());
  }

  // string old_key = 2;
  if (this->old_key().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->old_key());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EncryptionKeyFiles::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const EncryptionKeyFiles*>(&from));
}

void EncryptionKeyFiles::MergeFrom(const EncryptionKeyFiles& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cockroach.ccl.baseccl.EncryptionKeyFiles)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.current_key().size() > 0) {

    current_key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.current_key_);
  }
  if (from.old_key().size() > 0) {

    old_key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.old_key_);
  }
}

void EncryptionKeyFiles::CopyFrom(const EncryptionKeyFiles& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cockroach.ccl.baseccl.EncryptionKeyFiles)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EncryptionKeyFiles::IsInitialized() const {
  return true;
}

void EncryptionKeyFiles::Swap(EncryptionKeyFiles* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EncryptionKeyFiles::InternalSwap(EncryptionKeyFiles* other) {
  using std::swap;
  current_key_.Swap(&other->current_key_);
  old_key_.Swap(&other->old_key_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string EncryptionKeyFiles::GetTypeName() const {
  return "cockroach.ccl.baseccl.EncryptionKeyFiles";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// EncryptionKeyFiles

// string current_key = 1;
void EncryptionKeyFiles::clear_current_key() {
  current_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& EncryptionKeyFiles::current_key() const {
  // @@protoc_insertion_point(field_get:cockroach.ccl.baseccl.EncryptionKeyFiles.current_key)
  return current_key_.GetNoArena();
}
void EncryptionKeyFiles::set_current_key(const ::std::string& value) {
  
  current_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:cockroach.ccl.baseccl.EncryptionKeyFiles.current_key)
}
#if LANG_CXX11
void EncryptionKeyFiles::set_current_key(::std::string&& value) {
  
  current_key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:cockroach.ccl.baseccl.EncryptionKeyFiles.current_key)
}
#endif
void EncryptionKeyFiles::set_current_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  current_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:cockroach.ccl.baseccl.EncryptionKeyFiles.current_key)
}
void EncryptionKeyFiles::set_current_key(const char* value, size_t size) {
  
  current_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:cockroach.ccl.baseccl.EncryptionKeyFiles.current_key)
}
::std::string* EncryptionKeyFiles::mutable_current_key() {
  
  // @@protoc_insertion_point(field_mutable:cockroach.ccl.baseccl.EncryptionKeyFiles.current_key)
  return current_key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* EncryptionKeyFiles::release_current_key() {
  // @@protoc_insertion_point(field_release:cockroach.ccl.baseccl.EncryptionKeyFiles.current_key)
  
  return current_key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void EncryptionKeyFiles::set_allocated_current_key(::std::string* current_key) {
  if (current_key != NULL) {
    
  } else {
    
  }
  current_key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), current_key);
  // @@protoc_insertion_point(field_set_allocated:cockroach.ccl.baseccl.EncryptionKeyFiles.current_key)
}

// string old_key = 2;
void EncryptionKeyFiles::clear_old_key() {
  old_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& EncryptionKeyFiles::old_key() const {
  // @@protoc_insertion_point(field_get:cockroach.ccl.baseccl.EncryptionKeyFiles.old_key)
  return old_key_.GetNoArena();
}
void EncryptionKeyFiles::set_old_key(const ::std::string& value) {
  
  old_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:cockroach.ccl.baseccl.EncryptionKeyFiles.old_key)
}
#if LANG_CXX11
void EncryptionKeyFiles::set_old_key(::std::string&& value) {
  
  old_key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:cockroach.ccl.baseccl.EncryptionKeyFiles.old_key)
}
#endif
void EncryptionKeyFiles::set_old_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  old_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:cockroach.ccl.baseccl.EncryptionKeyFiles.old_key)
}
void EncryptionKeyFiles::set_old_key(const char* value, size_t size) {
  
  old_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:cockroach.ccl.baseccl.EncryptionKeyFiles.old_key)
}
::std::string* EncryptionKeyFiles::mutable_old_key() {
  
  // @@protoc_insertion_point(field_mutable:cockroach.ccl.baseccl.EncryptionKeyFiles.old_key)
  return old_key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* EncryptionKeyFiles::release_old_key() {
  // @@protoc_insertion_point(field_release:cockroach.ccl.baseccl.EncryptionKeyFiles.old_key)
  
  return old_key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void EncryptionKeyFiles::set_allocated_old_key(::std::string* old_key) {
  if (old_key != NULL) {
    
  } else {
    
  }
  old_key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), old_key);
  // @@protoc_insertion_point(field_set_allocated:cockroach.ccl.baseccl.EncryptionKeyFiles.old_key)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EncryptionOptions::kKeySourceFieldNumber;
const int EncryptionOptions::kKeyFilesFieldNumber;
const int EncryptionOptions::kDataKeyRotationPeriodFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EncryptionOptions::EncryptionOptions()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_ccl_2fbaseccl_2fencryption_5foptions_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:cockroach.ccl.baseccl.EncryptionOptions)
}
EncryptionOptions::EncryptionOptions(const EncryptionOptions& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_key_files()) {
    key_files_ = new ::cockroach::ccl::baseccl::EncryptionKeyFiles(*from.key_files_);
  } else {
    key_files_ = NULL;
  }
  ::memcpy(&data_key_rotation_period_, &from.data_key_rotation_period_,
    static_cast<size_t>(reinterpret_cast<char*>(&key_source_) -
    reinterpret_cast<char*>(&data_key_rotation_period_)) + sizeof(key_source_));
  // @@protoc_insertion_point(copy_constructor:cockroach.ccl.baseccl.EncryptionOptions)
}

void EncryptionOptions::SharedCtor() {
  ::memset(&key_files_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&key_source_) -
      reinterpret_cast<char*>(&key_files_)) + sizeof(key_source_));
  _cached_size_ = 0;
}

EncryptionOptions::~EncryptionOptions() {
  // @@protoc_insertion_point(destructor:cockroach.ccl.baseccl.EncryptionOptions)
  SharedDtor();
}

void EncryptionOptions::SharedDtor() {
  if (this != internal_default_instance()) delete key_files_;
}

void EncryptionOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const EncryptionOptions& EncryptionOptions::default_instance() {
  protobuf_ccl_2fbaseccl_2fencryption_5foptions_2eproto::InitDefaults();
  return *internal_default_instance();
}

EncryptionOptions* EncryptionOptions::New(::google::protobuf::Arena* arena) const {
  EncryptionOptions* n = new EncryptionOptions;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void EncryptionOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:cockroach.ccl.baseccl.EncryptionOptions)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && key_files_ != NULL) {
    delete key_files_;
  }
  key_files_ = NULL;
  ::memset(&data_key_rotation_period_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&key_source_) -
      reinterpret_cast<char*>(&data_key_rotation_period_)) + sizeof(key_source_));
  _internal_metadata_.Clear();
}

bool EncryptionOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:cockroach.ccl.baseccl.EncryptionOptions)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .cockroach.ccl.baseccl.EncryptionKeySource key_source = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_key_source(static_cast< ::cockroach::ccl::baseccl::EncryptionKeySource >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .cockroach.ccl.baseccl.EncryptionKeyFiles key_files = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_key_files()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 data_key_rotation_period = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &data_key_rotation_period_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cockroach.ccl.baseccl.EncryptionOptions)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cockroach.ccl.baseccl.EncryptionOptions)
  return false;
#undef DO_
}

void EncryptionOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cockroach.ccl.baseccl.EncryptionOptions)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .cockroach.ccl.baseccl.EncryptionKeySource key_source = 1;
  if (this->key_source() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->key_source(), output);
  }

  // .cockroach.ccl.baseccl.EncryptionKeyFiles key_files = 2;
  if (this->has_key_files()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, *this->key_files_, output);
  }

  // int64 data_key_rotation_period = 3;
  if (this->data_key_rotation_period() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->data_key_rotation_period(), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:cockroach.ccl.baseccl.EncryptionOptions)
}

size_t EncryptionOptions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cockroach.ccl.baseccl.EncryptionOptions)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // .cockroach.ccl.baseccl.EncryptionKeyFiles key_files = 2;
  if (this->has_key_files()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->key_files_);
  }

  // int64 data_key_rotation_period = 3;
  if (this->data_key_rotation_period() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->data_key_rotation_period());
  }

  // .cockroach.ccl.baseccl.EncryptionKeySource key_source = 1;
  if (this->key_source() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->key_source());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EncryptionOptions::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const EncryptionOptions*>(&from));
}

void EncryptionOptions::MergeFrom(const EncryptionOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cockroach.ccl.baseccl.EncryptionOptions)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_key_files()) {
    mutable_key_files()->::cockroach::ccl::baseccl::EncryptionKeyFiles::MergeFrom(from.key_files());
  }
  if (from.data_key_rotation_period() != 0) {
    set_data_key_rotation_period(from.data_key_rotation_period());
  }
  if (from.key_source() != 0) {
    set_key_source(from.key_source());
  }
}

void EncryptionOptions::CopyFrom(const EncryptionOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cockroach.ccl.baseccl.EncryptionOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EncryptionOptions::IsInitialized() const {
  return true;
}

void EncryptionOptions::Swap(EncryptionOptions* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EncryptionOptions::InternalSwap(EncryptionOptions* other) {
  using std::swap;
  swap(key_files_, other->key_files_);
  swap(data_key_rotation_period_, other->data_key_rotation_period_);
  swap(key_source_, other->key_source_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string EncryptionOptions::GetTypeName() const {
  return "cockroach.ccl.baseccl.EncryptionOptions";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// EncryptionOptions

// .cockroach.ccl.baseccl.EncryptionKeySource key_source = 1;
void EncryptionOptions::clear_key_source() {
  key_source_ = 0;
}
::cockroach::ccl::baseccl::EncryptionKeySource EncryptionOptions::key_source() const {
  // @@protoc_insertion_point(field_get:cockroach.ccl.baseccl.EncryptionOptions.key_source)
  return static_cast< ::cockroach::ccl::baseccl::EncryptionKeySource >(key_source_);
}
void EncryptionOptions::set_key_source(::cockroach::ccl::baseccl::EncryptionKeySource value) {
  
  key_source_ = value;
  // @@protoc_insertion_point(field_set:cockroach.ccl.baseccl.EncryptionOptions.key_source)
}

// .cockroach.ccl.baseccl.EncryptionKeyFiles key_files = 2;
bool EncryptionOptions::has_key_files() const {
  return this != internal_default_instance() && key_files_ != NULL;
}
void EncryptionOptions::clear_key_files() {
  if (GetArenaNoVirtual() == NULL && key_files_ != NULL) delete key_files_;
  key_files_ = NULL;
}
const ::cockroach::ccl::baseccl::EncryptionKeyFiles& EncryptionOptions::key_files() const {
  const ::cockroach::ccl::baseccl::EncryptionKeyFiles* p = key_files_;
  // @@protoc_insertion_point(field_get:cockroach.ccl.baseccl.EncryptionOptions.key_files)
  return p != NULL ? *p : *reinterpret_cast<const ::cockroach::ccl::baseccl::EncryptionKeyFiles*>(
      &::cockroach::ccl::baseccl::_EncryptionKeyFiles_default_instance_);
}
::cockroach::ccl::baseccl::EncryptionKeyFiles* EncryptionOptions::mutable_key_files() {
  
  if (key_files_ == NULL) {
    key_files_ = new ::cockroach::ccl::baseccl::EncryptionKeyFiles;
  }
  // @@protoc_insertion_point(field_mutable:cockroach.ccl.baseccl.EncryptionOptions.key_files)
  return key_files_;
}
::cockroach::ccl::baseccl::EncryptionKeyFiles* EncryptionOptions::release_key_files() {
  // @@protoc_insertion_point(field_release:cockroach.ccl.baseccl.EncryptionOptions.key_files)
  
  ::cockroach::ccl::baseccl::EncryptionKeyFiles* temp = key_files_;
  key_files_ = NULL;
  return temp;
}
void EncryptionOptions::set_allocated_key_files(::cockroach::ccl::baseccl::EncryptionKeyFiles* key_files) {
  delete key_files_;
  key_files_ = key_files;
  if (key_files) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cockroach.ccl.baseccl.EncryptionOptions.key_files)
}

// int64 data_key_rotation_period = 3;
void EncryptionOptions::clear_data_key_rotation_period() {
  data_key_rotation_period_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 EncryptionOptions::data_key_rotation_period() const {
  // @@protoc_insertion_point(field_get:cockroach.ccl.baseccl.EncryptionOptions.data_key_rotation_period)
  return data_key_rotation_period_;
}
void EncryptionOptions::set_data_key_rotation_period(::google::protobuf::int64 value) {
  
  data_key_rotation_period_ = value;
  // @@protoc_insertion_point(field_set:cockroach.ccl.baseccl.EncryptionOptions.data_key_rotation_period)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace baseccl
}  // namespace ccl
}  // namespace cockroach

// @@protoc_insertion_point(global_scope)
