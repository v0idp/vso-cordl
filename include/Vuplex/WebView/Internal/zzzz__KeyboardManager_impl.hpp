#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/KeyboardManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Vuplex/WebView/Internal/zzzz__KeyboardManager_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "Vuplex/WebView/Internal/zzzz__KeyboardEventArgs_def.hpp"
#include "Vuplex/WebView/Internal/zzzz__KeyboardManager_def.hpp"
#include "Vuplex/WebView/Internal/zzzz__NativeKeyboardListener_def.hpp"
#include "Vuplex/WebView/zzzz__BaseKeyboard_def.hpp"
#include "Vuplex/WebView/zzzz__BaseWebViewPrefab_def.hpp"
#include "Vuplex/WebView/zzzz__ClickedEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__EventArgs_1_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0::*)()>(&::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17be684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0._WebView_FocusChanged_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0::*)(::Vuplex::WebView::BaseWebViewPrefab*)>(&::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0::_WebView_FocusChanged_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x17bead8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0*>::get(),
                        "<WebView_FocusChanged>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::BaseWebViewPrefab*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0::__cordl_internal_get_sender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sender;
}
constexpr ::System::Object* const& Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0::__cordl_internal_get_sender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sender;
}
constexpr void Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0::__cordl_internal_set_sender(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sender)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0::_WebView_FocusChanged_b__0(::Vuplex::WebView::BaseWebViewPrefab*  p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0*>::get(),
                        "<WebView_FocusChanged>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::BaseWebViewPrefab*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, p);
}
inline ::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0* Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0::KeyboardManager___c__DisplayClass28_0()   {
}
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0::*)()>(&::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17be8ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0._WebView_ImeInputFieldPositionChanged_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0::*)(::Vuplex::WebView::BaseWebViewPrefab*)>(&::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0::_WebView_ImeInputFieldPositionChanged_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x17beb08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0*>::get(),
                        "<WebView_ImeInputFieldPositionChanged>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::BaseWebViewPrefab*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0::__cordl_internal_get_sender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sender;
}
constexpr ::System::Object* const& Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0::__cordl_internal_get_sender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sender;
}
constexpr void Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0::__cordl_internal_set_sender(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sender)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0::_WebView_ImeInputFieldPositionChanged_b__0(::Vuplex::WebView::BaseWebViewPrefab*  p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0*>::get(),
                        "<WebView_ImeInputFieldPositionChanged>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::BaseWebViewPrefab*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, p);
}
inline ::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0* Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0::KeyboardManager___c__DisplayClass29_0()   {
}
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager.get_Instance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Vuplex::WebView::Internal::KeyboardManager> (*)()>(&::Vuplex::WebView::Internal::KeyboardManager::get_Instance)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x17bcadc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager.AddKeyboard
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager::*)(::Vuplex::WebView::BaseKeyboard*)>(&::Vuplex::WebView::Internal::KeyboardManager::AddKeyboard)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x17bcc1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "AddKeyboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::BaseKeyboard*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager.RemoveKeyboard
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager::*)(::Vuplex::WebView::BaseKeyboard*)>(&::Vuplex::WebView::Internal::KeyboardManager::RemoveKeyboard)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x17bcd80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "RemoveKeyboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::BaseKeyboard*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager.SetKeyboardEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager::*)(::Vuplex::WebView::BaseWebViewPrefab*, bool)>(&::Vuplex::WebView::Internal::KeyboardManager::SetKeyboardEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17bcf18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "SetKeyboardEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::BaseWebViewPrefab*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager::*)()>(&::Vuplex::WebView::Internal::KeyboardManager::Awake)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x17bd5c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager::*)()>(&::Vuplex::WebView::Internal::KeyboardManager::OnDestroy)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x17bdbd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager.WebViewPrefab_Clicked
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager::*)(::System::Object*, ::Vuplex::WebView::ClickedEventArgs*)>(&::Vuplex::WebView::Internal::KeyboardManager::WebViewPrefab_Clicked)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x17bdc1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "WebViewPrefab_Clicked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::ClickedEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager._addWebViewPrefab
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager::*)(::Vuplex::WebView::BaseWebViewPrefab*)>(&::Vuplex::WebView::Internal::KeyboardManager::_addWebViewPrefab)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x17bcf24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "_addWebViewPrefab",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::BaseWebViewPrefab*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager.NativeKeyboardListener_ImeCompositionCancelled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager::*)(::System::Object*, ::System::EventArgs*)>(&::Vuplex::WebView::Internal::KeyboardManager::NativeKeyboardListener_ImeCompositionCancelled)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x17bdde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "NativeKeyboardListener_ImeCompositionCancelled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager.NativeKeyboardListener_ImeCompositionChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager::*)(::System::Object*, ::Vuplex::WebView::EventArgs_1<::StringW>*)>(&::Vuplex::WebView::Internal::KeyboardManager::NativeKeyboardListener_ImeCompositionChanged)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x17bdea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "NativeKeyboardListener_ImeCompositionChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager.NativeKeyboardListener_ImeCompositionFinished
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager::*)(::System::Object*, ::Vuplex::WebView::EventArgs_1<::StringW>*)>(&::Vuplex::WebView::Internal::KeyboardManager::NativeKeyboardListener_ImeCompositionFinished)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x17bdf88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "NativeKeyboardListener_ImeCompositionFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager.NativeKeyboardListener_KeyDownReceived
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager::*)(::System::Object*, ::Vuplex::WebView::Internal::KeyboardEventArgs*)>(&::Vuplex::WebView::Internal::KeyboardManager::NativeKeyboardListener_KeyDownReceived)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x17be06c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "NativeKeyboardListener_KeyDownReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Internal::KeyboardEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager.NativeKeyboardListener_KeyUpReceived
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager::*)(::System::Object*, ::Vuplex::WebView::Internal::KeyboardEventArgs*)>(&::Vuplex::WebView::Internal::KeyboardManager::NativeKeyboardListener_KeyUpReceived)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x17be1f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "NativeKeyboardListener_KeyUpReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Internal::KeyboardEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager.OnScreenKeyboard_KeyPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager::*)(::System::Object*, ::Vuplex::WebView::EventArgs_1<::StringW>*)>(&::Vuplex::WebView::Internal::KeyboardManager::OnScreenKeyboard_KeyPressed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x17be2e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "OnScreenKeyboard_KeyPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager.OnScreenKeyboard_PointerEntered
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager::*)(::System::Object*, ::System::EventArgs*)>(&::Vuplex::WebView::Internal::KeyboardManager::OnScreenKeyboard_PointerEntered)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17be3bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "OnScreenKeyboard_PointerEntered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager.OnScreenKeyboard_PointerExited
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager::*)(::System::Object*, ::System::EventArgs*)>(&::Vuplex::WebView::Internal::KeyboardManager::OnScreenKeyboard_PointerExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17be3c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "OnScreenKeyboard_PointerExited",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager::*)()>(&::Vuplex::WebView::Internal::KeyboardManager::Update)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x17be3d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager._removeWebViewPrefab
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager::*)(::Vuplex::WebView::BaseWebViewPrefab*)>(&::Vuplex::WebView::Internal::KeyboardManager::_removeWebViewPrefab)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x17bd248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "_removeWebViewPrefab",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::BaseWebViewPrefab*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager._setFocusedWebViewPrefab
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager::*)(::Vuplex::WebView::BaseWebViewPrefab*)>(&::Vuplex::WebView::Internal::KeyboardManager::_setFocusedWebViewPrefab)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x17bdca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "_setFocusedWebViewPrefab",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::BaseWebViewPrefab*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager.WebView_FocusChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager::*)(::System::Object*, ::Vuplex::WebView::EventArgs_1<bool>*)>(&::Vuplex::WebView::Internal::KeyboardManager::WebView_FocusChanged)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x17be4dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "WebView_FocusChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<bool>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager.WebView_ImeInputFieldPositionChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager::*)(::System::Object*, ::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2Int>*)>(&::Vuplex::WebView::Internal::KeyboardManager::WebView_ImeInputFieldPositionChanged)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x17be68c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "WebView_ImeInputFieldPositionChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2Int>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager.WebViewPrefab_PointerEntered
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager::*)(::System::Object*, ::System::EventArgs*)>(&::Vuplex::WebView::Internal::KeyboardManager::WebViewPrefab_PointerEntered)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x17be8b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "WebViewPrefab_PointerEntered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager.WebViewPrefab_PointerExited
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager::*)(::System::Object*, ::System::EventArgs*)>(&::Vuplex::WebView::Internal::KeyboardManager::WebViewPrefab_PointerExited)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x17be958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "WebViewPrefab_PointerExited",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::KeyboardManager._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::KeyboardManager::*)()>(&::Vuplex::WebView::Internal::KeyboardManager::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x17bea14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Vuplex::WebView::BaseWebViewPrefab>& Vuplex::WebView::Internal::KeyboardManager::__cordl_internal_get__focusedWebViewPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____focusedWebViewPrefab;
}
constexpr ::UnityW<::Vuplex::WebView::BaseWebViewPrefab> const& Vuplex::WebView::Internal::KeyboardManager::__cordl_internal_get__focusedWebViewPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____focusedWebViewPrefab;
}
constexpr void Vuplex::WebView::Internal::KeyboardManager::__cordl_internal_set__focusedWebViewPrefab(::UnityW<::Vuplex::WebView::BaseWebViewPrefab>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____focusedWebViewPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Vuplex::WebView::BaseWebViewPrefab>& Vuplex::WebView::Internal::KeyboardManager::__cordl_internal_get__hoveredWebViewPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoveredWebViewPrefab;
}
constexpr ::UnityW<::Vuplex::WebView::BaseWebViewPrefab> const& Vuplex::WebView::Internal::KeyboardManager::__cordl_internal_get__hoveredWebViewPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoveredWebViewPrefab;
}
constexpr void Vuplex::WebView::Internal::KeyboardManager::__cordl_internal_set__hoveredWebViewPrefab(::UnityW<::Vuplex::WebView::BaseWebViewPrefab>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hoveredWebViewPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::Vuplex::WebView::BaseKeyboard>>*& Vuplex::WebView::Internal::KeyboardManager::__cordl_internal_get__keyboards()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyboards;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::Vuplex::WebView::BaseKeyboard>>* const& Vuplex::WebView::Internal::KeyboardManager::__cordl_internal_get__keyboards() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyboards;
}
constexpr void Vuplex::WebView::Internal::KeyboardManager::__cordl_internal_set__keyboards(::System::Collections::Generic::HashSet_1<::UnityW<::Vuplex::WebView::BaseKeyboard>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keyboards)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Vuplex::WebView::Internal::NativeKeyboardListener>& Vuplex::WebView::Internal::KeyboardManager::__cordl_internal_get__nativeKeyboardListener()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeKeyboardListener;
}
constexpr ::UnityW<::Vuplex::WebView::Internal::NativeKeyboardListener> const& Vuplex::WebView::Internal::KeyboardManager::__cordl_internal_get__nativeKeyboardListener() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeKeyboardListener;
}
constexpr void Vuplex::WebView::Internal::KeyboardManager::__cordl_internal_set__nativeKeyboardListener(::UnityW<::Vuplex::WebView::Internal::NativeKeyboardListener>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nativeKeyboardListener)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Vuplex::WebView::Internal::KeyboardManager::__cordl_internal_get__pointerIsHoveringOverKeyboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerIsHoveringOverKeyboard;
}
constexpr bool const& Vuplex::WebView::Internal::KeyboardManager::__cordl_internal_get__pointerIsHoveringOverKeyboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerIsHoveringOverKeyboard;
}
constexpr void Vuplex::WebView::Internal::KeyboardManager::__cordl_internal_set__pointerIsHoveringOverKeyboard(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointerIsHoveringOverKeyboard = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::Vuplex::WebView::BaseWebViewPrefab>>*& Vuplex::WebView::Internal::KeyboardManager::__cordl_internal_get__webViewPrefabs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webViewPrefabs;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::Vuplex::WebView::BaseWebViewPrefab>>* const& Vuplex::WebView::Internal::KeyboardManager::__cordl_internal_get__webViewPrefabs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webViewPrefabs;
}
constexpr void Vuplex::WebView::Internal::KeyboardManager::__cordl_internal_set__webViewPrefabs(::System::Collections::Generic::HashSet_1<::UnityW<::Vuplex::WebView::BaseWebViewPrefab>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____webViewPrefabs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::Internal::KeyboardManager::setStaticF__destroyed(bool  value)  {
::cordl_internals::setStaticField<bool, "_destroyed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get>(std::forward<bool>(value));
}
inline bool Vuplex::WebView::Internal::KeyboardManager::getStaticF__destroyed()  {
return ::cordl_internals::getStaticField<bool, "_destroyed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get>();
}
inline void Vuplex::WebView::Internal::KeyboardManager::setStaticF__instance(::UnityW<::Vuplex::WebView::Internal::KeyboardManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::Vuplex::WebView::Internal::KeyboardManager>, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get>(std::forward<::UnityW<::Vuplex::WebView::Internal::KeyboardManager>>(value));
}
inline ::UnityW<::Vuplex::WebView::Internal::KeyboardManager> Vuplex::WebView::Internal::KeyboardManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Vuplex::WebView::Internal::KeyboardManager>, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get>();
}
inline ::UnityW<::Vuplex::WebView::Internal::KeyboardManager> Vuplex::WebView::Internal::KeyboardManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Vuplex::WebView::Internal::KeyboardManager>, false>(nullptr, ___internal_method);
}
inline void Vuplex::WebView::Internal::KeyboardManager::AddKeyboard(::Vuplex::WebView::BaseKeyboard*  keyboard)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "AddKeyboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::BaseKeyboard*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyboard);
}
inline void Vuplex::WebView::Internal::KeyboardManager::RemoveKeyboard(::Vuplex::WebView::BaseKeyboard*  keyboard)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "RemoveKeyboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::BaseKeyboard*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyboard);
}
inline void Vuplex::WebView::Internal::KeyboardManager::SetKeyboardEnabled(::Vuplex::WebView::BaseWebViewPrefab*  webViewPrefab, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "SetKeyboardEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::BaseWebViewPrefab*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, webViewPrefab, enabled);
}
inline void Vuplex::WebView::Internal::KeyboardManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::KeyboardManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::KeyboardManager::WebViewPrefab_Clicked(::System::Object*  sender, ::Vuplex::WebView::ClickedEventArgs*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "WebViewPrefab_Clicked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::ClickedEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Vuplex::WebView::Internal::KeyboardManager::_addWebViewPrefab(::Vuplex::WebView::BaseWebViewPrefab*  webViewPrefab)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "_addWebViewPrefab",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::BaseWebViewPrefab*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, webViewPrefab);
}
inline void Vuplex::WebView::Internal::KeyboardManager::NativeKeyboardListener_ImeCompositionCancelled(::System::Object*  sender, ::System::EventArgs*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "NativeKeyboardListener_ImeCompositionCancelled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Vuplex::WebView::Internal::KeyboardManager::NativeKeyboardListener_ImeCompositionChanged(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::StringW>*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "NativeKeyboardListener_ImeCompositionChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Vuplex::WebView::Internal::KeyboardManager::NativeKeyboardListener_ImeCompositionFinished(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::StringW>*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "NativeKeyboardListener_ImeCompositionFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Vuplex::WebView::Internal::KeyboardManager::NativeKeyboardListener_KeyDownReceived(::System::Object*  sender, ::Vuplex::WebView::Internal::KeyboardEventArgs*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "NativeKeyboardListener_KeyDownReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Internal::KeyboardEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Vuplex::WebView::Internal::KeyboardManager::NativeKeyboardListener_KeyUpReceived(::System::Object*  sender, ::Vuplex::WebView::Internal::KeyboardEventArgs*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "NativeKeyboardListener_KeyUpReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Internal::KeyboardEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Vuplex::WebView::Internal::KeyboardManager::OnScreenKeyboard_KeyPressed(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::StringW>*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "OnScreenKeyboard_KeyPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Vuplex::WebView::Internal::KeyboardManager::OnScreenKeyboard_PointerEntered(::System::Object*  sender, ::System::EventArgs*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "OnScreenKeyboard_PointerEntered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Vuplex::WebView::Internal::KeyboardManager::OnScreenKeyboard_PointerExited(::System::Object*  sender, ::System::EventArgs*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "OnScreenKeyboard_PointerExited",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Vuplex::WebView::Internal::KeyboardManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::KeyboardManager::_removeWebViewPrefab(::Vuplex::WebView::BaseWebViewPrefab*  webViewPrefab)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "_removeWebViewPrefab",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::BaseWebViewPrefab*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, webViewPrefab);
}
inline void Vuplex::WebView::Internal::KeyboardManager::_setFocusedWebViewPrefab(::Vuplex::WebView::BaseWebViewPrefab*  webViewPrefab)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "_setFocusedWebViewPrefab",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::BaseWebViewPrefab*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, webViewPrefab);
}
inline void Vuplex::WebView::Internal::KeyboardManager::WebView_FocusChanged(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<bool>*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "WebView_FocusChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<bool>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Vuplex::WebView::Internal::KeyboardManager::WebView_ImeInputFieldPositionChanged(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2Int>*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "WebView_ImeInputFieldPositionChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2Int>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Vuplex::WebView::Internal::KeyboardManager::WebViewPrefab_PointerEntered(::System::Object*  sender, ::System::EventArgs*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "WebViewPrefab_PointerEntered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Vuplex::WebView::Internal::KeyboardManager::WebViewPrefab_PointerExited(::System::Object*  sender, ::System::EventArgs*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        "WebViewPrefab_PointerExited",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Vuplex::WebView::Internal::KeyboardManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::KeyboardManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::Internal::KeyboardManager* Vuplex::WebView::Internal::KeyboardManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::KeyboardManager*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::KeyboardManager::KeyboardManager()   {
}
