#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithPdfCreation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IWithPdfCreation)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace Vuplex::WebView {
class IWithPdfCreation;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::IWithPdfCreation);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.IWithPdfCreation
class CORDL_TYPE IWithPdfCreation {
public:
// Declarations
/// @brief Method CreatePdf, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* CreatePdf() ;

// Ctor Parameters [CppParam { name: "", ty: "IWithPdfCreation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWithPdfCreation(IWithPdfCreation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{162};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::IWithPdfCreation);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::IWithPdfCreation*, "Vuplex.WebView", "IWithPdfCreation");
