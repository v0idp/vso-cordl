#pragma once
// IWYU pragma private; include "VROSC/LoopStationGroupUI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__LoopStationGroupUI_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__AdjustableMesh_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__InteractionDisabler_def.hpp"
#include "VROSC/zzzz__LoopPlaybackConfigOverride_def.hpp"
#include "VROSC/zzzz__LoopStationGroupMergeUI_def.hpp"
#include "VROSC/zzzz__LoopStationGroupPlaybackUI_def.hpp"
#include "VROSC/zzzz__LoopStationGroup_def.hpp"
#include "VROSC/zzzz__LoopStationLaunchpadHandler_def.hpp"
#include "VROSC/zzzz__LoopStation_def.hpp"
#include "VROSC/zzzz__LoopVolumeController_def.hpp"
#include "VROSC/zzzz__TransformDataController_def.hpp"
#include "VROSC/zzzz__UIButton_def.hpp"
#include "VROSC/zzzz__UIColorPicker_def.hpp"
#include "VROSC/zzzz__UIToggle_def.hpp"
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.get_Volume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::LoopStationGroupUI::*)()>(&::VROSC::LoopStationGroupUI::get_Volume)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18b5644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "get_Volume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.get_IsMuted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopStationGroupUI::*)()>(&::VROSC::LoopStationGroupUI::get_IsMuted)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18b5684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "get_IsMuted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.set_DisplayName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupUI::*)(::StringW)>(&::VROSC::LoopStationGroupUI::set_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18b79a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "set_DisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.get_DisplayName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::LoopStationGroupUI::*)()>(&::VROSC::LoopStationGroupUI::get_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18b79ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "get_DisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.get_PlaybackConfig
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlaybackConfigOverride* (::VROSC::LoopStationGroupUI::*)()>(&::VROSC::LoopStationGroupUI::get_PlaybackConfig)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18b56a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "get_PlaybackConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupUI::*)()>(&::VROSC::LoopStationGroupUI::Awake)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x18b79b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupUI::*)()>(&::VROSC::LoopStationGroupUI::OnDestroy)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x18b7d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupUI::*)(::VROSC::LoopStationGroup*, ::VROSC::LoopStation*, ::VROSC::LoopStationGroup_SetupVariables)>(&::VROSC::LoopStationGroupUI::Setup)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x18b8254;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.OnGroupCountChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupUI::*)(int32_t)>(&::VROSC::LoopStationGroupUI::OnGroupCountChanged)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x18b85bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "OnGroupCountChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.SetInteractable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupUI::*)(bool)>(&::VROSC::LoopStationGroupUI::SetInteractable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x18b8660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "SetInteractable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.SetVolumeOfGroup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupUI::*)(float_t)>(&::VROSC::LoopStationGroupUI::SetVolumeOfGroup)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18b5a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "SetVolumeOfGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.GroupVolumeChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupUI::*)(float_t)>(&::VROSC::LoopStationGroupUI::GroupVolumeChanged)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x18b8688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "GroupVolumeChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.MuteChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupUI::*)(bool)>(&::VROSC::LoopStationGroupUI::MuteChanged)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x18b8810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "MuteChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.SoloChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupUI::*)(bool)>(&::VROSC::LoopStationGroupUI::SoloChanged)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x18b8854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "SoloChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.GlobalVolumeChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupUI::*)(float_t)>(&::VROSC::LoopStationGroupUI::GlobalVolumeChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18b8888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "GlobalVolumeChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.UpdateVolumeOfAllGroups
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupUI::*)()>(&::VROSC::LoopStationGroupUI::UpdateVolumeOfAllGroups)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x18b86c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "UpdateVolumeOfAllGroups",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.ShowAsEmpty
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupUI::*)(bool, bool)>(&::VROSC::LoopStationGroupUI::ShowAsEmpty)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18b888c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.RenameButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupUI::*)()>(&::VROSC::LoopStationGroupUI::RenameButtonPressed)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x18b88cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "RenameButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.RecordingTargetToggled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupUI::*)(::VROSC::InputDevice*, bool)>(&::VROSC::LoopStationGroupUI::RecordingTargetToggled)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x18b8ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "RecordingTargetToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.SetIsRecordingTarget
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupUI::*)(bool)>(&::VROSC::LoopStationGroupUI::SetIsRecordingTarget)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x18b5930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "SetIsRecordingTarget",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.OnNameChangeByKeyboardComplete
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupUI::*)(::StringW)>(&::VROSC::LoopStationGroupUI::OnNameChangeByKeyboardComplete)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x18b8af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "OnNameChangeByKeyboardComplete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.UpdateDisplayName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupUI::*)(::StringW)>(&::VROSC::LoopStationGroupUI::UpdateDisplayName)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x18b59dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "UpdateDisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.KeyboardClosed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupUI::*)()>(&::VROSC::LoopStationGroupUI::KeyboardClosed)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x18b8b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "KeyboardClosed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.LoadLaunchPad
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupUI::*)(::StringW, ::VROSC::TransformDataController*)>(&::VROSC::LoopStationGroupUI::LoadLaunchPad)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x18b6050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "LoadLaunchPad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TransformDataController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.SetColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupUI::*)(::UnityEngine::Color)>(&::VROSC::LoopStationGroupUI::SetColor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x18b84b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "SetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupUI::*)()>(&::VROSC::LoopStationGroupUI::Update)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x18b8d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupUI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupUI::*)()>(&::VROSC::LoopStationGroupUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18b8e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::LoopStationGroupUI::__cordl_internal_get__DisplayName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisplayName_k__BackingField;
}
constexpr ::StringW const& VROSC::LoopStationGroupUI::__cordl_internal_get__DisplayName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisplayName_k__BackingField;
}
constexpr void VROSC::LoopStationGroupUI::__cordl_internal_set__DisplayName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____DisplayName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::LoopStationGroupUI::__cordl_internal_get__groupName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupName;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::LoopStationGroupUI::__cordl_internal_get__groupName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupName;
}
constexpr void VROSC::LoopStationGroupUI::__cordl_internal_set__groupName(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____groupName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::LoopStationGroupUI::__cordl_internal_get__ifEmptyState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ifEmptyState;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::LoopStationGroupUI::__cordl_internal_get__ifEmptyState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ifEmptyState;
}
constexpr void VROSC::LoopStationGroupUI::__cordl_internal_set__ifEmptyState(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ifEmptyState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopVolumeController*& VROSC::LoopStationGroupUI::__cordl_internal_get__volumeController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeController;
}
constexpr ::VROSC::LoopVolumeController* const& VROSC::LoopStationGroupUI::__cordl_internal_get__volumeController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeController;
}
constexpr void VROSC::LoopStationGroupUI::__cordl_internal_set__volumeController(::VROSC::LoopVolumeController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____volumeController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::LoopStationGroupUI::__cordl_internal_get__renameButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renameButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::LoopStationGroupUI::__cordl_internal_get__renameButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renameButton;
}
constexpr void VROSC::LoopStationGroupUI::__cordl_internal_set__renameButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renameButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopStationGroupMergeUI>& VROSC::LoopStationGroupUI::__cordl_internal_get__mergeUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mergeUI;
}
constexpr ::UnityW<::VROSC::LoopStationGroupMergeUI> const& VROSC::LoopStationGroupUI::__cordl_internal_get__mergeUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mergeUI;
}
constexpr void VROSC::LoopStationGroupUI::__cordl_internal_set__mergeUI(::UnityW<::VROSC::LoopStationGroupMergeUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mergeUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIToggle>& VROSC::LoopStationGroupUI::__cordl_internal_get__recordingTargetToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingTargetToggle;
}
constexpr ::UnityW<::VROSC::UIToggle> const& VROSC::LoopStationGroupUI::__cordl_internal_get__recordingTargetToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingTargetToggle;
}
constexpr void VROSC::LoopStationGroupUI::__cordl_internal_set__recordingTargetToggle(::UnityW<::VROSC::UIToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recordingTargetToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopStationGroupPlaybackUI>& VROSC::LoopStationGroupUI::__cordl_internal_get__playBackUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playBackUI;
}
constexpr ::UnityW<::VROSC::LoopStationGroupPlaybackUI> const& VROSC::LoopStationGroupUI::__cordl_internal_get__playBackUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playBackUI;
}
constexpr void VROSC::LoopStationGroupUI::__cordl_internal_set__playBackUI(::UnityW<::VROSC::LoopStationGroupPlaybackUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playBackUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopStationLaunchpadHandler>& VROSC::LoopStationGroupUI::__cordl_internal_get__launchpadHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchpadHandler;
}
constexpr ::UnityW<::VROSC::LoopStationLaunchpadHandler> const& VROSC::LoopStationGroupUI::__cordl_internal_get__launchpadHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchpadHandler;
}
constexpr void VROSC::LoopStationGroupUI::__cordl_internal_set__launchpadHandler(::UnityW<::VROSC::LoopStationLaunchpadHandler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____launchpadHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InteractionDisabler>& VROSC::LoopStationGroupUI::__cordl_internal_get__disabler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabler;
}
constexpr ::UnityW<::VROSC::InteractionDisabler> const& VROSC::LoopStationGroupUI::__cordl_internal_get__disabler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabler;
}
constexpr void VROSC::LoopStationGroupUI::__cordl_internal_set__disabler(::UnityW<::VROSC::InteractionDisabler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disabler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIColorPicker>& VROSC::LoopStationGroupUI::__cordl_internal_get__colorPicker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorPicker;
}
constexpr ::UnityW<::VROSC::UIColorPicker> const& VROSC::LoopStationGroupUI::__cordl_internal_get__colorPicker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorPicker;
}
constexpr void VROSC::LoopStationGroupUI::__cordl_internal_set__colorPicker(::UnityW<::VROSC::UIColorPicker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorPicker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::AdjustableMesh>& VROSC::LoopStationGroupUI::__cordl_internal_get__background()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____background;
}
constexpr ::UnityW<::VROSC::AdjustableMesh> const& VROSC::LoopStationGroupUI::__cordl_internal_get__background() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____background;
}
constexpr void VROSC::LoopStationGroupUI::__cordl_internal_set__background(::UnityW<::VROSC::AdjustableMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____background)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopStationGroup>& VROSC::LoopStationGroupUI::__cordl_internal_get__group()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____group;
}
constexpr ::UnityW<::VROSC::LoopStationGroup> const& VROSC::LoopStationGroupUI::__cordl_internal_get__group() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____group;
}
constexpr void VROSC::LoopStationGroupUI::__cordl_internal_set__group(::UnityW<::VROSC::LoopStationGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____group)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopStation>& VROSC::LoopStationGroupUI::__cordl_internal_get__loopStation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopStation;
}
constexpr ::UnityW<::VROSC::LoopStation> const& VROSC::LoopStationGroupUI::__cordl_internal_get__loopStation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopStation;
}
constexpr void VROSC::LoopStationGroupUI::__cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopStation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline float_t VROSC::LoopStationGroupUI::get_Volume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "get_Volume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool VROSC::LoopStationGroupUI::get_IsMuted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "get_IsMuted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::LoopStationGroupUI::set_DisplayName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "set_DisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW VROSC::LoopStationGroupUI::get_DisplayName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "get_DisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::VROSC::LoopPlaybackConfigOverride* VROSC::LoopStationGroupUI::get_PlaybackConfig()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "get_PlaybackConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopPlaybackConfigOverride*, false>(this, ___internal_method);
}
inline void VROSC::LoopStationGroupUI::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationGroupUI::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationGroupUI::Setup(::VROSC::LoopStationGroup*  group, ::VROSC::LoopStation*  loopStation, ::VROSC::LoopStationGroup_SetupVariables  vars)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, group, loopStation, vars);
}
inline void VROSC::LoopStationGroupUI::OnGroupCountChanged(int32_t  groupCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "OnGroupCountChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupCount);
}
inline void VROSC::LoopStationGroupUI::SetInteractable(bool  interactable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "SetInteractable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactable);
}
inline void VROSC::LoopStationGroupUI::SetVolumeOfGroup(float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "SetVolumeOfGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume);
}
inline void VROSC::LoopStationGroupUI::GroupVolumeChanged(float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "GroupVolumeChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume);
}
inline void VROSC::LoopStationGroupUI::MuteChanged(bool  mute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "MuteChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mute);
}
inline void VROSC::LoopStationGroupUI::SoloChanged(bool  soloOn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "SoloChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, soloOn);
}
inline void VROSC::LoopStationGroupUI::GlobalVolumeChanged(float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "GlobalVolumeChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume);
}
inline void VROSC::LoopStationGroupUI::UpdateVolumeOfAllGroups()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "UpdateVolumeOfAllGroups",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationGroupUI::ShowAsEmpty(bool  isEmpty, bool  byGrab)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isEmpty, byGrab);
}
inline void VROSC::LoopStationGroupUI::RenameButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "RenameButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationGroupUI::RecordingTargetToggled(::VROSC::InputDevice*  inputDevice, bool  toggled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "RecordingTargetToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputDevice, toggled);
}
inline void VROSC::LoopStationGroupUI::SetIsRecordingTarget(bool  isRecordingTarget)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "SetIsRecordingTarget",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isRecordingTarget);
}
inline void VROSC::LoopStationGroupUI::OnNameChangeByKeyboardComplete(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "OnNameChangeByKeyboardComplete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void VROSC::LoopStationGroupUI::UpdateDisplayName(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "UpdateDisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void VROSC::LoopStationGroupUI::KeyboardClosed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "KeyboardClosed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationGroupUI::LoadLaunchPad(::StringW  padID, ::VROSC::TransformDataController*  transformData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "LoadLaunchPad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TransformDataController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, padID, transformData);
}
inline void VROSC::LoopStationGroupUI::SetColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "SetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void VROSC::LoopStationGroupUI::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationGroupUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopStationGroupUI* VROSC::LoopStationGroupUI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopStationGroupUI*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationGroupUI::LoopStationGroupUI()   {
}
