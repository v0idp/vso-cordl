#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/CoreStatsHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Analytics/zzzz__ICoreStatsHelper_impl.hpp"
#include "Unity/Services/Analytics/zzzz__CoreStatsHelper_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::CoreStatsHelper.SetCoreStatsConsent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::CoreStatsHelper::*)(bool)>(&::Unity::Services::Analytics::CoreStatsHelper::SetCoreStatsConsent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e8ef1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::CoreStatsHelper*>::get(),
                        "SetCoreStatsConsent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::CoreStatsHelper._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::CoreStatsHelper::*)()>(&::Unity::Services::Analytics::CoreStatsHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8a7ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::CoreStatsHelper*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Analytics::CoreStatsHelper::SetCoreStatsConsent(bool  userProvidedConsent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::CoreStatsHelper*>::get(),
                        "SetCoreStatsConsent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userProvidedConsent);
}
inline void Unity::Services::Analytics::CoreStatsHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::CoreStatsHelper*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Analytics::CoreStatsHelper* Unity::Services::Analytics::CoreStatsHelper::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Analytics::CoreStatsHelper*>());
}
/// @brief Convert operator to "::Unity::Services::Analytics::ICoreStatsHelper"
constexpr  Unity::Services::Analytics::CoreStatsHelper::operator ::Unity::Services::Analytics::ICoreStatsHelper*() noexcept {
return static_cast<::Unity::Services::Analytics::ICoreStatsHelper*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Analytics::ICoreStatsHelper"
constexpr ::Unity::Services::Analytics::ICoreStatsHelper* Unity::Services::Analytics::CoreStatsHelper::i___Unity__Services__Analytics__ICoreStatsHelper() noexcept {
return static_cast<::Unity::Services::Analytics::ICoreStatsHelper*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::CoreStatsHelper::CoreStatsHelper()   {
}
