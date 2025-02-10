#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/AndroidBoolCallback.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
#include "Vuplex/WebView/Internal/zzzz__AndroidBoolCallback_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::Internal::AndroidBoolCallback._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::AndroidBoolCallback::*)(::System::Action_1<bool>*)>(&::Vuplex::WebView::Internal::AndroidBoolCallback::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x16e5fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidBoolCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::AndroidBoolCallback.callback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::AndroidBoolCallback::*)(bool)>(&::Vuplex::WebView::Internal::AndroidBoolCallback::callback)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x16e604c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidBoolCallback*>::get(),
                        "callback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<bool>*& Vuplex::WebView::Internal::AndroidBoolCallback::__cordl_internal_get__callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callback;
}
constexpr ::System::Action_1<bool>* const& Vuplex::WebView::Internal::AndroidBoolCallback::__cordl_internal_get__callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callback;
}
constexpr void Vuplex::WebView::Internal::AndroidBoolCallback::__cordl_internal_set__callback(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::Internal::AndroidBoolCallback::_ctor(::System::Action_1<bool>*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidBoolCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
inline void Vuplex::WebView::Internal::AndroidBoolCallback::callback(bool  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidBoolCallback*>::get(),
                        "callback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::Vuplex::WebView::Internal::AndroidBoolCallback* Vuplex::WebView::Internal::AndroidBoolCallback::New_ctor(::System::Action_1<bool>*  callback)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::AndroidBoolCallback*>(callback));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::AndroidBoolCallback::AndroidBoolCallback()   {
}
