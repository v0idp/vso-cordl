#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithDownloads.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWithDownloads)
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace Vuplex::WebView {
class DownloadChangedEventArgs;
}
// Forward declare root types
namespace Vuplex::WebView {
class IWithDownloads;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::IWithDownloads);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.IWithDownloads
class CORDL_TYPE IWithDownloads {
public:
// Declarations
/// @brief Method SetDownloadsEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetDownloadsEnabled(bool  enabled) ;

/// @brief Method add_DownloadProgressChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_DownloadProgressChanged(::System::EventHandler_1<::Vuplex::WebView::DownloadChangedEventArgs*>*  value) ;

/// @brief Method remove_DownloadProgressChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_DownloadProgressChanged(::System::EventHandler_1<::Vuplex::WebView::DownloadChangedEventArgs*>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IWithDownloads", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWithDownloads(IWithDownloads const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{148};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::IWithDownloads);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::IWithDownloads*, "Vuplex.WebView", "IWithDownloads");
