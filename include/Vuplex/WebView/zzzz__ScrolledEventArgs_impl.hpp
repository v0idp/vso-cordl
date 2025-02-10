#pragma once
// IWYU pragma private; include "Vuplex/WebView/ScrolledEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Vuplex/WebView/zzzz__ScrolledEventArgs_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::ScrolledEventArgs._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::ScrolledEventArgs::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::Vuplex::WebView::ScrolledEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x16da00c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::ScrolledEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& Vuplex::WebView::ScrolledEventArgs::__cordl_internal_get_ScrollDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScrollDelta;
}
constexpr ::UnityEngine::Vector2 const& Vuplex::WebView::ScrolledEventArgs::__cordl_internal_get_ScrollDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScrollDelta;
}
constexpr void Vuplex::WebView::ScrolledEventArgs::__cordl_internal_set_ScrollDelta(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScrollDelta = value;
}
constexpr ::UnityEngine::Vector2& Vuplex::WebView::ScrolledEventArgs::__cordl_internal_get_Point()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Point;
}
constexpr ::UnityEngine::Vector2 const& Vuplex::WebView::ScrolledEventArgs::__cordl_internal_get_Point() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Point;
}
constexpr void Vuplex::WebView::ScrolledEventArgs::__cordl_internal_set_Point(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Point = value;
}
inline void Vuplex::WebView::ScrolledEventArgs::_ctor(::UnityEngine::Vector2  scrollDelta, ::UnityEngine::Vector2  point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::ScrolledEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scrollDelta, point);
}
inline ::Vuplex::WebView::ScrolledEventArgs* Vuplex::WebView::ScrolledEventArgs::New_ctor(::UnityEngine::Vector2  scrollDelta, ::UnityEngine::Vector2  point)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::ScrolledEventArgs*>(scrollDelta, point));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::ScrolledEventArgs::ScrolledEventArgs()   {
}
