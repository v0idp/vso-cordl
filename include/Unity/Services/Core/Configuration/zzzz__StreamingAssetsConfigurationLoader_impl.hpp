#pragma once
// IWYU pragma private; include "Unity/Services/Core/Configuration/StreamingAssetsConfigurationLoader.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Configuration/zzzz__IConfigurationLoader_impl.hpp"
#include "Unity/Services/Core/Configuration/zzzz__SerializableProjectConfiguration_impl.hpp"
#include "Unity/Services/Core/Configuration/zzzz__StreamingAssetsConfigurationLoader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Unity/Services/Core/Configuration/zzzz__SerializableProjectConfiguration_def.hpp"
#include "Unity/Services/Core/Configuration/zzzz__StreamingAssetsConfigurationLoader_def.hpp"
#include "Unity/Services/Core/Internal/Serialization/zzzz__IJsonSerializer_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2::*)()>(&::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x2e9b268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e9b5f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>  __t__builder, ::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2()   {
}
//  Writing Method size for method: ::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader::*)(::Unity::Services::Core::Internal::Serialization::IJsonSerializer*)>(&::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2e9aeec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::Serialization::IJsonSerializer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader.GetConfigAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>* (::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader::*)()>(&::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader::GetConfigAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2e9b178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader*>::get(),
                        "GetConfigAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Core::Internal::Serialization::IJsonSerializer*& Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader::__cordl_internal_get_m_Serializer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Serializer;
}
constexpr ::Unity::Services::Core::Internal::Serialization::IJsonSerializer* const& Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader::__cordl_internal_get_m_Serializer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Serializer;
}
constexpr void Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader::__cordl_internal_set_m_Serializer(::Unity::Services::Core::Internal::Serialization::IJsonSerializer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Serializer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader::_ctor(::Unity::Services::Core::Internal::Serialization::IJsonSerializer*  serializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::Serialization::IJsonSerializer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializer);
}
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>* Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader::GetConfigAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader*>::get(),
                        "GetConfigAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>*, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader* Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader::New_ctor(::Unity::Services::Core::Internal::Serialization::IJsonSerializer*  serializer)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader*>(serializer));
}
/// @brief Convert operator to "::Unity::Services::Core::Configuration::IConfigurationLoader"
constexpr  Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader::operator ::Unity::Services::Core::Configuration::IConfigurationLoader*() noexcept {
return static_cast<::Unity::Services::Core::Configuration::IConfigurationLoader*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Configuration::IConfigurationLoader"
constexpr ::Unity::Services::Core::Configuration::IConfigurationLoader* Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader::i___Unity__Services__Core__Configuration__IConfigurationLoader() noexcept {
return static_cast<::Unity::Services::Core::Configuration::IConfigurationLoader*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader::StreamingAssetsConfigurationLoader()   {
}
