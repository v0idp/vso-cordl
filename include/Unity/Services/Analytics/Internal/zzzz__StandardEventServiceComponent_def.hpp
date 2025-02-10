#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/StandardEventServiceComponent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Analytics/Internal/zzzz__IAnalyticsStandardEventComponent_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
CORDL_MODULE_EXPORT(StandardEventServiceComponent)
namespace Unity::Services::Analytics {
class IUnstructuredEventRecorder;
}
namespace Unity::Services::Core::Configuration::Internal {
class IProjectConfiguration;
}
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class StandardEventServiceComponent;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::StandardEventServiceComponent);
// Dependencies System.Object, Unity.Services.Core.Analytics.Internal.IAnalyticsStandardEventComponent, Unity.Services.Core.Internal.IServiceComponent
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.StandardEventServiceComponent
class CORDL_TYPE StandardEventServiceComponent : public ::System::Object {
public:
// Declarations
/// @brief Field m_AnalyticsService, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AnalyticsService, put=__cordl_internal_set_m_AnalyticsService)) ::Unity::Services::Analytics::IUnstructuredEventRecorder*  m_AnalyticsService;

/// @brief Field m_Configuration, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Configuration, put=__cordl_internal_set_m_Configuration)) ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*  m_Configuration;

/// @brief Convert operator to "::Unity::Services::Core::Analytics::Internal::IAnalyticsStandardEventComponent"
constexpr operator  ::Unity::Services::Core::Analytics::Internal::IAnalyticsStandardEventComponent*() noexcept;

/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr operator  ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

static inline ::Unity::Services::Analytics::Internal::StandardEventServiceComponent* New_ctor(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*  configuration, ::Unity::Services::Analytics::IUnstructuredEventRecorder*  analyticsService) ;

constexpr ::Unity::Services::Analytics::IUnstructuredEventRecorder* const& __cordl_internal_get_m_AnalyticsService() const;

constexpr ::Unity::Services::Analytics::IUnstructuredEventRecorder*& __cordl_internal_get_m_AnalyticsService() ;

constexpr ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* const& __cordl_internal_get_m_Configuration() const;

constexpr ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*& __cordl_internal_get_m_Configuration() ;

constexpr void __cordl_internal_set_m_AnalyticsService(::Unity::Services::Analytics::IUnstructuredEventRecorder*  value) ;

constexpr void __cordl_internal_set_m_Configuration(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*  value) ;

/// @brief Method .ctor, addr 0x2e8b638, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*  configuration, ::Unity::Services::Analytics::IUnstructuredEventRecorder*  analyticsService) ;

/// @brief Convert to "::Unity::Services::Core::Analytics::Internal::IAnalyticsStandardEventComponent"
constexpr ::Unity::Services::Core::Analytics::Internal::IAnalyticsStandardEventComponent* i___Unity__Services__Core__Analytics__Internal__IAnalyticsStandardEventComponent() noexcept;

/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandardEventServiceComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandardEventServiceComponent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandardEventServiceComponent(StandardEventServiceComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandardEventServiceComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandardEventServiceComponent(StandardEventServiceComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11899};

/// @brief Field m_Configuration, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*  ___m_Configuration;

/// @brief Field m_AnalyticsService, offset: 0x18, size: 0x8, def value: None
 ::Unity::Services::Analytics::IUnstructuredEventRecorder*  ___m_AnalyticsService;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Analytics::Internal::StandardEventServiceComponent, ___m_Configuration) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::StandardEventServiceComponent, ___m_AnalyticsService) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Internal::StandardEventServiceComponent, 0x20>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::StandardEventServiceComponent);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::StandardEventServiceComponent*, "Unity.Services.Analytics.Internal", "StandardEventServiceComponent");
