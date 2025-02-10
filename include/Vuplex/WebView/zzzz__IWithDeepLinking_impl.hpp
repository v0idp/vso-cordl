#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithDeepLinking.hpp"
#include "Vuplex/WebView/zzzz__IWithDeepLinking_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::IWithDeepLinking.SetDeepLinkingEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::IWithDeepLinking::*)(bool)>(&::Vuplex::WebView::IWithDeepLinking::SetDeepLinkingEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithDeepLinking*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithDeepLinking*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline void Vuplex::WebView::IWithDeepLinking::SetDeepLinkingEnabled(bool  enabled)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithDeepLinking*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enabled);
}
