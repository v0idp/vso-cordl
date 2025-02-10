#pragma once
// IWYU pragma private; include "VROSC/TextSpinnerItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TextSpinnerItem)
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
namespace VROSC {
class AdjustableMesh;
}
// Forward declare root types
namespace VROSC {
class TextSpinnerItem;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TextSpinnerItem);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TextSpinnerItem
class CORDL_TYPE TextSpinnerItem : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _adjustableMeshRenderer, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__adjustableMeshRenderer, put=__cordl_internal_set__adjustableMeshRenderer)) ::UnityW<::UnityEngine::Renderer>  _adjustableMeshRenderer;

/// @brief Field _alphaCurve, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__alphaCurve, put=__cordl_internal_set__alphaCurve)) ::UnityEngine::AnimationCurve*  _alphaCurve;

/// @brief Field _background, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__background, put=__cordl_internal_set__background)) ::UnityW<::VROSC::AdjustableMesh>  _background;

/// @brief Field _backgroundColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__backgroundColor, put=__cordl_internal_set__backgroundColor)) ::UnityEngine::Color  _backgroundColor;

/// @brief Field _currentAlpha, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentAlpha, put=__cordl_internal_set__currentAlpha)) float_t  _currentAlpha;

/// @brief Field _currentBackgroundColor, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get__currentBackgroundColor, put=__cordl_internal_set__currentBackgroundColor)) ::UnityEngine::Color  _currentBackgroundColor;

/// @brief Field _currentTextColor, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get__currentTextColor, put=__cordl_internal_set__currentTextColor)) ::UnityEngine::Color  _currentTextColor;

/// @brief Field _inactiveColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__inactiveColor, put=__cordl_internal_set__inactiveColor)) ::UnityEngine::Color  _inactiveColor;

/// @brief Field _isTransparent, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__isTransparent, put=__cordl_internal_set__isTransparent)) bool  _isTransparent;

/// @brief Field _normalMaterial, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__normalMaterial, put=__cordl_internal_set__normalMaterial)) ::UnityW<::UnityEngine::Material>  _normalMaterial;

/// @brief Field _selectedColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__selectedColor, put=__cordl_internal_set__selectedColor)) ::UnityEngine::Color  _selectedColor;

/// @brief Field _transparentMaterial, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__transparentMaterial, put=__cordl_internal_set__transparentMaterial)) ::UnityW<::UnityEngine::Material>  _transparentMaterial;

/// @brief Field _valueText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__valueText, put=__cordl_internal_set__valueText)) ::UnityW<::TMPro::TextMeshPro>  _valueText;

/// @brief Method AddHook, addr 0x1777da4, size 0xe0, virtual false, abstract: false, final false
inline void AddHook() ;

/// @brief Method Awake, addr 0x1777ce0, size 0xc4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::TextSpinnerItem* New_ctor() ;

/// @brief Method Set, addr 0x17774f8, size 0xd0, virtual false, abstract: false, final false
inline void Set(::StringW  text, bool  selected, float_t  valueOffCenter) ;

/// @brief Method SetMaterial, addr 0x1777e84, size 0x5c, virtual false, abstract: false, final false
inline void SetMaterial(::UnityEngine::Color  color) ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__adjustableMeshRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__adjustableMeshRenderer() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__alphaCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__alphaCurve() ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__background() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__background() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__backgroundColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__backgroundColor() ;

constexpr float_t const& __cordl_internal_get__currentAlpha() const;

constexpr float_t& __cordl_internal_get__currentAlpha() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__currentBackgroundColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__currentBackgroundColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__currentTextColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__currentTextColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__inactiveColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__inactiveColor() ;

constexpr bool const& __cordl_internal_get__isTransparent() const;

constexpr bool& __cordl_internal_get__isTransparent() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__normalMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__normalMaterial() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__selectedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__selectedColor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__transparentMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__transparentMaterial() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__valueText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__valueText() ;

constexpr void __cordl_internal_set__adjustableMeshRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__alphaCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__background(::UnityW<::VROSC::AdjustableMesh>  value) ;

constexpr void __cordl_internal_set__backgroundColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__currentAlpha(float_t  value) ;

constexpr void __cordl_internal_set__currentBackgroundColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__currentTextColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__inactiveColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__isTransparent(bool  value) ;

constexpr void __cordl_internal_set__normalMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__selectedColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__transparentMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__valueText(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x1777ee0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextSpinnerItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextSpinnerItem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextSpinnerItem(TextSpinnerItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextSpinnerItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextSpinnerItem(TextSpinnerItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1274};

/// @brief Field _valueText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____valueText;

/// @brief Field _background, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____background;

/// @brief Field _selectedColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____selectedColor;

/// @brief Field _inactiveColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____inactiveColor;

/// @brief Field _backgroundColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ____backgroundColor;

/// @brief Field _alphaCurve, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____alphaCurve;

/// @brief Field _currentTextColor, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::Color  ____currentTextColor;

/// @brief Field _currentBackgroundColor, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Color  ____currentBackgroundColor;

/// @brief Field _currentAlpha, offset: 0x88, size: 0x4, def value: None
 float_t  ____currentAlpha;

/// @brief Field _adjustableMeshRenderer, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____adjustableMeshRenderer;

/// @brief Field _transparentMaterial, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____transparentMaterial;

/// @brief Field _normalMaterial, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____normalMaterial;

/// @brief Field _isTransparent, offset: 0xa8, size: 0x1, def value: None
 bool  ____isTransparent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TextSpinnerItem, ____valueText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinnerItem, ____background) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinnerItem, ____selectedColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinnerItem, ____inactiveColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinnerItem, ____backgroundColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinnerItem, ____alphaCurve) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinnerItem, ____currentTextColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinnerItem, ____currentBackgroundColor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinnerItem, ____currentAlpha) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinnerItem, ____adjustableMeshRenderer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinnerItem, ____transparentMaterial) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinnerItem, ____normalMaterial) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinnerItem, ____isTransparent) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TextSpinnerItem, 0xb0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TextSpinnerItem);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TextSpinnerItem*, "VROSC", "TextSpinnerItem");
