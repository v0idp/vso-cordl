#pragma once
// IWYU pragma private; include "VROSC/SlideValueByController.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__Axis_impl.hpp"
#include "VROSC/zzzz__IntChanger_impl.hpp"
#include "VROSC/zzzz__SlideValueByController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/zzzz__IntField_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::SlideValueByController.get_RequireOrigin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::SlideValueByController::*)()>(&::VROSC::SlideValueByController::get_RequireOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171b314;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SlideValueByController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SlideValueByController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SlideValueByController.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SlideValueByController::*)(::VROSC::Signal*)>(&::VROSC::SlideValueByController::NodeBegin)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x171b31c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SlideValueByController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SlideValueByController*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SlideValueByController.NodeStay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SlideValueByController::*)(::VROSC::Signal*)>(&::VROSC::SlideValueByController::NodeStay)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x171b370;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SlideValueByController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SlideValueByController*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SlideValueByController.SetValueBySignal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SlideValueByController::*)(::VROSC::Signal*)>(&::VROSC::SlideValueByController::SetValueBySignal)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x171b424;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SlideValueByController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SlideValueByController*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SlideValueByController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SlideValueByController::*)()>(&::VROSC::SlideValueByController::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x171b4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SlideValueByController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::Axis& VROSC::SlideValueByController::__cordl_internal_get__slideAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slideAxis;
}
constexpr ::VROSC::Axis const& VROSC::SlideValueByController::__cordl_internal_get__slideAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slideAxis;
}
constexpr void VROSC::SlideValueByController::__cordl_internal_set__slideAxis(::VROSC::Axis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slideAxis = value;
}
constexpr ::VROSC::IntField*& VROSC::SlideValueByController::__cordl_internal_get__sensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sensitivity;
}
constexpr ::VROSC::IntField* const& VROSC::SlideValueByController::__cordl_internal_get__sensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sensitivity;
}
constexpr void VROSC::SlideValueByController::__cordl_internal_set__sensitivity(::VROSC::IntField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sensitivity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& VROSC::SlideValueByController::__cordl_internal_get__startPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startPosition;
}
constexpr ::UnityEngine::Vector3 const& VROSC::SlideValueByController::__cordl_internal_get__startPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startPosition;
}
constexpr void VROSC::SlideValueByController::__cordl_internal_set__startPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startPosition = value;
}
constexpr int32_t& VROSC::SlideValueByController::__cordl_internal_get__startValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startValue;
}
constexpr int32_t const& VROSC::SlideValueByController::__cordl_internal_get__startValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startValue;
}
constexpr void VROSC::SlideValueByController::__cordl_internal_set__startValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startValue = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::SlideValueByController::__cordl_internal_get__affectingTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____affectingTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::SlideValueByController::__cordl_internal_get__affectingTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____affectingTransform;
}
constexpr void VROSC::SlideValueByController::__cordl_internal_set__affectingTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____affectingTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool VROSC::SlideValueByController::get_RequireOrigin()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SlideValueByController*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::SlideValueByController::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SlideValueByController*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::SlideValueByController::NodeStay(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SlideValueByController*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::SlideValueByController::SetValueBySignal(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SlideValueByController*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::SlideValueByController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SlideValueByController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SlideValueByController* VROSC::SlideValueByController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SlideValueByController*>());
}
// Ctor Parameters []
constexpr ::VROSC::SlideValueByController::SlideValueByController()   {
}
