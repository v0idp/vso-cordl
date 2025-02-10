#pragma once
// IWYU pragma private; include "VROSC/GameObjectToggler.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__GameObjectToggler_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::GameObjectToggler.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GameObjectToggler::*)()>(&::VROSC::GameObjectToggler::Start)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x171cd44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GameObjectToggler*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GameObjectToggler.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GameObjectToggler::*)(::VROSC::Signal*)>(&::VROSC::GameObjectToggler::NodeBegin)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x171ce04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GameObjectToggler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GameObjectToggler*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GameObjectToggler.NodeEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GameObjectToggler::*)(::VROSC::Signal*)>(&::VROSC::GameObjectToggler::NodeEnd)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x171cf24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GameObjectToggler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GameObjectToggler*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GameObjectToggler._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GameObjectToggler::*)()>(&::VROSC::GameObjectToggler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171cf90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GameObjectToggler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>,::Array<::UnityW<::UnityEngine::GameObject>>*>& VROSC::GameObjectToggler::__cordl_internal_get__targetGameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetGameObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>,::Array<::UnityW<::UnityEngine::GameObject>>*> const& VROSC::GameObjectToggler::__cordl_internal_get__targetGameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetGameObjects;
}
constexpr void VROSC::GameObjectToggler::__cordl_internal_set__targetGameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>,::Array<::UnityW<::UnityEngine::GameObject>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetGameObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::GameObjectToggler::__cordl_internal_get__overrideStartState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overrideStartState;
}
constexpr bool const& VROSC::GameObjectToggler::__cordl_internal_get__overrideStartState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overrideStartState;
}
constexpr void VROSC::GameObjectToggler::__cordl_internal_set__overrideStartState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overrideStartState = value;
}
constexpr bool& VROSC::GameObjectToggler::__cordl_internal_get__startEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startEnabled;
}
constexpr bool const& VROSC::GameObjectToggler::__cordl_internal_get__startEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startEnabled;
}
constexpr void VROSC::GameObjectToggler::__cordl_internal_set__startEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startEnabled = value;
}
constexpr bool& VROSC::GameObjectToggler::__cordl_internal_get__onWithSignal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onWithSignal;
}
constexpr bool const& VROSC::GameObjectToggler::__cordl_internal_get__onWithSignal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onWithSignal;
}
constexpr void VROSC::GameObjectToggler::__cordl_internal_set__onWithSignal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onWithSignal = value;
}
constexpr bool& VROSC::GameObjectToggler::__cordl_internal_get__setState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setState;
}
constexpr bool const& VROSC::GameObjectToggler::__cordl_internal_get__setState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setState;
}
constexpr void VROSC::GameObjectToggler::__cordl_internal_set__setState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____setState = value;
}
constexpr bool& VROSC::GameObjectToggler::__cordl_internal_get__setStateTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setStateTo;
}
constexpr bool const& VROSC::GameObjectToggler::__cordl_internal_get__setStateTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setStateTo;
}
constexpr void VROSC::GameObjectToggler::__cordl_internal_set__setStateTo(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____setStateTo = value;
}
inline void VROSC::GameObjectToggler::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GameObjectToggler*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::GameObjectToggler::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GameObjectToggler*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::GameObjectToggler::NodeEnd(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GameObjectToggler*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::GameObjectToggler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GameObjectToggler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::GameObjectToggler* VROSC::GameObjectToggler::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::GameObjectToggler*>());
}
// Ctor Parameters []
constexpr ::VROSC::GameObjectToggler::GameObjectToggler()   {
}
