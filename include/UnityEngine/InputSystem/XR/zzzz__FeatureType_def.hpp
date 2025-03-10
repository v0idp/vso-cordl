#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/FeatureType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FeatureType)
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
struct FeatureType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::FeatureType);
// Dependencies 
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// CS Name: UnityEngine.InputSystem.XR.FeatureType
struct CORDL_TYPE FeatureType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FeatureType_Unwrapped
enum struct __FeatureType_Unwrapped : int32_t {
__E_Custom = static_cast<int32_t>(0x0),
__E_Binary = static_cast<int32_t>(0x1),
__E_DiscreteStates = static_cast<int32_t>(0x2),
__E_Axis1D = static_cast<int32_t>(0x3),
__E_Axis2D = static_cast<int32_t>(0x4),
__E_Axis3D = static_cast<int32_t>(0x5),
__E_Rotation = static_cast<int32_t>(0x6),
__E_Hand = static_cast<int32_t>(0x7),
__E_Bone = static_cast<int32_t>(0x8),
__E_Eyes = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FeatureType_Unwrapped () const noexcept {
return static_cast<__FeatureType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FeatureType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FeatureType(int32_t  value__) noexcept;

/// @brief Field Axis1D value: I32(3)
static ::UnityEngine::InputSystem::XR::FeatureType const Axis1D;

/// @brief Field Axis2D value: I32(4)
static ::UnityEngine::InputSystem::XR::FeatureType const Axis2D;

/// @brief Field Axis3D value: I32(5)
static ::UnityEngine::InputSystem::XR::FeatureType const Axis3D;

/// @brief Field Binary value: I32(1)
static ::UnityEngine::InputSystem::XR::FeatureType const Binary;

/// @brief Field Bone value: I32(8)
static ::UnityEngine::InputSystem::XR::FeatureType const Bone;

/// @brief Field Custom value: I32(0)
static ::UnityEngine::InputSystem::XR::FeatureType const Custom;

/// @brief Field DiscreteStates value: I32(2)
static ::UnityEngine::InputSystem::XR::FeatureType const DiscreteStates;

/// @brief Field Eyes value: I32(9)
static ::UnityEngine::InputSystem::XR::FeatureType const Eyes;

/// @brief Field Hand value: I32(7)
static ::UnityEngine::InputSystem::XR::FeatureType const Hand;

/// @brief Field Rotation value: I32(6)
static ::UnityEngine::InputSystem::XR::FeatureType const Rotation;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4938};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::XR::FeatureType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::FeatureType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::FeatureType, "UnityEngine.InputSystem.XR", "FeatureType");
