#pragma once
// IWYU pragma private; include "Vuplex/WebView/StandaloneWebView.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Vuplex/WebView/zzzz__StandaloneWebView_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::StandaloneWebView._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::StandaloneWebView::*)()>(&::Vuplex::WebView::StandaloneWebView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e5fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::StandaloneWebView*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Vuplex::WebView::StandaloneWebView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::StandaloneWebView*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::StandaloneWebView* Vuplex::WebView::StandaloneWebView::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::StandaloneWebView*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::StandaloneWebView::StandaloneWebView()   {
}
