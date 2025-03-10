#pragma once
// IWYU pragma private; include "System/DTSubStringType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DTSubStringType)
// Forward declare root types
namespace System {
struct DTSubStringType;
}
// Write type traits
MARK_VAL_T(::System::DTSubStringType);
// Dependencies 
namespace System {
// Is value type: true
// CS Name: System.DTSubStringType
struct CORDL_TYPE DTSubStringType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DTSubStringType_Unwrapped
enum struct __DTSubStringType_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Invalid = static_cast<int32_t>(0x1),
__E_Number = static_cast<int32_t>(0x2),
__E_End = static_cast<int32_t>(0x3),
__E_Other = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DTSubStringType_Unwrapped () const noexcept {
return static_cast<__DTSubStringType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DTSubStringType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DTSubStringType(int32_t  value__) noexcept;

/// @brief Field End value: I32(3)
static ::System::DTSubStringType const End;

/// @brief Field Invalid value: I32(1)
static ::System::DTSubStringType const Invalid;

/// @brief Field Number value: I32(2)
static ::System::DTSubStringType const Number;

/// @brief Field Other value: I32(4)
static ::System::DTSubStringType const Other;

/// @brief Field Unknown value: I32(0)
static ::System::DTSubStringType const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2105};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::DTSubStringType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::DTSubStringType, 0x4>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::DTSubStringType, "System", "DTSubStringType");
