#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/BridgeMessage.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Vuplex/WebView/Internal/zzzz__BridgeMessage_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::Internal::BridgeMessage.ParseType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Vuplex::WebView::Internal::BridgeMessage::ParseType)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x17bbf10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BridgeMessage*>::get(),
                        "ParseType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BridgeMessage._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BridgeMessage::*)()>(&::Vuplex::WebView::Internal::BridgeMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17bbfdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BridgeMessage*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Vuplex::WebView::Internal::BridgeMessage::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::StringW const& Vuplex::WebView::Internal::BridgeMessage::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void Vuplex::WebView::Internal::BridgeMessage::__cordl_internal_set_type(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Vuplex::WebView::Internal::BridgeMessage::ParseType(::StringW  serializedMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BridgeMessage*>::get(),
                        "ParseType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, serializedMessage);
}
inline void Vuplex::WebView::Internal::BridgeMessage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BridgeMessage*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::Internal::BridgeMessage* Vuplex::WebView::Internal::BridgeMessage::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::BridgeMessage*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::BridgeMessage::BridgeMessage()   {
}
