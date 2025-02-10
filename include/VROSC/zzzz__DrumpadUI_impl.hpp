#pragma once
// IWYU pragma private; include "VROSC/DrumpadUI.hpp"
#include "VROSC/zzzz__PadUI_impl.hpp"
#include "VROSC/zzzz__DrumpadUI_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "VROSC/UI/zzzz__DrumSampleSwitcherUI_def.hpp"
#include "VROSC/zzzz__ClickData_def.hpp"
#include "VROSC/zzzz__IncrementDecrementUI_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__ModularDrumsDataController_def.hpp"
#include "VROSC/zzzz__TooltipData_def.hpp"
#include "VROSC/zzzz__UIButton_def.hpp"
#include "VROSC/zzzz__UISlideToggle_def.hpp"
#include "VROSC/zzzz__UISlider_def.hpp"
//  Writing Method size for method: ::VROSC::DrumpadUI.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadUI::*)()>(&::VROSC::DrumpadUI::Awake)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x170c014;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumpadUI.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadUI::*)(int32_t, int32_t, ::VROSC::ModularDrumsDataController*, bool, float_t, int32_t)>(&::VROSC::DrumpadUI::Setup)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x1709828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ModularDrumsDataController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumpadUI.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadUI::*)()>(&::VROSC::DrumpadUI::OnDestroy)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x170c64c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumpadUI.SynthesizerChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadUI::*)(bool)>(&::VROSC::DrumpadUI::SynthesizerChanged)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x170c60c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                        "SynthesizerChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumpadUI.SetToolTip
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadUI::*)(bool)>(&::VROSC::DrumpadUI::SetToolTip)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x170cbfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                        "SetToolTip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumpadUI.SpinnerActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadUI::*)(bool)>(&::VROSC::DrumpadUI::SpinnerActive)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x170cc2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                        "SpinnerActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumpadUI.UpdateHover
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadUI::*)()>(&::VROSC::DrumpadUI::UpdateHover)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x170cc38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumpadUI.ToggleUI
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadUI::*)(::VROSC::ClickData*)>(&::VROSC::DrumpadUI::ToggleUI)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x170cca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                        "ToggleUI",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumpadUI.CloseUI
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadUI::*)(::VROSC::ClickData*)>(&::VROSC::DrumpadUI::CloseUI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170ccbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                        "CloseUI",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumpadUI.VolumeChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadUI::*)(float_t)>(&::VROSC::DrumpadUI::VolumeChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x170ccc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                        "VolumeChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumpadUI.SetDrumUseVelocityChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadUI::*)(::VROSC::InputDevice*, bool)>(&::VROSC::DrumpadUI::SetDrumUseVelocityChanged)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x170cce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                        "SetDrumUseVelocityChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumpadUI.SetPitchChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadUI::*)(int32_t)>(&::VROSC::DrumpadUI::SetPitchChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x170cd04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                        "SetPitchChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumpadUI.SwitcherChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadUI::*)(int32_t, bool)>(&::VROSC::DrumpadUI::SwitcherChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x170cd20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                        "SwitcherChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumpadUI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadUI::*)()>(&::VROSC::DrumpadUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170cd40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::UI::DrumSampleSwitcherUI>& VROSC::DrumpadUI::__cordl_internal_get__switcher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____switcher;
}
constexpr ::UnityW<::VROSC::UI::DrumSampleSwitcherUI> const& VROSC::DrumpadUI::__cordl_internal_get__switcher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____switcher;
}
constexpr void VROSC::DrumpadUI::__cordl_internal_set__switcher(::UnityW<::VROSC::UI::DrumSampleSwitcherUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____switcher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISlider>& VROSC::DrumpadUI::__cordl_internal_get__volumeSlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeSlider;
}
constexpr ::UnityW<::VROSC::UISlider> const& VROSC::DrumpadUI::__cordl_internal_get__volumeSlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeSlider;
}
constexpr void VROSC::DrumpadUI::__cordl_internal_set__volumeSlider(::UnityW<::VROSC::UISlider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____volumeSlider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISlideToggle>& VROSC::DrumpadUI::__cordl_internal_get__useVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useVelocity;
}
constexpr ::UnityW<::VROSC::UISlideToggle> const& VROSC::DrumpadUI::__cordl_internal_get__useVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useVelocity;
}
constexpr void VROSC::DrumpadUI::__cordl_internal_set__useVelocity(::UnityW<::VROSC::UISlideToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____useVelocity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::IncrementDecrementUI>& VROSC::DrumpadUI::__cordl_internal_get__pitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitch;
}
constexpr ::UnityW<::VROSC::IncrementDecrementUI> const& VROSC::DrumpadUI::__cordl_internal_get__pitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitch;
}
constexpr void VROSC::DrumpadUI::__cordl_internal_set__pitch(::UnityW<::VROSC::IncrementDecrementUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pitch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::DrumpadUI::__cordl_internal_get__closeUiButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeUiButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::DrumpadUI::__cordl_internal_get__closeUiButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeUiButton;
}
constexpr void VROSC::DrumpadUI::__cordl_internal_set__closeUiButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____closeUiButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::DrumpadUI::__cordl_internal_get__openUiButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openUiButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::DrumpadUI::__cordl_internal_get__openUiButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openUiButton;
}
constexpr void VROSC::DrumpadUI::__cordl_internal_set__openUiButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____openUiButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::DrumpadUI::__cordl_internal_get__isSpinnerPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSpinnerPressed;
}
constexpr bool const& VROSC::DrumpadUI::__cordl_internal_get__isSpinnerPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSpinnerPressed;
}
constexpr void VROSC::DrumpadUI::__cordl_internal_set__isSpinnerPressed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isSpinnerPressed = value;
}
constexpr ::VROSC::TooltipData*& VROSC::DrumpadUI::__cordl_internal_get__openToolTip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openToolTip;
}
constexpr ::VROSC::TooltipData* const& VROSC::DrumpadUI::__cordl_internal_get__openToolTip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openToolTip;
}
constexpr void VROSC::DrumpadUI::__cordl_internal_set__openToolTip(::VROSC::TooltipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____openToolTip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<bool>*& VROSC::DrumpadUI::__cordl_internal_get_OnUseVelocityChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnUseVelocityChanged;
}
constexpr ::System::Action_1<bool>* const& VROSC::DrumpadUI::__cordl_internal_get_OnUseVelocityChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnUseVelocityChanged;
}
constexpr void VROSC::DrumpadUI::__cordl_internal_set_OnUseVelocityChanged(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnUseVelocityChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<int32_t>*& VROSC::DrumpadUI::__cordl_internal_get_OnPitchChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPitchChanged;
}
constexpr ::System::Action_1<int32_t>* const& VROSC::DrumpadUI::__cordl_internal_get_OnPitchChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPitchChanged;
}
constexpr void VROSC::DrumpadUI::__cordl_internal_set_OnPitchChanged(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnPitchChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<float_t>*& VROSC::DrumpadUI::__cordl_internal_get_OnVolumeChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnVolumeChanged;
}
constexpr ::System::Action_1<float_t>* const& VROSC::DrumpadUI::__cordl_internal_get_OnVolumeChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnVolumeChanged;
}
constexpr void VROSC::DrumpadUI::__cordl_internal_set_OnVolumeChanged(::System::Action_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnVolumeChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<int32_t,bool>*& VROSC::DrumpadUI::__cordl_internal_get_OnSwitcherChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSwitcherChanged;
}
constexpr ::System::Action_2<int32_t,bool>* const& VROSC::DrumpadUI::__cordl_internal_get_OnSwitcherChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSwitcherChanged;
}
constexpr void VROSC::DrumpadUI::__cordl_internal_set_OnSwitcherChanged(::System::Action_2<int32_t,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnSwitcherChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::DrumpadUI::Awake()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::DrumpadUI::Setup(int32_t  empadId, int32_t  groupId, ::VROSC::ModularDrumsDataController*  controller, bool  useVelocity, float_t  volume, int32_t  pitch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ModularDrumsDataController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, empadId, groupId, controller, useVelocity, volume, pitch);
}
inline void VROSC::DrumpadUI::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::DrumpadUI::SynthesizerChanged(bool  useExternal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                        "SynthesizerChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, useExternal);
}
inline void VROSC::DrumpadUI::SetToolTip(bool  isHovered)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                        "SetToolTip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isHovered);
}
inline void VROSC::DrumpadUI::SpinnerActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                        "SpinnerActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, active);
}
inline void VROSC::DrumpadUI::UpdateHover()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::DrumpadUI::ToggleUI(::VROSC::ClickData*  clickData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                        "ToggleUI",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clickData);
}
inline void VROSC::DrumpadUI::CloseUI(::VROSC::ClickData*  clickData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                        "CloseUI",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clickData);
}
inline void VROSC::DrumpadUI::VolumeChanged(float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                        "VolumeChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume);
}
inline void VROSC::DrumpadUI::SetDrumUseVelocityChanged(::VROSC::InputDevice*  device, bool  toggled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                        "SetDrumUseVelocityChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, toggled);
}
inline void VROSC::DrumpadUI::SetPitchChanged(int32_t  pitch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                        "SetPitchChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pitch);
}
inline void VROSC::DrumpadUI::SwitcherChanged(int32_t  sampleIdOrNoteNumber, bool  preview)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                        "SwitcherChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sampleIdOrNoteNumber, preview);
}
inline void VROSC::DrumpadUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::DrumpadUI* VROSC::DrumpadUI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::DrumpadUI*>());
}
// Ctor Parameters []
constexpr ::VROSC::DrumpadUI::DrumpadUI()   {
}
