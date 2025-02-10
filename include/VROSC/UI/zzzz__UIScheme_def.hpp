#pragma once
// IWYU pragma private; include "VROSC/UI/UIScheme.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "VROSC/UI/zzzz__UISchemeColors_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIScheme)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC::UI {
class ControllerColorScheme;
}
namespace VROSC::UI {
class IMappedColor;
}
namespace VROSC::UI {
class NotefieldColorScheme;
}
namespace VROSC::UI {
class ScalePanelColors;
}
namespace VROSC::UI {
class UIColorSettings;
}
namespace VROSC::UI {
struct UISchemeColors;
}
namespace VROSC::UI {
class UISchemeGenerator;
}
namespace VROSC {
class Interactable;
}
// Forward declare root types
namespace VROSC::UI {
class UIScheme;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::UIScheme);
// Dependencies UnityEngine.Color, UnityEngine.ScriptableObject, VROSC.UI.UISchemeColors
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.UIScheme
class CORDL_TYPE UIScheme : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_AppearAnimationColor)) ::UnityEngine::Color  AppearAnimationColor;

 __declspec(property(get=get_ColorSettings)) ::VROSC::UI::UIColorSettings*  ColorSettings;

 __declspec(property(get=get_ControllerColoring)) ::VROSC::UI::ControllerColorScheme*  ControllerColoring;

 __declspec(property(get=get_NotefieldColorScheme)) ::VROSC::UI::NotefieldColorScheme*  NotefieldColorScheme;

 __declspec(property(get=get_SchemeColors)) ::VROSC::UI::UISchemeColors  SchemeColors;

/// @brief Field <Current>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Current_k__BackingField, put=setStaticF__Current_k__BackingField)) ::UnityW<::VROSC::UI::UIScheme>  _Current_k__BackingField;

/// @brief Field <OnColorSchemeChanged>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__OnColorSchemeChanged_k__BackingField, put=setStaticF__OnColorSchemeChanged_k__BackingField)) ::System::Action*  _OnColorSchemeChanged_k__BackingField;

/// @brief Field _appearAnimationColor, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__appearAnimationColor, put=__cordl_internal_set__appearAnimationColor)) ::UnityEngine::Color  _appearAnimationColor;

/// @brief Field _colorSettings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorSettings, put=__cordl_internal_set__colorSettings)) ::VROSC::UI::UIColorSettings*  _colorSettings;

/// @brief Field _controllerColoring, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__controllerColoring, put=__cordl_internal_set__controllerColoring)) ::VROSC::UI::ControllerColorScheme*  _controllerColoring;

/// @brief Field _generator, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__generator, put=__cordl_internal_set__generator)) ::UnityW<::VROSC::UI::UISchemeGenerator>  _generator;

/// @brief Field _notefieldColorScheme, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__notefieldColorScheme, put=__cordl_internal_set__notefieldColorScheme)) ::VROSC::UI::NotefieldColorScheme*  _notefieldColorScheme;

/// @brief Field _scalePanelColorScheme, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__scalePanelColorScheme, put=__cordl_internal_set__scalePanelColorScheme)) ::UnityW<::VROSC::UI::ScalePanelColors>  _scalePanelColorScheme;

/// @brief Field _schemeColors, offset 0x50, size 0x40 
 __declspec(property(get=__cordl_internal_get__schemeColors, put=__cordl_internal_set__schemeColors)) ::VROSC::UI::UISchemeColors  _schemeColors;

/// @brief Method CopyFrom, addr 0x17e8924, size 0x178, virtual false, abstract: false, final false
static inline ::UnityW<::VROSC::UI::UIScheme> CopyFrom(::VROSC::UI::UIScheme*  other) ;

/// @brief Method EnableScheme, addr 0x17e8c84, size 0xa4, virtual false, abstract: false, final false
inline void EnableScheme() ;

/// @brief Method Generate, addr 0x17e8d84, size 0x64, virtual false, abstract: false, final false
inline void Generate(::VROSC::UI::UISchemeColors  schemeColors) ;

/// @brief Method GetControllerButtonColor, addr 0x17e8c1c, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetControllerButtonColor(bool  highlight, bool  pressed) ;

/// @brief Method GetMappedColors, addr 0x17e8a9c, size 0x180, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::VROSC::UI::IMappedColor*>* GetMappedColors() ;

/// @brief Method GetScalePanelColor, addr 0x17e61e8, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetScalePanelColor(int32_t  axis, bool  active, ::VROSC::Interactable*  interactable) ;

static inline ::VROSC::UI::UIScheme* New_ctor() ;

/// @brief Method SetAppearColor, addr 0x17e8d78, size 0xc, virtual false, abstract: false, final false
inline void SetAppearColor(::UnityEngine::Color  color) ;

/// @brief Method UpdateCurrentForEditor, addr 0x17e8d28, size 0x50, virtual false, abstract: false, final false
static inline void UpdateCurrentForEditor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__appearAnimationColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__appearAnimationColor() ;

constexpr ::VROSC::UI::UIColorSettings* const& __cordl_internal_get__colorSettings() const;

constexpr ::VROSC::UI::UIColorSettings*& __cordl_internal_get__colorSettings() ;

constexpr ::VROSC::UI::ControllerColorScheme* const& __cordl_internal_get__controllerColoring() const;

constexpr ::VROSC::UI::ControllerColorScheme*& __cordl_internal_get__controllerColoring() ;

constexpr ::UnityW<::VROSC::UI::UISchemeGenerator> const& __cordl_internal_get__generator() const;

constexpr ::UnityW<::VROSC::UI::UISchemeGenerator>& __cordl_internal_get__generator() ;

constexpr ::VROSC::UI::NotefieldColorScheme* const& __cordl_internal_get__notefieldColorScheme() const;

constexpr ::VROSC::UI::NotefieldColorScheme*& __cordl_internal_get__notefieldColorScheme() ;

constexpr ::UnityW<::VROSC::UI::ScalePanelColors> const& __cordl_internal_get__scalePanelColorScheme() const;

constexpr ::UnityW<::VROSC::UI::ScalePanelColors>& __cordl_internal_get__scalePanelColorScheme() ;

constexpr ::VROSC::UI::UISchemeColors const& __cordl_internal_get__schemeColors() const;

constexpr ::VROSC::UI::UISchemeColors& __cordl_internal_get__schemeColors() ;

constexpr void __cordl_internal_set__appearAnimationColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__colorSettings(::VROSC::UI::UIColorSettings*  value) ;

constexpr void __cordl_internal_set__controllerColoring(::VROSC::UI::ControllerColorScheme*  value) ;

constexpr void __cordl_internal_set__generator(::UnityW<::VROSC::UI::UISchemeGenerator>  value) ;

constexpr void __cordl_internal_set__notefieldColorScheme(::VROSC::UI::NotefieldColorScheme*  value) ;

constexpr void __cordl_internal_set__scalePanelColorScheme(::UnityW<::VROSC::UI::ScalePanelColors>  value) ;

constexpr void __cordl_internal_set__schemeColors(::VROSC::UI::UISchemeColors  value) ;

/// @brief Method .ctor, addr 0x17e8de8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::VROSC::UI::UIScheme> getStaticF__Current_k__BackingField() ;

static inline ::System::Action* getStaticF__OnColorSchemeChanged_k__BackingField() ;

/// @brief Method get_AppearAnimationColor, addr 0x17e87cc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_AppearAnimationColor() ;

/// @brief Method get_ColorSettings, addr 0x17e87c4, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::UI::UIColorSettings* get_ColorSettings() ;

/// @brief Method get_ControllerColoring, addr 0x17e87e0, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::UI::ControllerColorScheme* get_ControllerColoring() ;

/// @brief Method get_Current, addr 0x17e87fc, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::VROSC::UI::UIScheme> get_Current() ;

/// @brief Method get_NotefieldColorScheme, addr 0x17e87d8, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::UI::NotefieldColorScheme* get_NotefieldColorScheme() ;

/// @brief Method get_OnColorSchemeChanged, addr 0x17e8890, size 0x48, virtual false, abstract: false, final false
static inline ::System::Action* get_OnColorSchemeChanged() ;

/// @brief Method get_SchemeColors, addr 0x17e87e8, size 0x14, virtual false, abstract: false, final false
inline ::VROSC::UI::UISchemeColors get_SchemeColors() ;

static inline void setStaticF__Current_k__BackingField(::UnityW<::VROSC::UI::UIScheme>  value) ;

static inline void setStaticF__OnColorSchemeChanged_k__BackingField(::System::Action*  value) ;

/// @brief Method set_Current, addr 0x17e8844, size 0x4c, virtual false, abstract: false, final false
static inline void set_Current(::VROSC::UI::UIScheme*  value) ;

/// @brief Method set_OnColorSchemeChanged, addr 0x17e88d8, size 0x4c, virtual false, abstract: false, final false
static inline void set_OnColorSchemeChanged(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIScheme() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIScheme", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIScheme(UIScheme && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIScheme", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIScheme(UIScheme const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1627};

/// @brief Field _generator, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UISchemeGenerator>  ____generator;

/// @brief Field _colorSettings, offset: 0x20, size: 0x8, def value: None
 ::VROSC::UI::UIColorSettings*  ____colorSettings;

/// @brief Field _controllerColoring, offset: 0x28, size: 0x8, def value: None
 ::VROSC::UI::ControllerColorScheme*  ____controllerColoring;

/// @brief Field _scalePanelColorScheme, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::ScalePanelColors>  ____scalePanelColorScheme;

/// @brief Field _appearAnimationColor, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ____appearAnimationColor;

/// @brief Field _notefieldColorScheme, offset: 0x48, size: 0x8, def value: None
 ::VROSC::UI::NotefieldColorScheme*  ____notefieldColorScheme;

/// @brief Field _schemeColors, offset: 0x50, size: 0x40, def value: None
 ::VROSC::UI::UISchemeColors  ____schemeColors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::UIScheme, ____generator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIScheme, ____colorSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIScheme, ____controllerColoring) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIScheme, ____scalePanelColorScheme) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIScheme, ____appearAnimationColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIScheme, ____notefieldColorScheme) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIScheme, ____schemeColors) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::UIScheme, 0x90>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::UIScheme);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UIScheme*, "VROSC.UI", "UIScheme");
