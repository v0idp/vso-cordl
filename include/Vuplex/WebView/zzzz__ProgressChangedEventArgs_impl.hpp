#pragma once
// IWYU pragma private; include "Vuplex/WebView/ProgressChangedEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Vuplex/WebView/zzzz__ProgressChangeType_impl.hpp"
#include "Vuplex/WebView/zzzz__ProgressChangedEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__ProgressChangeType_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::ProgressChangedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::ProgressChangedEventArgs::*)(::Vuplex::WebView::ProgressChangeType, float_t)>(&::Vuplex::WebView::ProgressChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x16e34a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::ProgressChangedEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::ProgressChangeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::ProgressChangedEventArgs.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Vuplex::WebView::ProgressChangedEventArgs::*)()>(&::Vuplex::WebView::ProgressChangedEventArgs::ToString)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x16e3a20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::ProgressChangedEventArgs*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::ProgressChangedEventArgs*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr float_t& Vuplex::WebView::ProgressChangedEventArgs::__cordl_internal_get_Progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Progress;
}
constexpr float_t const& Vuplex::WebView::ProgressChangedEventArgs::__cordl_internal_get_Progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Progress;
}
constexpr void Vuplex::WebView::ProgressChangedEventArgs::__cordl_internal_set_Progress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Progress = value;
}
constexpr ::Vuplex::WebView::ProgressChangeType& Vuplex::WebView::ProgressChangedEventArgs::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::Vuplex::WebView::ProgressChangeType const& Vuplex::WebView::ProgressChangedEventArgs::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void Vuplex::WebView::ProgressChangedEventArgs::__cordl_internal_set_Type(::Vuplex::WebView::ProgressChangeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
inline void Vuplex::WebView::ProgressChangedEventArgs::_ctor(::Vuplex::WebView::ProgressChangeType  type, float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::ProgressChangedEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::ProgressChangeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, progress);
}
inline ::StringW Vuplex::WebView::ProgressChangedEventArgs::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::ProgressChangedEventArgs*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::ProgressChangedEventArgs* Vuplex::WebView::ProgressChangedEventArgs::New_ctor(::Vuplex::WebView::ProgressChangeType  type, float_t  progress)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::ProgressChangedEventArgs*>(type, progress));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::ProgressChangedEventArgs::ProgressChangedEventArgs()   {
}
