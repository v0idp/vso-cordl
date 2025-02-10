#pragma once
// IWYU pragma private; include "VROSC/GlobalDrumPadEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GlobalDrumPadEffect)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC {
class AdjustableMesh;
}
// Forward declare root types
namespace VROSC {
class GlobalDrumPadEffect;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::GlobalDrumPadEffect);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.GlobalDrumPadEffect
class CORDL_TYPE GlobalDrumPadEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _color, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__color, put=__cordl_internal_set__color)) ::UnityEngine::Color  _color;

/// @brief Field _meshesVerified, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__meshesVerified, put=__cordl_internal_set__meshesVerified)) bool  _meshesVerified;

/// @brief Field _padRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__padRenderer, put=__cordl_internal_set__padRenderer)) ::UnityW<::VROSC::AdjustableMesh>  _padRenderer;

/// @brief Field _powerCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__powerCurve, put=__cordl_internal_set__powerCurve)) ::UnityEngine::AnimationCurve*  _powerCurve;

/// @brief Field _preview, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__preview, put=__cordl_internal_set__preview)) bool  _preview;

/// @brief Field _previewColor, offset 0x2c, size 0x10 
 __declspec(property(get=__cordl_internal_get__previewColor, put=__cordl_internal_set__previewColor)) ::UnityEngine::Color  _previewColor;

/// @brief Field _previewTiming, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__previewTiming, put=__cordl_internal_set__previewTiming)) float_t  _previewTiming;

static inline ::VROSC::GlobalDrumPadEffect* New_ctor() ;

/// @brief Method SetColor, addr 0x17276e4, size 0x4, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color, bool  affectVisual) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__color() ;

constexpr bool const& __cordl_internal_get__meshesVerified() const;

constexpr bool& __cordl_internal_get__meshesVerified() ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__padRenderer() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__padRenderer() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__powerCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__powerCurve() ;

constexpr bool const& __cordl_internal_get__preview() const;

constexpr bool& __cordl_internal_get__preview() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__previewColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__previewColor() ;

constexpr float_t const& __cordl_internal_get__previewTiming() const;

constexpr float_t& __cordl_internal_get__previewTiming() ;

constexpr void __cordl_internal_set__color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__meshesVerified(bool  value) ;

constexpr void __cordl_internal_set__padRenderer(::UnityW<::VROSC::AdjustableMesh>  value) ;

constexpr void __cordl_internal_set__powerCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__preview(bool  value) ;

constexpr void __cordl_internal_set__previewColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__previewTiming(float_t  value) ;

/// @brief Method .ctor, addr 0x17276e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlobalDrumPadEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalDrumPadEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalDrumPadEffect(GlobalDrumPadEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalDrumPadEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalDrumPadEffect(GlobalDrumPadEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1027};

/// @brief Field _padRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____padRenderer;

/// @brief Field _preview, offset: 0x28, size: 0x1, def value: None
 bool  ____preview;

/// @brief Field _previewColor, offset: 0x2c, size: 0x10, def value: None
 ::UnityEngine::Color  ____previewColor;

/// @brief Field _previewTiming, offset: 0x3c, size: 0x4, def value: None
 float_t  ____previewTiming;

/// @brief Field _powerCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____powerCurve;

/// @brief Field _color, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Color  ____color;

/// @brief Field _meshesVerified, offset: 0x58, size: 0x1, def value: None
 bool  ____meshesVerified;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::GlobalDrumPadEffect, ____padRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::GlobalDrumPadEffect, ____preview) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::GlobalDrumPadEffect, ____previewColor) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::GlobalDrumPadEffect, ____previewTiming) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::GlobalDrumPadEffect, ____powerCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::GlobalDrumPadEffect, ____color) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::GlobalDrumPadEffect, ____meshesVerified) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::GlobalDrumPadEffect, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::GlobalDrumPadEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GlobalDrumPadEffect*, "VROSC", "GlobalDrumPadEffect");
