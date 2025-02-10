#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/ICoreStatsHelper.hpp"
#include "Unity/Services/Analytics/zzzz__ICoreStatsHelper_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::ICoreStatsHelper.SetCoreStatsConsent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::ICoreStatsHelper::*)(bool)>(&::Unity::Services::Analytics::ICoreStatsHelper::SetCoreStatsConsent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::ICoreStatsHelper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::ICoreStatsHelper*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline void Unity::Services::Analytics::ICoreStatsHelper::SetCoreStatsConsent(bool  userProvidedConsent)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::ICoreStatsHelper*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userProvidedConsent);
}
