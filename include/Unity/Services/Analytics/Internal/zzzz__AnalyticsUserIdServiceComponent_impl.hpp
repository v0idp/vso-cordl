#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/AnalyticsUserIdServiceComponent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Analytics/Internal/zzzz__IAnalyticsUserId_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__AnalyticsUserIdServiceComponent_def.hpp"
#include "Unity/Services/Analytics/zzzz__IAnalyticsService_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::AnalyticsUserIdServiceComponent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::AnalyticsUserIdServiceComponent::*)(::Unity::Services::Analytics::IAnalyticsService*)>(&::Unity::Services::Analytics::Internal::AnalyticsUserIdServiceComponent::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2e8b664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::AnalyticsUserIdServiceComponent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::IAnalyticsService*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Analytics::IAnalyticsService*& Unity::Services::Analytics::Internal::AnalyticsUserIdServiceComponent::__cordl_internal_get_m_AnalyticsService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnalyticsService;
}
constexpr ::Unity::Services::Analytics::IAnalyticsService* const& Unity::Services::Analytics::Internal::AnalyticsUserIdServiceComponent::__cordl_internal_get_m_AnalyticsService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnalyticsService;
}
constexpr void Unity::Services::Analytics::Internal::AnalyticsUserIdServiceComponent::__cordl_internal_set_m_AnalyticsService(::Unity::Services::Analytics::IAnalyticsService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AnalyticsService)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Analytics::Internal::AnalyticsUserIdServiceComponent::_ctor(::Unity::Services::Analytics::IAnalyticsService*  analyticsService)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::AnalyticsUserIdServiceComponent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::IAnalyticsService*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, analyticsService);
}
inline ::Unity::Services::Analytics::Internal::AnalyticsUserIdServiceComponent* Unity::Services::Analytics::Internal::AnalyticsUserIdServiceComponent::New_ctor(::Unity::Services::Analytics::IAnalyticsService*  analyticsService)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Analytics::Internal::AnalyticsUserIdServiceComponent*>(analyticsService));
}
/// @brief Convert operator to "::Unity::Services::Core::Analytics::Internal::IAnalyticsUserId"
constexpr  Unity::Services::Analytics::Internal::AnalyticsUserIdServiceComponent::operator ::Unity::Services::Core::Analytics::Internal::IAnalyticsUserId*() noexcept {
return static_cast<::Unity::Services::Core::Analytics::Internal::IAnalyticsUserId*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Analytics::Internal::IAnalyticsUserId"
constexpr ::Unity::Services::Core::Analytics::Internal::IAnalyticsUserId* Unity::Services::Analytics::Internal::AnalyticsUserIdServiceComponent::i___Unity__Services__Core__Analytics__Internal__IAnalyticsUserId() noexcept {
return static_cast<::Unity::Services::Core::Analytics::Internal::IAnalyticsUserId*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr  Unity::Services::Analytics::Internal::AnalyticsUserIdServiceComponent::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* Unity::Services::Analytics::Internal::AnalyticsUserIdServiceComponent::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::Internal::AnalyticsUserIdServiceComponent::AnalyticsUserIdServiceComponent()   {
}
