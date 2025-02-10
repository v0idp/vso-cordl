#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithPopups.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWithPopups)
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace Vuplex::WebView {
struct PopupMode;
}
namespace Vuplex::WebView {
class PopupRequestedEventArgs;
}
// Forward declare root types
namespace Vuplex::WebView {
class IWithPopups;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::IWithPopups);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.IWithPopups
class CORDL_TYPE IWithPopups {
public:
// Declarations
/// @brief Method SetPopupMode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetPopupMode(::Vuplex::WebView::PopupMode  popupMode) ;

/// @brief Method add_PopupRequested, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_PopupRequested(::System::EventHandler_1<::Vuplex::WebView::PopupRequestedEventArgs*>*  value) ;

/// @brief Method remove_PopupRequested, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_PopupRequested(::System::EventHandler_1<::Vuplex::WebView::PopupRequestedEventArgs*>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IWithPopups", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWithPopups(IWithPopups const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{165};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::IWithPopups);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::IWithPopups*, "Vuplex.WebView", "IWithPopups");
