#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/BridgeMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BridgeMessage)
// Forward declare root types
namespace Vuplex::WebView::Internal {
class BridgeMessage;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::BridgeMessage);
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.BridgeMessage
class CORDL_TYPE BridgeMessage : public ::System::Object {
public:
// Declarations
/// @brief Field type, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::StringW  type;

static inline ::Vuplex::WebView::Internal::BridgeMessage* New_ctor() ;

/// @brief Method ParseType, addr 0x17bbf10, size 0xcc, virtual false, abstract: false, final false
static inline ::StringW ParseType(::StringW  serializedMessage) ;

constexpr ::StringW const& __cordl_internal_get_type() const;

constexpr ::StringW& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_type(::StringW  value) ;

/// @brief Method .ctor, addr 0x17bbfdc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BridgeMessage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BridgeMessage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BridgeMessage(BridgeMessage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BridgeMessage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BridgeMessage(BridgeMessage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{236};

/// @brief Field type, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::BridgeMessage, ___type) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::BridgeMessage, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::BridgeMessage);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::BridgeMessage*, "Vuplex.WebView.Internal", "BridgeMessage");
