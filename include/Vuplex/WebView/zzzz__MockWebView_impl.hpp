#pragma once
// IWYU pragma private; include "Vuplex/WebView/MockWebView.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "Vuplex/WebView/zzzz__IWebView_impl.hpp"
#include "Vuplex/WebView/zzzz__WebPluginType_impl.hpp"
#include "Vuplex/WebView/zzzz__MockWebView_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "Vuplex/WebView/zzzz__ConsoleMessageEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__Cookie_def.hpp"
#include "Vuplex/WebView/zzzz__EventArgs_1_def.hpp"
#include "Vuplex/WebView/zzzz__FocusedInputFieldChangedEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__LoadFailedEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__ProgressChangedEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__TerminatedEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__UrlChangedEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__WebPluginType_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.add_CloseRequested
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler*)>(&::Vuplex::WebView::MockWebView::add_CloseRequested)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x16e0a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_CloseRequested",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.remove_CloseRequested
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler*)>(&::Vuplex::WebView::MockWebView::remove_CloseRequested)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x16e0b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_CloseRequested",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.add_ConsoleMessageLogged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*)>(&::Vuplex::WebView::MockWebView::add_ConsoleMessageLogged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e0bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_ConsoleMessageLogged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.remove_ConsoleMessageLogged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*)>(&::Vuplex::WebView::MockWebView::remove_ConsoleMessageLogged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e0c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_ConsoleMessageLogged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.add_FocusChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*)>(&::Vuplex::WebView::MockWebView::add_FocusChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e0d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_FocusChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.remove_FocusChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*)>(&::Vuplex::WebView::MockWebView::remove_FocusChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e0dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_FocusChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.add_FocusedInputFieldChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*)>(&::Vuplex::WebView::MockWebView::add_FocusedInputFieldChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e0e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_FocusedInputFieldChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.remove_FocusedInputFieldChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*)>(&::Vuplex::WebView::MockWebView::remove_FocusedInputFieldChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e0f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_FocusedInputFieldChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.add_LoadFailed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*)>(&::Vuplex::WebView::MockWebView::add_LoadFailed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e0fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_LoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.remove_LoadFailed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*)>(&::Vuplex::WebView::MockWebView::remove_LoadFailed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e108c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_LoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.add_LoadProgressChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*)>(&::Vuplex::WebView::MockWebView::add_LoadProgressChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e113c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_LoadProgressChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.remove_LoadProgressChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*)>(&::Vuplex::WebView::MockWebView::remove_LoadProgressChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e11ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_LoadProgressChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.add_MessageEmitted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*)>(&::Vuplex::WebView::MockWebView::add_MessageEmitted)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e129c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_MessageEmitted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.remove_MessageEmitted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*)>(&::Vuplex::WebView::MockWebView::remove_MessageEmitted)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e134c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_MessageEmitted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.add_Terminated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*)>(&::Vuplex::WebView::MockWebView::add_Terminated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e13fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_Terminated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.remove_Terminated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*)>(&::Vuplex::WebView::MockWebView::remove_Terminated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e14ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_Terminated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.add_TitleChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*)>(&::Vuplex::WebView::MockWebView::add_TitleChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e155c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_TitleChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.remove_TitleChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*)>(&::Vuplex::WebView::MockWebView::remove_TitleChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e160c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_TitleChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.add_UrlChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*)>(&::Vuplex::WebView::MockWebView::add_UrlChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e16bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_UrlChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.remove_UrlChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*)>(&::Vuplex::WebView::MockWebView::remove_UrlChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e176c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_UrlChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.get_IsDisposed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::get_IsDisposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e181c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "get_IsDisposed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.set_IsDisposed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(bool)>(&::Vuplex::WebView::MockWebView::set_IsDisposed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16e1824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "set_IsDisposed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.get_IsInitialized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::get_IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e1830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "get_IsInitialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.set_IsInitialized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(bool)>(&::Vuplex::WebView::MockWebView::set_IsInitialized)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16e1838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "set_IsInitialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.get_PageLoadScripts
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::get_PageLoadScripts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e1844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "get_PageLoadScripts",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.get_PluginType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Vuplex::WebView::WebPluginType (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::get_PluginType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e184c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "get_PluginType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.get_Size
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::get_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e1854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "get_Size",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.set_Size
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::UnityEngine::Vector2Int)>(&::Vuplex::WebView::MockWebView::set_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e185c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "set_Size",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.get_Texture
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::get_Texture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e1864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "get_Texture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.set_Texture
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::UnityEngine::Texture2D*)>(&::Vuplex::WebView::MockWebView::set_Texture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e186c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "set_Texture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.get_Title
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::get_Title)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e1874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "get_Title",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.set_Title
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::StringW)>(&::Vuplex::WebView::MockWebView::set_Title)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e187c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "set_Title",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.get_Url
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::get_Url)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e1884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "get_Url",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.set_Url
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::StringW)>(&::Vuplex::WebView::MockWebView::set_Url)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e188c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "set_Url",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.CanGoBack
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::CanGoBack)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x16e1894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "CanGoBack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.CanGoForward
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::CanGoForward)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x16e1970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "CanGoForward",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.CaptureScreenshot
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::CaptureScreenshot)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x16e19f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "CaptureScreenshot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.Click
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(int32_t, int32_t, bool)>(&::Vuplex::WebView::MockWebView::Click)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x16e1aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Click",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.Click
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::UnityEngine::Vector2, bool)>(&::Vuplex::WebView::MockWebView::Click)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x16e1d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Click",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.Copy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::Copy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x16e1f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Copy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.CreateMaterial
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::CreateMaterial)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x16e1f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "CreateMaterial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.Cut
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::Cut)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x16e2110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Cut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.DeleteCookies
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)(::StringW, ::StringW)>(&::Vuplex::WebView::MockWebView::DeleteCookies)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x16e01f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "DeleteCookies",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::Dispose)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x16e2150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.ExecuteJavaScript
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Vuplex::WebView::MockWebView::*)(::StringW)>(&::Vuplex::WebView::MockWebView::ExecuteJavaScript)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x16e221c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "ExecuteJavaScript",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.ExecuteJavaScript
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::StringW, ::System::Action_1<::StringW>*)>(&::Vuplex::WebView::MockWebView::ExecuteJavaScript)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e2304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "ExecuteJavaScript",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.GetCookies
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<::Vuplex::WebView::Cookie*,::Array<::Vuplex::WebView::Cookie*>*>>* (*)(::StringW, ::StringW)>(&::Vuplex::WebView::MockWebView::GetCookies)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x16e0374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "GetCookies",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.GetRawTextureData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::GetRawTextureData)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x16e2434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "GetRawTextureData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.GoBack
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::GoBack)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x16e24e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "GoBack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.GoForward
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::GoForward)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x16e2528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "GoForward",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Vuplex::WebView::MockWebView::*)(int32_t, int32_t)>(&::Vuplex::WebView::MockWebView::Init)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x16e2568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.Instantiate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Vuplex::WebView::MockWebView> (*)()>(&::Vuplex::WebView::MockWebView::Instantiate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x16e09b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Instantiate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.LoadHtml
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::StringW)>(&::Vuplex::WebView::MockWebView::LoadHtml)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x16e2718;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                                  87
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.LoadUrl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::StringW)>(&::Vuplex::WebView::MockWebView::LoadUrl)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x16e290c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                                  88
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.LoadUrl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Vuplex::WebView::MockWebView::LoadUrl)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x16e2920;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.NormalizedToPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (::Vuplex::WebView::MockWebView::*)(::UnityEngine::Vector2)>(&::Vuplex::WebView::MockWebView::NormalizedToPoint)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x16e29a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "NormalizedToPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.Paste
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::Paste)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x16e2b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Paste",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.PointToNormalized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::Vuplex::WebView::MockWebView::*)(int32_t, int32_t)>(&::Vuplex::WebView::MockWebView::PointToNormalized)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x16e2b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "PointToNormalized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.PostMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::StringW)>(&::Vuplex::WebView::MockWebView::PostMessage)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x16e2b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "PostMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.Reload
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::Reload)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x16e2bfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Reload",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.Resize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(int32_t, int32_t)>(&::Vuplex::WebView::MockWebView::Resize)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x16e2c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Resize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.Scroll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(int32_t, int32_t)>(&::Vuplex::WebView::MockWebView::Scroll)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x16e2d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Scroll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.Scroll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::UnityEngine::Vector2)>(&::Vuplex::WebView::MockWebView::Scroll)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x16e2e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Scroll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.Scroll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::Vuplex::WebView::MockWebView::Scroll)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x16e2ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Scroll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.SelectAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::SelectAll)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x16e3034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "SelectAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.SendKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::StringW)>(&::Vuplex::WebView::MockWebView::SendKey)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x16e3074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "SendKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.SetCookie
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)(::Vuplex::WebView::Cookie*)>(&::Vuplex::WebView::MockWebView::SetCookie)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x16e055c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "SetCookie",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Cookie*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.SetDefaultBackgroundEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(bool)>(&::Vuplex::WebView::MockWebView::SetDefaultBackgroundEnabled)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x16e30e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "SetDefaultBackgroundEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.SetFocused
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(bool)>(&::Vuplex::WebView::MockWebView::SetFocused)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x16e316c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "SetFocused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.SetRenderingEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(bool)>(&::Vuplex::WebView::MockWebView::SetRenderingEnabled)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x16e3260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "SetRenderingEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.StopLoad
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::StopLoad)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x16e32e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "StopLoad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.WaitForNextPageLoadToFinish
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::WaitForNextPageLoadToFinish)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x16e3328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "WaitForNextPageLoadToFinish",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.ZoomIn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::ZoomIn)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x16e33b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "ZoomIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.ZoomOut
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::ZoomOut)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x16e33f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "ZoomOut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView._assertValidNormalizedPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::UnityEngine::Vector2)>(&::Vuplex::WebView::MockWebView::_assertValidNormalizedPoint)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x16e1e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "_assertValidNormalizedPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView._handlePageLoad
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::StringW)>(&::Vuplex::WebView::MockWebView::_handlePageLoad)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x16e27a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "_handlePageLoad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView._log
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::Vuplex::WebView::MockWebView::_log)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x16e1918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "_log",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView._truncateIfNeeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Vuplex::WebView::MockWebView::*)(::StringW)>(&::Vuplex::WebView::MockWebView::_truncateIfNeeded)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x16e23b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "_truncateIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.Blur
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::Blur)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16e3520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Blur",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.CanGoBack
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::Action_1<bool>*)>(&::Vuplex::WebView::MockWebView::CanGoBack)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16e3524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "CanGoBack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.CanGoForward
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::Action_1<bool>*)>(&::Vuplex::WebView::MockWebView::CanGoForward)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16e3528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "CanGoForward",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.CaptureScreenshot
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*)>(&::Vuplex::WebView::MockWebView::CaptureScreenshot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16e352c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "CaptureScreenshot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.DisableViewUpdates
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::DisableViewUpdates)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16e3530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "DisableViewUpdates",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.EnableViewUpdates
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::EnableViewUpdates)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16e3534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "EnableViewUpdates",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.Focus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::Focus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16e3538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Focus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.GetRawTextureData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*)>(&::Vuplex::WebView::MockWebView::GetRawTextureData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16e353c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "GetRawTextureData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.HandleKeyboardInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::StringW)>(&::Vuplex::WebView::MockWebView::HandleKeyboardInput)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16e3540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "HandleKeyboardInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::UnityEngine::Texture2D*, float_t, float_t)>(&::Vuplex::WebView::MockWebView::Init)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16e3544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::UnityEngine::Texture2D*, float_t, float_t, ::UnityEngine::Texture2D*)>(&::Vuplex::WebView::MockWebView::Init)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16e3548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.add_PageLoadFailed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler*)>(&::Vuplex::WebView::MockWebView::add_PageLoadFailed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x16e354c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_PageLoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.remove_PageLoadFailed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler*)>(&::Vuplex::WebView::MockWebView::remove_PageLoadFailed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x16e35e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_PageLoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.get_Resolution
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::get_Resolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e3684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "get_Resolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.SetResolution
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(float_t)>(&::Vuplex::WebView::MockWebView::SetResolution)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16e368c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "SetResolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.get_SizeInPixels
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::get_SizeInPixels)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x16e3690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "get_SizeInPixels",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.add_VideoRectChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*)>(&::Vuplex::WebView::MockWebView::add_VideoRectChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e36a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_VideoRectChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.remove_VideoRectChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*)>(&::Vuplex::WebView::MockWebView::remove_VideoRectChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16e3750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_VideoRectChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView.get_VideoTexture
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::get_VideoTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e3800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "get_VideoTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockWebView._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockWebView::*)()>(&::Vuplex::WebView::MockWebView::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x16e3808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::EventHandler*& Vuplex::WebView::MockWebView::__cordl_internal_get_CloseRequested()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CloseRequested;
}
constexpr ::System::EventHandler* const& Vuplex::WebView::MockWebView::__cordl_internal_get_CloseRequested() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CloseRequested;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set_CloseRequested(::System::EventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CloseRequested)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*& Vuplex::WebView::MockWebView::__cordl_internal_get_ConsoleMessageLogged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConsoleMessageLogged;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>* const& Vuplex::WebView::MockWebView::__cordl_internal_get_ConsoleMessageLogged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConsoleMessageLogged;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set_ConsoleMessageLogged(::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ConsoleMessageLogged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*& Vuplex::WebView::MockWebView::__cordl_internal_get_FocusChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FocusChanged;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>* const& Vuplex::WebView::MockWebView::__cordl_internal_get_FocusChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FocusChanged;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set_FocusChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FocusChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*& Vuplex::WebView::MockWebView::__cordl_internal_get_FocusedInputFieldChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FocusedInputFieldChanged;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>* const& Vuplex::WebView::MockWebView::__cordl_internal_get_FocusedInputFieldChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FocusedInputFieldChanged;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set_FocusedInputFieldChanged(::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FocusedInputFieldChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*& Vuplex::WebView::MockWebView::__cordl_internal_get_LoadFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoadFailed;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>* const& Vuplex::WebView::MockWebView::__cordl_internal_get_LoadFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoadFailed;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set_LoadFailed(::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LoadFailed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*& Vuplex::WebView::MockWebView::__cordl_internal_get_LoadProgressChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoadProgressChanged;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>* const& Vuplex::WebView::MockWebView::__cordl_internal_get_LoadProgressChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoadProgressChanged;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set_LoadProgressChanged(::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LoadProgressChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*& Vuplex::WebView::MockWebView::__cordl_internal_get_MessageEmitted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MessageEmitted;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>* const& Vuplex::WebView::MockWebView::__cordl_internal_get_MessageEmitted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MessageEmitted;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set_MessageEmitted(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MessageEmitted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*& Vuplex::WebView::MockWebView::__cordl_internal_get_Terminated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Terminated;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>* const& Vuplex::WebView::MockWebView::__cordl_internal_get_Terminated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Terminated;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set_Terminated(::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Terminated)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*& Vuplex::WebView::MockWebView::__cordl_internal_get_TitleChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleChanged;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>* const& Vuplex::WebView::MockWebView::__cordl_internal_get_TitleChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleChanged;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set_TitleChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TitleChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*& Vuplex::WebView::MockWebView::__cordl_internal_get_UrlChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UrlChanged;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>* const& Vuplex::WebView::MockWebView::__cordl_internal_get_UrlChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UrlChanged;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set_UrlChanged(::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UrlChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Vuplex::WebView::MockWebView::__cordl_internal_get__IsDisposed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDisposed_k__BackingField;
}
constexpr bool const& Vuplex::WebView::MockWebView::__cordl_internal_get__IsDisposed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDisposed_k__BackingField;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set__IsDisposed_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsDisposed_k__BackingField = value;
}
constexpr bool& Vuplex::WebView::MockWebView::__cordl_internal_get__IsInitialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInitialized_k__BackingField;
}
constexpr bool const& Vuplex::WebView::MockWebView::__cordl_internal_get__IsInitialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInitialized_k__BackingField;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set__IsInitialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsInitialized_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Vuplex::WebView::MockWebView::__cordl_internal_get__PageLoadScripts_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PageLoadScripts_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Vuplex::WebView::MockWebView::__cordl_internal_get__PageLoadScripts_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PageLoadScripts_k__BackingField;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set__PageLoadScripts_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____PageLoadScripts_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Vuplex::WebView::WebPluginType& Vuplex::WebView::MockWebView::__cordl_internal_get__PluginType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PluginType_k__BackingField;
}
constexpr ::Vuplex::WebView::WebPluginType const& Vuplex::WebView::MockWebView::__cordl_internal_get__PluginType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PluginType_k__BackingField;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set__PluginType_k__BackingField(::Vuplex::WebView::WebPluginType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PluginType_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2Int& Vuplex::WebView::MockWebView::__cordl_internal_get__Size_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Size_k__BackingField;
}
constexpr ::UnityEngine::Vector2Int const& Vuplex::WebView::MockWebView::__cordl_internal_get__Size_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Size_k__BackingField;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set__Size_k__BackingField(::UnityEngine::Vector2Int  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Size_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Vuplex::WebView::MockWebView::__cordl_internal_get__Texture_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Texture_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Vuplex::WebView::MockWebView::__cordl_internal_get__Texture_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Texture_k__BackingField;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set__Texture_k__BackingField(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Texture_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Vuplex::WebView::MockWebView::__cordl_internal_get__Title_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Title_k__BackingField;
}
constexpr ::StringW const& Vuplex::WebView::MockWebView::__cordl_internal_get__Title_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Title_k__BackingField;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set__Title_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Title_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Vuplex::WebView::MockWebView::__cordl_internal_get__Url_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Url_k__BackingField;
}
constexpr ::StringW const& Vuplex::WebView::MockWebView::__cordl_internal_get__Url_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Url_k__BackingField;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set__Url_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Url_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rect& Vuplex::WebView::MockWebView::__cordl_internal_get__moreDetailsClickRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moreDetailsClickRect;
}
constexpr ::UnityEngine::Rect const& Vuplex::WebView::MockWebView::__cordl_internal_get__moreDetailsClickRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moreDetailsClickRect;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set__moreDetailsClickRect(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____moreDetailsClickRect = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Vuplex::WebView::MockWebView::__cordl_internal_get__pageLoadFinishedTaskSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageLoadFinishedTaskSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Vuplex::WebView::MockWebView::__cordl_internal_get__pageLoadFinishedTaskSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageLoadFinishedTaskSource;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set__pageLoadFinishedTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pageLoadFinishedTaskSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler*& Vuplex::WebView::MockWebView::__cordl_internal_get_PageLoadFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageLoadFailed;
}
constexpr ::System::EventHandler* const& Vuplex::WebView::MockWebView::__cordl_internal_get_PageLoadFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageLoadFailed;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set_PageLoadFailed(::System::EventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PageLoadFailed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& Vuplex::WebView::MockWebView::__cordl_internal_get__Resolution_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resolution_k__BackingField;
}
constexpr float_t const& Vuplex::WebView::MockWebView::__cordl_internal_get__Resolution_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resolution_k__BackingField;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set__Resolution_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Resolution_k__BackingField = value;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*& Vuplex::WebView::MockWebView::__cordl_internal_get_VideoRectChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VideoRectChanged;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>* const& Vuplex::WebView::MockWebView::__cordl_internal_get_VideoRectChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VideoRectChanged;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set_VideoRectChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___VideoRectChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Vuplex::WebView::MockWebView::__cordl_internal_get__VideoTexture_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VideoTexture_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Vuplex::WebView::MockWebView::__cordl_internal_get__VideoTexture_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VideoTexture_k__BackingField;
}
constexpr void Vuplex::WebView::MockWebView::__cordl_internal_set__VideoTexture_k__BackingField(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____VideoTexture_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::MockWebView::add_CloseRequested(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_CloseRequested",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::MockWebView::remove_CloseRequested(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_CloseRequested",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::MockWebView::add_ConsoleMessageLogged(::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_ConsoleMessageLogged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::MockWebView::remove_ConsoleMessageLogged(::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_ConsoleMessageLogged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::MockWebView::add_FocusChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_FocusChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::MockWebView::remove_FocusChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_FocusChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::MockWebView::add_FocusedInputFieldChanged(::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_FocusedInputFieldChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::MockWebView::remove_FocusedInputFieldChanged(::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_FocusedInputFieldChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::MockWebView::add_LoadFailed(::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_LoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::MockWebView::remove_LoadFailed(::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_LoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::MockWebView::add_LoadProgressChanged(::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_LoadProgressChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::MockWebView::remove_LoadProgressChanged(::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_LoadProgressChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::MockWebView::add_MessageEmitted(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_MessageEmitted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::MockWebView::remove_MessageEmitted(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_MessageEmitted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::MockWebView::add_Terminated(::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_Terminated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::MockWebView::remove_Terminated(::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_Terminated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::MockWebView::add_TitleChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_TitleChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::MockWebView::remove_TitleChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_TitleChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::MockWebView::add_UrlChanged(::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_UrlChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::MockWebView::remove_UrlChanged(::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_UrlChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Vuplex::WebView::MockWebView::get_IsDisposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "get_IsDisposed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Vuplex::WebView::MockWebView::set_IsDisposed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "set_IsDisposed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Vuplex::WebView::MockWebView::get_IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "get_IsInitialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Vuplex::WebView::MockWebView::set_IsInitialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "set_IsInitialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* Vuplex::WebView::MockWebView::get_PageLoadScripts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "get_PageLoadScripts",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::WebPluginType Vuplex::WebView::MockWebView::get_PluginType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "get_PluginType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Vuplex::WebView::WebPluginType, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2Int Vuplex::WebView::MockWebView::get_Size()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "get_Size",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(this, ___internal_method);
}
inline void Vuplex::WebView::MockWebView::set_Size(::UnityEngine::Vector2Int  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "set_Size",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Texture2D> Vuplex::WebView::MockWebView::get_Texture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "get_Texture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(this, ___internal_method);
}
inline void Vuplex::WebView::MockWebView::set_Texture(::UnityEngine::Texture2D*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "set_Texture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Vuplex::WebView::MockWebView::get_Title()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "get_Title",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Vuplex::WebView::MockWebView::set_Title(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "set_Title",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Vuplex::WebView::MockWebView::get_Url()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "get_Url",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Vuplex::WebView::MockWebView::set_Url(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "set_Url",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task_1<bool>* Vuplex::WebView::MockWebView::CanGoBack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "CanGoBack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* Vuplex::WebView::MockWebView::CanGoForward()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "CanGoForward",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* Vuplex::WebView::MockWebView::CaptureScreenshot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "CaptureScreenshot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*, false>(this, ___internal_method);
}
inline void Vuplex::WebView::MockWebView::Click(int32_t  xInPixels, int32_t  yInPixels, bool  preventStealingFocus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Click",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xInPixels, yInPixels, preventStealingFocus);
}
inline void Vuplex::WebView::MockWebView::Click(::UnityEngine::Vector2  point, bool  preventStealingFocus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Click",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, point, preventStealingFocus);
}
inline void Vuplex::WebView::MockWebView::Copy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Copy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> Vuplex::WebView::MockWebView::CreateMaterial()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "CreateMaterial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method);
}
inline void Vuplex::WebView::MockWebView::Cut()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Cut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* Vuplex::WebView::MockWebView::DeleteCookies(::StringW  url, ::StringW  cookieName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "DeleteCookies",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(nullptr, ___internal_method, url, cookieName);
}
inline void Vuplex::WebView::MockWebView::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Vuplex::WebView::MockWebView::ExecuteJavaScript(::StringW  javaScript)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "ExecuteJavaScript",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method, javaScript);
}
inline void Vuplex::WebView::MockWebView::ExecuteJavaScript(::StringW  javaScript, ::System::Action_1<::StringW>*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "ExecuteJavaScript",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, javaScript, callback);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<::Vuplex::WebView::Cookie*,::Array<::Vuplex::WebView::Cookie*>*>>* Vuplex::WebView::MockWebView::GetCookies(::StringW  url, ::StringW  cookieName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "GetCookies",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<::Vuplex::WebView::Cookie*,::Array<::Vuplex::WebView::Cookie*>*>>*, false>(nullptr, ___internal_method, url, cookieName);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* Vuplex::WebView::MockWebView::GetRawTextureData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "GetRawTextureData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*, false>(this, ___internal_method);
}
inline void Vuplex::WebView::MockWebView::GoBack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "GoBack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::MockWebView::GoForward()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "GoForward",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Vuplex::WebView::MockWebView::Init(int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, width, height);
}
inline ::UnityW<::Vuplex::WebView::MockWebView> Vuplex::WebView::MockWebView::Instantiate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Instantiate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Vuplex::WebView::MockWebView>, false>(nullptr, ___internal_method);
}
inline void Vuplex::WebView::MockWebView::LoadHtml(::StringW  html)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                    87
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, html);
}
inline void Vuplex::WebView::MockWebView::LoadUrl(::StringW  url)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                    88
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, url);
}
inline void Vuplex::WebView::MockWebView::LoadUrl(::StringW  url, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  additionalHttpHeaders)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                    89
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, url, additionalHttpHeaders);
}
inline ::UnityEngine::Vector2Int Vuplex::WebView::MockWebView::NormalizedToPoint(::UnityEngine::Vector2  normalizedPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "NormalizedToPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(this, ___internal_method, normalizedPoint);
}
inline void Vuplex::WebView::MockWebView::Paste()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Paste",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Vuplex::WebView::MockWebView::PointToNormalized(int32_t  xInPixels, int32_t  yInPixels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "PointToNormalized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, xInPixels, yInPixels);
}
inline void Vuplex::WebView::MockWebView::PostMessage(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "PostMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void Vuplex::WebView::MockWebView::Reload()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Reload",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::MockWebView::Resize(int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Resize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height);
}
inline void Vuplex::WebView::MockWebView::Scroll(int32_t  scrollDeltaX, int32_t  scrollDeltaY)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Scroll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scrollDeltaX, scrollDeltaY);
}
inline void Vuplex::WebView::MockWebView::Scroll(::UnityEngine::Vector2  delta)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Scroll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, delta);
}
inline void Vuplex::WebView::MockWebView::Scroll(::UnityEngine::Vector2  delta, ::UnityEngine::Vector2  point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Scroll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, delta, point);
}
inline void Vuplex::WebView::MockWebView::SelectAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "SelectAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::MockWebView::SendKey(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "SendKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline ::System::Threading::Tasks::Task_1<bool>* Vuplex::WebView::MockWebView::SetCookie(::Vuplex::WebView::Cookie*  cookie)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "SetCookie",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Cookie*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(nullptr, ___internal_method, cookie);
}
inline void Vuplex::WebView::MockWebView::SetDefaultBackgroundEnabled(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "SetDefaultBackgroundEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enabled);
}
inline void Vuplex::WebView::MockWebView::SetFocused(bool  focused)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "SetFocused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, focused);
}
inline void Vuplex::WebView::MockWebView::SetRenderingEnabled(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "SetRenderingEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enabled);
}
inline void Vuplex::WebView::MockWebView::StopLoad()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "StopLoad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Vuplex::WebView::MockWebView::WaitForNextPageLoadToFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "WaitForNextPageLoadToFinish",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void Vuplex::WebView::MockWebView::ZoomIn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "ZoomIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::MockWebView::ZoomOut()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "ZoomOut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::MockWebView::_assertValidNormalizedPoint(::UnityEngine::Vector2  normalizedPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "_assertValidNormalizedPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, normalizedPoint);
}
inline void Vuplex::WebView::MockWebView::_handlePageLoad(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "_handlePageLoad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, url);
}
inline void Vuplex::WebView::MockWebView::_log(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "_log",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
inline ::StringW Vuplex::WebView::MockWebView::_truncateIfNeeded(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "_truncateIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, str);
}
inline void Vuplex::WebView::MockWebView::Blur()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Blur",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::MockWebView::CanGoBack(::System::Action_1<bool>*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "CanGoBack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
inline void Vuplex::WebView::MockWebView::CanGoForward(::System::Action_1<bool>*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "CanGoForward",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
inline void Vuplex::WebView::MockWebView::CaptureScreenshot(::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "CaptureScreenshot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
inline void Vuplex::WebView::MockWebView::DisableViewUpdates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "DisableViewUpdates",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::MockWebView::EnableViewUpdates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "EnableViewUpdates",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::MockWebView::Focus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Focus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::MockWebView::GetRawTextureData(::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "GetRawTextureData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
inline void Vuplex::WebView::MockWebView::HandleKeyboardInput(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "HandleKeyboardInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline void Vuplex::WebView::MockWebView::Init(::UnityEngine::Texture2D*  texture, float_t  width, float_t  height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, texture, width, height);
}
inline void Vuplex::WebView::MockWebView::Init(::UnityEngine::Texture2D*  texture, float_t  width, float_t  height, ::UnityEngine::Texture2D*  videoTexture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, texture, width, height, videoTexture);
}
inline void Vuplex::WebView::MockWebView::add_PageLoadFailed(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_PageLoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::MockWebView::remove_PageLoadFailed(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_PageLoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t Vuplex::WebView::MockWebView::get_Resolution()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "get_Resolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void Vuplex::WebView::MockWebView::SetResolution(float_t  pixelsPerUnityUnit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "SetResolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pixelsPerUnityUnit);
}
inline ::UnityEngine::Vector2 Vuplex::WebView::MockWebView::get_SizeInPixels()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "get_SizeInPixels",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void Vuplex::WebView::MockWebView::add_VideoRectChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "add_VideoRectChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::MockWebView::remove_VideoRectChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "remove_VideoRectChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Texture2D> Vuplex::WebView::MockWebView::get_VideoTexture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        "get_VideoTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(this, ___internal_method);
}
inline void Vuplex::WebView::MockWebView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockWebView*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::MockWebView* Vuplex::WebView::MockWebView::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::MockWebView*>());
}
/// @brief Convert operator to "::Vuplex::WebView::IWebView"
constexpr  Vuplex::WebView::MockWebView::operator ::Vuplex::WebView::IWebView*() noexcept {
return static_cast<::Vuplex::WebView::IWebView*>(static_cast<void*>(this));
}
/// @brief Convert to "::Vuplex::WebView::IWebView"
constexpr ::Vuplex::WebView::IWebView* Vuplex::WebView::MockWebView::i___Vuplex__WebView__IWebView() noexcept {
return static_cast<::Vuplex::WebView::IWebView*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::MockWebView::MockWebView()   {
}
