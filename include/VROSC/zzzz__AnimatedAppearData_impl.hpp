#pragma once
// IWYU pragma private; include "VROSC/AnimatedAppearData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "VROSC/zzzz__AnimatedAppearData_impl.hpp"
#include "VROSC/zzzz__AnimatedAppearData_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "VROSC/zzzz__AdjustableMesh_def.hpp"
#include "VROSC/zzzz__AnimatedAppearData_def.hpp"
#include "VROSC/zzzz__AnimatedAppear_def.hpp"
#include "VROSC/zzzz__Interactable_def.hpp"
#include "VROSC/zzzz__MinMaxVector2_def.hpp"
#include "VROSC/zzzz__SimpleAppearObject_def.hpp"
//  Writing Method size for method: ::VROSC::AnimatedAppearData_AppearingObject._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppearData_AppearingObject::*)(::VROSC::MinMaxVector2*)>(&::VROSC::AnimatedAppearData_AppearingObject::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x17a9a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData_AppearingObject*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MinMaxVector2*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppearData_AppearingObject.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppearData_AppearingObject::*)(::UnityEngine::Vector2, bool, bool, ::VROSC::AnimatedAppear_Mode)>(&::VROSC::AnimatedAppearData_AppearingObject::Update)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x17a980c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData_AppearingObject*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AnimatedAppear_Mode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppearData_AppearingObject.UpdateObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppearData_AppearingObject::*)(::VROSC::AnimatedAppear_Mode, bool)>(&::VROSC::AnimatedAppearData_AppearingObject::UpdateObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData_AppearingObject*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData_AppearingObject*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr ::VROSC::MinMaxVector2*& VROSC::AnimatedAppearData_AppearingObject::__cordl_internal_get__minMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minMax;
}
constexpr ::VROSC::MinMaxVector2* const& VROSC::AnimatedAppearData_AppearingObject::__cordl_internal_get__minMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minMax;
}
constexpr void VROSC::AnimatedAppearData_AppearingObject::__cordl_internal_set__minMax(::VROSC::MinMaxVector2*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____minMax)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& VROSC::AnimatedAppearData_AppearingObject::__cordl_internal_get__appear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____appear;
}
constexpr ::UnityEngine::Vector2 const& VROSC::AnimatedAppearData_AppearingObject::__cordl_internal_get__appear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____appear;
}
constexpr void VROSC::AnimatedAppearData_AppearingObject::__cordl_internal_set__appear(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____appear = value;
}
inline void VROSC::AnimatedAppearData_AppearingObject::_ctor(::VROSC::MinMaxVector2*  minMax)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData_AppearingObject*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MinMaxVector2*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, minMax);
}
inline void VROSC::AnimatedAppearData_AppearingObject::Update(::UnityEngine::Vector2  amount, bool  useFlash, bool  force, ::VROSC::AnimatedAppear_Mode  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData_AppearingObject*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AnimatedAppear_Mode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, amount, useFlash, force, mode);
}
inline void VROSC::AnimatedAppearData_AppearingObject::UpdateObject(::VROSC::AnimatedAppear_Mode  mode, bool  useFlash)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData_AppearingObject*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mode, useFlash);
}
inline ::VROSC::AnimatedAppearData_AppearingObject* VROSC::AnimatedAppearData_AppearingObject::New_ctor(::VROSC::MinMaxVector2*  minMax)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AnimatedAppearData_AppearingObject*>(minMax));
}
// Ctor Parameters []
constexpr ::VROSC::AnimatedAppearData_AppearingObject::AnimatedAppearData_AppearingObject()   {
}
//  Writing Method size for method: ::VROSC::AnimatedAppearData_TextMeshAppear._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppearData_TextMeshAppear::*)(::TMPro::TextMeshPro*, ::VROSC::MinMaxVector2*)>(&::VROSC::AnimatedAppearData_TextMeshAppear::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x17a9434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData_TextMeshAppear*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextMeshPro*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MinMaxVector2*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppearData_TextMeshAppear.UpdateObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppearData_TextMeshAppear::*)(::VROSC::AnimatedAppear_Mode, bool)>(&::VROSC::AnimatedAppearData_TextMeshAppear::UpdateObject)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x17a9a94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData_TextMeshAppear*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData_TextMeshAppear*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::AnimatedAppearData_TextMeshAppear::__cordl_internal_get__textMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textMesh;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::AnimatedAppearData_TextMeshAppear::__cordl_internal_get__textMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textMesh;
}
constexpr void VROSC::AnimatedAppearData_TextMeshAppear::__cordl_internal_set__textMesh(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& VROSC::AnimatedAppearData_TextMeshAppear::__cordl_internal_get__color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____color;
}
constexpr ::UnityEngine::Color const& VROSC::AnimatedAppearData_TextMeshAppear::__cordl_internal_get__color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____color;
}
constexpr void VROSC::AnimatedAppearData_TextMeshAppear::__cordl_internal_set__color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____color = value;
}
inline void VROSC::AnimatedAppearData_TextMeshAppear::_ctor(::TMPro::TextMeshPro*  textMesh, ::VROSC::MinMaxVector2*  minMax)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData_TextMeshAppear*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextMeshPro*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MinMaxVector2*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textMesh, minMax);
}
inline void VROSC::AnimatedAppearData_TextMeshAppear::UpdateObject(::VROSC::AnimatedAppear_Mode  mode, bool  useFlash)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData_TextMeshAppear*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mode, useFlash);
}
inline ::VROSC::AnimatedAppearData_TextMeshAppear* VROSC::AnimatedAppearData_TextMeshAppear::New_ctor(::TMPro::TextMeshPro*  textMesh, ::VROSC::MinMaxVector2*  minMax)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AnimatedAppearData_TextMeshAppear*>(textMesh, minMax));
}
// Ctor Parameters []
constexpr ::VROSC::AnimatedAppearData_TextMeshAppear::AnimatedAppearData_TextMeshAppear()   {
}
//  Writing Method size for method: ::VROSC::AnimatedAppearData_AdjustableMeshAppear._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppearData_AdjustableMeshAppear::*)(::VROSC::AdjustableMesh*, ::VROSC::MinMaxVector2*)>(&::VROSC::AnimatedAppearData_AdjustableMeshAppear::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x17a9640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData_AdjustableMeshAppear*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AdjustableMesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MinMaxVector2*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppearData_AdjustableMeshAppear.UpdateObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppearData_AdjustableMeshAppear::*)(::VROSC::AnimatedAppear_Mode, bool)>(&::VROSC::AnimatedAppearData_AdjustableMeshAppear::UpdateObject)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x17a9ad8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData_AdjustableMeshAppear*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData_AdjustableMeshAppear*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::AdjustableMesh>& VROSC::AnimatedAppearData_AdjustableMeshAppear::__cordl_internal_get__adjustableMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____adjustableMesh;
}
constexpr ::UnityW<::VROSC::AdjustableMesh> const& VROSC::AnimatedAppearData_AdjustableMeshAppear::__cordl_internal_get__adjustableMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____adjustableMesh;
}
constexpr void VROSC::AnimatedAppearData_AdjustableMeshAppear::__cordl_internal_set__adjustableMesh(::UnityW<::VROSC::AdjustableMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____adjustableMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::AnimatedAppearData_AdjustableMeshAppear::_ctor(::VROSC::AdjustableMesh*  adjustableMesh, ::VROSC::MinMaxVector2*  minMax)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData_AdjustableMeshAppear*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AdjustableMesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MinMaxVector2*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, adjustableMesh, minMax);
}
inline void VROSC::AnimatedAppearData_AdjustableMeshAppear::UpdateObject(::VROSC::AnimatedAppear_Mode  mode, bool  useFlash)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData_AdjustableMeshAppear*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mode, useFlash);
}
inline ::VROSC::AnimatedAppearData_AdjustableMeshAppear* VROSC::AnimatedAppearData_AdjustableMeshAppear::New_ctor(::VROSC::AdjustableMesh*  adjustableMesh, ::VROSC::MinMaxVector2*  minMax)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AnimatedAppearData_AdjustableMeshAppear*>(adjustableMesh, minMax));
}
// Ctor Parameters []
constexpr ::VROSC::AnimatedAppearData_AdjustableMeshAppear::AnimatedAppearData_AdjustableMeshAppear()   {
}
//  Writing Method size for method: ::VROSC::AnimatedAppearData_SimpleAppear._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppearData_SimpleAppear::*)(::VROSC::SimpleAppearObject*, ::VROSC::MinMaxVector2*)>(&::VROSC::AnimatedAppearData_SimpleAppear::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x17a97e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData_SimpleAppear*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SimpleAppearObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MinMaxVector2*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppearData_SimpleAppear.UpdateObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppearData_SimpleAppear::*)(::VROSC::AnimatedAppear_Mode, bool)>(&::VROSC::AnimatedAppearData_SimpleAppear::UpdateObject)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x17a9b14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData_SimpleAppear*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData_SimpleAppear*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::SimpleAppearObject>& VROSC::AnimatedAppearData_SimpleAppear::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityW<::VROSC::SimpleAppearObject> const& VROSC::AnimatedAppearData_SimpleAppear::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void VROSC::AnimatedAppearData_SimpleAppear::__cordl_internal_set__target(::UnityW<::VROSC::SimpleAppearObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::AnimatedAppearData_SimpleAppear::_ctor(::VROSC::SimpleAppearObject*  target, ::VROSC::MinMaxVector2*  minMax)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData_SimpleAppear*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SimpleAppearObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MinMaxVector2*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, minMax);
}
inline void VROSC::AnimatedAppearData_SimpleAppear::UpdateObject(::VROSC::AnimatedAppear_Mode  mode, bool  useFlash)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData_SimpleAppear*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mode, useFlash);
}
inline ::VROSC::AnimatedAppearData_SimpleAppear* VROSC::AnimatedAppearData_SimpleAppear::New_ctor(::VROSC::SimpleAppearObject*  target, ::VROSC::MinMaxVector2*  minMax)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AnimatedAppearData_SimpleAppear*>(target, minMax));
}
// Ctor Parameters []
constexpr ::VROSC::AnimatedAppearData_SimpleAppear::AnimatedAppearData_SimpleAppear()   {
}
//  Writing Method size for method: ::VROSC::AnimatedAppearData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppearData::*)(::UnityEngine::GameObject*, ::UnityEngine::RectTransform*)>(&::VROSC::AnimatedAppearData::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x17a8250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppearData.SetAppearData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppearData::*)(::UnityEngine::RectTransform*)>(&::VROSC::AnimatedAppearData::SetAppearData)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x17a8f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData*>::get(),
                        "SetAppearData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppearData.UpdateAppearAmount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppearData::*)(float_t, ::VROSC::AnimatedAppear_Mode, bool, bool)>(&::VROSC::AnimatedAppearData::UpdateAppearAmount)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x17a850c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData*>::get(),
                        "UpdateAppearAmount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AnimatedAppear_Mode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppearData.SetAppearActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppearData::*)(bool)>(&::VROSC::AnimatedAppearData::SetAppearActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17a8a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData*>::get(),
                        "SetAppearActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppearData.Clear
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppearData::*)()>(&::VROSC::AnimatedAppearData::Clear)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x17a8d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppearData.SetInteractablesDisabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppearData::*)(bool)>(&::VROSC::AnimatedAppearData::SetInteractablesDisabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x17a98cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData*>::get(),
                        "SetInteractablesDisabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppearData.GetAppearData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::MinMaxVector2* (::VROSC::AnimatedAppearData::*)(::UnityEngine::RectTransform*, ::VROSC::SimpleAppearObject*)>(&::VROSC::AnimatedAppearData::GetAppearData)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x17a96a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData*>::get(),
                        "GetAppearData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SimpleAppearObject*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppearData.GetAppearData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::MinMaxVector2* (::VROSC::AnimatedAppearData::*)(::UnityEngine::RectTransform*, ::VROSC::AdjustableMesh*)>(&::VROSC::AnimatedAppearData::GetAppearData)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x17a9480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData*>::get(),
                        "GetAppearData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AdjustableMesh*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppearData.GetAppearData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::MinMaxVector2* (::VROSC::AnimatedAppearData::*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*)>(&::VROSC::AnimatedAppearData::GetAppearData)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x17a922c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData*>::get(),
                        "GetAppearData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppearData.GetLocalPos
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::VROSC::AnimatedAppearData::*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2)>(&::VROSC::AnimatedAppearData::GetLocalPos)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x17a991c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData*>::get(),
                        "GetLocalPos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& VROSC::AnimatedAppearData::__cordl_internal_get__rectTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& VROSC::AnimatedAppearData::__cordl_internal_get__rectTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rectTransform;
}
constexpr void VROSC::AnimatedAppearData::__cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>& VROSC::AnimatedAppearData::__cordl_internal_get__interactables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactables;
}
constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*> const& VROSC::AnimatedAppearData::__cordl_internal_get__interactables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactables;
}
constexpr void VROSC::AnimatedAppearData::__cordl_internal_set__interactables(::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____interactables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*>& VROSC::AnimatedAppearData::__cordl_internal_get__adjustableMeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____adjustableMeshes;
}
constexpr ::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*> const& VROSC::AnimatedAppearData::__cordl_internal_get__adjustableMeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____adjustableMeshes;
}
constexpr void VROSC::AnimatedAppearData::__cordl_internal_set__adjustableMeshes(::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____adjustableMeshes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>,::Array<::UnityW<::TMPro::TextMeshPro>>*>& VROSC::AnimatedAppearData::__cordl_internal_get__textMeshPros()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textMeshPros;
}
constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>,::Array<::UnityW<::TMPro::TextMeshPro>>*> const& VROSC::AnimatedAppearData::__cordl_internal_get__textMeshPros() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textMeshPros;
}
constexpr void VROSC::AnimatedAppearData::__cordl_internal_set__textMeshPros(::ArrayW<::UnityW<::TMPro::TextMeshPro>,::Array<::UnityW<::TMPro::TextMeshPro>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textMeshPros)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::VROSC::SimpleAppearObject>,::Array<::UnityW<::VROSC::SimpleAppearObject>>*>& VROSC::AnimatedAppearData::__cordl_internal_get__simpleAppearObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simpleAppearObjects;
}
constexpr ::ArrayW<::UnityW<::VROSC::SimpleAppearObject>,::Array<::UnityW<::VROSC::SimpleAppearObject>>*> const& VROSC::AnimatedAppearData::__cordl_internal_get__simpleAppearObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simpleAppearObjects;
}
constexpr void VROSC::AnimatedAppearData::__cordl_internal_set__simpleAppearObjects(::ArrayW<::UnityW<::VROSC::SimpleAppearObject>,::Array<::UnityW<::VROSC::SimpleAppearObject>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____simpleAppearObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::VROSC::AnimatedAppearData_TextMeshAppear*,::Array<::VROSC::AnimatedAppearData_TextMeshAppear*>*>& VROSC::AnimatedAppearData::__cordl_internal_get__textAppears()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textAppears;
}
constexpr ::ArrayW<::VROSC::AnimatedAppearData_TextMeshAppear*,::Array<::VROSC::AnimatedAppearData_TextMeshAppear*>*> const& VROSC::AnimatedAppearData::__cordl_internal_get__textAppears() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textAppears;
}
constexpr void VROSC::AnimatedAppearData::__cordl_internal_set__textAppears(::ArrayW<::VROSC::AnimatedAppearData_TextMeshAppear*,::Array<::VROSC::AnimatedAppearData_TextMeshAppear*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textAppears)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::VROSC::AnimatedAppearData_AdjustableMeshAppear*,::Array<::VROSC::AnimatedAppearData_AdjustableMeshAppear*>*>& VROSC::AnimatedAppearData::__cordl_internal_get__meshAppears()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshAppears;
}
constexpr ::ArrayW<::VROSC::AnimatedAppearData_AdjustableMeshAppear*,::Array<::VROSC::AnimatedAppearData_AdjustableMeshAppear*>*> const& VROSC::AnimatedAppearData::__cordl_internal_get__meshAppears() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshAppears;
}
constexpr void VROSC::AnimatedAppearData::__cordl_internal_set__meshAppears(::ArrayW<::VROSC::AnimatedAppearData_AdjustableMeshAppear*,::Array<::VROSC::AnimatedAppearData_AdjustableMeshAppear*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshAppears)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::VROSC::AnimatedAppearData_SimpleAppear*,::Array<::VROSC::AnimatedAppearData_SimpleAppear*>*>& VROSC::AnimatedAppearData::__cordl_internal_get__simpleAppears()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simpleAppears;
}
constexpr ::ArrayW<::VROSC::AnimatedAppearData_SimpleAppear*,::Array<::VROSC::AnimatedAppearData_SimpleAppear*>*> const& VROSC::AnimatedAppearData::__cordl_internal_get__simpleAppears() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simpleAppears;
}
constexpr void VROSC::AnimatedAppearData::__cordl_internal_set__simpleAppears(::ArrayW<::VROSC::AnimatedAppearData_SimpleAppear*,::Array<::VROSC::AnimatedAppearData_SimpleAppear*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____simpleAppears)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::AnimatedAppearData::_ctor(::UnityEngine::GameObject*  parent, ::UnityEngine::RectTransform*  rectTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent, rectTransform);
}
inline void VROSC::AnimatedAppearData::SetAppearData(::UnityEngine::RectTransform*  reference)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData*>::get(),
                        "SetAppearData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reference);
}
inline void VROSC::AnimatedAppearData::UpdateAppearAmount(float_t  amount, ::VROSC::AnimatedAppear_Mode  mode, bool  useFlash, bool  force)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData*>::get(),
                        "UpdateAppearAmount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AnimatedAppear_Mode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, amount, mode, useFlash, force);
}
inline void VROSC::AnimatedAppearData::SetAppearActive(bool  appearing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData*>::get(),
                        "SetAppearActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, appearing);
}
inline void VROSC::AnimatedAppearData::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AnimatedAppearData::SetInteractablesDisabled(bool  disabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData*>::get(),
                        "SetInteractablesDisabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disabled);
}
inline ::VROSC::MinMaxVector2* VROSC::AnimatedAppearData::GetAppearData(::UnityEngine::RectTransform*  reference, ::VROSC::SimpleAppearObject*  target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData*>::get(),
                        "GetAppearData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SimpleAppearObject*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::MinMaxVector2*, false>(this, ___internal_method, reference, target);
}
inline ::VROSC::MinMaxVector2* VROSC::AnimatedAppearData::GetAppearData(::UnityEngine::RectTransform*  reference, ::VROSC::AdjustableMesh*  target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData*>::get(),
                        "GetAppearData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AdjustableMesh*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::MinMaxVector2*, false>(this, ___internal_method, reference, target);
}
inline ::VROSC::MinMaxVector2* VROSC::AnimatedAppearData::GetAppearData(::UnityEngine::RectTransform*  reference, ::UnityEngine::RectTransform*  target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData*>::get(),
                        "GetAppearData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::MinMaxVector2*, false>(this, ___internal_method, reference, target);
}
inline ::UnityEngine::Vector2 VROSC::AnimatedAppearData::GetLocalPos(::UnityEngine::RectTransform*  reference, ::UnityEngine::RectTransform*  target, ::UnityEngine::Vector2  pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearData*>::get(),
                        "GetLocalPos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, reference, target, pos);
}
inline ::VROSC::AnimatedAppearData* VROSC::AnimatedAppearData::New_ctor(::UnityEngine::GameObject*  parent, ::UnityEngine::RectTransform*  rectTransform)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AnimatedAppearData*>(parent, rectTransform));
}
// Ctor Parameters []
constexpr ::VROSC::AnimatedAppearData::AnimatedAppearData()   {
}
