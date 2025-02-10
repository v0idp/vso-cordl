#pragma once
// IWYU pragma private; include "VROSC/TutorialPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TutorialPanel)
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class Grabable;
}
namespace VROSC {
class TutorialBlinkingUIElement;
}
namespace VROSC {
class TutorialCondition;
}
namespace VROSC {
struct TutorialEvent;
}
namespace VROSC {
class TutorialStep;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace VROSC {
class TutorialPanel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TutorialPanel);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TutorialPanel
class CORDL_TYPE TutorialPanel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _blinkContinue, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__blinkContinue, put=__cordl_internal_set__blinkContinue)) ::UnityW<::VROSC::TutorialBlinkingUIElement>  _blinkContinue;

/// @brief Field _closeButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeButton, put=__cordl_internal_set__closeButton)) ::UnityW<::VROSC::UIButton>  _closeButton;

/// @brief Field _closeCancelButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeCancelButton, put=__cordl_internal_set__closeCancelButton)) ::UnityW<::VROSC::UIButton>  _closeCancelButton;

/// @brief Field _closeOKButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeOKButton, put=__cordl_internal_set__closeOKButton)) ::UnityW<::VROSC::UIButton>  _closeOKButton;

/// @brief Field _closeWarningPanel, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeWarningPanel, put=__cordl_internal_set__closeWarningPanel)) ::UnityW<::UnityEngine::GameObject>  _closeWarningPanel;

/// @brief Field _conditionPrefab, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__conditionPrefab, put=__cordl_internal_set__conditionPrefab)) ::UnityW<::VROSC::TutorialCondition>  _conditionPrefab;

/// @brief Field _conditionsParent, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__conditionsParent, put=__cordl_internal_set__conditionsParent)) ::UnityW<::UnityEngine::Transform>  _conditionsParent;

/// @brief Field _conditionsSizeY, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__conditionsSizeY, put=__cordl_internal_set__conditionsSizeY)) float_t  _conditionsSizeY;

/// @brief Field _conditionsStartY, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__conditionsStartY, put=__cordl_internal_set__conditionsStartY)) float_t  _conditionsStartY;

/// @brief Field _continueButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__continueButton, put=__cordl_internal_set__continueButton)) ::UnityW<::VROSC::UIButton>  _continueButton;

/// @brief Field _currentTutorialStep, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentTutorialStep, put=__cordl_internal_set__currentTutorialStep)) ::UnityW<::VROSC::TutorialStep>  _currentTutorialStep;

/// @brief Field _mainSize, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__mainSize, put=__cordl_internal_set__mainSize)) ::UnityEngine::Vector2  _mainSize;

/// @brief Field _mainTransform, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__mainTransform, put=__cordl_internal_set__mainTransform)) ::UnityW<::UnityEngine::RectTransform>  _mainTransform;

/// @brief Field _panelBlinkers, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__panelBlinkers, put=__cordl_internal_set__panelBlinkers)) ::ArrayW<::UnityW<::VROSC::TutorialBlinkingUIElement>,::Array<::UnityW<::VROSC::TutorialBlinkingUIElement>>*>  _panelBlinkers;

/// @brief Field _panelGrabables, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__panelGrabables, put=__cordl_internal_set__panelGrabables)) ::ArrayW<::UnityW<::VROSC::Grabable>,::Array<::UnityW<::VROSC::Grabable>>*>  _panelGrabables;

/// @brief Field _replayButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__replayButton, put=__cordl_internal_set__replayButton)) ::UnityW<::VROSC::UIButton>  _replayButton;

/// @brief Field _tipText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__tipText, put=__cordl_internal_set__tipText)) ::UnityW<::TMPro::TextMeshPro>  _tipText;

/// @brief Field _tutorialConditions, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__tutorialConditions, put=__cordl_internal_set__tutorialConditions)) ::ArrayW<::UnityW<::VROSC::TutorialCondition>,::Array<::UnityW<::VROSC::TutorialCondition>>*>  _tutorialConditions;

/// @brief Method ActivateTutorialStep, addr 0x1706294, size 0x4a4, virtual false, abstract: false, final false
inline void ActivateTutorialStep(::VROSC::TutorialStep*  tutorialStep) ;

/// @brief Method Awake, addr 0x1706958, size 0x40, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CloseButtonPressed, addr 0x17069b4, size 0x20, virtual false, abstract: false, final false
inline void CloseButtonPressed() ;

/// @brief Method CloseCancelButtonPressed, addr 0x1706a28, size 0x20, virtual false, abstract: false, final false
inline void CloseCancelButtonPressed() ;

/// @brief Method CloseOKButtonPressed, addr 0x17069d4, size 0x54, virtual false, abstract: false, final false
inline void CloseOKButtonPressed() ;

/// @brief Method ContinueButtonPressed, addr 0x1706a68, size 0x48, virtual false, abstract: false, final false
inline void ContinueButtonPressed() ;

/// @brief Method DisplayTipText, addr 0x1707078, size 0xf0, virtual false, abstract: false, final false
inline void DisplayTipText() ;

static inline ::VROSC::TutorialPanel* New_ctor() ;

/// @brief Method ReplayButtonPressed, addr 0x1706a48, size 0x20, virtual false, abstract: false, final false
inline void ReplayButtonPressed() ;

/// @brief Method RevealInstruction, addr 0x1706dc8, size 0xcc, virtual false, abstract: false, final false
inline void RevealInstruction() ;

/// @brief Method StartTutorial, addr 0x17057cc, size 0x3c8, virtual false, abstract: false, final false
inline void StartTutorial() ;

/// @brief Method TimelineReachedEnd, addr 0x1706abc, size 0xdc, virtual false, abstract: false, final false
inline void TimelineReachedEnd() ;

/// @brief Method TutorialConditionsCompleted, addr 0x1707168, size 0x154, virtual false, abstract: false, final false
inline void TutorialConditionsCompleted() ;

/// @brief Method TutorialEventTriggered, addr 0x1706b98, size 0x230, virtual false, abstract: false, final false
inline void TutorialEventTriggered(::VROSC::TutorialEvent  tutorialEvent) ;

/// @brief Method TutorialPanelGrabbed, addr 0x1706e94, size 0x1e4, virtual false, abstract: false, final false
inline void TutorialPanelGrabbed(bool  grabbed) ;

/// @brief Method TutorialStopped, addr 0x1705d5c, size 0x388, virtual false, abstract: false, final false
inline void TutorialStopped() ;

constexpr ::UnityW<::VROSC::TutorialBlinkingUIElement> const& __cordl_internal_get__blinkContinue() const;

constexpr ::UnityW<::VROSC::TutorialBlinkingUIElement>& __cordl_internal_get__blinkContinue() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__closeButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__closeButton() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__closeCancelButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__closeCancelButton() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__closeOKButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__closeOKButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__closeWarningPanel() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__closeWarningPanel() ;

constexpr ::UnityW<::VROSC::TutorialCondition> const& __cordl_internal_get__conditionPrefab() const;

constexpr ::UnityW<::VROSC::TutorialCondition>& __cordl_internal_get__conditionPrefab() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__conditionsParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__conditionsParent() ;

constexpr float_t const& __cordl_internal_get__conditionsSizeY() const;

constexpr float_t& __cordl_internal_get__conditionsSizeY() ;

constexpr float_t const& __cordl_internal_get__conditionsStartY() const;

constexpr float_t& __cordl_internal_get__conditionsStartY() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__continueButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__continueButton() ;

constexpr ::UnityW<::VROSC::TutorialStep> const& __cordl_internal_get__currentTutorialStep() const;

constexpr ::UnityW<::VROSC::TutorialStep>& __cordl_internal_get__currentTutorialStep() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__mainSize() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__mainSize() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__mainTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__mainTransform() ;

constexpr ::ArrayW<::UnityW<::VROSC::TutorialBlinkingUIElement>,::Array<::UnityW<::VROSC::TutorialBlinkingUIElement>>*> const& __cordl_internal_get__panelBlinkers() const;

constexpr ::ArrayW<::UnityW<::VROSC::TutorialBlinkingUIElement>,::Array<::UnityW<::VROSC::TutorialBlinkingUIElement>>*>& __cordl_internal_get__panelBlinkers() ;

constexpr ::ArrayW<::UnityW<::VROSC::Grabable>,::Array<::UnityW<::VROSC::Grabable>>*> const& __cordl_internal_get__panelGrabables() const;

constexpr ::ArrayW<::UnityW<::VROSC::Grabable>,::Array<::UnityW<::VROSC::Grabable>>*>& __cordl_internal_get__panelGrabables() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__replayButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__replayButton() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__tipText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__tipText() ;

constexpr ::ArrayW<::UnityW<::VROSC::TutorialCondition>,::Array<::UnityW<::VROSC::TutorialCondition>>*> const& __cordl_internal_get__tutorialConditions() const;

constexpr ::ArrayW<::UnityW<::VROSC::TutorialCondition>,::Array<::UnityW<::VROSC::TutorialCondition>>*>& __cordl_internal_get__tutorialConditions() ;

constexpr void __cordl_internal_set__blinkContinue(::UnityW<::VROSC::TutorialBlinkingUIElement>  value) ;

constexpr void __cordl_internal_set__closeButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__closeCancelButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__closeOKButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__closeWarningPanel(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__conditionPrefab(::UnityW<::VROSC::TutorialCondition>  value) ;

constexpr void __cordl_internal_set__conditionsParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__conditionsSizeY(float_t  value) ;

constexpr void __cordl_internal_set__conditionsStartY(float_t  value) ;

constexpr void __cordl_internal_set__continueButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__currentTutorialStep(::UnityW<::VROSC::TutorialStep>  value) ;

constexpr void __cordl_internal_set__mainSize(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__mainTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__panelBlinkers(::ArrayW<::UnityW<::VROSC::TutorialBlinkingUIElement>,::Array<::UnityW<::VROSC::TutorialBlinkingUIElement>>*>  value) ;

constexpr void __cordl_internal_set__panelGrabables(::ArrayW<::UnityW<::VROSC::Grabable>,::Array<::UnityW<::VROSC::Grabable>>*>  value) ;

constexpr void __cordl_internal_set__replayButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__tipText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__tutorialConditions(::ArrayW<::UnityW<::VROSC::TutorialCondition>,::Array<::UnityW<::VROSC::TutorialCondition>>*>  value) ;

/// @brief Method .ctor, addr 0x17072bc, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TutorialPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TutorialPanel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TutorialPanel(TutorialPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TutorialPanel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TutorialPanel(TutorialPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{856};

/// @brief Field _closeButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____closeButton;

/// @brief Field _closeOKButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____closeOKButton;

/// @brief Field _closeCancelButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____closeCancelButton;

/// @brief Field _closeWarningPanel, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____closeWarningPanel;

/// @brief Field _replayButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____replayButton;

/// @brief Field _continueButton, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____continueButton;

/// @brief Field _tipText, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____tipText;

/// @brief Field _blinkContinue, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::TutorialBlinkingUIElement>  ____blinkContinue;

/// @brief Field _panelGrabables, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::Grabable>,::Array<::UnityW<::VROSC::Grabable>>*>  ____panelGrabables;

/// @brief Field _panelBlinkers, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::TutorialBlinkingUIElement>,::Array<::UnityW<::VROSC::TutorialBlinkingUIElement>>*>  ____panelBlinkers;

/// @brief Field _conditionPrefab, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::VROSC::TutorialCondition>  ____conditionPrefab;

/// @brief Field _conditionsParent, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____conditionsParent;

/// @brief Field _mainTransform, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____mainTransform;

/// @brief Field _conditionsStartY, offset: 0x88, size: 0x4, def value: None
 float_t  ____conditionsStartY;

/// @brief Field _conditionsSizeY, offset: 0x8c, size: 0x4, def value: None
 float_t  ____conditionsSizeY;

/// @brief Field _currentTutorialStep, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::VROSC::TutorialStep>  ____currentTutorialStep;

/// @brief Field _tutorialConditions, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::TutorialCondition>,::Array<::UnityW<::VROSC::TutorialCondition>>*>  ____tutorialConditions;

/// @brief Field _mainSize, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____mainSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TutorialPanel, ____closeButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialPanel, ____closeOKButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialPanel, ____closeCancelButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialPanel, ____closeWarningPanel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialPanel, ____replayButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialPanel, ____continueButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialPanel, ____tipText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialPanel, ____blinkContinue) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialPanel, ____panelGrabables) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialPanel, ____panelBlinkers) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialPanel, ____conditionPrefab) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialPanel, ____conditionsParent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialPanel, ____mainTransform) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialPanel, ____conditionsStartY) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialPanel, ____conditionsSizeY) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialPanel, ____currentTutorialStep) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialPanel, ____tutorialConditions) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialPanel, ____mainSize) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TutorialPanel, 0xa8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TutorialPanel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialPanel*, "VROSC", "TutorialPanel");
