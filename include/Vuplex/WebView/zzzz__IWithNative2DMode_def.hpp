#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithNative2DMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWithNative2DMode)
namespace System::Threading::Tasks {
class Task;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace Vuplex::WebView {
class IWithNative2DMode;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::IWithNative2DMode);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.IWithNative2DMode
class CORDL_TYPE IWithNative2DMode {
public:
// Declarations
 __declspec(property(get=get_Native2DModeEnabled)) bool  Native2DModeEnabled;

 __declspec(property(get=get_Rect)) ::UnityEngine::Rect  Rect;

 __declspec(property(get=get_Visible)) bool  Visible;

/// @brief Method BringToFront, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void BringToFront() ;

/// @brief Method InitInNative2DMode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* InitInNative2DMode(::UnityEngine::Rect  rect) ;

/// @brief Method SetNativeZoomEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetNativeZoomEnabled(bool  enabled) ;

/// @brief Method SetRect, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetRect(::UnityEngine::Rect  rect) ;

/// @brief Method SetVisible, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetVisible(bool  visible) ;

/// @brief Method get_Native2DModeEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_Native2DModeEnabled() ;

/// @brief Method get_Rect, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Rect get_Rect() ;

/// @brief Method get_Visible, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_Visible() ;

// Ctor Parameters [CppParam { name: "", ty: "IWithNative2DMode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWithNative2DMode(IWithNative2DMode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{159};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::IWithNative2DMode);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::IWithNative2DMode*, "Vuplex.WebView", "IWithNative2DMode");
