#pragma once
// IWYU pragma private; include "VROSC/MicrophoneController.hpp"
#include "VROSC/zzzz__ToolController_impl.hpp"
#include "VROSC/zzzz__MicrophoneController_def.hpp"
#include "NatSuite/Devices/zzzz__AudioDevice_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__ControlPanelUI_def.hpp"
#include "VROSC/zzzz__InfoPanel_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__MicrophoneDataController_def.hpp"
#include "VROSC/zzzz__MicrophoneDeviceManager_def.hpp"
#include "VROSC/zzzz__Microphone_def.hpp"
#include "VROSC/zzzz__UIButton_def.hpp"
#include "VROSC/zzzz__UISlideToggle_def.hpp"
#include "VROSC/zzzz__UISlider_def.hpp"
#include "VROSC/zzzz__UISpinner_def.hpp"
#include "VROSC/zzzz__UserDataControllers_def.hpp"
//  Writing Method size for method: ::VROSC::MicrophoneController.get_MicrophoneDataController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::MicrophoneDataController* (::VROSC::MicrophoneController::*)()>(&::VROSC::MicrophoneController::get_MicrophoneDataController)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1799704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "get_MicrophoneDataController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneController.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneController::*)()>(&::VROSC::MicrophoneController::Setup)> {
  constexpr static std::size_t size = 0x814;
  constexpr static std::size_t addrs = 0x179977c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneController.Toggle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneController::*)()>(&::VROSC::MicrophoneController::Toggle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x179a134;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneController.PopulateInputDeviceList
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneController::*)()>(&::VROSC::MicrophoneController::PopulateInputDeviceList)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x179a198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "PopulateInputDeviceList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneController.InputSelectionChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneController::*)(int32_t)>(&::VROSC::MicrophoneController::InputSelectionChanged)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x179a614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "InputSelectionChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneController.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneController::*)()>(&::VROSC::MicrophoneController::OnDestroy)> {
  constexpr static std::size_t size = 0x6e8;
  constexpr static std::size_t addrs = 0x179a710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneController.VolumeChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneController::*)(float_t)>(&::VROSC::MicrophoneController::VolumeChanged)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x179aef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "VolumeChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneController.ReverbChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneController::*)(float_t)>(&::VROSC::MicrophoneController::ReverbChanged)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x179af50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "ReverbChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneController.LatencyCompensationChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneController::*)(float_t)>(&::VROSC::MicrophoneController::LatencyCompensationChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x179afb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "LatencyCompensationChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneController.ResetLatency
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneController::*)()>(&::VROSC::MicrophoneController::ResetLatency)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x179b0a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "ResetLatency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneController.ProximityToggled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneController::*)(::VROSC::InputDevice*, bool)>(&::VROSC::MicrophoneController::ProximityToggled)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1799fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "ProximityToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneController.GrabToActivateToggled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneController::*)(::VROSC::InputDevice*, bool)>(&::VROSC::MicrophoneController::GrabToActivateToggled)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x179b1ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "GrabToActivateToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneController.PreviewReverbToggled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneController::*)(::VROSC::InputDevice*, bool)>(&::VROSC::MicrophoneController::PreviewReverbToggled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x179b2e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "PreviewReverbToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneController.SaveUserPreferences
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneController::*)()>(&::VROSC::MicrophoneController::SaveUserPreferences)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x179b250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "SaveUserPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneController.EnableMicrophone
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneController::*)(bool)>(&::VROSC::MicrophoneController::EnableMicrophone)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x179b370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "EnableMicrophone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneController.MicrophoneGrabbed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneController::*)(bool)>(&::VROSC::MicrophoneController::MicrophoneGrabbed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x179b438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "MicrophoneGrabbed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneController.MicrophoneProximityChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneController::*)(float_t)>(&::VROSC::MicrophoneController::MicrophoneProximityChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x179b4d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "MicrophoneProximityChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneController.UserDataLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneController::*)(::VROSC::UserDataControllers*)>(&::VROSC::MicrophoneController::UserDataLoaded)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x179b4f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneController.UpdateInputVisualizer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneController::*)(float_t)>(&::VROSC::MicrophoneController::UpdateInputVisualizer)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x179b914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "UpdateInputVisualizer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneController.ShowPeakWarning
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneController::*)()>(&::VROSC::MicrophoneController::ShowPeakWarning)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x179b940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "ShowPeakWarning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneController.HidePeakWarning
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneController::*)()>(&::VROSC::MicrophoneController::HidePeakWarning)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1799f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "HidePeakWarning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneController::*)()>(&::VROSC::MicrophoneController::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x179b960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::Microphone>& VROSC::MicrophoneController::__cordl_internal_get__microphone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphone;
}
constexpr ::UnityW<::VROSC::Microphone> const& VROSC::MicrophoneController::__cordl_internal_get__microphone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphone;
}
constexpr void VROSC::MicrophoneController::__cordl_internal_set__microphone(::UnityW<::VROSC::Microphone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____microphone)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISlider>& VROSC::MicrophoneController::__cordl_internal_get__volumeSlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeSlider;
}
constexpr ::UnityW<::VROSC::UISlider> const& VROSC::MicrophoneController::__cordl_internal_get__volumeSlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeSlider;
}
constexpr void VROSC::MicrophoneController::__cordl_internal_set__volumeSlider(::UnityW<::VROSC::UISlider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____volumeSlider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISlider>& VROSC::MicrophoneController::__cordl_internal_get__reverbSlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reverbSlider;
}
constexpr ::UnityW<::VROSC::UISlider> const& VROSC::MicrophoneController::__cordl_internal_get__reverbSlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reverbSlider;
}
constexpr void VROSC::MicrophoneController::__cordl_internal_set__reverbSlider(::UnityW<::VROSC::UISlider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reverbSlider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISlideToggle>& VROSC::MicrophoneController::__cordl_internal_get__proximityToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proximityToggle;
}
constexpr ::UnityW<::VROSC::UISlideToggle> const& VROSC::MicrophoneController::__cordl_internal_get__proximityToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proximityToggle;
}
constexpr void VROSC::MicrophoneController::__cordl_internal_set__proximityToggle(::UnityW<::VROSC::UISlideToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____proximityToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISlider>& VROSC::MicrophoneController::__cordl_internal_get__inputVisualizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputVisualizer;
}
constexpr ::UnityW<::VROSC::UISlider> const& VROSC::MicrophoneController::__cordl_internal_get__inputVisualizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputVisualizer;
}
constexpr void VROSC::MicrophoneController::__cordl_internal_set__inputVisualizer(::UnityW<::VROSC::UISlider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputVisualizer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::MicrophoneController::__cordl_internal_get__peakWarning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peakWarning;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::MicrophoneController::__cordl_internal_get__peakWarning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peakWarning;
}
constexpr void VROSC::MicrophoneController::__cordl_internal_set__peakWarning(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____peakWarning)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ControlPanelUI>& VROSC::MicrophoneController::__cordl_internal_get__controlPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controlPanel;
}
constexpr ::UnityW<::VROSC::ControlPanelUI> const& VROSC::MicrophoneController::__cordl_internal_get__controlPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controlPanel;
}
constexpr void VROSC::MicrophoneController::__cordl_internal_set__controlPanel(::UnityW<::VROSC::ControlPanelUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controlPanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InfoPanel>& VROSC::MicrophoneController::__cordl_internal_get__infoPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____infoPanel;
}
constexpr ::UnityW<::VROSC::InfoPanel> const& VROSC::MicrophoneController::__cordl_internal_get__infoPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____infoPanel;
}
constexpr void VROSC::MicrophoneController::__cordl_internal_set__infoPanel(::UnityW<::VROSC::InfoPanel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____infoPanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::MicrophoneController::__cordl_internal_get__failedToInitializeText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____failedToInitializeText;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::MicrophoneController::__cordl_internal_get__failedToInitializeText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____failedToInitializeText;
}
constexpr void VROSC::MicrophoneController::__cordl_internal_set__failedToInitializeText(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____failedToInitializeText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::MicrophoneController::__cordl_internal_get__pcOnlyObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pcOnlyObjects;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::MicrophoneController::__cordl_internal_get__pcOnlyObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pcOnlyObjects;
}
constexpr void VROSC::MicrophoneController::__cordl_internal_set__pcOnlyObjects(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pcOnlyObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISpinner>& VROSC::MicrophoneController::__cordl_internal_get__inputSpinner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputSpinner;
}
constexpr ::UnityW<::VROSC::UISpinner> const& VROSC::MicrophoneController::__cordl_internal_get__inputSpinner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputSpinner;
}
constexpr void VROSC::MicrophoneController::__cordl_internal_set__inputSpinner(::UnityW<::VROSC::UISpinner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputSpinner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISlider>& VROSC::MicrophoneController::__cordl_internal_get__latencySlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latencySlider;
}
constexpr ::UnityW<::VROSC::UISlider> const& VROSC::MicrophoneController::__cordl_internal_get__latencySlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latencySlider;
}
constexpr void VROSC::MicrophoneController::__cordl_internal_set__latencySlider(::UnityW<::VROSC::UISlider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____latencySlider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::MicrophoneController::__cordl_internal_get__resetLatencyButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetLatencyButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::MicrophoneController::__cordl_internal_get__resetLatencyButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetLatencyButton;
}
constexpr void VROSC::MicrophoneController::__cordl_internal_set__resetLatencyButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resetLatencyButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISlideToggle>& VROSC::MicrophoneController::__cordl_internal_get__grabToActivateToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabToActivateToggle;
}
constexpr ::UnityW<::VROSC::UISlideToggle> const& VROSC::MicrophoneController::__cordl_internal_get__grabToActivateToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabToActivateToggle;
}
constexpr void VROSC::MicrophoneController::__cordl_internal_set__grabToActivateToggle(::UnityW<::VROSC::UISlideToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____grabToActivateToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISlideToggle>& VROSC::MicrophoneController::__cordl_internal_get__previewReverbToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewReverbToggle;
}
constexpr ::UnityW<::VROSC::UISlideToggle> const& VROSC::MicrophoneController::__cordl_internal_get__previewReverbToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewReverbToggle;
}
constexpr void VROSC::MicrophoneController::__cordl_internal_set__previewReverbToggle(::UnityW<::VROSC::UISlideToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____previewReverbToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::MicrophoneDeviceManager>& VROSC::MicrophoneController::__cordl_internal_get__microphoneDeviceManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneDeviceManager;
}
constexpr ::UnityW<::VROSC::MicrophoneDeviceManager> const& VROSC::MicrophoneController::__cordl_internal_get__microphoneDeviceManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneDeviceManager;
}
constexpr void VROSC::MicrophoneController::__cordl_internal_set__microphoneDeviceManager(::UnityW<::VROSC::MicrophoneDeviceManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____microphoneDeviceManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::NatSuite::Devices::AudioDevice*>*& VROSC::MicrophoneController::__cordl_internal_get__inputDevices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputDevices;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::NatSuite::Devices::AudioDevice*>* const& VROSC::MicrophoneController::__cordl_internal_get__inputDevices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputDevices;
}
constexpr void VROSC::MicrophoneController::__cordl_internal_set__inputDevices(::System::Collections::Generic::Dictionary_2<::StringW,::NatSuite::Devices::AudioDevice*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputDevices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::MicrophoneController::__cordl_internal_get__microphoneGrabbed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneGrabbed;
}
constexpr bool const& VROSC::MicrophoneController::__cordl_internal_get__microphoneGrabbed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneGrabbed;
}
constexpr void VROSC::MicrophoneController::__cordl_internal_set__microphoneGrabbed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____microphoneGrabbed = value;
}
inline ::VROSC::MicrophoneDataController* VROSC::MicrophoneController::get_MicrophoneDataController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "get_MicrophoneDataController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::MicrophoneDataController*, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneController::Setup()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneController::Toggle()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneController::PopulateInputDeviceList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "PopulateInputDeviceList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneController::InputSelectionChanged(int32_t  selection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "InputSelectionChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selection);
}
inline void VROSC::MicrophoneController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneController::VolumeChanged(float_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "VolumeChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
inline void VROSC::MicrophoneController::ReverbChanged(float_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "ReverbChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
inline void VROSC::MicrophoneController::LatencyCompensationChanged(float_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "LatencyCompensationChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
inline void VROSC::MicrophoneController::ResetLatency()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "ResetLatency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneController::ProximityToggled(::VROSC::InputDevice*  device, bool  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "ProximityToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, state);
}
inline void VROSC::MicrophoneController::GrabToActivateToggled(::VROSC::InputDevice*  device, bool  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "GrabToActivateToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, state);
}
inline void VROSC::MicrophoneController::PreviewReverbToggled(::VROSC::InputDevice*  device, bool  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "PreviewReverbToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, state);
}
inline void VROSC::MicrophoneController::SaveUserPreferences()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "SaveUserPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneController::EnableMicrophone(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "EnableMicrophone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enable);
}
inline void VROSC::MicrophoneController::MicrophoneGrabbed(bool  grabbed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "MicrophoneGrabbed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, grabbed);
}
inline void VROSC::MicrophoneController::MicrophoneProximityChanged(float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "MicrophoneProximityChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, distance);
}
inline void VROSC::MicrophoneController::UserDataLoaded(::VROSC::UserDataControllers*  user)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, user);
}
inline void VROSC::MicrophoneController::UpdateInputVisualizer(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "UpdateInputVisualizer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::MicrophoneController::ShowPeakWarning()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "ShowPeakWarning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneController::HidePeakWarning()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        "HidePeakWarning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::MicrophoneController* VROSC::MicrophoneController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::MicrophoneController*>());
}
// Ctor Parameters []
constexpr ::VROSC::MicrophoneController::MicrophoneController()   {
}
