#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/AndroidStringAndObjectCallback.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
#include "Vuplex/WebView/Internal/zzzz__AndroidStringAndObjectCallback_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::Internal::AndroidStringAndObjectCallback._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::AndroidStringAndObjectCallback::*)(::System::Action_2<::StringW,::UnityEngine::AndroidJavaObject*>*)>(&::Vuplex::WebView::Internal::AndroidStringAndObjectCallback::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x16d3ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidStringAndObjectCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW,::UnityEngine::AndroidJavaObject*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::AndroidStringAndObjectCallback.callback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::AndroidStringAndObjectCallback::*)(::StringW, ::UnityEngine::AndroidJavaObject*)>(&::Vuplex::WebView::Internal::AndroidStringAndObjectCallback::callback)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x16e67d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidStringAndObjectCallback*>::get(),
                        "callback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AndroidJavaObject*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::StringW,::UnityEngine::AndroidJavaObject*>*& Vuplex::WebView::Internal::AndroidStringAndObjectCallback::__cordl_internal_get__callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callback;
}
constexpr ::System::Action_2<::StringW,::UnityEngine::AndroidJavaObject*>* const& Vuplex::WebView::Internal::AndroidStringAndObjectCallback::__cordl_internal_get__callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callback;
}
constexpr void Vuplex::WebView::Internal::AndroidStringAndObjectCallback::__cordl_internal_set__callback(::System::Action_2<::StringW,::UnityEngine::AndroidJavaObject*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::Internal::AndroidStringAndObjectCallback::_ctor(::System::Action_2<::StringW,::UnityEngine::AndroidJavaObject*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidStringAndObjectCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW,::UnityEngine::AndroidJavaObject*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
inline void Vuplex::WebView::Internal::AndroidStringAndObjectCallback::callback(::StringW  param1, ::UnityEngine::AndroidJavaObject*  param2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidStringAndObjectCallback*>::get(),
                        "callback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AndroidJavaObject*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, param1, param2);
}
inline ::Vuplex::WebView::Internal::AndroidStringAndObjectCallback* Vuplex::WebView::Internal::AndroidStringAndObjectCallback::New_ctor(::System::Action_2<::StringW,::UnityEngine::AndroidJavaObject*>*  callback)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::AndroidStringAndObjectCallback*>(callback));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::AndroidStringAndObjectCallback::AndroidStringAndObjectCallback()   {
}
