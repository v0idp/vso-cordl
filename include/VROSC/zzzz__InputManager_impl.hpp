#pragma once
// IWYU pragma private; include "VROSC/InputManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__InputManager_def.hpp"
#include "GlobalNamespace/zzzz__HandMover_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__InputSettings_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
#include "VROSC/zzzz__TriggerFrame_def.hpp"
//  Writing Method size for method: ::VROSC::InputManager.get_InputSettings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::InputSettings> (::VROSC::InputManager::*)()>(&::VROSC::InputManager::get_InputSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188f2d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get(),
                        "get_InputSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputManager.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputManager::*)()>(&::VROSC::InputManager::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x188f2e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputManager.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputManager::*)()>(&::VROSC::InputManager::Setup)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x188f360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputManager.CheckForButtonInteractions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputManager::*)(::VROSC::InputDevice*)>(&::VROSC::InputManager::CheckForButtonInteractions)> {
  constexpr static std::size_t size = 0x8b4;
  constexpr static std::size_t addrs = 0x188e0c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get(),
                        "CheckForButtonInteractions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputManager.ButtonIsTriggering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::InputManager::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton, ::VROSC::TriggerFrame)>(&::VROSC::InputManager::ButtonIsTriggering)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x188f394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get(),
                        "ButtonIsTriggering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerFrame>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputManager.ThumbStickInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputManager::*)(::VROSC::InputDevice*)>(&::VROSC::InputManager::ThumbStickInput)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x188f714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get(),
                        "ThumbStickInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputManager.IsPlayerLookingDown
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::InputManager::*)(float_t)>(&::VROSC::InputManager::IsPlayerLookingDown)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x188f7d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get(),
                        "IsPlayerLookingDown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InputManager._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InputManager::*)()>(&::VROSC::InputManager::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x188f9c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::VROSC::TriggerButton,::Array<::VROSC::TriggerButton>*>& VROSC::InputManager::__cordl_internal_get__allTriggerButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allTriggerButtons;
}
constexpr ::ArrayW<::VROSC::TriggerButton,::Array<::VROSC::TriggerButton>*> const& VROSC::InputManager::__cordl_internal_get__allTriggerButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allTriggerButtons;
}
constexpr void VROSC::InputManager::__cordl_internal_set__allTriggerButtons(::ArrayW<::VROSC::TriggerButton,::Array<::VROSC::TriggerButton>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allTriggerButtons)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InputSettings>& VROSC::InputManager::__cordl_internal_get__inputSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputSettings;
}
constexpr ::UnityW<::VROSC::InputSettings> const& VROSC::InputManager::__cordl_internal_get__inputSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputSettings;
}
constexpr void VROSC::InputManager::__cordl_internal_set__inputSettings(::UnityW<::VROSC::InputSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::InputManager::__cordl_internal_get__setupComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupComplete;
}
constexpr bool const& VROSC::InputManager::__cordl_internal_get__setupComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupComplete;
}
constexpr void VROSC::InputManager::__cordl_internal_set__setupComplete(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____setupComplete = value;
}
constexpr ::UnityW<::GlobalNamespace::HandMover>& VROSC::InputManager::__cordl_internal_get__debugHandMover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugHandMover;
}
constexpr ::UnityW<::GlobalNamespace::HandMover> const& VROSC::InputManager::__cordl_internal_get__debugHandMover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugHandMover;
}
constexpr void VROSC::InputManager::__cordl_internal_set__debugHandMover(::UnityW<::GlobalNamespace::HandMover>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____debugHandMover)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::TriggerButton>*& VROSC::InputManager::__cordl_internal_get_triggerButtonsBeginning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerButtonsBeginning;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::TriggerButton>* const& VROSC::InputManager::__cordl_internal_get_triggerButtonsBeginning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerButtonsBeginning;
}
constexpr void VROSC::InputManager::__cordl_internal_set_triggerButtonsBeginning(::System::Collections::Generic::List_1<::VROSC::TriggerButton>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___triggerButtonsBeginning)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::TriggerButton>*& VROSC::InputManager::__cordl_internal_get_triggerButtonsStaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerButtonsStaying;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::TriggerButton>* const& VROSC::InputManager::__cordl_internal_get_triggerButtonsStaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerButtonsStaying;
}
constexpr void VROSC::InputManager::__cordl_internal_set_triggerButtonsStaying(::System::Collections::Generic::List_1<::VROSC::TriggerButton>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___triggerButtonsStaying)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::TriggerButton>*& VROSC::InputManager::__cordl_internal_get_triggerButtonsEnding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerButtonsEnding;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::TriggerButton>* const& VROSC::InputManager::__cordl_internal_get_triggerButtonsEnding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerButtonsEnding;
}
constexpr void VROSC::InputManager::__cordl_internal_set_triggerButtonsEnding(::System::Collections::Generic::List_1<::VROSC::TriggerButton>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___triggerButtonsEnding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::InputManager::setStaticF_OnButtonBegin(::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*, "OnButtonBegin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get>(std::forward<::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*>(value));
}
inline ::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>* VROSC::InputManager::getStaticF_OnButtonBegin()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*, "OnButtonBegin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get>();
}
inline void VROSC::InputManager::setStaticF_OnButtonStay(::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*, "OnButtonStay", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get>(std::forward<::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*>(value));
}
inline ::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>* VROSC::InputManager::getStaticF_OnButtonStay()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*, "OnButtonStay", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get>();
}
inline void VROSC::InputManager::setStaticF_OnButtonEnd(::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*, "OnButtonEnd", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get>(std::forward<::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*>(value));
}
inline ::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>* VROSC::InputManager::getStaticF_OnButtonEnd()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*, "OnButtonEnd", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get>();
}
inline void VROSC::InputManager::setStaticF_OnThumbStickDirection(::System::Action_2<::UnityW<::VROSC::InputDevice>,::UnityEngine::Vector2>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::VROSC::InputDevice>,::UnityEngine::Vector2>*, "OnThumbStickDirection", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get>(std::forward<::System::Action_2<::UnityW<::VROSC::InputDevice>,::UnityEngine::Vector2>*>(value));
}
inline ::System::Action_2<::UnityW<::VROSC::InputDevice>,::UnityEngine::Vector2>* VROSC::InputManager::getStaticF_OnThumbStickDirection()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::VROSC::InputDevice>,::UnityEngine::Vector2>*, "OnThumbStickDirection", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get>();
}
inline ::UnityW<::VROSC::InputSettings> VROSC::InputManager::get_InputSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get(),
                        "get_InputSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::InputSettings>, false>(this, ___internal_method);
}
inline void VROSC::InputManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::InputManager::Setup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::InputManager::CheckForButtonInteractions(::VROSC::InputDevice*  inputDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get(),
                        "CheckForButtonInteractions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputDevice);
}
inline bool VROSC::InputManager::ButtonIsTriggering(::VROSC::InputDevice*  inputDevice, ::VROSC::TriggerButton  triggerButton, ::VROSC::TriggerFrame  triggerFrame)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get(),
                        "ButtonIsTriggering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerFrame>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, inputDevice, triggerButton, triggerFrame);
}
inline void VROSC::InputManager::ThumbStickInput(::VROSC::InputDevice*  inputDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get(),
                        "ThumbStickInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputDevice);
}
inline bool VROSC::InputManager::IsPlayerLookingDown(float_t  angleThreshhold)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get(),
                        "IsPlayerLookingDown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, angleThreshhold);
}
inline void VROSC::InputManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InputManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::InputManager* VROSC::InputManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::InputManager*>());
}
// Ctor Parameters []
constexpr ::VROSC::InputManager::InputManager()   {
}
