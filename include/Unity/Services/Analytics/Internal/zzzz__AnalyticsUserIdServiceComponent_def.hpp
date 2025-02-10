#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/AnalyticsUserIdServiceComponent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Analytics/Internal/zzzz__IAnalyticsUserId_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
CORDL_MODULE_EXPORT(AnalyticsUserIdServiceComponent)
namespace Unity::Services::Analytics {
class IAnalyticsService;
}
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class AnalyticsUserIdServiceComponent;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::AnalyticsUserIdServiceComponent);
// Dependencies System.Object, Unity.Services.Core.Analytics.Internal.IAnalyticsUserId, Unity.Services.Core.Internal.IServiceComponent
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.AnalyticsUserIdServiceComponent
class CORDL_TYPE AnalyticsUserIdServiceComponent : public ::System::Object {
public:
// Declarations
/// @brief Field m_AnalyticsService, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AnalyticsService, put=__cordl_internal_set_m_AnalyticsService)) ::Unity::Services::Analytics::IAnalyticsService*  m_AnalyticsService;

/// @brief Convert operator to "::Unity::Services::Core::Analytics::Internal::IAnalyticsUserId"
constexpr operator  ::Unity::Services::Core::Analytics::Internal::IAnalyticsUserId*() noexcept;

/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr operator  ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

static inline ::Unity::Services::Analytics::Internal::AnalyticsUserIdServiceComponent* New_ctor(::Unity::Services::Analytics::IAnalyticsService*  analyticsService) ;

constexpr ::Unity::Services::Analytics::IAnalyticsService* const& __cordl_internal_get_m_AnalyticsService() const;

constexpr ::Unity::Services::Analytics::IAnalyticsService*& __cordl_internal_get_m_AnalyticsService() ;

constexpr void __cordl_internal_set_m_AnalyticsService(::Unity::Services::Analytics::IAnalyticsService*  value) ;

/// @brief Method .ctor, addr 0x2e8b664, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Analytics::IAnalyticsService*  analyticsService) ;

/// @brief Convert to "::Unity::Services::Core::Analytics::Internal::IAnalyticsUserId"
constexpr ::Unity::Services::Core::Analytics::Internal::IAnalyticsUserId* i___Unity__Services__Core__Analytics__Internal__IAnalyticsUserId() noexcept;

/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnalyticsUserIdServiceComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsUserIdServiceComponent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnalyticsUserIdServiceComponent(AnalyticsUserIdServiceComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsUserIdServiceComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnalyticsUserIdServiceComponent(AnalyticsUserIdServiceComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11870};

/// @brief Field m_AnalyticsService, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::Analytics::IAnalyticsService*  ___m_AnalyticsService;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Analytics::Internal::AnalyticsUserIdServiceComponent, ___m_AnalyticsService) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Internal::AnalyticsUserIdServiceComponent, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::AnalyticsUserIdServiceComponent);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::AnalyticsUserIdServiceComponent*, "Unity.Services.Analytics.Internal", "AnalyticsUserIdServiceComponent");
