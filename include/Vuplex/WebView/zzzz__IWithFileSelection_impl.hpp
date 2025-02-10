#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithFileSelection.hpp"
#include "Vuplex/WebView/zzzz__IWithFileSelection_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "Vuplex/WebView/zzzz__FileSelectionEventArgs_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::IWithFileSelection.add_FileSelectionRequested
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::IWithFileSelection::*)(::System::EventHandler_1<::Vuplex::WebView::FileSelectionEventArgs*>*)>(&::Vuplex::WebView::IWithFileSelection::add_FileSelectionRequested)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithFileSelection*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithFileSelection*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::IWithFileSelection.remove_FileSelectionRequested
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::IWithFileSelection::*)(::System::EventHandler_1<::Vuplex::WebView::FileSelectionEventArgs*>*)>(&::Vuplex::WebView::IWithFileSelection::remove_FileSelectionRequested)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithFileSelection*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithFileSelection*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
inline void Vuplex::WebView::IWithFileSelection::add_FileSelectionRequested(::System::EventHandler_1<::Vuplex::WebView::FileSelectionEventArgs*>*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithFileSelection*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::IWithFileSelection::remove_FileSelectionRequested(::System::EventHandler_1<::Vuplex::WebView::FileSelectionEventArgs*>*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithFileSelection*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
