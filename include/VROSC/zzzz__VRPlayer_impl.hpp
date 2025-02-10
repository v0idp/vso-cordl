#pragma once
// IWYU pragma private; include "VROSC/VRPlayer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__VRPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__HandPlacedDashboardHelper_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__HighlightControllerComponentsManager_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__InputSettings_def.hpp"
#include "VROSC/zzzz__ScreenFade_def.hpp"
#include "VROSC/zzzz__TutorialInputDeviceManager_def.hpp"
#include "VROSC/zzzz__UIHelpers_def.hpp"
#include "VROSC/zzzz__VRPlayer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::VRPlayer_ControllerType::VRPlayer_ControllerType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::VRPlayer_ControllerType::VRPlayer_ControllerType()   {
}
constexpr ::VROSC::VRPlayer_ControllerType  VROSC::VRPlayer_ControllerType::OculusTouch{static_cast<int32_t>(0x0)};
constexpr ::VROSC::VRPlayer_ControllerType  VROSC::VRPlayer_ControllerType::ViveWand{static_cast<int32_t>(0x1)};
constexpr ::VROSC::VRPlayer_ControllerType  VROSC::VRPlayer_ControllerType::ValveIndex{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::VROSC::VRPlayer_OverrideControllerPrefab._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VRPlayer_OverrideControllerPrefab::*)()>(&::VROSC::VRPlayer_OverrideControllerPrefab::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1708a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer_OverrideControllerPrefab*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::VRPlayer_ControllerType& VROSC::VRPlayer_OverrideControllerPrefab::__cordl_internal_get_controllerType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerType;
}
constexpr ::VROSC::VRPlayer_ControllerType const& VROSC::VRPlayer_OverrideControllerPrefab::__cordl_internal_get_controllerType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerType;
}
constexpr void VROSC::VRPlayer_OverrideControllerPrefab::__cordl_internal_set_controllerType(::VROSC::VRPlayer_ControllerType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controllerType = value;
}
constexpr ::StringW& VROSC::VRPlayer_OverrideControllerPrefab::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& VROSC::VRPlayer_OverrideControllerPrefab::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void VROSC::VRPlayer_OverrideControllerPrefab::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InputDevice>& VROSC::VRPlayer_OverrideControllerPrefab::__cordl_internal_get_leftPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftPrefab;
}
constexpr ::UnityW<::VROSC::InputDevice> const& VROSC::VRPlayer_OverrideControllerPrefab::__cordl_internal_get_leftPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftPrefab;
}
constexpr void VROSC::VRPlayer_OverrideControllerPrefab::__cordl_internal_set_leftPrefab(::UnityW<::VROSC::InputDevice>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InputDevice>& VROSC::VRPlayer_OverrideControllerPrefab::__cordl_internal_get_rightPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightPrefab;
}
constexpr ::UnityW<::VROSC::InputDevice> const& VROSC::VRPlayer_OverrideControllerPrefab::__cordl_internal_get_rightPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightPrefab;
}
constexpr void VROSC::VRPlayer_OverrideControllerPrefab::__cordl_internal_set_rightPrefab(::UnityW<::VROSC::InputDevice>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::VRPlayer_OverrideControllerPrefab::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer_OverrideControllerPrefab*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::VRPlayer_OverrideControllerPrefab* VROSC::VRPlayer_OverrideControllerPrefab::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::VRPlayer_OverrideControllerPrefab*>());
}
// Ctor Parameters []
constexpr ::VROSC::VRPlayer_OverrideControllerPrefab::VRPlayer_OverrideControllerPrefab()   {
}
//  Writing Method size for method: ::VROSC::VRPlayer.get_Right
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::InputDevice> (::VROSC::VRPlayer::*)()>(&::VROSC::VRPlayer::get_Right)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170831c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "get_Right",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VRPlayer.get_Left
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::InputDevice> (::VROSC::VRPlayer::*)()>(&::VROSC::VRPlayer::get_Left)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1708324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "get_Left",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VRPlayer.get_Camera
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (::VROSC::VRPlayer::*)()>(&::VROSC::VRPlayer::get_Camera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170832c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "get_Camera",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VRPlayer.get_ScreenFade
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::ScreenFade> (::VROSC::VRPlayer::*)()>(&::VROSC::VRPlayer::get_ScreenFade)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1708334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "get_ScreenFade",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VRPlayer.get_Highlighting
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::HighlightControllerComponentsManager> (::VROSC::VRPlayer::*)()>(&::VROSC::VRPlayer::get_Highlighting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170833c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "get_Highlighting",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VRPlayer.get_TutorialInputDevices
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::TutorialInputDeviceManager> (::VROSC::VRPlayer::*)()>(&::VROSC::VRPlayer::get_TutorialInputDevices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1708344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "get_TutorialInputDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VRPlayer.get_HandPlacedDashboardHelper
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::HandPlacedDashboardHelper> (::VROSC::VRPlayer::*)()>(&::VROSC::VRPlayer::get_HandPlacedDashboardHelper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170834c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "get_HandPlacedDashboardHelper",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VRPlayer.get_IsDebugPlayer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::VRPlayer::*)()>(&::VROSC::VRPlayer::get_IsDebugPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1708354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "get_IsDebugPlayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VRPlayer.get_KeyboardAnchor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::VROSC::VRPlayer::*)()>(&::VROSC::VRPlayer::get_KeyboardAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170835c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "get_KeyboardAnchor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VRPlayer.get_InputDevices
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::VROSC::HandType,::UnityW<::VROSC::InputDevice>>* (::VROSC::VRPlayer::*)()>(&::VROSC::VRPlayer::get_InputDevices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1708364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "get_InputDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VRPlayer.set_InputDevices
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VRPlayer::*)(::System::Collections::Generic::Dictionary_2<::VROSC::HandType,::UnityW<::VROSC::InputDevice>>*)>(&::VROSC::VRPlayer::set_InputDevices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170836c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "set_InputDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::VROSC::HandType,::UnityW<::VROSC::InputDevice>>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VRPlayer.get_Controllers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::VRPlayer_ControllerType (::VROSC::VRPlayer::*)()>(&::VROSC::VRPlayer::get_Controllers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1708374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "get_Controllers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VRPlayer.set_Controllers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VRPlayer::*)(::VROSC::VRPlayer_ControllerType)>(&::VROSC::VRPlayer::set_Controllers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170837c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "set_Controllers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::VRPlayer_ControllerType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VRPlayer.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VRPlayer::*)()>(&::VROSC::VRPlayer::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1708384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VRPlayer.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VRPlayer::*)(::VROSC::InputSettings*)>(&::VROSC::VRPlayer::Setup)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1708388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VRPlayer.ForceLightFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VRPlayer::*)()>(&::VROSC::VRPlayer::ForceLightFrame)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1708648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "ForceLightFrame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VRPlayer.MuteFrames
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VRPlayer::*)(bool)>(&::VROSC::VRPlayer::MuteFrames)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x17087b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "MuteFrames",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VRPlayer.UpdateInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VRPlayer::*)()>(&::VROSC::VRPlayer::UpdateInput)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1708934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "UpdateInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VRPlayer.GetControllerByHand
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::InputDevice> (::VROSC::VRPlayer::*)(bool)>(&::VROSC::VRPlayer::GetControllerByHand)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1708974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "GetControllerByHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VRPlayer.GetMouthPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::VRPlayer::*)()>(&::VROSC::VRPlayer::GetMouthPosition)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x170898c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "GetMouthPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VRPlayer.ShowControllers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VRPlayer::*)(bool)>(&::VROSC::VRPlayer::ShowControllers)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1708a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "ShowControllers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VRPlayer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VRPlayer::*)()>(&::VROSC::VRPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1708a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& VROSC::VRPlayer::__cordl_internal_get__camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& VROSC::VRPlayer::__cordl_internal_get__camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camera;
}
constexpr void VROSC::VRPlayer::__cordl_internal_set__camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ScreenFade>& VROSC::VRPlayer::__cordl_internal_get__screenFade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____screenFade;
}
constexpr ::UnityW<::VROSC::ScreenFade> const& VROSC::VRPlayer::__cordl_internal_get__screenFade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____screenFade;
}
constexpr void VROSC::VRPlayer::__cordl_internal_set__screenFade(::UnityW<::VROSC::ScreenFade>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____screenFade)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::VRPlayer::__cordl_internal_get__isDebugPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDebugPlayer;
}
constexpr bool const& VROSC::VRPlayer::__cordl_internal_get__isDebugPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDebugPlayer;
}
constexpr void VROSC::VRPlayer::__cordl_internal_set__isDebugPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDebugPlayer = value;
}
constexpr ::UnityW<::VROSC::InputDevice>& VROSC::VRPlayer::__cordl_internal_get__right()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____right;
}
constexpr ::UnityW<::VROSC::InputDevice> const& VROSC::VRPlayer::__cordl_internal_get__right() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____right;
}
constexpr void VROSC::VRPlayer::__cordl_internal_set__right(::UnityW<::VROSC::InputDevice>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____right)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InputDevice>& VROSC::VRPlayer::__cordl_internal_get__left()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____left;
}
constexpr ::UnityW<::VROSC::InputDevice> const& VROSC::VRPlayer::__cordl_internal_get__left() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____left;
}
constexpr void VROSC::VRPlayer::__cordl_internal_set__left(::UnityW<::VROSC::InputDevice>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____left)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::VRPlayer::__cordl_internal_get__keyboardAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyboardAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::VRPlayer::__cordl_internal_get__keyboardAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyboardAnchor;
}
constexpr void VROSC::VRPlayer::__cordl_internal_set__keyboardAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keyboardAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::HandPlacedDashboardHelper>& VROSC::VRPlayer::__cordl_internal_get__handPlacedDashboardHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handPlacedDashboardHelper;
}
constexpr ::UnityW<::VROSC::HandPlacedDashboardHelper> const& VROSC::VRPlayer::__cordl_internal_get__handPlacedDashboardHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handPlacedDashboardHelper;
}
constexpr void VROSC::VRPlayer::__cordl_internal_set__handPlacedDashboardHelper(::UnityW<::VROSC::HandPlacedDashboardHelper>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____handPlacedDashboardHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::HighlightControllerComponentsManager>& VROSC::VRPlayer::__cordl_internal_get__highlighting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlighting;
}
constexpr ::UnityW<::VROSC::HighlightControllerComponentsManager> const& VROSC::VRPlayer::__cordl_internal_get__highlighting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlighting;
}
constexpr void VROSC::VRPlayer::__cordl_internal_set__highlighting(::UnityW<::VROSC::HighlightControllerComponentsManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____highlighting)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::TutorialInputDeviceManager>& VROSC::VRPlayer::__cordl_internal_get__tutorialInputDeviceManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tutorialInputDeviceManager;
}
constexpr ::UnityW<::VROSC::TutorialInputDeviceManager> const& VROSC::VRPlayer::__cordl_internal_get__tutorialInputDeviceManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tutorialInputDeviceManager;
}
constexpr void VROSC::VRPlayer::__cordl_internal_set__tutorialInputDeviceManager(::UnityW<::VROSC::TutorialInputDeviceManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tutorialInputDeviceManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::VRPlayer::__cordl_internal_get__leftControllerParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftControllerParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::VRPlayer::__cordl_internal_get__leftControllerParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftControllerParent;
}
constexpr void VROSC::VRPlayer::__cordl_internal_set__leftControllerParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftControllerParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::VRPlayer::__cordl_internal_get__rightControllerParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightControllerParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::VRPlayer::__cordl_internal_get__rightControllerParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightControllerParent;
}
constexpr void VROSC::VRPlayer::__cordl_internal_set__rightControllerParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightControllerParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InputDevice>& VROSC::VRPlayer::__cordl_internal_get__leftControllerPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftControllerPrefab;
}
constexpr ::UnityW<::VROSC::InputDevice> const& VROSC::VRPlayer::__cordl_internal_get__leftControllerPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftControllerPrefab;
}
constexpr void VROSC::VRPlayer::__cordl_internal_set__leftControllerPrefab(::UnityW<::VROSC::InputDevice>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftControllerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InputDevice>& VROSC::VRPlayer::__cordl_internal_get__rightControllerPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightControllerPrefab;
}
constexpr ::UnityW<::VROSC::InputDevice> const& VROSC::VRPlayer::__cordl_internal_get__rightControllerPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightControllerPrefab;
}
constexpr void VROSC::VRPlayer::__cordl_internal_set__rightControllerPrefab(::UnityW<::VROSC::InputDevice>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightControllerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIHelpers>& VROSC::VRPlayer::__cordl_internal_get__leftUIHelpers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftUIHelpers;
}
constexpr ::UnityW<::VROSC::UIHelpers> const& VROSC::VRPlayer::__cordl_internal_get__leftUIHelpers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftUIHelpers;
}
constexpr void VROSC::VRPlayer::__cordl_internal_set__leftUIHelpers(::UnityW<::VROSC::UIHelpers>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftUIHelpers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIHelpers>& VROSC::VRPlayer::__cordl_internal_get__rightUIHelpers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightUIHelpers;
}
constexpr ::UnityW<::VROSC::UIHelpers> const& VROSC::VRPlayer::__cordl_internal_get__rightUIHelpers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightUIHelpers;
}
constexpr void VROSC::VRPlayer::__cordl_internal_set__rightUIHelpers(::UnityW<::VROSC::UIHelpers>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightUIHelpers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::VROSC::VRPlayer_OverrideControllerPrefab*,::Array<::VROSC::VRPlayer_OverrideControllerPrefab*>*>& VROSC::VRPlayer::__cordl_internal_get__overrideControllerPrefabs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overrideControllerPrefabs;
}
constexpr ::ArrayW<::VROSC::VRPlayer_OverrideControllerPrefab*,::Array<::VROSC::VRPlayer_OverrideControllerPrefab*>*> const& VROSC::VRPlayer::__cordl_internal_get__overrideControllerPrefabs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overrideControllerPrefabs;
}
constexpr void VROSC::VRPlayer::__cordl_internal_set__overrideControllerPrefabs(::ArrayW<::VROSC::VRPlayer_OverrideControllerPrefab*,::Array<::VROSC::VRPlayer_OverrideControllerPrefab*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overrideControllerPrefabs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::VRPlayer::__cordl_internal_get__connectedControllerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectedControllerName;
}
constexpr ::StringW const& VROSC::VRPlayer::__cordl_internal_get__connectedControllerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectedControllerName;
}
constexpr void VROSC::VRPlayer::__cordl_internal_set__connectedControllerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedControllerName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::VROSC::HandType,::UnityW<::VROSC::InputDevice>>*& VROSC::VRPlayer::__cordl_internal_get__InputDevices_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputDevices_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::VROSC::HandType,::UnityW<::VROSC::InputDevice>>* const& VROSC::VRPlayer::__cordl_internal_get__InputDevices_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputDevices_k__BackingField;
}
constexpr void VROSC::VRPlayer::__cordl_internal_set__InputDevices_k__BackingField(::System::Collections::Generic::Dictionary_2<::VROSC::HandType,::UnityW<::VROSC::InputDevice>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____InputDevices_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::VRPlayer_ControllerType& VROSC::VRPlayer::__cordl_internal_get__Controllers_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Controllers_k__BackingField;
}
constexpr ::VROSC::VRPlayer_ControllerType const& VROSC::VRPlayer::__cordl_internal_get__Controllers_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Controllers_k__BackingField;
}
constexpr void VROSC::VRPlayer::__cordl_internal_set__Controllers_k__BackingField(::VROSC::VRPlayer_ControllerType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Controllers_k__BackingField = value;
}
inline ::UnityW<::VROSC::InputDevice> VROSC::VRPlayer::get_Right()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "get_Right",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::InputDevice>, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::InputDevice> VROSC::VRPlayer::get_Left()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "get_Left",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::InputDevice>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> VROSC::VRPlayer::get_Camera()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "get_Camera",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::ScreenFade> VROSC::VRPlayer::get_ScreenFade()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "get_ScreenFade",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::ScreenFade>, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::HighlightControllerComponentsManager> VROSC::VRPlayer::get_Highlighting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "get_Highlighting",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::HighlightControllerComponentsManager>, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::TutorialInputDeviceManager> VROSC::VRPlayer::get_TutorialInputDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "get_TutorialInputDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::TutorialInputDeviceManager>, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::HandPlacedDashboardHelper> VROSC::VRPlayer::get_HandPlacedDashboardHelper()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "get_HandPlacedDashboardHelper",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::HandPlacedDashboardHelper>, false>(this, ___internal_method);
}
inline bool VROSC::VRPlayer::get_IsDebugPlayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "get_IsDebugPlayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> VROSC::VRPlayer::get_KeyboardAnchor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "get_KeyboardAnchor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::VROSC::HandType,::UnityW<::VROSC::InputDevice>>* VROSC::VRPlayer::get_InputDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "get_InputDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::VROSC::HandType,::UnityW<::VROSC::InputDevice>>*, false>(this, ___internal_method);
}
inline void VROSC::VRPlayer::set_InputDevices(::System::Collections::Generic::Dictionary_2<::VROSC::HandType,::UnityW<::VROSC::InputDevice>>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "set_InputDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::VROSC::HandType,::UnityW<::VROSC::InputDevice>>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::VRPlayer_ControllerType VROSC::VRPlayer::get_Controllers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "get_Controllers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::VRPlayer_ControllerType, false>(this, ___internal_method);
}
inline void VROSC::VRPlayer::set_Controllers(::VROSC::VRPlayer_ControllerType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "set_Controllers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::VRPlayer_ControllerType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::VRPlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::VRPlayer::Setup(::VROSC::InputSettings*  inputSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputSettings);
}
inline void VROSC::VRPlayer::ForceLightFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "ForceLightFrame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::VRPlayer::MuteFrames(bool  fade)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "MuteFrames",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fade);
}
inline void VROSC::VRPlayer::UpdateInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "UpdateInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::InputDevice> VROSC::VRPlayer::GetControllerByHand(bool  right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "GetControllerByHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::InputDevice>, false>(this, ___internal_method, right);
}
inline ::UnityEngine::Vector3 VROSC::VRPlayer::GetMouthPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "GetMouthPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void VROSC::VRPlayer::ShowControllers(bool  show)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        "ShowControllers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, show);
}
inline void VROSC::VRPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VRPlayer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::VRPlayer* VROSC::VRPlayer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::VRPlayer*>());
}
// Ctor Parameters []
constexpr ::VROSC::VRPlayer::VRPlayer()   {
}
