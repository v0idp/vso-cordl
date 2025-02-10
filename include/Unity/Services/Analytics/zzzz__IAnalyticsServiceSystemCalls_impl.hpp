#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/IAnalyticsServiceSystemCalls.hpp"
#include "Unity/Services/Analytics/zzzz__IAnalyticsServiceSystemCalls_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::IAnalyticsServiceSystemCalls.get_UtcNow
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Unity::Services::Analytics::IAnalyticsServiceSystemCalls::*)()>(&::Unity::Services::Analytics::IAnalyticsServiceSystemCalls::get_UtcNow)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::IAnalyticsServiceSystemCalls*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::IAnalyticsServiceSystemCalls*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline ::System::DateTime Unity::Services::Analytics::IAnalyticsServiceSystemCalls::get_UtcNow()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::IAnalyticsServiceSystemCalls*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
