#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithPointerDownAndUp.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWithPointerDownAndUp)
namespace UnityEngine {
struct Vector2;
}
namespace Vuplex::WebView {
class PointerOptions;
}
// Forward declare root types
namespace Vuplex::WebView {
class IWithPointerDownAndUp;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::IWithPointerDownAndUp);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.IWithPointerDownAndUp
class CORDL_TYPE IWithPointerDownAndUp {
public:
// Declarations
/// @brief Method PointerDown, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void PointerDown(::UnityEngine::Vector2  normalizedPoint) ;

/// @brief Method PointerDown, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void PointerDown(::UnityEngine::Vector2  normalizedPoint, ::Vuplex::WebView::PointerOptions*  options) ;

/// @brief Method PointerUp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void PointerUp(::UnityEngine::Vector2  normalizedPoint) ;

/// @brief Method PointerUp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void PointerUp(::UnityEngine::Vector2  normalizedPoint, ::Vuplex::WebView::PointerOptions*  options) ;

// Ctor Parameters [CppParam { name: "", ty: "IWithPointerDownAndUp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWithPointerDownAndUp(IWithPointerDownAndUp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{164};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::IWithPointerDownAndUp);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::IWithPointerDownAndUp*, "Vuplex.WebView", "IWithPointerDownAndUp");
