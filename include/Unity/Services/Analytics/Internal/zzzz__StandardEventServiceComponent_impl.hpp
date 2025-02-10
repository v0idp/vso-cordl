#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/StandardEventServiceComponent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Analytics/Internal/zzzz__IAnalyticsStandardEventComponent_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__StandardEventServiceComponent_def.hpp"
#include "Unity/Services/Analytics/zzzz__IUnstructuredEventRecorder_def.hpp"
#include "Unity/Services/Core/Configuration/Internal/zzzz__IProjectConfiguration_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::StandardEventServiceComponent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::StandardEventServiceComponent::*)(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*, ::Unity::Services::Analytics::IUnstructuredEventRecorder*)>(&::Unity::Services::Analytics::Internal::StandardEventServiceComponent::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2e8b638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::StandardEventServiceComponent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::IUnstructuredEventRecorder*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*& Unity::Services::Analytics::Internal::StandardEventServiceComponent::__cordl_internal_get_m_Configuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Configuration;
}
constexpr ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* const& Unity::Services::Analytics::Internal::StandardEventServiceComponent::__cordl_internal_get_m_Configuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Configuration;
}
constexpr void Unity::Services::Analytics::Internal::StandardEventServiceComponent::__cordl_internal_set_m_Configuration(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Configuration)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Analytics::IUnstructuredEventRecorder*& Unity::Services::Analytics::Internal::StandardEventServiceComponent::__cordl_internal_get_m_AnalyticsService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnalyticsService;
}
constexpr ::Unity::Services::Analytics::IUnstructuredEventRecorder* const& Unity::Services::Analytics::Internal::StandardEventServiceComponent::__cordl_internal_get_m_AnalyticsService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnalyticsService;
}
constexpr void Unity::Services::Analytics::Internal::StandardEventServiceComponent::__cordl_internal_set_m_AnalyticsService(::Unity::Services::Analytics::IUnstructuredEventRecorder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AnalyticsService)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Analytics::Internal::StandardEventServiceComponent::_ctor(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*  configuration, ::Unity::Services::Analytics::IUnstructuredEventRecorder*  analyticsService)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::StandardEventServiceComponent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::IUnstructuredEventRecorder*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, configuration, analyticsService);
}
inline ::Unity::Services::Analytics::Internal::StandardEventServiceComponent* Unity::Services::Analytics::Internal::StandardEventServiceComponent::New_ctor(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*  configuration, ::Unity::Services::Analytics::IUnstructuredEventRecorder*  analyticsService)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Analytics::Internal::StandardEventServiceComponent*>(configuration, analyticsService));
}
/// @brief Convert operator to "::Unity::Services::Core::Analytics::Internal::IAnalyticsStandardEventComponent"
constexpr  Unity::Services::Analytics::Internal::StandardEventServiceComponent::operator ::Unity::Services::Core::Analytics::Internal::IAnalyticsStandardEventComponent*() noexcept {
return static_cast<::Unity::Services::Core::Analytics::Internal::IAnalyticsStandardEventComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Analytics::Internal::IAnalyticsStandardEventComponent"
constexpr ::Unity::Services::Core::Analytics::Internal::IAnalyticsStandardEventComponent* Unity::Services::Analytics::Internal::StandardEventServiceComponent::i___Unity__Services__Core__Analytics__Internal__IAnalyticsStandardEventComponent() noexcept {
return static_cast<::Unity::Services::Core::Analytics::Internal::IAnalyticsStandardEventComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr  Unity::Services::Analytics::Internal::StandardEventServiceComponent::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* Unity::Services::Analytics::Internal::StandardEventServiceComponent::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::Internal::StandardEventServiceComponent::StandardEventServiceComponent()   {
}
