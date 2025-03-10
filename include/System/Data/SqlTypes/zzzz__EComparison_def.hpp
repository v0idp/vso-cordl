#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/EComparison.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EComparison)
// Forward declare root types
namespace System::Data::SqlTypes {
struct EComparison;
}
// Write type traits
MARK_VAL_T(::System::Data::SqlTypes::EComparison);
// Dependencies 
namespace System::Data::SqlTypes {
// Is value type: true
// CS Name: System.Data.SqlTypes.EComparison
struct CORDL_TYPE EComparison {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EComparison_Unwrapped
enum struct __EComparison_Unwrapped : int32_t {
__E_LT = static_cast<int32_t>(0x0),
__E_LE = static_cast<int32_t>(0x1),
__E_EQ = static_cast<int32_t>(0x2),
__E_GE = static_cast<int32_t>(0x3),
__E_GT = static_cast<int32_t>(0x4),
__E_NE = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EComparison_Unwrapped () const noexcept {
return static_cast<__EComparison_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EComparison() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EComparison(int32_t  value__) noexcept;

/// @brief Field EQ value: I32(2)
static ::System::Data::SqlTypes::EComparison const EQ;

/// @brief Field GE value: I32(3)
static ::System::Data::SqlTypes::EComparison const GE;

/// @brief Field GT value: I32(4)
static ::System::Data::SqlTypes::EComparison const GT;

/// @brief Field LE value: I32(1)
static ::System::Data::SqlTypes::EComparison const LE;

/// @brief Field LT value: I32(0)
static ::System::Data::SqlTypes::EComparison const LT;

/// @brief Field NE value: I32(5)
static ::System::Data::SqlTypes::EComparison const NE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8230};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::SqlTypes::EComparison, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::EComparison, 0x4>, "Size mismatch!");

} // namespace end def System::Data::SqlTypes
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::EComparison, "System.Data.SqlTypes", "EComparison");
