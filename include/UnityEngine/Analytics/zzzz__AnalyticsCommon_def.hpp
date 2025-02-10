#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/AnalyticsCommon.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AnalyticsCommon)
// Forward declare root types
namespace UnityEngine::Analytics {
class AnalyticsCommon;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Analytics::AnalyticsCommon);
// Dependencies System.Object
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.AnalyticsCommon
class CORDL_TYPE AnalyticsCommon : public ::System::Object {
public:
// Declarations
/// @brief Method set_ugsAnalyticsEnabled, addr 0x3190914, size 0x3c, virtual false, abstract: false, final false
static inline void set_ugsAnalyticsEnabled(bool  value) ;

/// @brief Method set_ugsAnalyticsEnabledInternal, addr 0x31908d8, size 0x3c, virtual false, abstract: false, final false
static inline void set_ugsAnalyticsEnabledInternal(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnalyticsCommon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsCommon", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnalyticsCommon(AnalyticsCommon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsCommon", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnalyticsCommon(AnalyticsCommon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12461};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::AnalyticsCommon, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Analytics
NEED_NO_BOX(::UnityEngine::Analytics::AnalyticsCommon);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::AnalyticsCommon*, "UnityEngine.Analytics", "AnalyticsCommon");
