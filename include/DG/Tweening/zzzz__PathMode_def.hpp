#pragma once
// IWYU pragma private; include "DG/Tweening/PathMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PathMode)
// Forward declare root types
namespace DG::Tweening {
struct PathMode;
}
// Write type traits
MARK_VAL_T(::DG::Tweening::PathMode);
// Dependencies 
namespace DG::Tweening {
// Is value type: true
// CS Name: DG.Tweening.PathMode
struct CORDL_TYPE PathMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PathMode_Unwrapped
enum struct __PathMode_Unwrapped : int32_t {
__E_Ignore = static_cast<int32_t>(0x0),
__E_Full3D = static_cast<int32_t>(0x1),
__E_TopDown2D = static_cast<int32_t>(0x2),
__E_Sidescroller2D = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PathMode_Unwrapped () const noexcept {
return static_cast<__PathMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PathMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PathMode(int32_t  value__) noexcept;

/// @brief Field Full3D value: I32(1)
static ::DG::Tweening::PathMode const Full3D;

/// @brief Field Ignore value: I32(0)
static ::DG::Tweening::PathMode const Ignore;

/// @brief Field Sidescroller2D value: I32(3)
static ::DG::Tweening::PathMode const Sidescroller2D;

/// @brief Field TopDown2D value: I32(2)
static ::DG::Tweening::PathMode const TopDown2D;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10698};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::PathMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::PathMode, 0x4>, "Size mismatch!");

} // namespace end def DG::Tweening
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::PathMode, "DG.Tweening", "PathMode");
