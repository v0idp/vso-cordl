#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithFileSelection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWithFileSelection)
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace Vuplex::WebView {
class FileSelectionEventArgs;
}
// Forward declare root types
namespace Vuplex::WebView {
class IWithFileSelection;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::IWithFileSelection);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.IWithFileSelection
class CORDL_TYPE IWithFileSelection {
public:
// Declarations
/// @brief Method add_FileSelectionRequested, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_FileSelectionRequested(::System::EventHandler_1<::Vuplex::WebView::FileSelectionEventArgs*>*  value) ;

/// @brief Method remove_FileSelectionRequested, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_FileSelectionRequested(::System::EventHandler_1<::Vuplex::WebView::FileSelectionEventArgs*>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IWithFileSelection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWithFileSelection(IWithFileSelection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{151};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::IWithFileSelection);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::IWithFileSelection*, "Vuplex.WebView", "IWithFileSelection");
