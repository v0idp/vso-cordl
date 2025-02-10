#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AuthenticationPackageInitializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__IInitializablePackage_impl.hpp"
#include "Unity/Services/Authentication/zzzz__AuthenticationPackageInitializer_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "Unity/Services/Core/Configuration/Internal/zzzz__IProjectConfiguration_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__CoreRegistry_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationPackageInitializer.Initialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Authentication::AuthenticationPackageInitializer::*)(::Unity::Services::Core::Internal::CoreRegistry*)>(&::Unity::Services::Authentication::AuthenticationPackageInitializer::Initialize)> {
  constexpr static std::size_t size = 0x62c;
  constexpr static std::size_t addrs = 0x2e95e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationPackageInitializer*>::get(),
                        "Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::CoreRegistry*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationPackageInitializer.Register
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Services::Authentication::AuthenticationPackageInitializer::Register)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x2e96e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationPackageInitializer*>::get(),
                        "Register",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationPackageInitializer.GetPlayerAuthHost
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Authentication::AuthenticationPackageInitializer::*)(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*)>(&::Unity::Services::Authentication::AuthenticationPackageInitializer::GetPlayerAuthHost)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2e96658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationPackageInitializer*>::get(),
                        "GetPlayerAuthHost",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationPackageInitializer.GetPlayerNamesHost
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Authentication::AuthenticationPackageInitializer::*)(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*)>(&::Unity::Services::Authentication::AuthenticationPackageInitializer::GetPlayerNamesHost)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2e96934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationPackageInitializer*>::get(),
                        "GetPlayerNamesHost",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationPackageInitializer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationPackageInitializer::*)()>(&::Unity::Services::Authentication::AuthenticationPackageInitializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e9701c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationPackageInitializer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task* Unity::Services::Authentication::AuthenticationPackageInitializer::Initialize(::Unity::Services::Core::Internal::CoreRegistry*  registry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationPackageInitializer*>::get(),
                        "Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::CoreRegistry*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, registry);
}
inline void Unity::Services::Authentication::AuthenticationPackageInitializer::Register()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationPackageInitializer*>::get(),
                        "Register",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::StringW Unity::Services::Authentication::AuthenticationPackageInitializer::GetPlayerAuthHost(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*  projectConfiguration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationPackageInitializer*>::get(),
                        "GetPlayerAuthHost",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, projectConfiguration);
}
inline ::StringW Unity::Services::Authentication::AuthenticationPackageInitializer::GetPlayerNamesHost(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*  projectConfiguration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationPackageInitializer*>::get(),
                        "GetPlayerNamesHost",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, projectConfiguration);
}
inline void Unity::Services::Authentication::AuthenticationPackageInitializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationPackageInitializer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::AuthenticationPackageInitializer* Unity::Services::Authentication::AuthenticationPackageInitializer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::AuthenticationPackageInitializer*>());
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IInitializablePackage"
constexpr  Unity::Services::Authentication::AuthenticationPackageInitializer::operator ::Unity::Services::Core::Internal::IInitializablePackage*() noexcept {
return static_cast<::Unity::Services::Core::Internal::IInitializablePackage*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IInitializablePackage"
constexpr ::Unity::Services::Core::Internal::IInitializablePackage* Unity::Services::Authentication::AuthenticationPackageInitializer::i___Unity__Services__Core__Internal__IInitializablePackage() noexcept {
return static_cast<::Unity::Services::Core::Internal::IInitializablePackage*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::AuthenticationPackageInitializer::AuthenticationPackageInitializer()   {
}
