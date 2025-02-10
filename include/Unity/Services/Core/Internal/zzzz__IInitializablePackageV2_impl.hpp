#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/IInitializablePackageV2.hpp"
#include "Unity/Services/Core/Internal/zzzz__IInitializablePackage_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__IInitializablePackageV2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__CoreRegistry_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::IInitializablePackageV2.InitializeInstanceAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Core::Internal::IInitializablePackageV2::*)(::Unity::Services::Core::Internal::CoreRegistry*)>(&::Unity::Services::Core::Internal::IInitializablePackageV2::InitializeInstanceAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::IInitializablePackageV2*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::IInitializablePackageV2*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task* Unity::Services::Core::Internal::IInitializablePackageV2::InitializeInstanceAsync(::Unity::Services::Core::Internal::CoreRegistry*  registry)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::IInitializablePackageV2*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, registry);
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IInitializablePackage"
constexpr  Unity::Services::Core::Internal::IInitializablePackageV2::operator ::Unity::Services::Core::Internal::IInitializablePackage*() noexcept {
return static_cast<::Unity::Services::Core::Internal::IInitializablePackage*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IInitializablePackage"
constexpr ::Unity::Services::Core::Internal::IInitializablePackage* Unity::Services::Core::Internal::IInitializablePackageV2::i___Unity__Services__Core__Internal__IInitializablePackage() noexcept {
return static_cast<::Unity::Services::Core::Internal::IInitializablePackage*>(static_cast<void*>(this));
}
