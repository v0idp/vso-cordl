#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/AnalyticsCommon.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsCommon_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsCommon.set_ugsAnalyticsEnabledInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::Analytics::AnalyticsCommon::set_ugsAnalyticsEnabledInternal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x31908d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsCommon*>::get(),
                        "set_ugsAnalyticsEnabledInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsCommon.set_ugsAnalyticsEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::Analytics::AnalyticsCommon::set_ugsAnalyticsEnabled)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3190914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsCommon*>::get(),
                        "set_ugsAnalyticsEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Analytics::AnalyticsCommon::set_ugsAnalyticsEnabledInternal(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsCommon*>::get(),
                        "set_ugsAnalyticsEnabledInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Analytics::AnalyticsCommon::set_ugsAnalyticsEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsCommon*>::get(),
                        "set_ugsAnalyticsEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::AnalyticsCommon::AnalyticsCommon()   {
}
