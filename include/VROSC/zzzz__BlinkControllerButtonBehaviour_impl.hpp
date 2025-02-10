#pragma once
// IWYU pragma private; include "VROSC/BlinkControllerButtonBehaviour.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "VROSC/zzzz__HandType_impl.hpp"
#include "VROSC/zzzz__TriggerButton_impl.hpp"
#include "VROSC/zzzz__BlinkControllerButtonBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__BlinkControllerButtonBehaviour_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
#include "VROSC/zzzz__TutorialEvent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction::BlinkControllerButtonBehaviour_EventAction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction::BlinkControllerButtonBehaviour_EventAction()   {
}
constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction  VROSC::BlinkControllerButtonBehaviour_EventAction::Nothing{static_cast<int32_t>(0x0)};
constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction  VROSC::BlinkControllerButtonBehaviour_EventAction::Start{static_cast<int32_t>(0x1)};
constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction  VROSC::BlinkControllerButtonBehaviour_EventAction::StopWithFade{static_cast<int32_t>(0x2)};
constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction  VROSC::BlinkControllerButtonBehaviour_EventAction::InstantStop{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::VROSC::BlinkControllerButtonBehaviour.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BlinkControllerButtonBehaviour::*)(::VROSC::HandType, ::VROSC::TriggerButton, ::UnityEngine::Color, float_t, ::VROSC::BlinkControllerButtonBehaviour_EventAction, ::VROSC::BlinkControllerButtonBehaviour_EventAction, ::VROSC::BlinkControllerButtonBehaviour_EventAction, ::VROSC::BlinkControllerButtonBehaviour_EventAction)>(&::VROSC::BlinkControllerButtonBehaviour::Setup)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x176ec10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BlinkControllerButtonBehaviour_EventAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BlinkControllerButtonBehaviour_EventAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BlinkControllerButtonBehaviour_EventAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BlinkControllerButtonBehaviour_EventAction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BlinkControllerButtonBehaviour.Finalize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BlinkControllerButtonBehaviour::*)()>(&::VROSC::BlinkControllerButtonBehaviour::Finalize)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x176ed90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BlinkControllerButtonBehaviour.OnTutorialEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BlinkControllerButtonBehaviour::*)(::VROSC::TutorialEvent)>(&::VROSC::BlinkControllerButtonBehaviour::OnTutorialEvent)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x176ef18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                        "OnTutorialEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialEvent>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BlinkControllerButtonBehaviour.ProcessFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BlinkControllerButtonBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::VROSC::BlinkControllerButtonBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x176efc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BlinkControllerButtonBehaviour.OnGraphStart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BlinkControllerButtonBehaviour::*)(::UnityEngine::Playables::Playable)>(&::VROSC::BlinkControllerButtonBehaviour::OnGraphStart)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x176f028;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BlinkControllerButtonBehaviour.OnGraphStop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BlinkControllerButtonBehaviour::*)(::UnityEngine::Playables::Playable)>(&::VROSC::BlinkControllerButtonBehaviour::OnGraphStop)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x176f048;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BlinkControllerButtonBehaviour.OnBehaviourPlay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BlinkControllerButtonBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&::VROSC::BlinkControllerButtonBehaviour::OnBehaviourPlay)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x176f068;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BlinkControllerButtonBehaviour.OnBehaviourPause
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BlinkControllerButtonBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&::VROSC::BlinkControllerButtonBehaviour::OnBehaviourPause)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x176f0a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BlinkControllerButtonBehaviour.StartBlinking
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BlinkControllerButtonBehaviour::*)()>(&::VROSC::BlinkControllerButtonBehaviour::StartBlinking)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x176f218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                        "StartBlinking",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BlinkControllerButtonBehaviour.StopBlinking
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BlinkControllerButtonBehaviour::*)(float_t)>(&::VROSC::BlinkControllerButtonBehaviour::StopBlinking)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x176ef2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                        "StopBlinking",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BlinkControllerButtonBehaviour.ProcessEventAction
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BlinkControllerButtonBehaviour::*)(::VROSC::BlinkControllerButtonBehaviour_EventAction)>(&::VROSC::BlinkControllerButtonBehaviour::ProcessEventAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x176f000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                        "ProcessEventAction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BlinkControllerButtonBehaviour_EventAction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BlinkControllerButtonBehaviour._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BlinkControllerButtonBehaviour::*)()>(&::VROSC::BlinkControllerButtonBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x176f2b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::HandType& VROSC::BlinkControllerButtonBehaviour::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::VROSC::HandType const& VROSC::BlinkControllerButtonBehaviour::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void VROSC::BlinkControllerButtonBehaviour::__cordl_internal_set__hand(::VROSC::HandType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::VROSC::TriggerButton& VROSC::BlinkControllerButtonBehaviour::__cordl_internal_get__button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr ::VROSC::TriggerButton const& VROSC::BlinkControllerButtonBehaviour::__cordl_internal_get__button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr void VROSC::BlinkControllerButtonBehaviour::__cordl_internal_set__button(::VROSC::TriggerButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____button = value;
}
constexpr ::UnityEngine::Color& VROSC::BlinkControllerButtonBehaviour::__cordl_internal_get__color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____color;
}
constexpr ::UnityEngine::Color const& VROSC::BlinkControllerButtonBehaviour::__cordl_internal_get__color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____color;
}
constexpr void VROSC::BlinkControllerButtonBehaviour::__cordl_internal_set__color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____color = value;
}
constexpr float_t& VROSC::BlinkControllerButtonBehaviour::__cordl_internal_get__fadeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeTime;
}
constexpr float_t const& VROSC::BlinkControllerButtonBehaviour::__cordl_internal_get__fadeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeTime;
}
constexpr void VROSC::BlinkControllerButtonBehaviour::__cordl_internal_set__fadeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeTime = value;
}
constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction& VROSC::BlinkControllerButtonBehaviour::__cordl_internal_get__onAssetStartAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAssetStartAction;
}
constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction const& VROSC::BlinkControllerButtonBehaviour::__cordl_internal_get__onAssetStartAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAssetStartAction;
}
constexpr void VROSC::BlinkControllerButtonBehaviour::__cordl_internal_set__onAssetStartAction(::VROSC::BlinkControllerButtonBehaviour_EventAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onAssetStartAction = value;
}
constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction& VROSC::BlinkControllerButtonBehaviour::__cordl_internal_get__onAssetStopAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAssetStopAction;
}
constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction const& VROSC::BlinkControllerButtonBehaviour::__cordl_internal_get__onAssetStopAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAssetStopAction;
}
constexpr void VROSC::BlinkControllerButtonBehaviour::__cordl_internal_set__onAssetStopAction(::VROSC::BlinkControllerButtonBehaviour_EventAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onAssetStopAction = value;
}
constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction& VROSC::BlinkControllerButtonBehaviour::__cordl_internal_get__onTimelineStartAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onTimelineStartAction;
}
constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction const& VROSC::BlinkControllerButtonBehaviour::__cordl_internal_get__onTimelineStartAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onTimelineStartAction;
}
constexpr void VROSC::BlinkControllerButtonBehaviour::__cordl_internal_set__onTimelineStartAction(::VROSC::BlinkControllerButtonBehaviour_EventAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onTimelineStartAction = value;
}
constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction& VROSC::BlinkControllerButtonBehaviour::__cordl_internal_get__onTimelineStopAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onTimelineStopAction;
}
constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction const& VROSC::BlinkControllerButtonBehaviour::__cordl_internal_get__onTimelineStopAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onTimelineStopAction;
}
constexpr void VROSC::BlinkControllerButtonBehaviour::__cordl_internal_set__onTimelineStopAction(::VROSC::BlinkControllerButtonBehaviour_EventAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onTimelineStopAction = value;
}
constexpr bool& VROSC::BlinkControllerButtonBehaviour::__cordl_internal_get__playing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playing;
}
constexpr bool const& VROSC::BlinkControllerButtonBehaviour::__cordl_internal_get__playing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playing;
}
constexpr void VROSC::BlinkControllerButtonBehaviour::__cordl_internal_set__playing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playing = value;
}
inline void VROSC::BlinkControllerButtonBehaviour::Setup(::VROSC::HandType  hand, ::VROSC::TriggerButton  button, ::UnityEngine::Color  color, float_t  fadeTime, ::VROSC::BlinkControllerButtonBehaviour_EventAction  onAssetStartAction, ::VROSC::BlinkControllerButtonBehaviour_EventAction  onAssetStopAction, ::VROSC::BlinkControllerButtonBehaviour_EventAction  onTimelineStartAction, ::VROSC::BlinkControllerButtonBehaviour_EventAction  onTimelineStopAction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BlinkControllerButtonBehaviour_EventAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BlinkControllerButtonBehaviour_EventAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BlinkControllerButtonBehaviour_EventAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BlinkControllerButtonBehaviour_EventAction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hand, button, color, fadeTime, onAssetStartAction, onAssetStopAction, onTimelineStartAction, onTimelineStopAction);
}
inline void VROSC::BlinkControllerButtonBehaviour::Finalize()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BlinkControllerButtonBehaviour::OnTutorialEvent(::VROSC::TutorialEvent  tutorialEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                        "OnTutorialEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialEvent>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tutorialEvent);
}
inline void VROSC::BlinkControllerButtonBehaviour::ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, playerData);
}
inline void VROSC::BlinkControllerButtonBehaviour::OnGraphStart(::UnityEngine::Playables::Playable  playable)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable);
}
inline void VROSC::BlinkControllerButtonBehaviour::OnGraphStop(::UnityEngine::Playables::Playable  playable)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable);
}
inline void VROSC::BlinkControllerButtonBehaviour::OnBehaviourPlay(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info);
}
inline void VROSC::BlinkControllerButtonBehaviour::OnBehaviourPause(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                    18
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info);
}
inline void VROSC::BlinkControllerButtonBehaviour::StartBlinking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                        "StartBlinking",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BlinkControllerButtonBehaviour::StopBlinking(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                        "StopBlinking",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time);
}
inline void VROSC::BlinkControllerButtonBehaviour::ProcessEventAction(::VROSC::BlinkControllerButtonBehaviour_EventAction  eventAction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                        "ProcessEventAction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BlinkControllerButtonBehaviour_EventAction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventAction);
}
inline void VROSC::BlinkControllerButtonBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::BlinkControllerButtonBehaviour* VROSC::BlinkControllerButtonBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::BlinkControllerButtonBehaviour*>());
}
// Ctor Parameters []
constexpr ::VROSC::BlinkControllerButtonBehaviour::BlinkControllerButtonBehaviour()   {
}
