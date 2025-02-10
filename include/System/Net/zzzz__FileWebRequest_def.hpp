#pragma once
// IWYU pragma private; include "System/Net/FileWebRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__FileAccess_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileWebRequest)
namespace System::IO {
class Stream;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Net {
class LazyAsyncResult;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Net {
class WebResponse;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
class WaitCallback;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class FileWebRequest;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::FileWebRequest);
// Dependencies System.IO.FileAccess, System.Net.WebRequest, System.Runtime.Serialization.ISerializable
namespace System::Net {
// Is value type: false
// CS Name: System.Net.FileWebRequest
class CORDL_TYPE FileWebRequest : public ::System::Net::WebRequest {
public:
// Declarations
 __declspec(property(get=get_Aborted)) bool  Aborted;

 __declspec(property(get=get_ContentLength, put=set_ContentLength)) int64_t  ContentLength;

 __declspec(property(put=set_ContentType)) ::StringW  ContentType;

 __declspec(property(get=get_Credentials, put=set_Credentials)) ::System::Net::ICredentials*  Credentials;

 __declspec(property(get=get_Headers)) ::System::Net::WebHeaderCollection*  Headers;

 __declspec(property(get=get_Method, put=set_Method)) ::StringW  Method;

 __declspec(property(get=get_Proxy, put=set_Proxy)) ::System::Net::IWebProxy*  Proxy;

 __declspec(property(get=get_RequestUri)) ::System::Uri*  RequestUri;

 __declspec(property(get=get_Timeout)) int32_t  Timeout;

 __declspec(property(get=get_UseDefaultCredentials)) bool  UseDefaultCredentials;

/// @brief Field m_Aborted, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Aborted, put=__cordl_internal_set_m_Aborted)) int32_t  m_Aborted;

/// @brief Field m_ReadAResult, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ReadAResult, put=__cordl_internal_set_m_ReadAResult)) ::System::Net::LazyAsyncResult*  m_ReadAResult;

/// @brief Field m_WriteAResult, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_WriteAResult, put=__cordl_internal_set_m_WriteAResult)) ::System::Net::LazyAsyncResult*  m_WriteAResult;

/// @brief Field m_connectionGroupName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_connectionGroupName, put=__cordl_internal_set_m_connectionGroupName)) ::StringW  m_connectionGroupName;

/// @brief Field m_contentLength, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_contentLength, put=__cordl_internal_set_m_contentLength)) int64_t  m_contentLength;

/// @brief Field m_credentials, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_credentials, put=__cordl_internal_set_m_credentials)) ::System::Net::ICredentials*  m_credentials;

/// @brief Field m_fileAccess, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_fileAccess, put=__cordl_internal_set_m_fileAccess)) ::System::IO::FileAccess  m_fileAccess;

/// @brief Field m_headers, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_headers, put=__cordl_internal_set_m_headers)) ::System::Net::WebHeaderCollection*  m_headers;

/// @brief Field m_method, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_method, put=__cordl_internal_set_m_method)) ::StringW  m_method;

/// @brief Field m_proxy, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_proxy, put=__cordl_internal_set_m_proxy)) ::System::Net::IWebProxy*  m_proxy;

/// @brief Field m_readPending, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_readPending, put=__cordl_internal_set_m_readPending)) bool  m_readPending;

/// @brief Field m_readerEvent, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_readerEvent, put=__cordl_internal_set_m_readerEvent)) ::System::Threading::ManualResetEvent*  m_readerEvent;

/// @brief Field m_response, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_response, put=__cordl_internal_set_m_response)) ::System::Net::WebResponse*  m_response;

/// @brief Field m_stream, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_stream, put=__cordl_internal_set_m_stream)) ::System::IO::Stream*  m_stream;

/// @brief Field m_syncHint, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_syncHint, put=__cordl_internal_set_m_syncHint)) bool  m_syncHint;

/// @brief Field m_timeout, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_timeout, put=__cordl_internal_set_m_timeout)) int32_t  m_timeout;

/// @brief Field m_uri, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_uri, put=__cordl_internal_set_m_uri)) ::System::Uri*  m_uri;

/// @brief Field m_writePending, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_writePending, put=__cordl_internal_set_m_writePending)) bool  m_writePending;

/// @brief Field m_writing, offset 0xa1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_writing, put=__cordl_internal_set_m_writing)) bool  m_writing;

/// @brief Field s_GetRequestStreamCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_GetRequestStreamCallback, put=setStaticF_s_GetRequestStreamCallback)) ::System::Threading::WaitCallback*  s_GetRequestStreamCallback;

/// @brief Field s_GetResponseCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_GetResponseCallback, put=setStaticF_s_GetResponseCallback)) ::System::Threading::WaitCallback*  s_GetResponseCallback;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method Abort, addr 0x2d78dac, size 0x3a0, virtual true, abstract: false, final false
inline void Abort() ;

/// @brief Method BeginGetResponse, addr 0x2d77b2c, size 0x2c8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method EndGetResponse, addr 0x2d77df4, size 0x2ec, virtual true, abstract: false, final false
inline ::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult*  asyncResult) ;

/// @brief Method GetObjectData, addr 0x2d77694, size 0x290, virtual true, abstract: false, final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method GetRequestStreamCallback, addr 0x2d78430, size 0x214, virtual false, abstract: false, final false
static inline void GetRequestStreamCallback(::System::Object*  state) ;

/// @brief Method GetResponse, addr 0x2d780e0, size 0x350, virtual true, abstract: false, final false
inline ::System::Net::WebResponse* GetResponse() ;

/// @brief Method GetResponseCallback, addr 0x2d786e0, size 0x2fc, virtual false, abstract: false, final false
static inline void GetResponseCallback(::System::Object*  state) ;

static inline ::System::Net::FileWebRequest* New_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

static inline ::System::Net::FileWebRequest* New_ctor(::System::Uri*  uri) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x2d77688, size 0xc, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method UnblockReader, addr 0x2d78cac, size 0xd8, virtual false, abstract: false, final false
inline void UnblockReader() ;

constexpr int32_t const& __cordl_internal_get_m_Aborted() const;

constexpr int32_t& __cordl_internal_get_m_Aborted() ;

constexpr ::System::Net::LazyAsyncResult* const& __cordl_internal_get_m_ReadAResult() const;

constexpr ::System::Net::LazyAsyncResult*& __cordl_internal_get_m_ReadAResult() ;

constexpr ::System::Net::LazyAsyncResult* const& __cordl_internal_get_m_WriteAResult() const;

constexpr ::System::Net::LazyAsyncResult*& __cordl_internal_get_m_WriteAResult() ;

constexpr ::StringW const& __cordl_internal_get_m_connectionGroupName() const;

constexpr ::StringW& __cordl_internal_get_m_connectionGroupName() ;

constexpr int64_t const& __cordl_internal_get_m_contentLength() const;

constexpr int64_t& __cordl_internal_get_m_contentLength() ;

constexpr ::System::Net::ICredentials* const& __cordl_internal_get_m_credentials() const;

constexpr ::System::Net::ICredentials*& __cordl_internal_get_m_credentials() ;

constexpr ::System::IO::FileAccess const& __cordl_internal_get_m_fileAccess() const;

constexpr ::System::IO::FileAccess& __cordl_internal_get_m_fileAccess() ;

constexpr ::System::Net::WebHeaderCollection* const& __cordl_internal_get_m_headers() const;

constexpr ::System::Net::WebHeaderCollection*& __cordl_internal_get_m_headers() ;

constexpr ::StringW const& __cordl_internal_get_m_method() const;

constexpr ::StringW& __cordl_internal_get_m_method() ;

constexpr ::System::Net::IWebProxy* const& __cordl_internal_get_m_proxy() const;

constexpr ::System::Net::IWebProxy*& __cordl_internal_get_m_proxy() ;

constexpr bool const& __cordl_internal_get_m_readPending() const;

constexpr bool& __cordl_internal_get_m_readPending() ;

constexpr ::System::Threading::ManualResetEvent* const& __cordl_internal_get_m_readerEvent() const;

constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get_m_readerEvent() ;

constexpr ::System::Net::WebResponse* const& __cordl_internal_get_m_response() const;

constexpr ::System::Net::WebResponse*& __cordl_internal_get_m_response() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_m_stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_m_stream() ;

constexpr bool const& __cordl_internal_get_m_syncHint() const;

constexpr bool& __cordl_internal_get_m_syncHint() ;

constexpr int32_t const& __cordl_internal_get_m_timeout() const;

constexpr int32_t& __cordl_internal_get_m_timeout() ;

constexpr ::System::Uri* const& __cordl_internal_get_m_uri() const;

constexpr ::System::Uri*& __cordl_internal_get_m_uri() ;

constexpr bool const& __cordl_internal_get_m_writePending() const;

constexpr bool& __cordl_internal_get_m_writePending() ;

constexpr bool const& __cordl_internal_get_m_writing() const;

constexpr bool& __cordl_internal_get_m_writing() ;

constexpr void __cordl_internal_set_m_Aborted(int32_t  value) ;

constexpr void __cordl_internal_set_m_ReadAResult(::System::Net::LazyAsyncResult*  value) ;

constexpr void __cordl_internal_set_m_WriteAResult(::System::Net::LazyAsyncResult*  value) ;

constexpr void __cordl_internal_set_m_connectionGroupName(::StringW  value) ;

constexpr void __cordl_internal_set_m_contentLength(int64_t  value) ;

constexpr void __cordl_internal_set_m_credentials(::System::Net::ICredentials*  value) ;

constexpr void __cordl_internal_set_m_fileAccess(::System::IO::FileAccess  value) ;

constexpr void __cordl_internal_set_m_headers(::System::Net::WebHeaderCollection*  value) ;

constexpr void __cordl_internal_set_m_method(::StringW  value) ;

constexpr void __cordl_internal_set_m_proxy(::System::Net::IWebProxy*  value) ;

constexpr void __cordl_internal_set_m_readPending(bool  value) ;

constexpr void __cordl_internal_set_m_readerEvent(::System::Threading::ManualResetEvent*  value) ;

constexpr void __cordl_internal_set_m_response(::System::Net::WebResponse*  value) ;

constexpr void __cordl_internal_set_m_stream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set_m_syncHint(bool  value) ;

constexpr void __cordl_internal_set_m_timeout(int32_t  value) ;

constexpr void __cordl_internal_set_m_uri(::System::Uri*  value) ;

constexpr void __cordl_internal_set_m_writePending(bool  value) ;

constexpr void __cordl_internal_set_m_writing(bool  value) ;

/// @brief Method .ctor, addr 0x2d772ec, size 0x39c, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method .ctor, addr 0x2d77178, size 0x174, virtual false, abstract: false, final false
inline void _ctor(::System::Uri*  uri) ;

static inline ::System::Threading::WaitCallback* getStaticF_s_GetRequestStreamCallback() ;

static inline ::System::Threading::WaitCallback* getStaticF_s_GetResponseCallback() ;

/// @brief Method get_Aborted, addr 0x2d77924, size 0x10, virtual false, abstract: false, final false
inline bool get_Aborted() ;

/// @brief Method get_ContentLength, addr 0x2d77934, size 0x8, virtual true, abstract: false, final false
inline int64_t get_ContentLength() ;

/// @brief Method get_Credentials, addr 0x2d77a18, size 0x8, virtual true, abstract: false, final false
inline ::System::Net::ICredentials* get_Credentials() ;

/// @brief Method get_Headers, addr 0x2d77a28, size 0x8, virtual true, abstract: false, final false
inline ::System::Net::WebHeaderCollection* get_Headers() ;

/// @brief Method get_Method, addr 0x2d77a30, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_Method() ;

/// @brief Method get_Proxy, addr 0x2d77b0c, size 0x8, virtual true, abstract: false, final false
inline ::System::Net::IWebProxy* get_Proxy() ;

/// @brief Method get_RequestUri, addr 0x2d77b24, size 0x8, virtual true, abstract: false, final false
inline ::System::Uri* get_RequestUri() ;

/// @brief Method get_Timeout, addr 0x2d77b1c, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Timeout() ;

/// @brief Method get_UseDefaultCredentials, addr 0x2d78d84, size 0x28, virtual true, abstract: false, final false
inline bool get_UseDefaultCredentials() ;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

static inline void setStaticF_s_GetRequestStreamCallback(::System::Threading::WaitCallback*  value) ;

static inline void setStaticF_s_GetResponseCallback(::System::Threading::WaitCallback*  value) ;

/// @brief Method set_ContentLength, addr 0x2d7793c, size 0x80, virtual true, abstract: false, final false
inline void set_ContentLength(int64_t  value) ;

/// @brief Method set_ContentType, addr 0x2d779bc, size 0x5c, virtual true, abstract: false, final false
inline void set_ContentType(::StringW  value) ;

/// @brief Method set_Credentials, addr 0x2d77a20, size 0x8, virtual true, abstract: false, final false
inline void set_Credentials(::System::Net::ICredentials*  value) ;

/// @brief Method set_Method, addr 0x2d77a38, size 0xd4, virtual true, abstract: false, final false
inline void set_Method(::StringW  value) ;

/// @brief Method set_Proxy, addr 0x2d77b14, size 0x8, virtual true, abstract: false, final false
inline void set_Proxy(::System::Net::IWebProxy*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileWebRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileWebRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileWebRequest(FileWebRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileWebRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileWebRequest(FileWebRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7857};

/// @brief Field m_connectionGroupName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___m_connectionGroupName;

/// @brief Field m_contentLength, offset: 0x40, size: 0x8, def value: None
 int64_t  ___m_contentLength;

/// @brief Field m_credentials, offset: 0x48, size: 0x8, def value: None
 ::System::Net::ICredentials*  ___m_credentials;

/// @brief Field m_fileAccess, offset: 0x50, size: 0x4, def value: None
 ::System::IO::FileAccess  ___m_fileAccess;

/// @brief Field m_headers, offset: 0x58, size: 0x8, def value: None
 ::System::Net::WebHeaderCollection*  ___m_headers;

/// @brief Field m_method, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___m_method;

/// @brief Field m_proxy, offset: 0x68, size: 0x8, def value: None
 ::System::Net::IWebProxy*  ___m_proxy;

/// @brief Field m_readerEvent, offset: 0x70, size: 0x8, def value: None
 ::System::Threading::ManualResetEvent*  ___m_readerEvent;

/// @brief Field m_readPending, offset: 0x78, size: 0x1, def value: None
 bool  ___m_readPending;

/// @brief Field m_response, offset: 0x80, size: 0x8, def value: None
 ::System::Net::WebResponse*  ___m_response;

/// @brief Field m_stream, offset: 0x88, size: 0x8, def value: None
 ::System::IO::Stream*  ___m_stream;

/// @brief Field m_syncHint, offset: 0x90, size: 0x1, def value: None
 bool  ___m_syncHint;

/// @brief Field m_timeout, offset: 0x94, size: 0x4, def value: None
 int32_t  ___m_timeout;

/// @brief Field m_uri, offset: 0x98, size: 0x8, def value: None
 ::System::Uri*  ___m_uri;

/// @brief Field m_writePending, offset: 0xa0, size: 0x1, def value: None
 bool  ___m_writePending;

/// @brief Field m_writing, offset: 0xa1, size: 0x1, def value: None
 bool  ___m_writing;

/// @brief Field m_WriteAResult, offset: 0xa8, size: 0x8, def value: None
 ::System::Net::LazyAsyncResult*  ___m_WriteAResult;

/// @brief Field m_ReadAResult, offset: 0xb0, size: 0x8, def value: None
 ::System::Net::LazyAsyncResult*  ___m_ReadAResult;

/// @brief Field m_Aborted, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___m_Aborted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::FileWebRequest, ___m_connectionGroupName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_contentLength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_credentials) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_fileAccess) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_headers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_method) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_proxy) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_readerEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_readPending) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_response) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_stream) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_syncHint) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_timeout) == 0x94, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_uri) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_writePending) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_writing) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_WriteAResult) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_ReadAResult) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebRequest, ___m_Aborted) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::FileWebRequest, 0xc0>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::FileWebRequest);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FileWebRequest*, "System.Net", "FileWebRequest");
