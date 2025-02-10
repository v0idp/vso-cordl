#pragma once
// IWYU pragma private; include "VROSC/BeatCounterUI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__BeatCounterUI_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "VROSC/zzzz__BeatCounterUI_def.hpp"
#include "VROSC/zzzz__ClickData_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__Metronome_def.hpp"
#include "VROSC/zzzz__UIButton_def.hpp"
#include "VROSC/zzzz__UISlideToggle_def.hpp"
#include "VROSC/zzzz__UISlider_def.hpp"
#include "VROSC/zzzz__UISpinner_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::BeatCounterUI_SyncToggleSource::BeatCounterUI_SyncToggleSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::BeatCounterUI_SyncToggleSource::BeatCounterUI_SyncToggleSource()   {
}
constexpr ::VROSC::BeatCounterUI_SyncToggleSource  VROSC::BeatCounterUI_SyncToggleSource::ToggleButton{static_cast<int32_t>(0x0)};
constexpr ::VROSC::BeatCounterUI_SyncToggleSource  VROSC::BeatCounterUI_SyncToggleSource::DataLoad{static_cast<int32_t>(0x1)};
constexpr ::VROSC::BeatCounterUI_SyncToggleSource  VROSC::BeatCounterUI_SyncToggleSource::Slider{static_cast<int32_t>(0x2)};
constexpr ::VROSC::BeatCounterUI_SyncToggleSource  VROSC::BeatCounterUI_SyncToggleSource::Reset{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::VROSC::BeatCounterUI.get_DisplayedLinkPeers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::BeatCounterUI::*)()>(&::VROSC::BeatCounterUI::get_DisplayedLinkPeers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x182af14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "get_DisplayedLinkPeers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.set_DisplayedLinkPeers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)(int32_t)>(&::VROSC::BeatCounterUI::set_DisplayedLinkPeers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x182af1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "set_DisplayedLinkPeers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)()>(&::VROSC::BeatCounterUI::Awake)> {
  constexpr static std::size_t size = 0x6dc;
  constexpr static std::size_t addrs = 0x182af24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)()>(&::VROSC::BeatCounterUI::Setup)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x182968c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)()>(&::VROSC::BeatCounterUI::Update)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182ba4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)()>(&::VROSC::BeatCounterUI::OnDestroy)> {
  constexpr static std::size_t size = 0x698;
  constexpr static std::size_t addrs = 0x182bb48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)()>(&::VROSC::BeatCounterUI::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x182c1e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.ResetAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)()>(&::VROSC::BeatCounterUI::ResetAll)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x182b600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "ResetAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.SetSyncIsManualBPM
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)(bool)>(&::VROSC::BeatCounterUI::SetSyncIsManualBPM)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1829e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "SetSyncIsManualBPM",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.SyncSourceToggled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)(::VROSC::InputDevice*, bool)>(&::VROSC::BeatCounterUI::SyncSourceToggled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x182c4b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "SyncSourceToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.SyncSourceToggled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)(::VROSC::InputDevice*, bool, ::VROSC::BeatCounterUI_SyncToggleSource)>(&::VROSC::BeatCounterUI::SyncSourceToggled)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x182c2b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "SyncSourceToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BeatCounterUI_SyncToggleSource>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.SetBpmSliderValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)(double_t)>(&::VROSC::BeatCounterUI::SetBpmSliderValue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x182ad84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "SetBpmSliderValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.BpmSliderGrabbed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)(bool)>(&::VROSC::BeatCounterUI::BpmSliderGrabbed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182c4e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "BpmSliderGrabbed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.BpmSliderValueChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)(float_t)>(&::VROSC::BeatCounterUI::BpmSliderValueChanged)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x182c594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "BpmSliderValueChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.GetBpmSliderBpm
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::VROSC::BeatCounterUI::*)(float_t)>(&::VROSC::BeatCounterUI::GetBpmSliderBpm)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182b68c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "GetBpmSliderBpm",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.GetBpmSliderValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::BeatCounterUI::*)(double_t)>(&::VROSC::BeatCounterUI::GetBpmSliderValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182c4c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "GetBpmSliderValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.BpmChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)(double_t)>(&::VROSC::BeatCounterUI::BpmChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x182c804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "BpmChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.BpmReset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)(::VROSC::ClickData*)>(&::VROSC::BeatCounterUI::BpmReset)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182c808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "BpmReset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.ShowOrHideBPMReset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)()>(&::VROSC::BeatCounterUI::ShowOrHideBPMReset)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x182b77c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "ShowOrHideBPMReset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.SetBeatsPerBar
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)(int32_t)>(&::VROSC::BeatCounterUI::SetBeatsPerBar)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x182c918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "SetBeatsPerBar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.BeatsPerBarChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)(int32_t)>(&::VROSC::BeatCounterUI::BeatsPerBarChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x182c970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "BeatsPerBarChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.AbletonLinkToggled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)(::VROSC::InputDevice*, bool)>(&::VROSC::BeatCounterUI::AbletonLinkToggled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182c974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "AbletonLinkToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.SetLinkLatencySliderValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)(float_t)>(&::VROSC::BeatCounterUI::SetLinkLatencySliderValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1829df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "SetLinkLatencySliderValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.LinkLatencyChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)(float_t)>(&::VROSC::BeatCounterUI::LinkLatencyChanged)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x182c9f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "LinkLatencyChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.LinkLatencyReset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)(::VROSC::ClickData*)>(&::VROSC::BeatCounterUI::LinkLatencyReset)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x182ca98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "LinkLatencyReset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.SetLinkPeersDisplayValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)(int32_t)>(&::VROSC::BeatCounterUI::SetLinkPeersDisplayValue)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x182aea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "SetLinkPeersDisplayValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.SetMetronomeMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)(int32_t)>(&::VROSC::BeatCounterUI::SetMetronomeMode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x182cb0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "SetMetronomeMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.SetMetronomeMedium
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)(int32_t)>(&::VROSC::BeatCounterUI::SetMetronomeMedium)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x182cb70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "SetMetronomeMedium",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.SetMetronomeMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)(::VROSC::Metronome_Mode)>(&::VROSC::BeatCounterUI::SetMetronomeMode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x182cbd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "SetMetronomeMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Metronome_Mode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.SetMetronomeMedium
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)(::VROSC::Metronome_Medium)>(&::VROSC::BeatCounterUI::SetMetronomeMedium)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x182cbf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "SetMetronomeMedium",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Metronome_Medium>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.LoopStationHasLoopsChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)(bool)>(&::VROSC::BeatCounterUI::LoopStationHasLoopsChanged)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x182bafc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "LoopStationHasLoopsChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.UpdateUI
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)()>(&::VROSC::BeatCounterUI::UpdateUI)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182c1e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "UpdateUI",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI.UpdateText
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)()>(&::VROSC::BeatCounterUI::UpdateText)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182b6ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "UpdateText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounterUI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounterUI::*)()>(&::VROSC::BeatCounterUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x182cc1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::UISlideToggle>& VROSC::BeatCounterUI::__cordl_internal_get__syncSourceButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncSourceButton;
}
constexpr ::UnityW<::VROSC::UISlideToggle> const& VROSC::BeatCounterUI::__cordl_internal_get__syncSourceButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncSourceButton;
}
constexpr void VROSC::BeatCounterUI::__cordl_internal_set__syncSourceButton(::UnityW<::VROSC::UISlideToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____syncSourceButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISlider>& VROSC::BeatCounterUI::__cordl_internal_get__bpmSlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bpmSlider;
}
constexpr ::UnityW<::VROSC::UISlider> const& VROSC::BeatCounterUI::__cordl_internal_get__bpmSlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bpmSlider;
}
constexpr void VROSC::BeatCounterUI::__cordl_internal_set__bpmSlider(::UnityW<::VROSC::UISlider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bpmSlider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::BeatCounterUI::__cordl_internal_get__bpmResetButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bpmResetButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::BeatCounterUI::__cordl_internal_get__bpmResetButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bpmResetButton;
}
constexpr void VROSC::BeatCounterUI::__cordl_internal_set__bpmResetButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bpmResetButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISpinner>& VROSC::BeatCounterUI::__cordl_internal_get__beatsPerBar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatsPerBar;
}
constexpr ::UnityW<::VROSC::UISpinner> const& VROSC::BeatCounterUI::__cordl_internal_get__beatsPerBar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatsPerBar;
}
constexpr void VROSC::BeatCounterUI::__cordl_internal_set__beatsPerBar(::UnityW<::VROSC::UISpinner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatsPerBar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISpinner>& VROSC::BeatCounterUI::__cordl_internal_get__metronomeMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metronomeMode;
}
constexpr ::UnityW<::VROSC::UISpinner> const& VROSC::BeatCounterUI::__cordl_internal_get__metronomeMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metronomeMode;
}
constexpr void VROSC::BeatCounterUI::__cordl_internal_set__metronomeMode(::UnityW<::VROSC::UISpinner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____metronomeMode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISpinner>& VROSC::BeatCounterUI::__cordl_internal_get__metronomeMedium()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metronomeMedium;
}
constexpr ::UnityW<::VROSC::UISpinner> const& VROSC::BeatCounterUI::__cordl_internal_get__metronomeMedium() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metronomeMedium;
}
constexpr void VROSC::BeatCounterUI::__cordl_internal_set__metronomeMedium(::UnityW<::VROSC::UISpinner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____metronomeMedium)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::BeatCounterUI::__cordl_internal_get__bpm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bpm;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::BeatCounterUI::__cordl_internal_get__bpm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bpm;
}
constexpr void VROSC::BeatCounterUI::__cordl_internal_set__bpm(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bpm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISlideToggle>& VROSC::BeatCounterUI::__cordl_internal_get__abletonLinkButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____abletonLinkButton;
}
constexpr ::UnityW<::VROSC::UISlideToggle> const& VROSC::BeatCounterUI::__cordl_internal_get__abletonLinkButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____abletonLinkButton;
}
constexpr void VROSC::BeatCounterUI::__cordl_internal_set__abletonLinkButton(::UnityW<::VROSC::UISlideToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____abletonLinkButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISlider>& VROSC::BeatCounterUI::__cordl_internal_get__linkLatencySlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkLatencySlider;
}
constexpr ::UnityW<::VROSC::UISlider> const& VROSC::BeatCounterUI::__cordl_internal_get__linkLatencySlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkLatencySlider;
}
constexpr void VROSC::BeatCounterUI::__cordl_internal_set__linkLatencySlider(::UnityW<::VROSC::UISlider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____linkLatencySlider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::BeatCounterUI::__cordl_internal_get__linkLatencyResetButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkLatencyResetButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::BeatCounterUI::__cordl_internal_get__linkLatencyResetButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkLatencyResetButton;
}
constexpr void VROSC::BeatCounterUI::__cordl_internal_set__linkLatencyResetButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____linkLatencyResetButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::BeatCounterUI::__cordl_internal_get__linkPeersDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkPeersDisplay;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::BeatCounterUI::__cordl_internal_get__linkPeersDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkPeersDisplay;
}
constexpr void VROSC::BeatCounterUI::__cordl_internal_set__linkPeersDisplay(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____linkPeersDisplay)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::BeatCounterUI::__cordl_internal_get__setToDefaultBPMWhenGrabbed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setToDefaultBPMWhenGrabbed;
}
constexpr bool const& VROSC::BeatCounterUI::__cordl_internal_get__setToDefaultBPMWhenGrabbed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setToDefaultBPMWhenGrabbed;
}
constexpr void VROSC::BeatCounterUI::__cordl_internal_set__setToDefaultBPMWhenGrabbed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____setToDefaultBPMWhenGrabbed = value;
}
constexpr bool& VROSC::BeatCounterUI::__cordl_internal_get__syncIsInternalDefaultValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncIsInternalDefaultValue;
}
constexpr bool const& VROSC::BeatCounterUI::__cordl_internal_get__syncIsInternalDefaultValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncIsInternalDefaultValue;
}
constexpr void VROSC::BeatCounterUI::__cordl_internal_set__syncIsInternalDefaultValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____syncIsInternalDefaultValue = value;
}
constexpr bool& VROSC::BeatCounterUI::__cordl_internal_get__syncIsManualBPM()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncIsManualBPM;
}
constexpr bool const& VROSC::BeatCounterUI::__cordl_internal_get__syncIsManualBPM() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncIsManualBPM;
}
constexpr void VROSC::BeatCounterUI::__cordl_internal_set__syncIsManualBPM(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____syncIsManualBPM = value;
}
constexpr bool& VROSC::BeatCounterUI::__cordl_internal_get__userIsGrabbingSlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userIsGrabbingSlider;
}
constexpr bool const& VROSC::BeatCounterUI::__cordl_internal_get__userIsGrabbingSlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userIsGrabbingSlider;
}
constexpr void VROSC::BeatCounterUI::__cordl_internal_set__userIsGrabbingSlider(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____userIsGrabbingSlider = value;
}
constexpr bool& VROSC::BeatCounterUI::__cordl_internal_get__looperHadLoops()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____looperHadLoops;
}
constexpr bool const& VROSC::BeatCounterUI::__cordl_internal_get__looperHadLoops() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____looperHadLoops;
}
constexpr void VROSC::BeatCounterUI::__cordl_internal_set__looperHadLoops(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____looperHadLoops = value;
}
constexpr int32_t& VROSC::BeatCounterUI::__cordl_internal_get__DisplayedLinkPeers_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisplayedLinkPeers_k__BackingField;
}
constexpr int32_t const& VROSC::BeatCounterUI::__cordl_internal_get__DisplayedLinkPeers_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisplayedLinkPeers_k__BackingField;
}
constexpr void VROSC::BeatCounterUI::__cordl_internal_set__DisplayedLinkPeers_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DisplayedLinkPeers_k__BackingField = value;
}
inline int32_t VROSC::BeatCounterUI::get_DisplayedLinkPeers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "get_DisplayedLinkPeers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::BeatCounterUI::set_DisplayedLinkPeers(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "set_DisplayedLinkPeers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::BeatCounterUI::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BeatCounterUI::Setup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BeatCounterUI::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BeatCounterUI::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BeatCounterUI::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BeatCounterUI::ResetAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "ResetAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BeatCounterUI::SetSyncIsManualBPM(bool  syncIsManualBPM)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "SetSyncIsManualBPM",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, syncIsManualBPM);
}
inline void VROSC::BeatCounterUI::SyncSourceToggled(::VROSC::InputDevice*  inputDevice, bool  syncIsManualBPM)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "SyncSourceToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputDevice, syncIsManualBPM);
}
inline void VROSC::BeatCounterUI::SyncSourceToggled(::VROSC::InputDevice*  inputDevice, bool  syncIsManualBPM, ::VROSC::BeatCounterUI_SyncToggleSource  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "SyncSourceToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BeatCounterUI_SyncToggleSource>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputDevice, syncIsManualBPM, source);
}
inline void VROSC::BeatCounterUI::SetBpmSliderValue(double_t  bpm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "SetBpmSliderValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpm);
}
inline void VROSC::BeatCounterUI::BpmSliderGrabbed(bool  isGrabbed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "BpmSliderGrabbed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isGrabbed);
}
inline void VROSC::BeatCounterUI::BpmSliderValueChanged(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "BpmSliderValueChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t VROSC::BeatCounterUI::GetBpmSliderBpm(float_t  sliderValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "GetBpmSliderBpm",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method, sliderValue);
}
inline float_t VROSC::BeatCounterUI::GetBpmSliderValue(double_t  bpm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "GetBpmSliderValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, bpm);
}
inline void VROSC::BeatCounterUI::BpmChanged(double_t  bpm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "BpmChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpm);
}
inline void VROSC::BeatCounterUI::BpmReset(::VROSC::ClickData*  clickData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "BpmReset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clickData);
}
inline void VROSC::BeatCounterUI::ShowOrHideBPMReset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "ShowOrHideBPMReset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BeatCounterUI::SetBeatsPerBar(int32_t  spinnerIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "SetBeatsPerBar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, spinnerIndex);
}
inline void VROSC::BeatCounterUI::BeatsPerBarChanged(int32_t  beatsPerBar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "BeatsPerBarChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatsPerBar);
}
inline void VROSC::BeatCounterUI::AbletonLinkToggled(::VROSC::InputDevice*  inputDevice, bool  toggled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "AbletonLinkToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputDevice, toggled);
}
inline void VROSC::BeatCounterUI::SetLinkLatencySliderValue(float_t  latency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "SetLinkLatencySliderValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, latency);
}
inline void VROSC::BeatCounterUI::LinkLatencyChanged(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "LinkLatencyChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::BeatCounterUI::LinkLatencyReset(::VROSC::ClickData*  clickData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "LinkLatencyReset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clickData);
}
inline void VROSC::BeatCounterUI::SetLinkPeersDisplayValue(int32_t  numPeers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "SetLinkPeersDisplayValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numPeers);
}
inline void VROSC::BeatCounterUI::SetMetronomeMode(int32_t  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "SetMetronomeMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mode);
}
inline void VROSC::BeatCounterUI::SetMetronomeMedium(int32_t  medium)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "SetMetronomeMedium",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, medium);
}
inline void VROSC::BeatCounterUI::SetMetronomeMode(::VROSC::Metronome_Mode  metronomeMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "SetMetronomeMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Metronome_Mode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, metronomeMode);
}
inline void VROSC::BeatCounterUI::SetMetronomeMedium(::VROSC::Metronome_Medium  metronomeMedium)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "SetMetronomeMedium",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Metronome_Medium>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, metronomeMedium);
}
inline void VROSC::BeatCounterUI::LoopStationHasLoopsChanged(bool  hasLoops)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "LoopStationHasLoopsChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hasLoops);
}
inline void VROSC::BeatCounterUI::UpdateUI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "UpdateUI",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BeatCounterUI::UpdateText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        "UpdateText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BeatCounterUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounterUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::BeatCounterUI* VROSC::BeatCounterUI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::BeatCounterUI*>());
}
// Ctor Parameters []
constexpr ::VROSC::BeatCounterUI::BeatCounterUI()   {
}
