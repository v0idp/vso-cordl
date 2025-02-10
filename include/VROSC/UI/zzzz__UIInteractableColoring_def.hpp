#pragma once
// IWYU pragma private; include "VROSC/UI/UIInteractableColoring.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(UIInteractableColoring)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC::UI {
class UIColorGetter;
}
namespace VROSC {
class Interactable;
}
// Forward declare root types
namespace VROSC::UI {
class UIInteractableColoring;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::UIInteractableColoring);
// Dependencies System.Nullable`1<T>, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.UIInteractableColoring
class CORDL_TYPE UIInteractableColoring : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ColorGetter)) ::UnityW<::VROSC::UI::UIColorGetter>  ColorGetter;

 __declspec(property(get=get_CurrentColor, put=set_CurrentColor)) ::UnityEngine::Color  CurrentColor;

/// @brief Field <CurrentColor>k__BackingField, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__CurrentColor_k__BackingField, put=__cordl_internal_set__CurrentColor_k__BackingField)) ::UnityEngine::Color  _CurrentColor_k__BackingField;

/// @brief Field _colorGetter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorGetter, put=__cordl_internal_set__colorGetter)) ::UnityW<::VROSC::UI::UIColorGetter>  _colorGetter;

/// @brief Field _interactable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactable, put=__cordl_internal_set__interactable)) ::UnityW<::VROSC::Interactable>  _interactable;

/// @brief Field _overrideDisabled, offset 0x4a, size 0x2 
 __declspec(property(get=__cordl_internal_get__overrideDisabled, put=__cordl_internal_set__overrideDisabled)) ::System::Nullable_1<bool>  _overrideDisabled;

/// @brief Field _overrideHovering, offset 0x48, size 0x2 
 __declspec(property(get=__cordl_internal_get__overrideHovering, put=__cordl_internal_set__overrideHovering)) ::System::Nullable_1<bool>  _overrideHovering;

/// @brief Field _reactToHovering, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__reactToHovering, put=__cordl_internal_set__reactToHovering)) bool  _reactToHovering;

/// @brief Method ApplyColor, addr 0x17e5008, size 0xc, virtual true, abstract: false, final false
inline void ApplyColor(::UnityEngine::Color  color) ;

/// @brief Method GetColor, addr 0x17e4b60, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor() ;

static inline ::VROSC::UI::UIInteractableColoring* New_ctor() ;

/// @brief Method OnColorSchemeChanged, addr 0x17e5a90, size 0xc, virtual false, abstract: false, final false
inline void OnColorSchemeChanged() ;

/// @brief Method OnDestroy, addr 0x17e4948, size 0x108, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x17e56b8, size 0xec, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x17e55bc, size 0xfc, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetColorGetter, addr 0x17e5ab0, size 0x1dc, virtual false, abstract: false, final false
inline void SetColorGetter(::VROSC::UI::UIColorGetter*  colorGetter) ;

/// @brief Method SetOvrerride, addr 0x17e5a9c, size 0x14, virtual false, abstract: false, final false
inline void SetOvrerride(::System::Nullable_1<bool>  overrideHovering, ::System::Nullable_1<bool>  overrideDisabled) ;

/// @brief Method Start, addr 0x17e57a4, size 0x2ec, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateColor, addr 0x17e4b5c, size 0x4, virtual true, abstract: false, final false
inline void UpdateColor() ;

/// @brief Method <Start>b__13_0, addr 0x17e5c8c, size 0xc, virtual false, abstract: false, final false
inline void _Start_b__13_0(bool  disabled) ;

/// @brief Method <Start>b__13_1, addr 0x17e5c98, size 0xc, virtual false, abstract: false, final false
inline void _Start_b__13_1(bool  hovering) ;

/// @brief Method <Start>b__13_2, addr 0x17e5ca4, size 0xc, virtual false, abstract: false, final false
inline void _Start_b__13_2(bool  interacting) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__CurrentColor_k__BackingField() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__CurrentColor_k__BackingField() ;

constexpr ::UnityW<::VROSC::UI::UIColorGetter> const& __cordl_internal_get__colorGetter() const;

constexpr ::UnityW<::VROSC::UI::UIColorGetter>& __cordl_internal_get__colorGetter() ;

constexpr ::UnityW<::VROSC::Interactable> const& __cordl_internal_get__interactable() const;

constexpr ::UnityW<::VROSC::Interactable>& __cordl_internal_get__interactable() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__overrideDisabled() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__overrideDisabled() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__overrideHovering() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__overrideHovering() ;

constexpr bool const& __cordl_internal_get__reactToHovering() const;

constexpr bool& __cordl_internal_get__reactToHovering() ;

constexpr void __cordl_internal_set__CurrentColor_k__BackingField(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__colorGetter(::UnityW<::VROSC::UI::UIColorGetter>  value) ;

constexpr void __cordl_internal_set__interactable(::UnityW<::VROSC::Interactable>  value) ;

constexpr void __cordl_internal_set__overrideDisabled(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set__overrideHovering(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set__reactToHovering(bool  value) ;

/// @brief Method .ctor, addr 0x17e51d0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ColorGetter, addr 0x17e55b4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UI::UIColorGetter> get_ColorGetter() ;

/// @brief Method get_CurrentColor, addr 0x17e55a8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_CurrentColor() ;

/// @brief Method set_CurrentColor, addr 0x17e559c, size 0xc, virtual false, abstract: false, final false
inline void set_CurrentColor(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIInteractableColoring() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIInteractableColoring", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIInteractableColoring(UIInteractableColoring && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIInteractableColoring", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIInteractableColoring(UIInteractableColoring const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1605};

/// @brief Field _interactable, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::Interactable>  ____interactable;

/// @brief Field _reactToHovering, offset: 0x28, size: 0x1, def value: None
 bool  ____reactToHovering;

/// @brief Field _colorGetter, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIColorGetter>  ____colorGetter;

/// @brief Field <CurrentColor>k__BackingField, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ____CurrentColor_k__BackingField;

/// @brief Field _overrideHovering, offset: 0x48, size: 0x2, def value: None
 ::System::Nullable_1<bool>  ____overrideHovering;

/// @brief Field _overrideDisabled, offset: 0x4a, size: 0x2, def value: None
 ::System::Nullable_1<bool>  ____overrideDisabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::UIInteractableColoring, ____interactable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInteractableColoring, ____reactToHovering) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInteractableColoring, ____colorGetter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInteractableColoring, ____CurrentColor_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInteractableColoring, ____overrideHovering) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInteractableColoring, ____overrideDisabled) == 0x4a, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::UIInteractableColoring, 0x50>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::UIInteractableColoring);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UIInteractableColoring*, "VROSC.UI", "UIInteractableColoring");
