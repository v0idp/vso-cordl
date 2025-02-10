#pragma once
// IWYU pragma private; include "Vuplex/WebView/PointerEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Vuplex/WebView/zzzz__MouseButton_impl.hpp"
#include "Vuplex/WebView/zzzz__PointerEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__PointerOptions_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::PointerEventArgs.ToPointerOptions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Vuplex::WebView::PointerOptions* (::Vuplex::WebView::PointerEventArgs::*)(bool)>(&::Vuplex::WebView::PointerEventArgs::ToPointerOptions)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x16d9450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::PointerEventArgs*>::get(),
                        "ToPointerOptions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::PointerEventArgs._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::PointerEventArgs::*)()>(&::Vuplex::WebView::PointerEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x16df14c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::PointerEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Vuplex::WebView::MouseButton& Vuplex::WebView::PointerEventArgs::__cordl_internal_get_Button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Button;
}
constexpr ::Vuplex::WebView::MouseButton const& Vuplex::WebView::PointerEventArgs::__cordl_internal_get_Button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Button;
}
constexpr void Vuplex::WebView::PointerEventArgs::__cordl_internal_set_Button(::Vuplex::WebView::MouseButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Button = value;
}
constexpr int32_t& Vuplex::WebView::PointerEventArgs::__cordl_internal_get_ClickCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClickCount;
}
constexpr int32_t const& Vuplex::WebView::PointerEventArgs::__cordl_internal_get_ClickCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClickCount;
}
constexpr void Vuplex::WebView::PointerEventArgs::__cordl_internal_set_ClickCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClickCount = value;
}
constexpr ::UnityEngine::Vector2& Vuplex::WebView::PointerEventArgs::__cordl_internal_get_Point()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Point;
}
constexpr ::UnityEngine::Vector2 const& Vuplex::WebView::PointerEventArgs::__cordl_internal_get_Point() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Point;
}
constexpr void Vuplex::WebView::PointerEventArgs::__cordl_internal_set_Point(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Point = value;
}
inline ::Vuplex::WebView::PointerOptions* Vuplex::WebView::PointerEventArgs::ToPointerOptions(bool  preventStealingFocus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::PointerEventArgs*>::get(),
                        "ToPointerOptions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Vuplex::WebView::PointerOptions*, false>(this, ___internal_method, preventStealingFocus);
}
inline void Vuplex::WebView::PointerEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::PointerEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::PointerEventArgs* Vuplex::WebView::PointerEventArgs::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::PointerEventArgs*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::PointerEventArgs::PointerEventArgs()   {
}
