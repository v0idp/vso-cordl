#pragma once
// IWYU pragma private; include "Vuplex/WebView/PointerOptions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Vuplex/WebView/zzzz__MouseButton_impl.hpp"
#include "Vuplex/WebView/zzzz__PointerOptions_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::PointerOptions.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Vuplex::WebView::PointerOptions::*)()>(&::Vuplex::WebView::PointerOptions::ToString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x16e392c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::PointerOptions*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::PointerOptions*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::PointerOptions._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::PointerOptions::*)()>(&::Vuplex::WebView::PointerOptions::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x16e391c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::PointerOptions*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Vuplex::WebView::MouseButton& Vuplex::WebView::PointerOptions::__cordl_internal_get_Button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Button;
}
constexpr ::Vuplex::WebView::MouseButton const& Vuplex::WebView::PointerOptions::__cordl_internal_get_Button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Button;
}
constexpr void Vuplex::WebView::PointerOptions::__cordl_internal_set_Button(::Vuplex::WebView::MouseButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Button = value;
}
constexpr int32_t& Vuplex::WebView::PointerOptions::__cordl_internal_get_ClickCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClickCount;
}
constexpr int32_t const& Vuplex::WebView::PointerOptions::__cordl_internal_get_ClickCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClickCount;
}
constexpr void Vuplex::WebView::PointerOptions::__cordl_internal_set_ClickCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClickCount = value;
}
constexpr bool& Vuplex::WebView::PointerOptions::__cordl_internal_get_PreventStealingFocus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreventStealingFocus;
}
constexpr bool const& Vuplex::WebView::PointerOptions::__cordl_internal_get_PreventStealingFocus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreventStealingFocus;
}
constexpr void Vuplex::WebView::PointerOptions::__cordl_internal_set_PreventStealingFocus(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreventStealingFocus = value;
}
inline ::StringW Vuplex::WebView::PointerOptions::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::PointerOptions*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Vuplex::WebView::PointerOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::PointerOptions*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::PointerOptions* Vuplex::WebView::PointerOptions::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::PointerOptions*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::PointerOptions::PointerOptions()   {
}
