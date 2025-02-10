#pragma once
// IWYU pragma private; include "VROSC/LoopPlayerUI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__LoopPlayerUI_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__ClickData_def.hpp"
#include "VROSC/zzzz__Grabable_def.hpp"
#include "VROSC/zzzz__LoopEditorToggle_def.hpp"
#include "VROSC/zzzz__LoopPlayButton_def.hpp"
#include "VROSC/zzzz__LoopPlaybackConfig_def.hpp"
#include "VROSC/zzzz__LoopPlaybackSettingsUI_def.hpp"
#include "VROSC/zzzz__LoopPlayerColorizer_def.hpp"
#include "VROSC/zzzz__LoopPlayerHighlighter_def.hpp"
#include "VROSC/zzzz__LoopPlayer_def.hpp"
#include "VROSC/zzzz__LoopStationLaunchpadHandler_def.hpp"
#include "VROSC/zzzz__LoopStationRecorder_def.hpp"
#include "VROSC/zzzz__LoopStation_def.hpp"
#include "VROSC/zzzz__LoopVolumeController_def.hpp"
#include "VROSC/zzzz__TransformDataController_def.hpp"
#include "VROSC/zzzz__UIButton_def.hpp"
#include "VROSC/zzzz__UIHoldButton_def.hpp"
//  Writing Method size for method: ::VROSC::LoopPlayerUI.get_MainColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::VROSC::LoopPlayerUI::*)()>(&::VROSC::LoopPlayerUI::get_MainColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18a2e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "get_MainColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerUI.set_DisplayName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerUI::*)(::StringW)>(&::VROSC::LoopPlayerUI::set_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a2e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "set_DisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerUI.get_DisplayName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::LoopPlayerUI::*)()>(&::VROSC::LoopPlayerUI::get_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a2e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "get_DisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerUI.get_VolumeController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopVolumeController* (::VROSC::LoopPlayerUI::*)()>(&::VROSC::LoopPlayerUI::get_VolumeController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a2e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "get_VolumeController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerUI.get_PlayButton
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::LoopPlayButton> (::VROSC::LoopPlayerUI::*)()>(&::VROSC::LoopPlayerUI::get_PlayButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a2e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "get_PlayButton",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerUI.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerUI::*)()>(&::VROSC::LoopPlayerUI::Awake)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x18a2e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerUI.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerUI::*)()>(&::VROSC::LoopPlayerUI::OnDestroy)> {
  constexpr static std::size_t size = 0x648;
  constexpr static std::size_t addrs = 0x18a372c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerUI.OnRecordingStateChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerUI::*)(::VROSC::LoopStationRecorder_RecordingState)>(&::VROSC::LoopPlayerUI::OnRecordingStateChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18a3f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "OnRecordingStateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationRecorder_RecordingState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerUI.LoopAmountChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerUI::*)(int32_t)>(&::VROSC::LoopPlayerUI::LoopAmountChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18a3ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "LoopAmountChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerUI.UpdateCanUseCopy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerUI::*)()>(&::VROSC::LoopPlayerUI::UpdateCanUseCopy)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x18a3f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "UpdateCanUseCopy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerUI.CopyPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerUI::*)(::VROSC::ClickData*)>(&::VROSC::LoopPlayerUI::CopyPressed)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x18a3ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "CopyPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerUI.UpdateHovering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerUI::*)(bool)>(&::VROSC::LoopPlayerUI::UpdateHovering)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x18a3690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "UpdateHovering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerUI.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerUI::*)(::VROSC::LoopStation*, ::VROSC::LoopPlayer*, ::UnityEngine::Color, ::StringW, ::VROSC::LoopPlaybackConfig*)>(&::VROSC::LoopPlayerUI::Setup)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18a04fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerUI.DeleteFromButton
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerUI::*)()>(&::VROSC::LoopPlayerUI::DeleteFromButton)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18a4024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "DeleteFromButton",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerUI.ShowAsMuted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerUI::*)(bool)>(&::VROSC::LoopPlayerUI::ShowAsMuted)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x18a1b58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "ShowAsMuted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerUI.RenameButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerUI::*)()>(&::VROSC::LoopPlayerUI::RenameButtonPressed)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x18a4040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "RenameButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerUI.RanameComplete
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerUI::*)(::StringW)>(&::VROSC::LoopPlayerUI::RanameComplete)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x18a4234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "RanameComplete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerUI.SetDisplayName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerUI::*)(::StringW)>(&::VROSC::LoopPlayerUI::SetDisplayName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18a11d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "SetDisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerUI.SetColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerUI::*)(::UnityEngine::Color)>(&::VROSC::LoopPlayerUI::SetColor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x18a4278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "SetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerUI.KeyboardClosed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerUI::*)()>(&::VROSC::LoopPlayerUI::KeyboardClosed)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x18a4334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "KeyboardClosed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerUI.LoadLaunchPad
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerUI::*)(::StringW, ::VROSC::TransformDataController*)>(&::VROSC::LoopPlayerUI::LoadLaunchPad)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18a44cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "LoadLaunchPad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TransformDataController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerUI.Highlight
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerUI::*)(bool)>(&::VROSC::LoopPlayerUI::Highlight)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18a2e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "Highlight",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerUI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerUI::*)()>(&::VROSC::LoopPlayerUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a44e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::LoopPlayerUI::__cordl_internal_get__nameLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nameLabel;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::LoopPlayerUI::__cordl_internal_get__nameLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nameLabel;
}
constexpr void VROSC::LoopPlayerUI::__cordl_internal_set__nameLabel(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nameLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::Grabable>& VROSC::LoopPlayerUI::__cordl_internal_get__hoverCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverCheck;
}
constexpr ::UnityW<::VROSC::Grabable> const& VROSC::LoopPlayerUI::__cordl_internal_get__hoverCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverCheck;
}
constexpr void VROSC::LoopPlayerUI::__cordl_internal_set__hoverCheck(::UnityW<::VROSC::Grabable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hoverCheck)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::LoopPlayerUI::__cordl_internal_get__hoveringState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoveringState;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::LoopPlayerUI::__cordl_internal_get__hoveringState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoveringState;
}
constexpr void VROSC::LoopPlayerUI::__cordl_internal_set__hoveringState(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hoveringState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopPlaybackSettingsUI>& VROSC::LoopPlayerUI::__cordl_internal_get__settingsMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsMenu;
}
constexpr ::UnityW<::VROSC::LoopPlaybackSettingsUI> const& VROSC::LoopPlayerUI::__cordl_internal_get__settingsMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsMenu;
}
constexpr void VROSC::LoopPlayerUI::__cordl_internal_set__settingsMenu(::UnityW<::VROSC::LoopPlaybackSettingsUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsMenu)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopPlayButton>& VROSC::LoopPlayerUI::__cordl_internal_get__playButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playButton;
}
constexpr ::UnityW<::VROSC::LoopPlayButton> const& VROSC::LoopPlayerUI::__cordl_internal_get__playButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playButton;
}
constexpr void VROSC::LoopPlayerUI::__cordl_internal_set__playButton(::UnityW<::VROSC::LoopPlayButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIHoldButton>& VROSC::LoopPlayerUI::__cordl_internal_get__deleteButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deleteButton;
}
constexpr ::UnityW<::VROSC::UIHoldButton> const& VROSC::LoopPlayerUI::__cordl_internal_get__deleteButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deleteButton;
}
constexpr void VROSC::LoopPlayerUI::__cordl_internal_set__deleteButton(::UnityW<::VROSC::UIHoldButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____deleteButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopPlayerColorizer>& VROSC::LoopPlayerUI::__cordl_internal_get__playerColorizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerColorizer;
}
constexpr ::UnityW<::VROSC::LoopPlayerColorizer> const& VROSC::LoopPlayerUI::__cordl_internal_get__playerColorizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerColorizer;
}
constexpr void VROSC::LoopPlayerUI::__cordl_internal_set__playerColorizer(::UnityW<::VROSC::LoopPlayerColorizer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerColorizer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopPlayerHighlighter>& VROSC::LoopPlayerUI::__cordl_internal_get__highlighter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlighter;
}
constexpr ::UnityW<::VROSC::LoopPlayerHighlighter> const& VROSC::LoopPlayerUI::__cordl_internal_get__highlighter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlighter;
}
constexpr void VROSC::LoopPlayerUI::__cordl_internal_set__highlighter(::UnityW<::VROSC::LoopPlayerHighlighter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____highlighter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopVolumeController*& VROSC::LoopPlayerUI::__cordl_internal_get__volumeController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeController;
}
constexpr ::VROSC::LoopVolumeController* const& VROSC::LoopPlayerUI::__cordl_internal_get__volumeController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeController;
}
constexpr void VROSC::LoopPlayerUI::__cordl_internal_set__volumeController(::VROSC::LoopVolumeController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____volumeController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::LoopPlayerUI::__cordl_internal_get__renameButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renameButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::LoopPlayerUI::__cordl_internal_get__renameButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renameButton;
}
constexpr void VROSC::LoopPlayerUI::__cordl_internal_set__renameButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renameButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::LoopPlayerUI::__cordl_internal_get__copyButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____copyButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::LoopPlayerUI::__cordl_internal_get__copyButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____copyButton;
}
constexpr void VROSC::LoopPlayerUI::__cordl_internal_set__copyButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____copyButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopEditorToggle>& VROSC::LoopPlayerUI::__cordl_internal_get__loopEditorToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopEditorToggle;
}
constexpr ::UnityW<::VROSC::LoopEditorToggle> const& VROSC::LoopPlayerUI::__cordl_internal_get__loopEditorToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopEditorToggle;
}
constexpr void VROSC::LoopPlayerUI::__cordl_internal_set__loopEditorToggle(::UnityW<::VROSC::LoopEditorToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopEditorToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopStationLaunchpadHandler>& VROSC::LoopPlayerUI::__cordl_internal_get__launchpadHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchpadHandler;
}
constexpr ::UnityW<::VROSC::LoopStationLaunchpadHandler> const& VROSC::LoopPlayerUI::__cordl_internal_get__launchpadHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchpadHandler;
}
constexpr void VROSC::LoopPlayerUI::__cordl_internal_set__launchpadHandler(::UnityW<::VROSC::LoopStationLaunchpadHandler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____launchpadHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::LoopPlayerUI::__cordl_internal_get__DisplayName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisplayName_k__BackingField;
}
constexpr ::StringW const& VROSC::LoopPlayerUI::__cordl_internal_get__DisplayName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisplayName_k__BackingField;
}
constexpr void VROSC::LoopPlayerUI::__cordl_internal_set__DisplayName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____DisplayName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::LoopPlayerUI::__cordl_internal_get_OnDeletePressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDeletePressed;
}
constexpr ::System::Action* const& VROSC::LoopPlayerUI::__cordl_internal_get_OnDeletePressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDeletePressed;
}
constexpr void VROSC::LoopPlayerUI::__cordl_internal_set_OnDeletePressed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnDeletePressed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& VROSC::LoopPlayerUI::__cordl_internal_get_OnRename()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRename;
}
constexpr ::System::Action_1<::StringW>* const& VROSC::LoopPlayerUI::__cordl_internal_get_OnRename() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRename;
}
constexpr void VROSC::LoopPlayerUI::__cordl_internal_set_OnRename(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnRename)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::Color>*& VROSC::LoopPlayerUI::__cordl_internal_get_OnRecolor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRecolor;
}
constexpr ::System::Action_1<::UnityEngine::Color>* const& VROSC::LoopPlayerUI::__cordl_internal_get_OnRecolor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRecolor;
}
constexpr void VROSC::LoopPlayerUI::__cordl_internal_set_OnRecolor(::System::Action_1<::UnityEngine::Color>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnRecolor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopPlayer>& VROSC::LoopPlayerUI::__cordl_internal_get__loopPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopPlayer;
}
constexpr ::UnityW<::VROSC::LoopPlayer> const& VROSC::LoopPlayerUI::__cordl_internal_get__loopPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopPlayer;
}
constexpr void VROSC::LoopPlayerUI::__cordl_internal_set__loopPlayer(::UnityW<::VROSC::LoopPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopStation>& VROSC::LoopPlayerUI::__cordl_internal_get__loopStation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopStation;
}
constexpr ::UnityW<::VROSC::LoopStation> const& VROSC::LoopPlayerUI::__cordl_internal_get__loopStation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopStation;
}
constexpr void VROSC::LoopPlayerUI::__cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopStation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::LoopPlayerUI::__cordl_internal_get__userIsRecording()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userIsRecording;
}
constexpr bool const& VROSC::LoopPlayerUI::__cordl_internal_get__userIsRecording() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userIsRecording;
}
constexpr void VROSC::LoopPlayerUI::__cordl_internal_set__userIsRecording(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____userIsRecording = value;
}
inline ::UnityEngine::Color VROSC::LoopPlayerUI::get_MainColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "get_MainColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerUI::set_DisplayName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "set_DisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW VROSC::LoopPlayerUI::get_DisplayName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "get_DisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::VROSC::LoopVolumeController* VROSC::LoopPlayerUI::get_VolumeController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "get_VolumeController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopVolumeController*, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::LoopPlayButton> VROSC::LoopPlayerUI::get_PlayButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "get_PlayButton",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::LoopPlayButton>, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerUI::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerUI::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerUI::OnRecordingStateChanged(::VROSC::LoopStationRecorder_RecordingState  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "OnRecordingStateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationRecorder_RecordingState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void VROSC::LoopPlayerUI::LoopAmountChanged(int32_t  amount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "LoopAmountChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, amount);
}
inline void VROSC::LoopPlayerUI::UpdateCanUseCopy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "UpdateCanUseCopy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerUI::CopyPressed(::VROSC::ClickData*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "CopyPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void VROSC::LoopPlayerUI::UpdateHovering(bool  hovering)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "UpdateHovering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hovering);
}
inline void VROSC::LoopPlayerUI::Setup(::VROSC::LoopStation*  loopStation, ::VROSC::LoopPlayer*  loopPlayer, ::UnityEngine::Color  color, ::StringW  displayName, ::VROSC::LoopPlaybackConfig*  config)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loopStation, loopPlayer, color, displayName, config);
}
inline void VROSC::LoopPlayerUI::DeleteFromButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "DeleteFromButton",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerUI::ShowAsMuted(bool  showAsMuted)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "ShowAsMuted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, showAsMuted);
}
inline void VROSC::LoopPlayerUI::RenameButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "RenameButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerUI::RanameComplete(::StringW  displayName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "RanameComplete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, displayName);
}
inline void VROSC::LoopPlayerUI::SetDisplayName(::StringW  displayName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "SetDisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, displayName);
}
inline void VROSC::LoopPlayerUI::SetColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "SetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void VROSC::LoopPlayerUI::KeyboardClosed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "KeyboardClosed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerUI::LoadLaunchPad(::StringW  padID, ::VROSC::TransformDataController*  transformData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "LoadLaunchPad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TransformDataController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, padID, transformData);
}
inline void VROSC::LoopPlayerUI::Highlight(bool  highLight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        "Highlight",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, highLight);
}
inline void VROSC::LoopPlayerUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopPlayerUI* VROSC::LoopPlayerUI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopPlayerUI*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopPlayerUI::LoopPlayerUI()   {
}
