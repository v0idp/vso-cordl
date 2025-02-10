#pragma once
// IWYU pragma private; include "VROSC/UI/UIColorSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UIColorSettings)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC::UI {
class IMappedColor;
}
namespace VROSC::UI {
class SkinnableColorsMasterData;
}
namespace VROSC::UI {
class UIColorGetter;
}
namespace VROSC::UI {
class UIColorSettings_DynamicColorMapping;
}
namespace VROSC::UI {
class UIExplicitColor;
}
// Forward declare root types
namespace VROSC::UI {
class UIColorSettings;
}
namespace VROSC::UI {
class UIColorSettings_DynamicColorMapping;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::UIColorSettings);
MARK_REF_PTR_T(::VROSC::UI::UIColorSettings_DynamicColorMapping);
// Dependencies System.Object
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.UIColorSettings/DynamicColorMapping
class CORDL_TYPE UIColorSettings_DynamicColorMapping : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Color)) ::VROSC::UI::UIExplicitColor*  Color;

 __declspec(property(get=get_ColorGetter)) ::UnityW<::VROSC::UI::UIColorGetter>  ColorGetter;

/// @brief Field _color, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__color, put=__cordl_internal_set__color)) ::VROSC::UI::UIExplicitColor*  _color;

/// @brief Field _colorGetter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorGetter, put=__cordl_internal_set__colorGetter)) ::UnityW<::VROSC::UI::UIColorGetter>  _colorGetter;

static inline ::VROSC::UI::UIColorSettings_DynamicColorMapping* New_ctor(::VROSC::UI::UIColorSettings_DynamicColorMapping*  other) ;

/// @brief Method UpdateColor, addr 0x17e7e9c, size 0x84, virtual false, abstract: false, final false
inline void UpdateColor() ;

constexpr ::VROSC::UI::UIExplicitColor* const& __cordl_internal_get__color() const;

constexpr ::VROSC::UI::UIExplicitColor*& __cordl_internal_get__color() ;

constexpr ::UnityW<::VROSC::UI::UIColorGetter> const& __cordl_internal_get__colorGetter() const;

constexpr ::UnityW<::VROSC::UI::UIColorGetter>& __cordl_internal_get__colorGetter() ;

constexpr void __cordl_internal_set__color(::VROSC::UI::UIExplicitColor*  value) ;

constexpr void __cordl_internal_set__colorGetter(::UnityW<::VROSC::UI::UIColorGetter>  value) ;

/// @brief Method .ctor, addr 0x17e7ac0, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::VROSC::UI::UIColorSettings_DynamicColorMapping*  other) ;

/// @brief Method get_Color, addr 0x17e8130, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::UI::UIExplicitColor* get_Color() ;

/// @brief Method get_ColorGetter, addr 0x17e8138, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UI::UIColorGetter> get_ColorGetter() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIColorSettings_DynamicColorMapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIColorSettings_DynamicColorMapping", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIColorSettings_DynamicColorMapping(UIColorSettings_DynamicColorMapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIColorSettings_DynamicColorMapping", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIColorSettings_DynamicColorMapping(UIColorSettings_DynamicColorMapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1619};

/// @brief Field _colorGetter, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIColorGetter>  ____colorGetter;

/// @brief Field _color, offset: 0x18, size: 0x8, def value: None
 ::VROSC::UI::UIExplicitColor*  ____color;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::UIColorSettings_DynamicColorMapping, ____colorGetter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIColorSettings_DynamicColorMapping, ____color) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::UIColorSettings_DynamicColorMapping, 0x20>, "Size mismatch!");

} // namespace end def VROSC::UI
// Dependencies System.Object
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.UIColorSettings
class CORDL_TYPE UIColorSettings : public ::System::Object {
public:
// Declarations
using DynamicColorMapping = ::VROSC::UI::UIColorSettings_DynamicColorMapping;

/// @brief Field _mappedColors, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__mappedColors, put=__cordl_internal_set__mappedColors)) ::System::Collections::Generic::List_1<::VROSC::UI::UIColorSettings_DynamicColorMapping*>*  _mappedColors;

/// @brief Field _master, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__master, put=__cordl_internal_set__master)) ::UnityW<::VROSC::UI::SkinnableColorsMasterData>  _master;

/// @brief Method GetMappedColors, addr 0x17e7b44, size 0x210, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::VROSC::UI::IMappedColor*>* GetMappedColors() ;

static inline ::VROSC::UI::UIColorSettings* New_ctor(::VROSC::UI::UIColorSettings*  other) ;

/// @brief Method Set, addr 0x17e7f20, size 0x210, virtual false, abstract: false, final false
inline void Set(::VROSC::UI::UIColorGetter*  colorGetter, ::UnityEngine::Color  normal, ::UnityEngine::Color  hover, ::UnityEngine::Color  disabled) ;

/// @brief Method UpdateColors, addr 0x17e7d54, size 0x148, virtual false, abstract: false, final false
inline void UpdateColors() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::UI::UIColorSettings_DynamicColorMapping*>* const& __cordl_internal_get__mappedColors() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::UI::UIColorSettings_DynamicColorMapping*>*& __cordl_internal_get__mappedColors() ;

constexpr ::UnityW<::VROSC::UI::SkinnableColorsMasterData> const& __cordl_internal_get__master() const;

constexpr ::UnityW<::VROSC::UI::SkinnableColorsMasterData>& __cordl_internal_get__master() ;

constexpr void __cordl_internal_set__mappedColors(::System::Collections::Generic::List_1<::VROSC::UI::UIColorSettings_DynamicColorMapping*>*  value) ;

constexpr void __cordl_internal_set__master(::UnityW<::VROSC::UI::SkinnableColorsMasterData>  value) ;

/// @brief Method .ctor, addr 0x17e7868, size 0x258, virtual false, abstract: false, final false
inline void _ctor(::VROSC::UI::UIColorSettings*  other) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIColorSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIColorSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIColorSettings(UIColorSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIColorSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIColorSettings(UIColorSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1620};

/// @brief Field _master, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::SkinnableColorsMasterData>  ____master;

/// @brief Field _mappedColors, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::UI::UIColorSettings_DynamicColorMapping*>*  ____mappedColors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::UIColorSettings, ____master) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIColorSettings, ____mappedColors) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::UIColorSettings, 0x20>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::UIColorSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UIColorSettings*, "VROSC.UI", "UIColorSettings");
NEED_NO_BOX(::VROSC::UI::UIColorSettings_DynamicColorMapping);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UIColorSettings_DynamicColorMapping*, "VROSC.UI", "UIColorSettings/DynamicColorMapping");
