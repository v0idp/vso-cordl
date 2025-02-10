#pragma once
// IWYU pragma private; include "VROSC/InputDevice.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "VROSC/zzzz__HandType_impl.hpp"
#include "VROSC/zzzz__TriggerButton_impl.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "VROSC/UI/zzzz__UIInputHand_def.hpp"
#include "VROSC/zzzz__ControllerInputNode_def.hpp"
#include "VROSC/zzzz__ControllerRecordingUI_def.hpp"
#include "VROSC/zzzz__DashboardSpawnPoint_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__HighlightControllerComponents_def.hpp"
#include "VROSC/zzzz__InputDeviceTransformData_def.hpp"
#include "VROSC/zzzz__InputDeviceVisualInteraction_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__InputSettings_def.hpp"
#include "VROSC/zzzz__InputVisualizer_def.hpp"
#include "VROSC/zzzz__KeyHitter_def.hpp"
#include "VROSC/zzzz__Mallet_def.hpp"
#include "VROSC/zzzz__PredictiveHitter_def.hpp"
#include "VROSC/zzzz__SynthController_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
#include "VROSC/zzzz__TutorialInputDevice_def.hpp"
#include "VROSC/zzzz__UIHelpers_def.hpp"
//  Writing Method size for method: ::VROSC::InputDevice_HeldInputNode._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice_HeldInputNode::*)(::VROSC::ControllerInputNode*, ::VROSC::TriggerButton)>(&::VROSC::InputDevice_HeldInputNode::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x188f078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice_HeldInputNode*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ControllerInputNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::ControllerInputNode>& VROSC::InputDevice_HeldInputNode::__cordl_internal_get_InputNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputNode;
}
constexpr ::UnityW<::VROSC::ControllerInputNode> const& VROSC::InputDevice_HeldInputNode::__cordl_internal_get_InputNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputNode;
}
constexpr void VROSC::InputDevice_HeldInputNode::__cordl_internal_set_InputNode(::UnityW<::VROSC::ControllerInputNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InputNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::TriggerButton& VROSC::InputDevice_HeldInputNode::__cordl_internal_get_HoldingButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HoldingButton;
}
constexpr ::VROSC::TriggerButton const& VROSC::InputDevice_HeldInputNode::__cordl_internal_get_HoldingButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HoldingButton;
}
constexpr void VROSC::InputDevice_HeldInputNode::__cordl_internal_set_HoldingButton(::VROSC::TriggerButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HoldingButton = value;
}
inline void VROSC::InputDevice_HeldInputNode::_ctor(::VROSC::ControllerInputNode*  inputNode, ::VROSC::TriggerButton  holdingButton)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice_HeldInputNode*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ControllerInputNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputNode, holdingButton);
}
inline ::VROSC::InputDevice_HeldInputNode* VROSC::InputDevice_HeldInputNode::New_ctor(::VROSC::ControllerInputNode*  inputNode, ::VROSC::TriggerButton  holdingButton)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::InputDevice_HeldInputNode*>(inputNode, holdingButton));
}
// Ctor Parameters []
constexpr ::VROSC::InputDevice_HeldInputNode::InputDevice_HeldInputNode()   {
}
//  Writing Method size for method: ::VROSC::InputDevice_HoveredInputNode._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice_HoveredInputNode::*)(::VROSC::ControllerInputNode*, bool)>(&::VROSC::InputDevice_HoveredInputNode::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x188e978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice_HoveredInputNode*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ControllerInputNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::ControllerInputNode>& VROSC::InputDevice_HoveredInputNode::__cordl_internal_get_InputNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputNode;
}
constexpr ::UnityW<::VROSC::ControllerInputNode> const& VROSC::InputDevice_HoveredInputNode::__cordl_internal_get_InputNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputNode;
}
constexpr void VROSC::InputDevice_HoveredInputNode::__cordl_internal_set_InputNode(::UnityW<::VROSC::ControllerInputNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InputNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::InputDevice_HoveredInputNode::__cordl_internal_get_HoveredThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HoveredThisFrame;
}
constexpr bool const& VROSC::InputDevice_HoveredInputNode::__cordl_internal_get_HoveredThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HoveredThisFrame;
}
constexpr void VROSC::InputDevice_HoveredInputNode::__cordl_internal_set_HoveredThisFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HoveredThisFrame = value;
}
inline void VROSC::InputDevice_HoveredInputNode::_ctor(::VROSC::ControllerInputNode*  inputNode, bool  hoveredThisFrame)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice_HoveredInputNode*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ControllerInputNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputNode, hoveredThisFrame);
}
inline ::VROSC::InputDevice_HoveredInputNode* VROSC::InputDevice_HoveredInputNode::New_ctor(::VROSC::ControllerInputNode*  inputNode, bool  hoveredThisFrame)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::InputDevice_HoveredInputNode*>(inputNode, hoveredThisFrame));
}
// Ctor Parameters []
constexpr ::VROSC::InputDevice_HoveredInputNode::InputDevice_HoveredInputNode()   {
}
//  Writing Method size for method: ::VROSC::InputDevice.get_UIInputHand
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::UI::UIInputHand> (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_UIInputHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188cee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_UIInputHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_UIHelpers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::UIHelpers> (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_UIHelpers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188ceec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_UIHelpers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.set_UIHelpers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(::VROSC::UIHelpers*)>(&::VROSC::InputDevice::set_UIHelpers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188cef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_UIHelpers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UIHelpers*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_HighLighting
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::HighlightControllerComponents> (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_HighLighting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188cefc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_HighLighting",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_Tutorial
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::TutorialInputDevice> (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_Tutorial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188cf04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_Tutorial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_DashboardSpawnPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::DashboardSpawnPoint> (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_DashboardSpawnPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188cf0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_DashboardSpawnPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_RecordingUI
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::ControllerRecordingUI> (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_RecordingUI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188cf14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_RecordingUI",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_InInstrument
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_InInstrument)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188cf1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_InInstrument",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_InteractionPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_InteractionPoint)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x188cf24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_InteractionPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_RayPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_RayPoint)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x188cf40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_RayPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_Visuals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::InputDeviceVisualInteraction> (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_Visuals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188cf5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_Visuals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_GrabDisabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::VROSC::InputDevice::get_GrabDisabled)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x188cf64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_GrabDisabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.set_GrabDisabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::VROSC::InputDevice::set_GrabDisabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x188cfac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_GrabDisabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.set_HandType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(::VROSC::HandType)>(&::VROSC::InputDevice::set_HandType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188cffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_HandType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_HandType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::HandType (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_HandType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_HandType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.set_TouchPointTransform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(::UnityEngine::Transform*)>(&::VROSC::InputDevice::set_TouchPointTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d00c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_TouchPointTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_TouchPointTransform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_TouchPointTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_TouchPointTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_TrackedHandTransform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_TrackedHandTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d01c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_TrackedHandTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_ActivePredictiveHitter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::PredictiveHitter> (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_ActivePredictiveHitter)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x188d024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_ActivePredictiveHitter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.set_InteractionPointTransform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(::UnityEngine::Transform*)>(&::VROSC::InputDevice::set_InteractionPointTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_InteractionPointTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_InteractionPointTransform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_InteractionPointTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d0b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_InteractionPointTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.set_HoveredInputNodes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(::System::Collections::Generic::List_1<::VROSC::InputDevice_HoveredInputNode*>*)>(&::VROSC::InputDevice::set_HoveredInputNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d0c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_HoveredInputNodes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::VROSC::InputDevice_HoveredInputNode*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_HoveredInputNodes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::InputDevice_HoveredInputNode*>* (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_HoveredInputNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d0c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_HoveredInputNodes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.set_HeldInputNodes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(::System::Collections::Generic::List_1<::VROSC::InputDevice_HeldInputNode*>*)>(&::VROSC::InputDevice::set_HeldInputNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d0d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_HeldInputNodes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::VROSC::InputDevice_HeldInputNode*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_HeldInputNodes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::InputDevice_HeldInputNode*>* (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_HeldInputNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_HeldInputNodes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.set_StickPadValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(::UnityEngine::Vector2)>(&::VROSC::InputDevice::set_StickPadValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d0e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_StickPadValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_StickPadValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_StickPadValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d0e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_StickPadValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.set_IndexTriggerValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(float_t)>(&::VROSC::InputDevice::set_IndexTriggerValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d0f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_IndexTriggerValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_IndexTriggerValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_IndexTriggerValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d0f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_IndexTriggerValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.set_GripTriggerValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(float_t)>(&::VROSC::InputDevice::set_GripTriggerValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_GripTriggerValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_GripTriggerValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_GripTriggerValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_GripTriggerValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.set_TouchpadXAValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(bool)>(&::VROSC::InputDevice::set_TouchpadXAValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x188d110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_TouchpadXAValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_TouchpadXAValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_TouchpadXAValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d11c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_TouchpadXAValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.set_AppMenuYBValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(bool)>(&::VROSC::InputDevice::set_AppMenuYBValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x188d124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_AppMenuYBValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_AppMenuYBValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_AppMenuYBValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_AppMenuYBValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.set_IndexAsButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(bool)>(&::VROSC::InputDevice::set_IndexAsButtonPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x188d138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_IndexAsButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_IndexAsButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_IndexAsButtonPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_IndexAsButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.set_LastIndexAsButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(bool)>(&::VROSC::InputDevice::set_LastIndexAsButtonPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x188d14c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_LastIndexAsButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_LastIndexAsButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_LastIndexAsButtonPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_LastIndexAsButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.set_IndexAsButtonEdgeValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(float_t)>(&::VROSC::InputDevice::set_IndexAsButtonEdgeValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_IndexAsButtonEdgeValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_IndexAsButtonEdgeValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_IndexAsButtonEdgeValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_IndexAsButtonEdgeValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.set_OtherController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(::VROSC::InputDevice*)>(&::VROSC::InputDevice::set_OtherController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_OtherController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_OtherController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::InputDevice> (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_OtherController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_OtherController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.set_AnyButtonTriggering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(bool)>(&::VROSC::InputDevice::set_AnyButtonTriggering)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x188d180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_AnyButtonTriggering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_AnyButtonTriggering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_AnyButtonTriggering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d18c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_AnyButtonTriggering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.set_Data
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(::VROSC::InputDeviceTransformData*)>(&::VROSC::InputDevice::set_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDeviceTransformData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.get_Data
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::InputDeviceTransformData* (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d19c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(::VROSC::InputSettings*, ::VROSC::InputDevice*, ::VROSC::HandType, ::VROSC::UIHelpers*)>(&::VROSC::InputDevice::Setup)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x188d1a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UIHelpers*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.AssignMallet
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(::VROSC::Mallet*)>(&::VROSC::InputDevice::AssignMallet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188d464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "AssignMallet",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Mallet*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.UpdateDevice
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::UpdateDevice)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x188d46c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "UpdateDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.UpdateButtonValues
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::UpdateButtonValues)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x188d4a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "UpdateButtonValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.UpdateIndexAsButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(float_t)>(&::VROSC::InputDevice::UpdateIndexAsButtonPressed)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x188d90c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "UpdateIndexAsButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.UpdateInputNodes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::UpdateInputNodes)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x188d6b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "UpdateInputNodes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.CheckForTouchedNodes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::CheckForTouchedNodes)> {
  constexpr static std::size_t size = 0x740;
  constexpr static std::size_t addrs = 0x188d984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "CheckForTouchedNodes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.ShouldHaveInteractionBar
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::InputDevice::*)(::VROSC::SynthController*)>(&::VROSC::InputDevice::ShouldHaveInteractionBar)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x188eb88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "ShouldHaveInteractionBar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SynthController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.SetFrameInteraction
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(bool, bool)>(&::VROSC::InputDevice::SetFrameInteraction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x188eb68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "SetFrameInteraction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.SetMalletActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(bool, ::VROSC::Mallet*, bool)>(&::VROSC::InputDevice::SetMalletActive)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x188eda4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "SetMalletActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Mallet*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.SetKeyHittersActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(bool)>(&::VROSC::InputDevice::SetKeyHittersActive)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x188d3f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "SetKeyHittersActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.ShouldHoveredNodesDisableGrab
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::ShouldHoveredNodesDisableGrab)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x188eddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "ShouldHoveredNodesDisableGrab",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.SetSliderValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)(float_t)>(&::VROSC::InputDevice::SetSliderValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x188ef58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "SetSliderValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice.DisableGrab
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::VROSC::InputDevice::DisableGrab)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x188efa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "DisableGrab",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputDevice._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputDevice::*)()>(&::VROSC::InputDevice::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x188f060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::UI::UIInputHand>& VROSC::InputDevice::__cordl_internal_get__uIInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uIInput;
}
constexpr ::UnityW<::VROSC::UI::UIInputHand> const& VROSC::InputDevice::__cordl_internal_get__uIInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uIInput;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__uIInput(::UnityW<::VROSC::UI::UIInputHand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uIInput)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InputVisualizer>& VROSC::InputDevice::__cordl_internal_get__inputVisualizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputVisualizer;
}
constexpr ::UnityW<::VROSC::InputVisualizer> const& VROSC::InputDevice::__cordl_internal_get__inputVisualizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputVisualizer;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__inputVisualizer(::UnityW<::VROSC::InputVisualizer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputVisualizer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::InputDevice::__cordl_internal_get__centerPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____centerPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::InputDevice::__cordl_internal_get__centerPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____centerPoint;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__centerPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____centerPoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::PredictiveHitter>& VROSC::InputDevice::__cordl_internal_get__predictiveHitter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____predictiveHitter;
}
constexpr ::UnityW<::VROSC::PredictiveHitter> const& VROSC::InputDevice::__cordl_internal_get__predictiveHitter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____predictiveHitter;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__predictiveHitter(::UnityW<::VROSC::PredictiveHitter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____predictiveHitter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::KeyHitter>& VROSC::InputDevice::__cordl_internal_get__keyBoardHitter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyBoardHitter;
}
constexpr ::UnityW<::VROSC::KeyHitter> const& VROSC::InputDevice::__cordl_internal_get__keyBoardHitter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyBoardHitter;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__keyBoardHitter(::UnityW<::VROSC::KeyHitter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keyBoardHitter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::HighlightControllerComponents>& VROSC::InputDevice::__cordl_internal_get__highLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highLight;
}
constexpr ::UnityW<::VROSC::HighlightControllerComponents> const& VROSC::InputDevice::__cordl_internal_get__highLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highLight;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__highLight(::UnityW<::VROSC::HighlightControllerComponents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____highLight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::TutorialInputDevice>& VROSC::InputDevice::__cordl_internal_get__tutorial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tutorial;
}
constexpr ::UnityW<::VROSC::TutorialInputDevice> const& VROSC::InputDevice::__cordl_internal_get__tutorial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tutorial;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__tutorial(::UnityW<::VROSC::TutorialInputDevice>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tutorial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::DashboardSpawnPoint>& VROSC::InputDevice::__cordl_internal_get__dashboardSpawnPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dashboardSpawnPoint;
}
constexpr ::UnityW<::VROSC::DashboardSpawnPoint> const& VROSC::InputDevice::__cordl_internal_get__dashboardSpawnPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dashboardSpawnPoint;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__dashboardSpawnPoint(::UnityW<::VROSC::DashboardSpawnPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dashboardSpawnPoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ControllerRecordingUI>& VROSC::InputDevice::__cordl_internal_get__recordingUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingUI;
}
constexpr ::UnityW<::VROSC::ControllerRecordingUI> const& VROSC::InputDevice::__cordl_internal_get__recordingUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingUI;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__recordingUI(::UnityW<::VROSC::ControllerRecordingUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recordingUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InputDeviceVisualInteraction>& VROSC::InputDevice::__cordl_internal_get__visualInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visualInteraction;
}
constexpr ::UnityW<::VROSC::InputDeviceVisualInteraction> const& VROSC::InputDevice::__cordl_internal_get__visualInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visualInteraction;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__visualInteraction(::UnityW<::VROSC::InputDeviceVisualInteraction>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____visualInteraction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIHelpers>& VROSC::InputDevice::__cordl_internal_get__UIHelpers_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UIHelpers_k__BackingField;
}
constexpr ::UnityW<::VROSC::UIHelpers> const& VROSC::InputDevice::__cordl_internal_get__UIHelpers_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UIHelpers_k__BackingField;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__UIHelpers_k__BackingField(::UnityW<::VROSC::UIHelpers>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____UIHelpers_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InputSettings>& VROSC::InputDevice::__cordl_internal_get__inputSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputSettings;
}
constexpr ::UnityW<::VROSC::InputSettings> const& VROSC::InputDevice::__cordl_internal_get__inputSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputSettings;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__inputSettings(::UnityW<::VROSC::InputSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::InputDevice::__cordl_internal_get__overlapColliderAllocSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlapColliderAllocSize;
}
constexpr int32_t const& VROSC::InputDevice::__cordl_internal_get__overlapColliderAllocSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlapColliderAllocSize;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__overlapColliderAllocSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overlapColliderAllocSize = value;
}
constexpr float_t& VROSC::InputDevice::__cordl_internal_get__overlapSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlapSize;
}
constexpr float_t const& VROSC::InputDevice::__cordl_internal_get__overlapSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlapSize;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__overlapSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overlapSize = value;
}
constexpr bool& VROSC::InputDevice::__cordl_internal_get__wasTouchingNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasTouchingNode;
}
constexpr bool const& VROSC::InputDevice::__cordl_internal_get__wasTouchingNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasTouchingNode;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__wasTouchingNode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasTouchingNode = value;
}
constexpr bool& VROSC::InputDevice::__cordl_internal_get__inInstrument()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inInstrument;
}
constexpr bool const& VROSC::InputDevice::__cordl_internal_get__inInstrument() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inInstrument;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__inInstrument(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inInstrument = value;
}
constexpr ::VROSC::HandType& VROSC::InputDevice::__cordl_internal_get__HandType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HandType_k__BackingField;
}
constexpr ::VROSC::HandType const& VROSC::InputDevice::__cordl_internal_get__HandType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HandType_k__BackingField;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__HandType_k__BackingField(::VROSC::HandType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HandType_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::InputDevice::__cordl_internal_get__TouchPointTransform_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TouchPointTransform_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::InputDevice::__cordl_internal_get__TouchPointTransform_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TouchPointTransform_k__BackingField;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__TouchPointTransform_k__BackingField(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TouchPointTransform_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::Mallet>& VROSC::InputDevice::__cordl_internal_get__mallet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mallet;
}
constexpr ::UnityW<::VROSC::Mallet> const& VROSC::InputDevice::__cordl_internal_get__mallet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mallet;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__mallet(::UnityW<::VROSC::Mallet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mallet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::InputDevice::__cordl_internal_get__InteractionPointTransform_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InteractionPointTransform_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::InputDevice::__cordl_internal_get__InteractionPointTransform_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InteractionPointTransform_k__BackingField;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__InteractionPointTransform_k__BackingField(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____InteractionPointTransform_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>& VROSC::InputDevice::__cordl_internal_get__hoveredColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoveredColliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> const& VROSC::InputDevice::__cordl_internal_get__hoveredColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoveredColliders;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__hoveredColliders(::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hoveredColliders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::InputDevice_HoveredInputNode*>*& VROSC::InputDevice::__cordl_internal_get__HoveredInputNodes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HoveredInputNodes_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::InputDevice_HoveredInputNode*>* const& VROSC::InputDevice::__cordl_internal_get__HoveredInputNodes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HoveredInputNodes_k__BackingField;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__HoveredInputNodes_k__BackingField(::System::Collections::Generic::List_1<::VROSC::InputDevice_HoveredInputNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____HoveredInputNodes_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::InputDevice_HeldInputNode*>*& VROSC::InputDevice::__cordl_internal_get__HeldInputNodes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HeldInputNodes_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::InputDevice_HeldInputNode*>* const& VROSC::InputDevice::__cordl_internal_get__HeldInputNodes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HeldInputNodes_k__BackingField;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__HeldInputNodes_k__BackingField(::System::Collections::Generic::List_1<::VROSC::InputDevice_HeldInputNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____HeldInputNodes_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& VROSC::InputDevice::__cordl_internal_get__StickPadValue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StickPadValue_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& VROSC::InputDevice::__cordl_internal_get__StickPadValue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StickPadValue_k__BackingField;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__StickPadValue_k__BackingField(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StickPadValue_k__BackingField = value;
}
constexpr float_t& VROSC::InputDevice::__cordl_internal_get__IndexTriggerValue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IndexTriggerValue_k__BackingField;
}
constexpr float_t const& VROSC::InputDevice::__cordl_internal_get__IndexTriggerValue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IndexTriggerValue_k__BackingField;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__IndexTriggerValue_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IndexTriggerValue_k__BackingField = value;
}
constexpr float_t& VROSC::InputDevice::__cordl_internal_get__GripTriggerValue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GripTriggerValue_k__BackingField;
}
constexpr float_t const& VROSC::InputDevice::__cordl_internal_get__GripTriggerValue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GripTriggerValue_k__BackingField;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__GripTriggerValue_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GripTriggerValue_k__BackingField = value;
}
constexpr bool& VROSC::InputDevice::__cordl_internal_get__TouchpadXAValue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TouchpadXAValue_k__BackingField;
}
constexpr bool const& VROSC::InputDevice::__cordl_internal_get__TouchpadXAValue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TouchpadXAValue_k__BackingField;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__TouchpadXAValue_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TouchpadXAValue_k__BackingField = value;
}
constexpr bool& VROSC::InputDevice::__cordl_internal_get__AppMenuYBValue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AppMenuYBValue_k__BackingField;
}
constexpr bool const& VROSC::InputDevice::__cordl_internal_get__AppMenuYBValue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AppMenuYBValue_k__BackingField;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__AppMenuYBValue_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AppMenuYBValue_k__BackingField = value;
}
constexpr bool& VROSC::InputDevice::__cordl_internal_get__IndexAsButtonPressed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IndexAsButtonPressed_k__BackingField;
}
constexpr bool const& VROSC::InputDevice::__cordl_internal_get__IndexAsButtonPressed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IndexAsButtonPressed_k__BackingField;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__IndexAsButtonPressed_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IndexAsButtonPressed_k__BackingField = value;
}
constexpr bool& VROSC::InputDevice::__cordl_internal_get__LastIndexAsButtonPressed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastIndexAsButtonPressed_k__BackingField;
}
constexpr bool const& VROSC::InputDevice::__cordl_internal_get__LastIndexAsButtonPressed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastIndexAsButtonPressed_k__BackingField;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__LastIndexAsButtonPressed_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastIndexAsButtonPressed_k__BackingField = value;
}
constexpr float_t& VROSC::InputDevice::__cordl_internal_get__IndexAsButtonEdgeValue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IndexAsButtonEdgeValue_k__BackingField;
}
constexpr float_t const& VROSC::InputDevice::__cordl_internal_get__IndexAsButtonEdgeValue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IndexAsButtonEdgeValue_k__BackingField;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__IndexAsButtonEdgeValue_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IndexAsButtonEdgeValue_k__BackingField = value;
}
constexpr ::UnityW<::VROSC::InputDevice>& VROSC::InputDevice::__cordl_internal_get__OtherController_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OtherController_k__BackingField;
}
constexpr ::UnityW<::VROSC::InputDevice> const& VROSC::InputDevice::__cordl_internal_get__OtherController_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OtherController_k__BackingField;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__OtherController_k__BackingField(::UnityW<::VROSC::InputDevice>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____OtherController_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::InputDevice::__cordl_internal_get__AnyButtonTriggering_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnyButtonTriggering_k__BackingField;
}
constexpr bool const& VROSC::InputDevice::__cordl_internal_get__AnyButtonTriggering_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnyButtonTriggering_k__BackingField;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__AnyButtonTriggering_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AnyButtonTriggering_k__BackingField = value;
}
constexpr ::VROSC::InputDeviceTransformData*& VROSC::InputDevice::__cordl_internal_get__Data_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
constexpr ::VROSC::InputDeviceTransformData* const& VROSC::InputDevice::__cordl_internal_get__Data_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
constexpr void VROSC::InputDevice::__cordl_internal_set__Data_k__BackingField(::VROSC::InputDeviceTransformData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Data_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::InputDevice::setStaticF__GrabDisabled_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<GrabDisabled>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get>(std::forward<bool>(value));
}
inline bool VROSC::InputDevice::getStaticF__GrabDisabled_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<GrabDisabled>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get>();
}
inline void VROSC::InputDevice::setStaticF_GrabDisabledChanged(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "GrabDisabledChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* VROSC::InputDevice::getStaticF_GrabDisabledChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "GrabDisabledChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get>();
}
inline ::UnityW<::VROSC::UI::UIInputHand> VROSC::InputDevice::get_UIInputHand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_UIInputHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::UI::UIInputHand>, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::UIHelpers> VROSC::InputDevice::get_UIHelpers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_UIHelpers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::UIHelpers>, false>(this, ___internal_method);
}
inline void VROSC::InputDevice::set_UIHelpers(::VROSC::UIHelpers*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_UIHelpers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UIHelpers*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::VROSC::HighlightControllerComponents> VROSC::InputDevice::get_HighLighting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_HighLighting",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::HighlightControllerComponents>, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::TutorialInputDevice> VROSC::InputDevice::get_Tutorial()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_Tutorial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::TutorialInputDevice>, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::DashboardSpawnPoint> VROSC::InputDevice::get_DashboardSpawnPoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_DashboardSpawnPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::DashboardSpawnPoint>, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::ControllerRecordingUI> VROSC::InputDevice::get_RecordingUI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_RecordingUI",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::ControllerRecordingUI>, false>(this, ___internal_method);
}
inline bool VROSC::InputDevice::get_InInstrument()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_InInstrument",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> VROSC::InputDevice::get_InteractionPoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_InteractionPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> VROSC::InputDevice::get_RayPoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_RayPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::InputDeviceVisualInteraction> VROSC::InputDevice::get_Visuals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_Visuals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::InputDeviceVisualInteraction>, false>(this, ___internal_method);
}
inline bool VROSC::InputDevice::get_GrabDisabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_GrabDisabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void VROSC::InputDevice::set_GrabDisabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_GrabDisabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void VROSC::InputDevice::set_HandType(::VROSC::HandType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_HandType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::HandType VROSC::InputDevice::get_HandType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_HandType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::HandType, false>(this, ___internal_method);
}
inline void VROSC::InputDevice::set_TouchPointTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_TouchPointTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> VROSC::InputDevice::get_TouchPointTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_TouchPointTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> VROSC::InputDevice::get_TrackedHandTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_TrackedHandTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::PredictiveHitter> VROSC::InputDevice::get_ActivePredictiveHitter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_ActivePredictiveHitter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::PredictiveHitter>, false>(this, ___internal_method);
}
inline void VROSC::InputDevice::set_InteractionPointTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_InteractionPointTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> VROSC::InputDevice::get_InteractionPointTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_InteractionPointTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline void VROSC::InputDevice::set_HoveredInputNodes(::System::Collections::Generic::List_1<::VROSC::InputDevice_HoveredInputNode*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_HoveredInputNodes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::VROSC::InputDevice_HoveredInputNode*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::VROSC::InputDevice_HoveredInputNode*>* VROSC::InputDevice::get_HoveredInputNodes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_HoveredInputNodes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::VROSC::InputDevice_HoveredInputNode*>*, false>(this, ___internal_method);
}
inline void VROSC::InputDevice::set_HeldInputNodes(::System::Collections::Generic::List_1<::VROSC::InputDevice_HeldInputNode*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_HeldInputNodes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::VROSC::InputDevice_HeldInputNode*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::VROSC::InputDevice_HeldInputNode*>* VROSC::InputDevice::get_HeldInputNodes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_HeldInputNodes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::VROSC::InputDevice_HeldInputNode*>*, false>(this, ___internal_method);
}
inline void VROSC::InputDevice::set_StickPadValue(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_StickPadValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 VROSC::InputDevice::get_StickPadValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_StickPadValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void VROSC::InputDevice::set_IndexTriggerValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_IndexTriggerValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t VROSC::InputDevice::get_IndexTriggerValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_IndexTriggerValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::InputDevice::set_GripTriggerValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_GripTriggerValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t VROSC::InputDevice::get_GripTriggerValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_GripTriggerValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::InputDevice::set_TouchpadXAValue(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_TouchpadXAValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::InputDevice::get_TouchpadXAValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_TouchpadXAValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::InputDevice::set_AppMenuYBValue(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_AppMenuYBValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::InputDevice::get_AppMenuYBValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_AppMenuYBValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::InputDevice::set_IndexAsButtonPressed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_IndexAsButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::InputDevice::get_IndexAsButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_IndexAsButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::InputDevice::set_LastIndexAsButtonPressed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_LastIndexAsButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::InputDevice::get_LastIndexAsButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_LastIndexAsButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::InputDevice::set_IndexAsButtonEdgeValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_IndexAsButtonEdgeValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t VROSC::InputDevice::get_IndexAsButtonEdgeValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_IndexAsButtonEdgeValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::InputDevice::set_OtherController(::VROSC::InputDevice*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_OtherController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::VROSC::InputDevice> VROSC::InputDevice::get_OtherController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_OtherController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::InputDevice>, false>(this, ___internal_method);
}
inline void VROSC::InputDevice::set_AnyButtonTriggering(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_AnyButtonTriggering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::InputDevice::get_AnyButtonTriggering()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_AnyButtonTriggering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::InputDevice::set_Data(::VROSC::InputDeviceTransformData*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "set_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDeviceTransformData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::InputDeviceTransformData* VROSC::InputDevice::get_Data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "get_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::InputDeviceTransformData*, false>(this, ___internal_method);
}
inline void VROSC::InputDevice::Setup(::VROSC::InputSettings*  inputSettings, ::VROSC::InputDevice*  other, ::VROSC::HandType  handtype, ::VROSC::UIHelpers*  uiHelpers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UIHelpers*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputSettings, other, handtype, uiHelpers);
}
inline void VROSC::InputDevice::AssignMallet(::VROSC::Mallet*  mallet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "AssignMallet",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Mallet*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mallet);
}
inline void VROSC::InputDevice::UpdateDevice()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "UpdateDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::InputDevice::UpdateButtonValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "UpdateButtonValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::InputDevice::UpdateIndexAsButtonPressed(float_t  indexTriggerValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "UpdateIndexAsButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexTriggerValue);
}
inline void VROSC::InputDevice::UpdateInputNodes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "UpdateInputNodes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::InputDevice::CheckForTouchedNodes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "CheckForTouchedNodes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool VROSC::InputDevice::ShouldHaveInteractionBar(::VROSC::SynthController*  synthController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "ShouldHaveInteractionBar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SynthController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, synthController);
}
inline void VROSC::InputDevice::SetFrameInteraction(bool  enter, bool  fade)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "SetFrameInteraction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enter, fade);
}
inline void VROSC::InputDevice::SetMalletActive(bool  enabled, ::VROSC::Mallet*  mallet, bool  endOfAnimation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "SetMalletActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Mallet*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enabled, mallet, endOfAnimation);
}
inline void VROSC::InputDevice::SetKeyHittersActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "SetKeyHittersActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, active);
}
inline bool VROSC::InputDevice::ShouldHoveredNodesDisableGrab()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "ShouldHoveredNodesDisableGrab",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::InputDevice::SetSliderValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "SetSliderValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::InputDevice::DisableGrab(bool  disable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        "DisableGrab",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, disable);
}
inline void VROSC::InputDevice::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputDevice*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::InputDevice* VROSC::InputDevice::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::InputDevice*>());
}
// Ctor Parameters []
constexpr ::VROSC::InputDevice::InputDevice()   {
}
