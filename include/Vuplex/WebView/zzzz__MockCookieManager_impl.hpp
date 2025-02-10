#pragma once
// IWYU pragma private; include "Vuplex/WebView/MockCookieManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Vuplex/WebView/zzzz__ICookieManager_impl.hpp"
#include "Vuplex/WebView/zzzz__MockCookieManager_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Vuplex/WebView/zzzz__Cookie_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::MockCookieManager.get_Instance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Vuplex::WebView::MockCookieManager* (*)()>(&::Vuplex::WebView::MockCookieManager::get_Instance)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x16e0164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockCookieManager*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockCookieManager.DeleteCookies
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Vuplex::WebView::MockCookieManager::*)(::StringW, ::StringW)>(&::Vuplex::WebView::MockCookieManager::DeleteCookies)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16e01e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockCookieManager*>::get(),
                        "DeleteCookies",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockCookieManager.GetCookies
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<::Vuplex::WebView::Cookie*,::Array<::Vuplex::WebView::Cookie*>*>>* (::Vuplex::WebView::MockCookieManager::*)(::StringW, ::StringW)>(&::Vuplex::WebView::MockCookieManager::GetCookies)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16e0368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockCookieManager*>::get(),
                        "GetCookies",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockCookieManager.SetCookie
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Vuplex::WebView::MockCookieManager::*)(::Vuplex::WebView::Cookie*)>(&::Vuplex::WebView::MockCookieManager::SetCookie)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e0554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockCookieManager*>::get(),
                        "SetCookie",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Cookie*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::MockCookieManager._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::MockCookieManager::*)()>(&::Vuplex::WebView::MockCookieManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e01dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockCookieManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Vuplex::WebView::MockCookieManager::setStaticF__instance(::Vuplex::WebView::MockCookieManager*  value)  {
::cordl_internals::setStaticField<::Vuplex::WebView::MockCookieManager*, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockCookieManager*>::get>(std::forward<::Vuplex::WebView::MockCookieManager*>(value));
}
inline ::Vuplex::WebView::MockCookieManager* Vuplex::WebView::MockCookieManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::Vuplex::WebView::MockCookieManager*, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockCookieManager*>::get>();
}
inline ::Vuplex::WebView::MockCookieManager* Vuplex::WebView::MockCookieManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockCookieManager*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Vuplex::WebView::MockCookieManager*, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* Vuplex::WebView::MockCookieManager::DeleteCookies(::StringW  url, ::StringW  cookieName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockCookieManager*>::get(),
                        "DeleteCookies",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, url, cookieName);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<::Vuplex::WebView::Cookie*,::Array<::Vuplex::WebView::Cookie*>*>>* Vuplex::WebView::MockCookieManager::GetCookies(::StringW  url, ::StringW  cookieName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockCookieManager*>::get(),
                        "GetCookies",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<::Vuplex::WebView::Cookie*,::Array<::Vuplex::WebView::Cookie*>*>>*, false>(this, ___internal_method, url, cookieName);
}
inline ::System::Threading::Tasks::Task_1<bool>* Vuplex::WebView::MockCookieManager::SetCookie(::Vuplex::WebView::Cookie*  cookie)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockCookieManager*>::get(),
                        "SetCookie",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Cookie*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, cookie);
}
inline void Vuplex::WebView::MockCookieManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::MockCookieManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::MockCookieManager* Vuplex::WebView::MockCookieManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::MockCookieManager*>());
}
/// @brief Convert operator to "::Vuplex::WebView::ICookieManager"
constexpr  Vuplex::WebView::MockCookieManager::operator ::Vuplex::WebView::ICookieManager*() noexcept {
return static_cast<::Vuplex::WebView::ICookieManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::Vuplex::WebView::ICookieManager"
constexpr ::Vuplex::WebView::ICookieManager* Vuplex::WebView::MockCookieManager::i___Vuplex__WebView__ICookieManager() noexcept {
return static_cast<::Vuplex::WebView::ICookieManager*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::MockCookieManager::MockCookieManager()   {
}
