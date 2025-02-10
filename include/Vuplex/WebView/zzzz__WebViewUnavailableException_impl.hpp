#pragma once
// IWYU pragma private; include "Vuplex/WebView/WebViewUnavailableException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Vuplex/WebView/zzzz__WebViewUnavailableException_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::WebViewUnavailableException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::WebViewUnavailableException::*)(::StringW)>(&::Vuplex::WebView::WebViewUnavailableException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x16e5ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::WebViewUnavailableException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Vuplex::WebView::WebViewUnavailableException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::WebViewUnavailableException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::Vuplex::WebView::WebViewUnavailableException* Vuplex::WebView::WebViewUnavailableException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::WebViewUnavailableException*>(message));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::WebViewUnavailableException::WebViewUnavailableException()   {
}
