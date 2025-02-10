#pragma once
// IWYU pragma private; include "Vuplex/WebView/UrlChangedEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Vuplex/WebView/zzzz__UrlChangedEventArgs_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::UrlChangedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::UrlChangedEventArgs::*)(::StringW, ::StringW)>(&::Vuplex::WebView::UrlChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x16e3434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::UrlChangedEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Vuplex::WebView::UrlChangedEventArgs::__cordl_internal_get_Url()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Url;
}
constexpr ::StringW const& Vuplex::WebView::UrlChangedEventArgs::__cordl_internal_get_Url() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Url;
}
constexpr void Vuplex::WebView::UrlChangedEventArgs::__cordl_internal_set_Url(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Url)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Vuplex::WebView::UrlChangedEventArgs::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::StringW const& Vuplex::WebView::UrlChangedEventArgs::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void Vuplex::WebView::UrlChangedEventArgs::__cordl_internal_set_Type(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Vuplex::WebView::UrlChangedEventArgs::__cordl_internal_get_Title()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Title;
}
constexpr ::StringW const& Vuplex::WebView::UrlChangedEventArgs::__cordl_internal_get_Title() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Title;
}
constexpr void Vuplex::WebView::UrlChangedEventArgs::__cordl_internal_set_Title(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Title)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::UrlChangedEventArgs::_ctor(::StringW  url, ::StringW  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::UrlChangedEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, url, type);
}
inline ::Vuplex::WebView::UrlChangedEventArgs* Vuplex::WebView::UrlChangedEventArgs::New_ctor(::StringW  url, ::StringW  type)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::UrlChangedEventArgs*>(url, type));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::UrlChangedEventArgs::UrlChangedEventArgs()   {
}
