#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/ConfigManagerImpl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/RemoteConfig/zzzz__RemoteConfigRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConfigManagerImpl)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
class Object;
}
namespace Unity::Services::RemoteConfig {
struct ConfigManagerImpl__FetchConfigsAsync_d__31;
}
namespace Unity::Services::RemoteConfig {
struct ConfigManagerImpl__FetchConfigsAsync_d__34;
}
namespace Unity::Services::RemoteConfig {
struct ConfigOrigin;
}
namespace Unity::Services::RemoteConfig {
struct ConfigResponse;
}
namespace Unity::Services::RemoteConfig {
struct RequestHeaderTuple;
}
namespace Unity::Services::RemoteConfig {
class RuntimeConfig;
}
namespace Unity::Services::RemoteConfig {
class UnityAttributes;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace Unity::Services::RemoteConfig {
class ConfigManagerImpl;
}
namespace Unity::Services::RemoteConfig {
struct ConfigManagerImpl__FetchConfigsAsync_d__31;
}
namespace Unity::Services::RemoteConfig {
struct ConfigManagerImpl__FetchConfigsAsync_d__34;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::RemoteConfig::ConfigManagerImpl);
MARK_VAL_T(::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31);
MARK_VAL_T(::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace Unity::Services::RemoteConfig {
// Is value type: true
// CS Name: Unity.Services.RemoteConfig.ConfigManagerImpl/<FetchConfigsAsync>d__31
struct CORDL_TYPE ConfigManagerImpl__FetchConfigsAsync_d__31 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2ea9388, size 0xa20, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x2ea9f78, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ConfigManagerImpl__FetchConfigsAsync_d__31() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::RemoteConfig::RuntimeConfig*>", modifiers: "", def_value: None }, CppParam { name: "configType", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::RemoteConfig::ConfigManagerImpl*", modifiers: "", def_value: None }, CppParam { name: "userAttributes", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "appAttributes", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "filterAttributes", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_request_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None }, CppParam { name: "_requestOp_5__3", ty: "::UnityEngine::Networking::UnityWebRequestAsyncOperation*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr ConfigManagerImpl__FetchConfigsAsync_d__31(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::RemoteConfig::RuntimeConfig*>  __t__builder, ::StringW  configType, ::Unity::Services::RemoteConfig::ConfigManagerImpl*  __4__this, ::System::Object*  userAttributes, ::System::Object*  appAttributes, ::System::Object*  filterAttributes, ::UnityEngine::Networking::UnityWebRequest*  _request_5__2, ::UnityEngine::Networking::UnityWebRequestAsyncOperation*  _requestOp_5__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12214};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::RemoteConfig::RuntimeConfig*>  __t__builder;

/// @brief Field configType, offset: 0x20, size: 0x8, def value: None
 ::StringW  configType;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Unity::Services::RemoteConfig::ConfigManagerImpl*  __4__this;

/// @brief Field userAttributes, offset: 0x30, size: 0x8, def value: None
 ::System::Object*  userAttributes;

/// @brief Field appAttributes, offset: 0x38, size: 0x8, def value: None
 ::System::Object*  appAttributes;

/// @brief Field filterAttributes, offset: 0x40, size: 0x8, def value: None
 ::System::Object*  filterAttributes;

/// @brief Field <request>5__2, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field <requestOp>5__3, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequestAsyncOperation*  _requestOp_5__3;

/// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31, configType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31, userAttributes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31, appAttributes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31, filterAttributes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31, _request_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31, _requestOp_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31, __u__1) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31, 0x60>, "Size mismatch!");

} // namespace end def Unity::Services::RemoteConfig
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Unity::Services::RemoteConfig {
// Is value type: true
// CS Name: Unity.Services.RemoteConfig.ConfigManagerImpl/<FetchConfigsAsync>d__34
struct CORDL_TYPE ConfigManagerImpl__FetchConfigsAsync_d__34 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2ea9ff4, size 0x250, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x2eaa244, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ConfigManagerImpl__FetchConfigsAsync_d__34() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::RemoteConfig::RuntimeConfig*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::RemoteConfig::ConfigManagerImpl*", modifiers: "", def_value: None }, CppParam { name: "userAttributes", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "appAttributes", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::RemoteConfig::RuntimeConfig*>", modifiers: "", def_value: None }]
constexpr ConfigManagerImpl__FetchConfigsAsync_d__34(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::RemoteConfig::RuntimeConfig*>  __t__builder, ::Unity::Services::RemoteConfig::ConfigManagerImpl*  __4__this, ::System::Object*  userAttributes, ::System::Object*  appAttributes, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::RemoteConfig::RuntimeConfig*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12215};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::RemoteConfig::RuntimeConfig*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::RemoteConfig::ConfigManagerImpl*  __4__this;

/// @brief Field userAttributes, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  userAttributes;

/// @brief Field appAttributes, offset: 0x30, size: 0x8, def value: None
 ::System::Object*  appAttributes;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::RemoteConfig::RuntimeConfig*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34, userAttributes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34, appAttributes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34, 0x40>, "Size mismatch!");

} // namespace end def Unity::Services::RemoteConfig
// Dependencies System.Object, Unity.Services.RemoteConfig.RemoteConfigRequest
namespace Unity::Services::RemoteConfig {
// Is value type: false
// CS Name: Unity.Services.RemoteConfig.ConfigManagerImpl
class CORDL_TYPE ConfigManagerImpl : public ::System::Object {
public:
// Declarations
using _FetchConfigsAsync_d__31 = ::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31;

using _FetchConfigsAsync_d__34 = ::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34;

/// @brief Field FetchCompleted, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_FetchCompleted, put=__cordl_internal_set_FetchCompleted)) ::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*  FetchCompleted;

/// @brief Field _appConfig, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__appConfig, put=__cordl_internal_set__appConfig)) ::Unity::Services::RemoteConfig::RuntimeConfig*  _appConfig;

/// @brief Field _playerIdentityToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerIdentityToken, put=__cordl_internal_set__playerIdentityToken)) ::StringW  _playerIdentityToken;

/// @brief Field _remoteConfigRequest, offset 0x28, size 0x78 
 __declspec(property(get=__cordl_internal_get__remoteConfigRequest, put=__cordl_internal_set__remoteConfigRequest)) ::Unity::Services::RemoteConfig::RemoteConfigRequest  _remoteConfigRequest;

/// @brief Field _unityAttributes, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__unityAttributes, put=__cordl_internal_set__unityAttributes)) ::Unity::Services::RemoteConfig::UnityAttributes*  _unityAttributes;

 __declspec(property(get=get_appConfig, put=set_appConfig)) ::Unity::Services::RemoteConfig::RuntimeConfig*  appConfig;

/// @brief Field cacheFile, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_cacheFile, put=__cordl_internal_set_cacheFile)) ::StringW  cacheFile;

/// @brief Field configs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_configs, put=__cordl_internal_set_configs)) ::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Services::RemoteConfig::RuntimeConfig*>*  configs;

/// @brief Field rawResponseValidators, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rawResponseValidators, put=__cordl_internal_set_rawResponseValidators)) ::System::Collections::Generic::List_1<::System::Func_3<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*,::StringW,bool>*>*  rawResponseValidators;

/// @brief Field requestHeaderProviders, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestHeaderProviders, put=__cordl_internal_set_requestHeaderProviders)) ::System::Collections::Generic::List_1<::System::Func_1<::Unity::Services::RemoteConfig::RequestHeaderTuple>*>*  requestHeaderProviders;

/// @brief Method FetchConfigsAsync, addr 0x2ea842c, size 0x110, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Unity::Services::RemoteConfig::RuntimeConfig*>* FetchConfigsAsync(::StringW  configType, ::System::Object*  userAttributes, ::System::Object*  appAttributes, ::System::Object*  filterAttributes) ;

/// @brief Method FetchConfigsAsync, addr 0x2ea853c, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Unity::Services::RemoteConfig::RuntimeConfig*>* FetchConfigsAsync(::System::Object*  userAttributes, ::System::Object*  appAttributes) ;

/// @brief Method GetConfig, addr 0x2ea8634, size 0xf0, virtual false, abstract: false, final false
inline ::Unity::Services::RemoteConfig::RuntimeConfig* GetConfig(::StringW  configType) ;

/// @brief Method LoadFromCache, addr 0x2ea7a58, size 0x6f0, virtual false, abstract: false, final false
inline void LoadFromCache() ;

static inline ::Unity::Services::RemoteConfig::ConfigManagerImpl* New_ctor(::StringW  originService, ::StringW  attributionMetadataStr, ::StringW  cacheFileRC) ;

/// @brief Method ParseResponse, addr 0x2ea8148, size 0x2bc, virtual false, abstract: false, final false
inline ::Unity::Services::RemoteConfig::ConfigResponse ParseResponse(::Unity::Services::RemoteConfig::ConfigOrigin  origin, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers, ::StringW  body) ;

/// @brief Method PreparePayloadWithConfigType, addr 0x2ea8724, size 0x488, virtual false, abstract: false, final false
inline ::StringW PreparePayloadWithConfigType(::StringW  configType, ::System::Object*  userAttributes, ::System::Object*  appAttributes, ::System::Object*  filterAttributes) ;

/// @brief Method SaveCache, addr 0x2ea8bac, size 0x4f4, virtual false, abstract: false, final false
inline void SaveCache(::Unity::Services::RemoteConfig::ConfigResponse  response) ;

/// @brief Method SetAnalyticsUserID, addr 0x2ea8424, size 0x8, virtual false, abstract: false, final false
inline void SetAnalyticsUserID(::StringW  analyticsUserID) ;

/// @brief Method SetEnvironmentID, addr 0x2ea8404, size 0x8, virtual false, abstract: false, final false
inline void SetEnvironmentID(::StringW  environmentID) ;

/// @brief Method SetPlayerID, addr 0x2ea841c, size 0x8, virtual false, abstract: false, final false
inline void SetPlayerID(::StringW  playerID) ;

/// @brief Method SetPlayerIdentityToken, addr 0x2ea840c, size 0x8, virtual false, abstract: false, final false
inline void SetPlayerIdentityToken(::StringW  identityToken) ;

/// @brief Method SetUserID, addr 0x2ea8414, size 0x8, virtual false, abstract: false, final false
inline void SetUserID(::StringW  iid) ;

constexpr ::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>* const& __cordl_internal_get_FetchCompleted() const;

constexpr ::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*& __cordl_internal_get_FetchCompleted() ;

constexpr ::Unity::Services::RemoteConfig::RuntimeConfig* const& __cordl_internal_get__appConfig() const;

constexpr ::Unity::Services::RemoteConfig::RuntimeConfig*& __cordl_internal_get__appConfig() ;

constexpr ::StringW const& __cordl_internal_get__playerIdentityToken() const;

constexpr ::StringW& __cordl_internal_get__playerIdentityToken() ;

constexpr ::Unity::Services::RemoteConfig::RemoteConfigRequest const& __cordl_internal_get__remoteConfigRequest() const;

constexpr ::Unity::Services::RemoteConfig::RemoteConfigRequest& __cordl_internal_get__remoteConfigRequest() ;

constexpr ::Unity::Services::RemoteConfig::UnityAttributes* const& __cordl_internal_get__unityAttributes() const;

constexpr ::Unity::Services::RemoteConfig::UnityAttributes*& __cordl_internal_get__unityAttributes() ;

constexpr ::StringW const& __cordl_internal_get_cacheFile() const;

constexpr ::StringW& __cordl_internal_get_cacheFile() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Services::RemoteConfig::RuntimeConfig*>* const& __cordl_internal_get_configs() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Services::RemoteConfig::RuntimeConfig*>*& __cordl_internal_get_configs() ;

constexpr ::System::Collections::Generic::List_1<::System::Func_3<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*,::StringW,bool>*>* const& __cordl_internal_get_rawResponseValidators() const;

constexpr ::System::Collections::Generic::List_1<::System::Func_3<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*,::StringW,bool>*>*& __cordl_internal_get_rawResponseValidators() ;

constexpr ::System::Collections::Generic::List_1<::System::Func_1<::Unity::Services::RemoteConfig::RequestHeaderTuple>*>* const& __cordl_internal_get_requestHeaderProviders() const;

constexpr ::System::Collections::Generic::List_1<::System::Func_1<::Unity::Services::RemoteConfig::RequestHeaderTuple>*>*& __cordl_internal_get_requestHeaderProviders() ;

constexpr void __cordl_internal_set_FetchCompleted(::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*  value) ;

constexpr void __cordl_internal_set__appConfig(::Unity::Services::RemoteConfig::RuntimeConfig*  value) ;

constexpr void __cordl_internal_set__playerIdentityToken(::StringW  value) ;

constexpr void __cordl_internal_set__remoteConfigRequest(::Unity::Services::RemoteConfig::RemoteConfigRequest  value) ;

constexpr void __cordl_internal_set__unityAttributes(::Unity::Services::RemoteConfig::UnityAttributes*  value) ;

constexpr void __cordl_internal_set_cacheFile(::StringW  value) ;

constexpr void __cordl_internal_set_configs(::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Services::RemoteConfig::RuntimeConfig*>*  value) ;

constexpr void __cordl_internal_set_rawResponseValidators(::System::Collections::Generic::List_1<::System::Func_3<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*,::StringW,bool>*>*  value) ;

constexpr void __cordl_internal_set_requestHeaderProviders(::System::Collections::Generic::List_1<::System::Func_1<::Unity::Services::RemoteConfig::RequestHeaderTuple>*>*  value) ;

/// @brief Method .ctor, addr 0x2ea7398, size 0x408, virtual false, abstract: false, final false
inline void _ctor(::StringW  originService, ::StringW  attributionMetadataStr, ::StringW  cacheFileRC) ;

/// @brief Method add_FetchCompleted, addr 0x2ea7238, size 0xb0, virtual false, abstract: false, final false
inline void add_FetchCompleted(::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*  value) ;

/// @brief Method get_appConfig, addr 0x2ea7114, size 0xac, virtual false, abstract: false, final false
inline ::Unity::Services::RemoteConfig::RuntimeConfig* get_appConfig() ;

/// @brief Method remove_FetchCompleted, addr 0x2ea72e8, size 0xb0, virtual false, abstract: false, final false
inline void remove_FetchCompleted(::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*  value) ;

/// @brief Method set_appConfig, addr 0x2ea71c0, size 0x78, virtual false, abstract: false, final false
inline void set_appConfig(::Unity::Services::RemoteConfig::RuntimeConfig*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigManagerImpl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigManagerImpl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigManagerImpl(ConfigManagerImpl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigManagerImpl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigManagerImpl(ConfigManagerImpl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12216};

/// @brief Field _appConfig, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::RemoteConfig::RuntimeConfig*  ____appConfig;

/// @brief Field configs, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Services::RemoteConfig::RuntimeConfig*>*  ___configs;

/// @brief Field _playerIdentityToken, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____playerIdentityToken;

/// @brief Field _remoteConfigRequest, offset: 0x28, size: 0x78, def value: None
 ::Unity::Services::RemoteConfig::RemoteConfigRequest  ____remoteConfigRequest;

/// @brief Field _unityAttributes, offset: 0xa0, size: 0x8, def value: None
 ::Unity::Services::RemoteConfig::UnityAttributes*  ____unityAttributes;

/// @brief Field requestHeaderProviders, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Func_1<::Unity::Services::RemoteConfig::RequestHeaderTuple>*>*  ___requestHeaderProviders;

/// @brief Field rawResponseValidators, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Func_3<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*,::StringW,bool>*>*  ___rawResponseValidators;

/// @brief Field cacheFile, offset: 0xb8, size: 0x8, def value: None
 ::StringW  ___cacheFile;

/// @brief Field FetchCompleted, offset: 0xc0, size: 0x8, def value: None
 ::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*  ___FetchCompleted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl, ____appConfig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl, ___configs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl, ____playerIdentityToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl, ____remoteConfigRequest) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl, ____unityAttributes) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl, ___requestHeaderProviders) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl, ___rawResponseValidators) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl, ___cacheFile) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigManagerImpl, ___FetchCompleted) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::RemoteConfig::ConfigManagerImpl, 0xc8>, "Size mismatch!");

} // namespace end def Unity::Services::RemoteConfig
NEED_NO_BOX(::Unity::Services::RemoteConfig::ConfigManagerImpl);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::RemoteConfig::ConfigManagerImpl*, "Unity.Services.RemoteConfig", "ConfigManagerImpl");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31, "Unity.Services.RemoteConfig", "ConfigManagerImpl/<FetchConfigsAsync>d__31");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34, "Unity.Services.RemoteConfig", "ConfigManagerImpl/<FetchConfigsAsync>d__34");
