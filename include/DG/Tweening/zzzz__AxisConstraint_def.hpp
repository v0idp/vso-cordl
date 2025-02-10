#pragma once
// IWYU pragma private; include "DG/Tweening/AxisConstraint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AxisConstraint)
// Forward declare root types
namespace DG::Tweening {
struct AxisConstraint;
}
// Write type traits
MARK_VAL_T(::DG::Tweening::AxisConstraint);
// Dependencies 
namespace DG::Tweening {
// Is value type: true
// CS Name: DG.Tweening.AxisConstraint
struct CORDL_TYPE AxisConstraint {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AxisConstraint_Unwrapped
enum struct __AxisConstraint_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_X = static_cast<int32_t>(0x2),
__E_Y = static_cast<int32_t>(0x4),
__E_Z = static_cast<int32_t>(0x8),
__E_W = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AxisConstraint_Unwrapped () const noexcept {
return static_cast<__AxisConstraint_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AxisConstraint() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AxisConstraint(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::DG::Tweening::AxisConstraint const None;

/// @brief Field W value: I32(16)
static ::DG::Tweening::AxisConstraint const W;

/// @brief Field X value: I32(2)
static ::DG::Tweening::AxisConstraint const X;

/// @brief Field Y value: I32(4)
static ::DG::Tweening::AxisConstraint const Y;

/// @brief Field Z value: I32(8)
static ::DG::Tweening::AxisConstraint const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10684};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::AxisConstraint, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::AxisConstraint, 0x4>, "Size mismatch!");

} // namespace end def DG::Tweening
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::AxisConstraint, "DG.Tweening", "AxisConstraint");
