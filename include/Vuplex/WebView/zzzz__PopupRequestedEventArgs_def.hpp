#pragma once
// IWYU pragma private; include "Vuplex/WebView/PopupRequestedEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PopupRequestedEventArgs)
namespace Vuplex::WebView {
class IWebView;
}
// Forward declare root types
namespace Vuplex::WebView {
class PopupRequestedEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::PopupRequestedEventArgs);
// Dependencies System.EventArgs
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.PopupRequestedEventArgs
class CORDL_TYPE PopupRequestedEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief Field Url, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Url, put=__cordl_internal_set_Url)) ::StringW  Url;

/// @brief Field WebView, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_WebView, put=__cordl_internal_set_WebView)) ::Vuplex::WebView::IWebView*  WebView;

static inline ::Vuplex::WebView::PopupRequestedEventArgs* New_ctor(::StringW  url, ::Vuplex::WebView::IWebView*  webView) ;

constexpr ::StringW const& __cordl_internal_get_Url() const;

constexpr ::StringW& __cordl_internal_get_Url() ;

constexpr ::Vuplex::WebView::IWebView* const& __cordl_internal_get_WebView() const;

constexpr ::Vuplex::WebView::IWebView*& __cordl_internal_get_WebView() ;

constexpr void __cordl_internal_set_Url(::StringW  value) ;

constexpr void __cordl_internal_set_WebView(::Vuplex::WebView::IWebView*  value) ;

/// @brief Method .ctor, addr 0x16d2838, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  url, ::Vuplex::WebView::IWebView*  webView) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PopupRequestedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PopupRequestedEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PopupRequestedEventArgs(PopupRequestedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PopupRequestedEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PopupRequestedEventArgs(PopupRequestedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{180};

/// @brief Field Url, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Url;

/// @brief Field WebView, offset: 0x18, size: 0x8, def value: None
 ::Vuplex::WebView::IWebView*  ___WebView;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::PopupRequestedEventArgs, ___Url) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::PopupRequestedEventArgs, ___WebView) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::PopupRequestedEventArgs, 0x20>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::PopupRequestedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::PopupRequestedEventArgs*, "Vuplex.WebView", "PopupRequestedEventArgs");
