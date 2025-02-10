#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/UGSAnalyticsInternalTools.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(UGSAnalyticsInternalTools)
// Forward declare root types
namespace UnityEngine::Analytics {
class UGSAnalyticsInternalTools;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Analytics::UGSAnalyticsInternalTools);
// Dependencies 
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.UGSAnalyticsInternalTools
class CORDL_TYPE UGSAnalyticsInternalTools {
public:
// Declarations
/// @brief Method SetPrivacyStatus, addr 0x3190950, size 0x3c, virtual false, abstract: false, final false
static inline void SetPrivacyStatus(bool  status) ;

// Ctor Parameters [CppParam { name: "", ty: "UGSAnalyticsInternalTools", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UGSAnalyticsInternalTools(UGSAnalyticsInternalTools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12462};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Analytics
NEED_NO_BOX(::UnityEngine::Analytics::UGSAnalyticsInternalTools);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::UGSAnalyticsInternalTools*, "UnityEngine.Analytics", "UGSAnalyticsInternalTools");
