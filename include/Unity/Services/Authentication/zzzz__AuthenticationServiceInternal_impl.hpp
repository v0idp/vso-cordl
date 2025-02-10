#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AuthenticationServiceInternal.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__AuthenticationState_impl.hpp"
#include "Unity/Services/Authentication/zzzz__IAuthenticationService_impl.hpp"
#include "Unity/Services/Authentication/zzzz__AuthenticationServiceInternal_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Unity/Services/Authentication/Generated/zzzz__IPlayerNamesApi_def.hpp"
#include "Unity/Services/Authentication/zzzz__AccessTokenComponent_def.hpp"
#include "Unity/Services/Authentication/zzzz__AuthenticationServiceInternal_def.hpp"
#include "Unity/Services/Authentication/zzzz__AuthenticationState_def.hpp"
#include "Unity/Services/Authentication/zzzz__EnvironmentIdComponent_def.hpp"
#include "Unity/Services/Authentication/zzzz__IAuthenticationCache_def.hpp"
#include "Unity/Services/Authentication/zzzz__IAuthenticationExceptionHandler_def.hpp"
#include "Unity/Services/Authentication/zzzz__IAuthenticationMetrics_def.hpp"
#include "Unity/Services/Authentication/zzzz__IAuthenticationNetworkClient_def.hpp"
#include "Unity/Services/Authentication/zzzz__IAuthenticationSettings_def.hpp"
#include "Unity/Services/Authentication/zzzz__IJwtDecoder_def.hpp"
#include "Unity/Services/Authentication/zzzz__IProfile_def.hpp"
#include "Unity/Services/Authentication/zzzz__PlayerIdComponent_def.hpp"
#include "Unity/Services/Authentication/zzzz__PlayerInfo_def.hpp"
#include "Unity/Services/Authentication/zzzz__PlayerNameComponent_def.hpp"
#include "Unity/Services/Authentication/zzzz__SessionTokenComponent_def.hpp"
#include "Unity/Services/Authentication/zzzz__SignInOptions_def.hpp"
#include "Unity/Services/Authentication/zzzz__SignInResponse_def.hpp"
#include "Unity/Services/Core/Scheduler/Internal/zzzz__IActionScheduler_def.hpp"
#include "Unity/Services/Core/zzzz__RequestFailedException_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal___c::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e950a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal___c._CompleteSignIn_b__143_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Authentication::AuthenticationServiceInternal___c::*)(::StringW)>(&::Unity::Services::Authentication::AuthenticationServiceInternal___c::_CompleteSignIn_b__143_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2e950a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal___c*>::get(),
                        "<CompleteSignIn>b__143_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Authentication::AuthenticationServiceInternal___c::setStaticF___9(::Unity::Services::Authentication::AuthenticationServiceInternal___c*  value)  {
::cordl_internals::setStaticField<::Unity::Services::Authentication::AuthenticationServiceInternal___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal___c*>::get>(std::forward<::Unity::Services::Authentication::AuthenticationServiceInternal___c*>(value));
}
inline ::Unity::Services::Authentication::AuthenticationServiceInternal___c* Unity::Services::Authentication::AuthenticationServiceInternal___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Unity::Services::Authentication::AuthenticationServiceInternal___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal___c*>::get>();
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal___c::setStaticF___9__143_0(::System::Func_2<::StringW,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,bool>*, "<>9__143_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal___c*>::get>(std::forward<::System::Func_2<::StringW,bool>*>(value));
}
inline ::System::Func_2<::StringW,bool>* Unity::Services::Authentication::AuthenticationServiceInternal___c::getStaticF___9__143_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,bool>*, "<>9__143_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal___c*>::get>();
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Unity::Services::Authentication::AuthenticationServiceInternal___c::_CompleteSignIn_b__143_0(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal___c*>::get(),
                        "<CompleteSignIn>b__143_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, s);
}
inline ::Unity::Services::Authentication::AuthenticationServiceInternal___c* Unity::Services::Authentication::AuthenticationServiceInternal___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::AuthenticationServiceInternal___c*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::AuthenticationServiceInternal___c::AuthenticationServiceInternal___c()   {
}
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e93b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0._SignInAnonymouslyAsync_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>* (::Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0::_SignInAnonymouslyAsync_b__0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2e950fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0*>::get(),
                        "<SignInAnonymouslyAsync>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Authentication::AuthenticationServiceInternal*& Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Unity::Services::Authentication::AuthenticationServiceInternal* const& Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0::__cordl_internal_set___4__this(::Unity::Services::Authentication::AuthenticationServiceInternal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0::__cordl_internal_get_sessionToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionToken;
}
constexpr ::StringW const& Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0::__cordl_internal_get_sessionToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionToken;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0::__cordl_internal_set_sessionToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>* Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0::_SignInAnonymouslyAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0*>::get(),
                        "<SignInAnonymouslyAsync>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>*, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0* Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::AuthenticationServiceInternal___c__DisplayClass90_0::AuthenticationServiceInternal___c__DisplayClass90_0()   {
}
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140::MoveNext)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x2e951b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2e95768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Unity::Services::Authentication::AuthenticationServiceInternal*", modifiers: "", def_value: Some("{}") }, CppParam { name: "signInRequest", ty: "::System::Func_1<::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableRefresh", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Authentication::SignInResponse*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Unity::Services::Authentication::AuthenticationServiceInternal*  __4__this, ::System::Func_1<::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>*>*  signInRequest, bool  enableRefresh, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Authentication::SignInResponse*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->signInRequest = signInRequest;
this->enableRefresh = enableRefresh;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140::AuthenticationServiceInternal__HandleSignInRequestAsync_d__140()   {
}
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142::MoveNext)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x2e957d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2e95da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Unity::Services::Authentication::AuthenticationServiceInternal*", modifiers: "", def_value: Some("{}") }, CppParam { name: "sessionToken", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Authentication::SignInResponse*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142::AuthenticationServiceInternal__StartRefreshAsync_d__142(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Unity::Services::Authentication::AuthenticationServiceInternal*  __4__this, ::StringW  sessionToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Authentication::SignInResponse*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->sessionToken = sessionToken;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::AuthenticationServiceInternal__StartRefreshAsync_d__142::AuthenticationServiceInternal__StartRefreshAsync_d__142()   {
}
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.add_Expired
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)(::System::Action*)>(&::Unity::Services::Authentication::AuthenticationServiceInternal::add_Expired)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2e93208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "add_Expired",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.remove_Expired
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)(::System::Action*)>(&::Unity::Services::Authentication::AuthenticationServiceInternal::remove_Expired)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2e932a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "remove_Expired",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.get_IsSignedIn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Authentication::AuthenticationServiceInternal::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal::get_IsSignedIn)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2e93340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_IsSignedIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.get_SessionTokenExists
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Authentication::AuthenticationServiceInternal::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal::get_SessionTokenExists)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2e93354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_SessionTokenExists",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.set_PlayerInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)(::Unity::Services::Authentication::PlayerInfo*)>(&::Unity::Services::Authentication::AuthenticationServiceInternal::set_PlayerInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e93384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "set_PlayerInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::PlayerInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.get_ExpirationActionId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int64_t> (::Unity::Services::Authentication::AuthenticationServiceInternal::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal::get_ExpirationActionId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e9338c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_ExpirationActionId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.set_ExpirationActionId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)(::System::Nullable_1<int64_t>)>(&::Unity::Services::Authentication::AuthenticationServiceInternal::set_ExpirationActionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e93398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "set_ExpirationActionId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int64_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.get_RefreshActionId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int64_t> (::Unity::Services::Authentication::AuthenticationServiceInternal::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal::get_RefreshActionId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e933a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_RefreshActionId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.set_RefreshActionId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)(::System::Nullable_1<int64_t>)>(&::Unity::Services::Authentication::AuthenticationServiceInternal::set_RefreshActionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e933ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "set_RefreshActionId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int64_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.get_AccessTokenComponent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Authentication::AccessTokenComponent* (::Unity::Services::Authentication::AuthenticationServiceInternal::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal::get_AccessTokenComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e933b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_AccessTokenComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.get_EnvironmentIdComponent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Authentication::EnvironmentIdComponent* (::Unity::Services::Authentication::AuthenticationServiceInternal::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal::get_EnvironmentIdComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e933bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_EnvironmentIdComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.get_PlayerIdComponent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Authentication::PlayerIdComponent* (::Unity::Services::Authentication::AuthenticationServiceInternal::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal::get_PlayerIdComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e933c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_PlayerIdComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.get_PlayerNameComponent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Authentication::PlayerNameComponent* (::Unity::Services::Authentication::AuthenticationServiceInternal::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal::get_PlayerNameComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e933cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_PlayerNameComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.get_SessionTokenComponent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Authentication::SessionTokenComponent* (::Unity::Services::Authentication::AuthenticationServiceInternal::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal::get_SessionTokenComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e933d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_SessionTokenComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.get_State
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Authentication::AuthenticationState (::Unity::Services::Authentication::AuthenticationServiceInternal::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e933dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_State",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.set_State
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)(::Unity::Services::Authentication::AuthenticationState)>(&::Unity::Services::Authentication::AuthenticationServiceInternal::set_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e933e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "set_State",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::AuthenticationState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.get_Settings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Authentication::IAuthenticationSettings* (::Unity::Services::Authentication::AuthenticationServiceInternal::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal::get_Settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e933ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_Settings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.get_NetworkClient
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Authentication::IAuthenticationNetworkClient* (::Unity::Services::Authentication::AuthenticationServiceInternal::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal::get_NetworkClient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e933f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_NetworkClient",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.set_NetworkClient
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)(::Unity::Services::Authentication::IAuthenticationNetworkClient*)>(&::Unity::Services::Authentication::AuthenticationServiceInternal::set_NetworkClient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e933fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "set_NetworkClient",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IAuthenticationNetworkClient*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.set_PlayerNamesApi
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)(::Unity::Services::Authentication::Generated::IPlayerNamesApi*)>(&::Unity::Services::Authentication::AuthenticationServiceInternal::set_PlayerNamesApi)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e93404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "set_PlayerNamesApi",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::Generated::IPlayerNamesApi*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.get_ExceptionHandler
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Authentication::IAuthenticationExceptionHandler* (::Unity::Services::Authentication::AuthenticationServiceInternal::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal::get_ExceptionHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e9340c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_ExceptionHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.set_ExceptionHandler
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)(::Unity::Services::Authentication::IAuthenticationExceptionHandler*)>(&::Unity::Services::Authentication::AuthenticationServiceInternal::set_ExceptionHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e93414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "set_ExceptionHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IAuthenticationExceptionHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)(::Unity::Services::Authentication::IAuthenticationSettings*, ::Unity::Services::Authentication::IAuthenticationNetworkClient*, ::Unity::Services::Authentication::Generated::IPlayerNamesApi*, ::Unity::Services::Authentication::IProfile*, ::Unity::Services::Authentication::IJwtDecoder*, ::Unity::Services::Authentication::IAuthenticationCache*, ::Unity::Services::Core::Scheduler::Internal::IActionScheduler*, ::Unity::Services::Authentication::IAuthenticationMetrics*, ::Unity::Services::Authentication::AccessTokenComponent*, ::Unity::Services::Authentication::EnvironmentIdComponent*, ::Unity::Services::Authentication::PlayerIdComponent*, ::Unity::Services::Authentication::PlayerNameComponent*, ::Unity::Services::Authentication::SessionTokenComponent*)>(&::Unity::Services::Authentication::AuthenticationServiceInternal::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2e9341c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 13>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IAuthenticationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IAuthenticationNetworkClient*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::Generated::IPlayerNamesApi*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IProfile*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IJwtDecoder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IAuthenticationCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::IActionScheduler*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IAuthenticationMetrics*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::AccessTokenComponent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::EnvironmentIdComponent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::PlayerIdComponent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::PlayerNameComponent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::SessionTokenComponent*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.OnPlayerIdChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)(::StringW)>(&::Unity::Services::Authentication::AuthenticationServiceInternal::OnPlayerIdChanged)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2e93734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "OnPlayerIdChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.SignInAnonymouslyAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Authentication::AuthenticationServiceInternal::*)(::Unity::Services::Authentication::SignInOptions*)>(&::Unity::Services::Authentication::AuthenticationServiceInternal::SignInAnonymouslyAsync)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x2e93808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "SignInAnonymouslyAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::SignInOptions*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.SignOut
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)(bool)>(&::Unity::Services::Authentication::AuthenticationServiceInternal::SignOut)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e93d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "SignOut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.RefreshAccessTokenAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Authentication::AuthenticationServiceInternal::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal::RefreshAccessTokenAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2e940cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "RefreshAccessTokenAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.HandleSignInRequestAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Authentication::AuthenticationServiceInternal::*)(::System::Func_1<::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>*>*, bool)>(&::Unity::Services::Authentication::AuthenticationServiceInternal::HandleSignInRequestAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2e93c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "HandleSignInRequestAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.StartRefreshAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Authentication::AuthenticationServiceInternal::*)(::StringW)>(&::Unity::Services::Authentication::AuthenticationServiceInternal::StartRefreshAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2e941a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "StartRefreshAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.CompleteSignIn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)(::Unity::Services::Authentication::SignInResponse*, bool)>(&::Unity::Services::Authentication::AuthenticationServiceInternal::CompleteSignIn)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x2e94278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "CompleteSignIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::SignInResponse*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.ScheduleRefresh
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)(double_t)>(&::Unity::Services::Authentication::AuthenticationServiceInternal::ScheduleRefresh)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2e949b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "ScheduleRefresh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.ScheduleExpiration
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)(double_t)>(&::Unity::Services::Authentication::AuthenticationServiceInternal::ScheduleExpiration)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2e94b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "ScheduleExpiration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.ExecuteScheduledRefresh
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal::ExecuteScheduledRefresh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e94cc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "ExecuteScheduledRefresh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.ExecuteScheduledExpiration
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal::ExecuteScheduledExpiration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e94ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "ExecuteScheduledExpiration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.CancelScheduledRefresh
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal::CancelScheduledRefresh)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2e93eac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "CancelScheduledRefresh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.CancelScheduledExpiration
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal::CancelScheduledExpiration)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2e93fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "CancelScheduledExpiration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.Expire
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal::Expire)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2e94cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "Expire",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.MigrateCache
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal::MigrateCache)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2e935ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "MigrateCache",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.ChangeState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)(::Unity::Services::Authentication::AuthenticationState)>(&::Unity::Services::Authentication::AuthenticationServiceInternal::ChangeState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2e940ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "ChangeState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::AuthenticationState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.HandleStateChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)(::Unity::Services::Authentication::AuthenticationState, ::Unity::Services::Authentication::AuthenticationState)>(&::Unity::Services::Authentication::AuthenticationServiceInternal::HandleStateChanged)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2e94f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "HandleStateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::AuthenticationState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::AuthenticationState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.SendSignInFailedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)(::Unity::Services::Core::RequestFailedException*, bool)>(&::Unity::Services::Authentication::AuthenticationServiceInternal::SendSignInFailedEvent)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2e93c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "SendSignInFailedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::RequestFailedException*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationServiceInternal.__ctor_b__88_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationServiceInternal::*)()>(&::Unity::Services::Authentication::AuthenticationServiceInternal::__ctor_b__88_0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2e94fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "<.ctor>b__88_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Unity::Services::Core::RequestFailedException*>*& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get_SignInFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SignInFailed;
}
constexpr ::System::Action_1<::Unity::Services::Core::RequestFailedException*>* const& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get_SignInFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SignInFailed;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_set_SignInFailed(::System::Action_1<::Unity::Services::Core::RequestFailedException*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SignInFailed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get_SignedIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SignedIn;
}
constexpr ::System::Action* const& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get_SignedIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SignedIn;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_set_SignedIn(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SignedIn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get_SignedOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SignedOut;
}
constexpr ::System::Action* const& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get_SignedOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SignedOut;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_set_SignedOut(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SignedOut)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get_Expired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Expired;
}
constexpr ::System::Action* const& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get_Expired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Expired;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_set_Expired(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Expired)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Authentication::PlayerInfo*& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__PlayerInfo_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerInfo_k__BackingField;
}
constexpr ::Unity::Services::Authentication::PlayerInfo* const& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__PlayerInfo_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerInfo_k__BackingField;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_set__PlayerInfo_k__BackingField(::Unity::Services::Authentication::PlayerInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____PlayerInfo_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<int64_t>& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__ExpirationActionId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExpirationActionId_k__BackingField;
}
constexpr ::System::Nullable_1<int64_t> const& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__ExpirationActionId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExpirationActionId_k__BackingField;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_set__ExpirationActionId_k__BackingField(::System::Nullable_1<int64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ExpirationActionId_k__BackingField = value;
}
constexpr ::System::Nullable_1<int64_t>& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__RefreshActionId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RefreshActionId_k__BackingField;
}
constexpr ::System::Nullable_1<int64_t> const& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__RefreshActionId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RefreshActionId_k__BackingField;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_set__RefreshActionId_k__BackingField(::System::Nullable_1<int64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RefreshActionId_k__BackingField = value;
}
constexpr ::Unity::Services::Authentication::AccessTokenComponent*& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__AccessTokenComponent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AccessTokenComponent_k__BackingField;
}
constexpr ::Unity::Services::Authentication::AccessTokenComponent* const& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__AccessTokenComponent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AccessTokenComponent_k__BackingField;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_set__AccessTokenComponent_k__BackingField(::Unity::Services::Authentication::AccessTokenComponent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AccessTokenComponent_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Authentication::EnvironmentIdComponent*& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__EnvironmentIdComponent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentIdComponent_k__BackingField;
}
constexpr ::Unity::Services::Authentication::EnvironmentIdComponent* const& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__EnvironmentIdComponent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentIdComponent_k__BackingField;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_set__EnvironmentIdComponent_k__BackingField(::Unity::Services::Authentication::EnvironmentIdComponent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____EnvironmentIdComponent_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Authentication::PlayerIdComponent*& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__PlayerIdComponent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerIdComponent_k__BackingField;
}
constexpr ::Unity::Services::Authentication::PlayerIdComponent* const& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__PlayerIdComponent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerIdComponent_k__BackingField;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_set__PlayerIdComponent_k__BackingField(::Unity::Services::Authentication::PlayerIdComponent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____PlayerIdComponent_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Authentication::PlayerNameComponent*& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__PlayerNameComponent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerNameComponent_k__BackingField;
}
constexpr ::Unity::Services::Authentication::PlayerNameComponent* const& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__PlayerNameComponent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerNameComponent_k__BackingField;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_set__PlayerNameComponent_k__BackingField(::Unity::Services::Authentication::PlayerNameComponent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____PlayerNameComponent_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Authentication::SessionTokenComponent*& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__SessionTokenComponent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionTokenComponent_k__BackingField;
}
constexpr ::Unity::Services::Authentication::SessionTokenComponent* const& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__SessionTokenComponent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionTokenComponent_k__BackingField;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_set__SessionTokenComponent_k__BackingField(::Unity::Services::Authentication::SessionTokenComponent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SessionTokenComponent_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Authentication::AuthenticationState& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__State_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr ::Unity::Services::Authentication::AuthenticationState const& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__State_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_set__State_k__BackingField(::Unity::Services::Authentication::AuthenticationState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____State_k__BackingField = value;
}
constexpr ::Unity::Services::Authentication::IAuthenticationSettings*& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__Settings_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Settings_k__BackingField;
}
constexpr ::Unity::Services::Authentication::IAuthenticationSettings* const& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__Settings_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Settings_k__BackingField;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_set__Settings_k__BackingField(::Unity::Services::Authentication::IAuthenticationSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Settings_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Authentication::IAuthenticationNetworkClient*& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__NetworkClient_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NetworkClient_k__BackingField;
}
constexpr ::Unity::Services::Authentication::IAuthenticationNetworkClient* const& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__NetworkClient_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NetworkClient_k__BackingField;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_set__NetworkClient_k__BackingField(::Unity::Services::Authentication::IAuthenticationNetworkClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____NetworkClient_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Authentication::Generated::IPlayerNamesApi*& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__PlayerNamesApi_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerNamesApi_k__BackingField;
}
constexpr ::Unity::Services::Authentication::Generated::IPlayerNamesApi* const& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__PlayerNamesApi_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerNamesApi_k__BackingField;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_set__PlayerNamesApi_k__BackingField(::Unity::Services::Authentication::Generated::IPlayerNamesApi*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____PlayerNamesApi_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Authentication::IAuthenticationExceptionHandler*& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__ExceptionHandler_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExceptionHandler_k__BackingField;
}
constexpr ::Unity::Services::Authentication::IAuthenticationExceptionHandler* const& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get__ExceptionHandler_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExceptionHandler_k__BackingField;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_set__ExceptionHandler_k__BackingField(::Unity::Services::Authentication::IAuthenticationExceptionHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ExceptionHandler_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Authentication::IProfile*& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get_m_Profile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Profile;
}
constexpr ::Unity::Services::Authentication::IProfile* const& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get_m_Profile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Profile;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_set_m_Profile(::Unity::Services::Authentication::IProfile*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Profile)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Authentication::IJwtDecoder*& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get_m_JwtDecoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JwtDecoder;
}
constexpr ::Unity::Services::Authentication::IJwtDecoder* const& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get_m_JwtDecoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JwtDecoder;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_set_m_JwtDecoder(::Unity::Services::Authentication::IJwtDecoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_JwtDecoder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Authentication::IAuthenticationCache*& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get_m_Cache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Cache;
}
constexpr ::Unity::Services::Authentication::IAuthenticationCache* const& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get_m_Cache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Cache;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_set_m_Cache(::Unity::Services::Authentication::IAuthenticationCache*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Cache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Scheduler::Internal::IActionScheduler*& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get_m_Scheduler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Scheduler;
}
constexpr ::Unity::Services::Core::Scheduler::Internal::IActionScheduler* const& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get_m_Scheduler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Scheduler;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_set_m_Scheduler(::Unity::Services::Core::Scheduler::Internal::IActionScheduler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Scheduler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Authentication::IAuthenticationMetrics*& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get_m_Metrics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Metrics;
}
constexpr ::Unity::Services::Authentication::IAuthenticationMetrics* const& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get_m_Metrics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Metrics;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_set_m_Metrics(::Unity::Services::Authentication::IAuthenticationMetrics*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Metrics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::Unity::Services::Authentication::AuthenticationState,::Unity::Services::Authentication::AuthenticationState>*& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get_StateChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StateChanged;
}
constexpr ::System::Action_2<::Unity::Services::Authentication::AuthenticationState,::Unity::Services::Authentication::AuthenticationState>* const& Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_get_StateChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StateChanged;
}
constexpr void Unity::Services::Authentication::AuthenticationServiceInternal::__cordl_internal_set_StateChanged(::System::Action_2<::Unity::Services::Authentication::AuthenticationState,::Unity::Services::Authentication::AuthenticationState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___StateChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::add_Expired(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "add_Expired",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::remove_Expired(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "remove_Expired",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Unity::Services::Authentication::AuthenticationServiceInternal::get_IsSignedIn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_IsSignedIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Unity::Services::Authentication::AuthenticationServiceInternal::get_SessionTokenExists()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_SessionTokenExists",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::set_PlayerInfo(::Unity::Services::Authentication::PlayerInfo*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "set_PlayerInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::PlayerInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<int64_t> Unity::Services::Authentication::AuthenticationServiceInternal::get_ExpirationActionId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_ExpirationActionId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::set_ExpirationActionId(::System::Nullable_1<int64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "set_ExpirationActionId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int64_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<int64_t> Unity::Services::Authentication::AuthenticationServiceInternal::get_RefreshActionId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_RefreshActionId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::set_RefreshActionId(::System::Nullable_1<int64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "set_RefreshActionId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int64_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Authentication::AccessTokenComponent* Unity::Services::Authentication::AuthenticationServiceInternal::get_AccessTokenComponent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_AccessTokenComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Authentication::AccessTokenComponent*, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::EnvironmentIdComponent* Unity::Services::Authentication::AuthenticationServiceInternal::get_EnvironmentIdComponent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_EnvironmentIdComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Authentication::EnvironmentIdComponent*, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::PlayerIdComponent* Unity::Services::Authentication::AuthenticationServiceInternal::get_PlayerIdComponent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_PlayerIdComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Authentication::PlayerIdComponent*, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::PlayerNameComponent* Unity::Services::Authentication::AuthenticationServiceInternal::get_PlayerNameComponent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_PlayerNameComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Authentication::PlayerNameComponent*, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::SessionTokenComponent* Unity::Services::Authentication::AuthenticationServiceInternal::get_SessionTokenComponent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_SessionTokenComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Authentication::SessionTokenComponent*, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::AuthenticationState Unity::Services::Authentication::AuthenticationServiceInternal::get_State()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_State",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Authentication::AuthenticationState, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::set_State(::Unity::Services::Authentication::AuthenticationState  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "set_State",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::AuthenticationState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Authentication::IAuthenticationSettings* Unity::Services::Authentication::AuthenticationServiceInternal::get_Settings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_Settings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Authentication::IAuthenticationSettings*, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::IAuthenticationNetworkClient* Unity::Services::Authentication::AuthenticationServiceInternal::get_NetworkClient()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_NetworkClient",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Authentication::IAuthenticationNetworkClient*, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::set_NetworkClient(::Unity::Services::Authentication::IAuthenticationNetworkClient*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "set_NetworkClient",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IAuthenticationNetworkClient*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::set_PlayerNamesApi(::Unity::Services::Authentication::Generated::IPlayerNamesApi*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "set_PlayerNamesApi",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::Generated::IPlayerNamesApi*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Authentication::IAuthenticationExceptionHandler* Unity::Services::Authentication::AuthenticationServiceInternal::get_ExceptionHandler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "get_ExceptionHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Authentication::IAuthenticationExceptionHandler*, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::set_ExceptionHandler(::Unity::Services::Authentication::IAuthenticationExceptionHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "set_ExceptionHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IAuthenticationExceptionHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::_ctor(::Unity::Services::Authentication::IAuthenticationSettings*  settings, ::Unity::Services::Authentication::IAuthenticationNetworkClient*  networkClient, ::Unity::Services::Authentication::Generated::IPlayerNamesApi*  playerNamesApi, ::Unity::Services::Authentication::IProfile*  profile, ::Unity::Services::Authentication::IJwtDecoder*  jwtDecoder, ::Unity::Services::Authentication::IAuthenticationCache*  cache, ::Unity::Services::Core::Scheduler::Internal::IActionScheduler*  scheduler, ::Unity::Services::Authentication::IAuthenticationMetrics*  metrics, ::Unity::Services::Authentication::AccessTokenComponent*  accessToken, ::Unity::Services::Authentication::EnvironmentIdComponent*  environmentId, ::Unity::Services::Authentication::PlayerIdComponent*  playerId, ::Unity::Services::Authentication::PlayerNameComponent*  playerName, ::Unity::Services::Authentication::SessionTokenComponent*  sessionToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 13>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IAuthenticationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IAuthenticationNetworkClient*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::Generated::IPlayerNamesApi*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IProfile*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IJwtDecoder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IAuthenticationCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::IActionScheduler*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IAuthenticationMetrics*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::AccessTokenComponent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::EnvironmentIdComponent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::PlayerIdComponent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::PlayerNameComponent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::SessionTokenComponent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings, networkClient, playerNamesApi, profile, jwtDecoder, cache, scheduler, metrics, accessToken, environmentId, playerId, playerName, sessionToken);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::OnPlayerIdChanged(::StringW  playerId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "OnPlayerIdChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerId);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Authentication::AuthenticationServiceInternal::SignInAnonymouslyAsync(::Unity::Services::Authentication::SignInOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "SignInAnonymouslyAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::SignInOptions*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, options);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::SignOut(bool  clearCredentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "SignOut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clearCredentials);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Authentication::AuthenticationServiceInternal::RefreshAccessTokenAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "RefreshAccessTokenAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Authentication::AuthenticationServiceInternal::HandleSignInRequestAsync(::System::Func_1<::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>*>*  signInRequest, bool  enableRefresh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "HandleSignInRequestAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, signInRequest, enableRefresh);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Authentication::AuthenticationServiceInternal::StartRefreshAsync(::StringW  sessionToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "StartRefreshAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, sessionToken);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::CompleteSignIn(::Unity::Services::Authentication::SignInResponse*  response, bool  enableRefresh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "CompleteSignIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::SignInResponse*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, response, enableRefresh);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::ScheduleRefresh(double_t  delay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "ScheduleRefresh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, delay);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::ScheduleExpiration(double_t  delay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "ScheduleExpiration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, delay);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::ExecuteScheduledRefresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "ExecuteScheduledRefresh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::ExecuteScheduledExpiration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "ExecuteScheduledExpiration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::CancelScheduledRefresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "CancelScheduledRefresh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::CancelScheduledExpiration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "CancelScheduledExpiration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::Expire()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "Expire",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::MigrateCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "MigrateCache",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::ChangeState(::Unity::Services::Authentication::AuthenticationState  newState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "ChangeState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::AuthenticationState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newState);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::HandleStateChanged(::Unity::Services::Authentication::AuthenticationState  oldState, ::Unity::Services::Authentication::AuthenticationState  newState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "HandleStateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::AuthenticationState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::AuthenticationState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldState, newState);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::SendSignInFailedEvent(::Unity::Services::Core::RequestFailedException*  exception, bool  forceSignOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "SendSignInFailedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::RequestFailedException*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception, forceSignOut);
}
inline void Unity::Services::Authentication::AuthenticationServiceInternal::__ctor_b__88_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationServiceInternal*>::get(),
                        "<.ctor>b__88_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::AuthenticationServiceInternal* Unity::Services::Authentication::AuthenticationServiceInternal::New_ctor(::Unity::Services::Authentication::IAuthenticationSettings*  settings, ::Unity::Services::Authentication::IAuthenticationNetworkClient*  networkClient, ::Unity::Services::Authentication::Generated::IPlayerNamesApi*  playerNamesApi, ::Unity::Services::Authentication::IProfile*  profile, ::Unity::Services::Authentication::IJwtDecoder*  jwtDecoder, ::Unity::Services::Authentication::IAuthenticationCache*  cache, ::Unity::Services::Core::Scheduler::Internal::IActionScheduler*  scheduler, ::Unity::Services::Authentication::IAuthenticationMetrics*  metrics, ::Unity::Services::Authentication::AccessTokenComponent*  accessToken, ::Unity::Services::Authentication::EnvironmentIdComponent*  environmentId, ::Unity::Services::Authentication::PlayerIdComponent*  playerId, ::Unity::Services::Authentication::PlayerNameComponent*  playerName, ::Unity::Services::Authentication::SessionTokenComponent*  sessionToken)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::AuthenticationServiceInternal*>(settings, networkClient, playerNamesApi, profile, jwtDecoder, cache, scheduler, metrics, accessToken, environmentId, playerId, playerName, sessionToken));
}
/// @brief Convert operator to "::Unity::Services::Authentication::IAuthenticationService"
constexpr  Unity::Services::Authentication::AuthenticationServiceInternal::operator ::Unity::Services::Authentication::IAuthenticationService*() noexcept {
return static_cast<::Unity::Services::Authentication::IAuthenticationService*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Authentication::IAuthenticationService"
constexpr ::Unity::Services::Authentication::IAuthenticationService* Unity::Services::Authentication::AuthenticationServiceInternal::i___Unity__Services__Authentication__IAuthenticationService() noexcept {
return static_cast<::Unity::Services::Authentication::IAuthenticationService*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::AuthenticationServiceInternal::AuthenticationServiceInternal()   {
}
