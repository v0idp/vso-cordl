#pragma once
// IWYU pragma private; include "Vuplex/WebView/LoadFailedEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Vuplex/WebView/zzzz__LoadFailedEventArgs_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::LoadFailedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::LoadFailedEventArgs::*)(::StringW, ::StringW)>(&::Vuplex::WebView::LoadFailedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x16e0088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::LoadFailedEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::LoadFailedEventArgs.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Vuplex::WebView::LoadFailedEventArgs::*)()>(&::Vuplex::WebView::LoadFailedEventArgs::ToString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x16e00f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::LoadFailedEventArgs*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::LoadFailedEventArgs*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Vuplex::WebView::LoadFailedEventArgs::__cordl_internal_get_NativeErrorCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NativeErrorCode;
}
constexpr ::StringW const& Vuplex::WebView::LoadFailedEventArgs::__cordl_internal_get_NativeErrorCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NativeErrorCode;
}
constexpr void Vuplex::WebView::LoadFailedEventArgs::__cordl_internal_set_NativeErrorCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NativeErrorCode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Vuplex::WebView::LoadFailedEventArgs::__cordl_internal_get_Url()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Url;
}
constexpr ::StringW const& Vuplex::WebView::LoadFailedEventArgs::__cordl_internal_get_Url() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Url;
}
constexpr void Vuplex::WebView::LoadFailedEventArgs::__cordl_internal_set_Url(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Url)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::LoadFailedEventArgs::_ctor(::StringW  nativeErrorCode, ::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::LoadFailedEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nativeErrorCode, url);
}
inline ::StringW Vuplex::WebView::LoadFailedEventArgs::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::LoadFailedEventArgs*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::LoadFailedEventArgs* Vuplex::WebView::LoadFailedEventArgs::New_ctor(::StringW  nativeErrorCode, ::StringW  url)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::LoadFailedEventArgs*>(nativeErrorCode, url));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::LoadFailedEventArgs::LoadFailedEventArgs()   {
}
