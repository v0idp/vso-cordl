#pragma once
// IWYU pragma private; include "Vuplex/WebView/FocusedInputFieldChangedEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Vuplex/WebView/zzzz__FocusedInputFieldType_impl.hpp"
#include "Vuplex/WebView/zzzz__FocusedInputFieldChangedEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__FocusedInputFieldType_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::FocusedInputFieldChangedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::FocusedInputFieldChangedEventArgs::*)(::Vuplex::WebView::FocusedInputFieldType)>(&::Vuplex::WebView::FocusedInputFieldChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x16df87c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::FocusedInputFieldType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::FocusedInputFieldChangedEventArgs.ParseType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Vuplex::WebView::FocusedInputFieldType (*)(::StringW)>(&::Vuplex::WebView::FocusedInputFieldChangedEventArgs::ParseType)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x16df8e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>::get(),
                        "ParseType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Vuplex::WebView::FocusedInputFieldType& Vuplex::WebView::FocusedInputFieldChangedEventArgs::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::Vuplex::WebView::FocusedInputFieldType const& Vuplex::WebView::FocusedInputFieldChangedEventArgs::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void Vuplex::WebView::FocusedInputFieldChangedEventArgs::__cordl_internal_set_Type(::Vuplex::WebView::FocusedInputFieldType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
inline void Vuplex::WebView::FocusedInputFieldChangedEventArgs::_ctor(::Vuplex::WebView::FocusedInputFieldType  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::FocusedInputFieldType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::Vuplex::WebView::FocusedInputFieldType Vuplex::WebView::FocusedInputFieldChangedEventArgs::ParseType(::StringW  typeString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>::get(),
                        "ParseType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Vuplex::WebView::FocusedInputFieldType, false>(nullptr, ___internal_method, typeString);
}
inline ::Vuplex::WebView::FocusedInputFieldChangedEventArgs* Vuplex::WebView::FocusedInputFieldChangedEventArgs::New_ctor(::Vuplex::WebView::FocusedInputFieldType  type)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>(type));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::FocusedInputFieldChangedEventArgs::FocusedInputFieldChangedEventArgs()   {
}
