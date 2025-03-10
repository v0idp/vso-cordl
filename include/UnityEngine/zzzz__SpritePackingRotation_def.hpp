#pragma once
// IWYU pragma private; include "UnityEngine/SpritePackingRotation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpritePackingRotation)
// Forward declare root types
namespace UnityEngine {
struct SpritePackingRotation;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SpritePackingRotation);
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.SpritePackingRotation
struct CORDL_TYPE SpritePackingRotation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SpritePackingRotation_Unwrapped
enum struct __SpritePackingRotation_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_FlipHorizontal = static_cast<int32_t>(0x1),
__E_FlipVertical = static_cast<int32_t>(0x2),
__E_Rotate180 = static_cast<int32_t>(0x3),
__E_Any = static_cast<int32_t>(0xf),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SpritePackingRotation_Unwrapped () const noexcept {
return static_cast<__SpritePackingRotation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SpritePackingRotation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SpritePackingRotation(int32_t  value__) noexcept;

/// @brief Field Any value: I32(15)
static ::UnityEngine::SpritePackingRotation const Any;

/// @brief Field FlipHorizontal value: I32(1)
static ::UnityEngine::SpritePackingRotation const FlipHorizontal;

/// @brief Field FlipVertical value: I32(2)
static ::UnityEngine::SpritePackingRotation const FlipVertical;

/// @brief Field None value: I32(0)
static ::UnityEngine::SpritePackingRotation const None;

/// @brief Field Rotate180 value: I32(3)
static ::UnityEngine::SpritePackingRotation const Rotate180;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8654};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SpritePackingRotation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::SpritePackingRotation, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpritePackingRotation, "UnityEngine", "SpritePackingRotation");
