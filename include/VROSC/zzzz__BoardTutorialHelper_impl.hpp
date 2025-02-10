#pragma once
// IWYU pragma private; include "VROSC/BoardTutorialHelper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__BoardTutorialHelper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__Grabable_def.hpp"
#include "VROSC/zzzz__Interactable_def.hpp"
#include "VROSC/zzzz__NoteBoardNoteController_def.hpp"
#include "VROSC/zzzz__SynthController_def.hpp"
#include "VROSC/zzzz__TutorialBlinkingUIElement_def.hpp"
#include "VROSC/zzzz__TutorialEvent_def.hpp"
//  Writing Method size for method: ::VROSC::BoardTutorialHelper.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BoardTutorialHelper::*)()>(&::VROSC::BoardTutorialHelper::Start)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x16ff22c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardTutorialHelper*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BoardTutorialHelper.TutorialEventTriggered
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BoardTutorialHelper::*)(::VROSC::TutorialEvent)>(&::VROSC::BoardTutorialHelper::TutorialEventTriggered)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x16ff320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardTutorialHelper*>::get(),
                        "TutorialEventTriggered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialEvent>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BoardTutorialHelper.SoundButtonsUsed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BoardTutorialHelper::*)(bool)>(&::VROSC::BoardTutorialHelper::SoundButtonsUsed)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x16ffbcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardTutorialHelper*>::get(),
                        "SoundButtonsUsed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BoardTutorialHelper.DisableAllInteractables
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BoardTutorialHelper::*)()>(&::VROSC::BoardTutorialHelper::DisableAllInteractables)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x16ffa30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardTutorialHelper*>::get(),
                        "DisableAllInteractables",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BoardTutorialHelper.ResetAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BoardTutorialHelper::*)()>(&::VROSC::BoardTutorialHelper::ResetAll)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x16ff804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardTutorialHelper*>::get(),
                        "ResetAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BoardTutorialHelper.BoardToggledAfterCloseEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BoardTutorialHelper::*)(bool)>(&::VROSC::BoardTutorialHelper::BoardToggledAfterCloseEnabled)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x16ffd4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardTutorialHelper*>::get(),
                        "BoardToggledAfterCloseEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BoardTutorialHelper.BoardGrabbed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BoardTutorialHelper::*)(bool)>(&::VROSC::BoardTutorialHelper::BoardGrabbed)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x16ffe94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardTutorialHelper*>::get(),
                        "BoardGrabbed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BoardTutorialHelper._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BoardTutorialHelper::*)()>(&::VROSC::BoardTutorialHelper::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x16fffd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardTutorialHelper*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::BoardTutorialHelper::__cordl_internal_get__interactablesParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactablesParent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::BoardTutorialHelper::__cordl_internal_get__interactablesParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactablesParent;
}
constexpr void VROSC::BoardTutorialHelper::__cordl_internal_set__interactablesParent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____interactablesParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::VROSC::TutorialBlinkingUIElement>,::Array<::UnityW<::VROSC::TutorialBlinkingUIElement>>*>& VROSC::BoardTutorialHelper::__cordl_internal_get__soundButtonBlinkers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____soundButtonBlinkers;
}
constexpr ::ArrayW<::UnityW<::VROSC::TutorialBlinkingUIElement>,::Array<::UnityW<::VROSC::TutorialBlinkingUIElement>>*> const& VROSC::BoardTutorialHelper::__cordl_internal_get__soundButtonBlinkers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____soundButtonBlinkers;
}
constexpr void VROSC::BoardTutorialHelper::__cordl_internal_set__soundButtonBlinkers(::ArrayW<::UnityW<::VROSC::TutorialBlinkingUIElement>,::Array<::UnityW<::VROSC::TutorialBlinkingUIElement>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____soundButtonBlinkers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::TutorialBlinkingUIElement>& VROSC::BoardTutorialHelper::__cordl_internal_get__closeButtonBlink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeButtonBlink;
}
constexpr ::UnityW<::VROSC::TutorialBlinkingUIElement> const& VROSC::BoardTutorialHelper::__cordl_internal_get__closeButtonBlink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeButtonBlink;
}
constexpr void VROSC::BoardTutorialHelper::__cordl_internal_set__closeButtonBlink(::UnityW<::VROSC::TutorialBlinkingUIElement>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____closeButtonBlink)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>& VROSC::BoardTutorialHelper::__cordl_internal_get__soundButtonInteractables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____soundButtonInteractables;
}
constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*> const& VROSC::BoardTutorialHelper::__cordl_internal_get__soundButtonInteractables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____soundButtonInteractables;
}
constexpr void VROSC::BoardTutorialHelper::__cordl_internal_set__soundButtonInteractables(::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____soundButtonInteractables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>& VROSC::BoardTutorialHelper::__cordl_internal_get__tempoSyncInteractables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempoSyncInteractables;
}
constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*> const& VROSC::BoardTutorialHelper::__cordl_internal_get__tempoSyncInteractables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempoSyncInteractables;
}
constexpr void VROSC::BoardTutorialHelper::__cordl_internal_set__tempoSyncInteractables(::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tempoSyncInteractables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::Interactable>& VROSC::BoardTutorialHelper::__cordl_internal_get__closeButtonInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeButtonInteractable;
}
constexpr ::UnityW<::VROSC::Interactable> const& VROSC::BoardTutorialHelper::__cordl_internal_get__closeButtonInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeButtonInteractable;
}
constexpr void VROSC::BoardTutorialHelper::__cordl_internal_set__closeButtonInteractable(::UnityW<::VROSC::Interactable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____closeButtonInteractable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::NoteBoardNoteController>& VROSC::BoardTutorialHelper::__cordl_internal_get__noteController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteController;
}
constexpr ::UnityW<::VROSC::NoteBoardNoteController> const& VROSC::BoardTutorialHelper::__cordl_internal_get__noteController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteController;
}
constexpr void VROSC::BoardTutorialHelper::__cordl_internal_set__noteController(::UnityW<::VROSC::NoteBoardNoteController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::SynthController>& VROSC::BoardTutorialHelper::__cordl_internal_get__boardController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boardController;
}
constexpr ::UnityW<::VROSC::SynthController> const& VROSC::BoardTutorialHelper::__cordl_internal_get__boardController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boardController;
}
constexpr void VROSC::BoardTutorialHelper::__cordl_internal_set__boardController(::UnityW<::VROSC::SynthController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____boardController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::Grabable>& VROSC::BoardTutorialHelper::__cordl_internal_get__boardGrabable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boardGrabable;
}
constexpr ::UnityW<::VROSC::Grabable> const& VROSC::BoardTutorialHelper::__cordl_internal_get__boardGrabable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boardGrabable;
}
constexpr void VROSC::BoardTutorialHelper::__cordl_internal_set__boardGrabable(::UnityW<::VROSC::Grabable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____boardGrabable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>*& VROSC::BoardTutorialHelper::__cordl_internal_get__disabledInteractables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledInteractables;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>* const& VROSC::BoardTutorialHelper::__cordl_internal_get__disabledInteractables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledInteractables;
}
constexpr void VROSC::BoardTutorialHelper::__cordl_internal_set__disabledInteractables(::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disabledInteractables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::BoardTutorialHelper::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardTutorialHelper*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BoardTutorialHelper::TutorialEventTriggered(::VROSC::TutorialEvent  tutorialEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardTutorialHelper*>::get(),
                        "TutorialEventTriggered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialEvent>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tutorialEvent);
}
inline void VROSC::BoardTutorialHelper::SoundButtonsUsed(bool  used)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardTutorialHelper*>::get(),
                        "SoundButtonsUsed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, used);
}
inline void VROSC::BoardTutorialHelper::DisableAllInteractables()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardTutorialHelper*>::get(),
                        "DisableAllInteractables",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BoardTutorialHelper::ResetAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardTutorialHelper*>::get(),
                        "ResetAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BoardTutorialHelper::BoardToggledAfterCloseEnabled(bool  active)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardTutorialHelper*>::get(),
                        "BoardToggledAfterCloseEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, active);
}
inline void VROSC::BoardTutorialHelper::BoardGrabbed(bool  grabbed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardTutorialHelper*>::get(),
                        "BoardGrabbed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, grabbed);
}
inline void VROSC::BoardTutorialHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardTutorialHelper*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::BoardTutorialHelper* VROSC::BoardTutorialHelper::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::BoardTutorialHelper*>());
}
// Ctor Parameters []
constexpr ::VROSC::BoardTutorialHelper::BoardTutorialHelper()   {
}
