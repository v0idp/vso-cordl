#pragma once
// IWYU pragma private; include "Vuplex/WebView/EventArgs_1.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Vuplex/WebView/zzzz__EventArgs_1_def.hpp"
template<typename T>
constexpr T& Vuplex::WebView::EventArgs_1<T>::__cordl_internal_get__Value_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Value_k__BackingField;
}
template<typename T>
constexpr T const& Vuplex::WebView::EventArgs_1<T>::__cordl_internal_get__Value_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Value_k__BackingField;
}
template<typename T>
constexpr void Vuplex::WebView::EventArgs_1<T>::__cordl_internal_set__Value_k__BackingField(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____Value_k__BackingField, value);
}
template<typename T>
inline T Vuplex::WebView::EventArgs_1<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::EventArgs_1<T>*>::get(),
                        "get_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template<typename T>
inline void Vuplex::WebView::EventArgs_1<T>::set_Value(T  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::EventArgs_1<T>*>::get(),
                        "set_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template<typename T>
inline void Vuplex::WebView::EventArgs_1<T>::_ctor(T  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::EventArgs_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
template<typename T>
inline ::Vuplex::WebView::EventArgs_1<T>* Vuplex::WebView::EventArgs_1<T>::New_ctor(T  val)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::EventArgs_1<T>*>(val));
}
// Ctor Parameters []
template<typename T>
constexpr ::Vuplex::WebView::EventArgs_1<T>::EventArgs_1()   {
}
