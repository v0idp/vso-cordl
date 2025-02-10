#pragma once
// IWYU pragma private; include "Vuplex/WebView/CanvasKeyboard.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Vuplex/WebView/zzzz__BaseKeyboard_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CanvasKeyboard)
namespace Vuplex::WebView {
class CanvasWebViewPrefab;
}
// Forward declare root types
namespace Vuplex::WebView {
class CanvasKeyboard;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::CanvasKeyboard);
// Dependencies Vuplex.WebView.BaseKeyboard
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.CanvasKeyboard
class CORDL_TYPE CanvasKeyboard : public ::Vuplex::WebView::BaseKeyboard {
public:
// Declarations
 __declspec(property(get=get_InitialResolution, put=set_InitialResolution)) float_t  InitialResolution;

/// @brief Field Resolution, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_Resolution, put=__cordl_internal_set_Resolution)) float_t  Resolution;

 __declspec(property(get=get_WebViewPrefab)) ::UnityW<::Vuplex::WebView::CanvasWebViewPrefab>  WebViewPrefab;

/// @brief Method Instantiate, addr 0x16db658, size 0xec, virtual false, abstract: false, final false
static inline ::UnityW<::Vuplex::WebView::CanvasKeyboard> Instantiate() ;

static inline ::Vuplex::WebView::CanvasKeyboard* New_ctor() ;

/// @brief Method Start, addr 0x16dbb18, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get_Resolution() const;

constexpr float_t& __cordl_internal_get_Resolution() ;

constexpr void __cordl_internal_set_Resolution(float_t  value) ;

/// @brief Method .ctor, addr 0x16dbb2c, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _initCanvasKeyboard, addr 0x16db744, size 0x2cc, virtual false, abstract: false, final false
inline void _initCanvasKeyboard() ;

/// @brief Method get_InitialResolution, addr 0x16dbb1c, size 0x8, virtual false, abstract: false, final false
inline float_t get_InitialResolution() ;

/// @brief Method get_WebViewPrefab, addr 0x16db5e0, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::Vuplex::WebView::CanvasWebViewPrefab> get_WebViewPrefab() ;

/// @brief Method set_InitialResolution, addr 0x16dbb24, size 0x8, virtual false, abstract: false, final false
inline void set_InitialResolution(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasKeyboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasKeyboard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasKeyboard(CanvasKeyboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasKeyboard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasKeyboard(CanvasKeyboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{126};

/// @brief Field Resolution, offset: 0x50, size: 0x4, def value: None
 float_t  ___Resolution;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::CanvasKeyboard, ___Resolution) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::CanvasKeyboard, 0x58>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::CanvasKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::CanvasKeyboard*, "Vuplex.WebView", "CanvasKeyboard");
