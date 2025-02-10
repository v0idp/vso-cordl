#pragma once
// IWYU pragma private; include "VROSC/BrowserUI.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Vuplex/WebView/zzzz__FocusedInputFieldType_impl.hpp"
#include "VROSC/zzzz__BrowserUI_def.hpp"
#include "GlobalNamespace/zzzz__Key_def.hpp"
#include "GlobalNamespace/zzzz__UIInputField_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "VROSC/zzzz__BrowserController_def.hpp"
#include "VROSC/zzzz__BrowserUI_def.hpp"
#include "VROSC/zzzz__ClickData_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__TransformMover_def.hpp"
#include "VROSC/zzzz__UIButton_def.hpp"
#include "VROSC/zzzz__UIToggle_def.hpp"
#include "VROSC/zzzz__WebViewInputArea_def.hpp"
#include "Vuplex/WebView/zzzz__FocusedInputFieldChangedEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__ProgressChangedEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__UrlChangedEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__WebViewPrefab_def.hpp"
//  Writing Method size for method: ::VROSC::BrowserUI__Setup_d__20.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI__Setup_d__20::*)()>(&::VROSC::BrowserUI__Setup_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x11f0;
  constexpr static std::size_t addrs = 0x1730274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI__Setup_d__20>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI__Setup_d__20.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI__Setup_d__20::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::BrowserUI__Setup_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1731464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI__Setup_d__20>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::BrowserUI__Setup_d__20::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI__Setup_d__20>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BrowserUI__Setup_d__20::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI__Setup_d__20>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::BrowserUI__Setup_d__20::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::BrowserUI__Setup_d__20::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::BrowserUI>", modifiers: "", def_value: Some("{}") }, CppParam { name: "controller", ty: "::UnityW<::VROSC::BrowserController>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::BrowserUI__Setup_d__20::BrowserUI__Setup_d__20(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::BrowserUI>  __4__this, ::UnityW<::VROSC::BrowserController>  controller, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->controller = controller;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::BrowserUI__Setup_d__20::BrowserUI__Setup_d__20()   {
}
//  Writing Method size for method: ::VROSC::BrowserUI__Toggled_d__22.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI__Toggled_d__22::*)()>(&::VROSC::BrowserUI__Toggled_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x1731470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI__Toggled_d__22>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI__Toggled_d__22.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI__Toggled_d__22::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::BrowserUI__Toggled_d__22::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17317d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI__Toggled_d__22>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::BrowserUI__Toggled_d__22::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI__Toggled_d__22>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BrowserUI__Toggled_d__22::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI__Toggled_d__22>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::BrowserUI__Toggled_d__22::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::BrowserUI__Toggled_d__22::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "active", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::BrowserUI>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::BrowserUI__Toggled_d__22::BrowserUI__Toggled_d__22(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, bool  active, ::UnityW<::VROSC::BrowserUI>  __4__this, ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->active = active;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::BrowserUI__Toggled_d__22::BrowserUI__Toggled_d__22()   {
}
//  Writing Method size for method: ::VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32::*)()>(&::VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x17317e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1731da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "e", ty: "::Vuplex::WebView::FocusedInputFieldChangedEventArgs*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::BrowserUI>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32::BrowserUI__WebViewFocusedInputFieldChanged_d__32(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Vuplex::WebView::FocusedInputFieldChangedEventArgs*  e, ::UnityW<::VROSC::BrowserUI>  __4__this, ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->e = e;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32::BrowserUI__WebViewFocusedInputFieldChanged_d__32()   {
}
//  Writing Method size for method: ::VROSC::BrowserUI__WebViewLoadProgressChanged_d__31.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI__WebViewLoadProgressChanged_d__31::*)()>(&::VROSC::BrowserUI__WebViewLoadProgressChanged_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x1731db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI__WebViewLoadProgressChanged_d__31>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI__WebViewLoadProgressChanged_d__31.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI__WebViewLoadProgressChanged_d__31::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::BrowserUI__WebViewLoadProgressChanged_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17321c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI__WebViewLoadProgressChanged_d__31>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::BrowserUI__WebViewLoadProgressChanged_d__31::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI__WebViewLoadProgressChanged_d__31>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BrowserUI__WebViewLoadProgressChanged_d__31::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI__WebViewLoadProgressChanged_d__31>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::BrowserUI__WebViewLoadProgressChanged_d__31::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::BrowserUI__WebViewLoadProgressChanged_d__31::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "e", ty: "::Vuplex::WebView::ProgressChangedEventArgs*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::BrowserUI>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_canGoBack_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::BrowserUI__WebViewLoadProgressChanged_d__31::BrowserUI__WebViewLoadProgressChanged_d__31(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Vuplex::WebView::ProgressChangedEventArgs*  e, ::UnityW<::VROSC::BrowserUI>  __4__this, bool  _canGoBack_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->e = e;
this->__4__this = __4__this;
this->_canGoBack_5__2 = _canGoBack_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::BrowserUI__WebViewLoadProgressChanged_d__31::BrowserUI__WebViewLoadProgressChanged_d__31()   {
}
//  Writing Method size for method: ::VROSC::BrowserUI.get_IsSetup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::BrowserUI::*)()>(&::VROSC::BrowserUI::get_IsSetup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x172e84c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "get_IsSetup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI.set_IsSetup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)(bool)>(&::VROSC::BrowserUI::set_IsSetup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x172e854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "set_IsSetup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)(::VROSC::BrowserController*)>(&::VROSC::BrowserUI::Setup)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x172e750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BrowserController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)()>(&::VROSC::BrowserUI::OnDestroy)> {
  constexpr static std::size_t size = 0xbac;
  constexpr static std::size_t addrs = 0x172e860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI.Toggled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)(bool)>(&::VROSC::BrowserUI::Toggled)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x172f40c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "Toggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI.WebViewHovered
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)(::UnityEngine::Vector2)>(&::VROSC::BrowserUI::WebViewHovered)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x172f4ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "WebViewHovered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI.WebViewClicked
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)(::UnityEngine::Vector2, bool)>(&::VROSC::BrowserUI::WebViewClicked)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x172f590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "WebViewClicked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI.HoverChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)(bool)>(&::VROSC::BrowserUI::HoverChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x172f678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "HoverChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI.WebViewScrolled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::VROSC::BrowserUI::WebViewScrolled)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x172f67c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "WebViewScrolled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI.WebViewDragged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::VROSC::BrowserUI::WebViewDragged)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x172f780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "WebViewDragged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI.InputFieldUrlChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)(::StringW)>(&::VROSC::BrowserUI::InputFieldUrlChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x172f864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "InputFieldUrlChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI.LoadUrl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)(::StringW)>(&::VROSC::BrowserUI::LoadUrl)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x172f868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "LoadUrl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI.WebViewUrlChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)(::System::Object*, ::Vuplex::WebView::UrlChangedEventArgs*)>(&::VROSC::BrowserUI::WebViewUrlChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x172fa4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "WebViewUrlChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::UrlChangedEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI.WebViewLoadProgressChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)(::System::Object*, ::Vuplex::WebView::ProgressChangedEventArgs*)>(&::VROSC::BrowserUI::WebViewLoadProgressChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x172facc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "WebViewLoadProgressChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::ProgressChangedEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI.WebViewFocusedInputFieldChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)(::System::Object*, ::Vuplex::WebView::FocusedInputFieldChangedEventArgs*)>(&::VROSC::BrowserUI::WebViewFocusedInputFieldChanged)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x172fb68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "WebViewFocusedInputFieldChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI.KeyboardToggled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)(::VROSC::InputDevice*, bool)>(&::VROSC::BrowserUI::KeyboardToggled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x172fc00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "KeyboardToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI.KeyboardOpenedOrClosed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)(bool)>(&::VROSC::BrowserUI::KeyboardOpenedOrClosed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x172fc80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "KeyboardOpenedOrClosed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI.KeyPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)(::GlobalNamespace::Key*)>(&::VROSC::BrowserUI::KeyPressed)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x172fcc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "KeyPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Key*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI.ClearPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)()>(&::VROSC::BrowserUI::ClearPressed)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x172fe98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "ClearPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI.BackPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)(::VROSC::ClickData*)>(&::VROSC::BrowserUI::BackPressed)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x172fff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "BackPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI.ForwardPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)(::VROSC::ClickData*)>(&::VROSC::BrowserUI::ForwardPressed)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x17300a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "ForwardPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI.RefreshPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)(::VROSC::ClickData*)>(&::VROSC::BrowserUI::RefreshPressed)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1730158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "RefreshPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI.HomePressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)(::VROSC::ClickData*)>(&::VROSC::BrowserUI::HomePressed)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x173020c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "HomePressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI.UrlFieldSelected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)(::GlobalNamespace::UIInputField*)>(&::VROSC::BrowserUI::UrlFieldSelected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1730254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "UrlFieldSelected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UIInputField*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserUI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserUI::*)()>(&::VROSC::BrowserUI::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x173025c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::BrowserUI::__cordl_internal_get__urlText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____urlText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::BrowserUI::__cordl_internal_get__urlText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____urlText;
}
constexpr void VROSC::BrowserUI::__cordl_internal_set__urlText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____urlText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Vuplex::WebView::WebViewPrefab>& VROSC::BrowserUI::__cordl_internal_get__webViewPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webViewPrefab;
}
constexpr ::UnityW<::Vuplex::WebView::WebViewPrefab> const& VROSC::BrowserUI::__cordl_internal_get__webViewPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webViewPrefab;
}
constexpr void VROSC::BrowserUI::__cordl_internal_set__webViewPrefab(::UnityW<::Vuplex::WebView::WebViewPrefab>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____webViewPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::WebViewInputArea>& VROSC::BrowserUI::__cordl_internal_get__webViewInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webViewInput;
}
constexpr ::UnityW<::VROSC::WebViewInputArea> const& VROSC::BrowserUI::__cordl_internal_get__webViewInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webViewInput;
}
constexpr void VROSC::BrowserUI::__cordl_internal_set__webViewInput(::UnityW<::VROSC::WebViewInputArea>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____webViewInput)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::UIInputField>& VROSC::BrowserUI::__cordl_internal_get__urlInputField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____urlInputField;
}
constexpr ::UnityW<::GlobalNamespace::UIInputField> const& VROSC::BrowserUI::__cordl_internal_get__urlInputField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____urlInputField;
}
constexpr void VROSC::BrowserUI::__cordl_internal_set__urlInputField(::UnityW<::GlobalNamespace::UIInputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____urlInputField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::BrowserUI::__cordl_internal_get__backButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::BrowserUI::__cordl_internal_get__backButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backButton;
}
constexpr void VROSC::BrowserUI::__cordl_internal_set__backButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::BrowserUI::__cordl_internal_get__forwardButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::BrowserUI::__cordl_internal_get__forwardButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardButton;
}
constexpr void VROSC::BrowserUI::__cordl_internal_set__forwardButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____forwardButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::BrowserUI::__cordl_internal_get__refreshButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____refreshButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::BrowserUI::__cordl_internal_get__refreshButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____refreshButton;
}
constexpr void VROSC::BrowserUI::__cordl_internal_set__refreshButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____refreshButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::BrowserUI::__cordl_internal_get__homeButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____homeButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::BrowserUI::__cordl_internal_get__homeButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____homeButton;
}
constexpr void VROSC::BrowserUI::__cordl_internal_set__homeButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____homeButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIToggle>& VROSC::BrowserUI::__cordl_internal_get__keyboardToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyboardToggle;
}
constexpr ::UnityW<::VROSC::UIToggle> const& VROSC::BrowserUI::__cordl_internal_get__keyboardToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyboardToggle;
}
constexpr void VROSC::BrowserUI::__cordl_internal_set__keyboardToggle(::UnityW<::VROSC::UIToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keyboardToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::TransformMover>& VROSC::BrowserUI::__cordl_internal_get__mover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mover;
}
constexpr ::UnityW<::VROSC::TransformMover> const& VROSC::BrowserUI::__cordl_internal_get__mover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mover;
}
constexpr void VROSC::BrowserUI::__cordl_internal_set__mover(::UnityW<::VROSC::TransformMover>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mover)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::BrowserUI::__cordl_internal_get__scrollSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scrollSpeed;
}
constexpr float_t const& VROSC::BrowserUI::__cordl_internal_get__scrollSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scrollSpeed;
}
constexpr void VROSC::BrowserUI::__cordl_internal_set__scrollSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scrollSpeed = value;
}
constexpr ::UnityW<::VROSC::BrowserController>& VROSC::BrowserUI::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::UnityW<::VROSC::BrowserController> const& VROSC::BrowserUI::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void VROSC::BrowserUI::__cordl_internal_set__controller(::UnityW<::VROSC::BrowserController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controller)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::BrowserUI::__cordl_internal_get__passOnKeyboardInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____passOnKeyboardInput;
}
constexpr bool const& VROSC::BrowserUI::__cordl_internal_get__passOnKeyboardInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____passOnKeyboardInput;
}
constexpr void VROSC::BrowserUI::__cordl_internal_set__passOnKeyboardInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____passOnKeyboardInput = value;
}
constexpr ::StringW& VROSC::BrowserUI::__cordl_internal_get__lastURL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastURL;
}
constexpr ::StringW const& VROSC::BrowserUI::__cordl_internal_get__lastURL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastURL;
}
constexpr void VROSC::BrowserUI::__cordl_internal_set__lastURL(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastURL)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Vuplex::WebView::FocusedInputFieldType& VROSC::BrowserUI::__cordl_internal_get__lastFocusedFieldType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFocusedFieldType;
}
constexpr ::Vuplex::WebView::FocusedInputFieldType const& VROSC::BrowserUI::__cordl_internal_get__lastFocusedFieldType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFocusedFieldType;
}
constexpr void VROSC::BrowserUI::__cordl_internal_set__lastFocusedFieldType(::Vuplex::WebView::FocusedInputFieldType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastFocusedFieldType = value;
}
constexpr bool& VROSC::BrowserUI::__cordl_internal_get__IsSetup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSetup_k__BackingField;
}
constexpr bool const& VROSC::BrowserUI::__cordl_internal_get__IsSetup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSetup_k__BackingField;
}
constexpr void VROSC::BrowserUI::__cordl_internal_set__IsSetup_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSetup_k__BackingField = value;
}
inline bool VROSC::BrowserUI::get_IsSetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "get_IsSetup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::BrowserUI::set_IsSetup(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "set_IsSetup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::BrowserUI::Setup(::VROSC::BrowserController*  controller)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BrowserController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, controller);
}
inline void VROSC::BrowserUI::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BrowserUI::Toggled(bool  active)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "Toggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, active);
}
inline void VROSC::BrowserUI::WebViewHovered(::UnityEngine::Vector2  normalizedPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "WebViewHovered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, normalizedPosition);
}
inline void VROSC::BrowserUI::WebViewClicked(::UnityEngine::Vector2  normalizedPosition, bool  clicked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "WebViewClicked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, normalizedPosition, clicked);
}
inline void VROSC::BrowserUI::HoverChanged(bool  hover)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "HoverChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hover);
}
inline void VROSC::BrowserUI::WebViewScrolled(::UnityEngine::Vector2  scrollDirection, ::UnityEngine::Vector2  normalizedPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "WebViewScrolled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scrollDirection, normalizedPoint);
}
inline void VROSC::BrowserUI::WebViewDragged(::UnityEngine::Vector2  dragDelta, ::UnityEngine::Vector2  normalizedPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "WebViewDragged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dragDelta, normalizedPoint);
}
inline void VROSC::BrowserUI::InputFieldUrlChanged(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "InputFieldUrlChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, url);
}
inline void VROSC::BrowserUI::LoadUrl(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "LoadUrl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, url);
}
inline void VROSC::BrowserUI::WebViewUrlChanged(::System::Object*  sender, ::Vuplex::WebView::UrlChangedEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "WebViewUrlChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::UrlChangedEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
inline void VROSC::BrowserUI::WebViewLoadProgressChanged(::System::Object*  sender, ::Vuplex::WebView::ProgressChangedEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "WebViewLoadProgressChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::ProgressChangedEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
inline void VROSC::BrowserUI::WebViewFocusedInputFieldChanged(::System::Object*  sender, ::Vuplex::WebView::FocusedInputFieldChangedEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "WebViewFocusedInputFieldChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
inline void VROSC::BrowserUI::KeyboardToggled(::VROSC::InputDevice*  inputDevice, bool  toggled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "KeyboardToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputDevice, toggled);
}
inline void VROSC::BrowserUI::KeyboardOpenedOrClosed(bool  opened)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "KeyboardOpenedOrClosed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, opened);
}
inline void VROSC::BrowserUI::KeyPressed(::GlobalNamespace::Key*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "KeyPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Key*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline void VROSC::BrowserUI::ClearPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "ClearPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BrowserUI::BackPressed(::VROSC::ClickData*  clickData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "BackPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clickData);
}
inline void VROSC::BrowserUI::ForwardPressed(::VROSC::ClickData*  clickData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "ForwardPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clickData);
}
inline void VROSC::BrowserUI::RefreshPressed(::VROSC::ClickData*  clickData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "RefreshPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clickData);
}
inline void VROSC::BrowserUI::HomePressed(::VROSC::ClickData*  clickData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "HomePressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clickData);
}
inline void VROSC::BrowserUI::UrlFieldSelected(::GlobalNamespace::UIInputField*  urlField)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        "UrlFieldSelected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UIInputField*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, urlField);
}
inline void VROSC::BrowserUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::BrowserUI* VROSC::BrowserUI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::BrowserUI*>());
}
// Ctor Parameters []
constexpr ::VROSC::BrowserUI::BrowserUI()   {
}
