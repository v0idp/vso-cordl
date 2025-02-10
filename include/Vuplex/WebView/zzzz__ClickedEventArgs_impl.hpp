#pragma once
// IWYU pragma private; include "Vuplex/WebView/ClickedEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Vuplex/WebView/zzzz__ClickedEventArgs_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::ClickedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::ClickedEventArgs::*)(::UnityEngine::Vector2)>(&::Vuplex::WebView::ClickedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x16d9ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::ClickedEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& Vuplex::WebView::ClickedEventArgs::__cordl_internal_get_Point()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Point;
}
constexpr ::UnityEngine::Vector2 const& Vuplex::WebView::ClickedEventArgs::__cordl_internal_get_Point() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Point;
}
constexpr void Vuplex::WebView::ClickedEventArgs::__cordl_internal_set_Point(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Point = value;
}
inline void Vuplex::WebView::ClickedEventArgs::_ctor(::UnityEngine::Vector2  point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::ClickedEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, point);
}
inline ::Vuplex::WebView::ClickedEventArgs* Vuplex::WebView::ClickedEventArgs::New_ctor(::UnityEngine::Vector2  point)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::ClickedEventArgs*>(point));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::ClickedEventArgs::ClickedEventArgs()   {
}
