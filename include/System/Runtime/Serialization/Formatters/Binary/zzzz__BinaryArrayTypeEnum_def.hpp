#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/BinaryArrayTypeEnum.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryArrayTypeEnum)
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryArrayTypeEnum;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum);
// Dependencies 
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum
struct CORDL_TYPE BinaryArrayTypeEnum {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BinaryArrayTypeEnum_Unwrapped
enum struct __BinaryArrayTypeEnum_Unwrapped : int32_t {
__E_Single = static_cast<int32_t>(0x0),
__E_Jagged = static_cast<int32_t>(0x1),
__E_Rectangular = static_cast<int32_t>(0x2),
__E_SingleOffset = static_cast<int32_t>(0x3),
__E_JaggedOffset = static_cast<int32_t>(0x4),
__E_RectangularOffset = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BinaryArrayTypeEnum_Unwrapped () const noexcept {
return static_cast<__BinaryArrayTypeEnum_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BinaryArrayTypeEnum() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BinaryArrayTypeEnum(int32_t  value__) noexcept;

/// @brief Field Jagged value: I32(1)
static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const Jagged;

/// @brief Field JaggedOffset value: I32(4)
static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const JaggedOffset;

/// @brief Field Rectangular value: I32(2)
static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const Rectangular;

/// @brief Field RectangularOffset value: I32(5)
static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const RectangularOffset;

/// @brief Field Single value: I32(0)
static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const Single;

/// @brief Field SingleOffset value: I32(3)
static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const SingleOffset;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2897};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum, 0x4>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum, "System.Runtime.Serialization.Formatters.Binary", "BinaryArrayTypeEnum");
