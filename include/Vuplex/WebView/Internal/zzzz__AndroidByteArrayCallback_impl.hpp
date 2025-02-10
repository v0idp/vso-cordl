#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/AndroidByteArrayCallback.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
#include "Vuplex/WebView/Internal/zzzz__AndroidByteArrayCallback_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::Internal::AndroidByteArrayCallback._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::AndroidByteArrayCallback::*)(::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*)>(&::Vuplex::WebView::Internal::AndroidByteArrayCallback::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x16e6080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidByteArrayCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::AndroidByteArrayCallback.callback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::AndroidByteArrayCallback::*)(::UnityEngine::AndroidJavaObject*)>(&::Vuplex::WebView::Internal::AndroidByteArrayCallback::callback)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x16e6104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidByteArrayCallback*>::get(),
                        "callback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AndroidJavaObject*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*& Vuplex::WebView::Internal::AndroidByteArrayCallback::__cordl_internal_get__callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callback;
}
constexpr ::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* const& Vuplex::WebView::Internal::AndroidByteArrayCallback::__cordl_internal_get__callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callback;
}
constexpr void Vuplex::WebView::Internal::AndroidByteArrayCallback::__cordl_internal_set__callback(::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::Internal::AndroidByteArrayCallback::_ctor(::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidByteArrayCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
inline void Vuplex::WebView::Internal::AndroidByteArrayCallback::callback(::UnityEngine::AndroidJavaObject*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidByteArrayCallback*>::get(),
                        "callback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AndroidJavaObject*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::Vuplex::WebView::Internal::AndroidByteArrayCallback* Vuplex::WebView::Internal::AndroidByteArrayCallback::New_ctor(::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  callback)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::AndroidByteArrayCallback*>(callback));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::AndroidByteArrayCallback::AndroidByteArrayCallback()   {
}
