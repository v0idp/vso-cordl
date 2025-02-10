#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/ConfigManagerImpl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/RemoteConfig/zzzz__RemoteConfigRequest_impl.hpp"
#include "Unity/Services/RemoteConfig/zzzz__ConfigManagerImpl_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/RemoteConfig/zzzz__ConfigManagerImpl_def.hpp"
#include "Unity/Services/RemoteConfig/zzzz__ConfigOrigin_def.hpp"
#include "Unity/Services/RemoteConfig/zzzz__ConfigResponse_def.hpp"
#include "Unity/Services/RemoteConfig/zzzz__RequestHeaderTuple_def.hpp"
#include "Unity/Services/RemoteConfig/zzzz__RuntimeConfig_def.hpp"
#include "Unity/Services/RemoteConfig/zzzz__UnityAttributes_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31::*)()>(&::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31::MoveNext)> {
  constexpr static std::size_t size = 0xa20;
  constexpr static std::size_t addrs = 0x2ea9388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ea9f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::RemoteConfig::RuntimeConfig*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "configType", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Unity::Services::RemoteConfig::ConfigManagerImpl*", modifiers: "", def_value: Some("{}") }, CppParam { name: "userAttributes", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "appAttributes", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "filterAttributes", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_request_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_requestOp_5__3", ty: "::UnityEngine::Networking::UnityWebRequestAsyncOperation*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31::ConfigManagerImpl__FetchConfigsAsync_d__31(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::RemoteConfig::RuntimeConfig*>  __t__builder, ::StringW  configType, ::Unity::Services::RemoteConfig::ConfigManagerImpl*  __4__this, ::System::Object*  userAttributes, ::System::Object*  appAttributes, ::System::Object*  filterAttributes, ::UnityEngine::Networking::UnityWebRequest*  _request_5__2, ::UnityEngine::Networking::UnityWebRequestAsyncOperation*  _requestOp_5__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->configType = configType;
this->__4__this = __4__this;
this->userAttributes = userAttributes;
this->appAttributes = appAttributes;
this->filterAttributes = filterAttributes;
this->_request_5__2 = _request_5__2;
this->_requestOp_5__3 = _requestOp_5__3;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__31::ConfigManagerImpl__FetchConfigsAsync_d__31()   {
}
//  Writing Method size for method: ::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34::*)()>(&::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x2ea9ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2eaa244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::RemoteConfig::RuntimeConfig*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Unity::Services::RemoteConfig::ConfigManagerImpl*", modifiers: "", def_value: Some("{}") }, CppParam { name: "userAttributes", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "appAttributes", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::RemoteConfig::RuntimeConfig*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34::ConfigManagerImpl__FetchConfigsAsync_d__34(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::RemoteConfig::RuntimeConfig*>  __t__builder, ::Unity::Services::RemoteConfig::ConfigManagerImpl*  __4__this, ::System::Object*  userAttributes, ::System::Object*  appAttributes, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::RemoteConfig::RuntimeConfig*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->userAttributes = userAttributes;
this->appAttributes = appAttributes;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::RemoteConfig::ConfigManagerImpl__FetchConfigsAsync_d__34::ConfigManagerImpl__FetchConfigsAsync_d__34()   {
}
//  Writing Method size for method: ::Unity::Services::RemoteConfig::ConfigManagerImpl.get_appConfig
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::RemoteConfig::RuntimeConfig* (::Unity::Services::RemoteConfig::ConfigManagerImpl::*)()>(&::Unity::Services::RemoteConfig::ConfigManagerImpl::get_appConfig)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2ea7114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "get_appConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::ConfigManagerImpl.set_appConfig
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::ConfigManagerImpl::*)(::Unity::Services::RemoteConfig::RuntimeConfig*)>(&::Unity::Services::RemoteConfig::ConfigManagerImpl::set_appConfig)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ea71c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "set_appConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::RemoteConfig::RuntimeConfig*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::ConfigManagerImpl.add_FetchCompleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::ConfigManagerImpl::*)(::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*)>(&::Unity::Services::RemoteConfig::ConfigManagerImpl::add_FetchCompleted)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2ea7238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "add_FetchCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::ConfigManagerImpl.remove_FetchCompleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::ConfigManagerImpl::*)(::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*)>(&::Unity::Services::RemoteConfig::ConfigManagerImpl::remove_FetchCompleted)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2ea72e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "remove_FetchCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::ConfigManagerImpl._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::ConfigManagerImpl::*)(::StringW, ::StringW, ::StringW)>(&::Unity::Services::RemoteConfig::ConfigManagerImpl::_ctor)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x2ea7398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::ConfigManagerImpl.ParseResponse
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::RemoteConfig::ConfigResponse (::Unity::Services::RemoteConfig::ConfigManagerImpl::*)(::Unity::Services::RemoteConfig::ConfigOrigin, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, ::StringW)>(&::Unity::Services::RemoteConfig::ConfigManagerImpl::ParseResponse)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x2ea8148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "ParseResponse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::RemoteConfig::ConfigOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::ConfigManagerImpl.SetEnvironmentID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::ConfigManagerImpl::*)(::StringW)>(&::Unity::Services::RemoteConfig::ConfigManagerImpl::SetEnvironmentID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ea8404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "SetEnvironmentID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::ConfigManagerImpl.SetPlayerIdentityToken
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::ConfigManagerImpl::*)(::StringW)>(&::Unity::Services::RemoteConfig::ConfigManagerImpl::SetPlayerIdentityToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ea840c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "SetPlayerIdentityToken",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::ConfigManagerImpl.SetUserID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::ConfigManagerImpl::*)(::StringW)>(&::Unity::Services::RemoteConfig::ConfigManagerImpl::SetUserID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ea8414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "SetUserID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::ConfigManagerImpl.SetPlayerID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::ConfigManagerImpl::*)(::StringW)>(&::Unity::Services::RemoteConfig::ConfigManagerImpl::SetPlayerID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ea841c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "SetPlayerID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::ConfigManagerImpl.SetAnalyticsUserID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::ConfigManagerImpl::*)(::StringW)>(&::Unity::Services::RemoteConfig::ConfigManagerImpl::SetAnalyticsUserID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ea8424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "SetAnalyticsUserID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::ConfigManagerImpl.FetchConfigsAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::RemoteConfig::RuntimeConfig*>* (::Unity::Services::RemoteConfig::ConfigManagerImpl::*)(::StringW, ::System::Object*, ::System::Object*, ::System::Object*)>(&::Unity::Services::RemoteConfig::ConfigManagerImpl::FetchConfigsAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2ea842c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "FetchConfigsAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::ConfigManagerImpl.FetchConfigsAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::RemoteConfig::RuntimeConfig*>* (::Unity::Services::RemoteConfig::ConfigManagerImpl::*)(::System::Object*, ::System::Object*)>(&::Unity::Services::RemoteConfig::ConfigManagerImpl::FetchConfigsAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2ea853c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "FetchConfigsAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::ConfigManagerImpl.GetConfig
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::RemoteConfig::RuntimeConfig* (::Unity::Services::RemoteConfig::ConfigManagerImpl::*)(::StringW)>(&::Unity::Services::RemoteConfig::ConfigManagerImpl::GetConfig)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2ea8634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "GetConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::ConfigManagerImpl.PreparePayloadWithConfigType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::RemoteConfig::ConfigManagerImpl::*)(::StringW, ::System::Object*, ::System::Object*, ::System::Object*)>(&::Unity::Services::RemoteConfig::ConfigManagerImpl::PreparePayloadWithConfigType)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x2ea8724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "PreparePayloadWithConfigType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::ConfigManagerImpl.SaveCache
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::ConfigManagerImpl::*)(::Unity::Services::RemoteConfig::ConfigResponse)>(&::Unity::Services::RemoteConfig::ConfigManagerImpl::SaveCache)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x2ea8bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "SaveCache",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::RemoteConfig::ConfigResponse>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::ConfigManagerImpl.LoadFromCache
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::ConfigManagerImpl::*)()>(&::Unity::Services::RemoteConfig::ConfigManagerImpl::LoadFromCache)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x2ea7a58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "LoadFromCache",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::RemoteConfig::RuntimeConfig*& Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_get__appConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____appConfig;
}
constexpr ::Unity::Services::RemoteConfig::RuntimeConfig* const& Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_get__appConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____appConfig;
}
constexpr void Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_set__appConfig(::Unity::Services::RemoteConfig::RuntimeConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Services::RemoteConfig::RuntimeConfig*>*& Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_get_configs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___configs;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Services::RemoteConfig::RuntimeConfig*>* const& Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_get_configs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___configs;
}
constexpr void Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_set_configs(::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Services::RemoteConfig::RuntimeConfig*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___configs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_get__playerIdentityToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerIdentityToken;
}
constexpr ::StringW const& Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_get__playerIdentityToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerIdentityToken;
}
constexpr void Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_set__playerIdentityToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerIdentityToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::RemoteConfig::RemoteConfigRequest& Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_get__remoteConfigRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remoteConfigRequest;
}
constexpr ::Unity::Services::RemoteConfig::RemoteConfigRequest const& Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_get__remoteConfigRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remoteConfigRequest;
}
constexpr void Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_set__remoteConfigRequest(::Unity::Services::RemoteConfig::RemoteConfigRequest  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____remoteConfigRequest = value;
}
constexpr ::Unity::Services::RemoteConfig::UnityAttributes*& Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_get__unityAttributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unityAttributes;
}
constexpr ::Unity::Services::RemoteConfig::UnityAttributes* const& Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_get__unityAttributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unityAttributes;
}
constexpr void Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_set__unityAttributes(::Unity::Services::RemoteConfig::UnityAttributes*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unityAttributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Func_1<::Unity::Services::RemoteConfig::RequestHeaderTuple>*>*& Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_get_requestHeaderProviders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestHeaderProviders;
}
constexpr ::System::Collections::Generic::List_1<::System::Func_1<::Unity::Services::RemoteConfig::RequestHeaderTuple>*>* const& Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_get_requestHeaderProviders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestHeaderProviders;
}
constexpr void Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_set_requestHeaderProviders(::System::Collections::Generic::List_1<::System::Func_1<::Unity::Services::RemoteConfig::RequestHeaderTuple>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___requestHeaderProviders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Func_3<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*,::StringW,bool>*>*& Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_get_rawResponseValidators()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawResponseValidators;
}
constexpr ::System::Collections::Generic::List_1<::System::Func_3<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*,::StringW,bool>*>* const& Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_get_rawResponseValidators() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawResponseValidators;
}
constexpr void Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_set_rawResponseValidators(::System::Collections::Generic::List_1<::System::Func_3<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*,::StringW,bool>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rawResponseValidators)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_get_cacheFile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cacheFile;
}
constexpr ::StringW const& Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_get_cacheFile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cacheFile;
}
constexpr void Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_set_cacheFile(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cacheFile)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*& Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_get_FetchCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FetchCompleted;
}
constexpr ::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>* const& Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_get_FetchCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FetchCompleted;
}
constexpr void Unity::Services::RemoteConfig::ConfigManagerImpl::__cordl_internal_set_FetchCompleted(::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FetchCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::RemoteConfig::RuntimeConfig* Unity::Services::RemoteConfig::ConfigManagerImpl::get_appConfig()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "get_appConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::RemoteConfig::RuntimeConfig*, false>(this, ___internal_method);
}
inline void Unity::Services::RemoteConfig::ConfigManagerImpl::set_appConfig(::Unity::Services::RemoteConfig::RuntimeConfig*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "set_appConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::RemoteConfig::RuntimeConfig*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::RemoteConfig::ConfigManagerImpl::add_FetchCompleted(::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "add_FetchCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::RemoteConfig::ConfigManagerImpl::remove_FetchCompleted(::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "remove_FetchCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::RemoteConfig::ConfigManagerImpl::_ctor(::StringW  originService, ::StringW  attributionMetadataStr, ::StringW  cacheFileRC)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, originService, attributionMetadataStr, cacheFileRC);
}
inline ::Unity::Services::RemoteConfig::ConfigResponse Unity::Services::RemoteConfig::ConfigManagerImpl::ParseResponse(::Unity::Services::RemoteConfig::ConfigOrigin  origin, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers, ::StringW  body)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "ParseResponse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::RemoteConfig::ConfigOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::RemoteConfig::ConfigResponse, false>(this, ___internal_method, origin, headers, body);
}
inline void Unity::Services::RemoteConfig::ConfigManagerImpl::SetEnvironmentID(::StringW  environmentID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "SetEnvironmentID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, environmentID);
}
inline void Unity::Services::RemoteConfig::ConfigManagerImpl::SetPlayerIdentityToken(::StringW  identityToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "SetPlayerIdentityToken",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, identityToken);
}
inline void Unity::Services::RemoteConfig::ConfigManagerImpl::SetUserID(::StringW  iid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "SetUserID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, iid);
}
inline void Unity::Services::RemoteConfig::ConfigManagerImpl::SetPlayerID(::StringW  playerID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "SetPlayerID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerID);
}
inline void Unity::Services::RemoteConfig::ConfigManagerImpl::SetAnalyticsUserID(::StringW  analyticsUserID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "SetAnalyticsUserID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, analyticsUserID);
}
inline ::System::Threading::Tasks::Task_1<::Unity::Services::RemoteConfig::RuntimeConfig*>* Unity::Services::RemoteConfig::ConfigManagerImpl::FetchConfigsAsync(::StringW  configType, ::System::Object*  userAttributes, ::System::Object*  appAttributes, ::System::Object*  filterAttributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "FetchConfigsAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::RemoteConfig::RuntimeConfig*>*, false>(this, ___internal_method, configType, userAttributes, appAttributes, filterAttributes);
}
inline ::System::Threading::Tasks::Task_1<::Unity::Services::RemoteConfig::RuntimeConfig*>* Unity::Services::RemoteConfig::ConfigManagerImpl::FetchConfigsAsync(::System::Object*  userAttributes, ::System::Object*  appAttributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "FetchConfigsAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::RemoteConfig::RuntimeConfig*>*, false>(this, ___internal_method, userAttributes, appAttributes);
}
inline ::Unity::Services::RemoteConfig::RuntimeConfig* Unity::Services::RemoteConfig::ConfigManagerImpl::GetConfig(::StringW  configType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "GetConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::RemoteConfig::RuntimeConfig*, false>(this, ___internal_method, configType);
}
inline ::StringW Unity::Services::RemoteConfig::ConfigManagerImpl::PreparePayloadWithConfigType(::StringW  configType, ::System::Object*  userAttributes, ::System::Object*  appAttributes, ::System::Object*  filterAttributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "PreparePayloadWithConfigType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, configType, userAttributes, appAttributes, filterAttributes);
}
inline void Unity::Services::RemoteConfig::ConfigManagerImpl::SaveCache(::Unity::Services::RemoteConfig::ConfigResponse  response)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "SaveCache",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::RemoteConfig::ConfigResponse>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, response);
}
inline void Unity::Services::RemoteConfig::ConfigManagerImpl::LoadFromCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::ConfigManagerImpl*>::get(),
                        "LoadFromCache",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::RemoteConfig::ConfigManagerImpl* Unity::Services::RemoteConfig::ConfigManagerImpl::New_ctor(::StringW  originService, ::StringW  attributionMetadataStr, ::StringW  cacheFileRC)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::RemoteConfig::ConfigManagerImpl*>(originService, attributionMetadataStr, cacheFileRC));
}
// Ctor Parameters []
constexpr ::Unity::Services::RemoteConfig::ConfigManagerImpl::ConfigManagerImpl()   {
}
