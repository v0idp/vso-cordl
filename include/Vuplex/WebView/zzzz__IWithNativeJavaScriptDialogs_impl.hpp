#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithNativeJavaScriptDialogs.hpp"
#include "Vuplex/WebView/zzzz__IWithNativeJavaScriptDialogs_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::IWithNativeJavaScriptDialogs.SetNativeJavaScriptDialogsEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::IWithNativeJavaScriptDialogs::*)(bool)>(&::Vuplex::WebView::IWithNativeJavaScriptDialogs::SetNativeJavaScriptDialogsEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithNativeJavaScriptDialogs*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithNativeJavaScriptDialogs*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline void Vuplex::WebView::IWithNativeJavaScriptDialogs::SetNativeJavaScriptDialogsEnabled(bool  enabled)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithNativeJavaScriptDialogs*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enabled);
}
