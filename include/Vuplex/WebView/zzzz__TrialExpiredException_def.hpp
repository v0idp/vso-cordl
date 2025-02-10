#pragma once
// IWYU pragma private; include "Vuplex/WebView/TrialExpiredException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TrialExpiredException)
// Forward declare root types
namespace Vuplex::WebView {
class TrialExpiredException;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::TrialExpiredException);
// Dependencies System.Exception
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.TrialExpiredException
class CORDL_TYPE TrialExpiredException : public ::System::Exception {
public:
// Declarations
static inline ::Vuplex::WebView::TrialExpiredException* New_ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x16d3f24, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrialExpiredException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrialExpiredException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrialExpiredException(TrialExpiredException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrialExpiredException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrialExpiredException(TrialExpiredException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{190};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::TrialExpiredException, 0x90>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::TrialExpiredException);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::TrialExpiredException*, "Vuplex.WebView", "TrialExpiredException");
