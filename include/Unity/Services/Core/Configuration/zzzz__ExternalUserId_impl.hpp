#pragma once
// IWYU pragma private; include "Unity/Services/Core/Configuration/ExternalUserId.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Configuration/Internal/zzzz__IExternalUserId_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_impl.hpp"
#include "Unity/Services/Core/Configuration/zzzz__ExternalUserId_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Configuration::ExternalUserId.get_UserId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Core::Configuration::ExternalUserId::*)()>(&::Unity::Services::Core::Configuration::ExternalUserId::get_UserId)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2e9af14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::ExternalUserId*>::get(),
                        "get_UserId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Configuration::ExternalUserId._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Configuration::ExternalUserId::*)()>(&::Unity::Services::Core::Configuration::ExternalUserId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e9af78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::ExternalUserId*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::StringW Unity::Services::Core::Configuration::ExternalUserId::get_UserId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::ExternalUserId*>::get(),
                        "get_UserId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Configuration::ExternalUserId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::ExternalUserId*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Configuration::ExternalUserId* Unity::Services::Core::Configuration::ExternalUserId::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Configuration::ExternalUserId*>());
}
/// @brief Convert operator to "::Unity::Services::Core::Configuration::Internal::IExternalUserId"
constexpr  Unity::Services::Core::Configuration::ExternalUserId::operator ::Unity::Services::Core::Configuration::Internal::IExternalUserId*() noexcept {
return static_cast<::Unity::Services::Core::Configuration::Internal::IExternalUserId*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Configuration::Internal::IExternalUserId"
constexpr ::Unity::Services::Core::Configuration::Internal::IExternalUserId* Unity::Services::Core::Configuration::ExternalUserId::i___Unity__Services__Core__Configuration__Internal__IExternalUserId() noexcept {
return static_cast<::Unity::Services::Core::Configuration::Internal::IExternalUserId*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr  Unity::Services::Core::Configuration::ExternalUserId::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* Unity::Services::Core::Configuration::ExternalUserId::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Configuration::ExternalUserId::ExternalUserId()   {
}
