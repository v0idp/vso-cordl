#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/BaseWebView.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "Vuplex/WebView/Internal/zzzz__BaseWebView_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Specialized/zzzz__OrderedDictionary_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Application_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "Vuplex/WebView/Internal/zzzz__BaseWebView_def.hpp"
#include "Vuplex/WebView/Internal/zzzz__UrlAction_def.hpp"
#include "Vuplex/WebView/zzzz__ConsoleMessageEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__ConsoleMessageLevel_def.hpp"
#include "Vuplex/WebView/zzzz__EventArgs_1_def.hpp"
#include "Vuplex/WebView/zzzz__FocusedInputFieldChangedEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__LoadFailedEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__ProgressChangedEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__TerminatedEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__UrlChangedEventArgs_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::Internal::BaseWebView_InitState::BaseWebView_InitState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::BaseWebView_InitState::BaseWebView_InitState()   {
}
constexpr ::Vuplex::WebView::Internal::BaseWebView_InitState  Vuplex::WebView::Internal::BaseWebView_InitState::Uninitialized{static_cast<int32_t>(0x0)};
constexpr ::Vuplex::WebView::Internal::BaseWebView_InitState  Vuplex::WebView::Internal::BaseWebView_InitState::InProgress{static_cast<int32_t>(0x1)};
constexpr ::Vuplex::WebView::Internal::BaseWebView_InitState  Vuplex::WebView::Internal::BaseWebView_InitState::Initialized{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView___c::*)()>(&::Vuplex::WebView::Internal::BaseWebView___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17bb30c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView___c.__staticInit_b__145_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView___c::*)()>(&::Vuplex::WebView::Internal::BaseWebView___c::__staticInit_b__145_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x17bb314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c*>::get(),
                        "<_staticInit>b__145_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Vuplex::WebView::Internal::BaseWebView___c::setStaticF___9(::Vuplex::WebView::Internal::BaseWebView___c*  value)  {
::cordl_internals::setStaticField<::Vuplex::WebView::Internal::BaseWebView___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c*>::get>(std::forward<::Vuplex::WebView::Internal::BaseWebView___c*>(value));
}
inline ::Vuplex::WebView::Internal::BaseWebView___c* Vuplex::WebView::Internal::BaseWebView___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Vuplex::WebView::Internal::BaseWebView___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c*>::get>();
}
inline void Vuplex::WebView::Internal::BaseWebView___c::setStaticF___9__145_0(::UnityEngine::Application_LowMemoryCallback*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Application_LowMemoryCallback*, "<>9__145_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c*>::get>(std::forward<::UnityEngine::Application_LowMemoryCallback*>(value));
}
inline ::UnityEngine::Application_LowMemoryCallback* Vuplex::WebView::Internal::BaseWebView___c::getStaticF___9__145_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Application_LowMemoryCallback*, "<>9__145_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c*>::get>();
}
inline void Vuplex::WebView::Internal::BaseWebView___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView___c::__staticInit_b__145_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c*>::get(),
                        "<_staticInit>b__145_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::Internal::BaseWebView___c* Vuplex::WebView::Internal::BaseWebView___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::BaseWebView___c*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::BaseWebView___c::BaseWebView___c()   {
}
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0::*)()>(&::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17bb3f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0.__handleUrlChanged_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0::__handleUrlChanged_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x17bb3f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0*>::get(),
                        "<_handleUrlChanged>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Vuplex::WebView::Internal::UrlAction*& Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0::__cordl_internal_get_action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr ::Vuplex::WebView::Internal::UrlAction* const& Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0::__cordl_internal_get_action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr void Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0::__cordl_internal_set_action(::Vuplex::WebView::Internal::UrlAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___action)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0::__handleUrlChanged_b__0(::StringW  scheme)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0*>::get(),
                        "<_handleUrlChanged>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, scheme);
}
inline ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0* Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0::BaseWebView___c__DisplayClass137_0()   {
}
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0::*)()>(&::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17bb41c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0.__logSystemInfoIfNeeded_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0::__logSystemInfoIfNeeded_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x17bb424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0*>::get(),
                        "<_logSystemInfoIfNeeded>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Specialized::OrderedDictionary*& Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0::__cordl_internal_get_info()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___info;
}
constexpr ::System::Collections::Specialized::OrderedDictionary* const& Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0::__cordl_internal_get_info() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___info;
}
constexpr void Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0::__cordl_internal_set_info(::System::Collections::Specialized::OrderedDictionary*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___info)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0::__logSystemInfoIfNeeded_b__0(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0*>::get(),
                        "<_logSystemInfoIfNeeded>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key);
}
inline ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0* Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0::BaseWebView___c__DisplayClass139_0()   {
}
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0::*)()>(&::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17bb494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0._add_PageLoadFailed_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0::*)(::System::Object*, ::Vuplex::WebView::LoadFailedEventArgs*)>(&::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0::_add_PageLoadFailed_b__0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17bb49c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0*>::get(),
                        "<add_PageLoadFailed>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::LoadFailedEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::EventHandler*& Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr ::System::EventHandler* const& Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0::__cordl_internal_set_value(::System::EventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0::_add_PageLoadFailed_b__0(::System::Object*  sender, ::Vuplex::WebView::LoadFailedEventArgs*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0*>::get(),
                        "<add_PageLoadFailed>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::LoadFailedEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0* Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0::BaseWebView___c__DisplayClass185_0()   {
}
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0::*)()>(&::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17bb520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0._LoadUrl_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0::_LoadUrl_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x17bb528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0*>::get(),
                        "<LoadUrl>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0::__cordl_internal_get_additionalHttpHeaders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___additionalHttpHeaders;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0::__cordl_internal_get_additionalHttpHeaders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___additionalHttpHeaders;
}
constexpr void Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0::__cordl_internal_set_additionalHttpHeaders(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___additionalHttpHeaders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0::_LoadUrl_b__0(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0*>::get(),
                        "<LoadUrl>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key);
}
inline ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0* Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0::BaseWebView___c__DisplayClass71_0()   {
}
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView__Copy_d__60.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView__Copy_d__60::*)()>(&::Vuplex::WebView::Internal::BaseWebView__Copy_d__60::MoveNext)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x17bb5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView__Copy_d__60>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView__Copy_d__60.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView__Copy_d__60::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Vuplex::WebView::Internal::BaseWebView__Copy_d__60::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17bb7a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView__Copy_d__60>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Vuplex::WebView::Internal::BaseWebView__Copy_d__60::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView__Copy_d__60>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView__Copy_d__60::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView__Copy_d__60>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Vuplex::WebView::Internal::BaseWebView__Copy_d__60::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Vuplex::WebView::Internal::BaseWebView__Copy_d__60::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::Vuplex::WebView::Internal::BaseWebView>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::Internal::BaseWebView__Copy_d__60::BaseWebView__Copy_d__60(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Vuplex::WebView::Internal::BaseWebView>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::BaseWebView__Copy_d__60::BaseWebView__Copy_d__60()   {
}
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView__Cut_d__62.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView__Cut_d__62::*)()>(&::Vuplex::WebView::Internal::BaseWebView__Cut_d__62::MoveNext)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x17bb7b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView__Cut_d__62>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView__Cut_d__62.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView__Cut_d__62::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Vuplex::WebView::Internal::BaseWebView__Cut_d__62::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17bb9ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView__Cut_d__62>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Vuplex::WebView::Internal::BaseWebView__Cut_d__62::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView__Cut_d__62>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView__Cut_d__62::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView__Cut_d__62>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Vuplex::WebView::Internal::BaseWebView__Cut_d__62::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Vuplex::WebView::Internal::BaseWebView__Cut_d__62::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::Vuplex::WebView::Internal::BaseWebView>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::Internal::BaseWebView__Cut_d__62::BaseWebView__Cut_d__62(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Vuplex::WebView::Internal::BaseWebView>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::BaseWebView__Cut_d__62::BaseWebView__Cut_d__62()   {
}
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView___initBase_d__138.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView___initBase_d__138::*)()>(&::Vuplex::WebView::Internal::BaseWebView___initBase_d__138::MoveNext)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x17bb9f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___initBase_d__138>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView___initBase_d__138.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView___initBase_d__138::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Vuplex::WebView::Internal::BaseWebView___initBase_d__138::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x17bbea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___initBase_d__138>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Vuplex::WebView::Internal::BaseWebView___initBase_d__138::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___initBase_d__138>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView___initBase_d__138::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView___initBase_d__138>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Vuplex::WebView::Internal::BaseWebView___initBase_d__138::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Vuplex::WebView::Internal::BaseWebView___initBase_d__138::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::Vuplex::WebView::Internal::BaseWebView>", modifiers: "", def_value: Some("{}") }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "createTexture", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "asyncInit", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::Internal::BaseWebView___initBase_d__138::BaseWebView___initBase_d__138(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::Vuplex::WebView::Internal::BaseWebView>  __4__this, int32_t  width, int32_t  height, bool  createTexture, bool  asyncInit, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->width = width;
this->height = height;
this->createTexture = createTexture;
this->asyncInit = asyncInit;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::BaseWebView___initBase_d__138::BaseWebView___initBase_d__138()   {
}
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.add_CloseRequested
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler*)>(&::Vuplex::WebView::Internal::BaseWebView::add_CloseRequested)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x16e7f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_CloseRequested",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.remove_CloseRequested
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler*)>(&::Vuplex::WebView::Internal::BaseWebView::remove_CloseRequested)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x16e7fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_CloseRequested",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.add_ConsoleMessageLogged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*)>(&::Vuplex::WebView::Internal::BaseWebView::add_ConsoleMessageLogged)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x16e807c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_ConsoleMessageLogged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.remove_ConsoleMessageLogged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*)>(&::Vuplex::WebView::Internal::BaseWebView::remove_ConsoleMessageLogged)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x16e8164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_ConsoleMessageLogged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.add_FocusChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*)>(&::Vuplex::WebView::Internal::BaseWebView::add_FocusChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e822c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_FocusChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.remove_FocusChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*)>(&::Vuplex::WebView::Internal::BaseWebView::remove_FocusChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e82dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_FocusChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.add_FocusedInputFieldChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*)>(&::Vuplex::WebView::Internal::BaseWebView::add_FocusedInputFieldChanged)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x16e838c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_FocusedInputFieldChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.remove_FocusedInputFieldChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*)>(&::Vuplex::WebView::Internal::BaseWebView::remove_FocusedInputFieldChanged)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x16e8474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_FocusedInputFieldChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.add_LoadFailed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*)>(&::Vuplex::WebView::Internal::BaseWebView::add_LoadFailed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e853c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_LoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.remove_LoadFailed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*)>(&::Vuplex::WebView::Internal::BaseWebView::remove_LoadFailed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e85ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_LoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.add_LoadProgressChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*)>(&::Vuplex::WebView::Internal::BaseWebView::add_LoadProgressChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e869c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_LoadProgressChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.remove_LoadProgressChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*)>(&::Vuplex::WebView::Internal::BaseWebView::remove_LoadProgressChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e874c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_LoadProgressChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.add_MessageEmitted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*)>(&::Vuplex::WebView::Internal::BaseWebView::add_MessageEmitted)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e87fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_MessageEmitted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.remove_MessageEmitted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*)>(&::Vuplex::WebView::Internal::BaseWebView::remove_MessageEmitted)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e88ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_MessageEmitted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.add_Terminated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*)>(&::Vuplex::WebView::Internal::BaseWebView::add_Terminated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e895c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_Terminated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.remove_Terminated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*)>(&::Vuplex::WebView::Internal::BaseWebView::remove_Terminated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e8a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_Terminated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.add_TitleChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*)>(&::Vuplex::WebView::Internal::BaseWebView::add_TitleChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e8abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_TitleChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.remove_TitleChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*)>(&::Vuplex::WebView::Internal::BaseWebView::remove_TitleChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e8b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_TitleChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.add_UrlChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*)>(&::Vuplex::WebView::Internal::BaseWebView::add_UrlChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e8c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_UrlChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.remove_UrlChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*)>(&::Vuplex::WebView::Internal::BaseWebView::remove_UrlChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e8ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_UrlChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.get_IsDisposed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::get_IsDisposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e8d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "get_IsDisposed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.set_IsDisposed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(bool)>(&::Vuplex::WebView::Internal::BaseWebView::set_IsDisposed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16e8d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "set_IsDisposed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.get_IsInitialized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::get_IsInitialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x16e8d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "get_IsInitialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.get_PageLoadScripts
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::get_PageLoadScripts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e8da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "get_PageLoadScripts",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.get_Size
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::get_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e8da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "get_Size",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.set_Size
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::UnityEngine::Vector2Int)>(&::Vuplex::WebView::Internal::BaseWebView::set_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e8db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "set_Size",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.get_Texture
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::get_Texture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e8db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "get_Texture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.set_Texture
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::UnityEngine::Texture2D*)>(&::Vuplex::WebView::Internal::BaseWebView::set_Texture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e8dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "set_Texture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.get_Title
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::get_Title)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e8dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "get_Title",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.set_Title
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::set_Title)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e8dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "set_Title",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.get_Url
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::get_Url)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e8dd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "get_Url",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.set_Url
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::set_Url)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e8de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "set_Url",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.CanGoBack
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::CanGoBack)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x16e8de8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.CanGoForward
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::CanGoForward)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x16e9068;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.CaptureScreenshot
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::CaptureScreenshot)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x16e925c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.Click
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(int32_t, int32_t, bool)>(&::Vuplex::WebView::Internal::BaseWebView::Click)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x16e9500;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.Click
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::UnityEngine::Vector2, bool)>(&::Vuplex::WebView::Internal::BaseWebView::Click)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x16e97dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "Click",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.Copy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::Copy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x16e9904;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.CreateMaterial
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::CreateMaterial)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x16e9994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "CreateMaterial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.Cut
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::Cut)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x16e9a38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::Dispose)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x16e9ac8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.ExecuteJavaScript
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::ExecuteJavaScript)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x16e9c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "ExecuteJavaScript",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.ExecuteJavaScript
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW, ::System::Action_1<::StringW>*)>(&::Vuplex::WebView::Internal::BaseWebView::ExecuteJavaScript)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x16e9d18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  41
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.GetRawTextureData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::GetRawTextureData)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x16e9eb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  42
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.GoBack
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::GoBack)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x16e9f80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  43
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.GoForward
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::GoForward)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x16ea05c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  44
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.LoadHtml
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::LoadHtml)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x16ea138;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  45
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.LoadUrl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::LoadUrl)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x16ea23c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  46
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.LoadUrl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Vuplex::WebView::Internal::BaseWebView::LoadUrl)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x16ea6c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  47
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.NormalizedToPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (::Vuplex::WebView::Internal::BaseWebView::*)(::UnityEngine::Vector2)>(&::Vuplex::WebView::Internal::BaseWebView::NormalizedToPoint)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x16ea958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "NormalizedToPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.Paste
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::Paste)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x16eaae0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  49
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.PointToNormalized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::Vuplex::WebView::Internal::BaseWebView::*)(int32_t, int32_t)>(&::Vuplex::WebView::Internal::BaseWebView::PointToNormalized)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x16eabd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "PointToNormalized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.PostMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::PostMessage)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x16eabf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  51
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.Reload
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::Reload)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x16ead74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  52
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.Resize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(int32_t, int32_t)>(&::Vuplex::WebView::Internal::BaseWebView::Resize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x16eae50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  53
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.Scroll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(int32_t, int32_t)>(&::Vuplex::WebView::Internal::BaseWebView::Scroll)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x16eaf88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  54
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.Scroll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::UnityEngine::Vector2)>(&::Vuplex::WebView::Internal::BaseWebView::Scroll)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x16eb094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "Scroll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.Scroll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::Vuplex::WebView::Internal::BaseWebView::Scroll)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x16eb0e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  56
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.SelectAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::SelectAll)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x16eb248;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  57
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.SendKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::SendKey)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x16eb2a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  58
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.SetCameraAndMicrophoneEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Vuplex::WebView::Internal::BaseWebView::SetCameraAndMicrophoneEnabled)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x16eb3b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "SetCameraAndMicrophoneEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.SetDefaultBackgroundEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(bool)>(&::Vuplex::WebView::Internal::BaseWebView::SetDefaultBackgroundEnabled)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x16eb480;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  59
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.SetFocused
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(bool)>(&::Vuplex::WebView::Internal::BaseWebView::SetFocused)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x16eb574;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  60
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.SetRenderingEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(bool)>(&::Vuplex::WebView::Internal::BaseWebView::SetRenderingEnabled)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x16eb6dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  61
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.StopLoad
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::StopLoad)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x16eb864;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  62
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WaitForNextPageLoadToFinish
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::WaitForNextPageLoadToFinish)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x16eb940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WaitForNextPageLoadToFinish",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.ZoomIn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::ZoomIn)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x16eb9cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  64
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.ZoomOut
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::ZoomOut)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x16ebaa8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  65
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.get__rect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::get__rect)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16ebb84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "get__rect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.set__rect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::UnityEngine::Rect)>(&::Vuplex::WebView::Internal::BaseWebView::set__rect)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x16d3d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "set__rect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView._assertNative2DModeEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::_assertNative2DModeEnabled)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x16ebba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_assertNative2DModeEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView._assertPointIsWithinBounds
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(int32_t, int32_t)>(&::Vuplex::WebView::Internal::BaseWebView::_assertPointIsWithinBounds)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x16e9588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_assertPointIsWithinBounds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView._assertSingletonEventHandlerUnset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::Object*, ::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::_assertSingletonEventHandlerUnset)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x16ebbfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_assertSingletonEventHandlerUnset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView._assertValidSize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(int32_t, int32_t)>(&::Vuplex::WebView::Internal::BaseWebView::_assertValidSize)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x16eaed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_assertValidSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView._assertValidState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::_assertValidState)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x16e8f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_assertValidState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView._normalizedToPointAssertValid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (::Vuplex::WebView::Internal::BaseWebView::*)(::UnityEngine::Vector2)>(&::Vuplex::WebView::Internal::BaseWebView::_normalizedToPointAssertValid)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x16e9838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_normalizedToPointAssertValid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView._createMaterial
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::_createMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16ebc68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  66
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView._createTexture
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* (::Vuplex::WebView::Internal::BaseWebView::*)(int32_t, int32_t)>(&::Vuplex::WebView::Internal::BaseWebView::_createTexture)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x16ebc70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  67
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView._destroyNativeTexture
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::IntPtr)>(&::Vuplex::WebView::Internal::BaseWebView::_destroyNativeTexture)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x16ebda0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  68
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView._getReadableTexture
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::_getReadableTexture)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x16e931c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_getReadableTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView._getSelectedText
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::_getSelectedText)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x16ebee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_getSelectedText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.HandleCanGoBackResult
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::HandleCanGoBackResult)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x16ebf2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleCanGoBackResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.HandleCanGoForwardResult
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::HandleCanGoForwardResult)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x16ec24c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleCanGoForwardResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.HandleCloseRequested
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::HandleCloseRequested)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x16ec56c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleCloseRequested",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.HandleFocusedInputFieldChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::HandleFocusedInputFieldChanged)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x16ec5ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleFocusedInputFieldChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.HandleInitFinished
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::HandleInitFinished)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x16ec684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleInitFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.HandleJavaScriptResult
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::HandleJavaScriptResult)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x16ec6e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleJavaScriptResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView._handleJavaScriptResult
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW, ::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::_handleJavaScriptResult)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x16ec78c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_handleJavaScriptResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.HandleLoadFailed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::HandleLoadFailed)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x16ec838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleLoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.HandleLoadFinished
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::HandleLoadFinished)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x16ecaa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleLoadFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.HandleLoadStarted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::HandleLoadStarted)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x16ecc64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleLoadStarted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.HandleLoadProgressUpdate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::HandleLoadProgressUpdate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x16eccd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleLoadProgressUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.HandleMessageEmitted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::HandleMessageEmitted)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x16ecd90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  69
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.HandleTerminated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::HandleTerminated)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x16ed2c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleTerminated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.HandleTextureChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::HandleTextureChanged)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x16ed460;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  70
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView._handleUrlChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::_handleUrlChanged)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x16ed0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_handleUrlChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView._initBase
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Vuplex::WebView::Internal::BaseWebView::*)(int32_t, int32_t, bool, bool)>(&::Vuplex::WebView::Internal::BaseWebView::_initBase)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x16d3dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_initBase",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView._logSystemInfoIfNeeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Vuplex::WebView::Internal::BaseWebView::_logSystemInfoIfNeeded)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x16ed500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_logSystemInfoIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.OnLoadProgressChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::Vuplex::WebView::ProgressChangedEventArgs*)>(&::Vuplex::WebView::Internal::BaseWebView::OnLoadProgressChanged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x16ed94c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  71
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView._parseConsoleMessageLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Vuplex::WebView::ConsoleMessageLevel (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::_parseConsoleMessageLevel)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x16ed974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_parseConsoleMessageLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView._resize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::_resize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x16eda8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  72
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView._setConsoleMessageEventsEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(bool)>(&::Vuplex::WebView::Internal::BaseWebView::_setConsoleMessageEventsEnabled)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x16edb84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  73
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView._setFocusedInputFieldEventsEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(bool)>(&::Vuplex::WebView::Internal::BaseWebView::_setFocusedInputFieldEventsEnabled)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x16edc78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                                  74
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView._staticInit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Vuplex::WebView::Internal::BaseWebView::_staticInit)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x16edd6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_staticInit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView._transformUrlIfNeeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::_transformUrlIfNeeded)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x16ea2bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_transformUrlIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_canGoBack
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_canGoBack)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x16e8fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_canGoBack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_canGoForward
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_canGoForward)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x16e91e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_canGoForward",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_click
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_click)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x16e9748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_click",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_destroyTexture
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_destroyTexture)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x16ebe4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_destroyTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_destroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_destroy)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x16e9ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_destroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_executeJavaScript
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::StringW, ::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_executeJavaScript)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x16e9dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_executeJavaScript",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_goBack
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_goBack)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x16e9fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_goBack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_goForward
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_goForward)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x16ea0bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_goForward",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_sendKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_sendKey)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x16eb318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_sendKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_loadHtml
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_loadHtml)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x16ea1a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_loadHtml",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_loadUrl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_loadUrl)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x16ea630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_loadUrl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_loadUrlWithHeaders
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::StringW, ::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_loadUrlWithHeaders)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x16ea89c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_loadUrlWithHeaders",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_reload
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_reload)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x16eadd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_reload",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_resize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_resize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x16edaf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_resize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_scroll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_scroll)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x16eb000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_scroll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_scrollAtPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_scrollAtPoint)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x16eb19c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_scrollAtPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_setCameraAndMicrophoneEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_setCameraAndMicrophoneEnabled)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x16eb404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_setCameraAndMicrophoneEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_setConsoleMessageEventsEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_setConsoleMessageEventsEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x16edbf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_setConsoleMessageEventsEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_setDefaultBackgroundEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_setDefaultBackgroundEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x16eb4f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_setDefaultBackgroundEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_setFocused
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_setFocused)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x16eb658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_setFocused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_setFocusedInputFieldEventsEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_setFocusedInputFieldEventsEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x16edce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_setFocusedInputFieldEventsEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_setRenderingEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_setRenderingEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x16eb7e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_setRenderingEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_stopLoad
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_stopLoad)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x16eb8c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_stopLoad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_zoomIn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_zoomIn)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x16eba2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_zoomIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.WebView_zoomOut
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::Vuplex::WebView::Internal::BaseWebView::WebView_zoomOut)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x16ebb08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_zoomOut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.Blur
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::Blur)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16ede8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "Blur",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.CanGoBack
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::Action_1<bool>*)>(&::Vuplex::WebView::Internal::BaseWebView::CanGoBack)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16ede90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "CanGoBack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.CanGoForward
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::Action_1<bool>*)>(&::Vuplex::WebView::Internal::BaseWebView::CanGoForward)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16ede94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "CanGoForward",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.CaptureScreenshot
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*)>(&::Vuplex::WebView::Internal::BaseWebView::CaptureScreenshot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16ede98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "CaptureScreenshot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.DisableViewUpdates
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::DisableViewUpdates)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16ede9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "DisableViewUpdates",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.EnableViewUpdates
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::EnableViewUpdates)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16edea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "EnableViewUpdates",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.Focus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::Focus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16edea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "Focus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.GetRawTextureData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*)>(&::Vuplex::WebView::Internal::BaseWebView::GetRawTextureData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16edea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "GetRawTextureData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.HandleKeyboardInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::StringW)>(&::Vuplex::WebView::Internal::BaseWebView::HandleKeyboardInput)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x16edeac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleKeyboardInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::UnityEngine::Texture2D*, float_t, float_t)>(&::Vuplex::WebView::Internal::BaseWebView::Init)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16edebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::UnityEngine::Texture2D*, float_t, float_t, ::UnityEngine::Texture2D*)>(&::Vuplex::WebView::Internal::BaseWebView::Init)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16edec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.add_PageLoadFailed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler*)>(&::Vuplex::WebView::Internal::BaseWebView::add_PageLoadFailed)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x16edec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_PageLoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.remove_PageLoadFailed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler*)>(&::Vuplex::WebView::Internal::BaseWebView::remove_PageLoadFailed)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x16edfa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_PageLoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.get_Resolution
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::get_Resolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16ee04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "get_Resolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.SetResolution
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(float_t)>(&::Vuplex::WebView::Internal::BaseWebView::SetResolution)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16ee054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "SetResolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.get_SizeInPixels
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::get_SizeInPixels)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x16ee058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "get_SizeInPixels",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.add_VideoRectChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*)>(&::Vuplex::WebView::Internal::BaseWebView::add_VideoRectChanged)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x16ee068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_VideoRectChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.remove_VideoRectChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*)>(&::Vuplex::WebView::Internal::BaseWebView::remove_VideoRectChanged)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x16ee11c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_VideoRectChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView.get_VideoTexture
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::get_VideoTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16ee1d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "get_VideoTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::BaseWebView._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::BaseWebView::*)()>(&::Vuplex::WebView::Internal::BaseWebView::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x16ee1d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::EventHandler*& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get_CloseRequested()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CloseRequested;
}
constexpr ::System::EventHandler* const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get_CloseRequested() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CloseRequested;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set_CloseRequested(::System::EventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CloseRequested)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get_FocusChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FocusChanged;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>* const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get_FocusChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FocusChanged;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set_FocusChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FocusChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get_LoadFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoadFailed;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>* const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get_LoadFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoadFailed;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set_LoadFailed(::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LoadFailed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get_LoadProgressChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoadProgressChanged;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>* const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get_LoadProgressChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoadProgressChanged;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set_LoadProgressChanged(::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LoadProgressChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get_MessageEmitted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MessageEmitted;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>* const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get_MessageEmitted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MessageEmitted;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set_MessageEmitted(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MessageEmitted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get_Terminated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Terminated;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>* const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get_Terminated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Terminated;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set_Terminated(::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Terminated)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get_TitleChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleChanged;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>* const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get_TitleChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleChanged;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set_TitleChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TitleChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get_UrlChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UrlChanged;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>* const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get_UrlChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UrlChanged;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set_UrlChanged(::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UrlChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__IsDisposed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDisposed_k__BackingField;
}
constexpr bool const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__IsDisposed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDisposed_k__BackingField;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set__IsDisposed_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsDisposed_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__PageLoadScripts_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PageLoadScripts_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__PageLoadScripts_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PageLoadScripts_k__BackingField;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set__PageLoadScripts_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____PageLoadScripts_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2Int& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__Size_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Size_k__BackingField;
}
constexpr ::UnityEngine::Vector2Int const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__Size_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Size_k__BackingField;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set__Size_k__BackingField(::UnityEngine::Vector2Int  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Size_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__Texture_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Texture_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__Texture_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Texture_k__BackingField;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set__Texture_k__BackingField(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Texture_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__Title_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Title_k__BackingField;
}
constexpr ::StringW const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__Title_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Title_k__BackingField;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set__Title_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Title_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__Url_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Url_k__BackingField;
}
constexpr ::StringW const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__Url_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Url_k__BackingField;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set__Url_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Url_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__consoleMessageLogged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____consoleMessageLogged;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>* const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__consoleMessageLogged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____consoleMessageLogged;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set__consoleMessageLogged(::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____consoleMessageLogged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IntPtr& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__currentNativeTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentNativeTexture;
}
constexpr ::System::IntPtr const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__currentNativeTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentNativeTexture;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set__currentNativeTexture(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentNativeTexture = value;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__focusedInputFieldChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____focusedInputFieldChanged;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>* const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__focusedInputFieldChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____focusedInputFieldChanged;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set__focusedInputFieldChanged(::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____focusedInputFieldChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Vuplex::WebView::Internal::BaseWebView_InitState& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__initState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initState;
}
constexpr ::Vuplex::WebView::Internal::BaseWebView_InitState const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__initState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initState;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set__initState(::Vuplex::WebView::Internal::BaseWebView_InitState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initState = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__initTaskSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initTaskSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__initTaskSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initTaskSource;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set__initTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initTaskSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__materialForBlitting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialForBlitting;
}
constexpr ::UnityW<::UnityEngine::Material> const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__materialForBlitting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialForBlitting;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set__materialForBlitting(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialForBlitting)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__native2DModeEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____native2DModeEnabled;
}
constexpr bool const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__native2DModeEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____native2DModeEnabled;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set__native2DModeEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____native2DModeEnabled = value;
}
constexpr ::UnityEngine::Vector2Int& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__native2DPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____native2DPosition;
}
constexpr ::UnityEngine::Vector2Int const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__native2DPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____native2DPosition;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set__native2DPosition(::UnityEngine::Vector2Int  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____native2DPosition = value;
}
constexpr ::System::IntPtr& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__nativeWebViewPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeWebViewPtr;
}
constexpr ::System::IntPtr const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__nativeWebViewPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeWebViewPtr;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set__nativeWebViewPtr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nativeWebViewPtr = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__pageLoadFinishedTaskSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageLoadFinishedTaskSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__pageLoadFinishedTaskSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageLoadFinishedTaskSource;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set__pageLoadFinishedTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pageLoadFinishedTaskSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Action_1<bool>*>*& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__pendingCanGoBackCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingCanGoBackCallbacks;
}
constexpr ::System::Collections::Generic::List_1<::System::Action_1<bool>*>* const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__pendingCanGoBackCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingCanGoBackCallbacks;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set__pendingCanGoBackCallbacks(::System::Collections::Generic::List_1<::System::Action_1<bool>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pendingCanGoBackCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Action_1<bool>*>*& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__pendingCanGoForwardCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingCanGoForwardCallbacks;
}
constexpr ::System::Collections::Generic::List_1<::System::Action_1<bool>*>* const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__pendingCanGoForwardCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingCanGoForwardCallbacks;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set__pendingCanGoForwardCallbacks(::System::Collections::Generic::List_1<::System::Action_1<bool>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pendingCanGoForwardCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Action_1<::StringW>*>*& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__pendingJavaScriptResultCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingJavaScriptResultCallbacks;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Action_1<::StringW>*>* const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__pendingJavaScriptResultCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingJavaScriptResultCallbacks;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set__pendingJavaScriptResultCallbacks(::System::Collections::Generic::Dictionary_2<::StringW,::System::Action_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pendingJavaScriptResultCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__renderingEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderingEnabled;
}
constexpr bool const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__renderingEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderingEnabled;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set__renderingEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderingEnabled = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::EventHandler*,::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*>*& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__legacyPageLoadFailedHandlerMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____legacyPageLoadFailedHandlerMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::EventHandler*,::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*>* const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__legacyPageLoadFailedHandlerMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____legacyPageLoadFailedHandlerMap;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set__legacyPageLoadFailedHandlerMap(::System::Collections::Generic::Dictionary_2<::System::EventHandler*,::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____legacyPageLoadFailedHandlerMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__Resolution_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resolution_k__BackingField;
}
constexpr float_t const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__Resolution_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resolution_k__BackingField;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set__Resolution_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Resolution_k__BackingField = value;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get_VideoRectChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VideoRectChanged;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>* const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get_VideoRectChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VideoRectChanged;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set_VideoRectChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___VideoRectChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__VideoTexture_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VideoTexture_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Vuplex::WebView::Internal::BaseWebView::__cordl_internal_get__VideoTexture_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VideoTexture_k__BackingField;
}
constexpr void Vuplex::WebView::Internal::BaseWebView::__cordl_internal_set__VideoTexture_k__BackingField(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____VideoTexture_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::Internal::BaseWebView::setStaticF_STANDARD_URI_SCHEMES(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "STANDARD_URI_SCHEMES", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get>(std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW,::Array<::StringW>*> Vuplex::WebView::Internal::BaseWebView::getStaticF_STANDARD_URI_SCHEMES()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "STANDARD_URI_SCHEMES", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get>();
}
inline void Vuplex::WebView::Internal::BaseWebView::setStaticF__streamingAssetsUrlRegex(::System::Text::RegularExpressions::Regex*  value)  {
::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "_streamingAssetsUrlRegex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get>(std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* Vuplex::WebView::Internal::BaseWebView::getStaticF__streamingAssetsUrlRegex()  {
return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "_streamingAssetsUrlRegex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get>();
}
inline void Vuplex::WebView::Internal::BaseWebView::add_CloseRequested(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_CloseRequested",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::BaseWebView::remove_CloseRequested(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_CloseRequested",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::BaseWebView::add_ConsoleMessageLogged(::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_ConsoleMessageLogged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::BaseWebView::remove_ConsoleMessageLogged(::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_ConsoleMessageLogged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::BaseWebView::add_FocusChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_FocusChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::BaseWebView::remove_FocusChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_FocusChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::BaseWebView::add_FocusedInputFieldChanged(::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_FocusedInputFieldChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::BaseWebView::remove_FocusedInputFieldChanged(::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_FocusedInputFieldChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::BaseWebView::add_LoadFailed(::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_LoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::BaseWebView::remove_LoadFailed(::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_LoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::BaseWebView::add_LoadProgressChanged(::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_LoadProgressChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::BaseWebView::remove_LoadProgressChanged(::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_LoadProgressChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::BaseWebView::add_MessageEmitted(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_MessageEmitted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::BaseWebView::remove_MessageEmitted(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_MessageEmitted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::BaseWebView::add_Terminated(::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_Terminated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::BaseWebView::remove_Terminated(::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_Terminated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::BaseWebView::add_TitleChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_TitleChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::BaseWebView::remove_TitleChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_TitleChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::BaseWebView::add_UrlChanged(::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_UrlChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::BaseWebView::remove_UrlChanged(::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_UrlChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Vuplex::WebView::Internal::BaseWebView::get_IsDisposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "get_IsDisposed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::set_IsDisposed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "set_IsDisposed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Vuplex::WebView::Internal::BaseWebView::get_IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "get_IsInitialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* Vuplex::WebView::Internal::BaseWebView::get_PageLoadScripts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "get_PageLoadScripts",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2Int Vuplex::WebView::Internal::BaseWebView::get_Size()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "get_Size",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::set_Size(::UnityEngine::Vector2Int  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "set_Size",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Texture2D> Vuplex::WebView::Internal::BaseWebView::get_Texture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "get_Texture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::set_Texture(::UnityEngine::Texture2D*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "set_Texture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Vuplex::WebView::Internal::BaseWebView::get_Title()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "get_Title",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::set_Title(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "set_Title",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Vuplex::WebView::Internal::BaseWebView::get_Url()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "get_Url",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::set_Url(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "set_Url",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task_1<bool>* Vuplex::WebView::Internal::BaseWebView::CanGoBack()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    31
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* Vuplex::WebView::Internal::BaseWebView::CanGoForward()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    32
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* Vuplex::WebView::Internal::BaseWebView::CaptureScreenshot()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    33
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::Click(int32_t  xInPixels, int32_t  yInPixels, bool  preventStealingFocus)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    34
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xInPixels, yInPixels, preventStealingFocus);
}
inline void Vuplex::WebView::Internal::BaseWebView::Click(::UnityEngine::Vector2  normalizedPoint, bool  preventStealingFocus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "Click",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, normalizedPoint, preventStealingFocus);
}
inline void Vuplex::WebView::Internal::BaseWebView::Copy()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    36
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> Vuplex::WebView::Internal::BaseWebView::CreateMaterial()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "CreateMaterial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::Cut()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    38
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::Dispose()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    39
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Vuplex::WebView::Internal::BaseWebView::ExecuteJavaScript(::StringW  javaScript)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "ExecuteJavaScript",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method, javaScript);
}
inline void Vuplex::WebView::Internal::BaseWebView::ExecuteJavaScript(::StringW  javaScript, ::System::Action_1<::StringW>*  callback)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    41
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, javaScript, callback);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* Vuplex::WebView::Internal::BaseWebView::GetRawTextureData()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    42
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::GoBack()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    43
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::GoForward()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    44
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::LoadHtml(::StringW  html)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    45
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, html);
}
inline void Vuplex::WebView::Internal::BaseWebView::LoadUrl(::StringW  url)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    46
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, url);
}
inline void Vuplex::WebView::Internal::BaseWebView::LoadUrl(::StringW  url, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  additionalHttpHeaders)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    47
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, url, additionalHttpHeaders);
}
inline ::UnityEngine::Vector2Int Vuplex::WebView::Internal::BaseWebView::NormalizedToPoint(::UnityEngine::Vector2  normalizedPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "NormalizedToPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(this, ___internal_method, normalizedPoint);
}
inline void Vuplex::WebView::Internal::BaseWebView::Paste()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    49
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Vuplex::WebView::Internal::BaseWebView::PointToNormalized(int32_t  xInPixels, int32_t  yInPixels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "PointToNormalized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, xInPixels, yInPixels);
}
inline void Vuplex::WebView::Internal::BaseWebView::PostMessage(::StringW  message)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    51
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void Vuplex::WebView::Internal::BaseWebView::Reload()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    52
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::Resize(int32_t  width, int32_t  height)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    53
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height);
}
inline void Vuplex::WebView::Internal::BaseWebView::Scroll(int32_t  scrollDeltaXInPixels, int32_t  scrollDeltaYInPixels)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    54
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scrollDeltaXInPixels, scrollDeltaYInPixels);
}
inline void Vuplex::WebView::Internal::BaseWebView::Scroll(::UnityEngine::Vector2  normalizedScrollDelta)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "Scroll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, normalizedScrollDelta);
}
inline void Vuplex::WebView::Internal::BaseWebView::Scroll(::UnityEngine::Vector2  normalizedScrollDelta, ::UnityEngine::Vector2  normalizedPoint)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    56
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, normalizedScrollDelta, normalizedPoint);
}
inline void Vuplex::WebView::Internal::BaseWebView::SelectAll()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    57
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::SendKey(::StringW  key)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    58
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline void Vuplex::WebView::Internal::BaseWebView::SetCameraAndMicrophoneEnabled(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "SetCameraAndMicrophoneEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enabled);
}
inline void Vuplex::WebView::Internal::BaseWebView::SetDefaultBackgroundEnabled(bool  enabled)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    59
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enabled);
}
inline void Vuplex::WebView::Internal::BaseWebView::SetFocused(bool  focused)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    60
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, focused);
}
inline void Vuplex::WebView::Internal::BaseWebView::SetRenderingEnabled(bool  enabled)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    61
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enabled);
}
inline void Vuplex::WebView::Internal::BaseWebView::StopLoad()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    62
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Vuplex::WebView::Internal::BaseWebView::WaitForNextPageLoadToFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WaitForNextPageLoadToFinish",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::ZoomIn()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    64
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::ZoomOut()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    65
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rect Vuplex::WebView::Internal::BaseWebView::get__rect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "get__rect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::set__rect(::UnityEngine::Rect  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "set__rect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::BaseWebView::_assertNative2DModeEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_assertNative2DModeEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::_assertPointIsWithinBounds(int32_t  xInPixels, int32_t  yInPixels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_assertPointIsWithinBounds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xInPixels, yInPixels);
}
inline void Vuplex::WebView::Internal::BaseWebView::_assertSingletonEventHandlerUnset(::System::Object*  handler, ::StringW  eventName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_assertSingletonEventHandlerUnset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handler, eventName);
}
inline void Vuplex::WebView::Internal::BaseWebView::_assertValidSize(int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_assertValidSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height);
}
inline void Vuplex::WebView::Internal::BaseWebView::_assertValidState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_assertValidState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2Int Vuplex::WebView::Internal::BaseWebView::_normalizedToPointAssertValid(::UnityEngine::Vector2  normalizedPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_normalizedToPointAssertValid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(this, ___internal_method, normalizedPoint);
}
inline ::UnityW<::UnityEngine::Material> Vuplex::WebView::Internal::BaseWebView::_createMaterial()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    66
                )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* Vuplex::WebView::Internal::BaseWebView::_createTexture(int32_t  width, int32_t  height)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    67
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>*, false>(this, ___internal_method, width, height);
}
inline void Vuplex::WebView::Internal::BaseWebView::_destroyNativeTexture(::System::IntPtr  nativeTexture)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    68
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nativeTexture);
}
inline ::UnityW<::UnityEngine::Texture2D> Vuplex::WebView::Internal::BaseWebView::_getReadableTexture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_getReadableTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Vuplex::WebView::Internal::BaseWebView::_getSelectedText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_getSelectedText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::HandleCanGoBackResult(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleCanGoBackResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void Vuplex::WebView::Internal::BaseWebView::HandleCanGoForwardResult(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleCanGoForwardResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void Vuplex::WebView::Internal::BaseWebView::HandleCloseRequested(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleCloseRequested",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void Vuplex::WebView::Internal::BaseWebView::HandleFocusedInputFieldChanged(::StringW  typeString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleFocusedInputFieldChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeString);
}
inline void Vuplex::WebView::Internal::BaseWebView::HandleInitFinished(::StringW  unusedParam)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleInitFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unusedParam);
}
inline void Vuplex::WebView::Internal::BaseWebView::HandleJavaScriptResult(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleJavaScriptResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void Vuplex::WebView::Internal::BaseWebView::_handleJavaScriptResult(::StringW  resultCallbackId, ::StringW  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_handleJavaScriptResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resultCallbackId, result);
}
inline void Vuplex::WebView::Internal::BaseWebView::HandleLoadFailed(::StringW  param)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleLoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, param);
}
inline void Vuplex::WebView::Internal::BaseWebView::HandleLoadFinished(::StringW  unusedParam)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleLoadFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unusedParam);
}
inline void Vuplex::WebView::Internal::BaseWebView::HandleLoadStarted(::StringW  unusedParam)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleLoadStarted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unusedParam);
}
inline void Vuplex::WebView::Internal::BaseWebView::HandleLoadProgressUpdate(::StringW  progressString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleLoadProgressUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, progressString);
}
inline void Vuplex::WebView::Internal::BaseWebView::HandleMessageEmitted(::StringW  serializedMessage)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    69
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializedMessage);
}
inline void Vuplex::WebView::Internal::BaseWebView::HandleTerminated(::StringW  typeString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleTerminated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeString);
}
inline void Vuplex::WebView::Internal::BaseWebView::HandleTextureChanged(::StringW  textureString)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    70
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textureString);
}
inline void Vuplex::WebView::Internal::BaseWebView::_handleUrlChanged(::StringW  serializedMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_handleUrlChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializedMessage);
}
inline ::System::Threading::Tasks::Task* Vuplex::WebView::Internal::BaseWebView::_initBase(int32_t  width, int32_t  height, bool  createTexture, bool  asyncInit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_initBase",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, width, height, createTexture, asyncInit);
}
inline void Vuplex::WebView::Internal::BaseWebView::_logSystemInfoIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_logSystemInfoIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::OnLoadProgressChanged(::Vuplex::WebView::ProgressChangedEventArgs*  eventArgs)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    71
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventArgs);
}
inline ::Vuplex::WebView::ConsoleMessageLevel Vuplex::WebView::Internal::BaseWebView::_parseConsoleMessageLevel(::StringW  levelString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_parseConsoleMessageLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Vuplex::WebView::ConsoleMessageLevel, false>(this, ___internal_method, levelString);
}
inline void Vuplex::WebView::Internal::BaseWebView::_resize()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    72
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::_setConsoleMessageEventsEnabled(bool  enabled)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    73
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enabled);
}
inline void Vuplex::WebView::Internal::BaseWebView::_setFocusedInputFieldEventsEnabled(bool  enabled)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                    74
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enabled);
}
inline void Vuplex::WebView::Internal::BaseWebView::_staticInit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_staticInit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::StringW Vuplex::WebView::Internal::BaseWebView::_transformUrlIfNeeded(::StringW  originalUrl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "_transformUrlIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, originalUrl);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_canGoBack(::System::IntPtr  webViewPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_canGoBack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, webViewPtr);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_canGoForward(::System::IntPtr  webViewPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_canGoForward",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, webViewPtr);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_click(::System::IntPtr  webViewPtr, int32_t  x, int32_t  y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_click",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, webViewPtr, x, y);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_destroyTexture(::System::IntPtr  texture, ::StringW  graphicsApi)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_destroyTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, texture, graphicsApi);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_destroy(::System::IntPtr  webViewPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_destroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, webViewPtr);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_executeJavaScript(::System::IntPtr  webViewPtr, ::StringW  javaScript, ::StringW  resultCallbackId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_executeJavaScript",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, webViewPtr, javaScript, resultCallbackId);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_goBack(::System::IntPtr  webViewPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_goBack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, webViewPtr);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_goForward(::System::IntPtr  webViewPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_goForward",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, webViewPtr);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_sendKey(::System::IntPtr  webViewPtr, ::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_sendKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, webViewPtr, input);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_loadHtml(::System::IntPtr  webViewPtr, ::StringW  html)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_loadHtml",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, webViewPtr, html);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_loadUrl(::System::IntPtr  webViewPtr, ::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_loadUrl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, webViewPtr, url);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_loadUrlWithHeaders(::System::IntPtr  webViewPtr, ::StringW  url, ::StringW  newlineDelimitedHttpHeaders)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_loadUrlWithHeaders",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, webViewPtr, url, newlineDelimitedHttpHeaders);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_reload(::System::IntPtr  webViewPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_reload",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, webViewPtr);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_resize(::System::IntPtr  webViewPtr, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_resize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, webViewPtr, width, height);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_scroll(::System::IntPtr  webViewPtr, int32_t  deltaX, int32_t  deltaY)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_scroll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, webViewPtr, deltaX, deltaY);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_scrollAtPoint(::System::IntPtr  webViewPtr, int32_t  deltaX, int32_t  deltaY, int32_t  pointerX, int32_t  pointerY)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_scrollAtPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, webViewPtr, deltaX, deltaY, pointerX, pointerY);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_setCameraAndMicrophoneEnabled(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_setCameraAndMicrophoneEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enabled);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_setConsoleMessageEventsEnabled(::System::IntPtr  webViewPtr, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_setConsoleMessageEventsEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, webViewPtr, enabled);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_setDefaultBackgroundEnabled(::System::IntPtr  webViewPtr, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_setDefaultBackgroundEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, webViewPtr, enabled);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_setFocused(::System::IntPtr  webViewPtr, bool  focused)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_setFocused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, webViewPtr, focused);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_setFocusedInputFieldEventsEnabled(::System::IntPtr  webViewPtr, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_setFocusedInputFieldEventsEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, webViewPtr, enabled);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_setRenderingEnabled(::System::IntPtr  webViewPtr, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_setRenderingEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, webViewPtr, enabled);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_stopLoad(::System::IntPtr  webViewPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_stopLoad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, webViewPtr);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_zoomIn(::System::IntPtr  webViewPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_zoomIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, webViewPtr);
}
inline void Vuplex::WebView::Internal::BaseWebView::WebView_zoomOut(::System::IntPtr  webViewPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "WebView_zoomOut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, webViewPtr);
}
inline void Vuplex::WebView::Internal::BaseWebView::Blur()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "Blur",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::CanGoBack(::System::Action_1<bool>*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "CanGoBack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
inline void Vuplex::WebView::Internal::BaseWebView::CanGoForward(::System::Action_1<bool>*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "CanGoForward",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
inline void Vuplex::WebView::Internal::BaseWebView::CaptureScreenshot(::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "CaptureScreenshot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
inline void Vuplex::WebView::Internal::BaseWebView::DisableViewUpdates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "DisableViewUpdates",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::EnableViewUpdates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "EnableViewUpdates",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::Focus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "Focus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::GetRawTextureData(::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "GetRawTextureData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
inline void Vuplex::WebView::Internal::BaseWebView::HandleKeyboardInput(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "HandleKeyboardInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline void Vuplex::WebView::Internal::BaseWebView::Init(::UnityEngine::Texture2D*  texture, float_t  width, float_t  height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, texture, width, height);
}
inline void Vuplex::WebView::Internal::BaseWebView::Init(::UnityEngine::Texture2D*  texture, float_t  width, float_t  height, ::UnityEngine::Texture2D*  videoTexture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, texture, width, height, videoTexture);
}
inline void Vuplex::WebView::Internal::BaseWebView::add_PageLoadFailed(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_PageLoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::BaseWebView::remove_PageLoadFailed(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_PageLoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t Vuplex::WebView::Internal::BaseWebView::get_Resolution()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "get_Resolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::SetResolution(float_t  pixelsPerUnityUnit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "SetResolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pixelsPerUnityUnit);
}
inline ::UnityEngine::Vector2 Vuplex::WebView::Internal::BaseWebView::get_SizeInPixels()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "get_SizeInPixels",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::add_VideoRectChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "add_VideoRectChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::BaseWebView::remove_VideoRectChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "remove_VideoRectChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Texture2D> Vuplex::WebView::Internal::BaseWebView::get_VideoTexture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        "get_VideoTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::BaseWebView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::BaseWebView*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::Internal::BaseWebView* Vuplex::WebView::Internal::BaseWebView::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::BaseWebView*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::BaseWebView::BaseWebView()   {
}
