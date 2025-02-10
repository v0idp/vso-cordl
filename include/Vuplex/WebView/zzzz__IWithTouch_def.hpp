#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithTouch.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWithTouch)
namespace Vuplex::WebView {
struct TouchEvent;
}
// Forward declare root types
namespace Vuplex::WebView {
class IWithTouch;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::IWithTouch);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.IWithTouch
class CORDL_TYPE IWithTouch {
public:
// Declarations
/// @brief Method SendTouchEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendTouchEvent(::Vuplex::WebView::TouchEvent  touchEvent) ;

// Ctor Parameters [CppParam { name: "", ty: "IWithTouch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWithTouch(IWithTouch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{167};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::IWithTouch);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::IWithTouch*, "Vuplex.WebView", "IWithTouch");
