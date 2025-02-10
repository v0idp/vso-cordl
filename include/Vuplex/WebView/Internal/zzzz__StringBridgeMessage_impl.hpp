#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/StringBridgeMessage.hpp"
#include "Vuplex/WebView/Internal/zzzz__BridgeMessage_impl.hpp"
#include "Vuplex/WebView/Internal/zzzz__StringBridgeMessage_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::Internal::StringBridgeMessage.ParseValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Vuplex::WebView::Internal::StringBridgeMessage::ParseValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x17c1ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::StringBridgeMessage*>::get(),
                        "ParseValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::StringBridgeMessage._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::StringBridgeMessage::*)()>(&::Vuplex::WebView::Internal::StringBridgeMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17c1f24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::StringBridgeMessage*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Vuplex::WebView::Internal::StringBridgeMessage::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr ::StringW const& Vuplex::WebView::Internal::StringBridgeMessage::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void Vuplex::WebView::Internal::StringBridgeMessage::__cordl_internal_set_value(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Vuplex::WebView::Internal::StringBridgeMessage::ParseValue(::StringW  serializedMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::StringBridgeMessage*>::get(),
                        "ParseValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, serializedMessage);
}
inline void Vuplex::WebView::Internal::StringBridgeMessage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::StringBridgeMessage*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::Internal::StringBridgeMessage* Vuplex::WebView::Internal::StringBridgeMessage::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::StringBridgeMessage*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::StringBridgeMessage::StringBridgeMessage()   {
}
