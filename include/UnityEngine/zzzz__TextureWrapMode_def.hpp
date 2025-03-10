#pragma once
// IWYU pragma private; include "UnityEngine/TextureWrapMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureWrapMode)
// Forward declare root types
namespace UnityEngine {
struct TextureWrapMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextureWrapMode);
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TextureWrapMode
struct CORDL_TYPE TextureWrapMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextureWrapMode_Unwrapped
enum struct __TextureWrapMode_Unwrapped : int32_t {
__E_Repeat = static_cast<int32_t>(0x0),
__E_Clamp = static_cast<int32_t>(0x1),
__E_Mirror = static_cast<int32_t>(0x2),
__E_MirrorOnce = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextureWrapMode_Unwrapped () const noexcept {
return static_cast<__TextureWrapMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TextureWrapMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextureWrapMode(int32_t  value__) noexcept;

/// @brief Field Clamp value: I32(1)
static ::UnityEngine::TextureWrapMode const Clamp;

/// @brief Field Mirror value: I32(2)
static ::UnityEngine::TextureWrapMode const Mirror;

/// @brief Field MirrorOnce value: I32(3)
static ::UnityEngine::TextureWrapMode const MirrorOnce;

/// @brief Field Repeat value: I32(0)
static ::UnityEngine::TextureWrapMode const Repeat;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8478};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextureWrapMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextureWrapMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextureWrapMode, "UnityEngine", "TextureWrapMode");
