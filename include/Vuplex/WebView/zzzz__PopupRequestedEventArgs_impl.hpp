#pragma once
// IWYU pragma private; include "Vuplex/WebView/PopupRequestedEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Vuplex/WebView/zzzz__PopupRequestedEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__IWebView_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::PopupRequestedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::PopupRequestedEventArgs::*)(::StringW, ::Vuplex::WebView::IWebView*)>(&::Vuplex::WebView::PopupRequestedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x16d2838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::PopupRequestedEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IWebView*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Vuplex::WebView::PopupRequestedEventArgs::__cordl_internal_get_Url()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Url;
}
constexpr ::StringW const& Vuplex::WebView::PopupRequestedEventArgs::__cordl_internal_get_Url() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Url;
}
constexpr void Vuplex::WebView::PopupRequestedEventArgs::__cordl_internal_set_Url(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Url)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Vuplex::WebView::IWebView*& Vuplex::WebView::PopupRequestedEventArgs::__cordl_internal_get_WebView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WebView;
}
constexpr ::Vuplex::WebView::IWebView* const& Vuplex::WebView::PopupRequestedEventArgs::__cordl_internal_get_WebView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WebView;
}
constexpr void Vuplex::WebView::PopupRequestedEventArgs::__cordl_internal_set_WebView(::Vuplex::WebView::IWebView*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___WebView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::PopupRequestedEventArgs::_ctor(::StringW  url, ::Vuplex::WebView::IWebView*  webView)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::PopupRequestedEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IWebView*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, url, webView);
}
inline ::Vuplex::WebView::PopupRequestedEventArgs* Vuplex::WebView::PopupRequestedEventArgs::New_ctor(::StringW  url, ::Vuplex::WebView::IWebView*  webView)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::PopupRequestedEventArgs*>(url, webView));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::PopupRequestedEventArgs::PopupRequestedEventArgs()   {
}
