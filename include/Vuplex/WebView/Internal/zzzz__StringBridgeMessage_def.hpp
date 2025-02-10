#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/StringBridgeMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Vuplex/WebView/Internal/zzzz__BridgeMessage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StringBridgeMessage)
// Forward declare root types
namespace Vuplex::WebView::Internal {
class StringBridgeMessage;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::StringBridgeMessage);
// Dependencies Vuplex.WebView.Internal.BridgeMessage
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.StringBridgeMessage
class CORDL_TYPE StringBridgeMessage : public ::Vuplex::WebView::Internal::BridgeMessage {
public:
// Declarations
/// @brief Field value, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) ::StringW  value;

static inline ::Vuplex::WebView::Internal::StringBridgeMessage* New_ctor() ;

/// @brief Method ParseValue, addr 0x17c1ecc, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ParseValue(::StringW  serializedMessage) ;

constexpr ::StringW const& __cordl_internal_get_value() const;

constexpr ::StringW& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_value(::StringW  value) ;

/// @brief Method .ctor, addr 0x17c1f24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringBridgeMessage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringBridgeMessage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StringBridgeMessage(StringBridgeMessage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringBridgeMessage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringBridgeMessage(StringBridgeMessage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{257};

/// @brief Field value, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::StringBridgeMessage, ___value) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::StringBridgeMessage, 0x20>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::StringBridgeMessage);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::StringBridgeMessage*, "Vuplex.WebView.Internal", "StringBridgeMessage");
