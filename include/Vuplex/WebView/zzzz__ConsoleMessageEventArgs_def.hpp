#pragma once
// IWYU pragma private; include "Vuplex/WebView/ConsoleMessageEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__ConsoleMessageLevel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConsoleMessageEventArgs)
namespace Vuplex::WebView {
struct ConsoleMessageLevel;
}
// Forward declare root types
namespace Vuplex::WebView {
class ConsoleMessageEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::ConsoleMessageEventArgs);
// Dependencies System.EventArgs, Vuplex.WebView.ConsoleMessageLevel
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.ConsoleMessageEventArgs
class CORDL_TYPE ConsoleMessageEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief Field Level, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Level, put=__cordl_internal_set_Level)) ::Vuplex::WebView::ConsoleMessageLevel  Level;

/// @brief Field Line, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Line, put=__cordl_internal_set_Line)) int32_t  Line;

/// @brief Field Message, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Message, put=__cordl_internal_set_Message)) ::StringW  Message;

/// @brief Field Source, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Source, put=__cordl_internal_set_Source)) ::StringW  Source;

static inline ::Vuplex::WebView::ConsoleMessageEventArgs* New_ctor(::Vuplex::WebView::ConsoleMessageLevel  level, ::StringW  message, ::StringW  source, int32_t  line) ;

constexpr ::Vuplex::WebView::ConsoleMessageLevel const& __cordl_internal_get_Level() const;

constexpr ::Vuplex::WebView::ConsoleMessageLevel& __cordl_internal_get_Level() ;

constexpr int32_t const& __cordl_internal_get_Line() const;

constexpr int32_t& __cordl_internal_get_Line() ;

constexpr ::StringW const& __cordl_internal_get_Message() const;

constexpr ::StringW& __cordl_internal_get_Message() ;

constexpr ::StringW const& __cordl_internal_get_Source() const;

constexpr ::StringW& __cordl_internal_get_Source() ;

constexpr void __cordl_internal_set_Level(::Vuplex::WebView::ConsoleMessageLevel  value) ;

constexpr void __cordl_internal_set_Line(int32_t  value) ;

constexpr void __cordl_internal_set_Message(::StringW  value) ;

constexpr void __cordl_internal_set_Source(::StringW  value) ;

/// @brief Method .ctor, addr 0x16ddaf0, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::Vuplex::WebView::ConsoleMessageLevel  level, ::StringW  message, ::StringW  source, int32_t  line) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConsoleMessageEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConsoleMessageEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConsoleMessageEventArgs(ConsoleMessageEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConsoleMessageEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConsoleMessageEventArgs(ConsoleMessageEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{131};

/// @brief Field Level, offset: 0x10, size: 0x4, def value: None
 ::Vuplex::WebView::ConsoleMessageLevel  ___Level;

/// @brief Field Message, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Message;

/// @brief Field Source, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Source;

/// @brief Field Line, offset: 0x28, size: 0x4, def value: None
 int32_t  ___Line;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::ConsoleMessageEventArgs, ___Level) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::ConsoleMessageEventArgs, ___Message) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::ConsoleMessageEventArgs, ___Source) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::ConsoleMessageEventArgs, ___Line) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::ConsoleMessageEventArgs, 0x30>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::ConsoleMessageEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::ConsoleMessageEventArgs*, "Vuplex.WebView", "ConsoleMessageEventArgs");
