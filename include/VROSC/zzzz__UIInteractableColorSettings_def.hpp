#pragma once
// IWYU pragma private; include "VROSC/UIInteractableColorSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(UIInteractableColorSettings)
namespace UnityEngine {
struct Color;
}
namespace VROSC {
class UIScrollableItem;
}
// Forward declare root types
namespace VROSC {
class UIInteractableColorSettings;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UIInteractableColorSettings);
// Dependencies System.Object, UnityEngine.Color
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIInteractableColorSettings
class CORDL_TYPE UIInteractableColorSettings : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ActiveColor)) ::UnityEngine::Color  ActiveColor;

 __declspec(property(get=get_DisabledColor)) ::UnityEngine::Color  DisabledColor;

 __declspec(property(get=get_HoverColor)) ::UnityEngine::Color  HoverColor;

 __declspec(property(get=get_InactiveColor)) ::UnityEngine::Color  InactiveColor;

/// @brief Field _activeColor, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__activeColor, put=__cordl_internal_set__activeColor)) ::UnityEngine::Color  _activeColor;

/// @brief Field _disabledColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__disabledColor, put=__cordl_internal_set__disabledColor)) ::UnityEngine::Color  _disabledColor;

/// @brief Field _hoverColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__hoverColor, put=__cordl_internal_set__hoverColor)) ::UnityEngine::Color  _hoverColor;

/// @brief Field _inactiveColor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__inactiveColor, put=__cordl_internal_set__inactiveColor)) ::UnityEngine::Color  _inactiveColor;

/// @brief Method GetColor, addr 0x1776fe4, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor(bool  isHovering, bool  isActive, bool  isDisabled) ;

/// @brief Method GetColor, addr 0x1777050, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor(::VROSC::UIScrollableItem*  selectionBarButton) ;

static inline ::VROSC::UIInteractableColorSettings* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__activeColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__activeColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__disabledColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__disabledColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__hoverColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__hoverColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__inactiveColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__inactiveColor() ;

constexpr void __cordl_internal_set__activeColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__disabledColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__hoverColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__inactiveColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x17770d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActiveColor, addr 0x1776fb4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_ActiveColor() ;

/// @brief Method get_DisabledColor, addr 0x1776fd8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_DisabledColor() ;

/// @brief Method get_HoverColor, addr 0x1776fcc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_HoverColor() ;

/// @brief Method get_InactiveColor, addr 0x1776fc0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_InactiveColor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIInteractableColorSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIInteractableColorSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIInteractableColorSettings(UIInteractableColorSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIInteractableColorSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIInteractableColorSettings(UIInteractableColorSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1271};

/// @brief Field _activeColor, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  ____activeColor;

/// @brief Field _inactiveColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ____inactiveColor;

/// @brief Field _hoverColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____hoverColor;

/// @brief Field _disabledColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____disabledColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIInteractableColorSettings, ____activeColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInteractableColorSettings, ____inactiveColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInteractableColorSettings, ____hoverColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInteractableColorSettings, ____disabledColor) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIInteractableColorSettings, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UIInteractableColorSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIInteractableColorSettings*, "VROSC", "UIInteractableColorSettings");
