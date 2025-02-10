#pragma once
// IWYU pragma private; include "VROSC/DirectionalFilter.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__SignalFilter_impl.hpp"
#include "VROSC/zzzz__DirectionalFilter_def.hpp"
#include "VROSC/zzzz__DirectionalFilter_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::DirectionalFilter_Space::DirectionalFilter_Space(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::DirectionalFilter_Space::DirectionalFilter_Space()   {
}
constexpr ::VROSC::DirectionalFilter_Space  VROSC::DirectionalFilter_Space::InputNode{static_cast<int32_t>(0x0)};
constexpr ::VROSC::DirectionalFilter_Space  VROSC::DirectionalFilter_Space::ThisFilter{static_cast<int32_t>(0x1)};
constexpr ::VROSC::DirectionalFilter_Space  VROSC::DirectionalFilter_Space::World{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::VROSC::DirectionalFilter.NodeEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DirectionalFilter::*)(::VROSC::Signal*)>(&::VROSC::DirectionalFilter::NodeEnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1721498;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DirectionalFilter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DirectionalFilter*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DirectionalFilter.FilterSignal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DirectionalFilter::*)(::VROSC::Signal*)>(&::VROSC::DirectionalFilter::FilterSignal)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x17214a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DirectionalFilter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DirectionalFilter*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DirectionalFilter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DirectionalFilter::*)()>(&::VROSC::DirectionalFilter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x17216a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DirectionalFilter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& VROSC::DirectionalFilter::__cordl_internal_get__filterDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterDirection;
}
constexpr ::UnityEngine::Vector3 const& VROSC::DirectionalFilter::__cordl_internal_get__filterDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterDirection;
}
constexpr void VROSC::DirectionalFilter::__cordl_internal_set__filterDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filterDirection = value;
}
constexpr ::VROSC::DirectionalFilter_Space& VROSC::DirectionalFilter::__cordl_internal_get__relativeTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeTo;
}
constexpr ::VROSC::DirectionalFilter_Space const& VROSC::DirectionalFilter::__cordl_internal_get__relativeTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeTo;
}
constexpr void VROSC::DirectionalFilter::__cordl_internal_set__relativeTo(::VROSC::DirectionalFilter_Space  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relativeTo = value;
}
constexpr float_t& VROSC::DirectionalFilter::__cordl_internal_get__filterAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterAngle;
}
constexpr float_t const& VROSC::DirectionalFilter::__cordl_internal_get__filterAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterAngle;
}
constexpr void VROSC::DirectionalFilter::__cordl_internal_set__filterAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filterAngle = value;
}
constexpr bool& VROSC::DirectionalFilter::__cordl_internal_get__checkFirstFrameOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkFirstFrameOnly;
}
constexpr bool const& VROSC::DirectionalFilter::__cordl_internal_get__checkFirstFrameOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkFirstFrameOnly;
}
constexpr void VROSC::DirectionalFilter::__cordl_internal_set__checkFirstFrameOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____checkFirstFrameOnly = value;
}
constexpr bool& VROSC::DirectionalFilter::__cordl_internal_get__firstFramePassed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstFramePassed;
}
constexpr bool const& VROSC::DirectionalFilter::__cordl_internal_get__firstFramePassed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstFramePassed;
}
constexpr void VROSC::DirectionalFilter::__cordl_internal_set__firstFramePassed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstFramePassed = value;
}
inline void VROSC::DirectionalFilter::NodeEnd(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DirectionalFilter*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::DirectionalFilter::FilterSignal(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DirectionalFilter*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::DirectionalFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DirectionalFilter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::DirectionalFilter* VROSC::DirectionalFilter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::DirectionalFilter*>());
}
// Ctor Parameters []
constexpr ::VROSC::DirectionalFilter::DirectionalFilter()   {
}
