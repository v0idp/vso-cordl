#pragma once
// IWYU pragma private; include "VROSC/GrabbingDevice.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__GrabbingDevice_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__GrabData_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__SmoothMovement_def.hpp"
#include "VROSC/zzzz__TooltipData_def.hpp"
#include "VROSC/zzzz__TransformMover_def.hpp"
#include "VROSC/zzzz__WorldTransformData_def.hpp"
//  Writing Method size for method: ::VROSC::GrabbingDevice.set_GrabData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabbingDevice::*)(::VROSC::GrabData*)>(&::VROSC::GrabbingDevice::set_GrabData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x173b044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "set_GrabData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::GrabData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.get_GrabData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::GrabData* (::VROSC::GrabbingDevice::*)()>(&::VROSC::GrabbingDevice::get_GrabData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x173b04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_GrabData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.get_InputDevice
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::InputDevice> (::VROSC::GrabbingDevice::*)()>(&::VROSC::GrabbingDevice::get_InputDevice)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x173b054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_InputDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.set_FullAnchorData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabbingDevice::*)(::VROSC::WorldTransformData*)>(&::VROSC::GrabbingDevice::set_FullAnchorData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x173b070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "set_FullAnchorData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WorldTransformData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.get_FullAnchorData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::WorldTransformData* (::VROSC::GrabbingDevice::*)()>(&::VROSC::GrabbingDevice::get_FullAnchorData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x173b078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_FullAnchorData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.set_AnchorPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabbingDevice::*)(::UnityEngine::Vector3)>(&::VROSC::GrabbingDevice::set_AnchorPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x173b080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "set_AnchorPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.get_AnchorPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::GrabbingDevice::*)()>(&::VROSC::GrabbingDevice::get_AnchorPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x173b08c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_AnchorPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.set_AnchorGrabPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabbingDevice::*)(::UnityEngine::Vector3)>(&::VROSC::GrabbingDevice::set_AnchorGrabPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x173b098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "set_AnchorGrabPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.get_AnchorGrabPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::GrabbingDevice::*)()>(&::VROSC::GrabbingDevice::get_AnchorGrabPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x173b0a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_AnchorGrabPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.set_ControllerGrabPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabbingDevice::*)(::UnityEngine::Vector3)>(&::VROSC::GrabbingDevice::set_ControllerGrabPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x173b0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "set_ControllerGrabPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.get_ControllerGrabPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::GrabbingDevice::*)()>(&::VROSC::GrabbingDevice::get_ControllerGrabPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x173b0bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_ControllerGrabPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.get_MoveOffset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::GrabbingDevice::*)()>(&::VROSC::GrabbingDevice::get_MoveOffset)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x173b0c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_MoveOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.get_CurrentPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::GrabbingDevice::*)()>(&::VROSC::GrabbingDevice::get_CurrentPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x173b0fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_CurrentPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.get_GrabPositionOnObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::GrabbingDevice::*)()>(&::VROSC::GrabbingDevice::get_GrabPositionOnObject)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x173b12c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_GrabPositionOnObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.set_Rotator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabbingDevice::*)(::UnityEngine::GameObject*)>(&::VROSC::GrabbingDevice::set_Rotator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x173b160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "set_Rotator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.get_Rotator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::VROSC::GrabbingDevice::*)()>(&::VROSC::GrabbingDevice::get_Rotator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x173b168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_Rotator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.set_UpRightHelper
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabbingDevice::*)(::UnityEngine::GameObject*)>(&::VROSC::GrabbingDevice::set_UpRightHelper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x173b170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "set_UpRightHelper",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.get_UpRightHelper
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::VROSC::GrabbingDevice::*)()>(&::VROSC::GrabbingDevice::get_UpRightHelper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x173b178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_UpRightHelper",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.set_TransformPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabbingDevice::*)(::UnityEngine::GameObject*)>(&::VROSC::GrabbingDevice::set_TransformPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x173b180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "set_TransformPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.get_TransformPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::VROSC::GrabbingDevice::*)()>(&::VROSC::GrabbingDevice::get_TransformPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x173b188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_TransformPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabbingDevice::*)(::VROSC::GrabData*, ::VROSC::TransformMover*)>(&::VROSC::GrabbingDevice::_ctor)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x173b190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::GrabData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TransformMover*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.GetGrabPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::GrabbingDevice::*)()>(&::VROSC::GrabbingDevice::GetGrabPosition)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x173b938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "GetGrabPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.SetGrabPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabbingDevice::*)()>(&::VROSC::GrabbingDevice::SetGrabPosition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x173b994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "SetGrabPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.PointHelperTowards
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabbingDevice::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::VROSC::GrabbingDevice::PointHelperTowards)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x173b9d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "PointHelperTowards",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.SetAnchor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabbingDevice::*)()>(&::VROSC::GrabbingDevice::SetAnchor)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x173b56c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "SetAnchor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.Upright
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabbingDevice::*)()>(&::VROSC::GrabbingDevice::Upright)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x173ba54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "Upright",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.Place
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabbingDevice::*)(bool)>(&::VROSC::GrabbingDevice::Place)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x173bb64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "Place",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.GrabEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabbingDevice::*)()>(&::VROSC::GrabbingDevice::GrabEnd)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x173bdc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "GrabEnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.PlaceOneHanded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabbingDevice::*)()>(&::VROSC::GrabbingDevice::PlaceOneHanded)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x173c234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "PlaceOneHanded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.CheckForIsPinnedWarning
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabbingDevice::*)()>(&::VROSC::GrabbingDevice::CheckForIsPinnedWarning)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x173c3d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "CheckForIsPinnedWarning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.EvaluateThumbstickInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabbingDevice::*)(::VROSC::InputDevice*, ::UnityEngine::Vector2)>(&::VROSC::GrabbingDevice::EvaluateThumbstickInput)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x173c554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "EvaluateThumbstickInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabbingDevice.UpdateIsGrabbedTooltips
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabbingDevice::*)(::System::Collections::Generic::List_1<::VROSC::TooltipData*>*)>(&::VROSC::GrabbingDevice::UpdateIsGrabbedTooltips)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x173bf38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "UpdateIsGrabbedTooltips",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::VROSC::TooltipData*>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::GrabData*& VROSC::GrabbingDevice::__cordl_internal_get__GrabData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GrabData_k__BackingField;
}
constexpr ::VROSC::GrabData* const& VROSC::GrabbingDevice::__cordl_internal_get__GrabData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GrabData_k__BackingField;
}
constexpr void VROSC::GrabbingDevice::__cordl_internal_set__GrabData_k__BackingField(::VROSC::GrabData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____GrabData_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::WorldTransformData*& VROSC::GrabbingDevice::__cordl_internal_get__FullAnchorData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FullAnchorData_k__BackingField;
}
constexpr ::VROSC::WorldTransformData* const& VROSC::GrabbingDevice::__cordl_internal_get__FullAnchorData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FullAnchorData_k__BackingField;
}
constexpr void VROSC::GrabbingDevice::__cordl_internal_set__FullAnchorData_k__BackingField(::VROSC::WorldTransformData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____FullAnchorData_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& VROSC::GrabbingDevice::__cordl_internal_get__AnchorPosition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnchorPosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& VROSC::GrabbingDevice::__cordl_internal_get__AnchorPosition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnchorPosition_k__BackingField;
}
constexpr void VROSC::GrabbingDevice::__cordl_internal_set__AnchorPosition_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AnchorPosition_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& VROSC::GrabbingDevice::__cordl_internal_get__AnchorGrabPosition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnchorGrabPosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& VROSC::GrabbingDevice::__cordl_internal_get__AnchorGrabPosition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnchorGrabPosition_k__BackingField;
}
constexpr void VROSC::GrabbingDevice::__cordl_internal_set__AnchorGrabPosition_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AnchorGrabPosition_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& VROSC::GrabbingDevice::__cordl_internal_get__ControllerGrabPosition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ControllerGrabPosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& VROSC::GrabbingDevice::__cordl_internal_get__ControllerGrabPosition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ControllerGrabPosition_k__BackingField;
}
constexpr void VROSC::GrabbingDevice::__cordl_internal_set__ControllerGrabPosition_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ControllerGrabPosition_k__BackingField = value;
}
constexpr ::VROSC::SmoothMovement*& VROSC::GrabbingDevice::__cordl_internal_get_SmoothAnchorOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SmoothAnchorOffset;
}
constexpr ::VROSC::SmoothMovement* const& VROSC::GrabbingDevice::__cordl_internal_get_SmoothAnchorOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SmoothAnchorOffset;
}
constexpr void VROSC::GrabbingDevice::__cordl_internal_set_SmoothAnchorOffset(::VROSC::SmoothMovement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SmoothAnchorOffset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::SmoothMovement*& VROSC::GrabbingDevice::__cordl_internal_get_SmoothPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SmoothPosition;
}
constexpr ::VROSC::SmoothMovement* const& VROSC::GrabbingDevice::__cordl_internal_get_SmoothPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SmoothPosition;
}
constexpr void VROSC::GrabbingDevice::__cordl_internal_set_SmoothPosition(::VROSC::SmoothMovement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SmoothPosition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::TransformMover>& VROSC::GrabbingDevice::__cordl_internal_get__transformMover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformMover;
}
constexpr ::UnityW<::VROSC::TransformMover> const& VROSC::GrabbingDevice::__cordl_internal_get__transformMover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformMover;
}
constexpr void VROSC::GrabbingDevice::__cordl_internal_set__transformMover(::UnityW<::VROSC::TransformMover>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transformMover)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::GrabbingDevice::__cordl_internal_get__Rotator_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rotator_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::GrabbingDevice::__cordl_internal_get__Rotator_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rotator_k__BackingField;
}
constexpr void VROSC::GrabbingDevice::__cordl_internal_set__Rotator_k__BackingField(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Rotator_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::GrabbingDevice::__cordl_internal_get__UpRightHelper_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpRightHelper_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::GrabbingDevice::__cordl_internal_get__UpRightHelper_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpRightHelper_k__BackingField;
}
constexpr void VROSC::GrabbingDevice::__cordl_internal_set__UpRightHelper_k__BackingField(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____UpRightHelper_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::GrabbingDevice::__cordl_internal_get__TransformPoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TransformPoint_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::GrabbingDevice::__cordl_internal_get__TransformPoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TransformPoint_k__BackingField;
}
constexpr void VROSC::GrabbingDevice::__cordl_internal_set__TransformPoint_k__BackingField(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TransformPoint_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::GrabbingDevice::__cordl_internal_get__grabDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabDistance;
}
constexpr float_t const& VROSC::GrabbingDevice::__cordl_internal_get__grabDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabDistance;
}
constexpr void VROSC::GrabbingDevice::__cordl_internal_set__grabDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabDistance = value;
}
constexpr float_t& VROSC::GrabbingDevice::__cordl_internal_get__additiveRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____additiveRotation;
}
constexpr float_t const& VROSC::GrabbingDevice::__cordl_internal_get__additiveRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____additiveRotation;
}
constexpr void VROSC::GrabbingDevice::__cordl_internal_set__additiveRotation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____additiveRotation = value;
}
constexpr bool& VROSC::GrabbingDevice::__cordl_internal_get__isOutsideIsPinnedWarningRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isOutsideIsPinnedWarningRange;
}
constexpr bool const& VROSC::GrabbingDevice::__cordl_internal_get__isOutsideIsPinnedWarningRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isOutsideIsPinnedWarningRange;
}
constexpr void VROSC::GrabbingDevice::__cordl_internal_set__isOutsideIsPinnedWarningRange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isOutsideIsPinnedWarningRange = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::GrabbingDevice::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::GrabbingDevice::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void VROSC::GrabbingDevice::__cordl_internal_set__controller(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controller)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& VROSC::GrabbingDevice::__cordl_internal_get__localGrabPositionFromObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localGrabPositionFromObject;
}
constexpr ::UnityEngine::Vector3 const& VROSC::GrabbingDevice::__cordl_internal_get__localGrabPositionFromObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localGrabPositionFromObject;
}
constexpr void VROSC::GrabbingDevice::__cordl_internal_set__localGrabPositionFromObject(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localGrabPositionFromObject = value;
}
constexpr ::UnityEngine::Vector3& VROSC::GrabbingDevice::__cordl_internal_get__localGrabPositionFromController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localGrabPositionFromController;
}
constexpr ::UnityEngine::Vector3 const& VROSC::GrabbingDevice::__cordl_internal_get__localGrabPositionFromController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localGrabPositionFromController;
}
constexpr void VROSC::GrabbingDevice::__cordl_internal_set__localGrabPositionFromController(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localGrabPositionFromController = value;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*& VROSC::GrabbingDevice::__cordl_internal_get__currentRequestedTooltips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRequestedTooltips;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::TooltipData*>* const& VROSC::GrabbingDevice::__cordl_internal_get__currentRequestedTooltips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRequestedTooltips;
}
constexpr void VROSC::GrabbingDevice::__cordl_internal_set__currentRequestedTooltips(::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentRequestedTooltips)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::GrabbingDevice::set_GrabData(::VROSC::GrabData*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "set_GrabData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::GrabData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::GrabData* VROSC::GrabbingDevice::get_GrabData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_GrabData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::GrabData*, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::InputDevice> VROSC::GrabbingDevice::get_InputDevice()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_InputDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::InputDevice>, false>(this, ___internal_method);
}
inline void VROSC::GrabbingDevice::set_FullAnchorData(::VROSC::WorldTransformData*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "set_FullAnchorData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WorldTransformData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::WorldTransformData* VROSC::GrabbingDevice::get_FullAnchorData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_FullAnchorData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::WorldTransformData*, false>(this, ___internal_method);
}
inline void VROSC::GrabbingDevice::set_AnchorPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "set_AnchorPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 VROSC::GrabbingDevice::get_AnchorPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_AnchorPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void VROSC::GrabbingDevice::set_AnchorGrabPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "set_AnchorGrabPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 VROSC::GrabbingDevice::get_AnchorGrabPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_AnchorGrabPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void VROSC::GrabbingDevice::set_ControllerGrabPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "set_ControllerGrabPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 VROSC::GrabbingDevice::get_ControllerGrabPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_ControllerGrabPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 VROSC::GrabbingDevice::get_MoveOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_MoveOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 VROSC::GrabbingDevice::get_CurrentPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_CurrentPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 VROSC::GrabbingDevice::get_GrabPositionOnObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_GrabPositionOnObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void VROSC::GrabbingDevice::set_Rotator(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "set_Rotator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> VROSC::GrabbingDevice::get_Rotator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_Rotator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline void VROSC::GrabbingDevice::set_UpRightHelper(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "set_UpRightHelper",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> VROSC::GrabbingDevice::get_UpRightHelper()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_UpRightHelper",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline void VROSC::GrabbingDevice::set_TransformPoint(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "set_TransformPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> VROSC::GrabbingDevice::get_TransformPoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "get_TransformPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline void VROSC::GrabbingDevice::_ctor(::VROSC::GrabData*  grabData, ::VROSC::TransformMover*  transformMover)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::GrabData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TransformMover*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, grabData, transformMover);
}
inline ::UnityEngine::Vector3 VROSC::GrabbingDevice::GetGrabPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "GetGrabPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void VROSC::GrabbingDevice::SetGrabPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "SetGrabPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::GrabbingDevice::PointHelperTowards(::UnityEngine::Vector3  direction, ::UnityEngine::Vector3  upwards)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "PointHelperTowards",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, direction, upwards);
}
inline void VROSC::GrabbingDevice::SetAnchor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "SetAnchor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::GrabbingDevice::Upright()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "Upright",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::GrabbingDevice::Place(bool  smoothed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "Place",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, smoothed);
}
inline void VROSC::GrabbingDevice::GrabEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "GrabEnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::GrabbingDevice::PlaceOneHanded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "PlaceOneHanded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::GrabbingDevice::CheckForIsPinnedWarning()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "CheckForIsPinnedWarning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::GrabbingDevice::EvaluateThumbstickInput(::VROSC::InputDevice*  device, ::UnityEngine::Vector2  vector)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "EvaluateThumbstickInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, vector);
}
inline void VROSC::GrabbingDevice::UpdateIsGrabbedTooltips(::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  tooltipDatas)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabbingDevice*>::get(),
                        "UpdateIsGrabbedTooltips",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::VROSC::TooltipData*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tooltipDatas);
}
inline ::VROSC::GrabbingDevice* VROSC::GrabbingDevice::New_ctor(::VROSC::GrabData*  grabData, ::VROSC::TransformMover*  transformMover)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::GrabbingDevice*>(grabData, transformMover));
}
// Ctor Parameters []
constexpr ::VROSC::GrabbingDevice::GrabbingDevice()   {
}
