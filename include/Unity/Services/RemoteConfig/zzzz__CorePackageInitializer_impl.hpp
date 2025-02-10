#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/CorePackageInitializer.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__IInitializablePackage_impl.hpp"
#include "Unity/Services/RemoteConfig/zzzz__CorePackageInitializer_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__CoreRegistry_def.hpp"
#include "Unity/Services/RemoteConfig/zzzz__CorePackageInitializer_def.hpp"
//  Writing Method size for method: ::Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1::*)()>(&::Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1::MoveNext)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x2eaa850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2eaaca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "registry", ty: "::Unity::Services::Core::Internal::CoreRegistry*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1::CorePackageInitializer__Initialize_d__1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Unity::Services::Core::Internal::CoreRegistry*  registry, ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->registry = registry;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1::CorePackageInitializer__Initialize_d__1()   {
}
//  Writing Method size for method: ::Unity::Services::RemoteConfig::CorePackageInitializer.Register
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Services::RemoteConfig::CorePackageInitializer::Register)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2eaa61c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::CorePackageInitializer*>::get(),
                        "Register",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::CorePackageInitializer.Initialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::RemoteConfig::CorePackageInitializer::*)(::Unity::Services::Core::Internal::CoreRegistry*)>(&::Unity::Services::RemoteConfig::CorePackageInitializer::Initialize)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2eaa790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::CorePackageInitializer*>::get(),
                        "Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::CoreRegistry*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::CorePackageInitializer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::CorePackageInitializer::*)()>(&::Unity::Services::RemoteConfig::CorePackageInitializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eaa788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::CorePackageInitializer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::RemoteConfig::CorePackageInitializer::Register()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::CorePackageInitializer*>::get(),
                        "Register",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Unity::Services::RemoteConfig::CorePackageInitializer::Initialize(::Unity::Services::Core::Internal::CoreRegistry*  registry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::CorePackageInitializer*>::get(),
                        "Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::CoreRegistry*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, registry);
}
inline void Unity::Services::RemoteConfig::CorePackageInitializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::CorePackageInitializer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::RemoteConfig::CorePackageInitializer* Unity::Services::RemoteConfig::CorePackageInitializer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::RemoteConfig::CorePackageInitializer*>());
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IInitializablePackage"
constexpr  Unity::Services::RemoteConfig::CorePackageInitializer::operator ::Unity::Services::Core::Internal::IInitializablePackage*() noexcept {
return static_cast<::Unity::Services::Core::Internal::IInitializablePackage*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IInitializablePackage"
constexpr ::Unity::Services::Core::Internal::IInitializablePackage* Unity::Services::RemoteConfig::CorePackageInitializer::i___Unity__Services__Core__Internal__IInitializablePackage() noexcept {
return static_cast<::Unity::Services::Core::Internal::IInitializablePackage*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::RemoteConfig::CorePackageInitializer::CorePackageInitializer()   {
}
