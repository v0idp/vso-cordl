#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/IAnalyticsService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAnalyticsService)
// Forward declare root types
namespace Unity::Services::Analytics {
class IAnalyticsService;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::IAnalyticsService);
// Dependencies 
namespace Unity::Services::Analytics {
// Is value type: false
// CS Name: Unity.Services.Analytics.IAnalyticsService
class CORDL_TYPE IAnalyticsService {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IAnalyticsService", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAnalyticsService(IAnalyticsService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11855};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Analytics
NEED_NO_BOX(::Unity::Services::Analytics::IAnalyticsService);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::IAnalyticsService*, "Unity.Services.Analytics", "IAnalyticsService");
