#pragma once
// IWYU pragma private; include "Unity/Services/Core/Configuration/Internal/IProjectConfiguration.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_impl.hpp"
#include "Unity/Services/Core/Configuration/Internal/zzzz__IProjectConfiguration_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration.GetString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Core::Configuration::Internal::IProjectConfiguration::*)(::StringW, ::StringW)>(&::Unity::Services::Core::Configuration::Internal::IProjectConfiguration::GetString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline ::StringW Unity::Services::Core::Configuration::Internal::IProjectConfiguration::GetString(::StringW  key, ::StringW  defaultValue)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key, defaultValue);
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr  Unity::Services::Core::Configuration::Internal::IProjectConfiguration::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* Unity::Services::Core::Configuration::Internal::IProjectConfiguration::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
