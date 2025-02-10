#pragma once
// IWYU pragma private; include "Vuplex/WebView/ScriptDialogEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ScriptDialogEventArgs)
namespace System {
class Action;
}
// Forward declare root types
namespace Vuplex::WebView {
class ScriptDialogEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::ScriptDialogEventArgs);
// Dependencies System.EventArgs
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.ScriptDialogEventArgs
class CORDL_TYPE ScriptDialogEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief Field Continue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Continue, put=__cordl_internal_set_Continue)) ::System::Action*  Continue;

/// @brief Field Message, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Message, put=__cordl_internal_set_Message)) ::StringW  Message;

static inline ::Vuplex::WebView::ScriptDialogEventArgs* New_ctor(::StringW  message, ::System::Action*  continueCallback) ;

constexpr ::System::Action* const& __cordl_internal_get_Continue() const;

constexpr ::System::Action*& __cordl_internal_get_Continue() ;

constexpr ::StringW const& __cordl_internal_get_Message() const;

constexpr ::StringW& __cordl_internal_get_Message() ;

constexpr void __cordl_internal_set_Continue(::System::Action*  value) ;

constexpr void __cordl_internal_set_Message(::StringW  value) ;

/// @brief Method .ctor, addr 0x16e3adc, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Action*  continueCallback) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptDialogEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptDialogEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptDialogEventArgs(ScriptDialogEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptDialogEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptDialogEventArgs(ScriptDialogEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{183};

/// @brief Field Message, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Message;

/// @brief Field Continue, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___Continue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::ScriptDialogEventArgs, ___Message) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::ScriptDialogEventArgs, ___Continue) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::ScriptDialogEventArgs, 0x20>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::ScriptDialogEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::ScriptDialogEventArgs*, "Vuplex.WebView", "ScriptDialogEventArgs");
