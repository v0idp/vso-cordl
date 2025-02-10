#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithMovablePointer.hpp"
#include "Vuplex/WebView/zzzz__IWithMovablePointer_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::IWithMovablePointer.MovePointer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::IWithMovablePointer::*)(::UnityEngine::Vector2, bool)>(&::Vuplex::WebView::IWithMovablePointer::MovePointer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithMovablePointer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithMovablePointer*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline void Vuplex::WebView::IWithMovablePointer::MovePointer(::UnityEngine::Vector2  normalizedPoint, bool  pointerLeave)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithMovablePointer*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, normalizedPoint, pointerLeave);
}
