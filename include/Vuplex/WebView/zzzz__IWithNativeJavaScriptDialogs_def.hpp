#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithNativeJavaScriptDialogs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWithNativeJavaScriptDialogs)
// Forward declare root types
namespace Vuplex::WebView {
class IWithNativeJavaScriptDialogs;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::IWithNativeJavaScriptDialogs);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.IWithNativeJavaScriptDialogs
class CORDL_TYPE IWithNativeJavaScriptDialogs {
public:
// Declarations
/// @brief Method SetNativeJavaScriptDialogsEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetNativeJavaScriptDialogsEnabled(bool  enabled) ;

// Ctor Parameters [CppParam { name: "", ty: "IWithNativeJavaScriptDialogs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWithNativeJavaScriptDialogs(IWithNativeJavaScriptDialogs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{160};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::IWithNativeJavaScriptDialogs);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::IWithNativeJavaScriptDialogs*, "Vuplex.WebView", "IWithNativeJavaScriptDialogs");
