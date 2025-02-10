#pragma once
// IWYU pragma private; include "VROSC/TutorialManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__TutorialManager_def.hpp"
#include "GlobalNamespace/zzzz__TutorialSettings_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/zzzz__StateMachine_def.hpp"
#include "VROSC/zzzz__TutorialCompletedState_def.hpp"
#include "VROSC/zzzz__TutorialEvent_def.hpp"
#include "VROSC/zzzz__TutorialPanel_def.hpp"
#include "VROSC/zzzz__TutorialStep_def.hpp"
#include "VROSC/zzzz__Tutorial_def.hpp"
//  Writing Method size for method: ::VROSC::TutorialManager.get_Settings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::TutorialSettings> (::VROSC::TutorialManager::*)()>(&::VROSC::TutorialManager::get_Settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17051cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "get_Settings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialManager.get_TimelineVOSource
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioSource> (::VROSC::TutorialManager::*)()>(&::VROSC::TutorialManager::get_TimelineVOSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17051d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "get_TimelineVOSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialManager.get_ReplayVOSource
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioSource> (::VROSC::TutorialManager::*)()>(&::VROSC::TutorialManager::get_ReplayVOSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17051dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "get_ReplayVOSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialManager.get_HasRecordedCowbell
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::TutorialManager::*)()>(&::VROSC::TutorialManager::get_HasRecordedCowbell)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17051e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "get_HasRecordedCowbell",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialManager.set_HasRecordedCowbell
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialManager::*)(bool)>(&::VROSC::TutorialManager::set_HasRecordedCowbell)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17051ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "set_HasRecordedCowbell",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialManager.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialManager::*)()>(&::VROSC::TutorialManager::Awake)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x17051f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialManager.StartTutorial
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialManager::*)(::UnityEngine::Transform*)>(&::VROSC::TutorialManager::StartTutorial)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x1705388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "StartTutorial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialManager.SendEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialManager::*)(::VROSC::TutorialEvent)>(&::VROSC::TutorialManager::SendEvent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1705b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "SendEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialEvent>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialManager.StopTutorial
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialManager::*)(bool)>(&::VROSC::TutorialManager::StopTutorial)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x1705c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "StopTutorial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialManager.SetSpectatorCameraToFirstPerson
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialManager::*)()>(&::VROSC::TutorialManager::SetSpectatorCameraToFirstPerson)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1705768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "SetSpectatorCameraToFirstPerson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialManager.ReEnableEverything
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialManager::*)()>(&::VROSC::TutorialManager::ReEnableEverything)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x17060e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "ReEnableEverything",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialManager.ActivateStep
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialManager::*)(::VROSC::TutorialStep*)>(&::VROSC::TutorialManager::ActivateStep)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x17061bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "ActivateStep",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialStep*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialManager.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialManager::*)()>(&::VROSC::TutorialManager::Update)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1706738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialManager.OnAppPaused
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialManager::*)(bool)>(&::VROSC::TutorialManager::OnAppPaused)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x170678c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "OnAppPaused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialManager.TutorialEventTriggered
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialManager::*)(::VROSC::TutorialEvent)>(&::VROSC::TutorialManager::TutorialEventTriggered)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1706818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "TutorialEventTriggered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialEvent>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialManager.SetHasRecordedCowbell
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialManager::*)(bool)>(&::VROSC::TutorialManager::SetHasRecordedCowbell)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17068d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "SetHasRecordedCowbell",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialManager._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialManager::*)()>(&::VROSC::TutorialManager::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x17068e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::Tutorial*& VROSC::TutorialManager::__cordl_internal_get__tutorial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tutorial;
}
constexpr ::VROSC::Tutorial* const& VROSC::TutorialManager::__cordl_internal_get__tutorial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tutorial;
}
constexpr void VROSC::TutorialManager::__cordl_internal_set__tutorial(::VROSC::Tutorial*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tutorial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::TutorialSettings>& VROSC::TutorialManager::__cordl_internal_get__settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr ::UnityW<::GlobalNamespace::TutorialSettings> const& VROSC::TutorialManager::__cordl_internal_get__settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr void VROSC::TutorialManager::__cordl_internal_set__settings(::UnityW<::GlobalNamespace::TutorialSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::TutorialPanel>& VROSC::TutorialManager::__cordl_internal_get__tutorialPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tutorialPanel;
}
constexpr ::UnityW<::VROSC::TutorialPanel> const& VROSC::TutorialManager::__cordl_internal_get__tutorialPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tutorialPanel;
}
constexpr void VROSC::TutorialManager::__cordl_internal_set__tutorialPanel(::UnityW<::VROSC::TutorialPanel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tutorialPanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioSource>& VROSC::TutorialManager::__cordl_internal_get__timelineVOSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timelineVOSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& VROSC::TutorialManager::__cordl_internal_get__timelineVOSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timelineVOSource;
}
constexpr void VROSC::TutorialManager::__cordl_internal_set__timelineVOSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timelineVOSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioSource>& VROSC::TutorialManager::__cordl_internal_get__replayVOSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____replayVOSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& VROSC::TutorialManager::__cordl_internal_get__replayVOSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____replayVOSource;
}
constexpr void VROSC::TutorialManager::__cordl_internal_set__replayVOSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replayVOSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::StateMachine*& VROSC::TutorialManager::__cordl_internal_get__stateMachine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateMachine;
}
constexpr ::VROSC::StateMachine* const& VROSC::TutorialManager::__cordl_internal_get__stateMachine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateMachine;
}
constexpr void VROSC::TutorialManager::__cordl_internal_set__stateMachine(::VROSC::StateMachine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stateMachine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::TutorialCompletedState*& VROSC::TutorialManager::__cordl_internal_get__completedState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____completedState;
}
constexpr ::VROSC::TutorialCompletedState* const& VROSC::TutorialManager::__cordl_internal_get__completedState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____completedState;
}
constexpr void VROSC::TutorialManager::__cordl_internal_set__completedState(::VROSC::TutorialCompletedState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____completedState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::TutorialManager::__cordl_internal_get__isRunning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRunning;
}
constexpr bool const& VROSC::TutorialManager::__cordl_internal_get__isRunning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRunning;
}
constexpr void VROSC::TutorialManager::__cordl_internal_set__isRunning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isRunning = value;
}
constexpr int32_t& VROSC::TutorialManager::__cordl_internal_get__spectatorCameraModeAtStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spectatorCameraModeAtStart;
}
constexpr int32_t const& VROSC::TutorialManager::__cordl_internal_get__spectatorCameraModeAtStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spectatorCameraModeAtStart;
}
constexpr void VROSC::TutorialManager::__cordl_internal_set__spectatorCameraModeAtStart(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spectatorCameraModeAtStart = value;
}
constexpr ::UnityW<::VROSC::TutorialStep>& VROSC::TutorialManager::__cordl_internal_get__currentStep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentStep;
}
constexpr ::UnityW<::VROSC::TutorialStep> const& VROSC::TutorialManager::__cordl_internal_get__currentStep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentStep;
}
constexpr void VROSC::TutorialManager::__cordl_internal_set__currentStep(::UnityW<::VROSC::TutorialStep>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentStep)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::TutorialManager::__cordl_internal_get__HasRecordedCowbell_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasRecordedCowbell_k__BackingField;
}
constexpr bool const& VROSC::TutorialManager::__cordl_internal_get__HasRecordedCowbell_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasRecordedCowbell_k__BackingField;
}
constexpr void VROSC::TutorialManager::__cordl_internal_set__HasRecordedCowbell_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HasRecordedCowbell_k__BackingField = value;
}
constexpr ::System::Action_1<::VROSC::TutorialEvent>*& VROSC::TutorialManager::__cordl_internal_get_OnEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEvent;
}
constexpr ::System::Action_1<::VROSC::TutorialEvent>* const& VROSC::TutorialManager::__cordl_internal_get_OnEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEvent;
}
constexpr void VROSC::TutorialManager::__cordl_internal_set_OnEvent(::System::Action_1<::VROSC::TutorialEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::TutorialSettings> VROSC::TutorialManager::get_Settings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "get_Settings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::TutorialSettings>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioSource> VROSC::TutorialManager::get_TimelineVOSource()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "get_TimelineVOSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioSource> VROSC::TutorialManager::get_ReplayVOSource()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "get_ReplayVOSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>, false>(this, ___internal_method);
}
inline bool VROSC::TutorialManager::get_HasRecordedCowbell()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "get_HasRecordedCowbell",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::TutorialManager::set_HasRecordedCowbell(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "set_HasRecordedCowbell",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::TutorialManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TutorialManager::StartTutorial(::UnityEngine::Transform*  startMenuTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "StartTutorial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startMenuTransform);
}
inline void VROSC::TutorialManager::SendEvent(::VROSC::TutorialEvent  tutorialEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "SendEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialEvent>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tutorialEvent);
}
inline void VROSC::TutorialManager::StopTutorial(bool  isCancel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "StopTutorial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isCancel);
}
inline void VROSC::TutorialManager::SetSpectatorCameraToFirstPerson()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "SetSpectatorCameraToFirstPerson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TutorialManager::ReEnableEverything()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "ReEnableEverything",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TutorialManager::ActivateStep(::VROSC::TutorialStep*  tutorialStep)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "ActivateStep",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialStep*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tutorialStep);
}
inline void VROSC::TutorialManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TutorialManager::OnAppPaused(bool  paused)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "OnAppPaused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, paused);
}
inline void VROSC::TutorialManager::TutorialEventTriggered(::VROSC::TutorialEvent  tutorialEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "TutorialEventTriggered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialEvent>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tutorialEvent);
}
inline void VROSC::TutorialManager::SetHasRecordedCowbell(bool  hasRecordedCowbell)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        "SetHasRecordedCowbell",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hasRecordedCowbell);
}
inline void VROSC::TutorialManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TutorialManager* VROSC::TutorialManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TutorialManager*>());
}
// Ctor Parameters []
constexpr ::VROSC::TutorialManager::TutorialManager()   {
}
