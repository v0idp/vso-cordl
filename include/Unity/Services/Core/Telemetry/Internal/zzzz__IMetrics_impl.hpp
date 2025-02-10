#pragma once
// IWYU pragma private; include "Unity/Services/Core/Telemetry/Internal/IMetrics.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IMetrics_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::IMetrics.SendSumMetric
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::IMetrics::*)(::StringW, double_t, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Unity::Services::Core::Telemetry::Internal::IMetrics::SendSumMetric)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IMetrics*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IMetrics*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline void Unity::Services::Core::Telemetry::Internal::IMetrics::SendSumMetric(::StringW  name, double_t  value, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  tags)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IMetrics*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value, tags);
}
