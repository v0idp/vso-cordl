#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/FileSelectionMessage.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Vuplex/WebView/Internal/zzzz__FileSelectionMessage_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::Internal::FileSelectionMessage.FromJson
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Vuplex::WebView::Internal::FileSelectionMessage* (*)(::StringW)>(&::Vuplex::WebView::Internal::FileSelectionMessage::FromJson)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x17bca8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::FileSelectionMessage*>::get(),
                        "FromJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::FileSelectionMessage._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::FileSelectionMessage::*)()>(&::Vuplex::WebView::Internal::FileSelectionMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17bcad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::FileSelectionMessage*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& Vuplex::WebView::Internal::FileSelectionMessage::__cordl_internal_get_AcceptFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AcceptFilters;
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& Vuplex::WebView::Internal::FileSelectionMessage::__cordl_internal_get_AcceptFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AcceptFilters;
}
constexpr void Vuplex::WebView::Internal::FileSelectionMessage::__cordl_internal_set_AcceptFilters(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AcceptFilters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Vuplex::WebView::Internal::FileSelectionMessage::__cordl_internal_get_MultipleAllowed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MultipleAllowed;
}
constexpr bool const& Vuplex::WebView::Internal::FileSelectionMessage::__cordl_internal_get_MultipleAllowed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MultipleAllowed;
}
constexpr void Vuplex::WebView::Internal::FileSelectionMessage::__cordl_internal_set_MultipleAllowed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MultipleAllowed = value;
}
inline ::Vuplex::WebView::Internal::FileSelectionMessage* Vuplex::WebView::Internal::FileSelectionMessage::FromJson(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::FileSelectionMessage*>::get(),
                        "FromJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Vuplex::WebView::Internal::FileSelectionMessage*, false>(nullptr, ___internal_method, json);
}
inline void Vuplex::WebView::Internal::FileSelectionMessage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::FileSelectionMessage*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::Internal::FileSelectionMessage* Vuplex::WebView::Internal::FileSelectionMessage::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::FileSelectionMessage*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::FileSelectionMessage::FileSelectionMessage()   {
}
