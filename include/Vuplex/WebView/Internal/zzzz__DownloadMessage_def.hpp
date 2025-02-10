#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/DownloadMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadMessage)
namespace Vuplex::WebView {
class DownloadChangedEventArgs;
}
// Forward declare root types
namespace Vuplex::WebView::Internal {
class DownloadMessage;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::DownloadMessage);
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.DownloadMessage
class CORDL_TYPE DownloadMessage : public ::System::Object {
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
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) int32_t  Type;

/// @brief Field Url, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Url, put=__cordl_internal_set_Url)) ::StringW  Url;

/// @brief Method FromJson, addr 0x17bc9a0, size 0x48, virtual false, abstract: false, final false
static inline ::Vuplex::WebView::Internal::DownloadMessage* FromJson(::StringW  json) ;

static inline ::Vuplex::WebView::Internal::DownloadMessage* New_ctor() ;

/// @brief Method ToEventArgs, addr 0x17bc9e8, size 0x9c, virtual false, abstract: false, final false
inline ::Vuplex::WebView::DownloadChangedEventArgs* ToEventArgs() ;

constexpr ::StringW const& __cordl_internal_get_ContentType() const;

constexpr ::StringW& __cordl_internal_get_ContentType() ;

constexpr ::StringW const& __cordl_internal_get_FilePath() const;

constexpr ::StringW& __cordl_internal_get_FilePath() ;

constexpr ::StringW const& __cordl_internal_get_Id() const;

constexpr ::StringW& __cordl_internal_get_Id() ;

constexpr float_t const& __cordl_internal_get_Progress() const;

constexpr float_t& __cordl_internal_get_Progress() ;

constexpr int32_t const& __cordl_internal_get_Type() const;

constexpr int32_t& __cordl_internal_get_Type() ;

constexpr ::StringW const& __cordl_internal_get_Url() const;

constexpr ::StringW& __cordl_internal_get_Url() ;

constexpr void __cordl_internal_set_ContentType(::StringW  value) ;

constexpr void __cordl_internal_set_FilePath(::StringW  value) ;

constexpr void __cordl_internal_set_Id(::StringW  value) ;

constexpr void __cordl_internal_set_Progress(float_t  value) ;

constexpr void __cordl_internal_set_Type(int32_t  value) ;

constexpr void __cordl_internal_set_Url(::StringW  value) ;

/// @brief Method .ctor, addr 0x17bca84, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DownloadMessage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DownloadMessage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DownloadMessage(DownloadMessage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DownloadMessage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DownloadMessage(DownloadMessage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{243};

/// @brief Field ContentType, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___ContentType;

/// @brief Field FilePath, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___FilePath;

/// @brief Field Id, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Id;

/// @brief Field Progress, offset: 0x28, size: 0x4, def value: None
 float_t  ___Progress;

/// @brief Field Type, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___Type;

/// @brief Field Url, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___Url;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::DownloadMessage, ___ContentType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::DownloadMessage, ___FilePath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::DownloadMessage, ___Id) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::DownloadMessage, ___Progress) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::DownloadMessage, ___Type) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::DownloadMessage, ___Url) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::DownloadMessage, 0x38>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::DownloadMessage);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::DownloadMessage*, "Vuplex.WebView.Internal", "DownloadMessage");
