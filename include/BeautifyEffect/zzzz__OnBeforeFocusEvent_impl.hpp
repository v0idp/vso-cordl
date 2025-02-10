#pragma once
// IWYU pragma private; include "BeautifyEffect/OnBeforeFocusEvent.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "BeautifyEffect/zzzz__OnBeforeFocusEvent_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::BeautifyEffect::OnBeforeFocusEvent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeautifyEffect::OnBeforeFocusEvent::*)(::System::Object*, ::System::IntPtr)>(&::BeautifyEffect::OnBeforeFocusEvent::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x180f9f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::OnBeforeFocusEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeautifyEffect::OnBeforeFocusEvent.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeautifyEffect::OnBeforeFocusEvent::*)(float_t)>(&::BeautifyEffect::OnBeforeFocusEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x180fa84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::OnBeforeFocusEvent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::OnBeforeFocusEvent*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeautifyEffect::OnBeforeFocusEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::BeautifyEffect::OnBeforeFocusEvent::*)(float_t, ::System::AsyncCallback*, ::System::Object*)>(&::BeautifyEffect::OnBeforeFocusEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x180fa98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::OnBeforeFocusEvent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::OnBeforeFocusEvent*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeautifyEffect::OnBeforeFocusEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeautifyEffect::OnBeforeFocusEvent::*)(::System::IAsyncResult*)>(&::BeautifyEffect::OnBeforeFocusEvent::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x180fb1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::OnBeforeFocusEvent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::OnBeforeFocusEvent*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void BeautifyEffect::OnBeforeFocusEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::OnBeforeFocusEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline float_t BeautifyEffect::OnBeforeFocusEvent::Invoke(float_t  currentFocusDistance)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::OnBeforeFocusEvent*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, currentFocusDistance);
}
inline ::System::IAsyncResult* BeautifyEffect::OnBeforeFocusEvent::BeginInvoke(float_t  currentFocusDistance, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::OnBeforeFocusEvent*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, currentFocusDistance, callback, object);
}
inline float_t BeautifyEffect::OnBeforeFocusEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::OnBeforeFocusEvent*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, result);
}
inline ::BeautifyEffect::OnBeforeFocusEvent* BeautifyEffect::OnBeforeFocusEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeautifyEffect::OnBeforeFocusEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::BeautifyEffect::OnBeforeFocusEvent::OnBeforeFocusEvent()   {
}
