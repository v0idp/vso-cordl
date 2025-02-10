#pragma once
// IWYU pragma private; include "Vuplex/WebView/TerminatedEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Vuplex/WebView/zzzz__TerminationType_impl.hpp"
#include "Vuplex/WebView/zzzz__TerminatedEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__TerminationType_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::TerminatedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::TerminatedEventArgs::*)(::Vuplex::WebView::TerminationType)>(&::Vuplex::WebView::TerminatedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x16e3b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::TerminatedEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::TerminationType>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Vuplex::WebView::TerminationType& Vuplex::WebView::TerminatedEventArgs::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::Vuplex::WebView::TerminationType const& Vuplex::WebView::TerminatedEventArgs::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void Vuplex::WebView::TerminatedEventArgs::__cordl_internal_set_Type(::Vuplex::WebView::TerminationType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
inline void Vuplex::WebView::TerminatedEventArgs::_ctor(::Vuplex::WebView::TerminationType  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::TerminatedEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::TerminationType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::Vuplex::WebView::TerminatedEventArgs* Vuplex::WebView::TerminatedEventArgs::New_ctor(::Vuplex::WebView::TerminationType  type)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::TerminatedEventArgs*>(type));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::TerminatedEventArgs::TerminatedEventArgs()   {
}
