#pragma once
// IWYU pragma private; include "Vuplex/WebView/TerminatedEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__TerminationType_def.hpp"
CORDL_MODULE_EXPORT(TerminatedEventArgs)
namespace Vuplex::WebView {
struct TerminationType;
}
// Forward declare root types
namespace Vuplex::WebView {
class TerminatedEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::TerminatedEventArgs);
// Dependencies System.EventArgs, Vuplex.WebView.TerminationType
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.TerminatedEventArgs
class CORDL_TYPE TerminatedEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief Field Type, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::Vuplex::WebView::TerminationType  Type;

static inline ::Vuplex::WebView::TerminatedEventArgs* New_ctor(::Vuplex::WebView::TerminationType  type) ;

constexpr ::Vuplex::WebView::TerminationType const& __cordl_internal_get_Type() const;

constexpr ::Vuplex::WebView::TerminationType& __cordl_internal_get_Type() ;

constexpr void __cordl_internal_set_Type(::Vuplex::WebView::TerminationType  value) ;

/// @brief Method .ctor, addr 0x16e3b4c, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::Vuplex::WebView::TerminationType  type) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerminatedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerminatedEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerminatedEventArgs(TerminatedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerminatedEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerminatedEventArgs(TerminatedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{186};

/// @brief Field Type, offset: 0x10, size: 0x4, def value: None
 ::Vuplex::WebView::TerminationType  ___Type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::TerminatedEventArgs, ___Type) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::TerminatedEventArgs, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::TerminatedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::TerminatedEventArgs*, "Vuplex.WebView", "TerminatedEventArgs");
