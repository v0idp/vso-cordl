#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/UrlAction.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Vuplex/WebView/Internal/zzzz__UrlAction_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::Internal::UrlAction._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::UrlAction::*)()>(&::Vuplex::WebView::Internal::UrlAction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17c27e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::UrlAction*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Vuplex::WebView::Internal::UrlAction::__cordl_internal_get_Url()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Url;
}
constexpr ::StringW const& Vuplex::WebView::Internal::UrlAction::__cordl_internal_get_Url() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Url;
}
constexpr void Vuplex::WebView::Internal::UrlAction::__cordl_internal_set_Url(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Url)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Vuplex::WebView::Internal::UrlAction::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::StringW const& Vuplex::WebView::Internal::UrlAction::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void Vuplex::WebView::Internal::UrlAction::__cordl_internal_set_Type(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::Internal::UrlAction::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::UrlAction*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::Internal::UrlAction* Vuplex::WebView::Internal::UrlAction::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::UrlAction*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::UrlAction::UrlAction()   {
}
