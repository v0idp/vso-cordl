#pragma once
// IWYU pragma private; include "Unity/Services/Core/Telemetry/Internal/IMetricsFactory.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IMetricsFactory_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IMetrics_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::IMetricsFactory.Create
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Telemetry::Internal::IMetrics* (::Unity::Services::Core::Telemetry::Internal::IMetricsFactory::*)(::StringW)>(&::Unity::Services::Core::Telemetry::Internal::IMetricsFactory::Create)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline ::Unity::Services::Core::Telemetry::Internal::IMetrics* Unity::Services::Core::Telemetry::Internal::IMetricsFactory::Create(::StringW  packageName)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Telemetry::Internal::IMetrics*, false>(this, ___internal_method, packageName);
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr  Unity::Services::Core::Telemetry::Internal::IMetricsFactory::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* Unity::Services::Core::Telemetry::Internal::IMetricsFactory::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
