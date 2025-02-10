#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/StringWithIdBridgeMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Vuplex/WebView/Internal/zzzz__BridgeMessage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StringWithIdBridgeMessage)
// Forward declare root types
namespace Vuplex::WebView::Internal {
class StringWithIdBridgeMessage;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::StringWithIdBridgeMessage);
// Dependencies Vuplex.WebView.Internal.BridgeMessage
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.StringWithIdBridgeMessage
class CORDL_TYPE StringWithIdBridgeMessage : public ::Vuplex::WebView::Internal::BridgeMessage {
public:
// Declarations
/// @brief Field id, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) ::StringW  id;

/// @brief Field value, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) ::StringW  value;

static inline ::Vuplex::WebView::Internal::StringWithIdBridgeMessage* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_id() const;

constexpr ::StringW& __cordl_internal_get_id() ;

constexpr ::StringW const& __cordl_internal_get_value() const;

constexpr ::StringW& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_id(::StringW  value) ;

constexpr void __cordl_internal_set_value(::StringW  value) ;

/// @brief Method .ctor, addr 0x17c1f2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringWithIdBridgeMessage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringWithIdBridgeMessage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StringWithIdBridgeMessage(StringWithIdBridgeMessage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringWithIdBridgeMessage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringWithIdBridgeMessage(StringWithIdBridgeMessage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{258};

/// @brief Field id, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___id;

/// @brief Field value, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::StringWithIdBridgeMessage, ___id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::StringWithIdBridgeMessage, ___value) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::StringWithIdBridgeMessage, 0x28>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::StringWithIdBridgeMessage);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::StringWithIdBridgeMessage*, "Vuplex.WebView.Internal", "StringWithIdBridgeMessage");
