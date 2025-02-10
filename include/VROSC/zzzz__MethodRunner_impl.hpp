#pragma once
// IWYU pragma private; include "VROSC/MethodRunner.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__MethodRunner_def.hpp"
#include "VROSC/zzzz__MethodRunner_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::MethodRunner_RunMethodEvent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MethodRunner_RunMethodEvent::*)()>(&::VROSC::MethodRunner_RunMethodEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x171e170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MethodRunner_RunMethodEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void VROSC::MethodRunner_RunMethodEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MethodRunner_RunMethodEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::MethodRunner_RunMethodEvent* VROSC::MethodRunner_RunMethodEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::MethodRunner_RunMethodEvent*>());
}
// Ctor Parameters []
constexpr ::VROSC::MethodRunner_RunMethodEvent::MethodRunner_RunMethodEvent()   {
}
//  Writing Method size for method: ::VROSC::MethodRunner.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MethodRunner::*)(::VROSC::Signal*)>(&::VROSC::MethodRunner::NodeBegin)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x171e110;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MethodRunner*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MethodRunner*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MethodRunner._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MethodRunner::*)()>(&::VROSC::MethodRunner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171e168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MethodRunner*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::MethodRunner_RunMethodEvent*& VROSC::MethodRunner::__cordl_internal_get__targetMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetMethod;
}
constexpr ::VROSC::MethodRunner_RunMethodEvent* const& VROSC::MethodRunner::__cordl_internal_get__targetMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetMethod;
}
constexpr void VROSC::MethodRunner::__cordl_internal_set__targetMethod(::VROSC::MethodRunner_RunMethodEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::MethodRunner::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MethodRunner*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::MethodRunner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MethodRunner*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::MethodRunner* VROSC::MethodRunner::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::MethodRunner*>());
}
// Ctor Parameters []
constexpr ::VROSC::MethodRunner::MethodRunner()   {
}
