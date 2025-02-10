#pragma once
// IWYU pragma private; include "VRVisuals/SetSoundReactiveColors.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SetSoundReactiveColors)
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace VRVisuals {
class SetSoundReactiveColors;
}
// Write type traits
MARK_REF_PTR_T(::VRVisuals::SetSoundReactiveColors);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Vector4
namespace VRVisuals {
// Is value type: false
// CS Name: VRVisuals.SetSoundReactiveColors
class CORDL_TYPE SetSoundReactiveColors : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _baseColor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__baseColor, put=__cordl_internal_set__baseColor)) ::UnityEngine::Color  _baseColor;

/// @brief Field _bobbing, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__bobbing, put=__cordl_internal_set__bobbing)) float_t  _bobbing;

/// @brief Field _bobbingSpeed, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__bobbingSpeed, put=__cordl_internal_set__bobbingSpeed)) float_t  _bobbingSpeed;

/// @brief Field _jumpOnSound, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__jumpOnSound, put=__cordl_internal_set__jumpOnSound)) ::UnityEngine::Vector4  _jumpOnSound;

/// @brief Field _materialBlock, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialBlock, put=__cordl_internal_set__materialBlock)) ::UnityEngine::MaterialPropertyBlock*  _materialBlock;

/// @brief Field _midColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__midColor, put=__cordl_internal_set__midColor)) ::UnityEngine::Color  _midColor;

/// @brief Field _renderer, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _rotation, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotation, put=__cordl_internal_set__rotation)) float_t  _rotation;

/// @brief Field _rotationSpeed, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotationSpeed, put=__cordl_internal_set__rotationSpeed)) float_t  _rotationSpeed;

/// @brief Field _topColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__topColor, put=__cordl_internal_set__topColor)) ::UnityEngine::Color  _topColor;

/// @brief Method Awake, addr 0x17c43b8, size 0x98, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VRVisuals::SetSoundReactiveColors* New_ctor() ;

/// @brief Method SetColors, addr 0x17c4454, size 0x164, virtual false, abstract: false, final false
inline void SetColors() ;

/// @brief Method Start, addr 0x17c4450, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__baseColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__baseColor() ;

constexpr float_t const& __cordl_internal_get__bobbing() const;

constexpr float_t& __cordl_internal_get__bobbing() ;

constexpr float_t const& __cordl_internal_get__bobbingSpeed() const;

constexpr float_t& __cordl_internal_get__bobbingSpeed() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get__jumpOnSound() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get__jumpOnSound() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__materialBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__materialBlock() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__midColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__midColor() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr float_t const& __cordl_internal_get__rotation() const;

constexpr float_t& __cordl_internal_get__rotation() ;

constexpr float_t const& __cordl_internal_get__rotationSpeed() const;

constexpr float_t& __cordl_internal_get__rotationSpeed() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__topColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__topColor() ;

constexpr void __cordl_internal_set__baseColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__bobbing(float_t  value) ;

constexpr void __cordl_internal_set__bobbingSpeed(float_t  value) ;

constexpr void __cordl_internal_set__jumpOnSound(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set__materialBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__midColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__rotation(float_t  value) ;

constexpr void __cordl_internal_set__rotationSpeed(float_t  value) ;

constexpr void __cordl_internal_set__topColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x17c45b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetSoundReactiveColors() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetSoundReactiveColors", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetSoundReactiveColors(SetSoundReactiveColors && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetSoundReactiveColors", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetSoundReactiveColors(SetSoundReactiveColors const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{271};

/// @brief Field _baseColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ____baseColor;

/// @brief Field _midColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____midColor;

/// @brief Field _topColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____topColor;

/// @brief Field _rotation, offset: 0x50, size: 0x4, def value: None
 float_t  ____rotation;

/// @brief Field _rotationSpeed, offset: 0x54, size: 0x4, def value: None
 float_t  ____rotationSpeed;

/// @brief Field _bobbing, offset: 0x58, size: 0x4, def value: None
 float_t  ____bobbing;

/// @brief Field _bobbingSpeed, offset: 0x5c, size: 0x4, def value: None
 float_t  ____bobbingSpeed;

/// @brief Field _jumpOnSound, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Vector4  ____jumpOnSound;

/// @brief Field _renderer, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// @brief Field _materialBlock, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____materialBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VRVisuals::SetSoundReactiveColors, ____baseColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VRVisuals::SetSoundReactiveColors, ____midColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VRVisuals::SetSoundReactiveColors, ____topColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VRVisuals::SetSoundReactiveColors, ____rotation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VRVisuals::SetSoundReactiveColors, ____rotationSpeed) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VRVisuals::SetSoundReactiveColors, ____bobbing) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VRVisuals::SetSoundReactiveColors, ____bobbingSpeed) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VRVisuals::SetSoundReactiveColors, ____jumpOnSound) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VRVisuals::SetSoundReactiveColors, ____renderer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VRVisuals::SetSoundReactiveColors, ____materialBlock) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VRVisuals::SetSoundReactiveColors, 0x80>, "Size mismatch!");

} // namespace end def VRVisuals
NEED_NO_BOX(::VRVisuals::SetSoundReactiveColors);
DEFINE_IL2CPP_ARG_TYPE(::VRVisuals::SetSoundReactiveColors*, "VRVisuals", "SetSoundReactiveColors");
