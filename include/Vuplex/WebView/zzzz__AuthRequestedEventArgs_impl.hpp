#pragma once
// IWYU pragma private; include "Vuplex/WebView/AuthRequestedEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Vuplex/WebView/zzzz__AuthRequestedEventArgs_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::AuthRequestedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::AuthRequestedEventArgs::*)(::StringW, ::System::Action_2<::StringW,::StringW>*, ::System::Action*)>(&::Vuplex::WebView::AuthRequestedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x16d4b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::AuthRequestedEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW,::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::AuthRequestedEventArgs.Cancel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::AuthRequestedEventArgs::*)()>(&::Vuplex::WebView::AuthRequestedEventArgs::Cancel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x16d4b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::AuthRequestedEventArgs*>::get(),
                        "Cancel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::AuthRequestedEventArgs.Continue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::AuthRequestedEventArgs::*)(::StringW, ::StringW)>(&::Vuplex::WebView::AuthRequestedEventArgs::Continue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x16d4bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::AuthRequestedEventArgs*>::get(),
                        "Continue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Vuplex::WebView::AuthRequestedEventArgs::__cordl_internal_get_Host()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Host;
}
constexpr ::StringW const& Vuplex::WebView::AuthRequestedEventArgs::__cordl_internal_get_Host() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Host;
}
constexpr void Vuplex::WebView::AuthRequestedEventArgs::__cordl_internal_set_Host(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Host)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& Vuplex::WebView::AuthRequestedEventArgs::__cordl_internal_get__cancelCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancelCallback;
}
constexpr ::System::Action* const& Vuplex::WebView::AuthRequestedEventArgs::__cordl_internal_get__cancelCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancelCallback;
}
constexpr void Vuplex::WebView::AuthRequestedEventArgs::__cordl_internal_set__cancelCallback(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cancelCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW,::StringW>*& Vuplex::WebView::AuthRequestedEventArgs::__cordl_internal_get__continueCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____continueCallback;
}
constexpr ::System::Action_2<::StringW,::StringW>* const& Vuplex::WebView::AuthRequestedEventArgs::__cordl_internal_get__continueCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____continueCallback;
}
constexpr void Vuplex::WebView::AuthRequestedEventArgs::__cordl_internal_set__continueCallback(::System::Action_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____continueCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::AuthRequestedEventArgs::_ctor(::StringW  host, ::System::Action_2<::StringW,::StringW>*  continueCallback, ::System::Action*  cancelCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::AuthRequestedEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW,::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, host, continueCallback, cancelCallback);
}
inline void Vuplex::WebView::AuthRequestedEventArgs::Cancel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::AuthRequestedEventArgs*>::get(),
                        "Cancel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::AuthRequestedEventArgs::Continue(::StringW  username, ::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::AuthRequestedEventArgs*>::get(),
                        "Continue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, username, password);
}
inline ::Vuplex::WebView::AuthRequestedEventArgs* Vuplex::WebView::AuthRequestedEventArgs::New_ctor(::StringW  host, ::System::Action_2<::StringW,::StringW>*  continueCallback, ::System::Action*  cancelCallback)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::AuthRequestedEventArgs*>(host, continueCallback, cancelCallback));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::AuthRequestedEventArgs::AuthRequestedEventArgs()   {
}
