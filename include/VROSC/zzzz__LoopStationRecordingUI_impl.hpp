#pragma once
// IWYU pragma private; include "VROSC/LoopStationRecordingUI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__LoopStationLoopHandler_impl.hpp"
#include "VROSC/zzzz__LoopStationRecordingUI_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__LoopPlayerRecordingState_def.hpp"
#include "VROSC/zzzz__LoopStationRecorder_def.hpp"
#include "VROSC/zzzz__LoopStationRecordingButton_def.hpp"
#include "VROSC/zzzz__LoopStation_def.hpp"
#include "VROSC/zzzz__SelectionBar_def.hpp"
#include "VROSC/zzzz__UISlideToggle_def.hpp"
#include "VROSC/zzzz__UserDataControllers_def.hpp"
//  Writing Method size for method: ::VROSC::LoopStationRecordingUI.get_OverDubLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::LoopStationRecordingUI::*)()>(&::VROSC::LoopStationRecordingUI::get_OverDubLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18ac4b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        "get_OverDubLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingUI.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingUI::*)(::VROSC::LoopStation*)>(&::VROSC::LoopStationRecordingUI::Setup)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x18ac4e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingUI.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingUI::*)()>(&::VROSC::LoopStationRecordingUI::OnDestroy)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x18ac8dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingUI.RecorderStateChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingUI::*)(::VROSC::LoopStationRecorder_RecordingState)>(&::VROSC::LoopStationRecordingUI::RecorderStateChanged)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x18ac888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        "RecorderStateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationRecorder_RecordingState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingUI.GetRecordingTextByState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::LoopStationRecordingUI::*)(::VROSC::LoopStationRecorder_RecordingState)>(&::VROSC::LoopStationRecordingUI::GetRecordingTextByState)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x18acb34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        "GetRecordingTextByState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationRecorder_RecordingState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingUI.UpdateLooperState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingUI::*)()>(&::VROSC::LoopStationRecordingUI::UpdateLooperState)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x18acc08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        "UpdateLooperState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingUI.GetOverdubLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::LoopStationRecordingUI::*)()>(&::VROSC::LoopStationRecordingUI::GetOverdubLength)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x18ac4b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        "GetOverdubLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingUI.OverdubChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingUI::*)(::VROSC::InputDevice*, bool)>(&::VROSC::LoopStationRecordingUI::OverdubChanged)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x18acd48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        "OverdubChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingUI.MatchLengthChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingUI::*)(::VROSC::InputDevice*, bool)>(&::VROSC::LoopStationRecordingUI::MatchLengthChanged)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x18acdd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        "MatchLengthChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingUI.UserDataLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingUI::*)(::VROSC::UserDataControllers*)>(&::VROSC::LoopStationRecordingUI::UserDataLoaded)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18ace60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        "UserDataLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserDataControllers*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingUI.ShowRerecordButton
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingUI::*)()>(&::VROSC::LoopStationRecordingUI::ShowRerecordButton)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18acea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        "ShowRerecordButton",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingUI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingUI::*)()>(&::VROSC::LoopStationRecordingUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18acebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::SelectionBar>& VROSC::LoopStationRecordingUI::__cordl_internal_get__loopLengthSelectionBar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopLengthSelectionBar;
}
constexpr ::UnityW<::VROSC::SelectionBar> const& VROSC::LoopStationRecordingUI::__cordl_internal_get__loopLengthSelectionBar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopLengthSelectionBar;
}
constexpr void VROSC::LoopStationRecordingUI::__cordl_internal_set__loopLengthSelectionBar(::UnityW<::VROSC::SelectionBar>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopLengthSelectionBar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::LoopStationRecordingUI::__cordl_internal_get__noLoopsMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noLoopsMode;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::LoopStationRecordingUI::__cordl_internal_get__noLoopsMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noLoopsMode;
}
constexpr void VROSC::LoopStationRecordingUI::__cordl_internal_set__noLoopsMode(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noLoopsMode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::LoopStationRecordingUI::__cordl_internal_get__gotLoops()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gotLoops;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::LoopStationRecordingUI::__cordl_internal_get__gotLoops() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gotLoops;
}
constexpr void VROSC::LoopStationRecordingUI::__cordl_internal_set__gotLoops(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gotLoops)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::LoopStationRecordingUI::__cordl_internal_get__loopLengthAutoText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopLengthAutoText;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::LoopStationRecordingUI::__cordl_internal_get__loopLengthAutoText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopLengthAutoText;
}
constexpr void VROSC::LoopStationRecordingUI::__cordl_internal_set__loopLengthAutoText(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopLengthAutoText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopStationRecordingButton>& VROSC::LoopStationRecordingUI::__cordl_internal_get__recordingButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingButton;
}
constexpr ::UnityW<::VROSC::LoopStationRecordingButton> const& VROSC::LoopStationRecordingUI::__cordl_internal_get__recordingButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingButton;
}
constexpr void VROSC::LoopStationRecordingUI::__cordl_internal_set__recordingButton(::UnityW<::VROSC::LoopStationRecordingButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recordingButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopPlayerRecordingState>& VROSC::LoopStationRecordingUI::__cordl_internal_get__firstLoopRecordingState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstLoopRecordingState;
}
constexpr ::UnityW<::VROSC::LoopPlayerRecordingState> const& VROSC::LoopStationRecordingUI::__cordl_internal_get__firstLoopRecordingState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstLoopRecordingState;
}
constexpr void VROSC::LoopStationRecordingUI::__cordl_internal_set__firstLoopRecordingState(::UnityW<::VROSC::LoopPlayerRecordingState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____firstLoopRecordingState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISlideToggle>& VROSC::LoopStationRecordingUI::__cordl_internal_get__overdubToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overdubToggle;
}
constexpr ::UnityW<::VROSC::UISlideToggle> const& VROSC::LoopStationRecordingUI::__cordl_internal_get__overdubToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overdubToggle;
}
constexpr void VROSC::LoopStationRecordingUI::__cordl_internal_set__overdubToggle(::UnityW<::VROSC::UISlideToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overdubToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISlideToggle>& VROSC::LoopStationRecordingUI::__cordl_internal_get__matchLengthToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matchLengthToggle;
}
constexpr ::UnityW<::VROSC::UISlideToggle> const& VROSC::LoopStationRecordingUI::__cordl_internal_get__matchLengthToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matchLengthToggle;
}
constexpr void VROSC::LoopStationRecordingUI::__cordl_internal_set__matchLengthToggle(::UnityW<::VROSC::UISlideToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____matchLengthToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopStationLoopHandler_LooperState& VROSC::LoopStationRecordingUI::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::VROSC::LoopStationLoopHandler_LooperState const& VROSC::LoopStationRecordingUI::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void VROSC::LoopStationRecordingUI::__cordl_internal_set__state(::VROSC::LoopStationLoopHandler_LooperState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
constexpr ::UnityW<::VROSC::LoopStation>& VROSC::LoopStationRecordingUI::__cordl_internal_get__loopStation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopStation;
}
constexpr ::UnityW<::VROSC::LoopStation> const& VROSC::LoopStationRecordingUI::__cordl_internal_get__loopStation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopStation;
}
constexpr void VROSC::LoopStationRecordingUI::__cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopStation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline float_t VROSC::LoopStationRecordingUI::get_OverDubLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        "get_OverDubLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecordingUI::Setup(::VROSC::LoopStation*  loopStation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loopStation);
}
inline void VROSC::LoopStationRecordingUI::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecordingUI::RecorderStateChanged(::VROSC::LoopStationRecorder_RecordingState  recordingState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        "RecorderStateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationRecorder_RecordingState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recordingState);
}
inline ::StringW VROSC::LoopStationRecordingUI::GetRecordingTextByState(::VROSC::LoopStationRecorder_RecordingState  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        "GetRecordingTextByState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationRecorder_RecordingState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, state);
}
inline void VROSC::LoopStationRecordingUI::UpdateLooperState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        "UpdateLooperState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t VROSC::LoopStationRecordingUI::GetOverdubLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        "GetOverdubLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecordingUI::OverdubChanged(::VROSC::InputDevice*  inputDevice, bool  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        "OverdubChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputDevice, state);
}
inline void VROSC::LoopStationRecordingUI::MatchLengthChanged(::VROSC::InputDevice*  inputDevice, bool  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        "MatchLengthChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputDevice, state);
}
inline void VROSC::LoopStationRecordingUI::UserDataLoaded(::VROSC::UserDataControllers*  dataControllers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        "UserDataLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserDataControllers*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataControllers);
}
inline void VROSC::LoopStationRecordingUI::ShowRerecordButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        "ShowRerecordButton",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecordingUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopStationRecordingUI* VROSC::LoopStationRecordingUI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopStationRecordingUI*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationRecordingUI::LoopStationRecordingUI()   {
}
