#pragma once
// IWYU pragma private; include "Unity/Services/Core/UnityServices.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/zzzz__UnityServices_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/zzzz__ExternalUserIdProperty_def.hpp"
#include "Unity/Services/Core/zzzz__IUnityServices_def.hpp"
#include "Unity/Services/Core/zzzz__InitializationOptions_def.hpp"
#include "Unity/Services/Core/zzzz__UnityServices_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::UnityServices__InitializeAsync_d__15.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::UnityServices__InitializeAsync_d__15::*)()>(&::Unity::Services::Core::UnityServices__InitializeAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x2e9bdf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices__InitializeAsync_d__15>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::UnityServices__InitializeAsync_d__15.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::UnityServices__InitializeAsync_d__15::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Core::UnityServices__InitializeAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2e9c468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices__InitializeAsync_d__15>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Core::UnityServices__InitializeAsync_d__15::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices__InitializeAsync_d__15>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::UnityServices__InitializeAsync_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices__InitializeAsync_d__15>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Unity::Services::Core::UnityServices__InitializeAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Unity::Services::Core::UnityServices__InitializeAsync_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "options", ty: "::Unity::Services::Core::InitializationOptions*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Object*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::UnityServices__InitializeAsync_d__15::UnityServices__InitializeAsync_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Unity::Services::Core::InitializationOptions*  options, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Object*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->options = options;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::UnityServices__InitializeAsync_d__15::UnityServices__InitializeAsync_d__15()   {
}
//  Writing Method size for method: ::Unity::Services::Core::UnityServices.get_Instance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::IUnityServices* (*)()>(&::Unity::Services::Core::UnityServices::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2e9ba64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::UnityServices.set_Instance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Services::Core::IUnityServices*)>(&::Unity::Services::Core::UnityServices::set_Instance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2e9babc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices*>::get(),
                        "set_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::IUnityServices*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::UnityServices.get_InstantiationCompletion
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* (*)()>(&::Unity::Services::Core::UnityServices::get_InstantiationCompletion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2e9bb18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices*>::get(),
                        "get_InstantiationCompletion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::UnityServices.set_InstantiationCompletion
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*)>(&::Unity::Services::Core::UnityServices::set_InstantiationCompletion)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2e9bb70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices*>::get(),
                        "set_InstantiationCompletion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::UnityServices.get_ExternalUserId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Unity::Services::Core::UnityServices::get_ExternalUserId)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2e9bbcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices*>::get(),
                        "get_ExternalUserId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::UnityServices.set_ExternalUserId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::Unity::Services::Core::UnityServices::set_ExternalUserId)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2e9bc30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices*>::get(),
                        "set_ExternalUserId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::UnityServices.InitializeAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)(::Unity::Services::Core::InitializationOptions*)>(&::Unity::Services::Core::UnityServices::InitializeAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2e9bcbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices*>::get(),
                        "InitializeAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::InitializationOptions*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Core::UnityServices::setStaticF__Instance_k__BackingField(::Unity::Services::Core::IUnityServices*  value)  {
::cordl_internals::setStaticField<::Unity::Services::Core::IUnityServices*, "<Instance>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices*>::get>(std::forward<::Unity::Services::Core::IUnityServices*>(value));
}
inline ::Unity::Services::Core::IUnityServices* Unity::Services::Core::UnityServices::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::Unity::Services::Core::IUnityServices*, "<Instance>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices*>::get>();
}
inline void Unity::Services::Core::UnityServices::setStaticF__InstantiationCompletion_k__BackingField(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*, "<InstantiationCompletion>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices*>::get>(std::forward<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*>(value));
}
inline ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* Unity::Services::Core::UnityServices::getStaticF__InstantiationCompletion_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*, "<InstantiationCompletion>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices*>::get>();
}
inline void Unity::Services::Core::UnityServices::setStaticF_ExternalUserIdProperty(::Unity::Services::Core::ExternalUserIdProperty*  value)  {
::cordl_internals::setStaticField<::Unity::Services::Core::ExternalUserIdProperty*, "ExternalUserIdProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices*>::get>(std::forward<::Unity::Services::Core::ExternalUserIdProperty*>(value));
}
inline ::Unity::Services::Core::ExternalUserIdProperty* Unity::Services::Core::UnityServices::getStaticF_ExternalUserIdProperty()  {
return ::cordl_internals::getStaticField<::Unity::Services::Core::ExternalUserIdProperty*, "ExternalUserIdProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices*>::get>();
}
inline ::Unity::Services::Core::IUnityServices* Unity::Services::Core::UnityServices::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::IUnityServices*, false>(nullptr, ___internal_method);
}
inline void Unity::Services::Core::UnityServices::set_Instance(::Unity::Services::Core::IUnityServices*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices*>::get(),
                        "set_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::IUnityServices*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* Unity::Services::Core::UnityServices::get_InstantiationCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices*>::get(),
                        "get_InstantiationCompletion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*, false>(nullptr, ___internal_method);
}
inline void Unity::Services::Core::UnityServices::set_InstantiationCompletion(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices*>::get(),
                        "set_InstantiationCompletion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::StringW Unity::Services::Core::UnityServices::get_ExternalUserId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices*>::get(),
                        "get_ExternalUserId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void Unity::Services::Core::UnityServices::set_ExternalUserId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices*>::get(),
                        "set_ExternalUserId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Core::UnityServices::InitializeAsync(::Unity::Services::Core::InitializationOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityServices*>::get(),
                        "InitializeAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::InitializationOptions*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, options);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::UnityServices::UnityServices()   {
}
