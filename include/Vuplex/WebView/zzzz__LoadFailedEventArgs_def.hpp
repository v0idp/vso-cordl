#pragma once
// IWYU pragma private; include "Vuplex/WebView/LoadFailedEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LoadFailedEventArgs)
// Forward declare root types
namespace Vuplex::WebView {
class LoadFailedEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::LoadFailedEventArgs);
// Dependencies System.EventArgs
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.LoadFailedEventArgs
class CORDL_TYPE LoadFailedEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief Field NativeErrorCode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_NativeErrorCode, put=__cordl_internal_set_NativeErrorCode)) ::StringW  NativeErrorCode;

/// @brief Field Url, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Url, put=__cordl_internal_set_Url)) ::StringW  Url;

static inline ::Vuplex::WebView::LoadFailedEventArgs* New_ctor(::StringW  nativeErrorCode, ::StringW  url) ;

/// @brief Method ToString, addr 0x16e00f8, size 0x6c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_NativeErrorCode() const;

constexpr ::StringW& __cordl_internal_get_NativeErrorCode() ;

constexpr ::StringW const& __cordl_internal_get_Url() const;

constexpr ::StringW& __cordl_internal_get_Url() ;

constexpr void __cordl_internal_set_NativeErrorCode(::StringW  value) ;

constexpr void __cordl_internal_set_Url(::StringW  value) ;

/// @brief Method .ctor, addr 0x16e0088, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  nativeErrorCode, ::StringW  url) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadFailedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadFailedEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadFailedEventArgs(LoadFailedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadFailedEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadFailedEventArgs(LoadFailedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{170};

/// @brief Field NativeErrorCode, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___NativeErrorCode;

/// @brief Field Url, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Url;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::LoadFailedEventArgs, ___NativeErrorCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::LoadFailedEventArgs, ___Url) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::LoadFailedEventArgs, 0x20>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::LoadFailedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::LoadFailedEventArgs*, "Vuplex.WebView", "LoadFailedEventArgs");
