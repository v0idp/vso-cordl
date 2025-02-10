#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/AndroidStringCallback.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
#include "Vuplex/WebView/Internal/zzzz__AndroidStringCallback_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::Internal::AndroidStringCallback._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::AndroidStringCallback::*)(::System::Action_1<::StringW>*)>(&::Vuplex::WebView::Internal::AndroidStringCallback::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x16e67f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidStringCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::AndroidStringCallback.callback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::AndroidStringCallback::*)(::StringW)>(&::Vuplex::WebView::Internal::AndroidStringCallback::callback)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x16e687c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidStringCallback*>::get(),
                        "callback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::StringW>*& Vuplex::WebView::Internal::AndroidStringCallback::__cordl_internal_get__callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callback;
}
constexpr ::System::Action_1<::StringW>* const& Vuplex::WebView::Internal::AndroidStringCallback::__cordl_internal_get__callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callback;
}
constexpr void Vuplex::WebView::Internal::AndroidStringCallback::__cordl_internal_set__callback(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::Internal::AndroidStringCallback::_ctor(::System::Action_1<::StringW>*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidStringCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
inline void Vuplex::WebView::Internal::AndroidStringCallback::callback(::StringW  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidStringCallback*>::get(),
                        "callback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::Vuplex::WebView::Internal::AndroidStringCallback* Vuplex::WebView::Internal::AndroidStringCallback::New_ctor(::System::Action_1<::StringW>*  callback)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::AndroidStringCallback*>(callback));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::AndroidStringCallback::AndroidStringCallback()   {
}
