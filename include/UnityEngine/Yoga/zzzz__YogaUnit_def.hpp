#pragma once
// IWYU pragma private; include "UnityEngine/Yoga/YogaUnit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(YogaUnit)
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaUnit;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Yoga::YogaUnit);
// Dependencies 
namespace UnityEngine::Yoga {
// Is value type: true
// CS Name: UnityEngine.Yoga.YogaUnit
struct CORDL_TYPE YogaUnit {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __YogaUnit_Unwrapped
enum struct __YogaUnit_Unwrapped : int32_t {
__E_Undefined = static_cast<int32_t>(0x0),
__E_Point = static_cast<int32_t>(0x1),
__E_Percent = static_cast<int32_t>(0x2),
__E_Auto = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __YogaUnit_Unwrapped () const noexcept {
return static_cast<__YogaUnit_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr YogaUnit() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr YogaUnit(int32_t  value__) noexcept;

/// @brief Field Auto value: I32(3)
static ::UnityEngine::Yoga::YogaUnit const Auto;

/// @brief Field Percent value: I32(2)
static ::UnityEngine::Yoga::YogaUnit const Percent;

/// @brief Field Point value: I32(1)
static ::UnityEngine::Yoga::YogaUnit const Point;

/// @brief Field Undefined value: I32(0)
static ::UnityEngine::Yoga::YogaUnit const Undefined;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3625};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Yoga::YogaUnit, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaUnit, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaUnit, "UnityEngine.Yoga", "YogaUnit");
