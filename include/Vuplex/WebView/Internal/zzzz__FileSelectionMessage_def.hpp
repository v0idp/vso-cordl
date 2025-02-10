#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/FileSelectionMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileSelectionMessage)
// Forward declare root types
namespace Vuplex::WebView::Internal {
class FileSelectionMessage;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::FileSelectionMessage);
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.FileSelectionMessage
class CORDL_TYPE FileSelectionMessage : public ::System::Object {
public:
// Declarations
/// @brief Field AcceptFilters, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AcceptFilters, put=__cordl_internal_set_AcceptFilters)) ::ArrayW<::StringW,::Array<::StringW>*>  AcceptFilters;

/// @brief Field MultipleAllowed, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_MultipleAllowed, put=__cordl_internal_set_MultipleAllowed)) bool  MultipleAllowed;

/// @brief Method FromJson, addr 0x17bca8c, size 0x48, virtual false, abstract: false, final false
static inline ::Vuplex::WebView::Internal::FileSelectionMessage* FromJson(::StringW  json) ;

static inline ::Vuplex::WebView::Internal::FileSelectionMessage* New_ctor() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __cordl_internal_get_AcceptFilters() const;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __cordl_internal_get_AcceptFilters() ;

constexpr bool const& __cordl_internal_get_MultipleAllowed() const;

constexpr bool& __cordl_internal_get_MultipleAllowed() ;

constexpr void __cordl_internal_set_AcceptFilters(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr void __cordl_internal_set_MultipleAllowed(bool  value) ;

/// @brief Method .ctor, addr 0x17bcad4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileSelectionMessage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileSelectionMessage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileSelectionMessage(FileSelectionMessage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileSelectionMessage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileSelectionMessage(FileSelectionMessage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{244};

/// @brief Field AcceptFilters, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW,::Array<::StringW>*>  ___AcceptFilters;

/// @brief Field MultipleAllowed, offset: 0x18, size: 0x1, def value: None
 bool  ___MultipleAllowed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::FileSelectionMessage, ___AcceptFilters) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::FileSelectionMessage, ___MultipleAllowed) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::FileSelectionMessage, 0x20>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::FileSelectionMessage);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::FileSelectionMessage*, "Vuplex.WebView.Internal", "FileSelectionMessage");
