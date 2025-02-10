#pragma once
// IWYU pragma private; include "VROSC/DashboardWidgetButtonTutorialHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DashboardWidgetButtonTutorialHelper)
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace VROSC {
class Grabable;
}
namespace VROSC {
class Interactable;
}
namespace VROSC {
class TutorialBlinkingUIElement;
}
// Forward declare root types
namespace VROSC {
class DashboardWidgetButtonTutorialHelper;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DashboardWidgetButtonTutorialHelper);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DashboardWidgetButtonTutorialHelper
class CORDL_TYPE DashboardWidgetButtonTutorialHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Button)) ::UnityW<::VROSC::Interactable>  Button;

 __declspec(property(get=get_Grab)) ::UnityW<::VROSC::Grabable>  Grab;

/// @brief Field OnInteraction, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnInteraction, put=__cordl_internal_set_OnInteraction)) ::System::Action*  OnInteraction;

/// @brief Field _button, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__button, put=__cordl_internal_set__button)) ::UnityW<::VROSC::Interactable>  _button;

/// @brief Field _buttonBlink, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__buttonBlink, put=__cordl_internal_set__buttonBlink)) ::UnityW<::VROSC::TutorialBlinkingUIElement>  _buttonBlink;

/// @brief Field _grab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__grab, put=__cordl_internal_set__grab)) ::UnityW<::VROSC::Grabable>  _grab;

/// @brief Method Awake, addr 0x1701174, size 0x158, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Clicked, addr 0x1701424, size 0x20, virtual false, abstract: false, final false
inline void Clicked(bool  interacting) ;

/// @brief Method DisableButton, addr 0x1700c0c, size 0x54, virtual false, abstract: false, final false
inline void DisableButton(::System::Object*  disabler, bool  disable) ;

static inline ::VROSC::DashboardWidgetButtonTutorialHelper* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17012cc, size 0x158, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method StartBlink, addr 0x1700740, size 0x84, virtual false, abstract: false, final false
inline void StartBlink() ;

/// @brief Method StopBlink, addr 0x1700c60, size 0x28, virtual false, abstract: false, final false
inline void StopBlink() ;

constexpr ::System::Action* const& __cordl_internal_get_OnInteraction() const;

constexpr ::System::Action*& __cordl_internal_get_OnInteraction() ;

constexpr ::UnityW<::VROSC::Interactable> const& __cordl_internal_get__button() const;

constexpr ::UnityW<::VROSC::Interactable>& __cordl_internal_get__button() ;

constexpr ::UnityW<::VROSC::TutorialBlinkingUIElement> const& __cordl_internal_get__buttonBlink() const;

constexpr ::UnityW<::VROSC::TutorialBlinkingUIElement>& __cordl_internal_get__buttonBlink() ;

constexpr ::UnityW<::VROSC::Grabable> const& __cordl_internal_get__grab() const;

constexpr ::UnityW<::VROSC::Grabable>& __cordl_internal_get__grab() ;

constexpr void __cordl_internal_set_OnInteraction(::System::Action*  value) ;

constexpr void __cordl_internal_set__button(::UnityW<::VROSC::Interactable>  value) ;

constexpr void __cordl_internal_set__buttonBlink(::UnityW<::VROSC::TutorialBlinkingUIElement>  value) ;

constexpr void __cordl_internal_set__grab(::UnityW<::VROSC::Grabable>  value) ;

/// @brief Method .ctor, addr 0x1701444, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Button, addr 0x170116c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::Interactable> get_Button() ;

/// @brief Method get_Grab, addr 0x1701164, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::Grabable> get_Grab() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DashboardWidgetButtonTutorialHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DashboardWidgetButtonTutorialHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DashboardWidgetButtonTutorialHelper(DashboardWidgetButtonTutorialHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DashboardWidgetButtonTutorialHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DashboardWidgetButtonTutorialHelper(DashboardWidgetButtonTutorialHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{844};

/// @brief Field _buttonBlink, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::TutorialBlinkingUIElement>  ____buttonBlink;

/// @brief Field _button, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::Interactable>  ____button;

/// @brief Field _grab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::Grabable>  ____grab;

/// @brief Field OnInteraction, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___OnInteraction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DashboardWidgetButtonTutorialHelper, ____buttonBlink) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardWidgetButtonTutorialHelper, ____button) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardWidgetButtonTutorialHelper, ____grab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardWidgetButtonTutorialHelper, ___OnInteraction) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DashboardWidgetButtonTutorialHelper, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DashboardWidgetButtonTutorialHelper);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DashboardWidgetButtonTutorialHelper*, "VROSC", "DashboardWidgetButtonTutorialHelper");
