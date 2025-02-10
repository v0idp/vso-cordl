#pragma once
// IWYU pragma private; include "VROSC/DashboardSpawnPoint.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__DashboardSpawnPoint_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/UI/Meshes/zzzz__ProceduralArc_def.hpp"
#include "VROSC/UI/zzzz__UIColorGetter_def.hpp"
#include "VROSC/zzzz__DashboardSpawnPoint_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__TooltipData_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::DashboardSpawnPoint_TriggerCondition::DashboardSpawnPoint_TriggerCondition(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::DashboardSpawnPoint_TriggerCondition::DashboardSpawnPoint_TriggerCondition()   {
}
constexpr ::VROSC::DashboardSpawnPoint_TriggerCondition  VROSC::DashboardSpawnPoint_TriggerCondition::Position{static_cast<int32_t>(0x0)};
constexpr ::VROSC::DashboardSpawnPoint_TriggerCondition  VROSC::DashboardSpawnPoint_TriggerCondition::Direction{static_cast<int32_t>(0x1)};
constexpr ::VROSC::DashboardSpawnPoint_TriggerCondition  VROSC::DashboardSpawnPoint_TriggerCondition::MenuButton{static_cast<int32_t>(0x2)};
constexpr ::VROSC::DashboardSpawnPoint_TriggerCondition  VROSC::DashboardSpawnPoint_TriggerCondition::SpaceBar{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.set_ActivationAmount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DashboardSpawnPoint::*)(float_t)>(&::VROSC::DashboardSpawnPoint::set_ActivationAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x173673c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "set_ActivationAmount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.get_ActivationAmount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::DashboardSpawnPoint::*)()>(&::VROSC::DashboardSpawnPoint::get_ActivationAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1736744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "get_ActivationAmount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.set_ShouldBeDropped
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DashboardSpawnPoint::*)(bool)>(&::VROSC::DashboardSpawnPoint::set_ShouldBeDropped)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x173674c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "set_ShouldBeDropped",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.get_ShouldBeDropped
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::DashboardSpawnPoint::*)()>(&::VROSC::DashboardSpawnPoint::get_ShouldBeDropped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1736758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "get_ShouldBeDropped",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.set_OtherHand
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DashboardSpawnPoint::*)(::VROSC::DashboardSpawnPoint*)>(&::VROSC::DashboardSpawnPoint::set_OtherHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1736760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "set_OtherHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::DashboardSpawnPoint*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.get_OtherHand
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::DashboardSpawnPoint> (::VROSC::DashboardSpawnPoint::*)()>(&::VROSC::DashboardSpawnPoint::get_OtherHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1736768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "get_OtherHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.set_IsRightHand
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DashboardSpawnPoint::*)(bool)>(&::VROSC::DashboardSpawnPoint::set_IsRightHand)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1736770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "set_IsRightHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.get_IsRightHand
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::DashboardSpawnPoint::*)()>(&::VROSC::DashboardSpawnPoint::get_IsRightHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x173677c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "get_IsRightHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.set_DashboardIsAtHand
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DashboardSpawnPoint::*)(bool)>(&::VROSC::DashboardSpawnPoint::set_DashboardIsAtHand)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1736784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "set_DashboardIsAtHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.get_DashboardIsAtHand
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::DashboardSpawnPoint::*)()>(&::VROSC::DashboardSpawnPoint::get_DashboardIsAtHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1736790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "get_DashboardIsAtHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.get_TransformedDirection
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::DashboardSpawnPoint::*)()>(&::VROSC::DashboardSpawnPoint::get_TransformedDirection)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1736798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "get_TransformedDirection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.set_InputDevice
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DashboardSpawnPoint::*)(::VROSC::InputDevice*)>(&::VROSC::DashboardSpawnPoint::set_InputDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17367c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "set_InputDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.get_InputDevice
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::InputDevice> (::VROSC::DashboardSpawnPoint::*)()>(&::VROSC::DashboardSpawnPoint::get_InputDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17367cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "get_InputDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.SetColorOfArc
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DashboardSpawnPoint::*)()>(&::VROSC::DashboardSpawnPoint::SetColorOfArc)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x17367d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "SetColorOfArc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DashboardSpawnPoint::*)()>(&::VROSC::DashboardSpawnPoint::OnEnable)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x173686c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.OnDisable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DashboardSpawnPoint::*)()>(&::VROSC::DashboardSpawnPoint::OnDisable)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1736934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DashboardSpawnPoint::*)(::VROSC::InputDevice*, ::VROSC::DashboardSpawnPoint*, bool)>(&::VROSC::DashboardSpawnPoint::Setup)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x17369f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::DashboardSpawnPoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DashboardSpawnPoint::*)()>(&::VROSC::DashboardSpawnPoint::Start)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1736ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.ButtonPressEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DashboardSpawnPoint::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&::VROSC::DashboardSpawnPoint::ButtonPressEnd)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1736c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "ButtonPressEnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.ButtonPressBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DashboardSpawnPoint::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&::VROSC::DashboardSpawnPoint::ButtonPressBegin)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1736ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "ButtonPressBegin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.SetActivationAmount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DashboardSpawnPoint::*)(float_t)>(&::VROSC::DashboardSpawnPoint::SetActivationAmount)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1736a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "SetActivationAmount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.CanOpenDashboard
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::DashboardSpawnPoint::*)(bool)>(&::VROSC::DashboardSpawnPoint::CanOpenDashboard)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1736cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "CanOpenDashboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.UpdateTriggerCondition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DashboardSpawnPoint::*)(::VROSC::DashboardSpawnPoint_TriggerCondition, bool)>(&::VROSC::DashboardSpawnPoint::UpdateTriggerCondition)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x1736dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "UpdateTriggerCondition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::DashboardSpawnPoint_TriggerCondition>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.UpdateIsAtHand
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DashboardSpawnPoint::*)(bool)>(&::VROSC::DashboardSpawnPoint::UpdateIsAtHand)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1736f14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "UpdateIsAtHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.IsTriggerConditionMet
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::DashboardSpawnPoint::*)(::VROSC::DashboardSpawnPoint_TriggerCondition, bool)>(&::VROSC::DashboardSpawnPoint::IsTriggerConditionMet)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x1736f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "IsTriggerConditionMet",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::DashboardSpawnPoint_TriggerCondition>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DashboardSpawnPoint::*)()>(&::VROSC::DashboardSpawnPoint::OnDrawGizmos)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x17372a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "OnDrawGizmos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DashboardSpawnPoint._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DashboardSpawnPoint::*)()>(&::VROSC::DashboardSpawnPoint::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1737358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::DashboardSpawnPoint::__cordl_internal_get__ActivationAmount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActivationAmount_k__BackingField;
}
constexpr float_t const& VROSC::DashboardSpawnPoint::__cordl_internal_get__ActivationAmount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActivationAmount_k__BackingField;
}
constexpr void VROSC::DashboardSpawnPoint::__cordl_internal_set__ActivationAmount_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ActivationAmount_k__BackingField = value;
}
constexpr bool& VROSC::DashboardSpawnPoint::__cordl_internal_get__ShouldBeDropped_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShouldBeDropped_k__BackingField;
}
constexpr bool const& VROSC::DashboardSpawnPoint::__cordl_internal_get__ShouldBeDropped_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShouldBeDropped_k__BackingField;
}
constexpr void VROSC::DashboardSpawnPoint::__cordl_internal_set__ShouldBeDropped_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShouldBeDropped_k__BackingField = value;
}
constexpr ::UnityW<::VROSC::DashboardSpawnPoint>& VROSC::DashboardSpawnPoint::__cordl_internal_get__OtherHand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OtherHand_k__BackingField;
}
constexpr ::UnityW<::VROSC::DashboardSpawnPoint> const& VROSC::DashboardSpawnPoint::__cordl_internal_get__OtherHand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OtherHand_k__BackingField;
}
constexpr void VROSC::DashboardSpawnPoint::__cordl_internal_set__OtherHand_k__BackingField(::UnityW<::VROSC::DashboardSpawnPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____OtherHand_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::DashboardSpawnPoint::__cordl_internal_get__IsRightHand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsRightHand_k__BackingField;
}
constexpr bool const& VROSC::DashboardSpawnPoint::__cordl_internal_get__IsRightHand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsRightHand_k__BackingField;
}
constexpr void VROSC::DashboardSpawnPoint::__cordl_internal_set__IsRightHand_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsRightHand_k__BackingField = value;
}
constexpr bool& VROSC::DashboardSpawnPoint::__cordl_internal_get__DashboardIsAtHand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DashboardIsAtHand_k__BackingField;
}
constexpr bool const& VROSC::DashboardSpawnPoint::__cordl_internal_get__DashboardIsAtHand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DashboardIsAtHand_k__BackingField;
}
constexpr void VROSC::DashboardSpawnPoint::__cordl_internal_set__DashboardIsAtHand_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DashboardIsAtHand_k__BackingField = value;
}
constexpr ::UnityW<::VROSC::InputDevice>& VROSC::DashboardSpawnPoint::__cordl_internal_get__InputDevice_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputDevice_k__BackingField;
}
constexpr ::UnityW<::VROSC::InputDevice> const& VROSC::DashboardSpawnPoint::__cordl_internal_get__InputDevice_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputDevice_k__BackingField;
}
constexpr void VROSC::DashboardSpawnPoint::__cordl_internal_set__InputDevice_k__BackingField(::UnityW<::VROSC::InputDevice>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____InputDevice_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UI::UIColorGetter>& VROSC::DashboardSpawnPoint::__cordl_internal_get__activeRingColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeRingColor;
}
constexpr ::UnityW<::VROSC::UI::UIColorGetter> const& VROSC::DashboardSpawnPoint::__cordl_internal_get__activeRingColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeRingColor;
}
constexpr void VROSC::DashboardSpawnPoint::__cordl_internal_set__activeRingColor(::UnityW<::VROSC::UI::UIColorGetter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeRingColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::DashboardSpawnPoint::__cordl_internal_get__lookAtSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lookAtSensitivity;
}
constexpr float_t const& VROSC::DashboardSpawnPoint::__cordl_internal_get__lookAtSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lookAtSensitivity;
}
constexpr void VROSC::DashboardSpawnPoint::__cordl_internal_set__lookAtSensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lookAtSensitivity = value;
}
constexpr float_t& VROSC::DashboardSpawnPoint::__cordl_internal_get__lookatTimeRequired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lookatTimeRequired;
}
constexpr float_t const& VROSC::DashboardSpawnPoint::__cordl_internal_get__lookatTimeRequired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lookatTimeRequired;
}
constexpr void VROSC::DashboardSpawnPoint::__cordl_internal_set__lookatTimeRequired(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lookatTimeRequired = value;
}
constexpr ::UnityEngine::Vector3& VROSC::DashboardSpawnPoint::__cordl_internal_get__offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr ::UnityEngine::Vector3 const& VROSC::DashboardSpawnPoint::__cordl_internal_get__offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr void VROSC::DashboardSpawnPoint::__cordl_internal_set__offset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offset = value;
}
constexpr ::UnityW<::VROSC::UI::Meshes::ProceduralArc>& VROSC::DashboardSpawnPoint::__cordl_internal_get__arc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arc;
}
constexpr ::UnityW<::VROSC::UI::Meshes::ProceduralArc> const& VROSC::DashboardSpawnPoint::__cordl_internal_get__arc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arc;
}
constexpr void VROSC::DashboardSpawnPoint::__cordl_internal_set__arc(::UnityW<::VROSC::UI::Meshes::ProceduralArc>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::DashboardSpawnPoint::__cordl_internal_get__YPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____YPressed;
}
constexpr bool const& VROSC::DashboardSpawnPoint::__cordl_internal_get__YPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____YPressed;
}
constexpr void VROSC::DashboardSpawnPoint::__cordl_internal_set__YPressed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____YPressed = value;
}
constexpr bool& VROSC::DashboardSpawnPoint::__cordl_internal_get__showingTooltip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showingTooltip;
}
constexpr bool const& VROSC::DashboardSpawnPoint::__cordl_internal_get__showingTooltip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showingTooltip;
}
constexpr void VROSC::DashboardSpawnPoint::__cordl_internal_set__showingTooltip(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____showingTooltip = value;
}
constexpr ::VROSC::TooltipData*& VROSC::DashboardSpawnPoint::__cordl_internal_get__openTooltip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openTooltip;
}
constexpr ::VROSC::TooltipData* const& VROSC::DashboardSpawnPoint::__cordl_internal_get__openTooltip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openTooltip;
}
constexpr void VROSC::DashboardSpawnPoint::__cordl_internal_set__openTooltip(::VROSC::TooltipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____openTooltip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::TooltipData*& VROSC::DashboardSpawnPoint::__cordl_internal_get__dropTooltip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dropTooltip;
}
constexpr ::VROSC::TooltipData* const& VROSC::DashboardSpawnPoint::__cordl_internal_get__dropTooltip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dropTooltip;
}
constexpr void VROSC::DashboardSpawnPoint::__cordl_internal_set__dropTooltip(::VROSC::TooltipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dropTooltip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::DashboardSpawnPoint::set_ActivationAmount(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "set_ActivationAmount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t VROSC::DashboardSpawnPoint::get_ActivationAmount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "get_ActivationAmount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::DashboardSpawnPoint::set_ShouldBeDropped(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "set_ShouldBeDropped",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::DashboardSpawnPoint::get_ShouldBeDropped()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "get_ShouldBeDropped",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::DashboardSpawnPoint::set_OtherHand(::VROSC::DashboardSpawnPoint*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "set_OtherHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::DashboardSpawnPoint*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::VROSC::DashboardSpawnPoint> VROSC::DashboardSpawnPoint::get_OtherHand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "get_OtherHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::DashboardSpawnPoint>, false>(this, ___internal_method);
}
inline void VROSC::DashboardSpawnPoint::set_IsRightHand(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "set_IsRightHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::DashboardSpawnPoint::get_IsRightHand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "get_IsRightHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::DashboardSpawnPoint::set_DashboardIsAtHand(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "set_DashboardIsAtHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::DashboardSpawnPoint::get_DashboardIsAtHand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "get_DashboardIsAtHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 VROSC::DashboardSpawnPoint::get_TransformedDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "get_TransformedDirection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void VROSC::DashboardSpawnPoint::set_InputDevice(::VROSC::InputDevice*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "set_InputDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::VROSC::InputDevice> VROSC::DashboardSpawnPoint::get_InputDevice()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "get_InputDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::InputDevice>, false>(this, ___internal_method);
}
inline void VROSC::DashboardSpawnPoint::SetColorOfArc()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "SetColorOfArc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::DashboardSpawnPoint::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::DashboardSpawnPoint::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::DashboardSpawnPoint::Setup(::VROSC::InputDevice*  inputDevice, ::VROSC::DashboardSpawnPoint*  otherHand, bool  isRightHand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::DashboardSpawnPoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputDevice, otherHand, isRightHand);
}
inline void VROSC::DashboardSpawnPoint::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::DashboardSpawnPoint::ButtonPressEnd(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  button)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "ButtonPressEnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, button);
}
inline void VROSC::DashboardSpawnPoint::ButtonPressBegin(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  button)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "ButtonPressBegin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, button);
}
inline void VROSC::DashboardSpawnPoint::SetActivationAmount(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "SetActivationAmount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::DashboardSpawnPoint::CanOpenDashboard(bool  dashboardIsAtHand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "CanOpenDashboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, dashboardIsAtHand);
}
inline void VROSC::DashboardSpawnPoint::UpdateTriggerCondition(::VROSC::DashboardSpawnPoint_TriggerCondition  condition, bool  dashboardIsAtHand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "UpdateTriggerCondition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::DashboardSpawnPoint_TriggerCondition>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, condition, dashboardIsAtHand);
}
inline void VROSC::DashboardSpawnPoint::UpdateIsAtHand(bool  dashboardIsAtHand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "UpdateIsAtHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dashboardIsAtHand);
}
inline bool VROSC::DashboardSpawnPoint::IsTriggerConditionMet(::VROSC::DashboardSpawnPoint_TriggerCondition  condition, bool  dashboardIsAtHand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "IsTriggerConditionMet",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::DashboardSpawnPoint_TriggerCondition>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, condition, dashboardIsAtHand);
}
inline void VROSC::DashboardSpawnPoint::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        "OnDrawGizmos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::DashboardSpawnPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DashboardSpawnPoint*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::DashboardSpawnPoint* VROSC::DashboardSpawnPoint::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::DashboardSpawnPoint*>());
}
// Ctor Parameters []
constexpr ::VROSC::DashboardSpawnPoint::DashboardSpawnPoint()   {
}
