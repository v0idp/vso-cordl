#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithMovablePointer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWithMovablePointer)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Vuplex::WebView {
class IWithMovablePointer;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::IWithMovablePointer);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.IWithMovablePointer
class CORDL_TYPE IWithMovablePointer {
public:
// Declarations
/// @brief Method MovePointer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void MovePointer(::UnityEngine::Vector2  normalizedPoint, bool  pointerLeave) ;

// Ctor Parameters [CppParam { name: "", ty: "IWithMovablePointer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWithMovablePointer(IWithMovablePointer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{157};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::IWithMovablePointer);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::IWithMovablePointer*, "Vuplex.WebView", "IWithMovablePointer");
