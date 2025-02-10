#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/ConsoleBridgeMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Vuplex/WebView/Internal/zzzz__BridgeMessage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConsoleBridgeMessage)
namespace Vuplex::WebView {
class ConsoleMessageEventArgs;
}
namespace Vuplex::WebView {
struct ConsoleMessageLevel;
}
// Forward declare root types
namespace Vuplex::WebView::Internal {
class ConsoleBridgeMessage;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::ConsoleBridgeMessage);
// Dependencies Vuplex.WebView.Internal.BridgeMessage
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.ConsoleBridgeMessage
class CORDL_TYPE ConsoleBridgeMessage : public ::Vuplex::WebView::Internal::BridgeMessage {
public:
// Declarations
/// @brief Field level, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_level, put=__cordl_internal_set_level)) ::StringW  level;

/// @brief Field line, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_line, put=__cordl_internal_set_line)) int32_t  line;

/// @brief Field message, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_message, put=__cordl_internal_set_message)) ::StringW  message;

/// @brief Field source, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::StringW  source;

static inline ::Vuplex::WebView::Internal::ConsoleBridgeMessage* New_ctor() ;

/// @brief Method ToEventArgs, addr 0x17bc448, size 0x8c, virtual false, abstract: false, final false
inline ::Vuplex::WebView::ConsoleMessageEventArgs* ToEventArgs() ;

constexpr ::StringW const& __cordl_internal_get_level() const;

constexpr ::StringW& __cordl_internal_get_level() ;

constexpr int32_t const& __cordl_internal_get_line() const;

constexpr int32_t& __cordl_internal_get_line() ;

constexpr ::StringW const& __cordl_internal_get_message() const;

constexpr ::StringW& __cordl_internal_get_message() ;

constexpr ::StringW const& __cordl_internal_get_source() const;

constexpr ::StringW& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_level(::StringW  value) ;

constexpr void __cordl_internal_set_line(int32_t  value) ;

constexpr void __cordl_internal_set_message(::StringW  value) ;

constexpr void __cordl_internal_set_source(::StringW  value) ;

/// @brief Method .ctor, addr 0x17bc684, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _parseMessageLevel, addr 0x17bc4d4, size 0x118, virtual false, abstract: false, final false
inline ::Vuplex::WebView::ConsoleMessageLevel _parseMessageLevel(::StringW  levelString) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConsoleBridgeMessage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConsoleBridgeMessage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConsoleBridgeMessage(ConsoleBridgeMessage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConsoleBridgeMessage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConsoleBridgeMessage(ConsoleBridgeMessage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{240};

/// @brief Field message, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___message;

/// @brief Field level, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___level;

/// @brief Field source, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___source;

/// @brief Field line, offset: 0x30, size: 0x4, def value: None
 int32_t  ___line;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::ConsoleBridgeMessage, ___message) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::ConsoleBridgeMessage, ___level) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::ConsoleBridgeMessage, ___source) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::ConsoleBridgeMessage, ___line) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::ConsoleBridgeMessage, 0x38>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::ConsoleBridgeMessage);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::ConsoleBridgeMessage*, "Vuplex.WebView.Internal", "ConsoleBridgeMessage");
