#pragma once
// IWYU pragma private; include "VROSC/GrabData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__GrabData_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::VROSC::GrabData.get_Device
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::InputDevice> (::VROSC::GrabData::*)()>(&::VROSC::GrabData::get_Device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188ff14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabData*>::get(),
                        "get_Device",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabData.get_GrabbedCollider
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Collider> (::VROSC::GrabData::*)()>(&::VROSC::GrabData::get_GrabbedCollider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188ff1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabData*>::get(),
                        "get_GrabbedCollider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabData.get_Position
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::GrabData::*)()>(&::VROSC::GrabData::get_Position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x188ff24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabData*>::get(),
                        "get_Position",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabData.get_PointedAt
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::GrabData::*)()>(&::VROSC::GrabData::get_PointedAt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188ff30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabData*>::get(),
                        "get_PointedAt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabData::*)(::VROSC::InputDevice*, ::UnityEngine::Vector3, ::UnityEngine::Collider*, bool)>(&::VROSC::GrabData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x188ff38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::InputDevice>& VROSC::GrabData::__cordl_internal_get__Device_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Device_k__BackingField;
}
constexpr ::UnityW<::VROSC::InputDevice> const& VROSC::GrabData::__cordl_internal_get__Device_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Device_k__BackingField;
}
constexpr void VROSC::GrabData::__cordl_internal_set__Device_k__BackingField(::UnityW<::VROSC::InputDevice>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Device_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Collider>& VROSC::GrabData::__cordl_internal_get__GrabbedCollider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GrabbedCollider_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Collider> const& VROSC::GrabData::__cordl_internal_get__GrabbedCollider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GrabbedCollider_k__BackingField;
}
constexpr void VROSC::GrabData::__cordl_internal_set__GrabbedCollider_k__BackingField(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____GrabbedCollider_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& VROSC::GrabData::__cordl_internal_get__Position_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Position_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& VROSC::GrabData::__cordl_internal_get__Position_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Position_k__BackingField;
}
constexpr void VROSC::GrabData::__cordl_internal_set__Position_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Position_k__BackingField = value;
}
constexpr bool& VROSC::GrabData::__cordl_internal_get__PointedAt_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PointedAt_k__BackingField;
}
constexpr bool const& VROSC::GrabData::__cordl_internal_get__PointedAt_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PointedAt_k__BackingField;
}
constexpr void VROSC::GrabData::__cordl_internal_set__PointedAt_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PointedAt_k__BackingField = value;
}
inline ::UnityW<::VROSC::InputDevice> VROSC::GrabData::get_Device()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabData*>::get(),
                        "get_Device",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::InputDevice>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider> VROSC::GrabData::get_GrabbedCollider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabData*>::get(),
                        "get_GrabbedCollider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 VROSC::GrabData::get_Position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabData*>::get(),
                        "get_Position",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline bool VROSC::GrabData::get_PointedAt()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabData*>::get(),
                        "get_PointedAt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::GrabData::_ctor(::VROSC::InputDevice*  device, ::UnityEngine::Vector3  position, ::UnityEngine::Collider*  grabbedColider, bool  pointedAt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, position, grabbedColider, pointedAt);
}
inline ::VROSC::GrabData* VROSC::GrabData::New_ctor(::VROSC::InputDevice*  device, ::UnityEngine::Vector3  position, ::UnityEngine::Collider*  grabbedColider, bool  pointedAt)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::GrabData*>(device, position, grabbedColider, pointedAt));
}
// Ctor Parameters []
constexpr ::VROSC::GrabData::GrabData()   {
}
