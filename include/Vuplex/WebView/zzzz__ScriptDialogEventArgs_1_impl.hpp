#pragma once
// IWYU pragma private; include "Vuplex/WebView/ScriptDialogEventArgs_1.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Vuplex/WebView/zzzz__ScriptDialogEventArgs_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template<typename T>
constexpr ::StringW& Vuplex::WebView::ScriptDialogEventArgs_1<T>::__cordl_internal_get_Message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
template<typename T>
constexpr ::StringW const& Vuplex::WebView::ScriptDialogEventArgs_1<T>::__cordl_internal_get_Message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
template<typename T>
constexpr void Vuplex::WebView::ScriptDialogEventArgs_1<T>::__cordl_internal_set_Message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___Message, value);
}
template<typename T>
constexpr ::System::Action_1<T>*& Vuplex::WebView::ScriptDialogEventArgs_1<T>::__cordl_internal_get_Continue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Continue;
}
template<typename T>
constexpr ::System::Action_1<T>* const& Vuplex::WebView::ScriptDialogEventArgs_1<T>::__cordl_internal_get_Continue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Continue;
}
template<typename T>
constexpr void Vuplex::WebView::ScriptDialogEventArgs_1<T>::__cordl_internal_set_Continue(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___Continue, value);
}
template<typename T>
inline void Vuplex::WebView::ScriptDialogEventArgs_1<T>::_ctor(::StringW  message, ::System::Action_1<T>*  continueCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::ScriptDialogEventArgs_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, continueCallback);
}
template<typename T>
inline ::Vuplex::WebView::ScriptDialogEventArgs_1<T>* Vuplex::WebView::ScriptDialogEventArgs_1<T>::New_ctor(::StringW  message, ::System::Action_1<T>*  continueCallback)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::ScriptDialogEventArgs_1<T>*>(message, continueCallback));
}
// Ctor Parameters []
template<typename T>
constexpr ::Vuplex::WebView::ScriptDialogEventArgs_1<T>::ScriptDialogEventArgs_1()   {
}
