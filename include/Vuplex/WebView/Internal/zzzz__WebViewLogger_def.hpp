#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/WebViewLogger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WebViewLogger)
// Forward declare root types
namespace Vuplex::WebView::Internal {
class WebViewLogger;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::WebViewLogger);
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.WebViewLogger
class CORDL_TYPE WebViewLogger : public ::System::Object {
public:
// Declarations
/// @brief Method Log, addr 0x17c40cc, size 0x98, virtual false, abstract: false, final false
static inline void Log(::StringW  message, bool  enableFormatting) ;

/// @brief Method LogError, addr 0x17bc5ec, size 0x98, virtual false, abstract: false, final false
static inline void LogError(::StringW  message, bool  enableFormatting) ;

/// @brief Method LogErrorWithoutFormatting, addr 0x17c4234, size 0x8c, virtual false, abstract: false, final false
static inline void LogErrorWithoutFormatting(::StringW  message) ;

/// @brief Method LogTip, addr 0x17c42c0, size 0x54, virtual false, abstract: false, final false
static inline void LogTip(::StringW  message) ;

/// @brief Method LogWarning, addr 0x17bb358, size 0x98, virtual false, abstract: false, final false
static inline void LogWarning(::StringW  message, bool  enableFormatting) ;

/// @brief Method LogWarningWithoutFormatting, addr 0x17c4314, size 0x8c, virtual false, abstract: false, final false
static inline void LogWarningWithoutFormatting(::StringW  message) ;

/// @brief Method _format, addr 0x17c4164, size 0xd0, virtual false, abstract: false, final false
static inline ::StringW _format(::StringW  originalMessage) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebViewLogger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebViewLogger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebViewLogger(WebViewLogger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebViewLogger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebViewLogger(WebViewLogger const& ) = delete;

/// @brief Field EM_CLOSING_REPLACEMENT offset 0xffffffff size 0x8
static constexpr ::ConstString  EM_CLOSING_REPLACEMENT{u""};

/// @brief Field EM_OPENING_REPLACEMENT offset 0xffffffff size 0x8
static constexpr ::ConstString  EM_OPENING_REPLACEMENT{u""};

/// @brief Field PREFIX offset 0xffffffff size 0x8
static constexpr ::ConstString  PREFIX{u"[3D WebView] "};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{268};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::WebViewLogger, 0x10>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::WebViewLogger);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::WebViewLogger*, "Vuplex.WebView.Internal", "WebViewLogger");
