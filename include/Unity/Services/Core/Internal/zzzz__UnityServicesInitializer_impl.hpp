#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/UnityServicesInitializer.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__UnityServicesInitializer_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__UnityServicesInitializer_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::UnityServicesInitializer__EnableServicesInitializationAsync_d__1.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::UnityServicesInitializer__EnableServicesInitializationAsync_d__1::*)()>(&::Unity::Services::Core::Internal::UnityServicesInitializer__EnableServicesInitializationAsync_d__1::MoveNext)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2ea2678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInitializer__EnableServicesInitializationAsync_d__1>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::UnityServicesInitializer__EnableServicesInitializationAsync_d__1.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::UnityServicesInitializer__EnableServicesInitializationAsync_d__1::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Core::Internal::UnityServicesInitializer__EnableServicesInitializationAsync_d__1::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ea2958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInitializer__EnableServicesInitializationAsync_d__1>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Core::Internal::UnityServicesInitializer__EnableServicesInitializationAsync_d__1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInitializer__EnableServicesInitializationAsync_d__1>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::UnityServicesInitializer__EnableServicesInitializationAsync_d__1::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInitializer__EnableServicesInitializationAsync_d__1>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Unity::Services::Core::Internal::UnityServicesInitializer__EnableServicesInitializationAsync_d__1::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Unity::Services::Core::Internal::UnityServicesInitializer__EnableServicesInitializationAsync_d__1::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Internal::UnityServicesInitializer__EnableServicesInitializationAsync_d__1::UnityServicesInitializer__EnableServicesInitializationAsync_d__1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::UnityServicesInitializer__EnableServicesInitializationAsync_d__1::UnityServicesInitializer__EnableServicesInitializationAsync_d__1()   {
}
//  Writing Method size for method: ::Unity::Services::Core::Internal::UnityServicesInitializer.CreateStaticInstance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Services::Core::Internal::UnityServicesInitializer::CreateStaticInstance)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x2ea2330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInitializer*>::get(),
                        "CreateStaticInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::UnityServicesInitializer.EnableServicesInitializationAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Services::Core::Internal::UnityServicesInitializer::EnableServicesInitializationAsync)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2ea25f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInitializer*>::get(),
                        "EnableServicesInitializationAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Core::Internal::UnityServicesInitializer::CreateStaticInstance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInitializer*>::get(),
                        "CreateStaticInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Unity::Services::Core::Internal::UnityServicesInitializer::EnableServicesInitializationAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::UnityServicesInitializer*>::get(),
                        "EnableServicesInitializationAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::UnityServicesInitializer::UnityServicesInitializer()   {
}
