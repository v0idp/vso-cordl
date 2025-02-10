#pragma once
// IWYU pragma private; include "Vuplex/WebView/IPointerInputDetector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPointerInputDetector)
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System {
class EventHandler;
}
namespace UnityEngine {
struct Vector2;
}
namespace Vuplex::WebView {
template<typename T>
class EventArgs_1;
}
namespace Vuplex::WebView {
class PointerEventArgs;
}
namespace Vuplex::WebView {
class ScrolledEventArgs;
}
// Forward declare root types
namespace Vuplex::WebView {
class IPointerInputDetector;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::IPointerInputDetector);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.IPointerInputDetector
class CORDL_TYPE IPointerInputDetector {
public:
// Declarations
 __declspec(property(get=get_PointerMovedEnabled, put=set_PointerMovedEnabled)) bool  PointerMovedEnabled;

/// @brief Method add_BeganDrag, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_BeganDrag(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  value) ;

/// @brief Method add_Dragged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_Dragged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  value) ;

/// @brief Method add_PointerDown, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_PointerDown(::System::EventHandler_1<::Vuplex::WebView::PointerEventArgs*>*  value) ;

/// @brief Method add_PointerEntered, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_PointerEntered(::System::EventHandler*  value) ;

/// @brief Method add_PointerExited, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_PointerExited(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  value) ;

/// @brief Method add_PointerMoved, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_PointerMoved(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  value) ;

/// @brief Method add_PointerUp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_PointerUp(::System::EventHandler_1<::Vuplex::WebView::PointerEventArgs*>*  value) ;

/// @brief Method add_Scrolled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_Scrolled(::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>*  value) ;

/// @brief Method get_PointerMovedEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_PointerMovedEnabled() ;

/// @brief Method remove_BeganDrag, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_BeganDrag(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  value) ;

/// @brief Method remove_Dragged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_Dragged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  value) ;

/// @brief Method remove_PointerDown, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_PointerDown(::System::EventHandler_1<::Vuplex::WebView::PointerEventArgs*>*  value) ;

/// @brief Method remove_PointerEntered, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_PointerEntered(::System::EventHandler*  value) ;

/// @brief Method remove_PointerExited, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_PointerExited(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  value) ;

/// @brief Method remove_PointerMoved, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_PointerMoved(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  value) ;

/// @brief Method remove_PointerUp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_PointerUp(::System::EventHandler_1<::Vuplex::WebView::PointerEventArgs*>*  value) ;

/// @brief Method remove_Scrolled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_Scrolled(::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>*  value) ;

/// @brief Method set_PointerMovedEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_PointerMovedEnabled(bool  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IPointerInputDetector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPointerInputDetector(IPointerInputDetector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{142};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::IPointerInputDetector);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::IPointerInputDetector*, "Vuplex.WebView", "IPointerInputDetector");
