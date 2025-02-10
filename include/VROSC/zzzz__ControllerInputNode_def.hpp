#pragma once
// IWYU pragma private; include "VROSC/ControllerInputNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__Node_def.hpp"
CORDL_MODULE_EXPORT(ControllerInputNode)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
class Collider;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class SignalControllerInfo;
}
namespace VROSC {
class SignalNode;
}
namespace VROSC {
struct TriggerButton;
}
// Forward declare root types
namespace VROSC {
class ControllerInputNode;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ControllerInputNode);
// Dependencies VROSC.Node
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ControllerInputNode
class CORDL_TYPE ControllerInputNode : public ::VROSC::Node {
public:
// Declarations
 __declspec(property(get=get_DisablePointing)) bool  DisablePointing;

 __declspec(property(get=get_DisablesGrip)) bool  DisablesGrip;

 __declspec(property(get=get_HasGripOutputs)) bool  HasGripOutputs;

/// @brief Field OnHoverBegin, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHoverBegin, put=__cordl_internal_set_OnHoverBegin)) ::System::Action_1<::UnityW<::VROSC::InputDevice>>*  OnHoverBegin;

/// @brief Field OnHoverEnd, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHoverEnd, put=__cordl_internal_set_OnHoverEnd)) ::System::Action_1<::UnityW<::VROSC::InputDevice>>*  OnHoverEnd;

/// @brief Field OnHoverStay, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHoverStay, put=__cordl_internal_set_OnHoverStay)) ::System::Action_1<::UnityW<::VROSC::InputDevice>>*  OnHoverStay;

/// @brief Field OnPressBegin, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPressBegin, put=__cordl_internal_set_OnPressBegin)) ::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*  OnPressBegin;

/// @brief Field OnPressEnd, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPressEnd, put=__cordl_internal_set_OnPressEnd)) ::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*  OnPressEnd;

/// @brief Field OnPressStay, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPressStay, put=__cordl_internal_set_OnPressStay)) ::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*  OnPressStay;

/// @brief Field _collider, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__collider, put=__cordl_internal_set__collider)) ::UnityW<::UnityEngine::Collider>  _collider;

/// @brief Field _disablePointing, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__disablePointing, put=__cordl_internal_set__disablePointing)) bool  _disablePointing;

/// @brief Field _disablesGrip, offset 0xb2, size 0x1 
 __declspec(property(get=__cordl_internal_get__disablesGrip, put=__cordl_internal_set__disablesGrip)) bool  _disablesGrip;

/// @brief Field _leftAppMenuYBOutput, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftAppMenuYBOutput, put=__cordl_internal_set__leftAppMenuYBOutput)) ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  _leftAppMenuYBOutput;

/// @brief Field _leftGripOutput, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftGripOutput, put=__cordl_internal_set__leftGripOutput)) ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  _leftGripOutput;

/// @brief Field _leftHoverOutput, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftHoverOutput, put=__cordl_internal_set__leftHoverOutput)) ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  _leftHoverOutput;

/// @brief Field _leftTouchpadXAOutput, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftTouchpadXAOutput, put=__cordl_internal_set__leftTouchpadXAOutput)) ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  _leftTouchpadXAOutput;

/// @brief Field _leftTriggerOutput, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftTriggerOutput, put=__cordl_internal_set__leftTriggerOutput)) ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  _leftTriggerOutput;

/// @brief Field _pointGripOnly, offset 0xb1, size 0x1 
 __declspec(property(get=__cordl_internal_get__pointGripOnly, put=__cordl_internal_set__pointGripOnly)) bool  _pointGripOnly;

/// @brief Field _rightAppMenuYBOutput, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightAppMenuYBOutput, put=__cordl_internal_set__rightAppMenuYBOutput)) ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  _rightAppMenuYBOutput;

/// @brief Field _rightGripOutput, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightGripOutput, put=__cordl_internal_set__rightGripOutput)) ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  _rightGripOutput;

/// @brief Field _rightHoverOutput, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightHoverOutput, put=__cordl_internal_set__rightHoverOutput)) ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  _rightHoverOutput;

/// @brief Field _rightTouchpadXAOutput, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightTouchpadXAOutput, put=__cordl_internal_set__rightTouchpadXAOutput)) ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  _rightTouchpadXAOutput;

/// @brief Field _rightTriggerOutput, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightTriggerOutput, put=__cordl_internal_set__rightTriggerOutput)) ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  _rightTriggerOutput;

/// @brief Field _useColliderScale, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get__useColliderScale, put=__cordl_internal_set__useColliderScale)) bool  _useColliderScale;

/// @brief Method ButtonTriggerBegin, addr 0x1722b48, size 0x1b8, virtual false, abstract: false, final false
inline void ButtonTriggerBegin(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  triggerButton) ;

/// @brief Method ButtonTriggerEnd, addr 0x1722eb8, size 0x1c, virtual false, abstract: false, final false
inline void ButtonTriggerEnd(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  triggerButton) ;

/// @brief Method ButtonTriggerStay, addr 0x1722d00, size 0x1b8, virtual false, abstract: false, final false
inline void ButtonTriggerStay(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  triggerButton) ;

/// @brief Method GetOutputNodes, addr 0x17228c8, size 0xbc, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*> GetOutputNodes(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  triggerButton) ;

/// @brief Method GetSignalControllerInfo, addr 0x1722768, size 0x160, virtual false, abstract: false, final false
inline ::VROSC::SignalControllerInfo* GetSignalControllerInfo(::VROSC::InputDevice*  device) ;

/// @brief Method HoverBegin, addr 0x17225c0, size 0x1a8, virtual false, abstract: false, final false
inline void HoverBegin(::VROSC::InputDevice*  device) ;

/// @brief Method HoverEnd, addr 0x1722b2c, size 0x1c, virtual false, abstract: false, final false
inline void HoverEnd(::VROSC::InputDevice*  device) ;

/// @brief Method HoverStay, addr 0x1722984, size 0x1a8, virtual false, abstract: false, final false
inline void HoverStay(::VROSC::InputDevice*  device) ;

static inline ::VROSC::ControllerInputNode* New_ctor() ;

/// @brief Method Start, addr 0x1722518, size 0xa8, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::System::Action_1<::UnityW<::VROSC::InputDevice>>* const& __cordl_internal_get_OnHoverBegin() const;

constexpr ::System::Action_1<::UnityW<::VROSC::InputDevice>>*& __cordl_internal_get_OnHoverBegin() ;

constexpr ::System::Action_1<::UnityW<::VROSC::InputDevice>>* const& __cordl_internal_get_OnHoverEnd() const;

constexpr ::System::Action_1<::UnityW<::VROSC::InputDevice>>*& __cordl_internal_get_OnHoverEnd() ;

constexpr ::System::Action_1<::UnityW<::VROSC::InputDevice>>* const& __cordl_internal_get_OnHoverStay() const;

constexpr ::System::Action_1<::UnityW<::VROSC::InputDevice>>*& __cordl_internal_get_OnHoverStay() ;

constexpr ::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>* const& __cordl_internal_get_OnPressBegin() const;

constexpr ::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*& __cordl_internal_get_OnPressBegin() ;

constexpr ::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>* const& __cordl_internal_get_OnPressEnd() const;

constexpr ::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*& __cordl_internal_get_OnPressEnd() ;

constexpr ::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>* const& __cordl_internal_get_OnPressStay() const;

constexpr ::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*& __cordl_internal_get_OnPressStay() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__collider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__collider() ;

constexpr bool const& __cordl_internal_get__disablePointing() const;

constexpr bool& __cordl_internal_get__disablePointing() ;

constexpr bool const& __cordl_internal_get__disablesGrip() const;

constexpr bool& __cordl_internal_get__disablesGrip() ;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*> const& __cordl_internal_get__leftAppMenuYBOutput() const;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>& __cordl_internal_get__leftAppMenuYBOutput() ;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*> const& __cordl_internal_get__leftGripOutput() const;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>& __cordl_internal_get__leftGripOutput() ;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*> const& __cordl_internal_get__leftHoverOutput() const;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>& __cordl_internal_get__leftHoverOutput() ;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*> const& __cordl_internal_get__leftTouchpadXAOutput() const;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>& __cordl_internal_get__leftTouchpadXAOutput() ;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*> const& __cordl_internal_get__leftTriggerOutput() const;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>& __cordl_internal_get__leftTriggerOutput() ;

constexpr bool const& __cordl_internal_get__pointGripOnly() const;

constexpr bool& __cordl_internal_get__pointGripOnly() ;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*> const& __cordl_internal_get__rightAppMenuYBOutput() const;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>& __cordl_internal_get__rightAppMenuYBOutput() ;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*> const& __cordl_internal_get__rightGripOutput() const;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>& __cordl_internal_get__rightGripOutput() ;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*> const& __cordl_internal_get__rightHoverOutput() const;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>& __cordl_internal_get__rightHoverOutput() ;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*> const& __cordl_internal_get__rightTouchpadXAOutput() const;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>& __cordl_internal_get__rightTouchpadXAOutput() ;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*> const& __cordl_internal_get__rightTriggerOutput() const;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>& __cordl_internal_get__rightTriggerOutput() ;

constexpr bool const& __cordl_internal_get__useColliderScale() const;

constexpr bool& __cordl_internal_get__useColliderScale() ;

constexpr void __cordl_internal_set_OnHoverBegin(::System::Action_1<::UnityW<::VROSC::InputDevice>>*  value) ;

constexpr void __cordl_internal_set_OnHoverEnd(::System::Action_1<::UnityW<::VROSC::InputDevice>>*  value) ;

constexpr void __cordl_internal_set_OnHoverStay(::System::Action_1<::UnityW<::VROSC::InputDevice>>*  value) ;

constexpr void __cordl_internal_set_OnPressBegin(::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*  value) ;

constexpr void __cordl_internal_set_OnPressEnd(::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*  value) ;

constexpr void __cordl_internal_set_OnPressStay(::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*  value) ;

constexpr void __cordl_internal_set__collider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set__disablePointing(bool  value) ;

constexpr void __cordl_internal_set__disablesGrip(bool  value) ;

constexpr void __cordl_internal_set__leftAppMenuYBOutput(::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  value) ;

constexpr void __cordl_internal_set__leftGripOutput(::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  value) ;

constexpr void __cordl_internal_set__leftHoverOutput(::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  value) ;

constexpr void __cordl_internal_set__leftTouchpadXAOutput(::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  value) ;

constexpr void __cordl_internal_set__leftTriggerOutput(::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  value) ;

constexpr void __cordl_internal_set__pointGripOnly(bool  value) ;

constexpr void __cordl_internal_set__rightAppMenuYBOutput(::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  value) ;

constexpr void __cordl_internal_set__rightGripOutput(::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  value) ;

constexpr void __cordl_internal_set__rightHoverOutput(::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  value) ;

constexpr void __cordl_internal_set__rightTouchpadXAOutput(::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  value) ;

constexpr void __cordl_internal_set__rightTriggerOutput(::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  value) ;

constexpr void __cordl_internal_set__useColliderScale(bool  value) ;

/// @brief Method .ctor, addr 0x1722ed4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DisablePointing, addr 0x17224cc, size 0x8, virtual false, abstract: false, final false
inline bool get_DisablePointing() ;

/// @brief Method get_DisablesGrip, addr 0x1722510, size 0x8, virtual false, abstract: false, final false
inline bool get_DisablesGrip() ;

/// @brief Method get_HasGripOutputs, addr 0x17224d4, size 0x3c, virtual false, abstract: false, final false
inline bool get_HasGripOutputs() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerInputNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerInputNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerInputNode(ControllerInputNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerInputNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerInputNode(ControllerInputNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{999};

/// @brief Field OnHoverBegin, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::InputDevice>>*  ___OnHoverBegin;

/// @brief Field OnHoverStay, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::InputDevice>>*  ___OnHoverStay;

/// @brief Field OnHoverEnd, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::InputDevice>>*  ___OnHoverEnd;

/// @brief Field OnPressBegin, offset: 0x38, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*  ___OnPressBegin;

/// @brief Field OnPressStay, offset: 0x40, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*  ___OnPressStay;

/// @brief Field OnPressEnd, offset: 0x48, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*  ___OnPressEnd;

/// @brief Field _leftHoverOutput, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  ____leftHoverOutput;

/// @brief Field _rightHoverOutput, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  ____rightHoverOutput;

/// @brief Field _leftTriggerOutput, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  ____leftTriggerOutput;

/// @brief Field _rightTriggerOutput, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  ____rightTriggerOutput;

/// @brief Field _leftGripOutput, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  ____leftGripOutput;

/// @brief Field _rightGripOutput, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  ____rightGripOutput;

/// @brief Field _leftTouchpadXAOutput, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  ____leftTouchpadXAOutput;

/// @brief Field _rightTouchpadXAOutput, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  ____rightTouchpadXAOutput;

/// @brief Field _leftAppMenuYBOutput, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  ____leftAppMenuYBOutput;

/// @brief Field _rightAppMenuYBOutput, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  ____rightAppMenuYBOutput;

/// @brief Field _useColliderScale, offset: 0xa0, size: 0x1, def value: None
 bool  ____useColliderScale;

/// @brief Field _collider, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____collider;

/// @brief Field _disablePointing, offset: 0xb0, size: 0x1, def value: None
 bool  ____disablePointing;

/// @brief Field _pointGripOnly, offset: 0xb1, size: 0x1, def value: None
 bool  ____pointGripOnly;

/// @brief Field _disablesGrip, offset: 0xb2, size: 0x1, def value: None
 bool  ____disablesGrip;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ControllerInputNode, ___OnHoverBegin) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerInputNode, ___OnHoverStay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerInputNode, ___OnHoverEnd) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerInputNode, ___OnPressBegin) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerInputNode, ___OnPressStay) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerInputNode, ___OnPressEnd) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerInputNode, ____leftHoverOutput) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerInputNode, ____rightHoverOutput) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerInputNode, ____leftTriggerOutput) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerInputNode, ____rightTriggerOutput) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerInputNode, ____leftGripOutput) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerInputNode, ____rightGripOutput) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerInputNode, ____leftTouchpadXAOutput) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerInputNode, ____rightTouchpadXAOutput) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerInputNode, ____leftAppMenuYBOutput) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerInputNode, ____rightAppMenuYBOutput) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerInputNode, ____useColliderScale) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerInputNode, ____collider) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerInputNode, ____disablePointing) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerInputNode, ____pointGripOnly) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerInputNode, ____disablesGrip) == 0xb2, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ControllerInputNode, 0xb8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ControllerInputNode);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ControllerInputNode*, "VROSC", "ControllerInputNode");
