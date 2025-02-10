#pragma once
// IWYU pragma private; include "DG/Tweening/EaseFunction.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "DG/Tweening/zzzz__EaseFunction_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::DG::Tweening::EaseFunction._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::EaseFunction::*)(::System::Object*, ::System::IntPtr)>(&::DG::Tweening::EaseFunction::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x18c19dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::EaseFunction*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::EaseFunction.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::DG::Tweening::EaseFunction::*)(float_t, float_t, float_t, float_t)>(&::DG::Tweening::EaseFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x18c1a68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::EaseFunction*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::EaseFunction*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::EaseFunction.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::DG::Tweening::EaseFunction::*)(float_t, float_t, float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::DG::Tweening::EaseFunction::BeginInvoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x18c1a7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::EaseFunction*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::EaseFunction*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::EaseFunction.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::DG::Tweening::EaseFunction::*)(::System::IAsyncResult*)>(&::DG::Tweening::EaseFunction::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x18c1b48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::EaseFunction*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::EaseFunction*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void DG::Tweening::EaseFunction::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::EaseFunction*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline float_t DG::Tweening::EaseFunction::Invoke(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::EaseFunction*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, time, duration, overshootOrAmplitude, period);
}
inline ::System::IAsyncResult* DG::Tweening::EaseFunction::BeginInvoke(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::EaseFunction*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, time, duration, overshootOrAmplitude, period, callback, object);
}
inline float_t DG::Tweening::EaseFunction::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::EaseFunction*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, result);
}
inline ::DG::Tweening::EaseFunction* DG::Tweening::EaseFunction::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::EaseFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::DG::Tweening::EaseFunction::EaseFunction()   {
}
