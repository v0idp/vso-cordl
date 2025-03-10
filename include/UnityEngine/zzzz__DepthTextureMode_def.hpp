#pragma once
// IWYU pragma private; include "UnityEngine/DepthTextureMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DepthTextureMode)
// Forward declare root types
namespace UnityEngine {
struct DepthTextureMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::DepthTextureMode);
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.DepthTextureMode
struct CORDL_TYPE DepthTextureMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DepthTextureMode_Unwrapped
enum struct __DepthTextureMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Depth = static_cast<int32_t>(0x1),
__E_DepthNormals = static_cast<int32_t>(0x2),
__E_MotionVectors = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DepthTextureMode_Unwrapped () const noexcept {
return static_cast<__DepthTextureMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DepthTextureMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DepthTextureMode(int32_t  value__) noexcept;

/// @brief Field Depth value: I32(1)
static ::UnityEngine::DepthTextureMode const Depth;

/// @brief Field DepthNormals value: I32(2)
static ::UnityEngine::DepthTextureMode const DepthNormals;

/// @brief Field MotionVectors value: I32(4)
static ::UnityEngine::DepthTextureMode const MotionVectors;

/// @brief Field None value: I32(0)
static ::UnityEngine::DepthTextureMode const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8472};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::DepthTextureMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::DepthTextureMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DepthTextureMode, "UnityEngine", "DepthTextureMode");
