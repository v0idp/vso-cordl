#pragma once
// IWYU pragma private; include "Vuplex/WebView/FocusedInputFieldChangedEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__FocusedInputFieldType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FocusedInputFieldChangedEventArgs)
namespace Vuplex::WebView {
struct FocusedInputFieldType;
}
// Forward declare root types
namespace Vuplex::WebView {
class FocusedInputFieldChangedEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::FocusedInputFieldChangedEventArgs);
// Dependencies System.EventArgs, Vuplex.WebView.FocusedInputFieldType
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.FocusedInputFieldChangedEventArgs
class CORDL_TYPE FocusedInputFieldChangedEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief Field Type, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::Vuplex::WebView::FocusedInputFieldType  Type;

static inline ::Vuplex::WebView::FocusedInputFieldChangedEventArgs* New_ctor(::Vuplex::WebView::FocusedInputFieldType  type) ;

/// @brief Method ParseType, addr 0x16df8e8, size 0xf4, virtual false, abstract: false, final false
static inline ::Vuplex::WebView::FocusedInputFieldType ParseType(::StringW  typeString) ;

constexpr ::Vuplex::WebView::FocusedInputFieldType const& __cordl_internal_get_Type() const;

constexpr ::Vuplex::WebView::FocusedInputFieldType& __cordl_internal_get_Type() ;

constexpr void __cordl_internal_set_Type(::Vuplex::WebView::FocusedInputFieldType  value) ;

/// @brief Method .ctor, addr 0x16df87c, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::Vuplex::WebView::FocusedInputFieldType  type) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FocusedInputFieldChangedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FocusedInputFieldChangedEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FocusedInputFieldChangedEventArgs(FocusedInputFieldChangedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FocusedInputFieldChangedEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FocusedInputFieldChangedEventArgs(FocusedInputFieldChangedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{139};

/// @brief Field Type, offset: 0x10, size: 0x4, def value: None
 ::Vuplex::WebView::FocusedInputFieldType  ___Type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::FocusedInputFieldChangedEventArgs, ___Type) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::FocusedInputFieldChangedEventArgs, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::FocusedInputFieldChangedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::FocusedInputFieldChangedEventArgs*, "Vuplex.WebView", "FocusedInputFieldChangedEventArgs");
