#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/AnalyticsSessionState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnalyticsSessionState)
// Forward declare root types
namespace UnityEngine::Analytics {
struct AnalyticsSessionState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Analytics::AnalyticsSessionState);
// Dependencies 
namespace UnityEngine::Analytics {
// Is value type: true
// CS Name: UnityEngine.Analytics.AnalyticsSessionState
struct CORDL_TYPE AnalyticsSessionState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AnalyticsSessionState_Unwrapped
enum struct __AnalyticsSessionState_Unwrapped : int32_t {
__E_kSessionStopped = static_cast<int32_t>(0x0),
__E_kSessionStarted = static_cast<int32_t>(0x1),
__E_kSessionPaused = static_cast<int32_t>(0x2),
__E_kSessionResumed = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AnalyticsSessionState_Unwrapped () const noexcept {
return static_cast<__AnalyticsSessionState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AnalyticsSessionState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AnalyticsSessionState(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12383};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field kSessionPaused value: I32(2)
static ::UnityEngine::Analytics::AnalyticsSessionState const kSessionPaused;

/// @brief Field kSessionResumed value: I32(3)
static ::UnityEngine::Analytics::AnalyticsSessionState const kSessionResumed;

/// @brief Field kSessionStarted value: I32(1)
static ::UnityEngine::Analytics::AnalyticsSessionState const kSessionStarted;

/// @brief Field kSessionStopped value: I32(0)
static ::UnityEngine::Analytics::AnalyticsSessionState const kSessionStopped;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Analytics::AnalyticsSessionState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::AnalyticsSessionState, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Analytics
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::AnalyticsSessionState, "UnityEngine.Analytics", "AnalyticsSessionState");
