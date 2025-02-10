#pragma once
// IWYU pragma private; include "Vuplex/WebView/AndroidCookieManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Vuplex/WebView/zzzz__ICookieManager_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AndroidCookieManager)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace Vuplex::WebView {
class Cookie;
}
// Forward declare root types
namespace Vuplex::WebView {
class AndroidCookieManager;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::AndroidCookieManager);
// Dependencies System.Object, Vuplex.WebView.ICookieManager
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.AndroidCookieManager
class CORDL_TYPE AndroidCookieManager : public ::System::Object {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::Vuplex::WebView::AndroidCookieManager*  _instance;

/// @brief Convert operator to "::Vuplex::WebView::ICookieManager"
constexpr operator  ::Vuplex::WebView::ICookieManager*() noexcept;

/// @brief Method DeleteCookies, addr 0x16c9f30, size 0x64, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<bool>* DeleteCookies(::StringW  url, ::StringW  cookieName) ;

/// @brief Method GetCookies, addr 0x16ca118, size 0x64, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::ArrayW<::Vuplex::WebView::Cookie*,::Array<::Vuplex::WebView::Cookie*>*>>* GetCookies(::StringW  url, ::StringW  cookieName) ;

static inline ::Vuplex::WebView::AndroidCookieManager* New_ctor() ;

/// @brief Method SetCookie, addr 0x16ca314, size 0x54, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<bool>* SetCookie(::Vuplex::WebView::Cookie*  cookie) ;

/// @brief Method .ctor, addr 0x16c9f28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Vuplex::WebView::AndroidCookieManager* getStaticF__instance() ;

/// @brief Method get_Instance, addr 0x16c9eb0, size 0x78, virtual false, abstract: false, final false
static inline ::Vuplex::WebView::AndroidCookieManager* get_Instance() ;

/// @brief Convert to "::Vuplex::WebView::ICookieManager"
constexpr ::Vuplex::WebView::ICookieManager* i___Vuplex__WebView__ICookieManager() noexcept;

static inline void setStaticF__instance(::Vuplex::WebView::AndroidCookieManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidCookieManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidCookieManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidCookieManager(AndroidCookieManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidCookieManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidCookieManager(AndroidCookieManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{98};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::AndroidCookieManager, 0x10>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::AndroidCookieManager);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::AndroidCookieManager*, "Vuplex.WebView", "AndroidCookieManager");
