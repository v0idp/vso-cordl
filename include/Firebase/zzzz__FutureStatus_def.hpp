#pragma once
// IWYU pragma private; include "Firebase/FutureStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FutureStatus)
// Forward declare root types
namespace Firebase {
struct FutureStatus;
}
// Write type traits
MARK_VAL_T(::Firebase::FutureStatus);
// Dependencies 
namespace Firebase {
// Is value type: true
// CS Name: Firebase.FutureStatus
struct CORDL_TYPE FutureStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FutureStatus_Unwrapped
enum struct __FutureStatus_Unwrapped : int32_t {
__E_Complete = static_cast<int32_t>(0x0),
__E_Pending = static_cast<int32_t>(0x1),
__E_Invalid = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FutureStatus_Unwrapped () const noexcept {
return static_cast<__FutureStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FutureStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FutureStatus(int32_t  value__) noexcept;

/// @brief Field Complete value: I32(0)
static ::Firebase::FutureStatus const Complete;

/// @brief Field Invalid value: I32(2)
static ::Firebase::FutureStatus const Invalid;

/// @brief Field Pending value: I32(1)
static ::Firebase::FutureStatus const Pending;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11834};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Firebase::FutureStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::FutureStatus, 0x4>, "Size mismatch!");

} // namespace end def Firebase
DEFINE_IL2CPP_ARG_TYPE(::Firebase::FutureStatus, "Firebase", "FutureStatus");
