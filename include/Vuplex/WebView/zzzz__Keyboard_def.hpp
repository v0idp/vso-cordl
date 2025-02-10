#pragma once
// IWYU pragma private; include "Vuplex/WebView/Keyboard.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Vuplex/WebView/zzzz__BaseKeyboard_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Keyboard)
namespace Vuplex::WebView {
class WebViewPrefab;
}
// Forward declare root types
namespace Vuplex::WebView {
class Keyboard;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Keyboard);
// Dependencies Vuplex.WebView.BaseKeyboard
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.Keyboard
class CORDL_TYPE Keyboard : public ::Vuplex::WebView::BaseKeyboard {
public:
// Declarations
 __declspec(property(get=get_InitialResolution, put=set_InitialResolution)) float_t  InitialResolution;

/// @brief Field Resolution, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_Resolution, put=__cordl_internal_set_Resolution)) float_t  Resolution;

 __declspec(property(get=get_WebViewPrefab)) ::UnityW<::Vuplex::WebView::WebViewPrefab>  WebViewPrefab;

/// @brief Method Init, addr 0x16e0010, size 0x4, virtual false, abstract: false, final false
inline void Init(float_t  width, float_t  height) ;

/// @brief Method Instantiate, addr 0x16dfaf4, size 0xc, virtual false, abstract: false, final false
static inline ::UnityW<::Vuplex::WebView::Keyboard> Instantiate() ;

/// @brief Method Instantiate, addr 0x16dfb00, size 0x12c, virtual false, abstract: false, final false
static inline ::UnityW<::Vuplex::WebView::Keyboard> Instantiate(float_t  width, float_t  height) ;

static inline ::Vuplex::WebView::Keyboard* New_ctor() ;

/// @brief Method Start, addr 0x16e000c, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get_Resolution() const;

constexpr float_t& __cordl_internal_get_Resolution() ;

constexpr void __cordl_internal_set_Resolution(float_t  value) ;

/// @brief Method .ctor, addr 0x16e0024, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _initKeyboard, addr 0x16dfc2c, size 0x2c0, virtual false, abstract: false, final false
inline void _initKeyboard() ;

/// @brief Method get_InitialResolution, addr 0x16e0014, size 0x8, virtual false, abstract: false, final false
inline float_t get_InitialResolution() ;

/// @brief Method get_WebViewPrefab, addr 0x16dfa7c, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::Vuplex::WebView::WebViewPrefab> get_WebViewPrefab() ;

/// @brief Method set_InitialResolution, addr 0x16e001c, size 0x8, virtual false, abstract: false, final false
inline void set_InitialResolution(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Keyboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Keyboard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Keyboard(Keyboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Keyboard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Keyboard(Keyboard const& ) = delete;

/// @brief Field DEFAULT_KEYBOARD_HEIGHT offset 0xffffffff size 0x4
static constexpr float_t  DEFAULT_KEYBOARD_HEIGHT{static_cast<float_t>(0.125f)};

/// @brief Field DEFAULT_KEYBOARD_WIDTH offset 0xffffffff size 0x4
static constexpr float_t  DEFAULT_KEYBOARD_WIDTH{static_cast<float_t>(0.5f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{168};

/// @brief Field Resolution, offset: 0x50, size: 0x4, def value: None
 float_t  ___Resolution;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Keyboard, ___Resolution) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Keyboard, 0x58>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::Keyboard);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Keyboard*, "Vuplex.WebView", "Keyboard");
