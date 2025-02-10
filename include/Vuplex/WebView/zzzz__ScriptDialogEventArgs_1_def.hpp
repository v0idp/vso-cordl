#pragma once
// IWYU pragma private; include "Vuplex/WebView/ScriptDialogEventArgs_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ScriptDialogEventArgs_1)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Vuplex::WebView {
template<typename T>
class ScriptDialogEventArgs_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Vuplex::WebView::ScriptDialogEventArgs_1);
// Dependencies System.EventArgs
namespace Vuplex::WebView {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Vuplex.WebView.ScriptDialogEventArgs`1<T>
class CORDL_TYPE ScriptDialogEventArgs_1 : public ::System::EventArgs {
public:
// Declarations
/// @brief Field Continue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Continue, put=__cordl_internal_set_Continue)) ::System::Action_1<T>*  Continue;

/// @brief Field Message, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Message, put=__cordl_internal_set_Message)) ::StringW  Message;

static inline ::Vuplex::WebView::ScriptDialogEventArgs_1<T>* New_ctor(::StringW  message, ::System::Action_1<T>*  continueCallback) ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get_Continue() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get_Continue() ;

constexpr ::StringW const& __cordl_internal_get_Message() const;

constexpr ::StringW& __cordl_internal_get_Message() ;

constexpr void __cordl_internal_set_Continue(::System::Action_1<T>*  value) ;

constexpr void __cordl_internal_set_Message(::StringW  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Action_1<T>*  continueCallback) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptDialogEventArgs_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptDialogEventArgs_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptDialogEventArgs_1(ScriptDialogEventArgs_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptDialogEventArgs_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptDialogEventArgs_1(ScriptDialogEventArgs_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{184};

/// @brief Field Message, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Message;

/// @brief Field Continue, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<T>*  ___Continue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Vuplex::WebView::ScriptDialogEventArgs_1, "Vuplex.WebView", "ScriptDialogEventArgs`1");
