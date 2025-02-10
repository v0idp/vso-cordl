#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/AndroidWarnings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AndroidWarnings)
// Forward declare root types
namespace Vuplex::WebView::Internal {
class AndroidWarnings;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::AndroidWarnings);
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.AndroidWarnings
class CORDL_TYPE AndroidWarnings : public ::System::Object {
public:
// Declarations
/// @brief Method LogStreamingAssetsErrorAndGetWarningPageHtml, addr 0x16e7338, size 0x13c, virtual false, abstract: false, final false
static inline ::StringW LogStreamingAssetsErrorAndGetWarningPageHtml() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidWarnings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidWarnings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidWarnings(AndroidWarnings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidWarnings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidWarnings(AndroidWarnings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{223};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::AndroidWarnings, 0x10>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::AndroidWarnings);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::AndroidWarnings*, "Vuplex.WebView.Internal", "AndroidWarnings");
