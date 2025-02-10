#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/UGSAnalyticsInternalTools.hpp"
#include "UnityEngine/Analytics/zzzz__UGSAnalyticsInternalTools_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::UGSAnalyticsInternalTools.SetPrivacyStatus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::Analytics::UGSAnalyticsInternalTools::SetPrivacyStatus)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3190950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::UGSAnalyticsInternalTools*>::get(),
                        "SetPrivacyStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Analytics::UGSAnalyticsInternalTools::SetPrivacyStatus(bool  status)  {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::UGSAnalyticsInternalTools*>::get(),
                        "SetPrivacyStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, status);
}
