#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/AnalyticsResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnalyticsResult)
// Forward declare root types
namespace UnityEngine::Analytics {
struct AnalyticsResult;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Analytics::AnalyticsResult);
// Dependencies 
namespace UnityEngine::Analytics {
// Is value type: true
// CS Name: UnityEngine.Analytics.AnalyticsResult
struct CORDL_TYPE AnalyticsResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AnalyticsResult_Unwrapped
enum struct __AnalyticsResult_Unwrapped : int32_t {
__E_Ok = static_cast<int32_t>(0x0),
__E_NotInitialized = static_cast<int32_t>(0x1),
__E_AnalyticsDisabled = static_cast<int32_t>(0x2),
__E_TooManyItems = static_cast<int32_t>(0x3),
__E_SizeLimitReached = static_cast<int32_t>(0x4),
__E_TooManyRequests = static_cast<int32_t>(0x5),
__E_InvalidData = static_cast<int32_t>(0x6),
__E_UnsupportedPlatform = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AnalyticsResult_Unwrapped () const noexcept {
return static_cast<__AnalyticsResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AnalyticsResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AnalyticsResult(int32_t  value__) noexcept;

/// @brief Field AnalyticsDisabled value: I32(2)
static ::UnityEngine::Analytics::AnalyticsResult const AnalyticsDisabled;

/// @brief Field InvalidData value: I32(6)
static ::UnityEngine::Analytics::AnalyticsResult const InvalidData;

/// @brief Field NotInitialized value: I32(1)
static ::UnityEngine::Analytics::AnalyticsResult const NotInitialized;

/// @brief Field Ok value: I32(0)
static ::UnityEngine::Analytics::AnalyticsResult const Ok;

/// @brief Field SizeLimitReached value: I32(4)
static ::UnityEngine::Analytics::AnalyticsResult const SizeLimitReached;

/// @brief Field TooManyItems value: I32(3)
static ::UnityEngine::Analytics::AnalyticsResult const TooManyItems;

/// @brief Field TooManyRequests value: I32(5)
static ::UnityEngine::Analytics::AnalyticsResult const TooManyRequests;

/// @brief Field UnsupportedPlatform value: I32(7)
static ::UnityEngine::Analytics::AnalyticsResult const UnsupportedPlatform;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12389};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Analytics::AnalyticsResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::AnalyticsResult, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Analytics
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::AnalyticsResult, "UnityEngine.Analytics", "AnalyticsResult");
