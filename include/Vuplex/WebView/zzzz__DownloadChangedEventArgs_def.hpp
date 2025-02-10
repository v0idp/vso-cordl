#pragma once
// IWYU pragma private; include "Vuplex/WebView/DownloadChangedEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__ProgressChangeType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DownloadChangedEventArgs)
namespace Vuplex::WebView {
struct ProgressChangeType;
}
// Forward declare root types
namespace Vuplex::WebView {
class DownloadChangedEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::DownloadChangedEventArgs);
// Dependencies System.EventArgs, Vuplex.WebView.ProgressChangeType
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.DownloadChangedEventArgs
class CORDL_TYPE DownloadChangedEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief Field ContentType, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ContentType, put=__cordl_internal_set_ContentType)) ::StringW  ContentType;

/// @brief Field FilePath, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_FilePath, put=__cordl_internal_set_FilePath)) ::StringW  FilePath;

/// @brief Field Id, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Id, put=__cordl_internal_set_Id)) ::StringW  Id;

/// @brief Field Progress, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Progress, put=__cordl_internal_set_Progress)) float_t  Progress;

/// @brief Field Type, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::Vuplex::WebView::ProgressChangeType  Type;

/// @brief Field Url, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Url, put=__cordl_internal_set_Url)) ::StringW  Url;

static inline ::Vuplex::WebView::DownloadChangedEventArgs* New_ctor(::StringW  contentType, ::StringW  filePath, ::StringW  id, float_t  progress, ::Vuplex::WebView::ProgressChangeType  type, ::StringW  url) ;

constexpr ::StringW const& __cordl_internal_get_ContentType() const;

constexpr ::StringW& __cordl_internal_get_ContentType() ;

constexpr ::StringW const& __cordl_internal_get_FilePath() const;

constexpr ::StringW& __cordl_internal_get_FilePath() ;

constexpr ::StringW const& __cordl_internal_get_Id() const;

constexpr ::StringW& __cordl_internal_get_Id() ;

constexpr float_t const& __cordl_internal_get_Progress() const;

constexpr float_t& __cordl_internal_get_Progress() ;

constexpr ::Vuplex::WebView::ProgressChangeType const& __cordl_internal_get_Type() const;

constexpr ::Vuplex::WebView::ProgressChangeType& __cordl_internal_get_Type() ;

constexpr ::StringW const& __cordl_internal_get_Url() const;

constexpr ::StringW& __cordl_internal_get_Url() ;

constexpr void __cordl_internal_set_ContentType(::StringW  value) ;

constexpr void __cordl_internal_set_FilePath(::StringW  value) ;

constexpr void __cordl_internal_set_Id(::StringW  value) ;

constexpr void __cordl_internal_set_Progress(float_t  value) ;

constexpr void __cordl_internal_set_Type(::Vuplex::WebView::ProgressChangeType  value) ;

constexpr void __cordl_internal_set_Url(::StringW  value) ;

/// @brief Method .ctor, addr 0x16df748, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(::StringW  contentType, ::StringW  filePath, ::StringW  id, float_t  progress, ::Vuplex::WebView::ProgressChangeType  type, ::StringW  url) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DownloadChangedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DownloadChangedEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DownloadChangedEventArgs(DownloadChangedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DownloadChangedEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DownloadChangedEventArgs(DownloadChangedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{135};

/// @brief Field ContentType, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___ContentType;

/// @brief Field FilePath, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___FilePath;

/// @brief Field Id, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Id;

/// @brief Field Progress, offset: 0x28, size: 0x4, def value: None
 float_t  ___Progress;

/// @brief Field Type, offset: 0x2c, size: 0x4, def value: None
 ::Vuplex::WebView::ProgressChangeType  ___Type;

/// @brief Field Url, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___Url;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::DownloadChangedEventArgs, ___ContentType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::DownloadChangedEventArgs, ___FilePath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::DownloadChangedEventArgs, ___Id) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::DownloadChangedEventArgs, ___Progress) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::DownloadChangedEventArgs, ___Type) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::DownloadChangedEventArgs, ___Url) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::DownloadChangedEventArgs, 0x38>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::DownloadChangedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::DownloadChangedEventArgs*, "Vuplex.WebView", "DownloadChangedEventArgs");
