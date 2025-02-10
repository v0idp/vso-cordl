#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/LabelAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Vuplex/WebView/Internal/zzzz__LabelAttribute_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::Internal::LabelAttribute.get_Label
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Vuplex::WebView::Internal::LabelAttribute::*)()>(&::Vuplex::WebView::Internal::LabelAttribute::get_Label)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17beb40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::LabelAttribute*>::get(),
                        "get_Label",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::LabelAttribute.set_Label
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::LabelAttribute::*)(::StringW)>(&::Vuplex::WebView::Internal::LabelAttribute::set_Label)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17beb48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::LabelAttribute*>::get(),
                        "set_Label",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::LabelAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::LabelAttribute::*)(::StringW)>(&::Vuplex::WebView::Internal::LabelAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x17beb50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::LabelAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Vuplex::WebView::Internal::LabelAttribute::__cordl_internal_get__Label_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Label_k__BackingField;
}
constexpr ::StringW const& Vuplex::WebView::Internal::LabelAttribute::__cordl_internal_get__Label_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Label_k__BackingField;
}
constexpr void Vuplex::WebView::Internal::LabelAttribute::__cordl_internal_set__Label_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Label_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Vuplex::WebView::Internal::LabelAttribute::get_Label()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::LabelAttribute*>::get(),
                        "get_Label",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::LabelAttribute::set_Label(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::LabelAttribute*>::get(),
                        "set_Label",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::LabelAttribute::_ctor(::StringW  label)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::LabelAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label);
}
inline ::Vuplex::WebView::Internal::LabelAttribute* Vuplex::WebView::Internal::LabelAttribute::New_ctor(::StringW  label)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::LabelAttribute*>(label));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::LabelAttribute::LabelAttribute()   {
}
