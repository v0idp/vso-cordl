#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithDeepLinking.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWithDeepLinking)
// Forward declare root types
namespace Vuplex::WebView {
class IWithDeepLinking;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::IWithDeepLinking);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.IWithDeepLinking
class CORDL_TYPE IWithDeepLinking {
public:
// Declarations
/// @brief Method SetDeepLinkingEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetDeepLinkingEnabled(bool  enabled) ;

// Ctor Parameters [CppParam { name: "", ty: "IWithDeepLinking", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWithDeepLinking(IWithDeepLinking const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{147};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::IWithDeepLinking);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::IWithDeepLinking*, "Vuplex.WebView", "IWithDeepLinking");
