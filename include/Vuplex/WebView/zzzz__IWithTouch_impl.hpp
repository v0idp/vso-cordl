#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithTouch.hpp"
#include "Vuplex/WebView/zzzz__IWithTouch_def.hpp"
#include "Vuplex/WebView/zzzz__TouchEvent_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::IWithTouch.SendTouchEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::IWithTouch::*)(::Vuplex::WebView::TouchEvent)>(&::Vuplex::WebView::IWithTouch::SendTouchEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithTouch*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithTouch*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline void Vuplex::WebView::IWithTouch::SendTouchEvent(::Vuplex::WebView::TouchEvent  touchEvent)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithTouch*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, touchEvent);
}
