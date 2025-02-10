#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithKeyDownAndUp.hpp"
#include "Vuplex/WebView/zzzz__IWithKeyDownAndUp_def.hpp"
#include "Vuplex/WebView/zzzz__KeyModifier_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::IWithKeyDownAndUp.KeyDown
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::IWithKeyDownAndUp::*)(::StringW, ::Vuplex::WebView::KeyModifier)>(&::Vuplex::WebView::IWithKeyDownAndUp::KeyDown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithKeyDownAndUp*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithKeyDownAndUp*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::IWithKeyDownAndUp.KeyUp
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::IWithKeyDownAndUp::*)(::StringW, ::Vuplex::WebView::KeyModifier)>(&::Vuplex::WebView::IWithKeyDownAndUp::KeyUp)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithKeyDownAndUp*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithKeyDownAndUp*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
inline void Vuplex::WebView::IWithKeyDownAndUp::KeyDown(::StringW  key, ::Vuplex::WebView::KeyModifier  modifiers)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithKeyDownAndUp*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, modifiers);
}
inline void Vuplex::WebView::IWithKeyDownAndUp::KeyUp(::StringW  key, ::Vuplex::WebView::KeyModifier  modifiers)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithKeyDownAndUp*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, modifiers);
}
