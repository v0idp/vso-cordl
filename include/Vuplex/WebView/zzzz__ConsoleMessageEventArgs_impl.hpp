#pragma once
// IWYU pragma private; include "Vuplex/WebView/ConsoleMessageEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Vuplex/WebView/zzzz__ConsoleMessageLevel_impl.hpp"
#include "Vuplex/WebView/zzzz__ConsoleMessageEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__ConsoleMessageLevel_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::ConsoleMessageEventArgs._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::ConsoleMessageEventArgs::*)(::Vuplex::WebView::ConsoleMessageLevel, ::StringW, ::StringW, int32_t)>(&::Vuplex::WebView::ConsoleMessageEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x16ddaf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::ConsoleMessageEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::ConsoleMessageLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Vuplex::WebView::ConsoleMessageLevel& Vuplex::WebView::ConsoleMessageEventArgs::__cordl_internal_get_Level()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Level;
}
constexpr ::Vuplex::WebView::ConsoleMessageLevel const& Vuplex::WebView::ConsoleMessageEventArgs::__cordl_internal_get_Level() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Level;
}
constexpr void Vuplex::WebView::ConsoleMessageEventArgs::__cordl_internal_set_Level(::Vuplex::WebView::ConsoleMessageLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Level = value;
}
constexpr ::StringW& Vuplex::WebView::ConsoleMessageEventArgs::__cordl_internal_get_Message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr ::StringW const& Vuplex::WebView::ConsoleMessageEventArgs::__cordl_internal_get_Message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr void Vuplex::WebView::ConsoleMessageEventArgs::__cordl_internal_set_Message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Vuplex::WebView::ConsoleMessageEventArgs::__cordl_internal_get_Source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Source;
}
constexpr ::StringW const& Vuplex::WebView::ConsoleMessageEventArgs::__cordl_internal_get_Source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Source;
}
constexpr void Vuplex::WebView::ConsoleMessageEventArgs::__cordl_internal_set_Source(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Vuplex::WebView::ConsoleMessageEventArgs::__cordl_internal_get_Line()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Line;
}
constexpr int32_t const& Vuplex::WebView::ConsoleMessageEventArgs::__cordl_internal_get_Line() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Line;
}
constexpr void Vuplex::WebView::ConsoleMessageEventArgs::__cordl_internal_set_Line(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Line = value;
}
inline void Vuplex::WebView::ConsoleMessageEventArgs::_ctor(::Vuplex::WebView::ConsoleMessageLevel  level, ::StringW  message, ::StringW  source, int32_t  line)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::ConsoleMessageEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::ConsoleMessageLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level, message, source, line);
}
inline ::Vuplex::WebView::ConsoleMessageEventArgs* Vuplex::WebView::ConsoleMessageEventArgs::New_ctor(::Vuplex::WebView::ConsoleMessageLevel  level, ::StringW  message, ::StringW  source, int32_t  line)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::ConsoleMessageEventArgs*>(level, message, source, line));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::ConsoleMessageEventArgs::ConsoleMessageEventArgs()   {
}
