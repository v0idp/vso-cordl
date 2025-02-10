#pragma once
// IWYU pragma private; include "Vuplex/WebView/ScrolledEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(ScrolledEventArgs)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Vuplex::WebView {
class ScrolledEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::ScrolledEventArgs);
// Dependencies System.EventArgs, UnityEngine.Vector2
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.ScrolledEventArgs
class CORDL_TYPE ScrolledEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief Field Point, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Point, put=__cordl_internal_set_Point)) ::UnityEngine::Vector2  Point;

/// @brief Field ScrollDelta, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScrollDelta, put=__cordl_internal_set_ScrollDelta)) ::UnityEngine::Vector2  ScrollDelta;

static inline ::Vuplex::WebView::ScrolledEventArgs* New_ctor(::UnityEngine::Vector2  scrollDelta, ::UnityEngine::Vector2  point) ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_Point() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_Point() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_ScrollDelta() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_ScrollDelta() ;

constexpr void __cordl_internal_set_Point(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_ScrollDelta(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x16da00c, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector2  scrollDelta, ::UnityEngine::Vector2  point) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScrolledEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScrolledEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScrolledEventArgs(ScrolledEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScrolledEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScrolledEventArgs(ScrolledEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{185};

/// @brief Field ScrollDelta, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___ScrollDelta;

/// @brief Field Point, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___Point;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::ScrolledEventArgs, ___ScrollDelta) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::ScrolledEventArgs, ___Point) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::ScrolledEventArgs, 0x20>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::ScrolledEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::ScrolledEventArgs*, "Vuplex.WebView", "ScrolledEventArgs");
