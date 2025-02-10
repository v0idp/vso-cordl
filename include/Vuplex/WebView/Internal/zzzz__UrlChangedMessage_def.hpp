#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/UrlChangedMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Vuplex/WebView/Internal/zzzz__BridgeMessage_def.hpp"
CORDL_MODULE_EXPORT(UrlChangedMessage)
namespace Vuplex::WebView::Internal {
class UrlAction;
}
// Forward declare root types
namespace Vuplex::WebView::Internal {
class UrlChangedMessage;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::UrlChangedMessage);
// Dependencies Vuplex.WebView.Internal.BridgeMessage
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.UrlChangedMessage
class CORDL_TYPE UrlChangedMessage : public ::Vuplex::WebView::Internal::BridgeMessage {
public:
// Declarations
/// @brief Field urlAction, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_urlAction, put=__cordl_internal_set_urlAction)) ::Vuplex::WebView::Internal::UrlAction*  urlAction;

static inline ::Vuplex::WebView::Internal::UrlChangedMessage* New_ctor() ;

constexpr ::Vuplex::WebView::Internal::UrlAction* const& __cordl_internal_get_urlAction() const;

constexpr ::Vuplex::WebView::Internal::UrlAction*& __cordl_internal_get_urlAction() ;

constexpr void __cordl_internal_set_urlAction(::Vuplex::WebView::Internal::UrlAction*  value) ;

/// @brief Method .ctor, addr 0x17c27e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UrlChangedMessage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UrlChangedMessage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UrlChangedMessage(UrlChangedMessage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UrlChangedMessage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UrlChangedMessage(UrlChangedMessage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{260};

/// @brief Field urlAction, offset: 0x18, size: 0x8, def value: None
 ::Vuplex::WebView::Internal::UrlAction*  ___urlAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::UrlChangedMessage, ___urlAction) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::UrlChangedMessage, 0x20>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::UrlChangedMessage);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::UrlChangedMessage*, "Vuplex.WebView.Internal", "UrlChangedMessage");
