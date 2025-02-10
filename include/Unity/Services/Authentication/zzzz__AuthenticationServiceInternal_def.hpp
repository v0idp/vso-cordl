#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AuthenticationServiceInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Authentication/zzzz__AuthenticationState_def.hpp"
#include "Unity/Services/Authentication/zzzz__IAuthenticationService_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticationServiceInternal)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Unity::Services::Authentication::Generated {
class IPlayerNamesApi;
}
namespace Unity::Services::Authentication {
class AccessTokenComponent;
}
namespace Unity::Services::Authentication {
struct AuthenticationServiceInternal__HandleSignInRequestAsync_d__140;
}
namespace Unity::Services::Authentication {
struct AuthenticationServiceInternal__StartRefreshAsync_d__142;
}
namespace Unity::Services::Authentication {
class AuthenticationServiceInternal___c;
}
namespace Unity::Services::Authentication {
class AuthenticationServiceInternal___c__DisplayClass90_0;
}
namespace Unity::Services::Authentication {
struct AuthenticationState;
}
namespace Unity::Services::Authentication {
class EnvironmentIdComponent;
}
namespace Unity::Services::Authentication {
class IAuthenticationCache;
}
namespace Unity::Services::Authentication {
class IAuthenticationExceptionHandler;
}
namespace Unity::Services::Authentication {
class IAuthenticationMetrics;
}
namespace Unity::Services::Authentication {
class IAuthenticationNetworkClient;
}
namespace Unity::Services::Authentication {
class IAuthenticationSettings;
}
namespace Unity::Services::Authentication {
class IJwtDecoder;
}
namespace Unity::Services::Authentication {
class IProfile;
}
namespace Unity::Services::Authentication {
class PlayerIdComponent;
}
namespace Unity::Services::Authentication {
class PlayerInfo;
}
namespace Unity::Services::Authentication {
class PlayerNameComponent;
}
namespace Unity::Services::Authentication {
class SessionTokenComponent;
}
namespace Unity::Services::Authentication {
class SignInOptions;
}
namespace Unity::Services::Authentication {
class SignInResponse;
}
namespace Unity::Services::Core::Scheduler::Internal {
class IActionScheduler;
}
namespace Unity::Services::Core {
class RequestFailedException;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class AuthenticationServiceInternal;
}
namespace Unity::Services::Authentication {
class AuthenticationServiceInternal___c;
}
namespace Unity::Services::Authentication {
class AuthenticationServiceInternal___c__DisplayClass90_0;
}
namespace Unity::Services::Authentication {
struct AuthenticationServiceInternal__HandleSignInRequestAsync_d__140;
}
namespace Unity::Services::Authentication {
struct AuthenticationServiceInternal__StartRefreshAsync_d__142;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::AuthenticationServiceInternal);
MARK_REF_PTR_T(::Unity::Services::Authentication::AuthenticationServiceInternal___c);
MARK_REF_PTR_T(::Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0);
MARK_VAL_T(::Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140);
MARK_VAL_T(::Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142);
// Dependencies System.Object
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.AuthenticationServiceInternal/<>c
class CORDL_TYPE AuthenticationServiceInternal___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Unity::Services::Authentication::AuthenticationServiceInternal___c*  __9;

/// @brief Field <>9__143_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__143_0, put=setStaticF___9__143_0)) ::System::Func_2<::StringW,bool>*  __9__143_0;

static inline ::Unity::Services::Authentication::AuthenticationServiceInternal___c* New_ctor() ;

/// @brief Method <CompleteSignIn>b__143_0, addr 0x2e950a8, size 0x54, virtual false, abstract: false, final false
inline bool _CompleteSignIn_b__143_0(::StringW  s) ;

/// @brief Method .ctor, addr 0x2e950a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Services::Authentication::AuthenticationServiceInternal___c* getStaticF___9() ;

static inline ::System::Func_2<::StringW,bool>* getStaticF___9__143_0() ;

static inline void setStaticF___9(::Unity::Services::Authentication::AuthenticationServiceInternal___c*  value) ;

static inline void setStaticF___9__143_0(::System::Func_2<::StringW,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationServiceInternal___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationServiceInternal___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationServiceInternal___c(AuthenticationServiceInternal___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationServiceInternal___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationServiceInternal___c(AuthenticationServiceInternal___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11517};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::AuthenticationServiceInternal___c, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
// Dependencies System.Object
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass90_0
class CORDL_TYPE AuthenticationServiceInternal___c__DisplayClass90_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Unity::Services::Authentication::AuthenticationServiceInternal*  __4__this;

/// @brief Field sessionToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionToken, put=__cordl_internal_set_sessionToken)) ::StringW  sessionToken;

static inline ::Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0* New_ctor() ;

/// @brief Method <SignInAnonymouslyAsync>b__0, addr 0x2e950fc, size 0xb4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>* _SignInAnonymouslyAsync_b__0() ;

constexpr ::Unity::Services::Authentication::AuthenticationServiceInternal* const& __cordl_internal_get___4__this() const;

constexpr ::Unity::Services::Authentication::AuthenticationServiceInternal*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_sessionToken() const;

constexpr ::StringW& __cordl_internal_get_sessionToken() ;

constexpr void __cordl_internal_set___4__this(::Unity::Services::Authentication::AuthenticationServiceInternal*  value) ;

constexpr void __cordl_internal_set_sessionToken(::StringW  value) ;

/// @brief Method .ctor, addr 0x2e93b7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationServiceInternal___c__DisplayClass90_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationServiceInternal___c__DisplayClass90_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationServiceInternal___c__DisplayClass90_0(AuthenticationServiceInternal___c__DisplayClass90_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationServiceInternal___c__DisplayClass90_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationServiceInternal___c__DisplayClass90_0(AuthenticationServiceInternal___c__DisplayClass90_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11518};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::Authentication::AuthenticationServiceInternal*  _____4__this;

/// @brief Field sessionToken, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___sessionToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0, ___sessionToken) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0, 0x20>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Unity::Services::Authentication {
// Is value type: true
// CS Name: Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__140
struct CORDL_TYPE AuthenticationServiceInternal__HandleSignInRequestAsync_d__140 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2e951b0, size 0x498, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x2e95768, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationServiceInternal__HandleSignInRequestAsync_d__140() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Authentication::AuthenticationServiceInternal*", modifiers: "", def_value: None }, CppParam { name: "signInRequest", ty: "::System::Func_1<::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>*>*", modifiers: "", def_value: None }, CppParam { name: "enableRefresh", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Authentication::SignInResponse*>", modifiers: "", def_value: None }]
constexpr AuthenticationServiceInternal__HandleSignInRequestAsync_d__140(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Unity::Services::Authentication::AuthenticationServiceInternal*  __4__this, ::System::Func_1<::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>*>*  signInRequest, bool  enableRefresh, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Authentication::SignInResponse*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11519};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Authentication::AuthenticationServiceInternal*  __4__this;

/// @brief Field signInRequest, offset: 0x28, size: 0x8, def value: None
 ::System::Func_1<::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>*>*  signInRequest;

/// @brief Field enableRefresh, offset: 0x30, size: 0x1, def value: None
 bool  enableRefresh;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Authentication::SignInResponse*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140, signInRequest) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140, enableRefresh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140, 0x40>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Unity::Services::Authentication {
// Is value type: true
// CS Name: Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__142
struct CORDL_TYPE AuthenticationServiceInternal__StartRefreshAsync_d__142 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2e957d0, size 0x4b4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x2e95da4, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationServiceInternal__StartRefreshAsync_d__142() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Authentication::AuthenticationServiceInternal*", modifiers: "", def_value: None }, CppParam { name: "sessionToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Authentication::SignInResponse*>", modifiers: "", def_value: None }]
constexpr AuthenticationServiceInternal__StartRefreshAsync_d__142(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Unity::Services::Authentication::AuthenticationServiceInternal*  __4__this, ::StringW  sessionToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Authentication::SignInResponse*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11520};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Authentication::AuthenticationServiceInternal*  __4__this;

/// @brief Field sessionToken, offset: 0x28, size: 0x8, def value: None
 ::StringW  sessionToken;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Authentication::SignInResponse*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142, sessionToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142, 0x38>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
// Dependencies System.Nullable`1<T>, System.Object, Unity.Services.Authentication.AuthenticationState, Unity.Services.Authentication.IAuthenticationService
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.AuthenticationServiceInternal
class CORDL_TYPE AuthenticationServiceInternal : public ::System::Object {
public:
// Declarations
using _HandleSignInRequestAsync_d__140 = ::Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140;

using _StartRefreshAsync_d__142 = ::Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142;

using __c = ::Unity::Services::Authentication::AuthenticationServiceInternal___c;

using __c__DisplayClass90_0 = ::Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0;

 __declspec(property(get=get_AccessTokenComponent)) ::Unity::Services::Authentication::AccessTokenComponent*  AccessTokenComponent;

 __declspec(property(get=get_EnvironmentIdComponent)) ::Unity::Services::Authentication::EnvironmentIdComponent*  EnvironmentIdComponent;

 __declspec(property(get=get_ExceptionHandler, put=set_ExceptionHandler)) ::Unity::Services::Authentication::IAuthenticationExceptionHandler*  ExceptionHandler;

 __declspec(property(get=get_ExpirationActionId, put=set_ExpirationActionId)) ::System::Nullable_1<int64_t>  ExpirationActionId;

/// @brief Field Expired, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Expired, put=__cordl_internal_set_Expired)) ::System::Action*  Expired;

 __declspec(property(get=get_IsSignedIn)) bool  IsSignedIn;

 __declspec(property(get=get_NetworkClient, put=set_NetworkClient)) ::Unity::Services::Authentication::IAuthenticationNetworkClient*  NetworkClient;

 __declspec(property(get=get_PlayerIdComponent)) ::Unity::Services::Authentication::PlayerIdComponent*  PlayerIdComponent;

 __declspec(property(put=set_PlayerInfo)) ::Unity::Services::Authentication::PlayerInfo*  PlayerInfo;

 __declspec(property(get=get_PlayerNameComponent)) ::Unity::Services::Authentication::PlayerNameComponent*  PlayerNameComponent;

 __declspec(property(put=set_PlayerNamesApi)) ::Unity::Services::Authentication::Generated::IPlayerNamesApi*  PlayerNamesApi;

 __declspec(property(get=get_RefreshActionId, put=set_RefreshActionId)) ::System::Nullable_1<int64_t>  RefreshActionId;

 __declspec(property(get=get_SessionTokenComponent)) ::Unity::Services::Authentication::SessionTokenComponent*  SessionTokenComponent;

 __declspec(property(get=get_SessionTokenExists)) bool  SessionTokenExists;

 __declspec(property(get=get_Settings)) ::Unity::Services::Authentication::IAuthenticationSettings*  Settings;

/// @brief Field SignInFailed, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_SignInFailed, put=__cordl_internal_set_SignInFailed)) ::System::Action_1<::Unity::Services::Core::RequestFailedException*>*  SignInFailed;

/// @brief Field SignedIn, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_SignedIn, put=__cordl_internal_set_SignedIn)) ::System::Action*  SignedIn;

/// @brief Field SignedOut, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SignedOut, put=__cordl_internal_set_SignedOut)) ::System::Action*  SignedOut;

 __declspec(property(get=get_State, put=set_State)) ::Unity::Services::Authentication::AuthenticationState  State;

/// @brief Field StateChanged, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_StateChanged, put=__cordl_internal_set_StateChanged)) ::System::Action_2<::Unity::Services::Authentication::AuthenticationState,::Unity::Services::Authentication::AuthenticationState>*  StateChanged;

/// @brief Field <AccessTokenComponent>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__AccessTokenComponent_k__BackingField, put=__cordl_internal_set__AccessTokenComponent_k__BackingField)) ::Unity::Services::Authentication::AccessTokenComponent*  _AccessTokenComponent_k__BackingField;

/// @brief Field <EnvironmentIdComponent>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__EnvironmentIdComponent_k__BackingField, put=__cordl_internal_set__EnvironmentIdComponent_k__BackingField)) ::Unity::Services::Authentication::EnvironmentIdComponent*  _EnvironmentIdComponent_k__BackingField;

/// @brief Field <ExceptionHandler>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__ExceptionHandler_k__BackingField, put=__cordl_internal_set__ExceptionHandler_k__BackingField)) ::Unity::Services::Authentication::IAuthenticationExceptionHandler*  _ExceptionHandler_k__BackingField;

/// @brief Field <ExpirationActionId>k__BackingField, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__ExpirationActionId_k__BackingField, put=__cordl_internal_set__ExpirationActionId_k__BackingField)) ::System::Nullable_1<int64_t>  _ExpirationActionId_k__BackingField;

/// @brief Field <NetworkClient>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__NetworkClient_k__BackingField, put=__cordl_internal_set__NetworkClient_k__BackingField)) ::Unity::Services::Authentication::IAuthenticationNetworkClient*  _NetworkClient_k__BackingField;

/// @brief Field <PlayerIdComponent>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayerIdComponent_k__BackingField, put=__cordl_internal_set__PlayerIdComponent_k__BackingField)) ::Unity::Services::Authentication::PlayerIdComponent*  _PlayerIdComponent_k__BackingField;

/// @brief Field <PlayerInfo>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayerInfo_k__BackingField, put=__cordl_internal_set__PlayerInfo_k__BackingField)) ::Unity::Services::Authentication::PlayerInfo*  _PlayerInfo_k__BackingField;

/// @brief Field <PlayerNameComponent>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayerNameComponent_k__BackingField, put=__cordl_internal_set__PlayerNameComponent_k__BackingField)) ::Unity::Services::Authentication::PlayerNameComponent*  _PlayerNameComponent_k__BackingField;

/// @brief Field <PlayerNamesApi>k__BackingField, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayerNamesApi_k__BackingField, put=__cordl_internal_set__PlayerNamesApi_k__BackingField)) ::Unity::Services::Authentication::Generated::IPlayerNamesApi*  _PlayerNamesApi_k__BackingField;

/// @brief Field <RefreshActionId>k__BackingField, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__RefreshActionId_k__BackingField, put=__cordl_internal_set__RefreshActionId_k__BackingField)) ::System::Nullable_1<int64_t>  _RefreshActionId_k__BackingField;

/// @brief Field <SessionTokenComponent>k__BackingField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__SessionTokenComponent_k__BackingField, put=__cordl_internal_set__SessionTokenComponent_k__BackingField)) ::Unity::Services::Authentication::SessionTokenComponent*  _SessionTokenComponent_k__BackingField;

/// @brief Field <Settings>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__Settings_k__BackingField, put=__cordl_internal_set__Settings_k__BackingField)) ::Unity::Services::Authentication::IAuthenticationSettings*  _Settings_k__BackingField;

/// @brief Field <State>k__BackingField, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__State_k__BackingField, put=__cordl_internal_set__State_k__BackingField)) ::Unity::Services::Authentication::AuthenticationState  _State_k__BackingField;

/// @brief Field m_Cache, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Cache, put=__cordl_internal_set_m_Cache)) ::Unity::Services::Authentication::IAuthenticationCache*  m_Cache;

/// @brief Field m_JwtDecoder, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_JwtDecoder, put=__cordl_internal_set_m_JwtDecoder)) ::Unity::Services::Authentication::IJwtDecoder*  m_JwtDecoder;

/// @brief Field m_Metrics, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Metrics, put=__cordl_internal_set_m_Metrics)) ::Unity::Services::Authentication::IAuthenticationMetrics*  m_Metrics;

/// @brief Field m_Profile, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Profile, put=__cordl_internal_set_m_Profile)) ::Unity::Services::Authentication::IProfile*  m_Profile;

/// @brief Field m_Scheduler, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Scheduler, put=__cordl_internal_set_m_Scheduler)) ::Unity::Services::Core::Scheduler::Internal::IActionScheduler*  m_Scheduler;

/// @brief Convert operator to "::Unity::Services::Authentication::IAuthenticationService"
constexpr operator  ::Unity::Services::Authentication::IAuthenticationService*() noexcept;

/// @brief Method CancelScheduledExpiration, addr 0x2e93fac, size 0x100, virtual false, abstract: false, final false
inline void CancelScheduledExpiration() ;

/// @brief Method CancelScheduledRefresh, addr 0x2e93eac, size 0x100, virtual false, abstract: false, final false
inline void CancelScheduledRefresh() ;

/// @brief Method ChangeState, addr 0x2e940ac, size 0x20, virtual false, abstract: false, final false
inline void ChangeState(::Unity::Services::Authentication::AuthenticationState  newState) ;

/// @brief Method CompleteSignIn, addr 0x2e94278, size 0x59c, virtual false, abstract: false, final false
inline void CompleteSignIn(::Unity::Services::Authentication::SignInResponse*  response, bool  enableRefresh) ;

/// @brief Method ExecuteScheduledExpiration, addr 0x2e94ccc, size 0x8, virtual false, abstract: false, final false
inline void ExecuteScheduledExpiration() ;

/// @brief Method ExecuteScheduledRefresh, addr 0x2e94cc4, size 0x8, virtual false, abstract: false, final false
inline void ExecuteScheduledRefresh() ;

/// @brief Method Expire, addr 0x2e94cd4, size 0x54, virtual false, abstract: false, final false
inline void Expire() ;

/// @brief Method HandleSignInRequestAsync, addr 0x2e93c8c, size 0xdc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* HandleSignInRequestAsync(::System::Func_1<::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>*>*  signInRequest, bool  enableRefresh) ;

/// @brief Method HandleStateChanged, addr 0x2e94f08, size 0x98, virtual false, abstract: false, final false
inline void HandleStateChanged(::Unity::Services::Authentication::AuthenticationState  oldState, ::Unity::Services::Authentication::AuthenticationState  newState) ;

/// @brief Method MigrateCache, addr 0x2e935ec, size 0x98, virtual false, abstract: false, final false
inline void MigrateCache() ;

static inline ::Unity::Services::Authentication::AuthenticationServiceInternal* New_ctor(::Unity::Services::Authentication::IAuthenticationSettings*  settings, ::Unity::Services::Authentication::IAuthenticationNetworkClient*  networkClient, ::Unity::Services::Authentication::Generated::IPlayerNamesApi*  playerNamesApi, ::Unity::Services::Authentication::IProfile*  profile, ::Unity::Services::Authentication::IJwtDecoder*  jwtDecoder, ::Unity::Services::Authentication::IAuthenticationCache*  cache, ::Unity::Services::Core::Scheduler::Internal::IActionScheduler*  scheduler, ::Unity::Services::Authentication::IAuthenticationMetrics*  metrics, ::Unity::Services::Authentication::AccessTokenComponent*  accessToken, ::Unity::Services::Authentication::EnvironmentIdComponent*  environmentId, ::Unity::Services::Authentication::PlayerIdComponent*  playerId, ::Unity::Services::Authentication::PlayerNameComponent*  playerName, ::Unity::Services::Authentication::SessionTokenComponent*  sessionToken) ;

/// @brief Method OnPlayerIdChanged, addr 0x2e93734, size 0x18, virtual false, abstract: false, final false
inline void OnPlayerIdChanged(::StringW  playerId) ;

/// @brief Method RefreshAccessTokenAsync, addr 0x2e940cc, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* RefreshAccessTokenAsync() ;

/// @brief Method ScheduleExpiration, addr 0x2e94b80, size 0x144, virtual false, abstract: false, final false
inline void ScheduleExpiration(double_t  delay) ;

/// @brief Method ScheduleRefresh, addr 0x2e949b0, size 0x1d0, virtual false, abstract: false, final false
inline void ScheduleRefresh(double_t  delay) ;

/// @brief Method SendSignInFailedEvent, addr 0x2e93c40, size 0x4c, virtual false, abstract: false, final false
inline void SendSignInFailedEvent(::Unity::Services::Core::RequestFailedException*  exception, bool  forceSignOut) ;

/// @brief Method SignInAnonymouslyAsync, addr 0x2e93808, size 0x374, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* SignInAnonymouslyAsync(::Unity::Services::Authentication::SignInOptions*  options) ;

/// @brief Method SignOut, addr 0x2e93d68, size 0x7c, virtual true, abstract: false, final true
inline void SignOut(bool  clearCredentials) ;

/// @brief Method StartRefreshAsync, addr 0x2e941a4, size 0xd4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* StartRefreshAsync(::StringW  sessionToken) ;

constexpr ::System::Action* const& __cordl_internal_get_Expired() const;

constexpr ::System::Action*& __cordl_internal_get_Expired() ;

constexpr ::System::Action_1<::Unity::Services::Core::RequestFailedException*>* const& __cordl_internal_get_SignInFailed() const;

constexpr ::System::Action_1<::Unity::Services::Core::RequestFailedException*>*& __cordl_internal_get_SignInFailed() ;

constexpr ::System::Action* const& __cordl_internal_get_SignedIn() const;

constexpr ::System::Action*& __cordl_internal_get_SignedIn() ;

constexpr ::System::Action* const& __cordl_internal_get_SignedOut() const;

constexpr ::System::Action*& __cordl_internal_get_SignedOut() ;

constexpr ::System::Action_2<::Unity::Services::Authentication::AuthenticationState,::Unity::Services::Authentication::AuthenticationState>* const& __cordl_internal_get_StateChanged() const;

constexpr ::System::Action_2<::Unity::Services::Authentication::AuthenticationState,::Unity::Services::Authentication::AuthenticationState>*& __cordl_internal_get_StateChanged() ;

constexpr ::Unity::Services::Authentication::AccessTokenComponent* const& __cordl_internal_get__AccessTokenComponent_k__BackingField() const;

constexpr ::Unity::Services::Authentication::AccessTokenComponent*& __cordl_internal_get__AccessTokenComponent_k__BackingField() ;

constexpr ::Unity::Services::Authentication::EnvironmentIdComponent* const& __cordl_internal_get__EnvironmentIdComponent_k__BackingField() const;

constexpr ::Unity::Services::Authentication::EnvironmentIdComponent*& __cordl_internal_get__EnvironmentIdComponent_k__BackingField() ;

constexpr ::Unity::Services::Authentication::IAuthenticationExceptionHandler* const& __cordl_internal_get__ExceptionHandler_k__BackingField() const;

constexpr ::Unity::Services::Authentication::IAuthenticationExceptionHandler*& __cordl_internal_get__ExceptionHandler_k__BackingField() ;

constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__ExpirationActionId_k__BackingField() const;

constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__ExpirationActionId_k__BackingField() ;

constexpr ::Unity::Services::Authentication::IAuthenticationNetworkClient* const& __cordl_internal_get__NetworkClient_k__BackingField() const;

constexpr ::Unity::Services::Authentication::IAuthenticationNetworkClient*& __cordl_internal_get__NetworkClient_k__BackingField() ;

constexpr ::Unity::Services::Authentication::PlayerIdComponent* const& __cordl_internal_get__PlayerIdComponent_k__BackingField() const;

constexpr ::Unity::Services::Authentication::PlayerIdComponent*& __cordl_internal_get__PlayerIdComponent_k__BackingField() ;

constexpr ::Unity::Services::Authentication::PlayerInfo* const& __cordl_internal_get__PlayerInfo_k__BackingField() const;

constexpr ::Unity::Services::Authentication::PlayerInfo*& __cordl_internal_get__PlayerInfo_k__BackingField() ;

constexpr ::Unity::Services::Authentication::PlayerNameComponent* const& __cordl_internal_get__PlayerNameComponent_k__BackingField() const;

constexpr ::Unity::Services::Authentication::PlayerNameComponent*& __cordl_internal_get__PlayerNameComponent_k__BackingField() ;

constexpr ::Unity::Services::Authentication::Generated::IPlayerNamesApi* const& __cordl_internal_get__PlayerNamesApi_k__BackingField() const;

constexpr ::Unity::Services::Authentication::Generated::IPlayerNamesApi*& __cordl_internal_get__PlayerNamesApi_k__BackingField() ;

constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__RefreshActionId_k__BackingField() const;

constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__RefreshActionId_k__BackingField() ;

constexpr ::Unity::Services::Authentication::SessionTokenComponent* const& __cordl_internal_get__SessionTokenComponent_k__BackingField() const;

constexpr ::Unity::Services::Authentication::SessionTokenComponent*& __cordl_internal_get__SessionTokenComponent_k__BackingField() ;

constexpr ::Unity::Services::Authentication::IAuthenticationSettings* const& __cordl_internal_get__Settings_k__BackingField() const;

constexpr ::Unity::Services::Authentication::IAuthenticationSettings*& __cordl_internal_get__Settings_k__BackingField() ;

constexpr ::Unity::Services::Authentication::AuthenticationState const& __cordl_internal_get__State_k__BackingField() const;

constexpr ::Unity::Services::Authentication::AuthenticationState& __cordl_internal_get__State_k__BackingField() ;

constexpr ::Unity::Services::Authentication::IAuthenticationCache* const& __cordl_internal_get_m_Cache() const;

constexpr ::Unity::Services::Authentication::IAuthenticationCache*& __cordl_internal_get_m_Cache() ;

constexpr ::Unity::Services::Authentication::IJwtDecoder* const& __cordl_internal_get_m_JwtDecoder() const;

constexpr ::Unity::Services::Authentication::IJwtDecoder*& __cordl_internal_get_m_JwtDecoder() ;

constexpr ::Unity::Services::Authentication::IAuthenticationMetrics* const& __cordl_internal_get_m_Metrics() const;

constexpr ::Unity::Services::Authentication::IAuthenticationMetrics*& __cordl_internal_get_m_Metrics() ;

constexpr ::Unity::Services::Authentication::IProfile* const& __cordl_internal_get_m_Profile() const;

constexpr ::Unity::Services::Authentication::IProfile*& __cordl_internal_get_m_Profile() ;

constexpr ::Unity::Services::Core::Scheduler::Internal::IActionScheduler* const& __cordl_internal_get_m_Scheduler() const;

constexpr ::Unity::Services::Core::Scheduler::Internal::IActionScheduler*& __cordl_internal_get_m_Scheduler() ;

constexpr void __cordl_internal_set_Expired(::System::Action*  value) ;

constexpr void __cordl_internal_set_SignInFailed(::System::Action_1<::Unity::Services::Core::RequestFailedException*>*  value) ;

constexpr void __cordl_internal_set_SignedIn(::System::Action*  value) ;

constexpr void __cordl_internal_set_SignedOut(::System::Action*  value) ;

constexpr void __cordl_internal_set_StateChanged(::System::Action_2<::Unity::Services::Authentication::AuthenticationState,::Unity::Services::Authentication::AuthenticationState>*  value) ;

constexpr void __cordl_internal_set__AccessTokenComponent_k__BackingField(::Unity::Services::Authentication::AccessTokenComponent*  value) ;

constexpr void __cordl_internal_set__EnvironmentIdComponent_k__BackingField(::Unity::Services::Authentication::EnvironmentIdComponent*  value) ;

constexpr void __cordl_internal_set__ExceptionHandler_k__BackingField(::Unity::Services::Authentication::IAuthenticationExceptionHandler*  value) ;

constexpr void __cordl_internal_set__ExpirationActionId_k__BackingField(::System::Nullable_1<int64_t>  value) ;

constexpr void __cordl_internal_set__NetworkClient_k__BackingField(::Unity::Services::Authentication::IAuthenticationNetworkClient*  value) ;

constexpr void __cordl_internal_set__PlayerIdComponent_k__BackingField(::Unity::Services::Authentication::PlayerIdComponent*  value) ;

constexpr void __cordl_internal_set__PlayerInfo_k__BackingField(::Unity::Services::Authentication::PlayerInfo*  value) ;

constexpr void __cordl_internal_set__PlayerNameComponent_k__BackingField(::Unity::Services::Authentication::PlayerNameComponent*  value) ;

constexpr void __cordl_internal_set__PlayerNamesApi_k__BackingField(::Unity::Services::Authentication::Generated::IPlayerNamesApi*  value) ;

constexpr void __cordl_internal_set__RefreshActionId_k__BackingField(::System::Nullable_1<int64_t>  value) ;

constexpr void __cordl_internal_set__SessionTokenComponent_k__BackingField(::Unity::Services::Authentication::SessionTokenComponent*  value) ;

constexpr void __cordl_internal_set__Settings_k__BackingField(::Unity::Services::Authentication::IAuthenticationSettings*  value) ;

constexpr void __cordl_internal_set__State_k__BackingField(::Unity::Services::Authentication::AuthenticationState  value) ;

constexpr void __cordl_internal_set_m_Cache(::Unity::Services::Authentication::IAuthenticationCache*  value) ;

constexpr void __cordl_internal_set_m_JwtDecoder(::Unity::Services::Authentication::IJwtDecoder*  value) ;

constexpr void __cordl_internal_set_m_Metrics(::Unity::Services::Authentication::IAuthenticationMetrics*  value) ;

constexpr void __cordl_internal_set_m_Profile(::Unity::Services::Authentication::IProfile*  value) ;

constexpr void __cordl_internal_set_m_Scheduler(::Unity::Services::Core::Scheduler::Internal::IActionScheduler*  value) ;

/// @brief Method <.ctor>b__88_0, addr 0x2e94fa0, size 0xa4, virtual false, abstract: false, final false
inline void __ctor_b__88_0() ;

/// @brief Method .ctor, addr 0x2e9341c, size 0x1a8, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Authentication::IAuthenticationSettings*  settings, ::Unity::Services::Authentication::IAuthenticationNetworkClient*  networkClient, ::Unity::Services::Authentication::Generated::IPlayerNamesApi*  playerNamesApi, ::Unity::Services::Authentication::IProfile*  profile, ::Unity::Services::Authentication::IJwtDecoder*  jwtDecoder, ::Unity::Services::Authentication::IAuthenticationCache*  cache, ::Unity::Services::Core::Scheduler::Internal::IActionScheduler*  scheduler, ::Unity::Services::Authentication::IAuthenticationMetrics*  metrics, ::Unity::Services::Authentication::AccessTokenComponent*  accessToken, ::Unity::Services::Authentication::EnvironmentIdComponent*  environmentId, ::Unity::Services::Authentication::PlayerIdComponent*  playerId, ::Unity::Services::Authentication::PlayerNameComponent*  playerName, ::Unity::Services::Authentication::SessionTokenComponent*  sessionToken) ;

/// @brief Method add_Expired, addr 0x2e93208, size 0x9c, virtual true, abstract: false, final true
inline void add_Expired(::System::Action*  value) ;

/// @brief Method get_AccessTokenComponent, addr 0x2e933b4, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Authentication::AccessTokenComponent* get_AccessTokenComponent() ;

/// @brief Method get_EnvironmentIdComponent, addr 0x2e933bc, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Authentication::EnvironmentIdComponent* get_EnvironmentIdComponent() ;

/// @brief Method get_ExceptionHandler, addr 0x2e9340c, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Authentication::IAuthenticationExceptionHandler* get_ExceptionHandler() ;

/// @brief Method get_ExpirationActionId, addr 0x2e9338c, size 0xc, virtual false, abstract: false, final false
inline ::System::Nullable_1<int64_t> get_ExpirationActionId() ;

/// @brief Method get_IsSignedIn, addr 0x2e93340, size 0x14, virtual true, abstract: false, final true
inline bool get_IsSignedIn() ;

/// @brief Method get_NetworkClient, addr 0x2e933f4, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Authentication::IAuthenticationNetworkClient* get_NetworkClient() ;

/// @brief Method get_PlayerIdComponent, addr 0x2e933c4, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Authentication::PlayerIdComponent* get_PlayerIdComponent() ;

/// @brief Method get_PlayerNameComponent, addr 0x2e933cc, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Authentication::PlayerNameComponent* get_PlayerNameComponent() ;

/// @brief Method get_RefreshActionId, addr 0x2e933a0, size 0xc, virtual false, abstract: false, final false
inline ::System::Nullable_1<int64_t> get_RefreshActionId() ;

/// @brief Method get_SessionTokenComponent, addr 0x2e933d4, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Authentication::SessionTokenComponent* get_SessionTokenComponent() ;

/// @brief Method get_SessionTokenExists, addr 0x2e93354, size 0x2c, virtual true, abstract: false, final true
inline bool get_SessionTokenExists() ;

/// @brief Method get_Settings, addr 0x2e933ec, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Authentication::IAuthenticationSettings* get_Settings() ;

/// @brief Method get_State, addr 0x2e933dc, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Authentication::AuthenticationState get_State() ;

/// @brief Convert to "::Unity::Services::Authentication::IAuthenticationService"
constexpr ::Unity::Services::Authentication::IAuthenticationService* i___Unity__Services__Authentication__IAuthenticationService() noexcept;

/// @brief Method remove_Expired, addr 0x2e932a4, size 0x9c, virtual true, abstract: false, final true
inline void remove_Expired(::System::Action*  value) ;

/// @brief Method set_ExceptionHandler, addr 0x2e93414, size 0x8, virtual false, abstract: false, final false
inline void set_ExceptionHandler(::Unity::Services::Authentication::IAuthenticationExceptionHandler*  value) ;

/// @brief Method set_ExpirationActionId, addr 0x2e93398, size 0x8, virtual false, abstract: false, final false
inline void set_ExpirationActionId(::System::Nullable_1<int64_t>  value) ;

/// @brief Method set_NetworkClient, addr 0x2e933fc, size 0x8, virtual false, abstract: false, final false
inline void set_NetworkClient(::Unity::Services::Authentication::IAuthenticationNetworkClient*  value) ;

/// @brief Method set_PlayerInfo, addr 0x2e93384, size 0x8, virtual false, abstract: false, final false
inline void set_PlayerInfo(::Unity::Services::Authentication::PlayerInfo*  value) ;

/// @brief Method set_PlayerNamesApi, addr 0x2e93404, size 0x8, virtual false, abstract: false, final false
inline void set_PlayerNamesApi(::Unity::Services::Authentication::Generated::IPlayerNamesApi*  value) ;

/// @brief Method set_RefreshActionId, addr 0x2e933ac, size 0x8, virtual false, abstract: false, final false
inline void set_RefreshActionId(::System::Nullable_1<int64_t>  value) ;

/// @brief Method set_State, addr 0x2e933e4, size 0x8, virtual false, abstract: false, final false
inline void set_State(::Unity::Services::Authentication::AuthenticationState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationServiceInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationServiceInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationServiceInternal(AuthenticationServiceInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationServiceInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationServiceInternal(AuthenticationServiceInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11521};

/// @brief Field SignInFailed, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::Unity::Services::Core::RequestFailedException*>*  ___SignInFailed;

/// @brief Field SignedIn, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___SignedIn;

/// @brief Field SignedOut, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___SignedOut;

/// @brief Field Expired, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ___Expired;

/// @brief Field <PlayerInfo>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Unity::Services::Authentication::PlayerInfo*  ____PlayerInfo_k__BackingField;

/// @brief Field <ExpirationActionId>k__BackingField, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<int64_t>  ____ExpirationActionId_k__BackingField;

/// @brief Field <RefreshActionId>k__BackingField, offset: 0x48, size: 0x10, def value: None
 ::System::Nullable_1<int64_t>  ____RefreshActionId_k__BackingField;

/// @brief Field <AccessTokenComponent>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::Unity::Services::Authentication::AccessTokenComponent*  ____AccessTokenComponent_k__BackingField;

/// @brief Field <EnvironmentIdComponent>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::Unity::Services::Authentication::EnvironmentIdComponent*  ____EnvironmentIdComponent_k__BackingField;

/// @brief Field <PlayerIdComponent>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::Unity::Services::Authentication::PlayerIdComponent*  ____PlayerIdComponent_k__BackingField;

/// @brief Field <PlayerNameComponent>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::Unity::Services::Authentication::PlayerNameComponent*  ____PlayerNameComponent_k__BackingField;

/// @brief Field <SessionTokenComponent>k__BackingField, offset: 0x78, size: 0x8, def value: None
 ::Unity::Services::Authentication::SessionTokenComponent*  ____SessionTokenComponent_k__BackingField;

/// @brief Field <State>k__BackingField, offset: 0x80, size: 0x4, def value: None
 ::Unity::Services::Authentication::AuthenticationState  ____State_k__BackingField;

/// @brief Field <Settings>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::Unity::Services::Authentication::IAuthenticationSettings*  ____Settings_k__BackingField;

/// @brief Field <NetworkClient>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::Unity::Services::Authentication::IAuthenticationNetworkClient*  ____NetworkClient_k__BackingField;

/// @brief Field <PlayerNamesApi>k__BackingField, offset: 0x98, size: 0x8, def value: None
 ::Unity::Services::Authentication::Generated::IPlayerNamesApi*  ____PlayerNamesApi_k__BackingField;

/// @brief Field <ExceptionHandler>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::Unity::Services::Authentication::IAuthenticationExceptionHandler*  ____ExceptionHandler_k__BackingField;

/// @brief Field m_Profile, offset: 0xa8, size: 0x8, def value: None
 ::Unity::Services::Authentication::IProfile*  ___m_Profile;

/// @brief Field m_JwtDecoder, offset: 0xb0, size: 0x8, def value: None
 ::Unity::Services::Authentication::IJwtDecoder*  ___m_JwtDecoder;

/// @brief Field m_Cache, offset: 0xb8, size: 0x8, def value: None
 ::Unity::Services::Authentication::IAuthenticationCache*  ___m_Cache;

/// @brief Field m_Scheduler, offset: 0xc0, size: 0x8, def value: None
 ::Unity::Services::Core::Scheduler::Internal::IActionScheduler*  ___m_Scheduler;

/// @brief Field m_Metrics, offset: 0xc8, size: 0x8, def value: None
 ::Unity::Services::Authentication::IAuthenticationMetrics*  ___m_Metrics;

/// @brief Field StateChanged, offset: 0xd0, size: 0x8, def value: None
 ::System::Action_2<::Unity::Services::Authentication::AuthenticationState,::Unity::Services::Authentication::AuthenticationState>*  ___StateChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal, ___SignInFailed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal, ___SignedIn) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal, ___SignedOut) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal, ___Expired) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal, ____PlayerInfo_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal, ____ExpirationActionId_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal, ____RefreshActionId_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal, ____AccessTokenComponent_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal, ____EnvironmentIdComponent_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal, ____PlayerIdComponent_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal, ____PlayerNameComponent_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal, ____SessionTokenComponent_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal, ____State_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal, ____Settings_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal, ____NetworkClient_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal, ____PlayerNamesApi_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal, ____ExceptionHandler_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal, ___m_Profile) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal, ___m_JwtDecoder) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal, ___m_Cache) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal, ___m_Scheduler) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal, ___m_Metrics) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationServiceInternal, ___StateChanged) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::AuthenticationServiceInternal, 0xd8>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::AuthenticationServiceInternal);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::AuthenticationServiceInternal*, "Unity.Services.Authentication", "AuthenticationServiceInternal");
NEED_NO_BOX(::Unity::Services::Authentication::AuthenticationServiceInternal___c);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::AuthenticationServiceInternal___c*, "Unity.Services.Authentication", "AuthenticationServiceInternal/<>c");
NEED_NO_BOX(::Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0*, "Unity.Services.Authentication", "AuthenticationServiceInternal/<>c__DisplayClass90_0");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140, "Unity.Services.Authentication", "AuthenticationServiceInternal/<HandleSignInRequestAsync>d__140");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142, "Unity.Services.Authentication", "AuthenticationServiceInternal/<StartRefreshAsync>d__142");
