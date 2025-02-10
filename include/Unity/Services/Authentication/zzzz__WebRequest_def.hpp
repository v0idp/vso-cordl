#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/WebRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Authentication/zzzz__WebRequestVerb_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebRequest)
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace Unity::Services::Authentication {
class INetworkConfiguration;
}
namespace Unity::Services::Authentication {
struct WebRequestVerb;
}
namespace Unity::Services::Authentication {
template<typename T>
struct WebRequest__SendAsync_d__15_1;
}
namespace Unity::Services::Authentication {
class WebRequest___c__DisplayClass16_0;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class WebRequest;
}
namespace Unity::Services::Authentication {
class WebRequest___c__DisplayClass16_0;
}
namespace Unity::Services::Authentication {
template<typename T>
struct WebRequest__SendAsync_d__15_1;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::WebRequest);
MARK_REF_PTR_T(::Unity::Services::Authentication::WebRequest___c__DisplayClass16_0);
MARK_GEN_VAL_T(::Unity::Services::Authentication::WebRequest__SendAsync_d__15_1);
// Dependencies System.Object
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.WebRequest/<>c__DisplayClass16_0
class CORDL_TYPE WebRequest___c__DisplayClass16_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Unity::Services::Authentication::WebRequest*  __4__this;

/// @brief Field request, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

/// @brief Field tcs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*  tcs;

static inline ::Unity::Services::Authentication::WebRequest___c__DisplayClass16_0* New_ctor() ;

/// @brief Method <SendAttemptAsync>b__0, addr 0x2e99654, size 0x110, virtual false, abstract: false, final false
inline void _SendAttemptAsync_b__0(::UnityEngine::AsyncOperation*  operation) ;

constexpr ::Unity::Services::Authentication::WebRequest* const& __cordl_internal_get___4__this() const;

constexpr ::Unity::Services::Authentication::WebRequest*& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set___4__this(::Unity::Services::Authentication::WebRequest*  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x2e98c58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRequest___c__DisplayClass16_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRequest___c__DisplayClass16_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRequest___c__DisplayClass16_0(WebRequest___c__DisplayClass16_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRequest___c__DisplayClass16_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRequest___c__DisplayClass16_0(WebRequest___c__DisplayClass16_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11577};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::Authentication::WebRequest*  _____4__this;

/// @brief Field tcs, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*  ___tcs;

/// @brief Field request, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::WebRequest___c__DisplayClass16_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::WebRequest___c__DisplayClass16_0, ___tcs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::WebRequest___c__DisplayClass16_0, ___request) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::WebRequest___c__DisplayClass16_0, 0x28>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Unity::Services::Authentication {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.Services.Authentication.WebRequest/<SendAsync>d__15`1<T>
struct CORDL_TYPE WebRequest__SendAsync_d__15_1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WebRequest__SendAsync_d__15_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Authentication::WebRequest*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
constexpr WebRequest__SendAsync_d__15_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>  __t__builder, ::Unity::Services::Authentication::WebRequest*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11578};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Authentication::WebRequest*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Services::Authentication
// Dependencies System.Object, Unity.Services.Authentication.WebRequestVerb
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.WebRequest
class CORDL_TYPE WebRequest : public ::System::Object {
public:
// Declarations
template<typename T>
using _SendAsync_d__15_1 = ::Unity::Services::Authentication::WebRequest__SendAsync_d__15_1<T>;

using __c__DisplayClass16_0 = ::Unity::Services::Authentication::WebRequest___c__DisplayClass16_0;

 __declspec(property(get=get_Configuration)) ::Unity::Services::Authentication::INetworkConfiguration*  Configuration;

 __declspec(property(get=get_Retries, put=set_Retries)) int32_t  Retries;

/// @brief Field <Configuration>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Configuration_k__BackingField, put=__cordl_internal_set__Configuration_k__BackingField)) ::Unity::Services::Authentication::INetworkConfiguration*  _Configuration_k__BackingField;

/// @brief Field <Retries>k__BackingField, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__Retries_k__BackingField, put=__cordl_internal_set__Retries_k__BackingField)) int32_t  _Retries_k__BackingField;

/// @brief Field m_Headers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Headers, put=__cordl_internal_set_m_Headers)) ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  m_Headers;

/// @brief Field m_JsonSerializerSettings, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_JsonSerializerSettings, put=__cordl_internal_set_m_JsonSerializerSettings)) ::Newtonsoft::Json::JsonSerializerSettings*  m_JsonSerializerSettings;

/// @brief Field m_Payload, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Payload, put=__cordl_internal_set_m_Payload)) ::StringW  m_Payload;

/// @brief Field m_PayloadContentType, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PayloadContentType, put=__cordl_internal_set_m_PayloadContentType)) ::StringW  m_PayloadContentType;

/// @brief Field m_Url, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Url, put=__cordl_internal_set_m_Url)) ::StringW  m_Url;

/// @brief Field m_Verb, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Verb, put=__cordl_internal_set_m_Verb)) ::Unity::Services::Authentication::WebRequestVerb  m_Verb;

/// @brief Method Build, addr 0x2e98c60, size 0x67c, virtual false, abstract: false, final false
inline ::UnityEngine::Networking::UnityWebRequest* Build() ;

static inline ::Unity::Services::Authentication::WebRequest* New_ctor(::Unity::Services::Authentication::INetworkConfiguration*  configuration, ::Unity::Services::Authentication::WebRequestVerb  verb, ::StringW  url, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  headers, ::StringW  payload, ::StringW  payloadContentType) ;

/// @brief Method RequestCompleted, addr 0x2e992dc, size 0x224, virtual false, abstract: false, final false
inline void RequestCompleted(::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*  tcs, int64_t  responseCode, bool  isNetworkError, bool  isServerError, ::StringW  errorText, ::StringW  bodyText, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  headers) ;

/// @brief Method RequestHasNetworkError, addr 0x2e995d4, size 0x80, virtual false, abstract: false, final false
inline bool RequestHasNetworkError(::UnityEngine::Networking::UnityWebRequest*  request) ;

/// @brief Method RequestHasServerError, addr 0x2e995ac, size 0x28, virtual false, abstract: false, final false
inline bool RequestHasServerError(::UnityEngine::Networking::UnityWebRequest*  request) ;

/// @brief Method SendAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* SendAsync() ;

/// @brief Method SendAttemptAsync, addr 0x2e98ab4, size 0x1a4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* SendAttemptAsync(::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*  tcs) ;

constexpr ::Unity::Services::Authentication::INetworkConfiguration* const& __cordl_internal_get__Configuration_k__BackingField() const;

constexpr ::Unity::Services::Authentication::INetworkConfiguration*& __cordl_internal_get__Configuration_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Retries_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Retries_k__BackingField() ;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* const& __cordl_internal_get_m_Headers() const;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*& __cordl_internal_get_m_Headers() ;

constexpr ::Newtonsoft::Json::JsonSerializerSettings* const& __cordl_internal_get_m_JsonSerializerSettings() const;

constexpr ::Newtonsoft::Json::JsonSerializerSettings*& __cordl_internal_get_m_JsonSerializerSettings() ;

constexpr ::StringW const& __cordl_internal_get_m_Payload() const;

constexpr ::StringW& __cordl_internal_get_m_Payload() ;

constexpr ::StringW const& __cordl_internal_get_m_PayloadContentType() const;

constexpr ::StringW& __cordl_internal_get_m_PayloadContentType() ;

constexpr ::StringW const& __cordl_internal_get_m_Url() const;

constexpr ::StringW& __cordl_internal_get_m_Url() ;

constexpr ::Unity::Services::Authentication::WebRequestVerb const& __cordl_internal_get_m_Verb() const;

constexpr ::Unity::Services::Authentication::WebRequestVerb& __cordl_internal_get_m_Verb() ;

constexpr void __cordl_internal_set__Configuration_k__BackingField(::Unity::Services::Authentication::INetworkConfiguration*  value) ;

constexpr void __cordl_internal_set__Retries_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_m_Headers(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_m_JsonSerializerSettings(::Newtonsoft::Json::JsonSerializerSettings*  value) ;

constexpr void __cordl_internal_set_m_Payload(::StringW  value) ;

constexpr void __cordl_internal_set_m_PayloadContentType(::StringW  value) ;

constexpr void __cordl_internal_set_m_Url(::StringW  value) ;

constexpr void __cordl_internal_set_m_Verb(::Unity::Services::Authentication::WebRequestVerb  value) ;

/// @brief Method .ctor, addr 0x2e989f8, size 0xbc, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Authentication::INetworkConfiguration*  configuration, ::Unity::Services::Authentication::WebRequestVerb  verb, ::StringW  url, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  headers, ::StringW  payload, ::StringW  payloadContentType) ;

/// @brief Method get_Configuration, addr 0x2e989e0, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Authentication::INetworkConfiguration* get_Configuration() ;

/// @brief Method get_Retries, addr 0x2e989e8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Retries() ;

/// @brief Method set_Retries, addr 0x2e989f0, size 0x8, virtual false, abstract: false, final false
inline void set_Retries(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRequest(WebRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRequest(WebRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11579};

/// @brief Field m_Verb, offset: 0x10, size: 0x4, def value: None
 ::Unity::Services::Authentication::WebRequestVerb  ___m_Verb;

/// @brief Field m_Url, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___m_Url;

/// @brief Field m_Headers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  ___m_Headers;

/// @brief Field m_Payload, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___m_Payload;

/// @brief Field m_PayloadContentType, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___m_PayloadContentType;

/// @brief Field m_JsonSerializerSettings, offset: 0x38, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonSerializerSettings*  ___m_JsonSerializerSettings;

/// @brief Field <Configuration>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Unity::Services::Authentication::INetworkConfiguration*  ____Configuration_k__BackingField;

/// @brief Field <Retries>k__BackingField, offset: 0x48, size: 0x4, def value: None
 int32_t  ____Retries_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::WebRequest, ___m_Verb) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::WebRequest, ___m_Url) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::WebRequest, ___m_Headers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::WebRequest, ___m_Payload) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::WebRequest, ___m_PayloadContentType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::WebRequest, ___m_JsonSerializerSettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::WebRequest, ____Configuration_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::WebRequest, ____Retries_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::WebRequest, 0x50>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::WebRequest);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::WebRequest*, "Unity.Services.Authentication", "WebRequest");
NEED_NO_BOX(::Unity::Services::Authentication::WebRequest___c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::WebRequest___c__DisplayClass16_0*, "Unity.Services.Authentication", "WebRequest/<>c__DisplayClass16_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Services::Authentication::WebRequest__SendAsync_d__15_1, "Unity.Services.Authentication", "WebRequest/<SendAsync>d__15`1");
