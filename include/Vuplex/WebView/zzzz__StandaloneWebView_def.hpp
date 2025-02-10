#pragma once
// IWYU pragma private; include "Vuplex/WebView/StandaloneWebView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StandaloneWebView)
// Forward declare root types
namespace Vuplex::WebView {
class StandaloneWebView;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::StandaloneWebView);
// Dependencies System.Object
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.StandaloneWebView
class CORDL_TYPE StandaloneWebView : public ::System::Object {
public:
// Declarations
static inline ::Vuplex::WebView::StandaloneWebView* New_ctor() ;

/// @brief Method .ctor, addr 0x16e5fb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandaloneWebView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandaloneWebView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandaloneWebView(StandaloneWebView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandaloneWebView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandaloneWebView(StandaloneWebView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{209};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::StandaloneWebView, 0x10>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::StandaloneWebView);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::StandaloneWebView*, "Vuplex.WebView", "StandaloneWebView");
