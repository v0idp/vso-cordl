#pragma once
// IWYU pragma private; include "DG/Tweening/RotateMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RotateMode)
// Forward declare root types
namespace DG::Tweening {
struct RotateMode;
}
// Write type traits
MARK_VAL_T(::DG::Tweening::RotateMode);
// Dependencies 
namespace DG::Tweening {
// Is value type: true
// CS Name: DG.Tweening.RotateMode
struct CORDL_TYPE RotateMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RotateMode_Unwrapped
enum struct __RotateMode_Unwrapped : int32_t {
__E_Fast = static_cast<int32_t>(0x0),
__E_FastBeyond360 = static_cast<int32_t>(0x1),
__E_WorldAxisAdd = static_cast<int32_t>(0x2),
__E_LocalAxisAdd = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RotateMode_Unwrapped () const noexcept {
return static_cast<__RotateMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RotateMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RotateMode(int32_t  value__) noexcept;

/// @brief Field Fast value: I32(0)
static ::DG::Tweening::RotateMode const Fast;

/// @brief Field FastBeyond360 value: I32(1)
static ::DG::Tweening::RotateMode const FastBeyond360;

/// @brief Field LocalAxisAdd value: I32(3)
static ::DG::Tweening::RotateMode const LocalAxisAdd;

/// @brief Field WorldAxisAdd value: I32(2)
static ::DG::Tweening::RotateMode const WorldAxisAdd;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10700};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::RotateMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::RotateMode, 0x4>, "Size mismatch!");

} // namespace end def DG::Tweening
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::RotateMode, "DG.Tweening", "RotateMode");
