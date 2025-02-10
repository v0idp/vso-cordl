#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/GlobalIllumination/DiscLight.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__FalloffType_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LightMode_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LinearColor_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DiscLight)
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct DiscLight;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::GlobalIllumination::DiscLight);
// Dependencies UnityEngine.Experimental.GlobalIllumination.FalloffType, UnityEngine.Experimental.GlobalIllumination.LightMode, UnityEngine.Experimental.GlobalIllumination.LinearColor, UnityEngine.Quaternion, UnityEngine.Vector3
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// CS Name: UnityEngine.Experimental.GlobalIllumination.DiscLight
struct CORDL_TYPE DiscLight {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DiscLight() ;

// Ctor Parameters [CppParam { name: "instanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "shadow", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::UnityEngine::Experimental::GlobalIllumination::LightMode", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "orientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Experimental::GlobalIllumination::LinearColor", modifiers: "", def_value: None }, CppParam { name: "indirectColor", ty: "::UnityEngine::Experimental::GlobalIllumination::LinearColor", modifiers: "", def_value: None }, CppParam { name: "range", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "falloff", ty: "::UnityEngine::Experimental::GlobalIllumination::FalloffType", modifiers: "", def_value: None }]
constexpr DiscLight(int32_t  instanceID, bool  shadow, ::UnityEngine::Experimental::GlobalIllumination::LightMode  mode, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  orientation, ::UnityEngine::Experimental::GlobalIllumination::LinearColor  color, ::UnityEngine::Experimental::GlobalIllumination::LinearColor  indirectColor, float_t  range, float_t  radius, ::UnityEngine::Experimental::GlobalIllumination::FalloffType  falloff) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8958};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field instanceID, offset: 0x0, size: 0x4, def value: None
 int32_t  instanceID;

/// @brief Field shadow, offset: 0x4, size: 0x1, def value: None
 bool  shadow;

/// @brief Field mode, offset: 0x5, size: 0x1, def value: None
 ::UnityEngine::Experimental::GlobalIllumination::LightMode  mode;

/// @brief Field position, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field orientation, offset: 0x14, size: 0x10, def value: None
 ::UnityEngine::Quaternion  orientation;

/// @brief Field color, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Experimental::GlobalIllumination::LinearColor  color;

/// @brief Field indirectColor, offset: 0x34, size: 0x10, def value: None
 ::UnityEngine::Experimental::GlobalIllumination::LinearColor  indirectColor;

/// @brief Field range, offset: 0x44, size: 0x4, def value: None
 float_t  range;

/// @brief Field radius, offset: 0x48, size: 0x4, def value: None
 float_t  radius;

/// @brief Field falloff, offset: 0x4c, size: 0x1, def value: None
 ::UnityEngine::Experimental::GlobalIllumination::FalloffType  falloff;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::DiscLight, instanceID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::DiscLight, shadow) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::DiscLight, mode) == 0x5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::DiscLight, position) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::DiscLight, orientation) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::DiscLight, color) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::DiscLight, indirectColor) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::DiscLight, range) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::DiscLight, radius) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::DiscLight, falloff) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::DiscLight, 0x50>, "Size mismatch!");

} // namespace end def UnityEngine::Experimental::GlobalIllumination
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::DiscLight, "UnityEngine.Experimental.GlobalIllumination", "DiscLight");
