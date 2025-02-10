#pragma once
// IWYU pragma private; include "Vuplex/WebView/PageLoadFailedException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PageLoadFailedException)
// Forward declare root types
namespace Vuplex::WebView {
class PageLoadFailedException;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::PageLoadFailedException);
// Dependencies System.Exception
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.PageLoadFailedException
class CORDL_TYPE PageLoadFailedException : public ::System::Exception {
public:
// Declarations
static inline ::Vuplex::WebView::PageLoadFailedException* New_ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x16e38b4, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PageLoadFailedException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PageLoadFailedException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PageLoadFailedException(PageLoadFailedException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PageLoadFailedException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PageLoadFailedException(PageLoadFailedException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{176};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::PageLoadFailedException, 0x90>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::PageLoadFailedException);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::PageLoadFailedException*, "Vuplex.WebView", "PageLoadFailedException");
