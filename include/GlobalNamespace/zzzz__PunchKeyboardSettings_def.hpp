#pragma once
// IWYU pragma private; include "GlobalNamespace/PunchKeyboardSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PunchKeyboardSettings)
namespace System {
class Action;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class UISlideToggle;
}
namespace VROSC {
class UIToggle;
}
namespace VROSC {
class UserDataControllers;
}
// Forward declare root types
namespace GlobalNamespace {
class PunchKeyboardSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PunchKeyboardSettings);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PunchKeyboardSettings
class CORDL_TYPE PunchKeyboardSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field AllowExternalKeyboard, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_AllowExternalKeyboard, put=setStaticF_AllowExternalKeyboard)) bool  AllowExternalKeyboard;

/// @brief Field KeyboardPlaysClickSound, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_KeyboardPlaysClickSound, put=setStaticF_KeyboardPlaysClickSound)) bool  KeyboardPlaysClickSound;

/// @brief Field OnSettingsUpdated, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSettingsUpdated, put=setStaticF_OnSettingsUpdated)) ::System::Action*  OnSettingsUpdated;

/// @brief Field UsePointAndClick, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_UsePointAndClick, put=setStaticF_UsePointAndClick)) bool  UsePointAndClick;

/// @brief Field UseTouch, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_UseTouch, put=setStaticF_UseTouch)) bool  UseTouch;

/// @brief Field _allowExternalKeyboard, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__allowExternalKeyboard, put=__cordl_internal_set__allowExternalKeyboard)) ::UnityW<::VROSC::UISlideToggle>  _allowExternalKeyboard;

/// @brief Field _keySounds, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__keySounds, put=__cordl_internal_set__keySounds)) ::UnityW<::VROSC::UISlideToggle>  _keySounds;

/// @brief Field _panelObject, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__panelObject, put=__cordl_internal_set__panelObject)) ::UnityW<::UnityEngine::GameObject>  _panelObject;

/// @brief Field _settingsButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsButton, put=__cordl_internal_set__settingsButton)) ::UnityW<::VROSC::UIToggle>  _settingsButton;

/// @brief Field _usePointAndClick, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__usePointAndClick, put=__cordl_internal_set__usePointAndClick)) ::UnityW<::VROSC::UISlideToggle>  _usePointAndClick;

/// @brief Field _useTouchables, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__useTouchables, put=__cordl_internal_set__useTouchables)) ::UnityW<::VROSC::UISlideToggle>  _useTouchables;

/// @brief Method Awake, addr 0x16b9fa8, size 0x3c8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method KeySoundsToggled, addr 0x16bab44, size 0xac, virtual false, abstract: false, final false
inline void KeySoundsToggled(::VROSC::InputDevice*  arg1, bool  toggled) ;

static inline ::GlobalNamespace::PunchKeyboardSettings* New_ctor() ;

/// @brief Method OnDestroy, addr 0x16ba370, size 0x3ac, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x16ba8d8, size 0x48, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x16ba71c, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method TogglePanel, addr 0x16ba920, size 0x20, virtual false, abstract: false, final false
inline void TogglePanel(::VROSC::InputDevice*  device, bool  toggled) ;

/// @brief Method UseExternalKeyboardToggled, addr 0x16ba940, size 0xac, virtual false, abstract: false, final false
inline void UseExternalKeyboardToggled(::VROSC::InputDevice*  arg1, bool  toggled) ;

/// @brief Method UsePointAndClickToggled, addr 0x16baa98, size 0xac, virtual false, abstract: false, final false
inline void UsePointAndClickToggled(::VROSC::InputDevice*  arg1, bool  toggled) ;

/// @brief Method UseTouchablesToggled, addr 0x16ba9ec, size 0xac, virtual false, abstract: false, final false
inline void UseTouchablesToggled(::VROSC::InputDevice*  arg1, bool  toggled) ;

/// @brief Method UserDataLoaded, addr 0x16ba76c, size 0x16c, virtual false, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  user) ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__allowExternalKeyboard() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__allowExternalKeyboard() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__keySounds() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__keySounds() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__panelObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__panelObject() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__settingsButton() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__settingsButton() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__usePointAndClick() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__usePointAndClick() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__useTouchables() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__useTouchables() ;

constexpr void __cordl_internal_set__allowExternalKeyboard(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__keySounds(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__panelObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__settingsButton(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__usePointAndClick(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__useTouchables(::UnityW<::VROSC::UISlideToggle>  value) ;

/// @brief Method .ctor, addr 0x16babf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_AllowExternalKeyboard() ;

static inline bool getStaticF_KeyboardPlaysClickSound() ;

static inline ::System::Action* getStaticF_OnSettingsUpdated() ;

static inline bool getStaticF_UsePointAndClick() ;

static inline bool getStaticF_UseTouch() ;

static inline void setStaticF_AllowExternalKeyboard(bool  value) ;

static inline void setStaticF_KeyboardPlaysClickSound(bool  value) ;

static inline void setStaticF_OnSettingsUpdated(::System::Action*  value) ;

static inline void setStaticF_UsePointAndClick(bool  value) ;

static inline void setStaticF_UseTouch(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PunchKeyboardSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PunchKeyboardSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PunchKeyboardSettings(PunchKeyboardSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PunchKeyboardSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PunchKeyboardSettings(PunchKeyboardSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13};

/// @brief Field _usePointAndClick, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____usePointAndClick;

/// @brief Field _useTouchables, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____useTouchables;

/// @brief Field _allowExternalKeyboard, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____allowExternalKeyboard;

/// @brief Field _keySounds, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____keySounds;

/// @brief Field _settingsButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____settingsButton;

/// @brief Field _panelObject, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____panelObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PunchKeyboardSettings, ____usePointAndClick) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboardSettings, ____useTouchables) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboardSettings, ____allowExternalKeyboard) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboardSettings, ____keySounds) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboardSettings, ____settingsButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboardSettings, ____panelObject) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PunchKeyboardSettings, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PunchKeyboardSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PunchKeyboardSettings*, "", "PunchKeyboardSettings");
