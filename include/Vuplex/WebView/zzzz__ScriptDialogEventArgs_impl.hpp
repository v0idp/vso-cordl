#pragma once
// IWYU pragma private; include "Vuplex/WebView/ScriptDialogEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Vuplex/WebView/zzzz__ScriptDialogEventArgs_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::ScriptDialogEventArgs._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::ScriptDialogEventArgs::*)(::StringW, ::System::Action*)>(&::Vuplex::WebView::ScriptDialogEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x16e3adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::ScriptDialogEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Vuplex::WebView::ScriptDialogEventArgs::__cordl_internal_get_Message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr ::StringW const& Vuplex::WebView::ScriptDialogEventArgs::__cordl_internal_get_Message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr void Vuplex::WebView::ScriptDialogEventArgs::__cordl_internal_set_Message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& Vuplex::WebView::ScriptDialogEventArgs::__cordl_internal_get_Continue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Continue;
}
constexpr ::System::Action* const& Vuplex::WebView::ScriptDialogEventArgs::__cordl_internal_get_Continue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Continue;
}
constexpr void Vuplex::WebView::ScriptDialogEventArgs::__cordl_internal_set_Continue(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Continue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::ScriptDialogEventArgs::_ctor(::StringW  message, ::System::Action*  continueCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::ScriptDialogEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, continueCallback);
}
inline ::Vuplex::WebView::ScriptDialogEventArgs* Vuplex::WebView::ScriptDialogEventArgs::New_ctor(::StringW  message, ::System::Action*  continueCallback)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::ScriptDialogEventArgs*>(message, continueCallback));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::ScriptDialogEventArgs::ScriptDialogEventArgs()   {
}
