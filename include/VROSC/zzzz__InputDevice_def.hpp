#pragma once
// IWYU pragma private; include "VROSC/InputDevice.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDevice)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace VROSC::UI {
class UIInputHand;
}
namespace VROSC {
class ControllerInputNode;
}
namespace VROSC {
class ControllerRecordingUI;
}
namespace VROSC {
class DashboardSpawnPoint;
}
namespace VROSC {
struct HandType;
}
namespace VROSC {
class HighlightControllerComponents;
}
namespace VROSC {
class InputDeviceTransformData;
}
namespace VROSC {
class InputDeviceVisualInteraction;
}
namespace VROSC {
class InputDevice_HeldInputNode;
}
namespace VROSC {
class InputDevice_HoveredInputNode;
}
namespace VROSC {
class InputSettings;
}
namespace VROSC {
class InputVisualizer;
}
namespace VROSC {
class KeyHitter;
}
namespace VROSC {
class Mallet;
}
namespace VROSC {
class PredictiveHitter;
}
namespace VROSC {
class SynthController;
}
namespace VROSC {
struct TriggerButton;
}
namespace VROSC {
class TutorialInputDevice;
}
namespace VROSC {
class UIHelpers;
}
// Forward declare root types
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class InputDevice_HeldInputNode;
}
namespace VROSC {
class InputDevice_HoveredInputNode;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InputDevice);
MARK_REF_PTR_T(::VROSC::InputDevice_HeldInputNode);
MARK_REF_PTR_T(::VROSC::InputDevice_HoveredInputNode);
// Dependencies System.Object, VROSC.TriggerButton
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InputDevice/HeldInputNode
class CORDL_TYPE InputDevice_HeldInputNode : public ::System::Object {
public:
// Declarations
/// @brief Field HoldingButton, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_HoldingButton, put=__cordl_internal_set_HoldingButton)) ::VROSC::TriggerButton  HoldingButton;

/// @brief Field InputNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_InputNode, put=__cordl_internal_set_InputNode)) ::UnityW<::VROSC::ControllerInputNode>  InputNode;

static inline ::VROSC::InputDevice_HeldInputNode* New_ctor(::VROSC::ControllerInputNode*  inputNode, ::VROSC::TriggerButton  holdingButton) ;

constexpr ::VROSC::TriggerButton const& __cordl_internal_get_HoldingButton() const;

constexpr ::VROSC::TriggerButton& __cordl_internal_get_HoldingButton() ;

constexpr ::UnityW<::VROSC::ControllerInputNode> const& __cordl_internal_get_InputNode() const;

constexpr ::UnityW<::VROSC::ControllerInputNode>& __cordl_internal_get_InputNode() ;

constexpr void __cordl_internal_set_HoldingButton(::VROSC::TriggerButton  value) ;

constexpr void __cordl_internal_set_InputNode(::UnityW<::VROSC::ControllerInputNode>  value) ;

/// @brief Method .ctor, addr 0x188f078, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::VROSC::ControllerInputNode*  inputNode, ::VROSC::TriggerButton  holdingButton) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputDevice_HeldInputNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputDevice_HeldInputNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputDevice_HeldInputNode(InputDevice_HeldInputNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputDevice_HeldInputNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputDevice_HeldInputNode(InputDevice_HeldInputNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{619};

/// @brief Field InputNode, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::ControllerInputNode>  ___InputNode;

/// @brief Field HoldingButton, offset: 0x18, size: 0x4, def value: None
 ::VROSC::TriggerButton  ___HoldingButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InputDevice_HeldInputNode, ___InputNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice_HeldInputNode, ___HoldingButton) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InputDevice_HeldInputNode, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InputDevice/HoveredInputNode
class CORDL_TYPE InputDevice_HoveredInputNode : public ::System::Object {
public:
// Declarations
/// @brief Field HoveredThisFrame, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_HoveredThisFrame, put=__cordl_internal_set_HoveredThisFrame)) bool  HoveredThisFrame;

/// @brief Field InputNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_InputNode, put=__cordl_internal_set_InputNode)) ::UnityW<::VROSC::ControllerInputNode>  InputNode;

static inline ::VROSC::InputDevice_HoveredInputNode* New_ctor(::VROSC::ControllerInputNode*  inputNode, bool  hoveredThisFrame) ;

constexpr bool const& __cordl_internal_get_HoveredThisFrame() const;

constexpr bool& __cordl_internal_get_HoveredThisFrame() ;

constexpr ::UnityW<::VROSC::ControllerInputNode> const& __cordl_internal_get_InputNode() const;

constexpr ::UnityW<::VROSC::ControllerInputNode>& __cordl_internal_get_InputNode() ;

constexpr void __cordl_internal_set_HoveredThisFrame(bool  value) ;

constexpr void __cordl_internal_set_InputNode(::UnityW<::VROSC::ControllerInputNode>  value) ;

/// @brief Method .ctor, addr 0x188e978, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::VROSC::ControllerInputNode*  inputNode, bool  hoveredThisFrame) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputDevice_HoveredInputNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputDevice_HoveredInputNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputDevice_HoveredInputNode(InputDevice_HoveredInputNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputDevice_HoveredInputNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputDevice_HoveredInputNode(InputDevice_HoveredInputNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{620};

/// @brief Field InputNode, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::ControllerInputNode>  ___InputNode;

/// @brief Field HoveredThisFrame, offset: 0x18, size: 0x1, def value: None
 bool  ___HoveredThisFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InputDevice_HoveredInputNode, ___InputNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice_HoveredInputNode, ___HoveredThisFrame) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InputDevice_HoveredInputNode, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2, VROSC.HandType
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InputDevice
class CORDL_TYPE InputDevice : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using HeldInputNode = ::VROSC::InputDevice_HeldInputNode;

using HoveredInputNode = ::VROSC::InputDevice_HoveredInputNode;

 __declspec(property(get=get_ActivePredictiveHitter)) ::UnityW<::VROSC::PredictiveHitter>  ActivePredictiveHitter;

 __declspec(property(get=get_AnyButtonTriggering, put=set_AnyButtonTriggering)) bool  AnyButtonTriggering;

 __declspec(property(get=get_AppMenuYBValue, put=set_AppMenuYBValue)) bool  AppMenuYBValue;

 __declspec(property(get=get_DashboardSpawnPoint)) ::UnityW<::VROSC::DashboardSpawnPoint>  DashboardSpawnPoint;

 __declspec(property(get=get_Data, put=set_Data)) ::VROSC::InputDeviceTransformData*  Data;

/// @brief Field GrabDisabledChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GrabDisabledChanged, put=setStaticF_GrabDisabledChanged)) ::System::Action_1<bool>*  GrabDisabledChanged;

 __declspec(property(get=get_GripTriggerValue, put=set_GripTriggerValue)) float_t  GripTriggerValue;

 __declspec(property(get=get_HandType, put=set_HandType)) ::VROSC::HandType  HandType;

 __declspec(property(get=get_HeldInputNodes, put=set_HeldInputNodes)) ::System::Collections::Generic::List_1<::VROSC::InputDevice_HeldInputNode*>*  HeldInputNodes;

 __declspec(property(get=get_HighLighting)) ::UnityW<::VROSC::HighlightControllerComponents>  HighLighting;

 __declspec(property(get=get_HoveredInputNodes, put=set_HoveredInputNodes)) ::System::Collections::Generic::List_1<::VROSC::InputDevice_HoveredInputNode*>*  HoveredInputNodes;

 __declspec(property(get=get_InInstrument)) bool  InInstrument;

 __declspec(property(get=get_IndexAsButtonEdgeValue, put=set_IndexAsButtonEdgeValue)) float_t  IndexAsButtonEdgeValue;

 __declspec(property(get=get_IndexAsButtonPressed, put=set_IndexAsButtonPressed)) bool  IndexAsButtonPressed;

 __declspec(property(get=get_IndexTriggerValue, put=set_IndexTriggerValue)) float_t  IndexTriggerValue;

 __declspec(property(get=get_InteractionPoint)) ::UnityW<::UnityEngine::Transform>  InteractionPoint;

 __declspec(property(get=get_InteractionPointTransform, put=set_InteractionPointTransform)) ::UnityW<::UnityEngine::Transform>  InteractionPointTransform;

 __declspec(property(get=get_LastIndexAsButtonPressed, put=set_LastIndexAsButtonPressed)) bool  LastIndexAsButtonPressed;

 __declspec(property(get=get_OtherController, put=set_OtherController)) ::UnityW<::VROSC::InputDevice>  OtherController;

 __declspec(property(get=get_RayPoint)) ::UnityW<::UnityEngine::Transform>  RayPoint;

 __declspec(property(get=get_RecordingUI)) ::UnityW<::VROSC::ControllerRecordingUI>  RecordingUI;

 __declspec(property(get=get_StickPadValue, put=set_StickPadValue)) ::UnityEngine::Vector2  StickPadValue;

 __declspec(property(get=get_TouchPointTransform, put=set_TouchPointTransform)) ::UnityW<::UnityEngine::Transform>  TouchPointTransform;

 __declspec(property(get=get_TouchpadXAValue, put=set_TouchpadXAValue)) bool  TouchpadXAValue;

 __declspec(property(get=get_TrackedHandTransform)) ::UnityW<::UnityEngine::Transform>  TrackedHandTransform;

 __declspec(property(get=get_Tutorial)) ::UnityW<::VROSC::TutorialInputDevice>  Tutorial;

 __declspec(property(get=get_UIHelpers, put=set_UIHelpers)) ::UnityW<::VROSC::UIHelpers>  UIHelpers;

 __declspec(property(get=get_UIInputHand)) ::UnityW<::VROSC::UI::UIInputHand>  UIInputHand;

 __declspec(property(get=get_Visuals)) ::UnityW<::VROSC::InputDeviceVisualInteraction>  Visuals;

/// @brief Field <AnyButtonTriggering>k__BackingField, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get__AnyButtonTriggering_k__BackingField, put=__cordl_internal_set__AnyButtonTriggering_k__BackingField)) bool  _AnyButtonTriggering_k__BackingField;

/// @brief Field <AppMenuYBValue>k__BackingField, offset 0xd1, size 0x1 
 __declspec(property(get=__cordl_internal_get__AppMenuYBValue_k__BackingField, put=__cordl_internal_set__AppMenuYBValue_k__BackingField)) bool  _AppMenuYBValue_k__BackingField;

/// @brief Field <Data>k__BackingField, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Data_k__BackingField, put=__cordl_internal_set__Data_k__BackingField)) ::VROSC::InputDeviceTransformData*  _Data_k__BackingField;

/// @brief Field <GrabDisabled>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__GrabDisabled_k__BackingField, put=setStaticF__GrabDisabled_k__BackingField)) bool  _GrabDisabled_k__BackingField;

/// @brief Field <GripTriggerValue>k__BackingField, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get__GripTriggerValue_k__BackingField, put=__cordl_internal_set__GripTriggerValue_k__BackingField)) float_t  _GripTriggerValue_k__BackingField;

/// @brief Field <HandType>k__BackingField, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__HandType_k__BackingField, put=__cordl_internal_set__HandType_k__BackingField)) ::VROSC::HandType  _HandType_k__BackingField;

/// @brief Field <HeldInputNodes>k__BackingField, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__HeldInputNodes_k__BackingField, put=__cordl_internal_set__HeldInputNodes_k__BackingField)) ::System::Collections::Generic::List_1<::VROSC::InputDevice_HeldInputNode*>*  _HeldInputNodes_k__BackingField;

/// @brief Field <HoveredInputNodes>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__HoveredInputNodes_k__BackingField, put=__cordl_internal_set__HoveredInputNodes_k__BackingField)) ::System::Collections::Generic::List_1<::VROSC::InputDevice_HoveredInputNode*>*  _HoveredInputNodes_k__BackingField;

/// @brief Field <IndexAsButtonEdgeValue>k__BackingField, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get__IndexAsButtonEdgeValue_k__BackingField, put=__cordl_internal_set__IndexAsButtonEdgeValue_k__BackingField)) float_t  _IndexAsButtonEdgeValue_k__BackingField;

/// @brief Field <IndexAsButtonPressed>k__BackingField, offset 0xd2, size 0x1 
 __declspec(property(get=__cordl_internal_get__IndexAsButtonPressed_k__BackingField, put=__cordl_internal_set__IndexAsButtonPressed_k__BackingField)) bool  _IndexAsButtonPressed_k__BackingField;

/// @brief Field <IndexTriggerValue>k__BackingField, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get__IndexTriggerValue_k__BackingField, put=__cordl_internal_set__IndexTriggerValue_k__BackingField)) float_t  _IndexTriggerValue_k__BackingField;

/// @brief Field <InteractionPointTransform>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__InteractionPointTransform_k__BackingField, put=__cordl_internal_set__InteractionPointTransform_k__BackingField)) ::UnityW<::UnityEngine::Transform>  _InteractionPointTransform_k__BackingField;

/// @brief Field <LastIndexAsButtonPressed>k__BackingField, offset 0xd3, size 0x1 
 __declspec(property(get=__cordl_internal_get__LastIndexAsButtonPressed_k__BackingField, put=__cordl_internal_set__LastIndexAsButtonPressed_k__BackingField)) bool  _LastIndexAsButtonPressed_k__BackingField;

/// @brief Field <OtherController>k__BackingField, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__OtherController_k__BackingField, put=__cordl_internal_set__OtherController_k__BackingField)) ::UnityW<::VROSC::InputDevice>  _OtherController_k__BackingField;

/// @brief Field <StickPadValue>k__BackingField, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__StickPadValue_k__BackingField, put=__cordl_internal_set__StickPadValue_k__BackingField)) ::UnityEngine::Vector2  _StickPadValue_k__BackingField;

/// @brief Field <TouchPointTransform>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__TouchPointTransform_k__BackingField, put=__cordl_internal_set__TouchPointTransform_k__BackingField)) ::UnityW<::UnityEngine::Transform>  _TouchPointTransform_k__BackingField;

/// @brief Field <TouchpadXAValue>k__BackingField, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get__TouchpadXAValue_k__BackingField, put=__cordl_internal_set__TouchpadXAValue_k__BackingField)) bool  _TouchpadXAValue_k__BackingField;

/// @brief Field <UIHelpers>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__UIHelpers_k__BackingField, put=__cordl_internal_set__UIHelpers_k__BackingField)) ::UnityW<::VROSC::UIHelpers>  _UIHelpers_k__BackingField;

/// @brief Field _centerPoint, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__centerPoint, put=__cordl_internal_set__centerPoint)) ::UnityW<::UnityEngine::Transform>  _centerPoint;

/// @brief Field _dashboardSpawnPoint, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__dashboardSpawnPoint, put=__cordl_internal_set__dashboardSpawnPoint)) ::UnityW<::VROSC::DashboardSpawnPoint>  _dashboardSpawnPoint;

/// @brief Field _highLight, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__highLight, put=__cordl_internal_set__highLight)) ::UnityW<::VROSC::HighlightControllerComponents>  _highLight;

/// @brief Field _hoveredColliders, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__hoveredColliders, put=__cordl_internal_set__hoveredColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>  _hoveredColliders;

/// @brief Field _inInstrument, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get__inInstrument, put=__cordl_internal_set__inInstrument)) bool  _inInstrument;

/// @brief Field _inputSettings, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputSettings, put=__cordl_internal_set__inputSettings)) ::UnityW<::VROSC::InputSettings>  _inputSettings;

/// @brief Field _inputVisualizer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputVisualizer, put=__cordl_internal_set__inputVisualizer)) ::UnityW<::VROSC::InputVisualizer>  _inputVisualizer;

/// @brief Field _keyBoardHitter, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__keyBoardHitter, put=__cordl_internal_set__keyBoardHitter)) ::UnityW<::VROSC::KeyHitter>  _keyBoardHitter;

/// @brief Field _mallet, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__mallet, put=__cordl_internal_set__mallet)) ::UnityW<::VROSC::Mallet>  _mallet;

/// @brief Field _overlapColliderAllocSize, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__overlapColliderAllocSize, put=__cordl_internal_set__overlapColliderAllocSize)) int32_t  _overlapColliderAllocSize;

/// @brief Field _overlapSize, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__overlapSize, put=__cordl_internal_set__overlapSize)) float_t  _overlapSize;

/// @brief Field _predictiveHitter, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__predictiveHitter, put=__cordl_internal_set__predictiveHitter)) ::UnityW<::VROSC::PredictiveHitter>  _predictiveHitter;

/// @brief Field _recordingUI, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordingUI, put=__cordl_internal_set__recordingUI)) ::UnityW<::VROSC::ControllerRecordingUI>  _recordingUI;

/// @brief Field _tutorial, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__tutorial, put=__cordl_internal_set__tutorial)) ::UnityW<::VROSC::TutorialInputDevice>  _tutorial;

/// @brief Field _uIInput, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__uIInput, put=__cordl_internal_set__uIInput)) ::UnityW<::VROSC::UI::UIInputHand>  _uIInput;

/// @brief Field _visualInteraction, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__visualInteraction, put=__cordl_internal_set__visualInteraction)) ::UnityW<::VROSC::InputDeviceVisualInteraction>  _visualInteraction;

/// @brief Field _wasTouchingNode, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasTouchingNode, put=__cordl_internal_set__wasTouchingNode)) bool  _wasTouchingNode;

/// @brief Method AssignMallet, addr 0x188d464, size 0x8, virtual false, abstract: false, final false
inline void AssignMallet(::VROSC::Mallet*  mallet) ;

/// @brief Method CheckForTouchedNodes, addr 0x188d984, size 0x740, virtual false, abstract: false, final false
inline bool CheckForTouchedNodes() ;

/// @brief Method DisableGrab, addr 0x188efa0, size 0xc0, virtual false, abstract: false, final false
static inline void DisableGrab(bool  disable) ;

static inline ::VROSC::InputDevice* New_ctor() ;

/// @brief Method SetFrameInteraction, addr 0x188eb68, size 0x20, virtual false, abstract: false, final false
inline void SetFrameInteraction(bool  enter, bool  fade) ;

/// @brief Method SetKeyHittersActive, addr 0x188d3f8, size 0x38, virtual false, abstract: false, final false
inline void SetKeyHittersActive(bool  active) ;

/// @brief Method SetMalletActive, addr 0x188eda4, size 0x38, virtual false, abstract: false, final false
inline void SetMalletActive(bool  enabled, ::VROSC::Mallet*  mallet, bool  endOfAnimation) ;

/// @brief Method SetSliderValue, addr 0x188ef58, size 0x2c, virtual false, abstract: false, final false
inline void SetSliderValue(float_t  value) ;

/// @brief Method Setup, addr 0x188d1a4, size 0x208, virtual false, abstract: false, final false
inline void Setup(::VROSC::InputSettings*  inputSettings, ::VROSC::InputDevice*  other, ::VROSC::HandType  handtype, ::VROSC::UIHelpers*  uiHelpers) ;

/// @brief Method ShouldHaveInteractionBar, addr 0x188eb88, size 0xa0, virtual false, abstract: false, final false
inline bool ShouldHaveInteractionBar(::VROSC::SynthController*  synthController) ;

/// @brief Method ShouldHoveredNodesDisableGrab, addr 0x188eddc, size 0x17c, virtual false, abstract: false, final false
inline bool ShouldHoveredNodesDisableGrab() ;

/// @brief Method UpdateButtonValues, addr 0x188d4a0, size 0x1b4, virtual false, abstract: false, final false
inline void UpdateButtonValues() ;

/// @brief Method UpdateDevice, addr 0x188d46c, size 0x34, virtual false, abstract: false, final false
inline void UpdateDevice() ;

/// @brief Method UpdateIndexAsButtonPressed, addr 0x188d90c, size 0x78, virtual false, abstract: false, final false
inline void UpdateIndexAsButtonPressed(float_t  indexTriggerValue) ;

/// @brief Method UpdateInputNodes, addr 0x188d6b8, size 0x188, virtual false, abstract: false, final false
inline void UpdateInputNodes() ;

constexpr bool const& __cordl_internal_get__AnyButtonTriggering_k__BackingField() const;

constexpr bool& __cordl_internal_get__AnyButtonTriggering_k__BackingField() ;

constexpr bool const& __cordl_internal_get__AppMenuYBValue_k__BackingField() const;

constexpr bool& __cordl_internal_get__AppMenuYBValue_k__BackingField() ;

constexpr ::VROSC::InputDeviceTransformData* const& __cordl_internal_get__Data_k__BackingField() const;

constexpr ::VROSC::InputDeviceTransformData*& __cordl_internal_get__Data_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__GripTriggerValue_k__BackingField() const;

constexpr float_t& __cordl_internal_get__GripTriggerValue_k__BackingField() ;

constexpr ::VROSC::HandType const& __cordl_internal_get__HandType_k__BackingField() const;

constexpr ::VROSC::HandType& __cordl_internal_get__HandType_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::InputDevice_HeldInputNode*>* const& __cordl_internal_get__HeldInputNodes_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::InputDevice_HeldInputNode*>*& __cordl_internal_get__HeldInputNodes_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::InputDevice_HoveredInputNode*>* const& __cordl_internal_get__HoveredInputNodes_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::InputDevice_HoveredInputNode*>*& __cordl_internal_get__HoveredInputNodes_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__IndexAsButtonEdgeValue_k__BackingField() const;

constexpr float_t& __cordl_internal_get__IndexAsButtonEdgeValue_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IndexAsButtonPressed_k__BackingField() const;

constexpr bool& __cordl_internal_get__IndexAsButtonPressed_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__IndexTriggerValue_k__BackingField() const;

constexpr float_t& __cordl_internal_get__IndexTriggerValue_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__InteractionPointTransform_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__InteractionPointTransform_k__BackingField() ;

constexpr bool const& __cordl_internal_get__LastIndexAsButtonPressed_k__BackingField() const;

constexpr bool& __cordl_internal_get__LastIndexAsButtonPressed_k__BackingField() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__OtherController_k__BackingField() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__OtherController_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__StickPadValue_k__BackingField() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__StickPadValue_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__TouchPointTransform_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__TouchPointTransform_k__BackingField() ;

constexpr bool const& __cordl_internal_get__TouchpadXAValue_k__BackingField() const;

constexpr bool& __cordl_internal_get__TouchpadXAValue_k__BackingField() ;

constexpr ::UnityW<::VROSC::UIHelpers> const& __cordl_internal_get__UIHelpers_k__BackingField() const;

constexpr ::UnityW<::VROSC::UIHelpers>& __cordl_internal_get__UIHelpers_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__centerPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__centerPoint() ;

constexpr ::UnityW<::VROSC::DashboardSpawnPoint> const& __cordl_internal_get__dashboardSpawnPoint() const;

constexpr ::UnityW<::VROSC::DashboardSpawnPoint>& __cordl_internal_get__dashboardSpawnPoint() ;

constexpr ::UnityW<::VROSC::HighlightControllerComponents> const& __cordl_internal_get__highLight() const;

constexpr ::UnityW<::VROSC::HighlightControllerComponents>& __cordl_internal_get__highLight() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> const& __cordl_internal_get__hoveredColliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>& __cordl_internal_get__hoveredColliders() ;

constexpr bool const& __cordl_internal_get__inInstrument() const;

constexpr bool& __cordl_internal_get__inInstrument() ;

constexpr ::UnityW<::VROSC::InputSettings> const& __cordl_internal_get__inputSettings() const;

constexpr ::UnityW<::VROSC::InputSettings>& __cordl_internal_get__inputSettings() ;

constexpr ::UnityW<::VROSC::InputVisualizer> const& __cordl_internal_get__inputVisualizer() const;

constexpr ::UnityW<::VROSC::InputVisualizer>& __cordl_internal_get__inputVisualizer() ;

constexpr ::UnityW<::VROSC::KeyHitter> const& __cordl_internal_get__keyBoardHitter() const;

constexpr ::UnityW<::VROSC::KeyHitter>& __cordl_internal_get__keyBoardHitter() ;

constexpr ::UnityW<::VROSC::Mallet> const& __cordl_internal_get__mallet() const;

constexpr ::UnityW<::VROSC::Mallet>& __cordl_internal_get__mallet() ;

constexpr int32_t const& __cordl_internal_get__overlapColliderAllocSize() const;

constexpr int32_t& __cordl_internal_get__overlapColliderAllocSize() ;

constexpr float_t const& __cordl_internal_get__overlapSize() const;

constexpr float_t& __cordl_internal_get__overlapSize() ;

constexpr ::UnityW<::VROSC::PredictiveHitter> const& __cordl_internal_get__predictiveHitter() const;

constexpr ::UnityW<::VROSC::PredictiveHitter>& __cordl_internal_get__predictiveHitter() ;

constexpr ::UnityW<::VROSC::ControllerRecordingUI> const& __cordl_internal_get__recordingUI() const;

constexpr ::UnityW<::VROSC::ControllerRecordingUI>& __cordl_internal_get__recordingUI() ;

constexpr ::UnityW<::VROSC::TutorialInputDevice> const& __cordl_internal_get__tutorial() const;

constexpr ::UnityW<::VROSC::TutorialInputDevice>& __cordl_internal_get__tutorial() ;

constexpr ::UnityW<::VROSC::UI::UIInputHand> const& __cordl_internal_get__uIInput() const;

constexpr ::UnityW<::VROSC::UI::UIInputHand>& __cordl_internal_get__uIInput() ;

constexpr ::UnityW<::VROSC::InputDeviceVisualInteraction> const& __cordl_internal_get__visualInteraction() const;

constexpr ::UnityW<::VROSC::InputDeviceVisualInteraction>& __cordl_internal_get__visualInteraction() ;

constexpr bool const& __cordl_internal_get__wasTouchingNode() const;

constexpr bool& __cordl_internal_get__wasTouchingNode() ;

constexpr void __cordl_internal_set__AnyButtonTriggering_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__AppMenuYBValue_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Data_k__BackingField(::VROSC::InputDeviceTransformData*  value) ;

constexpr void __cordl_internal_set__GripTriggerValue_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__HandType_k__BackingField(::VROSC::HandType  value) ;

constexpr void __cordl_internal_set__HeldInputNodes_k__BackingField(::System::Collections::Generic::List_1<::VROSC::InputDevice_HeldInputNode*>*  value) ;

constexpr void __cordl_internal_set__HoveredInputNodes_k__BackingField(::System::Collections::Generic::List_1<::VROSC::InputDevice_HoveredInputNode*>*  value) ;

constexpr void __cordl_internal_set__IndexAsButtonEdgeValue_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__IndexAsButtonPressed_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IndexTriggerValue_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__InteractionPointTransform_k__BackingField(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__LastIndexAsButtonPressed_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__OtherController_k__BackingField(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__StickPadValue_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__TouchPointTransform_k__BackingField(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__TouchpadXAValue_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__UIHelpers_k__BackingField(::UnityW<::VROSC::UIHelpers>  value) ;

constexpr void __cordl_internal_set__centerPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__dashboardSpawnPoint(::UnityW<::VROSC::DashboardSpawnPoint>  value) ;

constexpr void __cordl_internal_set__highLight(::UnityW<::VROSC::HighlightControllerComponents>  value) ;

constexpr void __cordl_internal_set__hoveredColliders(::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>  value) ;

constexpr void __cordl_internal_set__inInstrument(bool  value) ;

constexpr void __cordl_internal_set__inputSettings(::UnityW<::VROSC::InputSettings>  value) ;

constexpr void __cordl_internal_set__inputVisualizer(::UnityW<::VROSC::InputVisualizer>  value) ;

constexpr void __cordl_internal_set__keyBoardHitter(::UnityW<::VROSC::KeyHitter>  value) ;

constexpr void __cordl_internal_set__mallet(::UnityW<::VROSC::Mallet>  value) ;

constexpr void __cordl_internal_set__overlapColliderAllocSize(int32_t  value) ;

constexpr void __cordl_internal_set__overlapSize(float_t  value) ;

constexpr void __cordl_internal_set__predictiveHitter(::UnityW<::VROSC::PredictiveHitter>  value) ;

constexpr void __cordl_internal_set__recordingUI(::UnityW<::VROSC::ControllerRecordingUI>  value) ;

constexpr void __cordl_internal_set__tutorial(::UnityW<::VROSC::TutorialInputDevice>  value) ;

constexpr void __cordl_internal_set__uIInput(::UnityW<::VROSC::UI::UIInputHand>  value) ;

constexpr void __cordl_internal_set__visualInteraction(::UnityW<::VROSC::InputDeviceVisualInteraction>  value) ;

constexpr void __cordl_internal_set__wasTouchingNode(bool  value) ;

/// @brief Method .ctor, addr 0x188f060, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<bool>* getStaticF_GrabDisabledChanged() ;

static inline bool getStaticF__GrabDisabled_k__BackingField() ;

/// @brief Method get_ActivePredictiveHitter, addr 0x188d024, size 0x8c, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::PredictiveHitter> get_ActivePredictiveHitter() ;

/// @brief Method get_AnyButtonTriggering, addr 0x188d18c, size 0x8, virtual false, abstract: false, final false
inline bool get_AnyButtonTriggering() ;

/// @brief Method get_AppMenuYBValue, addr 0x188d130, size 0x8, virtual false, abstract: false, final false
inline bool get_AppMenuYBValue() ;

/// @brief Method get_DashboardSpawnPoint, addr 0x188cf0c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::DashboardSpawnPoint> get_DashboardSpawnPoint() ;

/// @brief Method get_Data, addr 0x188d19c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::InputDeviceTransformData* get_Data() ;

/// @brief Method get_GrabDisabled, addr 0x188cf64, size 0x48, virtual false, abstract: false, final false
static inline bool get_GrabDisabled() ;

/// @brief Method get_GripTriggerValue, addr 0x188d108, size 0x8, virtual false, abstract: false, final false
inline float_t get_GripTriggerValue() ;

/// @brief Method get_HandType, addr 0x188d004, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::HandType get_HandType() ;

/// @brief Method get_HeldInputNodes, addr 0x188d0d8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::VROSC::InputDevice_HeldInputNode*>* get_HeldInputNodes() ;

/// @brief Method get_HighLighting, addr 0x188cefc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::HighlightControllerComponents> get_HighLighting() ;

/// @brief Method get_HoveredInputNodes, addr 0x188d0c8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::VROSC::InputDevice_HoveredInputNode*>* get_HoveredInputNodes() ;

/// @brief Method get_InInstrument, addr 0x188cf1c, size 0x8, virtual false, abstract: false, final false
inline bool get_InInstrument() ;

/// @brief Method get_IndexAsButtonEdgeValue, addr 0x188d168, size 0x8, virtual false, abstract: false, final false
inline float_t get_IndexAsButtonEdgeValue() ;

/// @brief Method get_IndexAsButtonPressed, addr 0x188d144, size 0x8, virtual false, abstract: false, final false
inline bool get_IndexAsButtonPressed() ;

/// @brief Method get_IndexTriggerValue, addr 0x188d0f8, size 0x8, virtual false, abstract: false, final false
inline float_t get_IndexTriggerValue() ;

/// @brief Method get_InteractionPoint, addr 0x188cf24, size 0x1c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_InteractionPoint() ;

/// @brief Method get_InteractionPointTransform, addr 0x188d0b8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_InteractionPointTransform() ;

/// @brief Method get_LastIndexAsButtonPressed, addr 0x188d158, size 0x8, virtual false, abstract: false, final false
inline bool get_LastIndexAsButtonPressed() ;

/// @brief Method get_OtherController, addr 0x188d178, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::InputDevice> get_OtherController() ;

/// @brief Method get_RayPoint, addr 0x188cf40, size 0x1c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_RayPoint() ;

/// @brief Method get_RecordingUI, addr 0x188cf14, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::ControllerRecordingUI> get_RecordingUI() ;

/// @brief Method get_StickPadValue, addr 0x188d0e8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_StickPadValue() ;

/// @brief Method get_TouchPointTransform, addr 0x188d014, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_TouchPointTransform() ;

/// @brief Method get_TouchpadXAValue, addr 0x188d11c, size 0x8, virtual false, abstract: false, final false
inline bool get_TouchpadXAValue() ;

/// @brief Method get_TrackedHandTransform, addr 0x188d01c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_TrackedHandTransform() ;

/// @brief Method get_Tutorial, addr 0x188cf04, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::TutorialInputDevice> get_Tutorial() ;

/// @brief Method get_UIHelpers, addr 0x188ceec, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UIHelpers> get_UIHelpers() ;

/// @brief Method get_UIInputHand, addr 0x188cee4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UI::UIInputHand> get_UIInputHand() ;

/// @brief Method get_Visuals, addr 0x188cf5c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::InputDeviceVisualInteraction> get_Visuals() ;

static inline void setStaticF_GrabDisabledChanged(::System::Action_1<bool>*  value) ;

static inline void setStaticF__GrabDisabled_k__BackingField(bool  value) ;

/// @brief Method set_AnyButtonTriggering, addr 0x188d180, size 0xc, virtual false, abstract: false, final false
inline void set_AnyButtonTriggering(bool  value) ;

/// @brief Method set_AppMenuYBValue, addr 0x188d124, size 0xc, virtual false, abstract: false, final false
inline void set_AppMenuYBValue(bool  value) ;

/// @brief Method set_Data, addr 0x188d194, size 0x8, virtual false, abstract: false, final false
inline void set_Data(::VROSC::InputDeviceTransformData*  value) ;

/// @brief Method set_GrabDisabled, addr 0x188cfac, size 0x50, virtual false, abstract: false, final false
static inline void set_GrabDisabled(bool  value) ;

/// @brief Method set_GripTriggerValue, addr 0x188d100, size 0x8, virtual false, abstract: false, final false
inline void set_GripTriggerValue(float_t  value) ;

/// @brief Method set_HandType, addr 0x188cffc, size 0x8, virtual false, abstract: false, final false
inline void set_HandType(::VROSC::HandType  value) ;

/// @brief Method set_HeldInputNodes, addr 0x188d0d0, size 0x8, virtual false, abstract: false, final false
inline void set_HeldInputNodes(::System::Collections::Generic::List_1<::VROSC::InputDevice_HeldInputNode*>*  value) ;

/// @brief Method set_HoveredInputNodes, addr 0x188d0c0, size 0x8, virtual false, abstract: false, final false
inline void set_HoveredInputNodes(::System::Collections::Generic::List_1<::VROSC::InputDevice_HoveredInputNode*>*  value) ;

/// @brief Method set_IndexAsButtonEdgeValue, addr 0x188d160, size 0x8, virtual false, abstract: false, final false
inline void set_IndexAsButtonEdgeValue(float_t  value) ;

/// @brief Method set_IndexAsButtonPressed, addr 0x188d138, size 0xc, virtual false, abstract: false, final false
inline void set_IndexAsButtonPressed(bool  value) ;

/// @brief Method set_IndexTriggerValue, addr 0x188d0f0, size 0x8, virtual false, abstract: false, final false
inline void set_IndexTriggerValue(float_t  value) ;

/// @brief Method set_InteractionPointTransform, addr 0x188d0b0, size 0x8, virtual false, abstract: false, final false
inline void set_InteractionPointTransform(::UnityEngine::Transform*  value) ;

/// @brief Method set_LastIndexAsButtonPressed, addr 0x188d14c, size 0xc, virtual false, abstract: false, final false
inline void set_LastIndexAsButtonPressed(bool  value) ;

/// @brief Method set_OtherController, addr 0x188d170, size 0x8, virtual false, abstract: false, final false
inline void set_OtherController(::VROSC::InputDevice*  value) ;

/// @brief Method set_StickPadValue, addr 0x188d0e0, size 0x8, virtual false, abstract: false, final false
inline void set_StickPadValue(::UnityEngine::Vector2  value) ;

/// @brief Method set_TouchPointTransform, addr 0x188d00c, size 0x8, virtual false, abstract: false, final false
inline void set_TouchPointTransform(::UnityEngine::Transform*  value) ;

/// @brief Method set_TouchpadXAValue, addr 0x188d110, size 0xc, virtual false, abstract: false, final false
inline void set_TouchpadXAValue(bool  value) ;

/// @brief Method set_UIHelpers, addr 0x188cef4, size 0x8, virtual false, abstract: false, final false
inline void set_UIHelpers(::VROSC::UIHelpers*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputDevice() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputDevice", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputDevice(InputDevice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputDevice", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputDevice(InputDevice const& ) = delete;

/// @brief Field TriggerAlwaysPressedValue offset 0xffffffff size 0x4
static constexpr float_t  TriggerAlwaysPressedValue{static_cast<float_t>(0.5f)};

/// @brief Field TriggerHairPinValue offset 0xffffffff size 0x4
static constexpr float_t  TriggerHairPinValue{static_cast<float_t>(0.01f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{621};

/// @brief Field _uIInput, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIInputHand>  ____uIInput;

/// @brief Field _inputVisualizer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::InputVisualizer>  ____inputVisualizer;

/// @brief Field _centerPoint, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____centerPoint;

/// @brief Field _predictiveHitter, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::PredictiveHitter>  ____predictiveHitter;

/// @brief Field _keyBoardHitter, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::KeyHitter>  ____keyBoardHitter;

/// @brief Field _highLight, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::HighlightControllerComponents>  ____highLight;

/// @brief Field _tutorial, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::TutorialInputDevice>  ____tutorial;

/// @brief Field _dashboardSpawnPoint, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::DashboardSpawnPoint>  ____dashboardSpawnPoint;

/// @brief Field _recordingUI, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::ControllerRecordingUI>  ____recordingUI;

/// @brief Field _visualInteraction, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDeviceVisualInteraction>  ____visualInteraction;

/// @brief Field <UIHelpers>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::VROSC::UIHelpers>  ____UIHelpers_k__BackingField;

/// @brief Field _inputSettings, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::InputSettings>  ____inputSettings;

/// @brief Field _overlapColliderAllocSize, offset: 0x80, size: 0x4, def value: None
 int32_t  ____overlapColliderAllocSize;

/// @brief Field _overlapSize, offset: 0x84, size: 0x4, def value: None
 float_t  ____overlapSize;

/// @brief Field _wasTouchingNode, offset: 0x88, size: 0x1, def value: None
 bool  ____wasTouchingNode;

/// @brief Field _inInstrument, offset: 0x89, size: 0x1, def value: None
 bool  ____inInstrument;

/// @brief Field <HandType>k__BackingField, offset: 0x8c, size: 0x4, def value: None
 ::VROSC::HandType  ____HandType_k__BackingField;

/// @brief Field <TouchPointTransform>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____TouchPointTransform_k__BackingField;

/// @brief Field _mallet, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::VROSC::Mallet>  ____mallet;

/// @brief Field <InteractionPointTransform>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____InteractionPointTransform_k__BackingField;

/// @brief Field _hoveredColliders, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>  ____hoveredColliders;

/// @brief Field <HoveredInputNodes>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::InputDevice_HoveredInputNode*>*  ____HoveredInputNodes_k__BackingField;

/// @brief Field <HeldInputNodes>k__BackingField, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::InputDevice_HeldInputNode*>*  ____HeldInputNodes_k__BackingField;

/// @brief Field <StickPadValue>k__BackingField, offset: 0xc0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____StickPadValue_k__BackingField;

/// @brief Field <IndexTriggerValue>k__BackingField, offset: 0xc8, size: 0x4, def value: None
 float_t  ____IndexTriggerValue_k__BackingField;

/// @brief Field <GripTriggerValue>k__BackingField, offset: 0xcc, size: 0x4, def value: None
 float_t  ____GripTriggerValue_k__BackingField;

/// @brief Field <TouchpadXAValue>k__BackingField, offset: 0xd0, size: 0x1, def value: None
 bool  ____TouchpadXAValue_k__BackingField;

/// @brief Field <AppMenuYBValue>k__BackingField, offset: 0xd1, size: 0x1, def value: None
 bool  ____AppMenuYBValue_k__BackingField;

/// @brief Field <IndexAsButtonPressed>k__BackingField, offset: 0xd2, size: 0x1, def value: None
 bool  ____IndexAsButtonPressed_k__BackingField;

/// @brief Field <LastIndexAsButtonPressed>k__BackingField, offset: 0xd3, size: 0x1, def value: None
 bool  ____LastIndexAsButtonPressed_k__BackingField;

/// @brief Field <IndexAsButtonEdgeValue>k__BackingField, offset: 0xd4, size: 0x4, def value: None
 float_t  ____IndexAsButtonEdgeValue_k__BackingField;

/// @brief Field <OtherController>k__BackingField, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____OtherController_k__BackingField;

/// @brief Field <AnyButtonTriggering>k__BackingField, offset: 0xe0, size: 0x1, def value: None
 bool  ____AnyButtonTriggering_k__BackingField;

/// @brief Field <Data>k__BackingField, offset: 0xe8, size: 0x8, def value: None
 ::VROSC::InputDeviceTransformData*  ____Data_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InputDevice, ____uIInput) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____inputVisualizer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____centerPoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____predictiveHitter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____keyBoardHitter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____highLight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____tutorial) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____dashboardSpawnPoint) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____recordingUI) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____visualInteraction) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____UIHelpers_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____inputSettings) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____overlapColliderAllocSize) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____overlapSize) == 0x84, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____wasTouchingNode) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____inInstrument) == 0x89, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____HandType_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____TouchPointTransform_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____mallet) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____InteractionPointTransform_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____hoveredColliders) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____HoveredInputNodes_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____HeldInputNodes_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____StickPadValue_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____IndexTriggerValue_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____GripTriggerValue_k__BackingField) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____TouchpadXAValue_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____AppMenuYBValue_k__BackingField) == 0xd1, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____IndexAsButtonPressed_k__BackingField) == 0xd2, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____LastIndexAsButtonPressed_k__BackingField) == 0xd3, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____IndexAsButtonEdgeValue_k__BackingField) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____OtherController_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____AnyButtonTriggering_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDevice, ____Data_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InputDevice, 0xf0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InputDevice);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InputDevice*, "VROSC", "InputDevice");
NEED_NO_BOX(::VROSC::InputDevice_HeldInputNode);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InputDevice_HeldInputNode*, "VROSC", "InputDevice/HeldInputNode");
NEED_NO_BOX(::VROSC::InputDevice_HoveredInputNode);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InputDevice_HoveredInputNode*, "VROSC", "InputDevice/HoveredInputNode");
