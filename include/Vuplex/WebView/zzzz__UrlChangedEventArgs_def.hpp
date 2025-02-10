#pragma once
// IWYU pragma private; include "Vuplex/WebView/UrlChangedEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UrlChangedEventArgs)
// Forward declare root types
namespace Vuplex::WebView {
class UrlChangedEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::UrlChangedEventArgs);
// Dependencies System.EventArgs
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.UrlChangedEventArgs
class CORDL_TYPE UrlChangedEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief Field Title, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Title, put=__cordl_internal_set_Title)) ::StringW  Title;

/// @brief Field Type, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::StringW  Type;

/// @brief Field Url, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Url, put=__cordl_internal_set_Url)) ::StringW  Url;

static inline ::Vuplex::WebView::UrlChangedEventArgs* New_ctor(::StringW  url, ::StringW  type) ;

constexpr ::StringW const& __cordl_internal_get_Title() const;

constexpr ::StringW& __cordl_internal_get_Title() ;

constexpr ::StringW const& __cordl_internal_get_Type() const;

constexpr ::StringW& __cordl_internal_get_Type() ;

constexpr ::StringW const& __cordl_internal_get_Url() const;

constexpr ::StringW& __cordl_internal_get_Url() ;

constexpr void __cordl_internal_set_Title(::StringW  value) ;

constexpr void __cordl_internal_set_Type(::StringW  value) ;

constexpr void __cordl_internal_set_Url(::StringW  value) ;

/// @brief Method .ctor, addr 0x16e3434, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  url, ::StringW  type) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UrlChangedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UrlChangedEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UrlChangedEventArgs(UrlChangedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UrlChangedEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UrlChangedEventArgs(UrlChangedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{192};

/// @brief Field Url, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Url;

/// @brief Field Type, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Type;

/// @brief Field Title, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Title;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::UrlChangedEventArgs, ___Url) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::UrlChangedEventArgs, ___Type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::UrlChangedEventArgs, ___Title) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::UrlChangedEventArgs, 0x28>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::UrlChangedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::UrlChangedEventArgs*, "Vuplex.WebView", "UrlChangedEventArgs");
