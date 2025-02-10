#pragma once
// IWYU pragma private; include "Vuplex/WebView/BaseKeyboard.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Vuplex/WebView/zzzz__WebViewOptions_impl.hpp"
#include "Vuplex/WebView/zzzz__BaseKeyboard_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "Vuplex/WebView/zzzz__BaseKeyboard_def.hpp"
#include "Vuplex/WebView/zzzz__BaseWebViewPrefab_def.hpp"
#include "Vuplex/WebView/zzzz__EventArgs_1_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0::*)()>(&::Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16d4fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0._WaitUntilInitialized_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0::*)(::System::Object*, ::System::EventArgs*)>(&::Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0::_WaitUntilInitialized_b__0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x16d5b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0*>::get(),
                        "<WaitUntilInitialized>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0::__cordl_internal_get_taskSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taskSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0::__cordl_internal_get_taskSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taskSource;
}
constexpr void Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0::__cordl_internal_set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___taskSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0::_WaitUntilInitialized_b__0(::System::Object*  sender, ::System::EventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0*>::get(),
                        "<WaitUntilInitialized>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
inline ::Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0* Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0::BaseKeyboard___c__DisplayClass7_0()   {
}
//  Writing Method size for method: ::Vuplex::WebView::BaseKeyboard___init_d__13.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseKeyboard___init_d__13::*)()>(&::Vuplex::WebView::BaseKeyboard___init_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x16d5ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard___init_d__13>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseKeyboard___init_d__13.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseKeyboard___init_d__13::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Vuplex::WebView::BaseKeyboard___init_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16d6200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard___init_d__13>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Vuplex::WebView::BaseKeyboard___init_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard___init_d__13>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseKeyboard___init_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard___init_d__13>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Vuplex::WebView::BaseKeyboard___init_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Vuplex::WebView::BaseKeyboard___init_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::Vuplex::WebView::BaseKeyboard>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::BaseKeyboard___init_d__13::BaseKeyboard___init_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Vuplex::WebView::BaseKeyboard>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::BaseKeyboard___init_d__13::BaseKeyboard___init_d__13()   {
}
//  Writing Method size for method: ::Vuplex::WebView::BaseKeyboard.add_KeyPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseKeyboard::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*)>(&::Vuplex::WebView::BaseKeyboard::add_KeyPressed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16d4be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "add_KeyPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseKeyboard.remove_KeyPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseKeyboard::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*)>(&::Vuplex::WebView::BaseKeyboard::remove_KeyPressed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16d4c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "remove_KeyPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseKeyboard.add_Initialized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseKeyboard::*)(::System::EventHandler*)>(&::Vuplex::WebView::BaseKeyboard::add_Initialized)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x16d4d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "add_Initialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseKeyboard.remove_Initialized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseKeyboard::*)(::System::EventHandler*)>(&::Vuplex::WebView::BaseKeyboard::remove_Initialized)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x16d4de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "remove_Initialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseKeyboard.WaitUntilInitialized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Vuplex::WebView::BaseKeyboard::*)()>(&::Vuplex::WebView::BaseKeyboard::WaitUntilInitialized)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x16d4e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "WaitUntilInitialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseKeyboard.get_BaseWebViewPrefab
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Vuplex::WebView::BaseWebViewPrefab> (::Vuplex::WebView::BaseKeyboard::*)()>(&::Vuplex::WebView::BaseKeyboard::get_BaseWebViewPrefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16d4fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "get_BaseWebViewPrefab",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseKeyboard._init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseKeyboard::*)()>(&::Vuplex::WebView::BaseKeyboard::_init)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x16d4fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "_init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseKeyboard.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseKeyboard::*)()>(&::Vuplex::WebView::BaseKeyboard::OnDestroy)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x16d505c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseKeyboard.WebView_MessageEmitted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseKeyboard::*)(::System::Object*, ::Vuplex::WebView::EventArgs_1<::StringW>*)>(&::Vuplex::WebView::BaseKeyboard::WebView_MessageEmitted)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x16d50f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "WebView_MessageEmitted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseKeyboard._getKeyboardLanguage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Vuplex::WebView::BaseKeyboard::*)()>(&::Vuplex::WebView::BaseKeyboard::_getKeyboardLanguage)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x16d53c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "_getKeyboardLanguage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseKeyboard._sendKeyboardLanguageMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseKeyboard::*)()>(&::Vuplex::WebView::BaseKeyboard::_sendKeyboardLanguageMessage)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x16d52a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "_sendKeyboardLanguageMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseKeyboard._setLayerRecursively
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*, int32_t)>(&::Vuplex::WebView::BaseKeyboard::_setLayerRecursively)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x16d55c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "_setLayerRecursively",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseKeyboard.add_InputReceived
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseKeyboard::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*)>(&::Vuplex::WebView::BaseKeyboard::add_InputReceived)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16d596c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "add_InputReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseKeyboard.remove_InputReceived
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseKeyboard::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*)>(&::Vuplex::WebView::BaseKeyboard::remove_InputReceived)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16d5a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "remove_InputReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::BaseKeyboard._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::BaseKeyboard::*)()>(&::Vuplex::WebView::BaseKeyboard::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16d5acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*& Vuplex::WebView::BaseKeyboard::__cordl_internal_get_KeyPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyPressed;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>* const& Vuplex::WebView::BaseKeyboard::__cordl_internal_get_KeyPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyPressed;
}
constexpr void Vuplex::WebView::BaseKeyboard::__cordl_internal_set_KeyPressed(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___KeyPressed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler*& Vuplex::WebView::BaseKeyboard::__cordl_internal_get_Initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Initialized;
}
constexpr ::System::EventHandler* const& Vuplex::WebView::BaseKeyboard::__cordl_internal_get_Initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Initialized;
}
constexpr void Vuplex::WebView::BaseKeyboard::__cordl_internal_set_Initialized(::System::EventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Initialized)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Vuplex::WebView::BaseKeyboard::__cordl_internal_get_CustomKeyboardUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomKeyboardUrl;
}
constexpr ::StringW const& Vuplex::WebView::BaseKeyboard::__cordl_internal_get_CustomKeyboardUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomKeyboardUrl;
}
constexpr void Vuplex::WebView::BaseKeyboard::__cordl_internal_set_CustomKeyboardUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CustomKeyboardUrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Vuplex::WebView::BaseKeyboard::__cordl_internal_get__isInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitialized;
}
constexpr bool const& Vuplex::WebView::BaseKeyboard::__cordl_internal_get__isInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitialized;
}
constexpr void Vuplex::WebView::BaseKeyboard::__cordl_internal_set__isInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isInitialized = value;
}
constexpr ::UnityW<::Vuplex::WebView::BaseWebViewPrefab>& Vuplex::WebView::BaseKeyboard::__cordl_internal_get__webViewPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webViewPrefab;
}
constexpr ::UnityW<::Vuplex::WebView::BaseWebViewPrefab> const& Vuplex::WebView::BaseKeyboard::__cordl_internal_get__webViewPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webViewPrefab;
}
constexpr void Vuplex::WebView::BaseKeyboard::__cordl_internal_set__webViewPrefab(::UnityW<::Vuplex::WebView::BaseWebViewPrefab>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____webViewPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*& Vuplex::WebView::BaseKeyboard::__cordl_internal_get_InputReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputReceived;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>* const& Vuplex::WebView::BaseKeyboard::__cordl_internal_get_InputReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputReceived;
}
constexpr void Vuplex::WebView::BaseKeyboard::__cordl_internal_set_InputReceived(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InputReceived)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::BaseKeyboard::setStaticF__webViewOptions(::Vuplex::WebView::WebViewOptions  value)  {
::cordl_internals::setStaticField<::Vuplex::WebView::WebViewOptions, "_webViewOptions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get>(std::forward<::Vuplex::WebView::WebViewOptions>(value));
}
inline ::Vuplex::WebView::WebViewOptions Vuplex::WebView::BaseKeyboard::getStaticF__webViewOptions()  {
return ::cordl_internals::getStaticField<::Vuplex::WebView::WebViewOptions, "_webViewOptions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get>();
}
inline void Vuplex::WebView::BaseKeyboard::add_KeyPressed(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "add_KeyPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::BaseKeyboard::remove_KeyPressed(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "remove_KeyPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::BaseKeyboard::add_Initialized(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "add_Initialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::BaseKeyboard::remove_Initialized(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "remove_Initialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* Vuplex::WebView::BaseKeyboard::WaitUntilInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "WaitUntilInitialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::UnityW<::Vuplex::WebView::BaseWebViewPrefab> Vuplex::WebView::BaseKeyboard::get_BaseWebViewPrefab()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "get_BaseWebViewPrefab",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Vuplex::WebView::BaseWebViewPrefab>, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseKeyboard::_init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "_init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseKeyboard::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseKeyboard::WebView_MessageEmitted(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::StringW>*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "WebView_MessageEmitted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
inline ::StringW Vuplex::WebView::BaseKeyboard::_getKeyboardLanguage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "_getKeyboardLanguage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseKeyboard::_sendKeyboardLanguageMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "_sendKeyboardLanguageMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::BaseKeyboard::_setLayerRecursively(::UnityEngine::GameObject*  gameObject, int32_t  layer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "_setLayerRecursively",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, gameObject, layer);
}
inline void Vuplex::WebView::BaseKeyboard::add_InputReceived(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "add_InputReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::BaseKeyboard::remove_InputReceived(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        "remove_InputReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::BaseKeyboard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::BaseKeyboard*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::BaseKeyboard* Vuplex::WebView::BaseKeyboard::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::BaseKeyboard*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::BaseKeyboard::BaseKeyboard()   {
}
