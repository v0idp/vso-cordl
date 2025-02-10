#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/ConsentStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConsentStatus)
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
struct ConsentStatus;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Analytics::Internal::ConsentStatus);
// Dependencies 
namespace Unity::Services::Analytics::Internal {
// Is value type: true
// CS Name: Unity.Services.Analytics.Internal.ConsentStatus
struct CORDL_TYPE ConsentStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConsentStatus_Unwrapped
enum struct __ConsentStatus_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Forgetting = static_cast<int32_t>(0x1),
__E_OptedOut = static_cast<int32_t>(0x2),
__E_NotRequired = static_cast<int32_t>(0x3),
__E_RequiredButUnchecked = static_cast<int32_t>(0x4),
__E_ConsentGiven = static_cast<int32_t>(0x5),
__E_ConsentDenied = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConsentStatus_Unwrapped () const noexcept {
return static_cast<__ConsentStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConsentStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConsentStatus(int32_t  value__) noexcept;

/// @brief Field ConsentDenied value: I32(6)
static ::Unity::Services::Analytics::Internal::ConsentStatus const ConsentDenied;

/// @brief Field ConsentGiven value: I32(5)
static ::Unity::Services::Analytics::Internal::ConsentStatus const ConsentGiven;

/// @brief Field Forgetting value: I32(1)
static ::Unity::Services::Analytics::Internal::ConsentStatus const Forgetting;

/// @brief Field NotRequired value: I32(3)
static ::Unity::Services::Analytics::Internal::ConsentStatus const NotRequired;

/// @brief Field OptedOut value: I32(2)
static ::Unity::Services::Analytics::Internal::ConsentStatus const OptedOut;

/// @brief Field RequiredButUnchecked value: I32(4)
static ::Unity::Services::Analytics::Internal::ConsentStatus const RequiredButUnchecked;

/// @brief Field Unknown value: I32(0)
static ::Unity::Services::Analytics::Internal::ConsentStatus const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11879};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Analytics::Internal::ConsentStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Internal::ConsentStatus, 0x4>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Internal
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::ConsentStatus, "Unity.Services.Analytics.Internal", "ConsentStatus");
