#pragma once
// IWYU pragma private; include "Vuplex/WebView/StandalonePdfOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Vuplex/WebView/zzzz__StandalonePdfMarginType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StandalonePdfOptions)
// Forward declare root types
namespace Vuplex::WebView {
class StandalonePdfOptions;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::StandalonePdfOptions);
// Dependencies System.Object, Vuplex.WebView.StandalonePdfMarginType
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.StandalonePdfOptions
class CORDL_TYPE StandalonePdfOptions : public ::System::Object {
public:
// Declarations
/// @brief Field Landscape, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_Landscape, put=__cordl_internal_set_Landscape)) bool  Landscape;

/// @brief Field MarginBottom, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_MarginBottom, put=__cordl_internal_set_MarginBottom)) float_t  MarginBottom;

/// @brief Field MarginLeft, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_MarginLeft, put=__cordl_internal_set_MarginLeft)) float_t  MarginLeft;

/// @brief Field MarginRight, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_MarginRight, put=__cordl_internal_set_MarginRight)) float_t  MarginRight;

/// @brief Field MarginTop, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_MarginTop, put=__cordl_internal_set_MarginTop)) float_t  MarginTop;

/// @brief Field MarginType, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_MarginType, put=__cordl_internal_set_MarginType)) ::Vuplex::WebView::StandalonePdfMarginType  MarginType;

/// @brief Field PageRanges, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PageRanges, put=__cordl_internal_set_PageRanges)) ::StringW  PageRanges;

/// @brief Field PaperHeight, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_PaperHeight, put=__cordl_internal_set_PaperHeight)) float_t  PaperHeight;

/// @brief Field PaperWidth, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_PaperWidth, put=__cordl_internal_set_PaperWidth)) float_t  PaperWidth;

/// @brief Field PreferCssPageSize, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_PreferCssPageSize, put=__cordl_internal_set_PreferCssPageSize)) bool  PreferCssPageSize;

/// @brief Field PrintBackground, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_PrintBackground, put=__cordl_internal_set_PrintBackground)) bool  PrintBackground;

/// @brief Field Scale, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Scale, put=__cordl_internal_set_Scale)) float_t  Scale;

static inline ::Vuplex::WebView::StandalonePdfOptions* New_ctor() ;

/// @brief Method ToJson, addr 0x16e5f58, size 0x8, virtual false, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x16e5f60, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr bool const& __cordl_internal_get_Landscape() const;

constexpr bool& __cordl_internal_get_Landscape() ;

constexpr float_t const& __cordl_internal_get_MarginBottom() const;

constexpr float_t& __cordl_internal_get_MarginBottom() ;

constexpr float_t const& __cordl_internal_get_MarginLeft() const;

constexpr float_t& __cordl_internal_get_MarginLeft() ;

constexpr float_t const& __cordl_internal_get_MarginRight() const;

constexpr float_t& __cordl_internal_get_MarginRight() ;

constexpr float_t const& __cordl_internal_get_MarginTop() const;

constexpr float_t& __cordl_internal_get_MarginTop() ;

constexpr ::Vuplex::WebView::StandalonePdfMarginType const& __cordl_internal_get_MarginType() const;

constexpr ::Vuplex::WebView::StandalonePdfMarginType& __cordl_internal_get_MarginType() ;

constexpr ::StringW const& __cordl_internal_get_PageRanges() const;

constexpr ::StringW& __cordl_internal_get_PageRanges() ;

constexpr float_t const& __cordl_internal_get_PaperHeight() const;

constexpr float_t& __cordl_internal_get_PaperHeight() ;

constexpr float_t const& __cordl_internal_get_PaperWidth() const;

constexpr float_t& __cordl_internal_get_PaperWidth() ;

constexpr bool const& __cordl_internal_get_PreferCssPageSize() const;

constexpr bool& __cordl_internal_get_PreferCssPageSize() ;

constexpr bool const& __cordl_internal_get_PrintBackground() const;

constexpr bool& __cordl_internal_get_PrintBackground() ;

constexpr float_t const& __cordl_internal_get_Scale() const;

constexpr float_t& __cordl_internal_get_Scale() ;

constexpr void __cordl_internal_set_Landscape(bool  value) ;

constexpr void __cordl_internal_set_MarginBottom(float_t  value) ;

constexpr void __cordl_internal_set_MarginLeft(float_t  value) ;

constexpr void __cordl_internal_set_MarginRight(float_t  value) ;

constexpr void __cordl_internal_set_MarginTop(float_t  value) ;

constexpr void __cordl_internal_set_MarginType(::Vuplex::WebView::StandalonePdfMarginType  value) ;

constexpr void __cordl_internal_set_PageRanges(::StringW  value) ;

constexpr void __cordl_internal_set_PaperHeight(float_t  value) ;

constexpr void __cordl_internal_set_PaperWidth(float_t  value) ;

constexpr void __cordl_internal_set_PreferCssPageSize(bool  value) ;

constexpr void __cordl_internal_set_PrintBackground(bool  value) ;

constexpr void __cordl_internal_set_Scale(float_t  value) ;

/// @brief Method .ctor, addr 0x16e5f68, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandalonePdfOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandalonePdfOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandalonePdfOptions(StandalonePdfOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandalonePdfOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandalonePdfOptions(StandalonePdfOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{208};

/// @brief Field Landscape, offset: 0x10, size: 0x1, def value: None
 bool  ___Landscape;

/// @brief Field MarginBottom, offset: 0x14, size: 0x4, def value: None
 float_t  ___MarginBottom;

/// @brief Field MarginLeft, offset: 0x18, size: 0x4, def value: None
 float_t  ___MarginLeft;

/// @brief Field MarginRight, offset: 0x1c, size: 0x4, def value: None
 float_t  ___MarginRight;

/// @brief Field MarginTop, offset: 0x20, size: 0x4, def value: None
 float_t  ___MarginTop;

/// @brief Field MarginType, offset: 0x24, size: 0x4, def value: None
 ::Vuplex::WebView::StandalonePdfMarginType  ___MarginType;

/// @brief Field PageRanges, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___PageRanges;

/// @brief Field PaperHeight, offset: 0x30, size: 0x4, def value: None
 float_t  ___PaperHeight;

/// @brief Field PaperWidth, offset: 0x34, size: 0x4, def value: None
 float_t  ___PaperWidth;

/// @brief Field PreferCssPageSize, offset: 0x38, size: 0x1, def value: None
 bool  ___PreferCssPageSize;

/// @brief Field PrintBackground, offset: 0x39, size: 0x1, def value: None
 bool  ___PrintBackground;

/// @brief Field Scale, offset: 0x3c, size: 0x4, def value: None
 float_t  ___Scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::StandalonePdfOptions, ___Landscape) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::StandalonePdfOptions, ___MarginBottom) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::StandalonePdfOptions, ___MarginLeft) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::StandalonePdfOptions, ___MarginRight) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::StandalonePdfOptions, ___MarginTop) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::StandalonePdfOptions, ___MarginType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::StandalonePdfOptions, ___PageRanges) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::StandalonePdfOptions, ___PaperHeight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::StandalonePdfOptions, ___PaperWidth) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::StandalonePdfOptions, ___PreferCssPageSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::StandalonePdfOptions, ___PrintBackground) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::StandalonePdfOptions, ___Scale) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::StandalonePdfOptions, 0x40>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::StandalonePdfOptions);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::StandalonePdfOptions*, "Vuplex.WebView", "StandalonePdfOptions");
