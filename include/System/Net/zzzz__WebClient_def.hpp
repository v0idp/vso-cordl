#pragma once
// IWYU pragma private; include "System/Net/WebClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__Component_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebClient)
namespace System::Collections::Specialized {
class NameValueCollection;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Cache {
class RequestCachePolicy;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Net {
class WebClient_ProgressData;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Net {
class WebRequest;
}
namespace System::Net {
class WebResponse;
}
namespace System::Text {
class Encoding;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class WebClient;
}
namespace System::Net {
class WebClient_ProgressData;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebClient);
MARK_REF_PTR_T(::System::Net::WebClient_ProgressData);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebClient/ProgressData
class CORDL_TYPE WebClient_ProgressData : public ::System::Object {
public:
// Declarations
/// @brief Field BytesReceived, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_BytesReceived, put=__cordl_internal_set_BytesReceived)) int64_t  BytesReceived;

/// @brief Field BytesSent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_BytesSent, put=__cordl_internal_set_BytesSent)) int64_t  BytesSent;

/// @brief Field HasUploadPhase, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_HasUploadPhase, put=__cordl_internal_set_HasUploadPhase)) bool  HasUploadPhase;

/// @brief Field TotalBytesToReceive, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TotalBytesToReceive, put=__cordl_internal_set_TotalBytesToReceive)) int64_t  TotalBytesToReceive;

/// @brief Field TotalBytesToSend, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TotalBytesToSend, put=__cordl_internal_set_TotalBytesToSend)) int64_t  TotalBytesToSend;

/// @brief Method Reset, addr 0x2d62314, size 0x14, virtual false, abstract: false, final false
inline void Reset() ;

constexpr int64_t const& __cordl_internal_get_BytesReceived() const;

constexpr int64_t& __cordl_internal_get_BytesReceived() ;

constexpr int64_t const& __cordl_internal_get_BytesSent() const;

constexpr int64_t& __cordl_internal_get_BytesSent() ;

constexpr bool const& __cordl_internal_get_HasUploadPhase() const;

constexpr bool& __cordl_internal_get_HasUploadPhase() ;

constexpr int64_t const& __cordl_internal_get_TotalBytesToReceive() const;

constexpr int64_t& __cordl_internal_get_TotalBytesToReceive() ;

constexpr int64_t const& __cordl_internal_get_TotalBytesToSend() const;

constexpr int64_t& __cordl_internal_get_TotalBytesToSend() ;

constexpr void __cordl_internal_set_BytesReceived(int64_t  value) ;

constexpr void __cordl_internal_set_BytesSent(int64_t  value) ;

constexpr void __cordl_internal_set_HasUploadPhase(bool  value) ;

constexpr void __cordl_internal_set_TotalBytesToReceive(int64_t  value) ;

constexpr void __cordl_internal_set_TotalBytesToSend(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebClient_ProgressData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebClient_ProgressData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebClient_ProgressData(WebClient_ProgressData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebClient_ProgressData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebClient_ProgressData(WebClient_ProgressData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7788};

/// @brief Field BytesSent, offset: 0x10, size: 0x8, def value: None
 int64_t  ___BytesSent;

/// @brief Field TotalBytesToSend, offset: 0x18, size: 0x8, def value: None
 int64_t  ___TotalBytesToSend;

/// @brief Field BytesReceived, offset: 0x20, size: 0x8, def value: None
 int64_t  ___BytesReceived;

/// @brief Field TotalBytesToReceive, offset: 0x28, size: 0x8, def value: None
 int64_t  ___TotalBytesToReceive;

/// @brief Field HasUploadPhase, offset: 0x30, size: 0x1, def value: None
 bool  ___HasUploadPhase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebClient_ProgressData, ___BytesSent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient_ProgressData, ___TotalBytesToSend) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient_ProgressData, ___BytesReceived) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient_ProgressData, ___TotalBytesToReceive) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient_ProgressData, ___HasUploadPhase) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebClient_ProgressData, 0x38>, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.ComponentModel.Component
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebClient
class CORDL_TYPE WebClient : public ::System::ComponentModel::Component {
public:
// Declarations
using ProgressData = ::System::Net::WebClient_ProgressData;

 __declspec(property(get=get_CachePolicy)) ::System::Net::Cache::RequestCachePolicy*  CachePolicy;

 __declspec(property(get=get_Credentials)) ::System::Net::ICredentials*  Credentials;

/// @brief Field <CachePolicy>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__CachePolicy_k__BackingField, put=__cordl_internal_set__CachePolicy_k__BackingField)) ::System::Net::Cache::RequestCachePolicy*  _CachePolicy_k__BackingField;

/// @brief Field _baseAddress, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseAddress, put=__cordl_internal_set__baseAddress)) ::System::Uri*  _baseAddress;

/// @brief Field _callNesting, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__callNesting, put=__cordl_internal_set__callNesting)) int32_t  _callNesting;

/// @brief Field _canceled, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__canceled, put=__cordl_internal_set__canceled)) bool  _canceled;

/// @brief Field _contentLength, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__contentLength, put=__cordl_internal_set__contentLength)) int64_t  _contentLength;

/// @brief Field _credentials, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__credentials, put=__cordl_internal_set__credentials)) ::System::Net::ICredentials*  _credentials;

/// @brief Field _encoding, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__encoding, put=__cordl_internal_set__encoding)) ::System::Text::Encoding*  _encoding;

/// @brief Field _headers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__headers, put=__cordl_internal_set__headers)) ::System::Net::WebHeaderCollection*  _headers;

/// @brief Field _method, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__method, put=__cordl_internal_set__method)) ::StringW  _method;

/// @brief Field _progress, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__progress, put=__cordl_internal_set__progress)) ::System::Net::WebClient_ProgressData*  _progress;

/// @brief Field _proxy, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__proxy, put=__cordl_internal_set__proxy)) ::System::Net::IWebProxy*  _proxy;

/// @brief Field _proxySet, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__proxySet, put=__cordl_internal_set__proxySet)) bool  _proxySet;

/// @brief Field _requestParameters, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__requestParameters, put=__cordl_internal_set__requestParameters)) ::System::Collections::Specialized::NameValueCollection*  _requestParameters;

/// @brief Field _webRequest, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__webRequest, put=__cordl_internal_set__webRequest)) ::System::Net::WebRequest*  _webRequest;

/// @brief Field _webResponse, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__webResponse, put=__cordl_internal_set__webResponse)) ::System::Net::WebResponse*  _webResponse;

/// @brief Field s_knownEncodings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_knownEncodings, put=setStaticF_s_knownEncodings)) ::ArrayW<::System::Text::Encoding*,::Array<::System::Text::Encoding*>*>  s_knownEncodings;

/// @brief Field s_parseContentTypeSeparators, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_parseContentTypeSeparators, put=setStaticF_s_parseContentTypeSeparators)) ::ArrayW<char16_t,::Array<char16_t>*>  s_parseContentTypeSeparators;

/// @brief Method AbortRequest, addr 0x2d63074, size 0xe0, virtual false, abstract: false, final false
static inline void AbortRequest(::System::Net::WebRequest*  request) ;

/// @brief Method CopyHeadersTo, addr 0x2d62458, size 0x3ec, virtual false, abstract: false, final false
inline void CopyHeadersTo(::System::Net::WebRequest*  request) ;

/// @brief Method EndOperation, addr 0x2d62308, size 0xc, virtual false, abstract: false, final false
inline void EndOperation() ;

/// @brief Method GetUri, addr 0x2d62894, size 0x178, virtual false, abstract: false, final false
inline ::System::Uri* GetUri(::StringW  address) ;

/// @brief Method GetUri, addr 0x2d62da4, size 0x2d0, virtual false, abstract: false, final false
inline ::System::Uri* GetUri(::System::Uri*  address) ;

/// @brief Method GetWebRequest, addr 0x2d62338, size 0x120, virtual true, abstract: false, final false
inline ::System::Net::WebRequest* GetWebRequest(::System::Uri*  address) ;

/// @brief Method GetWebResponse, addr 0x2d62844, size 0x34, virtual true, abstract: false, final false
inline ::System::Net::WebResponse* GetWebResponse(::System::Net::WebRequest*  request) ;

static inline ::System::Net::WebClient* New_ctor() ;

/// @brief Method OpenRead, addr 0x2d62878, size 0x1c, virtual false, abstract: false, final false
inline ::System::IO::Stream* OpenRead(::StringW  address) ;

/// @brief Method OpenRead, addr 0x2d62a0c, size 0x34c, virtual false, abstract: false, final false
inline ::System::IO::Stream* OpenRead(::System::Uri*  address) ;

/// @brief Method StartOperation, addr 0x2d6226c, size 0x9c, virtual false, abstract: false, final false
inline void StartOperation() ;

/// @brief Method ThrowIfNull, addr 0x2d62d58, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowIfNull(::System::Object*  argument, ::StringW  parameterName) ;

constexpr ::System::Net::Cache::RequestCachePolicy* const& __cordl_internal_get__CachePolicy_k__BackingField() const;

constexpr ::System::Net::Cache::RequestCachePolicy*& __cordl_internal_get__CachePolicy_k__BackingField() ;

constexpr ::System::Uri* const& __cordl_internal_get__baseAddress() const;

constexpr ::System::Uri*& __cordl_internal_get__baseAddress() ;

constexpr int32_t const& __cordl_internal_get__callNesting() const;

constexpr int32_t& __cordl_internal_get__callNesting() ;

constexpr bool const& __cordl_internal_get__canceled() const;

constexpr bool& __cordl_internal_get__canceled() ;

constexpr int64_t const& __cordl_internal_get__contentLength() const;

constexpr int64_t& __cordl_internal_get__contentLength() ;

constexpr ::System::Net::ICredentials* const& __cordl_internal_get__credentials() const;

constexpr ::System::Net::ICredentials*& __cordl_internal_get__credentials() ;

constexpr ::System::Text::Encoding* const& __cordl_internal_get__encoding() const;

constexpr ::System::Text::Encoding*& __cordl_internal_get__encoding() ;

constexpr ::System::Net::WebHeaderCollection* const& __cordl_internal_get__headers() const;

constexpr ::System::Net::WebHeaderCollection*& __cordl_internal_get__headers() ;

constexpr ::StringW const& __cordl_internal_get__method() const;

constexpr ::StringW& __cordl_internal_get__method() ;

constexpr ::System::Net::WebClient_ProgressData* const& __cordl_internal_get__progress() const;

constexpr ::System::Net::WebClient_ProgressData*& __cordl_internal_get__progress() ;

constexpr ::System::Net::IWebProxy* const& __cordl_internal_get__proxy() const;

constexpr ::System::Net::IWebProxy*& __cordl_internal_get__proxy() ;

constexpr bool const& __cordl_internal_get__proxySet() const;

constexpr bool& __cordl_internal_get__proxySet() ;

constexpr ::System::Collections::Specialized::NameValueCollection* const& __cordl_internal_get__requestParameters() const;

constexpr ::System::Collections::Specialized::NameValueCollection*& __cordl_internal_get__requestParameters() ;

constexpr ::System::Net::WebRequest* const& __cordl_internal_get__webRequest() const;

constexpr ::System::Net::WebRequest*& __cordl_internal_get__webRequest() ;

constexpr ::System::Net::WebResponse* const& __cordl_internal_get__webResponse() const;

constexpr ::System::Net::WebResponse*& __cordl_internal_get__webResponse() ;

constexpr void __cordl_internal_set__CachePolicy_k__BackingField(::System::Net::Cache::RequestCachePolicy*  value) ;

constexpr void __cordl_internal_set__baseAddress(::System::Uri*  value) ;

constexpr void __cordl_internal_set__callNesting(int32_t  value) ;

constexpr void __cordl_internal_set__canceled(bool  value) ;

constexpr void __cordl_internal_set__contentLength(int64_t  value) ;

constexpr void __cordl_internal_set__credentials(::System::Net::ICredentials*  value) ;

constexpr void __cordl_internal_set__encoding(::System::Text::Encoding*  value) ;

constexpr void __cordl_internal_set__headers(::System::Net::WebHeaderCollection*  value) ;

constexpr void __cordl_internal_set__method(::StringW  value) ;

constexpr void __cordl_internal_set__progress(::System::Net::WebClient_ProgressData*  value) ;

constexpr void __cordl_internal_set__proxy(::System::Net::IWebProxy*  value) ;

constexpr void __cordl_internal_set__proxySet(bool  value) ;

constexpr void __cordl_internal_set__requestParameters(::System::Collections::Specialized::NameValueCollection*  value) ;

constexpr void __cordl_internal_set__webRequest(::System::Net::WebRequest*  value) ;

constexpr void __cordl_internal_set__webResponse(::System::Net::WebResponse*  value) ;

/// @brief Method .ctor, addr 0x2d62148, size 0x124, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::System::Text::Encoding*,::Array<::System::Text::Encoding*>*> getStaticF_s_knownEncodings() ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_s_parseContentTypeSeparators() ;

/// @brief Method get_CachePolicy, addr 0x2d62330, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::Cache::RequestCachePolicy* get_CachePolicy() ;

/// @brief Method get_Credentials, addr 0x2d62328, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::ICredentials* get_Credentials() ;

static inline void setStaticF_s_knownEncodings(::ArrayW<::System::Text::Encoding*,::Array<::System::Text::Encoding*>*>  value) ;

static inline void setStaticF_s_parseContentTypeSeparators(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebClient(WebClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebClient(WebClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7789};

/// @brief Field _baseAddress, offset: 0x28, size: 0x8, def value: None
 ::System::Uri*  ____baseAddress;

/// @brief Field _credentials, offset: 0x30, size: 0x8, def value: None
 ::System::Net::ICredentials*  ____credentials;

/// @brief Field _headers, offset: 0x38, size: 0x8, def value: None
 ::System::Net::WebHeaderCollection*  ____headers;

/// @brief Field _requestParameters, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Specialized::NameValueCollection*  ____requestParameters;

/// @brief Field _webResponse, offset: 0x48, size: 0x8, def value: None
 ::System::Net::WebResponse*  ____webResponse;

/// @brief Field _webRequest, offset: 0x50, size: 0x8, def value: None
 ::System::Net::WebRequest*  ____webRequest;

/// @brief Field _encoding, offset: 0x58, size: 0x8, def value: None
 ::System::Text::Encoding*  ____encoding;

/// @brief Field _method, offset: 0x60, size: 0x8, def value: None
 ::StringW  ____method;

/// @brief Field _contentLength, offset: 0x68, size: 0x8, def value: None
 int64_t  ____contentLength;

/// @brief Field _canceled, offset: 0x70, size: 0x1, def value: None
 bool  ____canceled;

/// @brief Field _progress, offset: 0x78, size: 0x8, def value: None
 ::System::Net::WebClient_ProgressData*  ____progress;

/// @brief Field _proxy, offset: 0x80, size: 0x8, def value: None
 ::System::Net::IWebProxy*  ____proxy;

/// @brief Field _proxySet, offset: 0x88, size: 0x1, def value: None
 bool  ____proxySet;

/// @brief Field _callNesting, offset: 0x8c, size: 0x4, def value: None
 int32_t  ____callNesting;

/// @brief Field <CachePolicy>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::System::Net::Cache::RequestCachePolicy*  ____CachePolicy_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebClient, ____baseAddress) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____credentials) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____headers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____requestParameters) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____webResponse) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____webRequest) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____encoding) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____method) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____contentLength) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____canceled) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____progress) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____proxy) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____proxySet) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____callNesting) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____CachePolicy_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebClient, 0x98>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::WebClient);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebClient*, "System.Net", "WebClient");
NEED_NO_BOX(::System::Net::WebClient_ProgressData);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebClient_ProgressData*, "System.Net", "WebClient/ProgressData");
