#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/ConsoleBridgeMessage.hpp"
#include "Vuplex/WebView/Internal/zzzz__BridgeMessage_impl.hpp"
#include "Vuplex/WebView/Internal/zzzz__ConsoleBridgeMessage_def.hpp"
#include "Vuplex/WebView/zzzz__ConsoleMessageEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__ConsoleMessageLevel_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::Internal::ConsoleBridgeMessage.ToEventArgs
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Vuplex::WebView::ConsoleMessageEventArgs* (::Vuplex::WebView::Internal::ConsoleBridgeMessage::*)()>(&::Vuplex::WebView::Internal::ConsoleBridgeMessage::ToEventArgs)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x17bc448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ConsoleBridgeMessage*>::get(),
                        "ToEventArgs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::ConsoleBridgeMessage._parseMessageLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Vuplex::WebView::ConsoleMessageLevel (::Vuplex::WebView::Internal::ConsoleBridgeMessage::*)(::StringW)>(&::Vuplex::WebView::Internal::ConsoleBridgeMessage::_parseMessageLevel)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x17bc4d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ConsoleBridgeMessage*>::get(),
                        "_parseMessageLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::ConsoleBridgeMessage._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::ConsoleBridgeMessage::*)()>(&::Vuplex::WebView::Internal::ConsoleBridgeMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17bc684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ConsoleBridgeMessage*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Vuplex::WebView::Internal::ConsoleBridgeMessage::__cordl_internal_get_message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr ::StringW const& Vuplex::WebView::Internal::ConsoleBridgeMessage::__cordl_internal_get_message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr void Vuplex::WebView::Internal::ConsoleBridgeMessage::__cordl_internal_set_message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Vuplex::WebView::Internal::ConsoleBridgeMessage::__cordl_internal_get_level()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___level;
}
constexpr ::StringW const& Vuplex::WebView::Internal::ConsoleBridgeMessage::__cordl_internal_get_level() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___level;
}
constexpr void Vuplex::WebView::Internal::ConsoleBridgeMessage::__cordl_internal_set_level(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___level)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Vuplex::WebView::Internal::ConsoleBridgeMessage::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr ::StringW const& Vuplex::WebView::Internal::ConsoleBridgeMessage::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr void Vuplex::WebView::Internal::ConsoleBridgeMessage::__cordl_internal_set_source(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Vuplex::WebView::Internal::ConsoleBridgeMessage::__cordl_internal_get_line()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___line;
}
constexpr int32_t const& Vuplex::WebView::Internal::ConsoleBridgeMessage::__cordl_internal_get_line() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___line;
}
constexpr void Vuplex::WebView::Internal::ConsoleBridgeMessage::__cordl_internal_set_line(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___line = value;
}
inline ::Vuplex::WebView::ConsoleMessageEventArgs* Vuplex::WebView::Internal::ConsoleBridgeMessage::ToEventArgs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ConsoleBridgeMessage*>::get(),
                        "ToEventArgs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Vuplex::WebView::ConsoleMessageEventArgs*, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::ConsoleMessageLevel Vuplex::WebView::Internal::ConsoleBridgeMessage::_parseMessageLevel(::StringW  levelString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ConsoleBridgeMessage*>::get(),
                        "_parseMessageLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Vuplex::WebView::ConsoleMessageLevel, false>(this, ___internal_method, levelString);
}
inline void Vuplex::WebView::Internal::ConsoleBridgeMessage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::ConsoleBridgeMessage*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::Internal::ConsoleBridgeMessage* Vuplex::WebView::Internal::ConsoleBridgeMessage::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::ConsoleBridgeMessage*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::ConsoleBridgeMessage::ConsoleBridgeMessage()   {
}
