#pragma once
// IWYU pragma private; include "Vuplex/WebView/ICookieManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ICookieManager)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace Vuplex::WebView {
class Cookie;
}
// Forward declare root types
namespace Vuplex::WebView {
class ICookieManager;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::ICookieManager);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.ICookieManager
class CORDL_TYPE ICookieManager {
public:
// Declarations
/// @brief Method DeleteCookies, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* DeleteCookies(::StringW  url, ::StringW  cookieName) ;

/// @brief Method GetCookies, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<::Vuplex::WebView::Cookie*,::Array<::Vuplex::WebView::Cookie*>*>>* GetCookies(::StringW  url, ::StringW  cookieName) ;

/// @brief Method SetCookie, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* SetCookie(::Vuplex::WebView::Cookie*  cookie) ;

// Ctor Parameters [CppParam { name: "", ty: "ICookieManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICookieManager(ICookieManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{141};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::ICookieManager);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::ICookieManager*, "Vuplex.WebView", "ICookieManager");
