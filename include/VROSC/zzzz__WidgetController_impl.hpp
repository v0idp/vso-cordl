#pragma once
// IWYU pragma private; include "VROSC/WidgetController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__WidgetController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__TimelineInstrumentActivation_def.hpp"
#include "VROSC/zzzz__TransformMover_def.hpp"
#include "VROSC/zzzz__UserDataControllers_def.hpp"
#include "VROSC/zzzz__WidgetController_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
//  Writing Method size for method: ::VROSC::WidgetController_WidgetPositionalData.IsPointInside
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::WidgetController_WidgetPositionalData::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::VROSC::WidgetController_WidgetPositionalData::IsPointInside)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x17102b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController_WidgetPositionalData*>::get(),
                        "IsPointInside",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController_WidgetPositionalData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WidgetController_WidgetPositionalData::*)()>(&::VROSC::WidgetController_WidgetPositionalData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1710320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController_WidgetPositionalData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& VROSC::WidgetController_WidgetPositionalData::__cordl_internal_get_Size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Size;
}
constexpr ::UnityEngine::Vector3 const& VROSC::WidgetController_WidgetPositionalData::__cordl_internal_get_Size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Size;
}
constexpr void VROSC::WidgetController_WidgetPositionalData::__cordl_internal_set_Size(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Size = value;
}
constexpr ::UnityEngine::Vector3& VROSC::WidgetController_WidgetPositionalData::__cordl_internal_get_Center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Center;
}
constexpr ::UnityEngine::Vector3 const& VROSC::WidgetController_WidgetPositionalData::__cordl_internal_get_Center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Center;
}
constexpr void VROSC::WidgetController_WidgetPositionalData::__cordl_internal_set_Center(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Center = value;
}
constexpr ::UnityEngine::Vector3& VROSC::WidgetController_WidgetPositionalData::__cordl_internal_get_SpawnPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnPoint;
}
constexpr ::UnityEngine::Vector3 const& VROSC::WidgetController_WidgetPositionalData::__cordl_internal_get_SpawnPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnPoint;
}
constexpr void VROSC::WidgetController_WidgetPositionalData::__cordl_internal_set_SpawnPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpawnPoint = value;
}
inline bool VROSC::WidgetController_WidgetPositionalData::IsPointInside(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  worldPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController_WidgetPositionalData*>::get(),
                        "IsPointInside",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, transform, worldPosition);
}
inline void VROSC::WidgetController_WidgetPositionalData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController_WidgetPositionalData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::WidgetController_WidgetPositionalData* VROSC::WidgetController_WidgetPositionalData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::WidgetController_WidgetPositionalData*>());
}
// Ctor Parameters []
constexpr ::VROSC::WidgetController_WidgetPositionalData::WidgetController_WidgetPositionalData()   {
}
//  Writing Method size for method: ::VROSC::WidgetController.get_PositionalData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::WidgetController_WidgetPositionalData* (::VROSC::WidgetController::*)()>(&::VROSC::WidgetController::get_PositionalData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170fc08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "get_PositionalData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController.get_ID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::WidgetSettings_Identifier (::VROSC::WidgetController::*)()>(&::VROSC::WidgetController::get_ID)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x170e14c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "get_ID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController.get_DefaultSettings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::WidgetSettings> (::VROSC::WidgetController::*)()>(&::VROSC::WidgetController::get_DefaultSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170fc10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "get_DefaultSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController.get_DisplayName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::WidgetController::*)()>(&::VROSC::WidgetController::get_DisplayName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x170fc18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "get_DisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController.set_IsActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WidgetController::*)(bool)>(&::VROSC::WidgetController::set_IsActive)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x170fc34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "set_IsActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController.get_IsActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::WidgetController::*)()>(&::VROSC::WidgetController::get_IsActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170fc40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "get_IsActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController.set_UserHasOpened
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WidgetController::*)(bool)>(&::VROSC::WidgetController::set_UserHasOpened)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x170fc48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "set_UserHasOpened",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController.get_UserHasOpened
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::WidgetController::*)()>(&::VROSC::WidgetController::get_UserHasOpened)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170fc54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "get_UserHasOpened",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController.get_TransformMover
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::TransformMover> (::VROSC::WidgetController::*)()>(&::VROSC::WidgetController::get_TransformMover)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170fc5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "get_TransformMover",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController.get_SpawnHeightModifier
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::WidgetController::*)()>(&::VROSC::WidgetController::get_SpawnHeightModifier)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x170fc64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "get_SpawnHeightModifier",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController.set_InitalLocalScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WidgetController::*)(::UnityEngine::Vector3)>(&::VROSC::WidgetController::set_InitalLocalScale)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x170fc80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "set_InitalLocalScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController.get_InitalLocalScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::WidgetController::*)()>(&::VROSC::WidgetController::get_InitalLocalScale)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x170fc8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "get_InitalLocalScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController.set_UserMoverScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WidgetController::*)(::UnityEngine::Vector3)>(&::VROSC::WidgetController::set_UserMoverScale)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x170fc98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "set_UserMoverScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController.get_UserMoverScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::WidgetController::*)()>(&::VROSC::WidgetController::get_UserMoverScale)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x170fca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "get_UserMoverScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WidgetController::*)()>(&::VROSC::WidgetController::Awake)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x170fcb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WidgetController::*)()>(&::VROSC::WidgetController::OnDestroy)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x170da08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController.OnApplicationQuit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WidgetController::*)()>(&::VROSC::WidgetController::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x170fec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "OnApplicationQuit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController.Toggle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WidgetController::*)()>(&::VROSC::WidgetController::Toggle)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x170dffc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController.SetActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WidgetController::*)(bool, bool)>(&::VROSC::WidgetController::SetActive)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x17100a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController.SetActivationPositions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WidgetController::*)(::UnityEngine::Vector3, bool)>(&::VROSC::WidgetController::SetActivationPositions)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x170d894;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController.TransformChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WidgetController::*)(::VROSC::TransformMover*)>(&::VROSC::WidgetController::TransformChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x170e55c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController.UserDataLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WidgetController::*)(::VROSC::UserDataControllers*)>(&::VROSC::WidgetController::UserDataLoaded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x170df48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WidgetController::*)()>(&::VROSC::WidgetController::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x17101fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController.SendToAnalytics
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WidgetController::*)(::VROSC::WidgetSettings_Identifier, bool)>(&::VROSC::WidgetController::SendToAnalytics)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x170fef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "SendToAnalytics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WidgetController::*)()>(&::VROSC::WidgetController::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x170e6e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::WidgetSettings>& VROSC::WidgetController::__cordl_internal_get__widgetSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____widgetSettings;
}
constexpr ::UnityW<::VROSC::WidgetSettings> const& VROSC::WidgetController::__cordl_internal_get__widgetSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____widgetSettings;
}
constexpr void VROSC::WidgetController::__cordl_internal_set__widgetSettings(::UnityW<::VROSC::WidgetSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____widgetSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::WidgetController::__cordl_internal_get__toggleObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggleObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::WidgetController::__cordl_internal_get__toggleObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggleObject;
}
constexpr void VROSC::WidgetController::__cordl_internal_set__toggleObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____toggleObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::TimelineInstrumentActivation>& VROSC::WidgetController::__cordl_internal_get__timelineActivation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timelineActivation;
}
constexpr ::UnityW<::VROSC::TimelineInstrumentActivation> const& VROSC::WidgetController::__cordl_internal_get__timelineActivation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timelineActivation;
}
constexpr void VROSC::WidgetController::__cordl_internal_set__timelineActivation(::UnityW<::VROSC::TimelineInstrumentActivation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timelineActivation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::WidgetController_WidgetPositionalData*& VROSC::WidgetController::__cordl_internal_get__positionalData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionalData;
}
constexpr ::VROSC::WidgetController_WidgetPositionalData* const& VROSC::WidgetController::__cordl_internal_get__positionalData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionalData;
}
constexpr void VROSC::WidgetController::__cordl_internal_set__positionalData(::VROSC::WidgetController_WidgetPositionalData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____positionalData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::TransformMover>& VROSC::WidgetController::__cordl_internal_get__transformMover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformMover;
}
constexpr ::UnityW<::VROSC::TransformMover> const& VROSC::WidgetController::__cordl_internal_get__transformMover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformMover;
}
constexpr void VROSC::WidgetController::__cordl_internal_set__transformMover(::UnityW<::VROSC::TransformMover>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transformMover)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::WidgetController::__cordl_internal_get__IsActive_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsActive_k__BackingField;
}
constexpr bool const& VROSC::WidgetController::__cordl_internal_get__IsActive_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsActive_k__BackingField;
}
constexpr void VROSC::WidgetController::__cordl_internal_set__IsActive_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsActive_k__BackingField = value;
}
constexpr bool& VROSC::WidgetController::__cordl_internal_get__UserHasOpened_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserHasOpened_k__BackingField;
}
constexpr bool const& VROSC::WidgetController::__cordl_internal_get__UserHasOpened_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserHasOpened_k__BackingField;
}
constexpr void VROSC::WidgetController::__cordl_internal_set__UserHasOpened_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UserHasOpened_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& VROSC::WidgetController::__cordl_internal_get__InitalLocalScale_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InitalLocalScale_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& VROSC::WidgetController::__cordl_internal_get__InitalLocalScale_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InitalLocalScale_k__BackingField;
}
constexpr void VROSC::WidgetController::__cordl_internal_set__InitalLocalScale_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InitalLocalScale_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& VROSC::WidgetController::__cordl_internal_get__UserMoverScale_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserMoverScale_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& VROSC::WidgetController::__cordl_internal_get__UserMoverScale_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserMoverScale_k__BackingField;
}
constexpr void VROSC::WidgetController::__cordl_internal_set__UserMoverScale_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UserMoverScale_k__BackingField = value;
}
constexpr ::System::Action_1<bool>*& VROSC::WidgetController::__cordl_internal_get_OnToggled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnToggled;
}
constexpr ::System::Action_1<bool>* const& VROSC::WidgetController::__cordl_internal_get_OnToggled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnToggled;
}
constexpr void VROSC::WidgetController::__cordl_internal_set_OnToggled(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnToggled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::WidgetController::setStaticF_OnWidgetActivationChange(::System::Action_2<::UnityW<::VROSC::WidgetSettings>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::VROSC::WidgetSettings>,bool>*, "OnWidgetActivationChange", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get>(std::forward<::System::Action_2<::UnityW<::VROSC::WidgetSettings>,bool>*>(value));
}
inline ::System::Action_2<::UnityW<::VROSC::WidgetSettings>,bool>* VROSC::WidgetController::getStaticF_OnWidgetActivationChange()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::VROSC::WidgetSettings>,bool>*, "OnWidgetActivationChange", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get>();
}
inline ::VROSC::WidgetController_WidgetPositionalData* VROSC::WidgetController::get_PositionalData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "get_PositionalData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::WidgetController_WidgetPositionalData*, false>(this, ___internal_method);
}
inline ::VROSC::WidgetSettings_Identifier VROSC::WidgetController::get_ID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "get_ID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::WidgetSettings_Identifier, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::WidgetSettings> VROSC::WidgetController::get_DefaultSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "get_DefaultSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::WidgetSettings>, false>(this, ___internal_method);
}
inline ::StringW VROSC::WidgetController::get_DisplayName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "get_DisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void VROSC::WidgetController::set_IsActive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "set_IsActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::WidgetController::get_IsActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "get_IsActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::WidgetController::set_UserHasOpened(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "set_UserHasOpened",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::WidgetController::get_UserHasOpened()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "get_UserHasOpened",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::TransformMover> VROSC::WidgetController::get_TransformMover()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "get_TransformMover",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::TransformMover>, false>(this, ___internal_method);
}
inline float_t VROSC::WidgetController::get_SpawnHeightModifier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "get_SpawnHeightModifier",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::WidgetController::set_InitalLocalScale(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "set_InitalLocalScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 VROSC::WidgetController::get_InitalLocalScale()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "get_InitalLocalScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void VROSC::WidgetController::set_UserMoverScale(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "set_UserMoverScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 VROSC::WidgetController::get_UserMoverScale()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "get_UserMoverScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void VROSC::WidgetController::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::WidgetController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::WidgetController::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "OnApplicationQuit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::WidgetController::Toggle()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::WidgetController::SetActive(bool  shouldBeActive, bool  forceImmediate)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shouldBeActive, forceImmediate);
}
inline void VROSC::WidgetController::SetActivationPositions(::UnityEngine::Vector3  pressPos, bool  active)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pressPos, active);
}
inline void VROSC::WidgetController::TransformChanged(::VROSC::TransformMover*  mover)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mover);
}
inline void VROSC::WidgetController::UserDataLoaded(::VROSC::UserDataControllers*  user)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, user);
}
inline void VROSC::WidgetController::OnDrawGizmosSelected()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::WidgetController::SendToAnalytics(::VROSC::WidgetSettings_Identifier  id, bool  isActive)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        "SendToAnalytics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, isActive);
}
inline void VROSC::WidgetController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::WidgetController* VROSC::WidgetController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::WidgetController*>());
}
// Ctor Parameters []
constexpr ::VROSC::WidgetController::WidgetController()   {
}
