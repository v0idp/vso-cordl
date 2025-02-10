#pragma once
// IWYU pragma private; include "VROSC/TutorialInputDevice.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TutorialInputDevice)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC {
class ControllerComponent;
}
namespace VROSC {
class HighlightControllerComponents;
}
namespace VROSC {
struct TriggerButton;
}
namespace VROSC {
class TutorialInputDevice_BlinkingButton;
}
namespace VROSC {
class TutorialVisualBlinking;
}
// Forward declare root types
namespace VROSC {
class TutorialInputDevice;
}
namespace VROSC {
class TutorialInputDevice_BlinkingButton;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TutorialInputDevice);
MARK_REF_PTR_T(::VROSC::TutorialInputDevice_BlinkingButton);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TutorialInputDevice/BlinkingButton
class CORDL_TYPE TutorialInputDevice_BlinkingButton : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Blinking, put=set_Blinking)) ::VROSC::TutorialVisualBlinking*  Blinking;

 __declspec(property(get=get_Component, put=set_Component)) ::UnityW<::VROSC::ControllerComponent>  Component;

/// @brief Field <Blinking>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Blinking_k__BackingField, put=__cordl_internal_set__Blinking_k__BackingField)) ::VROSC::TutorialVisualBlinking*  _Blinking_k__BackingField;

/// @brief Field <Component>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Component_k__BackingField, put=__cordl_internal_set__Component_k__BackingField)) ::UnityW<::VROSC::ControllerComponent>  _Component_k__BackingField;

/// @brief Method GetCurrentColor, addr 0x1704ec0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetCurrentColor() ;

/// @brief Method GetNormalColor, addr 0x1704ee0, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetNormalColor() ;

static inline ::VROSC::TutorialInputDevice_BlinkingButton* New_ctor(::VROSC::ControllerComponent*  component) ;

/// @brief Method Update, addr 0x1704a5c, size 0x54, virtual false, abstract: false, final false
inline bool Update() ;

constexpr ::VROSC::TutorialVisualBlinking* const& __cordl_internal_get__Blinking_k__BackingField() const;

constexpr ::VROSC::TutorialVisualBlinking*& __cordl_internal_get__Blinking_k__BackingField() ;

constexpr ::UnityW<::VROSC::ControllerComponent> const& __cordl_internal_get__Component_k__BackingField() const;

constexpr ::UnityW<::VROSC::ControllerComponent>& __cordl_internal_get__Component_k__BackingField() ;

constexpr void __cordl_internal_set__Blinking_k__BackingField(::VROSC::TutorialVisualBlinking*  value) ;

constexpr void __cordl_internal_set__Component_k__BackingField(::UnityW<::VROSC::ControllerComponent>  value) ;

/// @brief Method .ctor, addr 0x170468c, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::VROSC::ControllerComponent*  component) ;

/// @brief Method get_Blinking, addr 0x1704eb8, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::TutorialVisualBlinking* get_Blinking() ;

/// @brief Method get_Component, addr 0x1704ea8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::ControllerComponent> get_Component() ;

/// @brief Method set_Blinking, addr 0x1704eb0, size 0x8, virtual false, abstract: false, final false
inline void set_Blinking(::VROSC::TutorialVisualBlinking*  value) ;

/// @brief Method set_Component, addr 0x1704ea0, size 0x8, virtual false, abstract: false, final false
inline void set_Component(::VROSC::ControllerComponent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TutorialInputDevice_BlinkingButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TutorialInputDevice_BlinkingButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TutorialInputDevice_BlinkingButton(TutorialInputDevice_BlinkingButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TutorialInputDevice_BlinkingButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TutorialInputDevice_BlinkingButton(TutorialInputDevice_BlinkingButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{851};

/// @brief Field <Component>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::ControllerComponent>  ____Component_k__BackingField;

/// @brief Field <Blinking>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::VROSC::TutorialVisualBlinking*  ____Blinking_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TutorialInputDevice_BlinkingButton, ____Component_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialInputDevice_BlinkingButton, ____Blinking_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TutorialInputDevice_BlinkingButton, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TutorialInputDevice
class CORDL_TYPE TutorialInputDevice : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BlinkingButton = ::VROSC::TutorialInputDevice_BlinkingButton;

/// @brief Field _blinkingButtons, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__blinkingButtons, put=__cordl_internal_set__blinkingButtons)) ::System::Collections::Generic::List_1<::VROSC::TutorialInputDevice_BlinkingButton*>*  _blinkingButtons;

/// @brief Field _controllerComponents, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__controllerComponents, put=__cordl_internal_set__controllerComponents)) ::UnityW<::VROSC::HighlightControllerComponents>  _controllerComponents;

/// @brief Method GetBlinkingButtonByTrigger, addr 0x1704c84, size 0x160, virtual false, abstract: false, final false
inline ::VROSC::TutorialInputDevice_BlinkingButton* GetBlinkingButtonByTrigger(::VROSC::TriggerButton  trigger) ;

/// @brief Method LateUpdate, addr 0x17048f0, size 0x16c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::VROSC::TutorialInputDevice* New_ctor() ;

/// @brief Method OnEnable, addr 0x1704794, size 0x15c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x1704564, size 0x128, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartButtonBlinking, addr 0x1704c1c, size 0x68, virtual false, abstract: false, final false
inline void StartButtonBlinking(::VROSC::TriggerButton  trigger, ::UnityEngine::Color  color) ;

/// @brief Method StopAllBlinking, addr 0x1704ab0, size 0x16c, virtual false, abstract: false, final false
inline void StopAllBlinking(float_t  fadeTime) ;

/// @brief Method StopButtonBlinking, addr 0x1704de4, size 0x40, virtual false, abstract: false, final false
inline void StopButtonBlinking(::VROSC::TriggerButton  trigger, float_t  fadeTime) ;

constexpr ::System::Collections::Generic::List_1<::VROSC::TutorialInputDevice_BlinkingButton*>* const& __cordl_internal_get__blinkingButtons() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::TutorialInputDevice_BlinkingButton*>*& __cordl_internal_get__blinkingButtons() ;

constexpr ::UnityW<::VROSC::HighlightControllerComponents> const& __cordl_internal_get__controllerComponents() const;

constexpr ::UnityW<::VROSC::HighlightControllerComponents>& __cordl_internal_get__controllerComponents() ;

constexpr void __cordl_internal_set__blinkingButtons(::System::Collections::Generic::List_1<::VROSC::TutorialInputDevice_BlinkingButton*>*  value) ;

constexpr void __cordl_internal_set__controllerComponents(::UnityW<::VROSC::HighlightControllerComponents>  value) ;

/// @brief Method .ctor, addr 0x1704e24, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TutorialInputDevice() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TutorialInputDevice", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TutorialInputDevice(TutorialInputDevice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TutorialInputDevice", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TutorialInputDevice(TutorialInputDevice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{852};

/// @brief Field _controllerComponents, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::HighlightControllerComponents>  ____controllerComponents;

/// @brief Field _blinkingButtons, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::TutorialInputDevice_BlinkingButton*>*  ____blinkingButtons;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TutorialInputDevice, ____controllerComponents) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialInputDevice, ____blinkingButtons) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TutorialInputDevice, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TutorialInputDevice);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialInputDevice*, "VROSC", "TutorialInputDevice");
NEED_NO_BOX(::VROSC::TutorialInputDevice_BlinkingButton);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialInputDevice_BlinkingButton*, "VROSC", "TutorialInputDevice/BlinkingButton");
