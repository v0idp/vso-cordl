#pragma once
// IWYU pragma private; include "Vuplex/WebView/TrialExpiredException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Vuplex/WebView/zzzz__TrialExpiredException_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::TrialExpiredException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::TrialExpiredException::*)(::StringW)>(&::Vuplex::WebView::TrialExpiredException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x16d3f24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::TrialExpiredException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Vuplex::WebView::TrialExpiredException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::TrialExpiredException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::Vuplex::WebView::TrialExpiredException* Vuplex::WebView::TrialExpiredException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::TrialExpiredException*>(message));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::TrialExpiredException::TrialExpiredException()   {
}
