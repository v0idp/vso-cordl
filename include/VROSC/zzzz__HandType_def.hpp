#pragma once
// IWYU pragma private; include "VROSC/HandType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandType)
// Forward declare root types
namespace VROSC {
struct HandType;
}
// Write type traits
MARK_VAL_T(::VROSC::HandType);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.HandType
struct CORDL_TYPE HandType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HandType_Unwrapped
enum struct __HandType_Unwrapped : int32_t {
__E_Any = static_cast<int32_t>(0x0),
__E_Left = static_cast<int32_t>(0x1),
__E_Right = static_cast<int32_t>(0x2),
__E_Both = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HandType_Unwrapped () const noexcept {
return static_cast<__HandType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HandType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HandType(int32_t  value__) noexcept;

/// @brief Field Any value: I32(0)
static ::VROSC::HandType const Any;

/// @brief Field Both value: I32(3)
static ::VROSC::HandType const Both;

/// @brief Field Left value: I32(1)
static ::VROSC::HandType const Left;

/// @brief Field Right value: I32(2)
static ::VROSC::HandType const Right;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{594};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::HandType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::HandType, 0x4>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HandType, "VROSC", "HandType");
