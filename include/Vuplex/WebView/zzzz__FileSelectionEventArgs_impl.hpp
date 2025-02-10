#pragma once
// IWYU pragma private; include "Vuplex/WebView/FileSelectionEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Vuplex/WebView/zzzz__FileSelectionEventArgs_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::FileSelectionEventArgs._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::FileSelectionEventArgs::*)(::ArrayW<::StringW,::Array<::StringW>*>, bool, ::System::Action_1<::ArrayW<::StringW,::Array<::StringW>*>>*, ::System::Action*)>(&::Vuplex::WebView::FileSelectionEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x16df7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::FileSelectionEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ArrayW<::StringW,::Array<::StringW>*>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& Vuplex::WebView::FileSelectionEventArgs::__cordl_internal_get_AcceptFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AcceptFilters;
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& Vuplex::WebView::FileSelectionEventArgs::__cordl_internal_get_AcceptFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AcceptFilters;
}
constexpr void Vuplex::WebView::FileSelectionEventArgs::__cordl_internal_set_AcceptFilters(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AcceptFilters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Vuplex::WebView::FileSelectionEventArgs::__cordl_internal_get_MultipleAllowed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MultipleAllowed;
}
constexpr bool const& Vuplex::WebView::FileSelectionEventArgs::__cordl_internal_get_MultipleAllowed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MultipleAllowed;
}
constexpr void Vuplex::WebView::FileSelectionEventArgs::__cordl_internal_set_MultipleAllowed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MultipleAllowed = value;
}
constexpr ::System::Action_1<::ArrayW<::StringW,::Array<::StringW>*>>*& Vuplex::WebView::FileSelectionEventArgs::__cordl_internal_get_Continue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Continue;
}
constexpr ::System::Action_1<::ArrayW<::StringW,::Array<::StringW>*>>* const& Vuplex::WebView::FileSelectionEventArgs::__cordl_internal_get_Continue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Continue;
}
constexpr void Vuplex::WebView::FileSelectionEventArgs::__cordl_internal_set_Continue(::System::Action_1<::ArrayW<::StringW,::Array<::StringW>*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Continue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& Vuplex::WebView::FileSelectionEventArgs::__cordl_internal_get_Cancel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Cancel;
}
constexpr ::System::Action* const& Vuplex::WebView::FileSelectionEventArgs::__cordl_internal_get_Cancel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Cancel;
}
constexpr void Vuplex::WebView::FileSelectionEventArgs::__cordl_internal_set_Cancel(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Cancel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::FileSelectionEventArgs::_ctor(::ArrayW<::StringW,::Array<::StringW>*>  acceptFilters, bool  multipleAllowed, ::System::Action_1<::ArrayW<::StringW,::Array<::StringW>*>>*  continueCallback, ::System::Action*  cancelCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::FileSelectionEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ArrayW<::StringW,::Array<::StringW>*>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, acceptFilters, multipleAllowed, continueCallback, cancelCallback);
}
inline ::Vuplex::WebView::FileSelectionEventArgs* Vuplex::WebView::FileSelectionEventArgs::New_ctor(::ArrayW<::StringW,::Array<::StringW>*>  acceptFilters, bool  multipleAllowed, ::System::Action_1<::ArrayW<::StringW,::Array<::StringW>*>>*  continueCallback, ::System::Action*  cancelCallback)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::FileSelectionEventArgs*>(acceptFilters, multipleAllowed, continueCallback, cancelCallback));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::FileSelectionEventArgs::FileSelectionEventArgs()   {
}
