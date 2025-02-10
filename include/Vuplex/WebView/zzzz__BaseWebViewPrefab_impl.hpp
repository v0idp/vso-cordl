#pragma once
// IWYU pragma private; include "Vuplex/WebView/BaseWebViewPrefab.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Vuplex/WebView/zzzz__DragMode_impl.hpp"
#include "Vuplex/WebView/zzzz__WebViewOptions_impl.hpp"
#include "Vuplex/WebView/zzzz__BaseWebViewPrefab_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "Vuplex/WebView/Internal/zzzz__ViewportMaterialView_def.hpp"
#include "Vuplex/WebView/zzzz__BaseWebViewPrefab_def.hpp"
#include "Vuplex/WebView/zzzz__ClickedEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__ConsoleMessageEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__EventArgs_1_def.hpp"
#include "Vuplex/WebView/zzzz__IPointerInputDetector_def.hpp"
#include "Vuplex/WebView/zzzz__IWebView_def.hpp"
#include "Vuplex/WebView/zzzz__IWithNative2DMode_def.hpp"
#include "Vuplex/WebView/zzzz__IWithTouch_def.hpp"
#include "Vuplex/WebView/zzzz__PointerEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__ScrolledEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__WebViewOptions_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0::*)()>(&::Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16d7a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0._WaitUntilInitialized_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0::*)(::System::Object*, ::System::EventArgs*)>(&::Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0::_WaitUntilInitialized_b__0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x16da6fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0*>::get(),
                        "<WaitUntilInitialized>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0::__cordl_internal_get_taskSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taskSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0::__cordl_internal_get_taskSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taskSource;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0::__cordl_internal_set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___taskSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0::_WaitUntilInitialized_b__0(::System::Object*  sender, ::System::EventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0*>::get(),
                        "<WaitUntilInitialized>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
inline ::Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0* Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0::BaseWebViewPrefab___c__DisplayClass41_0()   {
}
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab___initBase_d__93.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab___initBase_d__93::*)()>(&::Vuplex::WebView::BaseWebViewPrefab___initBase_d__93::MoveNext)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x16da750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab___initBase_d__93>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab___initBase_d__93.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab___initBase_d__93::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Vuplex::WebView::BaseWebViewPrefab___initBase_d__93::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x16dac00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab___initBase_d__93>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Vuplex::WebView::BaseWebViewPrefab___initBase_d__93::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab___initBase_d__93>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseWebViewPrefab___initBase_d__93::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab___initBase_d__93>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Vuplex::WebView::BaseWebViewPrefab___initBase_d__93::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Vuplex::WebView::BaseWebViewPrefab___initBase_d__93::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::Vuplex::WebView::BaseWebViewPrefab>", modifiers: "", def_value: Some("{}") }, CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "preferNative2DMode", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Vuplex::WebView::IWebView*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::BaseWebViewPrefab___initBase_d__93::BaseWebViewPrefab___initBase_d__93(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::Vuplex::WebView::BaseWebViewPrefab>  __4__this, ::UnityEngine::Rect  rect, bool  preferNative2DMode, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Vuplex::WebView::IWebView*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->rect = rect;
this->preferNative2DMode = preferNative2DMode;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::BaseWebViewPrefab___initBase_d__93::BaseWebViewPrefab___initBase_d__93()   {
}
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95::*)()>(&::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95::MoveNext)> {
  constexpr static std::size_t size = 0x814;
  constexpr static std::size_t addrs = 0x16dac68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x16db564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Vuplex::WebView::IWebView*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::Vuplex::WebView::BaseWebViewPrefab>", modifiers: "", def_value: Some("{}") }, CppParam { name: "preferNative2DMode", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "_webView_5__2", ty: "::Vuplex::WebView::IWebView*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_native2DWebView_5__3", ty: "::Vuplex::WebView::IWithNative2DMode*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95::BaseWebViewPrefab___initWebView_d__95(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Vuplex::WebView::IWebView*>  __t__builder, ::UnityW<::Vuplex::WebView::BaseWebViewPrefab>  __4__this, bool  preferNative2DMode, ::UnityEngine::Rect  rect, ::Vuplex::WebView::IWebView*  _webView_5__2, ::Vuplex::WebView::IWithNative2DMode*  _native2DWebView_5__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->preferNative2DMode = preferNative2DMode;
this->rect = rect;
this->_webView_5__2 = _webView_5__2;
this->_native2DWebView_5__3 = _native2DWebView_5__3;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95::BaseWebViewPrefab___initWebView_d__95()   {
}
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.add_Clicked
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::System::EventHandler_1<::Vuplex::WebView::ClickedEventArgs*>*)>(&::Vuplex::WebView::BaseWebViewPrefab::add_Clicked)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16d620c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.remove_Clicked
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::System::EventHandler_1<::Vuplex::WebView::ClickedEventArgs*>*)>(&::Vuplex::WebView::BaseWebViewPrefab::remove_Clicked)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16d62bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.add_Initialized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::System::EventHandler*)>(&::Vuplex::WebView::BaseWebViewPrefab::add_Initialized)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x16d636c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "add_Initialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.remove_Initialized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::System::EventHandler*)>(&::Vuplex::WebView::BaseWebViewPrefab::remove_Initialized)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x16d6408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "remove_Initialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.add_PointerEntered
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::System::EventHandler*)>(&::Vuplex::WebView::BaseWebViewPrefab::add_PointerEntered)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x16d64a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "add_PointerEntered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.remove_PointerEntered
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::System::EventHandler*)>(&::Vuplex::WebView::BaseWebViewPrefab::remove_PointerEntered)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x16d6540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "remove_PointerEntered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.add_PointerExited
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::System::EventHandler*)>(&::Vuplex::WebView::BaseWebViewPrefab::add_PointerExited)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x16d65dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "add_PointerExited",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.remove_PointerExited
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::System::EventHandler*)>(&::Vuplex::WebView::BaseWebViewPrefab::remove_PointerExited)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x16d6678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "remove_PointerExited",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.add_Scrolled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>*)>(&::Vuplex::WebView::BaseWebViewPrefab::add_Scrolled)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16d6714;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.remove_Scrolled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>*)>(&::Vuplex::WebView::BaseWebViewPrefab::remove_Scrolled)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16d67c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.get_Material
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::get_Material)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x16d6874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "get_Material",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.set_Material
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::UnityEngine::Material*)>(&::Vuplex::WebView::BaseWebViewPrefab::set_Material)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x16d691c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "set_Material",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.get_Visible
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::get_Visible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16d6944;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.set_Visible
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(bool)>(&::Vuplex::WebView::BaseWebViewPrefab::set_Visible)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x16d694c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.get_WebView
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Vuplex::WebView::IWebView* (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::get_WebView)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x16d5520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "get_WebView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.set_WebView
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::Vuplex::WebView::IWebView*)>(&::Vuplex::WebView::BaseWebViewPrefab::set_WebView)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x16d6af8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "set_WebView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IWebView*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.BrowserToScreenPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::Vuplex::WebView::BaseWebViewPrefab::*)(int32_t, int32_t)>(&::Vuplex::WebView::BaseWebViewPrefab::BrowserToScreenPoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.Destroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::Destroy)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x16d6c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "Destroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.SetCutoutRect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::UnityEngine::Rect)>(&::Vuplex::WebView::BaseWebViewPrefab::SetCutoutRect)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x16d61b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "SetCutoutRect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.SetOptionsForInitialization
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::Vuplex::WebView::WebViewOptions)>(&::Vuplex::WebView::BaseWebViewPrefab::SetOptionsForInitialization)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x16d6c7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "SetOptionsForInitialization",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::WebViewOptions>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.SetPointerInputDetector
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::Vuplex::WebView::IPointerInputDetector*)>(&::Vuplex::WebView::BaseWebViewPrefab::SetPointerInputDetector)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x16d6cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "SetPointerInputDetector",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IPointerInputDetector*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.SetWebViewForInitialization
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::Vuplex::WebView::IWebView*)>(&::Vuplex::WebView::BaseWebViewPrefab::SetWebViewForInitialization)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x16d7934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "SetWebViewForInitialization",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IWebView*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.WaitUntilInitialized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::WaitUntilInitialized)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x16d606c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "WaitUntilInitialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.get__heightInPixels
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::get__heightInPixels)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x16d7a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "get__heightInPixels",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.get__pointerInputDetector
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Vuplex::WebView::IPointerInputDetector* (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::get__pointerInputDetector)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x16d6d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "get__pointerInputDetector",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.set__pointerInputDetector
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::Vuplex::WebView::IPointerInputDetector*)>(&::Vuplex::WebView::BaseWebViewPrefab::set__pointerInputDetector)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x16d6d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "set__pointerInputDetector",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IPointerInputDetector*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.get__videoLayer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView> (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::get__videoLayer)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x16d6a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "get__videoLayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.get__videoLayerIsEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::get__videoLayerIsEnabled)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x16d69cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "get__videoLayerIsEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.set__videoLayerIsEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(bool)>(&::Vuplex::WebView::BaseWebViewPrefab::set__videoLayerIsEnabled)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x16d7a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "set__videoLayerIsEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.get__view
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView> (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::get__view)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x16d6894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "get__view",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.get__widthInPixels
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::get__widthInPixels)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x16d7b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "get__widthInPixels",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._attachWebViewEventHandlers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::Vuplex::WebView::IWebView*)>(&::Vuplex::WebView::BaseWebViewPrefab::_attachWebViewEventHandlers)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x16d7b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_attachWebViewEventHandlers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IWebView*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._disableHoveringIfNeeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(bool)>(&::Vuplex::WebView::BaseWebViewPrefab::_disableHoveringIfNeeded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16d7e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_disableHoveringIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._enableConsoleMessagesIfNeeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::Vuplex::WebView::IWebView*)>(&::Vuplex::WebView::BaseWebViewPrefab::_enableConsoleMessagesIfNeeded)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x16d7d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_enableConsoleMessagesIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IWebView*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._enableNativeOnScreenKeyboardIfNeeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::Vuplex::WebView::IWebView*)>(&::Vuplex::WebView::BaseWebViewPrefab::_enableNativeOnScreenKeyboardIfNeeded)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x16d7e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_enableNativeOnScreenKeyboardIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IWebView*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._enableOrDisableKeyboardIfNeeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::_enableOrDisableKeyboardIfNeeded)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x16d7f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_enableOrDisableKeyboardIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._enableRemoteDebuggingIfNeeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::_enableRemoteDebuggingIfNeeded)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x16d7fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_enableRemoteDebuggingIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._getResolution
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::_getResolution)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._getNativeOnScreenKeyboardEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::_getNativeOnScreenKeyboardEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._getScrollingSensitivity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::_getScrollingSensitivity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._getTouchIfSupported
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Vuplex::WebView::IWithTouch* (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::_getTouchIfSupported)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x16d8240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_getTouchIfSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._getVideoLayer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView> (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::_getVideoLayer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._getView
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView> (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::_getView)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._handleTrialExpired
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::_handleTrialExpired)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x16d832c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_handleTrialExpired",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._initBase
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Vuplex::WebView::BaseWebViewPrefab::*)(::UnityEngine::Rect, bool)>(&::Vuplex::WebView::BaseWebViewPrefab::_initBase)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x16d8414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_initBase",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._initViews
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::Vuplex::WebView::IWebView*)>(&::Vuplex::WebView::BaseWebViewPrefab::_initViews)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x16d8514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_initViews",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IWebView*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._initWebView
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Vuplex::WebView::IWebView*>* (::Vuplex::WebView::BaseWebViewPrefab::*)(::UnityEngine::Rect, bool)>(&::Vuplex::WebView::BaseWebViewPrefab::_initWebView)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x16d8a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_initWebView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._initPointerInputDetector
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::Vuplex::WebView::IWebView*, ::Vuplex::WebView::IPointerInputDetector*)>(&::Vuplex::WebView::BaseWebViewPrefab::_initPointerInputDetector)> {
  constexpr static std::size_t size = 0xaa0;
  constexpr static std::size_t addrs = 0x16d6e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_initPointerInputDetector",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IWebView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IPointerInputDetector*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.InputDetector_BeganDrag
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::System::Object*, ::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*)>(&::Vuplex::WebView::BaseWebViewPrefab::InputDetector_BeganDrag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x16d8b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "InputDetector_BeganDrag",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.InputDetector_Dragged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::System::Object*, ::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*)>(&::Vuplex::WebView::BaseWebViewPrefab::InputDetector_Dragged)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x16d8b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "InputDetector_Dragged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.InputDetector_PointerDown
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::System::Object*, ::Vuplex::WebView::PointerEventArgs*)>(&::Vuplex::WebView::BaseWebViewPrefab::InputDetector_PointerDown)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x16d9168;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.InputDetector_PointerEntered
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::System::Object*, ::System::EventArgs*)>(&::Vuplex::WebView::BaseWebViewPrefab::InputDetector_PointerEntered)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x16d94d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "InputDetector_PointerEntered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.InputDetector_PointerExited
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::System::Object*, ::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*)>(&::Vuplex::WebView::BaseWebViewPrefab::InputDetector_PointerExited)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x16d9554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "InputDetector_PointerExited",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.InputDetector_PointerMoved
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::System::Object*, ::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*)>(&::Vuplex::WebView::BaseWebViewPrefab::InputDetector_PointerMoved)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x16d9640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "InputDetector_PointerMoved",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.InputDetector_PointerUp
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::System::Object*, ::Vuplex::WebView::PointerEventArgs*)>(&::Vuplex::WebView::BaseWebViewPrefab::InputDetector_PointerUp)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x16d96ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.InputDetector_Scrolled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::System::Object*, ::Vuplex::WebView::ScrolledEventArgs*)>(&::Vuplex::WebView::BaseWebViewPrefab::InputDetector_Scrolled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x16d9b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "InputDetector_Scrolled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::ScrolledEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._movePointerIfNeeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::UnityEngine::Vector2, bool)>(&::Vuplex::WebView::BaseWebViewPrefab::_movePointerIfNeeded)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x16d8ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_movePointerIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._native2DModeEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Vuplex::WebView::BaseWebViewPrefab::*)(::Vuplex::WebView::IWebView*)>(&::Vuplex::WebView::BaseWebViewPrefab::_native2DModeEnabled)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x16d8778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_native2DModeEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IWebView*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::OnDestroy)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x16d9ba0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._resizeWebViewIfNeeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::_resizeWebViewIfNeeded)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x16d9e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_resizeWebViewIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._scrollIfNeeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::Vuplex::WebView::BaseWebViewPrefab::_scrollIfNeeded)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x16d8fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_scrollIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._setVideoLayerPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::UnityEngine::Rect)>(&::Vuplex::WebView::BaseWebViewPrefab::_setVideoLayerPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._setVideoRect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::UnityEngine::Rect)>(&::Vuplex::WebView::BaseWebViewPrefab::_setVideoRect)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x16d8850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_setVideoRect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._throwExceptionIfInitialized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::_throwExceptionIfInitialized)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x16da090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_throwExceptionIfInitialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::Update)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x16da0ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._updatePixelDensityIfNeeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::Vuplex::WebView::IWebView*)>(&::Vuplex::WebView::BaseWebViewPrefab::_updatePixelDensityIfNeeded)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x16da1d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_updatePixelDensityIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IWebView*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._updateResolutionIfNeeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::_updateResolutionIfNeeded)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x16da12c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_updateResolutionIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.WebView_ConsoleMessageLogged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::System::Object*, ::Vuplex::WebView::ConsoleMessageEventArgs*)>(&::Vuplex::WebView::BaseWebViewPrefab::WebView_ConsoleMessageLogged)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x16da3a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "WebView_ConsoleMessageLogged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::ConsoleMessageEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.WebView_TextureChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::System::Object*, ::Vuplex::WebView::EventArgs_1<::UnityW<::UnityEngine::Texture2D>>*)>(&::Vuplex::WebView::BaseWebViewPrefab::WebView_TextureChanged)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x16da4c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "WebView_TextureChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::UnityW<::UnityEngine::Texture2D>>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.get_DragToScrollThreshold
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::get_DragToScrollThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16da5bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "get_DragToScrollThreshold",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.set_DragToScrollThreshold
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(float_t)>(&::Vuplex::WebView::BaseWebViewPrefab::set_DragToScrollThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16da5c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "set_DragToScrollThreshold",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)()>(&::Vuplex::WebView::BaseWebViewPrefab::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x16da5cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.__attachWebViewEventHandlers_b__80_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::System::Object*, ::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*)>(&::Vuplex::WebView::BaseWebViewPrefab::__attachWebViewEventHandlers_b__80_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x16da600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "<_attachWebViewEventHandlers>b__80_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseWebViewPrefab.__initWebView_b__95_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseWebViewPrefab::*)(::System::Object*, ::Vuplex::WebView::EventArgs_1<::StringW>*)>(&::Vuplex::WebView::BaseWebViewPrefab::__initWebView_b__95_0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x16da650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "<_initWebView>b__95_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::EventHandler_1<::Vuplex::WebView::ClickedEventArgs*>*& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_Clicked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Clicked;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::ClickedEventArgs*>* const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_Clicked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Clicked;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set_Clicked(::System::EventHandler_1<::Vuplex::WebView::ClickedEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Clicked)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler*& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_Initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Initialized;
}
constexpr ::System::EventHandler* const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_Initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Initialized;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set_Initialized(::System::EventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Initialized)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler*& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_PointerEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PointerEntered;
}
constexpr ::System::EventHandler* const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_PointerEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PointerEntered;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set_PointerEntered(::System::EventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PointerEntered)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler*& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_PointerExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PointerExited;
}
constexpr ::System::EventHandler* const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_PointerExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PointerExited;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set_PointerExited(::System::EventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PointerExited)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>*& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_Scrolled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scrolled;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>* const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_Scrolled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scrolled;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set_Scrolled(::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Scrolled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_ClickingEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClickingEnabled;
}
constexpr bool const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_ClickingEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClickingEnabled;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set_ClickingEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClickingEnabled = value;
}
constexpr bool& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_CursorIconsEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CursorIconsEnabled;
}
constexpr bool const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_CursorIconsEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CursorIconsEnabled;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set_CursorIconsEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CursorIconsEnabled = value;
}
constexpr ::Vuplex::WebView::DragMode& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_DragMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DragMode;
}
constexpr ::Vuplex::WebView::DragMode const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_DragMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DragMode;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set_DragMode(::Vuplex::WebView::DragMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DragMode = value;
}
constexpr float_t& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_DragThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DragThreshold;
}
constexpr float_t const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_DragThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DragThreshold;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set_DragThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DragThreshold = value;
}
constexpr bool& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_HoveringEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HoveringEnabled;
}
constexpr bool const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_HoveringEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HoveringEnabled;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set_HoveringEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HoveringEnabled = value;
}
constexpr ::StringW& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_InitialUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialUrl;
}
constexpr ::StringW const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_InitialUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialUrl;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set_InitialUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InitialUrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_KeyboardEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyboardEnabled;
}
constexpr bool const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_KeyboardEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyboardEnabled;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set_KeyboardEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KeyboardEnabled = value;
}
constexpr bool& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_LogConsoleMessages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogConsoleMessages;
}
constexpr bool const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_LogConsoleMessages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogConsoleMessages;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set_LogConsoleMessages(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LogConsoleMessages = value;
}
constexpr float_t& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_PixelDensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PixelDensity;
}
constexpr float_t const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_PixelDensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PixelDensity;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set_PixelDensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PixelDensity = value;
}
constexpr bool& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_RemoteDebuggingEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RemoteDebuggingEnabled;
}
constexpr bool const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_RemoteDebuggingEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RemoteDebuggingEnabled;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set_RemoteDebuggingEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RemoteDebuggingEnabled = value;
}
constexpr bool& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_ScrollingEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScrollingEnabled;
}
constexpr bool const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get_ScrollingEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScrollingEnabled;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set_ScrollingEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScrollingEnabled = value;
}
constexpr float_t& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__appliedResolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____appliedResolution;
}
constexpr float_t const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__appliedResolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____appliedResolution;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set__appliedResolution(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____appliedResolution = value;
}
constexpr ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView>& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__cachedVideoLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedVideoLayer;
}
constexpr ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView> const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__cachedVideoLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedVideoLayer;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set__cachedVideoLayer(::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cachedVideoLayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView>& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__cachedView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedView;
}
constexpr ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView> const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__cachedView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedView;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set__cachedView(::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cachedView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Vuplex::WebView::IWebView*& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__cachedWebView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedWebView;
}
constexpr ::Vuplex::WebView::IWebView* const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__cachedWebView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedWebView;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set__cachedWebView(::Vuplex::WebView::IWebView*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cachedWebView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__consoleMessageLoggedHandlerAttached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____consoleMessageLoggedHandlerAttached;
}
constexpr bool const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__consoleMessageLoggedHandlerAttached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____consoleMessageLoggedHandlerAttached;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set__consoleMessageLoggedHandlerAttached(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____consoleMessageLoggedHandlerAttached = value;
}
constexpr bool& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__dragThresholdReached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dragThresholdReached;
}
constexpr bool const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__dragThresholdReached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dragThresholdReached;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set__dragThresholdReached(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dragThresholdReached = value;
}
constexpr bool& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__dragToScrollClickIsPending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dragToScrollClickIsPending;
}
constexpr bool const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__dragToScrollClickIsPending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dragToScrollClickIsPending;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set__dragToScrollClickIsPending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dragToScrollClickIsPending = value;
}
constexpr bool& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__hasOverriddenCursorIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasOverriddenCursorIcon;
}
constexpr bool const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__hasOverriddenCursorIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasOverriddenCursorIcon;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set__hasOverriddenCursorIcon(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasOverriddenCursorIcon = value;
}
constexpr bool& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__keyboardHasBeenEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyboardHasBeenEnabled;
}
constexpr bool const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__keyboardHasBeenEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyboardHasBeenEnabled;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set__keyboardHasBeenEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____keyboardHasBeenEnabled = value;
}
constexpr bool& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__loggedDragWarning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loggedDragWarning;
}
constexpr bool const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__loggedDragWarning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loggedDragWarning;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set__loggedDragWarning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loggedDragWarning = value;
}
constexpr ::Vuplex::WebView::WebViewOptions& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__options()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____options;
}
constexpr ::Vuplex::WebView::WebViewOptions const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__options() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____options;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set__options(::Vuplex::WebView::WebViewOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____options = value;
}
constexpr ::UnityW<::UnityEngine::MonoBehaviour>& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__pointerInputDetectorMonoBehaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerInputDetectorMonoBehaviour;
}
constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__pointerInputDetectorMonoBehaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerInputDetectorMonoBehaviour;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set__pointerInputDetectorMonoBehaviour(::UnityW<::UnityEngine::MonoBehaviour>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pointerInputDetectorMonoBehaviour)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__pointerIsDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerIsDown;
}
constexpr bool const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__pointerIsDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerIsDown;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set__pointerIsDown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointerIsDown = value;
}
constexpr ::UnityEngine::Vector2& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__pointerDownNormalizedPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerDownNormalizedPoint;
}
constexpr ::UnityEngine::Vector2 const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__pointerDownNormalizedPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerDownNormalizedPoint;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set__pointerDownNormalizedPoint(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointerDownNormalizedPoint = value;
}
constexpr ::UnityEngine::Vector2& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__previousNormalizedDragPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousNormalizedDragPoint;
}
constexpr ::UnityEngine::Vector2 const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__previousNormalizedDragPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousNormalizedDragPoint;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set__previousNormalizedDragPoint(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousNormalizedDragPoint = value;
}
constexpr ::UnityEngine::Vector2& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__previousMovePointerPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousMovePointerPoint;
}
constexpr ::UnityEngine::Vector2 const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__previousMovePointerPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousMovePointerPoint;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set__previousMovePointerPoint(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousMovePointerPoint = value;
}
constexpr ::UnityEngine::Vector2& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__sizeInUnityUnits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sizeInUnityUnits;
}
constexpr ::UnityEngine::Vector2 const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__sizeInUnityUnits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sizeInUnityUnits;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set__sizeInUnityUnits(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sizeInUnityUnits = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__videoMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__videoMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoMaterial;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set__videoMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____videoMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__viewMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____viewMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__viewMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____viewMaterial;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set__viewMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____viewMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__visible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visible;
}
constexpr bool const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__visible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visible;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set__visible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visible = value;
}
constexpr ::Vuplex::WebView::IWebView*& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__webViewForInitialization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webViewForInitialization;
}
constexpr ::Vuplex::WebView::IWebView* const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__webViewForInitialization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webViewForInitialization;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set__webViewForInitialization(::Vuplex::WebView::IWebView*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____webViewForInitialization)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__webViewGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webViewGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__webViewGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webViewGameObject;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set__webViewGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____webViewGameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__DragToScrollThreshold_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DragToScrollThreshold_k__BackingField;
}
constexpr float_t const& Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_get__DragToScrollThreshold_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DragToScrollThreshold_k__BackingField;
}
constexpr void Vuplex::WebView::BaseWebViewPrefab::__cordl_internal_set__DragToScrollThreshold_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DragToScrollThreshold_k__BackingField = value;
}
inline void Vuplex::WebView::BaseWebViewPrefab::setStaticF__loggedHoverWarning(bool  value)  {
::cordl_internals::setStaticField<bool, "_loggedHoverWarning", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get>(std::forward<bool>(value));
}
inline bool Vuplex::WebView::BaseWebViewPrefab::getStaticF__loggedHoverWarning()  {
return ::cordl_internals::getStaticField<bool, "_loggedHoverWarning", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get>();
}
inline void Vuplex::WebView::BaseWebViewPrefab::setStaticF__remoteDebuggingEnabled(bool  value)  {
::cordl_internals::setStaticField<bool, "_remoteDebuggingEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get>(std::forward<bool>(value));
}
inline bool Vuplex::WebView::BaseWebViewPrefab::getStaticF__remoteDebuggingEnabled()  {
return ::cordl_internals::getStaticField<bool, "_remoteDebuggingEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get>();
}
inline void Vuplex::WebView::BaseWebViewPrefab::add_Clicked(::System::EventHandler_1<::Vuplex::WebView::ClickedEventArgs*>*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::BaseWebViewPrefab::remove_Clicked(::System::EventHandler_1<::Vuplex::WebView::ClickedEventArgs*>*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::BaseWebViewPrefab::add_Initialized(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "add_Initialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::BaseWebViewPrefab::remove_Initialized(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "remove_Initialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::BaseWebViewPrefab::add_PointerEntered(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "add_PointerEntered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::BaseWebViewPrefab::remove_PointerEntered(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "remove_PointerEntered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::BaseWebViewPrefab::add_PointerExited(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "add_PointerExited",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::BaseWebViewPrefab::remove_PointerExited(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "remove_PointerExited",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::BaseWebViewPrefab::add_Scrolled(::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::BaseWebViewPrefab::remove_Scrolled(::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> Vuplex::WebView::BaseWebViewPrefab::get_Material()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "get_Material",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseWebViewPrefab::set_Material(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "set_Material",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Vuplex::WebView::BaseWebViewPrefab::get_Visible()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseWebViewPrefab::set_Visible(bool  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Vuplex::WebView::IWebView* Vuplex::WebView::BaseWebViewPrefab::get_WebView()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "get_WebView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Vuplex::WebView::IWebView*, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseWebViewPrefab::set_WebView(::Vuplex::WebView::IWebView*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "set_WebView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IWebView*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 Vuplex::WebView::BaseWebViewPrefab::BrowserToScreenPoint(int32_t  xInPixels, int32_t  yInPixels)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, xInPixels, yInPixels);
}
inline void Vuplex::WebView::BaseWebViewPrefab::Destroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "Destroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseWebViewPrefab::SetCutoutRect(::UnityEngine::Rect  rect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "SetCutoutRect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rect);
}
inline void Vuplex::WebView::BaseWebViewPrefab::SetOptionsForInitialization(::Vuplex::WebView::WebViewOptions  options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "SetOptionsForInitialization",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::WebViewOptions>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, options);
}
inline void Vuplex::WebView::BaseWebViewPrefab::SetPointerInputDetector(::Vuplex::WebView::IPointerInputDetector*  pointerInputDetector)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "SetPointerInputDetector",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IPointerInputDetector*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointerInputDetector);
}
inline void Vuplex::WebView::BaseWebViewPrefab::SetWebViewForInitialization(::Vuplex::WebView::IWebView*  webView)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "SetWebViewForInitialization",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IWebView*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, webView);
}
inline ::System::Threading::Tasks::Task* Vuplex::WebView::BaseWebViewPrefab::WaitUntilInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "WaitUntilInitialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline int32_t Vuplex::WebView::BaseWebViewPrefab::get__heightInPixels()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "get__heightInPixels",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::IPointerInputDetector* Vuplex::WebView::BaseWebViewPrefab::get__pointerInputDetector()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "get__pointerInputDetector",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Vuplex::WebView::IPointerInputDetector*, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseWebViewPrefab::set__pointerInputDetector(::Vuplex::WebView::IPointerInputDetector*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "set__pointerInputDetector",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IPointerInputDetector*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView> Vuplex::WebView::BaseWebViewPrefab::get__videoLayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "get__videoLayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView>, false>(this, ___internal_method);
}
inline bool Vuplex::WebView::BaseWebViewPrefab::get__videoLayerIsEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "get__videoLayerIsEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseWebViewPrefab::set__videoLayerIsEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "set__videoLayerIsEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView> Vuplex::WebView::BaseWebViewPrefab::get__view()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "get__view",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView>, false>(this, ___internal_method);
}
inline int32_t Vuplex::WebView::BaseWebViewPrefab::get__widthInPixels()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "get__widthInPixels",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseWebViewPrefab::_attachWebViewEventHandlers(::Vuplex::WebView::IWebView*  webView)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_attachWebViewEventHandlers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IWebView*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, webView);
}
inline void Vuplex::WebView::BaseWebViewPrefab::_disableHoveringIfNeeded(bool  preferNative2DMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_disableHoveringIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, preferNative2DMode);
}
inline void Vuplex::WebView::BaseWebViewPrefab::_enableConsoleMessagesIfNeeded(::Vuplex::WebView::IWebView*  webView)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_enableConsoleMessagesIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IWebView*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, webView);
}
inline void Vuplex::WebView::BaseWebViewPrefab::_enableNativeOnScreenKeyboardIfNeeded(::Vuplex::WebView::IWebView*  webView)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_enableNativeOnScreenKeyboardIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IWebView*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, webView);
}
inline void Vuplex::WebView::BaseWebViewPrefab::_enableOrDisableKeyboardIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_enableOrDisableKeyboardIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseWebViewPrefab::_enableRemoteDebuggingIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_enableRemoteDebuggingIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t Vuplex::WebView::BaseWebViewPrefab::_getResolution()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool Vuplex::WebView::BaseWebViewPrefab::_getNativeOnScreenKeyboardEnabled()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t Vuplex::WebView::BaseWebViewPrefab::_getScrollingSensitivity()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::IWithTouch* Vuplex::WebView::BaseWebViewPrefab::_getTouchIfSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_getTouchIfSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Vuplex::WebView::IWithTouch*, false>(this, ___internal_method);
}
inline ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView> Vuplex::WebView::BaseWebViewPrefab::_getVideoLayer()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView>, false>(this, ___internal_method);
}
inline ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView> Vuplex::WebView::BaseWebViewPrefab::_getView()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView>, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseWebViewPrefab::_handleTrialExpired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_handleTrialExpired",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Vuplex::WebView::BaseWebViewPrefab::_initBase(::UnityEngine::Rect  rect, bool  preferNative2DMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_initBase",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, rect, preferNative2DMode);
}
inline void Vuplex::WebView::BaseWebViewPrefab::_initViews(::Vuplex::WebView::IWebView*  webView)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_initViews",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IWebView*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, webView);
}
inline ::System::Threading::Tasks::Task_1<::Vuplex::WebView::IWebView*>* Vuplex::WebView::BaseWebViewPrefab::_initWebView(::UnityEngine::Rect  rect, bool  preferNative2DMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_initWebView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Vuplex::WebView::IWebView*>*, false>(this, ___internal_method, rect, preferNative2DMode);
}
inline void Vuplex::WebView::BaseWebViewPrefab::_initPointerInputDetector(::Vuplex::WebView::IWebView*  webView, ::Vuplex::WebView::IPointerInputDetector*  previousPointerInputDetector)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_initPointerInputDetector",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IWebView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IPointerInputDetector*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, webView, previousPointerInputDetector);
}
inline void Vuplex::WebView::BaseWebViewPrefab::InputDetector_BeganDrag(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "InputDetector_BeganDrag",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Vuplex::WebView::BaseWebViewPrefab::InputDetector_Dragged(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "InputDetector_Dragged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Vuplex::WebView::BaseWebViewPrefab::InputDetector_PointerDown(::System::Object*  sender, ::Vuplex::WebView::PointerEventArgs*  eventArgs)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                    16
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Vuplex::WebView::BaseWebViewPrefab::InputDetector_PointerEntered(::System::Object*  sender, ::System::EventArgs*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "InputDetector_PointerEntered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Vuplex::WebView::BaseWebViewPrefab::InputDetector_PointerExited(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "InputDetector_PointerExited",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Vuplex::WebView::BaseWebViewPrefab::InputDetector_PointerMoved(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "InputDetector_PointerMoved",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Vuplex::WebView::BaseWebViewPrefab::InputDetector_PointerUp(::System::Object*  sender, ::Vuplex::WebView::PointerEventArgs*  eventArgs)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Vuplex::WebView::BaseWebViewPrefab::InputDetector_Scrolled(::System::Object*  sender, ::Vuplex::WebView::ScrolledEventArgs*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "InputDetector_Scrolled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::ScrolledEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Vuplex::WebView::BaseWebViewPrefab::_movePointerIfNeeded(::UnityEngine::Vector2  point, bool  pointerLeave)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_movePointerIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, point, pointerLeave);
}
inline bool Vuplex::WebView::BaseWebViewPrefab::_native2DModeEnabled(::Vuplex::WebView::IWebView*  webView)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_native2DModeEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IWebView*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, webView);
}
inline void Vuplex::WebView::BaseWebViewPrefab::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                    18
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseWebViewPrefab::_resizeWebViewIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_resizeWebViewIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseWebViewPrefab::_scrollIfNeeded(::UnityEngine::Vector2  scrollDelta, ::UnityEngine::Vector2  point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_scrollIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scrollDelta, point);
}
inline void Vuplex::WebView::BaseWebViewPrefab::_setVideoLayerPosition(::UnityEngine::Rect  videoRect)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                    19
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, videoRect);
}
inline void Vuplex::WebView::BaseWebViewPrefab::_setVideoRect(::UnityEngine::Rect  videoRect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_setVideoRect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, videoRect);
}
inline void Vuplex::WebView::BaseWebViewPrefab::_throwExceptionIfInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_throwExceptionIfInitialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseWebViewPrefab::Update()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseWebViewPrefab::_updatePixelDensityIfNeeded(::Vuplex::WebView::IWebView*  webView)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_updatePixelDensityIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::IWebView*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, webView);
}
inline void Vuplex::WebView::BaseWebViewPrefab::_updateResolutionIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "_updateResolutionIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseWebViewPrefab::WebView_ConsoleMessageLogged(::System::Object*  sender, ::Vuplex::WebView::ConsoleMessageEventArgs*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "WebView_ConsoleMessageLogged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::ConsoleMessageEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Vuplex::WebView::BaseWebViewPrefab::WebView_TextureChanged(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::UnityW<::UnityEngine::Texture2D>>*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "WebView_TextureChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::UnityW<::UnityEngine::Texture2D>>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline float_t Vuplex::WebView::BaseWebViewPrefab::get_DragToScrollThreshold()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "get_DragToScrollThreshold",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseWebViewPrefab::set_DragToScrollThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "set_DragToScrollThreshold",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::BaseWebViewPrefab::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseWebViewPrefab::__attachWebViewEventHandlers_b__80_0(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "<_attachWebViewEventHandlers>b__80_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Vuplex::WebView::BaseWebViewPrefab::__initWebView_b__95_0(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::StringW>*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseWebViewPrefab*>::get(),
                        "<_initWebView>b__95_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline ::Vuplex::WebView::BaseWebViewPrefab* Vuplex::WebView::BaseWebViewPrefab::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::BaseWebViewPrefab*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::BaseWebViewPrefab::BaseWebViewPrefab()   {
}
