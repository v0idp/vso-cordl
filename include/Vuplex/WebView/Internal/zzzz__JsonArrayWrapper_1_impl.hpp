#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/JsonArrayWrapper_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Vuplex/WebView/Internal/zzzz__JsonArrayWrapper_1_def.hpp"
template<typename T>
constexpr ::ArrayW<T,::Array<T>*>& Vuplex::WebView::Internal::JsonArrayWrapper_1<T>::__cordl_internal_get_Items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Items;
}
template<typename T>
constexpr ::ArrayW<T,::Array<T>*> const& Vuplex::WebView::Internal::JsonArrayWrapper_1<T>::__cordl_internal_get_Items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Items;
}
template<typename T>
constexpr void Vuplex::WebView::Internal::JsonArrayWrapper_1<T>::__cordl_internal_set_Items(::ArrayW<T,::Array<T>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___Items, value);
}
template<typename T>
inline void Vuplex::WebView::Internal::JsonArrayWrapper_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::JsonArrayWrapper_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T>
inline void Vuplex::WebView::Internal::JsonArrayWrapper_1<T>::_ctor(::ArrayW<T,::Array<T>*>  items)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::JsonArrayWrapper_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, items);
}
template<typename T>
inline ::Vuplex::WebView::Internal::JsonArrayWrapper_1<T>* Vuplex::WebView::Internal::JsonArrayWrapper_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::JsonArrayWrapper_1<T>*>());
}
template<typename T>
inline ::Vuplex::WebView::Internal::JsonArrayWrapper_1<T>* Vuplex::WebView::Internal::JsonArrayWrapper_1<T>::New_ctor(::ArrayW<T,::Array<T>*>  items)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::JsonArrayWrapper_1<T>*>(items));
}
// Ctor Parameters []
template<typename T>
constexpr ::Vuplex::WebView::Internal::JsonArrayWrapper_1<T>::JsonArrayWrapper_1()   {
}
