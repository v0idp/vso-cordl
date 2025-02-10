#pragma once
// IWYU pragma private; include "Proyecto26/RequestHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RequestHelper)
namespace Proyecto26 {
class RequestException;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Networking {
class CertificateHandler;
}
namespace UnityEngine::Networking {
class DownloadHandler;
}
namespace UnityEngine::Networking {
class IMultipartFormSection;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::Networking {
class UploadHandler;
}
namespace UnityEngine {
class WWWForm;
}
// Forward declare root types
namespace Proyecto26 {
class RequestHelper;
}
// Write type traits
MARK_REF_PTR_T(::Proyecto26::RequestHelper);
// Dependencies System.Nullable`1<T>, System.Object
namespace Proyecto26 {
// Is value type: false
// CS Name: Proyecto26.RequestHelper
class CORDL_TYPE RequestHelper : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Body, put=set_Body)) ::System::Object*  Body;

 __declspec(property(get=get_BodyRaw, put=set_BodyRaw)) ::ArrayW<uint8_t,::Array<uint8_t>*>  BodyRaw;

 __declspec(property(get=get_BodyString, put=set_BodyString)) ::StringW  BodyString;

 __declspec(property(get=get_CertificateHandler, put=set_CertificateHandler)) ::UnityEngine::Networking::CertificateHandler*  CertificateHandler;

 __declspec(property(get=get_ContentType, put=set_ContentType)) ::StringW  ContentType;

 __declspec(property(get=get_DefaultContentType, put=set_DefaultContentType)) bool  DefaultContentType;

 __declspec(property(get=get_DownloadHandler, put=set_DownloadHandler)) ::UnityEngine::Networking::DownloadHandler*  DownloadHandler;

 __declspec(property(get=get_DownloadProgress)) float_t  DownloadProgress;

 __declspec(property(get=get_DownloadedBytes)) uint64_t  DownloadedBytes;

 __declspec(property(get=get_EnableDebug, put=set_EnableDebug)) bool  EnableDebug;

 __declspec(property(get=get_FormData, put=set_FormData)) ::UnityEngine::WWWForm*  FormData;

 __declspec(property(get=get_FormSections, put=set_FormSections)) ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*  FormSections;

 __declspec(property(get=get_Headers, put=set_Headers)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  Headers;

 __declspec(property(get=get_IgnoreHttpException, put=set_IgnoreHttpException)) bool  IgnoreHttpException;

 __declspec(property(get=get_IsAborted, put=set_IsAborted)) bool  IsAborted;

 __declspec(property(get=get_Method, put=set_Method)) ::StringW  Method;

 __declspec(property(get=get_Params, put=set_Params)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  Params;

 __declspec(property(get=get_ParseResponseBody, put=set_ParseResponseBody)) bool  ParseResponseBody;

 __declspec(property(get=get_RedirectLimit, put=set_RedirectLimit)) ::System::Nullable_1<int32_t>  RedirectLimit;

 __declspec(property(get=get_Request, put=set_Request)) ::UnityEngine::Networking::UnityWebRequest*  Request;

 __declspec(property(get=get_Retries, put=set_Retries)) int32_t  Retries;

 __declspec(property(get=get_RetryCallback, put=set_RetryCallback)) ::System::Action_2<::Proyecto26::RequestException*,int32_t>*  RetryCallback;

 __declspec(property(get=get_RetrySecondsDelay, put=set_RetrySecondsDelay)) float_t  RetrySecondsDelay;

 __declspec(property(get=get_SimpleForm, put=set_SimpleForm)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  SimpleForm;

 __declspec(property(get=get_Timeout, put=set_Timeout)) ::System::Nullable_1<int32_t>  Timeout;

 __declspec(property(get=get_UploadHandler, put=set_UploadHandler)) ::UnityEngine::Networking::UploadHandler*  UploadHandler;

 __declspec(property(get=get_UploadProgress)) float_t  UploadProgress;

 __declspec(property(get=get_UploadedBytes)) uint64_t  UploadedBytes;

 __declspec(property(get=get_Uri, put=set_Uri)) ::StringW  Uri;

 __declspec(property(get=get_UseHttpContinue, put=set_UseHttpContinue)) ::System::Nullable_1<bool>  UseHttpContinue;

/// @brief Field <Request>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Request_k__BackingField, put=__cordl_internal_set__Request_k__BackingField)) ::UnityEngine::Networking::UnityWebRequest*  _Request_k__BackingField;

/// @brief Field _body, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__body, put=__cordl_internal_set__body)) ::System::Object*  _body;

/// @brief Field _bodyRaw, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyRaw, put=__cordl_internal_set__bodyRaw)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _bodyRaw;

/// @brief Field _bodyString, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyString, put=__cordl_internal_set__bodyString)) ::StringW  _bodyString;

/// @brief Field _certificateHandler, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__certificateHandler, put=__cordl_internal_set__certificateHandler)) ::UnityEngine::Networking::CertificateHandler*  _certificateHandler;

/// @brief Field _contentType, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__contentType, put=__cordl_internal_set__contentType)) ::StringW  _contentType;

/// @brief Field _defaultContentType, offset 0xb9, size 0x1 
 __declspec(property(get=__cordl_internal_get__defaultContentType, put=__cordl_internal_set__defaultContentType)) bool  _defaultContentType;

/// @brief Field _downloadHandler, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__downloadHandler, put=__cordl_internal_set__downloadHandler)) ::UnityEngine::Networking::DownloadHandler*  _downloadHandler;

/// @brief Field _enableDebug, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__enableDebug, put=__cordl_internal_set__enableDebug)) bool  _enableDebug;

/// @brief Field _formData, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__formData, put=__cordl_internal_set__formData)) ::UnityEngine::WWWForm*  _formData;

/// @brief Field _formSections, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__formSections, put=__cordl_internal_set__formSections)) ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*  _formSections;

/// @brief Field _headers, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__headers, put=__cordl_internal_set__headers)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _headers;

/// @brief Field _ignoreHttpException, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get__ignoreHttpException, put=__cordl_internal_set__ignoreHttpException)) bool  _ignoreHttpException;

/// @brief Field _isAborted, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get__isAborted, put=__cordl_internal_set__isAborted)) bool  _isAborted;

/// @brief Field _method, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__method, put=__cordl_internal_set__method)) ::StringW  _method;

/// @brief Field _params, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__params, put=__cordl_internal_set__params)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _params;

/// @brief Field _parseResponseBody, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__parseResponseBody, put=__cordl_internal_set__parseResponseBody)) bool  _parseResponseBody;

/// @brief Field _redirectLimit, offset 0x5c, size 0x8 
 __declspec(property(get=__cordl_internal_get__redirectLimit, put=__cordl_internal_set__redirectLimit)) ::System::Nullable_1<int32_t>  _redirectLimit;

/// @brief Field _retries, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__retries, put=__cordl_internal_set__retries)) int32_t  _retries;

/// @brief Field _retryCallback, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__retryCallback, put=__cordl_internal_set__retryCallback)) ::System::Action_2<::Proyecto26::RequestException*,int32_t>*  _retryCallback;

/// @brief Field _retrySecondsDelay, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__retrySecondsDelay, put=__cordl_internal_set__retrySecondsDelay)) float_t  _retrySecondsDelay;

/// @brief Field _simpleForm, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__simpleForm, put=__cordl_internal_set__simpleForm)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _simpleForm;

/// @brief Field _timeout, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeout, put=__cordl_internal_set__timeout)) ::System::Nullable_1<int32_t>  _timeout;

/// @brief Field _uploadHandler, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__uploadHandler, put=__cordl_internal_set__uploadHandler)) ::UnityEngine::Networking::UploadHandler*  _uploadHandler;

/// @brief Field _uri, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__uri, put=__cordl_internal_set__uri)) ::StringW  _uri;

/// @brief Field _useHttpContinue, offset 0x59, size 0x2 
 __declspec(property(get=__cordl_internal_get__useHttpContinue, put=__cordl_internal_set__useHttpContinue)) ::System::Nullable_1<bool>  _useHttpContinue;

/// @brief Method Abort, addr 0x17f8810, size 0x80, virtual false, abstract: false, final false
inline void Abort() ;

/// @brief Method GetHeader, addr 0x17f875c, size 0x8c, virtual false, abstract: false, final false
inline ::StringW GetHeader(::StringW  name) ;

static inline ::Proyecto26::RequestHelper* New_ctor() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__Request_k__BackingField() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__Request_k__BackingField() ;

constexpr ::System::Object* const& __cordl_internal_get__body() const;

constexpr ::System::Object*& __cordl_internal_get__body() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__bodyRaw() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__bodyRaw() ;

constexpr ::StringW const& __cordl_internal_get__bodyString() const;

constexpr ::StringW& __cordl_internal_get__bodyString() ;

constexpr ::UnityEngine::Networking::CertificateHandler* const& __cordl_internal_get__certificateHandler() const;

constexpr ::UnityEngine::Networking::CertificateHandler*& __cordl_internal_get__certificateHandler() ;

constexpr ::StringW const& __cordl_internal_get__contentType() const;

constexpr ::StringW& __cordl_internal_get__contentType() ;

constexpr bool const& __cordl_internal_get__defaultContentType() const;

constexpr bool& __cordl_internal_get__defaultContentType() ;

constexpr ::UnityEngine::Networking::DownloadHandler* const& __cordl_internal_get__downloadHandler() const;

constexpr ::UnityEngine::Networking::DownloadHandler*& __cordl_internal_get__downloadHandler() ;

constexpr bool const& __cordl_internal_get__enableDebug() const;

constexpr bool& __cordl_internal_get__enableDebug() ;

constexpr ::UnityEngine::WWWForm* const& __cordl_internal_get__formData() const;

constexpr ::UnityEngine::WWWForm*& __cordl_internal_get__formData() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* const& __cordl_internal_get__formSections() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*& __cordl_internal_get__formSections() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__headers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__headers() ;

constexpr bool const& __cordl_internal_get__ignoreHttpException() const;

constexpr bool& __cordl_internal_get__ignoreHttpException() ;

constexpr bool const& __cordl_internal_get__isAborted() const;

constexpr bool& __cordl_internal_get__isAborted() ;

constexpr ::StringW const& __cordl_internal_get__method() const;

constexpr ::StringW& __cordl_internal_get__method() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__params() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__params() ;

constexpr bool const& __cordl_internal_get__parseResponseBody() const;

constexpr bool& __cordl_internal_get__parseResponseBody() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__redirectLimit() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__redirectLimit() ;

constexpr int32_t const& __cordl_internal_get__retries() const;

constexpr int32_t& __cordl_internal_get__retries() ;

constexpr ::System::Action_2<::Proyecto26::RequestException*,int32_t>* const& __cordl_internal_get__retryCallback() const;

constexpr ::System::Action_2<::Proyecto26::RequestException*,int32_t>*& __cordl_internal_get__retryCallback() ;

constexpr float_t const& __cordl_internal_get__retrySecondsDelay() const;

constexpr float_t& __cordl_internal_get__retrySecondsDelay() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__simpleForm() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__simpleForm() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__timeout() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__timeout() ;

constexpr ::UnityEngine::Networking::UploadHandler* const& __cordl_internal_get__uploadHandler() const;

constexpr ::UnityEngine::Networking::UploadHandler*& __cordl_internal_get__uploadHandler() ;

constexpr ::StringW const& __cordl_internal_get__uri() const;

constexpr ::StringW& __cordl_internal_get__uri() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__useHttpContinue() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__useHttpContinue() ;

constexpr void __cordl_internal_set__Request_k__BackingField(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__body(::System::Object*  value) ;

constexpr void __cordl_internal_set__bodyRaw(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set__bodyString(::StringW  value) ;

constexpr void __cordl_internal_set__certificateHandler(::UnityEngine::Networking::CertificateHandler*  value) ;

constexpr void __cordl_internal_set__contentType(::StringW  value) ;

constexpr void __cordl_internal_set__defaultContentType(bool  value) ;

constexpr void __cordl_internal_set__downloadHandler(::UnityEngine::Networking::DownloadHandler*  value) ;

constexpr void __cordl_internal_set__enableDebug(bool  value) ;

constexpr void __cordl_internal_set__formData(::UnityEngine::WWWForm*  value) ;

constexpr void __cordl_internal_set__formSections(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*  value) ;

constexpr void __cordl_internal_set__headers(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__ignoreHttpException(bool  value) ;

constexpr void __cordl_internal_set__isAborted(bool  value) ;

constexpr void __cordl_internal_set__method(::StringW  value) ;

constexpr void __cordl_internal_set__params(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__parseResponseBody(bool  value) ;

constexpr void __cordl_internal_set__redirectLimit(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set__retries(int32_t  value) ;

constexpr void __cordl_internal_set__retryCallback(::System::Action_2<::Proyecto26::RequestException*,int32_t>*  value) ;

constexpr void __cordl_internal_set__retrySecondsDelay(float_t  value) ;

constexpr void __cordl_internal_set__simpleForm(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__timeout(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set__uploadHandler(::UnityEngine::Networking::UploadHandler*  value) ;

constexpr void __cordl_internal_set__uri(::StringW  value) ;

constexpr void __cordl_internal_set__useHttpContinue(::System::Nullable_1<bool>  value) ;

/// @brief Method .ctor, addr 0x17f8890, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Body, addr 0x17f8530, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_Body() ;

/// @brief Method get_BodyRaw, addr 0x17f8550, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_BodyRaw() ;

/// @brief Method get_BodyString, addr 0x17f8540, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_BodyString() ;

/// @brief Method get_CertificateHandler, addr 0x17f8628, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Networking::CertificateHandler* get_CertificateHandler() ;

/// @brief Method get_ContentType, addr 0x17f8570, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ContentType() ;

/// @brief Method get_DefaultContentType, addr 0x17f87fc, size 0x8, virtual false, abstract: false, final false
inline bool get_DefaultContentType() ;

/// @brief Method get_DownloadHandler, addr 0x17f8648, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Networking::DownloadHandler* get_DownloadHandler() ;

/// @brief Method get_DownloadProgress, addr 0x17f8730, size 0x18, virtual false, abstract: false, final false
inline float_t get_DownloadProgress() ;

/// @brief Method get_DownloadedBytes, addr 0x17f8748, size 0x14, virtual false, abstract: false, final false
inline uint64_t get_DownloadedBytes() ;

/// @brief Method get_EnableDebug, addr 0x17f85b0, size 0x8, virtual false, abstract: false, final false
inline bool get_EnableDebug() ;

/// @brief Method get_FormData, addr 0x17f85f8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::WWWForm* get_FormData() ;

/// @brief Method get_FormSections, addr 0x17f8618, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* get_FormSections() ;

/// @brief Method get_Headers, addr 0x17f8658, size 0x78, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_Headers() ;

/// @brief Method get_IgnoreHttpException, addr 0x17f85e4, size 0x8, virtual false, abstract: false, final false
inline bool get_IgnoreHttpException() ;

/// @brief Method get_IsAborted, addr 0x17f87e8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsAborted() ;

/// @brief Method get_Method, addr 0x17f8520, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Method() ;

/// @brief Method get_Params, addr 0x17f7800, size 0x78, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_Params() ;

/// @brief Method get_ParseResponseBody, addr 0x17f86e0, size 0x8, virtual false, abstract: false, final false
inline bool get_ParseResponseBody() ;

/// @brief Method get_RedirectLimit, addr 0x17f85d4, size 0x8, virtual false, abstract: false, final false
inline ::System::Nullable_1<int32_t> get_RedirectLimit() ;

/// @brief Method get_Request, addr 0x17f86f4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Networking::UnityWebRequest* get_Request() ;

/// @brief Method get_Retries, addr 0x17f8580, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Retries() ;

/// @brief Method get_RetryCallback, addr 0x17f85a0, size 0x8, virtual false, abstract: false, final false
inline ::System::Action_2<::Proyecto26::RequestException*,int32_t>* get_RetryCallback() ;

/// @brief Method get_RetrySecondsDelay, addr 0x17f8590, size 0x8, virtual false, abstract: false, final false
inline float_t get_RetrySecondsDelay() ;

/// @brief Method get_SimpleForm, addr 0x17f8608, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_SimpleForm() ;

/// @brief Method get_Timeout, addr 0x17f8560, size 0x8, virtual false, abstract: false, final false
inline ::System::Nullable_1<int32_t> get_Timeout() ;

/// @brief Method get_UploadHandler, addr 0x17f8638, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Networking::UploadHandler* get_UploadHandler() ;

/// @brief Method get_UploadProgress, addr 0x17f8704, size 0x18, virtual false, abstract: false, final false
inline float_t get_UploadProgress() ;

/// @brief Method get_UploadedBytes, addr 0x17f871c, size 0x14, virtual false, abstract: false, final false
inline uint64_t get_UploadedBytes() ;

/// @brief Method get_Uri, addr 0x17f8510, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Uri() ;

/// @brief Method get_UseHttpContinue, addr 0x17f85c4, size 0x8, virtual false, abstract: false, final false
inline ::System::Nullable_1<bool> get_UseHttpContinue() ;

/// @brief Method set_Body, addr 0x17f8538, size 0x8, virtual false, abstract: false, final false
inline void set_Body(::System::Object*  value) ;

/// @brief Method set_BodyRaw, addr 0x17f8558, size 0x8, virtual false, abstract: false, final false
inline void set_BodyRaw(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method set_BodyString, addr 0x17f8548, size 0x8, virtual false, abstract: false, final false
inline void set_BodyString(::StringW  value) ;

/// @brief Method set_CertificateHandler, addr 0x17f8630, size 0x8, virtual false, abstract: false, final false
inline void set_CertificateHandler(::UnityEngine::Networking::CertificateHandler*  value) ;

/// @brief Method set_ContentType, addr 0x17f8578, size 0x8, virtual false, abstract: false, final false
inline void set_ContentType(::StringW  value) ;

/// @brief Method set_DefaultContentType, addr 0x17f8804, size 0xc, virtual false, abstract: false, final false
inline void set_DefaultContentType(bool  value) ;

/// @brief Method set_DownloadHandler, addr 0x17f8650, size 0x8, virtual false, abstract: false, final false
inline void set_DownloadHandler(::UnityEngine::Networking::DownloadHandler*  value) ;

/// @brief Method set_EnableDebug, addr 0x17f85b8, size 0xc, virtual false, abstract: false, final false
inline void set_EnableDebug(bool  value) ;

/// @brief Method set_FormData, addr 0x17f8600, size 0x8, virtual false, abstract: false, final false
inline void set_FormData(::UnityEngine::WWWForm*  value) ;

/// @brief Method set_FormSections, addr 0x17f8620, size 0x8, virtual false, abstract: false, final false
inline void set_FormSections(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*  value) ;

/// @brief Method set_Headers, addr 0x17f86d0, size 0x8, virtual false, abstract: false, final false
inline void set_Headers(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method set_IgnoreHttpException, addr 0x17f85ec, size 0xc, virtual false, abstract: false, final false
inline void set_IgnoreHttpException(bool  value) ;

/// @brief Method set_IsAborted, addr 0x17f87f0, size 0xc, virtual false, abstract: false, final false
inline void set_IsAborted(bool  value) ;

/// @brief Method set_Method, addr 0x17f8528, size 0x8, virtual false, abstract: false, final false
inline void set_Method(::StringW  value) ;

/// @brief Method set_Params, addr 0x17f86d8, size 0x8, virtual false, abstract: false, final false
inline void set_Params(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method set_ParseResponseBody, addr 0x17f86e8, size 0xc, virtual false, abstract: false, final false
inline void set_ParseResponseBody(bool  value) ;

/// @brief Method set_RedirectLimit, addr 0x17f85dc, size 0x8, virtual false, abstract: false, final false
inline void set_RedirectLimit(::System::Nullable_1<int32_t>  value) ;

/// @brief Method set_Request, addr 0x17f86fc, size 0x8, virtual false, abstract: false, final false
inline void set_Request(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method set_Retries, addr 0x17f8588, size 0x8, virtual false, abstract: false, final false
inline void set_Retries(int32_t  value) ;

/// @brief Method set_RetryCallback, addr 0x17f85a8, size 0x8, virtual false, abstract: false, final false
inline void set_RetryCallback(::System::Action_2<::Proyecto26::RequestException*,int32_t>*  value) ;

/// @brief Method set_RetrySecondsDelay, addr 0x17f8598, size 0x8, virtual false, abstract: false, final false
inline void set_RetrySecondsDelay(float_t  value) ;

/// @brief Method set_SimpleForm, addr 0x17f8610, size 0x8, virtual false, abstract: false, final false
inline void set_SimpleForm(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method set_Timeout, addr 0x17f8568, size 0x8, virtual false, abstract: false, final false
inline void set_Timeout(::System::Nullable_1<int32_t>  value) ;

/// @brief Method set_UploadHandler, addr 0x17f8640, size 0x8, virtual false, abstract: false, final false
inline void set_UploadHandler(::UnityEngine::Networking::UploadHandler*  value) ;

/// @brief Method set_Uri, addr 0x17f8518, size 0x8, virtual false, abstract: false, final false
inline void set_Uri(::StringW  value) ;

/// @brief Method set_UseHttpContinue, addr 0x17f85cc, size 0x8, virtual false, abstract: false, final false
inline void set_UseHttpContinue(::System::Nullable_1<bool>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RequestHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RequestHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RequestHelper(RequestHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RequestHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RequestHelper(RequestHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1738};

/// @brief Field _uri, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____uri;

/// @brief Field _method, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____method;

/// @brief Field _body, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ____body;

/// @brief Field _bodyString, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____bodyString;

/// @brief Field _bodyRaw, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____bodyRaw;

/// @brief Field _timeout, offset: 0x38, size: 0x8, def value: None
 ::System::Nullable_1<int32_t>  ____timeout;

/// @brief Field _contentType, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____contentType;

/// @brief Field _retries, offset: 0x48, size: 0x4, def value: None
 int32_t  ____retries;

/// @brief Field _retrySecondsDelay, offset: 0x4c, size: 0x4, def value: None
 float_t  ____retrySecondsDelay;

/// @brief Field _retryCallback, offset: 0x50, size: 0x8, def value: None
 ::System::Action_2<::Proyecto26::RequestException*,int32_t>*  ____retryCallback;

/// @brief Field _enableDebug, offset: 0x58, size: 0x1, def value: None
 bool  ____enableDebug;

/// @brief Field _useHttpContinue, offset: 0x59, size: 0x2, def value: None
 ::System::Nullable_1<bool>  ____useHttpContinue;

/// @brief Field _redirectLimit, offset: 0x5c, size: 0x8, def value: None
 ::System::Nullable_1<int32_t>  ____redirectLimit;

/// @brief Field _ignoreHttpException, offset: 0x64, size: 0x1, def value: None
 bool  ____ignoreHttpException;

/// @brief Field _formData, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::WWWForm*  ____formData;

/// @brief Field _simpleForm, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____simpleForm;

/// @brief Field _formSections, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*  ____formSections;

/// @brief Field _certificateHandler, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Networking::CertificateHandler*  ____certificateHandler;

/// @brief Field _uploadHandler, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Networking::UploadHandler*  ____uploadHandler;

/// @brief Field _downloadHandler, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::Networking::DownloadHandler*  ____downloadHandler;

/// @brief Field _headers, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____headers;

/// @brief Field _params, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____params;

/// @brief Field _parseResponseBody, offset: 0xa8, size: 0x1, def value: None
 bool  ____parseResponseBody;

/// @brief Field <Request>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____Request_k__BackingField;

/// @brief Field _isAborted, offset: 0xb8, size: 0x1, def value: None
 bool  ____isAborted;

/// @brief Field _defaultContentType, offset: 0xb9, size: 0x1, def value: None
 bool  ____defaultContentType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Proyecto26::RequestHelper, ____uri) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____method) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____body) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____bodyString) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____bodyRaw) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____timeout) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____contentType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____retries) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____retrySecondsDelay) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____retryCallback) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____enableDebug) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____useHttpContinue) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____redirectLimit) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____ignoreHttpException) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____formData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____simpleForm) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____formSections) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____certificateHandler) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____uploadHandler) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____downloadHandler) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____headers) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____params) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____parseResponseBody) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____Request_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____isAborted) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestHelper, ____defaultContentType) == 0xb9, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Proyecto26::RequestHelper, 0xc0>, "Size mismatch!");

} // namespace end def Proyecto26
NEED_NO_BOX(::Proyecto26::RequestHelper);
DEFINE_IL2CPP_ARG_TYPE(::Proyecto26::RequestHelper*, "Proyecto26", "RequestHelper");
