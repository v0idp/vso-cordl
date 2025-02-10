#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/StringWithIdBridgeMessage.hpp"
#include "Vuplex/WebView/Internal/zzzz__BridgeMessage_impl.hpp"
#include "Vuplex/WebView/Internal/zzzz__StringWithIdBridgeMessage_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::Internal::StringWithIdBridgeMessage._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::StringWithIdBridgeMessage::*)()>(&::Vuplex::WebView::Internal::StringWithIdBridgeMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17c1f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::StringWithIdBridgeMessage*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Vuplex::WebView::Internal::StringWithIdBridgeMessage::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr ::StringW const& Vuplex::WebView::Internal::StringWithIdBridgeMessage::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void Vuplex::WebView::Internal::StringWithIdBridgeMessage::__cordl_internal_set_id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Vuplex::WebView::Internal::StringWithIdBridgeMessage::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr ::StringW const& Vuplex::WebView::Internal::StringWithIdBridgeMessage::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void Vuplex::WebView::Internal::StringWithIdBridgeMessage::__cordl_internal_set_value(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::Internal::StringWithIdBridgeMessage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::StringWithIdBridgeMessage*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::Internal::StringWithIdBridgeMessage* Vuplex::WebView::Internal::StringWithIdBridgeMessage::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::StringWithIdBridgeMessage*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::StringWithIdBridgeMessage::StringWithIdBridgeMessage()   {
}
