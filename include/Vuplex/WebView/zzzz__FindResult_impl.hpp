#pragma once
// IWYU pragma private; include "Vuplex/WebView/FindResult.hpp"
#include "Vuplex/WebView/zzzz__FindResult_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::FindResult.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Vuplex::WebView::FindResult::*)()>(&::Vuplex::WebView::FindResult::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x16df9dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::FindResult>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::FindResult>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
inline ::StringW Vuplex::WebView::FindResult::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::FindResult>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "CurrentMatchIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MatchCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::FindResult::FindResult(int32_t  CurrentMatchIndex, int32_t  MatchCount) noexcept  {
this->CurrentMatchIndex = CurrentMatchIndex;
this->MatchCount = MatchCount;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::FindResult::FindResult()   {
}
