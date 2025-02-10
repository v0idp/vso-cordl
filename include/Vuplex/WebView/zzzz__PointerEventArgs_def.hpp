#pragma once
// IWYU pragma private; include "Vuplex/WebView/PointerEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "Vuplex/WebView/zzzz__MouseButton_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PointerEventArgs)
namespace Vuplex::WebView {
class PointerOptions;
}
// Forward declare root types
namespace Vuplex::WebView {
class PointerEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::PointerEventArgs);
// Dependencies System.EventArgs, UnityEngine.Vector2, Vuplex.WebView.MouseButton
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.PointerEventArgs
class CORDL_TYPE PointerEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief Field Button, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Button, put=__cordl_internal_set_Button)) ::Vuplex::WebView::MouseButton  Button;

/// @brief Field ClickCount, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_ClickCount, put=__cordl_internal_set_ClickCount)) int32_t  ClickCount;

/// @brief Field Point, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Point, put=__cordl_internal_set_Point)) ::UnityEngine::Vector2  Point;

static inline ::Vuplex::WebView::PointerEventArgs* New_ctor() ;

/// @brief Method ToPointerOptions, addr 0x16d9450, size 0x84, virtual false, abstract: false, final false
inline ::Vuplex::WebView::PointerOptions* ToPointerOptions(bool  preventStealingFocus) ;

constexpr ::Vuplex::WebView::MouseButton const& __cordl_internal_get_Button() const;

constexpr ::Vuplex::WebView::MouseButton& __cordl_internal_get_Button() ;

constexpr int32_t const& __cordl_internal_get_ClickCount() const;

constexpr int32_t& __cordl_internal_get_ClickCount() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_Point() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_Point() ;

constexpr void __cordl_internal_set_Button(::Vuplex::WebView::MouseButton  value) ;

constexpr void __cordl_internal_set_ClickCount(int32_t  value) ;

constexpr void __cordl_internal_set_Point(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x16df14c, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointerEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointerEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerEventArgs(PointerEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerEventArgs(PointerEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{177};

/// @brief Field Button, offset: 0x10, size: 0x4, def value: None
 ::Vuplex::WebView::MouseButton  ___Button;

/// @brief Field ClickCount, offset: 0x14, size: 0x4, def value: None
 int32_t  ___ClickCount;

/// @brief Field Point, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___Point;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::PointerEventArgs, ___Button) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::PointerEventArgs, ___ClickCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::PointerEventArgs, ___Point) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::PointerEventArgs, 0x20>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::PointerEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::PointerEventArgs*, "Vuplex.WebView", "PointerEventArgs");
