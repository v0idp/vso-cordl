#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/KeyboardEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Vuplex/WebView/zzzz__KeyModifier_impl.hpp"
#include "Vuplex/WebView/Internal/zzzz__KeyboardEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__KeyModifier_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardEventArgs._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardEventArgs::*)(::StringW, ::Vuplex::WebView::KeyModifier)>(&::Vuplex::WebView::Internal::KeyboardEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x17beb78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::KeyModifier>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardEventArgs.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Vuplex::WebView::Internal::KeyboardEventArgs::*)()>(&::Vuplex::WebView::Internal::KeyboardEventArgs::ToString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x17bebec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardEventArgs*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardEventArgs*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Vuplex::WebView::Internal::KeyboardEventArgs::__cordl_internal_get_Key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Key;
}
constexpr ::StringW const& Vuplex::WebView::Internal::KeyboardEventArgs::__cordl_internal_get_Key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Key;
}
constexpr void Vuplex::WebView::Internal::KeyboardEventArgs::__cordl_internal_set_Key(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Vuplex::WebView::KeyModifier& Vuplex::WebView::Internal::KeyboardEventArgs::__cordl_internal_get_Modifiers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Modifiers;
}
constexpr ::Vuplex::WebView::KeyModifier const& Vuplex::WebView::Internal::KeyboardEventArgs::__cordl_internal_get_Modifiers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Modifiers;
}
constexpr void Vuplex::WebView::Internal::KeyboardEventArgs::__cordl_internal_set_Modifiers(::Vuplex::WebView::KeyModifier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Modifiers = value;
}
inline void Vuplex::WebView::Internal::KeyboardEventArgs::_ctor(::StringW  key, ::Vuplex::WebView::KeyModifier  modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::KeyModifier>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, modifiers);
}
inline ::StringW Vuplex::WebView::Internal::KeyboardEventArgs::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardEventArgs*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::Internal::KeyboardEventArgs* Vuplex::WebView::Internal::KeyboardEventArgs::New_ctor(::StringW  key, ::Vuplex::WebView::KeyModifier  modifiers)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::KeyboardEventArgs*>(key, modifiers));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::KeyboardEventArgs::KeyboardEventArgs()   {
}
