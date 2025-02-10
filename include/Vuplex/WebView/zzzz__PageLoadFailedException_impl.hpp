#pragma once
// IWYU pragma private; include "Vuplex/WebView/PageLoadFailedException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Vuplex/WebView/zzzz__PageLoadFailedException_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::PageLoadFailedException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::PageLoadFailedException::*)(::StringW)>(&::Vuplex::WebView::PageLoadFailedException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x16e38b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::PageLoadFailedException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Vuplex::WebView::PageLoadFailedException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::PageLoadFailedException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::Vuplex::WebView::PageLoadFailedException* Vuplex::WebView::PageLoadFailedException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::PageLoadFailedException*>(message));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::PageLoadFailedException::PageLoadFailedException()   {
}
