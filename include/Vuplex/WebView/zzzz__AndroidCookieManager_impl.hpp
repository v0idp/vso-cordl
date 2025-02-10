#pragma once
// IWYU pragma private; include "Vuplex/WebView/AndroidCookieManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Vuplex/WebView/zzzz__ICookieManager_impl.hpp"
#include "Vuplex/WebView/zzzz__AndroidCookieManager_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Vuplex/WebView/zzzz__Cookie_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::AndroidCookieManager.get_Instance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Vuplex::WebView::AndroidCookieManager* (*)()>(&::Vuplex::WebView::AndroidCookieManager::get_Instance)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x16c9eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::AndroidCookieManager*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::AndroidCookieManager.DeleteCookies
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Vuplex::WebView::AndroidCookieManager::*)(::StringW, ::StringW)>(&::Vuplex::WebView::AndroidCookieManager::DeleteCookies)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x16c9f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::AndroidCookieManager*>::get(),
                        "DeleteCookies",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::AndroidCookieManager.GetCookies
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<::Vuplex::WebView::Cookie*,::Array<::Vuplex::WebView::Cookie*>*>>* (::Vuplex::WebView::AndroidCookieManager::*)(::StringW, ::StringW)>(&::Vuplex::WebView::AndroidCookieManager::GetCookies)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x16ca118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::AndroidCookieManager*>::get(),
                        "GetCookies",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::AndroidCookieManager.SetCookie
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Vuplex::WebView::AndroidCookieManager::*)(::Vuplex::WebView::Cookie*)>(&::Vuplex::WebView::AndroidCookieManager::SetCookie)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x16ca314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::AndroidCookieManager*>::get(),
                        "SetCookie",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Cookie*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::AndroidCookieManager._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::AndroidCookieManager::*)()>(&::Vuplex::WebView::AndroidCookieManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16c9f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::AndroidCookieManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Vuplex::WebView::AndroidCookieManager::setStaticF__instance(::Vuplex::WebView::AndroidCookieManager*  value)  {
::cordl_internals::setStaticField<::Vuplex::WebView::AndroidCookieManager*, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::AndroidCookieManager*>::get>(std::forward<::Vuplex::WebView::AndroidCookieManager*>(value));
}
inline ::Vuplex::WebView::AndroidCookieManager* Vuplex::WebView::AndroidCookieManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::Vuplex::WebView::AndroidCookieManager*, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::AndroidCookieManager*>::get>();
}
inline ::Vuplex::WebView::AndroidCookieManager* Vuplex::WebView::AndroidCookieManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::AndroidCookieManager*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Vuplex::WebView::AndroidCookieManager*, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* Vuplex::WebView::AndroidCookieManager::DeleteCookies(::StringW  url, ::StringW  cookieName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::AndroidCookieManager*>::get(),
                        "DeleteCookies",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, url, cookieName);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<::Vuplex::WebView::Cookie*,::Array<::Vuplex::WebView::Cookie*>*>>* Vuplex::WebView::AndroidCookieManager::GetCookies(::StringW  url, ::StringW  cookieName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::AndroidCookieManager*>::get(),
                        "GetCookies",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<::Vuplex::WebView::Cookie*,::Array<::Vuplex::WebView::Cookie*>*>>*, false>(this, ___internal_method, url, cookieName);
}
inline ::System::Threading::Tasks::Task_1<bool>* Vuplex::WebView::AndroidCookieManager::SetCookie(::Vuplex::WebView::Cookie*  cookie)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::AndroidCookieManager*>::get(),
                        "SetCookie",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Cookie*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, cookie);
}
inline void Vuplex::WebView::AndroidCookieManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::AndroidCookieManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::AndroidCookieManager* Vuplex::WebView::AndroidCookieManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::AndroidCookieManager*>());
}
/// @brief Convert operator to "::Vuplex::WebView::ICookieManager"
constexpr  Vuplex::WebView::AndroidCookieManager::operator ::Vuplex::WebView::ICookieManager*() noexcept {
return static_cast<::Vuplex::WebView::ICookieManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::Vuplex::WebView::ICookieManager"
constexpr ::Vuplex::WebView::ICookieManager* Vuplex::WebView::AndroidCookieManager::i___Vuplex__WebView__ICookieManager() noexcept {
return static_cast<::Vuplex::WebView::ICookieManager*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::AndroidCookieManager::AndroidCookieManager()   {
}
