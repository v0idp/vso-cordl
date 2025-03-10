#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/TextureDimension.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureDimension)
// Forward declare root types
namespace UnityEngine::Rendering {
struct TextureDimension;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::TextureDimension);
// Dependencies 
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.TextureDimension
struct CORDL_TYPE TextureDimension {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextureDimension_Unwrapped
enum struct __TextureDimension_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0xffffffff),
__E_None = static_cast<int32_t>(0x0),
__E_Any = static_cast<int32_t>(0x1),
__E_Tex2D = static_cast<int32_t>(0x2),
__E_Tex3D = static_cast<int32_t>(0x3),
__E_Cube = static_cast<int32_t>(0x4),
__E_Tex2DArray = static_cast<int32_t>(0x5),
__E_CubeArray = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextureDimension_Unwrapped () const noexcept {
return static_cast<__TextureDimension_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TextureDimension() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextureDimension(int32_t  value__) noexcept;

/// @brief Field Any value: I32(1)
static ::UnityEngine::Rendering::TextureDimension const Any;

/// @brief Field Cube value: I32(4)
static ::UnityEngine::Rendering::TextureDimension const Cube;

/// @brief Field CubeArray value: I32(6)
static ::UnityEngine::Rendering::TextureDimension const CubeArray;

/// @brief Field None value: I32(0)
static ::UnityEngine::Rendering::TextureDimension const None;

/// @brief Field Tex2D value: I32(2)
static ::UnityEngine::Rendering::TextureDimension const Tex2D;

/// @brief Field Tex2DArray value: I32(5)
static ::UnityEngine::Rendering::TextureDimension const Tex2DArray;

/// @brief Field Tex3D value: I32(3)
static ::UnityEngine::Rendering::TextureDimension const Tex3D;

/// @brief Field Unknown value: I32(-1)
static ::UnityEngine::Rendering::TextureDimension const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8884};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::TextureDimension, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::TextureDimension, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::TextureDimension, "UnityEngine.Rendering", "TextureDimension");
