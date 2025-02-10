#pragma once
// IWYU pragma private; include "Vuplex/WebView/FileSelectionEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileSelectionEventArgs)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Vuplex::WebView {
class FileSelectionEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::FileSelectionEventArgs);
// Dependencies System.EventArgs
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.FileSelectionEventArgs
class CORDL_TYPE FileSelectionEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief Field AcceptFilters, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AcceptFilters, put=__cordl_internal_set_AcceptFilters)) ::ArrayW<::StringW,::Array<::StringW>*>  AcceptFilters;

/// @brief Field Cancel, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Cancel, put=__cordl_internal_set_Cancel)) ::System::Action*  Cancel;

/// @brief Field Continue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Continue, put=__cordl_internal_set_Continue)) ::System::Action_1<::ArrayW<::StringW,::Array<::StringW>*>>*  Continue;

/// @brief Field MultipleAllowed, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_MultipleAllowed, put=__cordl_internal_set_MultipleAllowed)) bool  MultipleAllowed;

static inline ::Vuplex::WebView::FileSelectionEventArgs* New_ctor(::ArrayW<::StringW,::Array<::StringW>*>  acceptFilters, bool  multipleAllowed, ::System::Action_1<::ArrayW<::StringW,::Array<::StringW>*>>*  continueCallback, ::System::Action*  cancelCallback) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __cordl_internal_get_AcceptFilters() const;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __cordl_internal_get_AcceptFilters() ;

constexpr ::System::Action* const& __cordl_internal_get_Cancel() const;

constexpr ::System::Action*& __cordl_internal_get_Cancel() ;

constexpr ::System::Action_1<::ArrayW<::StringW,::Array<::StringW>*>>* const& __cordl_internal_get_Continue() const;

constexpr ::System::Action_1<::ArrayW<::StringW,::Array<::StringW>*>>*& __cordl_internal_get_Continue() ;

constexpr bool const& __cordl_internal_get_MultipleAllowed() const;

constexpr bool& __cordl_internal_get_MultipleAllowed() ;

constexpr void __cordl_internal_set_AcceptFilters(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr void __cordl_internal_set_Cancel(::System::Action*  value) ;

constexpr void __cordl_internal_set_Continue(::System::Action_1<::ArrayW<::StringW,::Array<::StringW>*>>*  value) ;

constexpr void __cordl_internal_set_MultipleAllowed(bool  value) ;

/// @brief Method .ctor, addr 0x16df7f0, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::StringW,::Array<::StringW>*>  acceptFilters, bool  multipleAllowed, ::System::Action_1<::ArrayW<::StringW,::Array<::StringW>*>>*  continueCallback, ::System::Action*  cancelCallback) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileSelectionEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileSelectionEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileSelectionEventArgs(FileSelectionEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileSelectionEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileSelectionEventArgs(FileSelectionEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{138};

/// @brief Field AcceptFilters, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW,::Array<::StringW>*>  ___AcceptFilters;

/// @brief Field MultipleAllowed, offset: 0x18, size: 0x1, def value: None
 bool  ___MultipleAllowed;

/// @brief Field Continue, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::ArrayW<::StringW,::Array<::StringW>*>>*  ___Continue;

/// @brief Field Cancel, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ___Cancel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::FileSelectionEventArgs, ___AcceptFilters) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::FileSelectionEventArgs, ___MultipleAllowed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::FileSelectionEventArgs, ___Continue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::FileSelectionEventArgs, ___Cancel) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::FileSelectionEventArgs, 0x30>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::FileSelectionEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::FileSelectionEventArgs*, "Vuplex.WebView", "FileSelectionEventArgs");
