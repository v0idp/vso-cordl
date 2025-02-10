#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/UrlChangedMessage.hpp"
#include "Vuplex/WebView/Internal/zzzz__BridgeMessage_impl.hpp"
#include "Vuplex/WebView/Internal/zzzz__UrlChangedMessage_def.hpp"
#include "Vuplex/WebView/Internal/zzzz__UrlAction_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::Internal::UrlChangedMessage._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::UrlChangedMessage::*)()>(&::Vuplex::WebView::Internal::UrlChangedMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17c27e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::UrlChangedMessage*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Vuplex::WebView::Internal::UrlAction*& Vuplex::WebView::Internal::UrlChangedMessage::__cordl_internal_get_urlAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___urlAction;
}
constexpr ::Vuplex::WebView::Internal::UrlAction* const& Vuplex::WebView::Internal::UrlChangedMessage::__cordl_internal_get_urlAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___urlAction;
}
constexpr void Vuplex::WebView::Internal::UrlChangedMessage::__cordl_internal_set_urlAction(::Vuplex::WebView::Internal::UrlAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___urlAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::Internal::UrlChangedMessage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::UrlChangedMessage*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::Internal::UrlChangedMessage* Vuplex::WebView::Internal::UrlChangedMessage::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::UrlChangedMessage*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::UrlChangedMessage::UrlChangedMessage()   {
}
