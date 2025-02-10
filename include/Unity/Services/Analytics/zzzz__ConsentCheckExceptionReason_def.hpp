#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/ConsentCheckExceptionReason.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConsentCheckExceptionReason)
// Forward declare root types
namespace Unity::Services::Analytics {
struct ConsentCheckExceptionReason;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Analytics::ConsentCheckExceptionReason);
// Dependencies 
namespace Unity::Services::Analytics {
// Is value type: true
// CS Name: Unity.Services.Analytics.ConsentCheckExceptionReason
struct CORDL_TYPE ConsentCheckExceptionReason {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConsentCheckExceptionReason_Unwrapped
enum struct __ConsentCheckExceptionReason_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_DeserializationIssue = static_cast<int32_t>(0x1),
__E_NoInternetConnection = static_cast<int32_t>(0x2),
__E_InvalidConsentFlow = static_cast<int32_t>(0x3),
__E_ConsentFlowNotKnown = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConsentCheckExceptionReason_Unwrapped () const noexcept {
return static_cast<__ConsentCheckExceptionReason_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConsentCheckExceptionReason() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConsentCheckExceptionReason(int32_t  value__) noexcept;

/// @brief Field ConsentFlowNotKnown value: I32(4)
static ::Unity::Services::Analytics::ConsentCheckExceptionReason const ConsentFlowNotKnown;

/// @brief Field DeserializationIssue value: I32(1)
static ::Unity::Services::Analytics::ConsentCheckExceptionReason const DeserializationIssue;

/// @brief Field InvalidConsentFlow value: I32(3)
static ::Unity::Services::Analytics::ConsentCheckExceptionReason const InvalidConsentFlow;

/// @brief Field NoInternetConnection value: I32(2)
static ::Unity::Services::Analytics::ConsentCheckExceptionReason const NoInternetConnection;

/// @brief Field Unknown value: I32(0)
static ::Unity::Services::Analytics::ConsentCheckExceptionReason const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11858};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Analytics::ConsentCheckExceptionReason, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::ConsentCheckExceptionReason, 0x4>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::ConsentCheckExceptionReason, "Unity.Services.Analytics", "ConsentCheckExceptionReason");
