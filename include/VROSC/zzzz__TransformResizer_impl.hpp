#pragma once
// IWYU pragma private; include "VROSC/TransformResizer.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__TransformResizer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::TransformResizer.get_RequireOrigin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::TransformResizer::*)()>(&::VROSC::TransformResizer::get_RequireOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1720c1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformResizer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformResizer*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformResizer.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransformResizer::*)(::VROSC::Signal*)>(&::VROSC::TransformResizer::NodeBegin)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1720c24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformResizer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformResizer*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformResizer.NodeStay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransformResizer::*)(::VROSC::Signal*)>(&::VROSC::TransformResizer::NodeStay)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x1720c88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformResizer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformResizer*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformResizer.NodeEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransformResizer::*)(::VROSC::Signal*)>(&::VROSC::TransformResizer::NodeEnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1720dcc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformResizer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformResizer*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformResizer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransformResizer::*)()>(&::VROSC::TransformResizer::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1720dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformResizer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::TransformResizer::__cordl_internal_get__resizeTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resizeTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::TransformResizer::__cordl_internal_get__resizeTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resizeTransform;
}
constexpr void VROSC::TransformResizer::__cordl_internal_set__resizeTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resizeTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& VROSC::TransformResizer::__cordl_internal_get__startPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startPosition;
}
constexpr ::UnityEngine::Vector3 const& VROSC::TransformResizer::__cordl_internal_get__startPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startPosition;
}
constexpr void VROSC::TransformResizer::__cordl_internal_set__startPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startPosition = value;
}
constexpr ::UnityEngine::Vector3& VROSC::TransformResizer::__cordl_internal_get__startScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startScale;
}
constexpr ::UnityEngine::Vector3 const& VROSC::TransformResizer::__cordl_internal_get__startScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startScale;
}
constexpr void VROSC::TransformResizer::__cordl_internal_set__startScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startScale = value;
}
constexpr bool& VROSC::TransformResizer::__cordl_internal_get__invertX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invertX;
}
constexpr bool const& VROSC::TransformResizer::__cordl_internal_get__invertX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invertX;
}
constexpr void VROSC::TransformResizer::__cordl_internal_set__invertX(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____invertX = value;
}
constexpr bool& VROSC::TransformResizer::__cordl_internal_get__invertY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invertY;
}
constexpr bool const& VROSC::TransformResizer::__cordl_internal_get__invertY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invertY;
}
constexpr void VROSC::TransformResizer::__cordl_internal_set__invertY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____invertY = value;
}
constexpr bool& VROSC::TransformResizer::__cordl_internal_get__invertZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invertZ;
}
constexpr bool const& VROSC::TransformResizer::__cordl_internal_get__invertZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invertZ;
}
constexpr void VROSC::TransformResizer::__cordl_internal_set__invertZ(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____invertZ = value;
}
constexpr float_t& VROSC::TransformResizer::__cordl_internal_get__minSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minSize;
}
constexpr float_t const& VROSC::TransformResizer::__cordl_internal_get__minSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minSize;
}
constexpr void VROSC::TransformResizer::__cordl_internal_set__minSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minSize = value;
}
inline bool VROSC::TransformResizer::get_RequireOrigin()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformResizer*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::TransformResizer::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformResizer*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::TransformResizer::NodeStay(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformResizer*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::TransformResizer::NodeEnd(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformResizer*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::TransformResizer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformResizer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TransformResizer* VROSC::TransformResizer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TransformResizer*>());
}
// Ctor Parameters []
constexpr ::VROSC::TransformResizer::TransformResizer()   {
}
