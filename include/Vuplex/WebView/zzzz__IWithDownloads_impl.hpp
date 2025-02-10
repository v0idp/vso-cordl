#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithDownloads.hpp"
#include "Vuplex/WebView/zzzz__IWithDownloads_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "Vuplex/WebView/zzzz__DownloadChangedEventArgs_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::IWithDownloads.SetDownloadsEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::IWithDownloads::*)(bool)>(&::Vuplex::WebView::IWithDownloads::SetDownloadsEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithDownloads*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithDownloads*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::IWithDownloads.add_DownloadProgressChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::IWithDownloads::*)(::System::EventHandler_1<::Vuplex::WebView::DownloadChangedEventArgs*>*)>(&::Vuplex::WebView::IWithDownloads::add_DownloadProgressChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithDownloads*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithDownloads*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::IWithDownloads.remove_DownloadProgressChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::IWithDownloads::*)(::System::EventHandler_1<::Vuplex::WebView::DownloadChangedEventArgs*>*)>(&::Vuplex::WebView::IWithDownloads::remove_DownloadProgressChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithDownloads*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithDownloads*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
inline void Vuplex::WebView::IWithDownloads::SetDownloadsEnabled(bool  enabled)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithDownloads*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enabled);
}
inline void Vuplex::WebView::IWithDownloads::add_DownloadProgressChanged(::System::EventHandler_1<::Vuplex::WebView::DownloadChangedEventArgs*>*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithDownloads*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::IWithDownloads::remove_DownloadProgressChanged(::System::EventHandler_1<::Vuplex::WebView::DownloadChangedEventArgs*>*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithDownloads*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
