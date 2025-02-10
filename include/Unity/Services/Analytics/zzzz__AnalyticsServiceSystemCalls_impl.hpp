#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/AnalyticsServiceSystemCalls.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Analytics/zzzz__IAnalyticsServiceSystemCalls_impl.hpp"
#include "Unity/Services/Analytics/zzzz__AnalyticsServiceSystemCalls_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::AnalyticsServiceSystemCalls.get_UtcNow
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Unity::Services::Analytics::AnalyticsServiceSystemCalls::*)()>(&::Unity::Services::Analytics::AnalyticsServiceSystemCalls::get_UtcNow)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2e8ec78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceSystemCalls*>::get(),
                        "get_UtcNow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::AnalyticsServiceSystemCalls._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::AnalyticsServiceSystemCalls::*)()>(&::Unity::Services::Analytics::AnalyticsServiceSystemCalls::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8b2bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceSystemCalls*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::System::DateTime Unity::Services::Analytics::AnalyticsServiceSystemCalls::get_UtcNow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceSystemCalls*>::get(),
                        "get_UtcNow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::AnalyticsServiceSystemCalls::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceSystemCalls*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Analytics::AnalyticsServiceSystemCalls* Unity::Services::Analytics::AnalyticsServiceSystemCalls::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Analytics::AnalyticsServiceSystemCalls*>());
}
/// @brief Convert operator to "::Unity::Services::Analytics::IAnalyticsServiceSystemCalls"
constexpr  Unity::Services::Analytics::AnalyticsServiceSystemCalls::operator ::Unity::Services::Analytics::IAnalyticsServiceSystemCalls*() noexcept {
return static_cast<::Unity::Services::Analytics::IAnalyticsServiceSystemCalls*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Analytics::IAnalyticsServiceSystemCalls"
constexpr ::Unity::Services::Analytics::IAnalyticsServiceSystemCalls* Unity::Services::Analytics::AnalyticsServiceSystemCalls::i___Unity__Services__Analytics__IAnalyticsServiceSystemCalls() noexcept {
return static_cast<::Unity::Services::Analytics::IAnalyticsServiceSystemCalls*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::AnalyticsServiceSystemCalls::AnalyticsServiceSystemCalls()   {
}
