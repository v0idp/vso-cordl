#pragma once
// IWYU pragma private; include "VROSC/TransformRotator.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__TransformRotator_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::TransformRotator.get_RequireOrigin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::TransformRotator::*)()>(&::VROSC::TransformRotator::get_RequireOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1720de8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformRotator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformRotator*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformRotator.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransformRotator::*)(::VROSC::Signal*)>(&::VROSC::TransformRotator::NodeBegin)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1720df0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformRotator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformRotator*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformRotator.NodeStay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransformRotator::*)(::VROSC::Signal*)>(&::VROSC::TransformRotator::NodeStay)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x1720f40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformRotator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformRotator*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformRotator.NodeEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransformRotator::*)(::VROSC::Signal*)>(&::VROSC::TransformRotator::NodeEnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17211d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformRotator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformRotator*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformRotator._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransformRotator::*)()>(&::VROSC::TransformRotator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17211e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformRotator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::TransformRotator::__cordl_internal_get__targetTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::TransformRotator::__cordl_internal_get__targetTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetTransform;
}
constexpr void VROSC::TransformRotator::__cordl_internal_set__targetTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::TransformRotator::__cordl_internal_get__sourceTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::TransformRotator::__cordl_internal_get__sourceTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceTransform;
}
constexpr void VROSC::TransformRotator::__cordl_internal_set__sourceTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sourceTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Quaternion& VROSC::TransformRotator::__cordl_internal_get__relativeStartRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeStartRotation;
}
constexpr ::UnityEngine::Quaternion const& VROSC::TransformRotator::__cordl_internal_get__relativeStartRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeStartRotation;
}
constexpr void VROSC::TransformRotator::__cordl_internal_set__relativeStartRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relativeStartRotation = value;
}
constexpr bool& VROSC::TransformRotator::__cordl_internal_get__lockX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockX;
}
constexpr bool const& VROSC::TransformRotator::__cordl_internal_get__lockX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockX;
}
constexpr void VROSC::TransformRotator::__cordl_internal_set__lockX(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lockX = value;
}
constexpr bool& VROSC::TransformRotator::__cordl_internal_get__lockY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockY;
}
constexpr bool const& VROSC::TransformRotator::__cordl_internal_get__lockY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockY;
}
constexpr void VROSC::TransformRotator::__cordl_internal_set__lockY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lockY = value;
}
constexpr bool& VROSC::TransformRotator::__cordl_internal_get__lockZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockZ;
}
constexpr bool const& VROSC::TransformRotator::__cordl_internal_get__lockZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockZ;
}
constexpr void VROSC::TransformRotator::__cordl_internal_set__lockZ(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lockZ = value;
}
inline bool VROSC::TransformRotator::get_RequireOrigin()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformRotator*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::TransformRotator::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformRotator*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::TransformRotator::NodeStay(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformRotator*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::TransformRotator::NodeEnd(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformRotator*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::TransformRotator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformRotator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TransformRotator* VROSC::TransformRotator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TransformRotator*>());
}
// Ctor Parameters []
constexpr ::VROSC::TransformRotator::TransformRotator()   {
}
