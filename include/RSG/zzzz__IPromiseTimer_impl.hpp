#pragma once
// IWYU pragma private; include "RSG/IPromiseTimer.hpp"
#include "RSG/zzzz__IPromiseTimer_def.hpp"
#include "RSG/zzzz__IPromise_def.hpp"
#include "RSG/zzzz__TimeData_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::RSG::IPromiseTimer.WaitFor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::IPromiseTimer::*)(float_t)>(&::RSG::IPromiseTimer::WaitFor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromiseTimer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromiseTimer*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::IPromiseTimer.WaitUntil
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::IPromiseTimer::*)(::System::Func_2<::RSG::TimeData,bool>*)>(&::RSG::IPromiseTimer::WaitUntil)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromiseTimer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromiseTimer*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::IPromiseTimer.WaitWhile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::IPromiseTimer::*)(::System::Func_2<::RSG::TimeData,bool>*)>(&::RSG::IPromiseTimer::WaitWhile)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromiseTimer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromiseTimer*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::IPromiseTimer.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::IPromiseTimer::*)(float_t)>(&::RSG::IPromiseTimer::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromiseTimer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromiseTimer*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::IPromiseTimer.Cancel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RSG::IPromiseTimer::*)(::RSG::IPromise*)>(&::RSG::IPromiseTimer::Cancel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromiseTimer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromiseTimer*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline ::RSG::IPromise* RSG::IPromiseTimer::WaitFor(float_t  seconds)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromiseTimer*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, seconds);
}
inline ::RSG::IPromise* RSG::IPromiseTimer::WaitUntil(::System::Func_2<::RSG::TimeData,bool>*  predicate)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromiseTimer*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, predicate);
}
inline ::RSG::IPromise* RSG::IPromiseTimer::WaitWhile(::System::Func_2<::RSG::TimeData,bool>*  predicate)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromiseTimer*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, predicate);
}
inline void RSG::IPromiseTimer::Update(float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromiseTimer*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deltaTime);
}
inline bool RSG::IPromiseTimer::Cancel(::RSG::IPromise*  promise)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromiseTimer*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, promise);
}
