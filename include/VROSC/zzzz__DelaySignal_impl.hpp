#pragma once
// IWYU pragma private; include "VROSC/DelaySignal.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__DelaySignal_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::DelaySignal.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DelaySignal::*)(::VROSC::Signal*)>(&::VROSC::DelaySignal::NodeBegin)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1721430;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DelaySignal*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DelaySignal*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DelaySignal.NodeStay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DelaySignal::*)(::VROSC::Signal*)>(&::VROSC::DelaySignal::NodeStay)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1721448;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DelaySignal*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DelaySignal*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DelaySignal.NodeEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DelaySignal::*)(::VROSC::Signal*)>(&::VROSC::DelaySignal::NodeEnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1721488;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DelaySignal*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DelaySignal*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DelaySignal._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DelaySignal::*)()>(&::VROSC::DelaySignal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1721490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DelaySignal*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::DelaySignal::__cordl_internal_get__delayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayTime;
}
constexpr float_t const& VROSC::DelaySignal::__cordl_internal_get__delayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayTime;
}
constexpr void VROSC::DelaySignal::__cordl_internal_set__delayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delayTime = value;
}
constexpr float_t& VROSC::DelaySignal::__cordl_internal_get__signalTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____signalTimer;
}
constexpr float_t const& VROSC::DelaySignal::__cordl_internal_get__signalTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____signalTimer;
}
constexpr void VROSC::DelaySignal::__cordl_internal_set__signalTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____signalTimer = value;
}
inline void VROSC::DelaySignal::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DelaySignal*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::DelaySignal::NodeStay(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DelaySignal*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::DelaySignal::NodeEnd(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DelaySignal*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::DelaySignal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DelaySignal*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::DelaySignal* VROSC::DelaySignal::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::DelaySignal*>());
}
// Ctor Parameters []
constexpr ::VROSC::DelaySignal::DelaySignal()   {
}
