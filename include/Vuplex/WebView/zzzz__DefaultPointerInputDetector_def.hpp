#pragma once
// IWYU pragma private; include "Vuplex/WebView/DefaultPointerInputDetector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__IBeginDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IScrollHandler_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Vuplex/WebView/zzzz__IPointerInputDetector_def.hpp"
CORDL_MODULE_EXPORT(DefaultPointerInputDetector)
namespace System {
class EventArgs;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System {
class EventHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
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
class DefaultPointerInputDetector;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::DefaultPointerInputDetector);
// Dependencies UnityEngine.EventSystems.IBeginDragHandler, UnityEngine.EventSystems.IDragHandler, UnityEngine.EventSystems.IEventSystemHandler, UnityEngine.EventSystems.IPointerClickHandler, UnityEngine.EventSystems.IPointerDownHandler, UnityEngine.EventSystems.IPointerEnterHandler, UnityEngine.EventSystems.IPointerExitHandler, UnityEngine.EventSystems.IPointerUpHandler, UnityEngine.EventSystems.IScrollHandler, UnityEngine.MonoBehaviour, Vuplex.WebView.IPointerInputDetector
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.DefaultPointerInputDetector
class CORDL_TYPE DefaultPointerInputDetector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field BeganDrag, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_BeganDrag, put=__cordl_internal_set_BeganDrag)) ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  BeganDrag;

/// @brief Field Dragged, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Dragged, put=__cordl_internal_set_Dragged)) ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  Dragged;

/// @brief Field PointerDown, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PointerDown, put=__cordl_internal_set_PointerDown)) ::System::EventHandler_1<::Vuplex::WebView::PointerEventArgs*>*  PointerDown;

/// @brief Field PointerEntered, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_PointerEntered, put=__cordl_internal_set_PointerEntered)) ::System::EventHandler*  PointerEntered;

/// @brief Field PointerExited, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_PointerExited, put=__cordl_internal_set_PointerExited)) ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  PointerExited;

/// @brief Field PointerMoved, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_PointerMoved, put=__cordl_internal_set_PointerMoved)) ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  PointerMoved;

 __declspec(property(get=get_PointerMovedEnabled, put=set_PointerMovedEnabled)) bool  PointerMovedEnabled;

/// @brief Field PointerUp, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_PointerUp, put=__cordl_internal_set_PointerUp)) ::System::EventHandler_1<::Vuplex::WebView::PointerEventArgs*>*  PointerUp;

/// @brief Field Scrolled, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_Scrolled, put=__cordl_internal_set_Scrolled)) ::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>*  Scrolled;

/// @brief Field <PointerMovedEnabled>k__BackingField, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__PointerMovedEnabled_k__BackingField, put=__cordl_internal_set__PointerMovedEnabled_k__BackingField)) bool  _PointerMovedEnabled_k__BackingField;

/// @brief Field _isHovering, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHovering, put=__cordl_internal_set__isHovering)) bool  _isHovering;

/// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr operator  ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
constexpr operator  ::UnityEngine::EventSystems::IDragHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IScrollHandler"
constexpr operator  ::UnityEngine::EventSystems::IScrollHandler*() noexcept;

/// @brief Convert operator to "::Vuplex::WebView::IPointerInputDetector"
constexpr operator  ::Vuplex::WebView::IPointerInputDetector*() noexcept;

static inline ::Vuplex::WebView::DefaultPointerInputDetector* New_ctor() ;

/// @brief Method OnBeginDrag, addr 0x16de968, size 0x38, virtual true, abstract: false, final true
inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnDrag, addr 0x16dea70, size 0x64, virtual true, abstract: false, final true
inline void OnDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerClick, addr 0x16deafc, size 0x4, virtual true, abstract: false, final true
inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerDown, addr 0x16deb00, size 0x38, virtual true, abstract: false, final false
inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerEnter, addr 0x16dec2c, size 0x88, virtual true, abstract: false, final true
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerExit, addr 0x16decdc, size 0x158, virtual true, abstract: false, final true
inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerUp, addr 0x16dee5c, size 0x38, virtual true, abstract: false, final false
inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnScroll, addr 0x16deebc, size 0xdc, virtual true, abstract: false, final true
inline void OnScroll(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method Update, addr 0x16df744, size 0x4, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>* const& __cordl_internal_get_BeganDrag() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*& __cordl_internal_get_BeganDrag() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>* const& __cordl_internal_get_Dragged() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*& __cordl_internal_get_Dragged() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::PointerEventArgs*>* const& __cordl_internal_get_PointerDown() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::PointerEventArgs*>*& __cordl_internal_get_PointerDown() ;

constexpr ::System::EventHandler* const& __cordl_internal_get_PointerEntered() const;

constexpr ::System::EventHandler*& __cordl_internal_get_PointerEntered() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>* const& __cordl_internal_get_PointerExited() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*& __cordl_internal_get_PointerExited() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>* const& __cordl_internal_get_PointerMoved() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*& __cordl_internal_get_PointerMoved() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::PointerEventArgs*>* const& __cordl_internal_get_PointerUp() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::PointerEventArgs*>*& __cordl_internal_get_PointerUp() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>* const& __cordl_internal_get_Scrolled() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>*& __cordl_internal_get_Scrolled() ;

constexpr bool const& __cordl_internal_get__PointerMovedEnabled_k__BackingField() const;

constexpr bool& __cordl_internal_get__PointerMovedEnabled_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isHovering() const;

constexpr bool& __cordl_internal_get__isHovering() ;

constexpr void __cordl_internal_set_BeganDrag(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  value) ;

constexpr void __cordl_internal_set_Dragged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  value) ;

constexpr void __cordl_internal_set_PointerDown(::System::EventHandler_1<::Vuplex::WebView::PointerEventArgs*>*  value) ;

constexpr void __cordl_internal_set_PointerEntered(::System::EventHandler*  value) ;

constexpr void __cordl_internal_set_PointerExited(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  value) ;

constexpr void __cordl_internal_set_PointerMoved(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  value) ;

constexpr void __cordl_internal_set_PointerUp(::System::EventHandler_1<::Vuplex::WebView::PointerEventArgs*>*  value) ;

constexpr void __cordl_internal_set_Scrolled(::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>*  value) ;

constexpr void __cordl_internal_set__PointerMovedEnabled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__isHovering(bool  value) ;

/// @brief Method _convertToEventArgs, addr 0x16de9a0, size 0xa8, virtual false, abstract: false, final false
inline ::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>* _convertToEventArgs(::UnityEngine::EventSystems::PointerEventData*  pointerEventData) ;

/// @brief Method _convertToEventArgs, addr 0x16defc0, size 0xc0, virtual false, abstract: false, final false
inline ::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>* _convertToEventArgs(::UnityEngine::Vector3  worldPosition) ;

/// @brief Method _convertToNormalizedPoint, addr 0x16df080, size 0x28, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 _convertToNormalizedPoint(::UnityEngine::EventSystems::PointerEventData*  pointerEventData) ;

/// @brief Method _convertToNormalizedPoint, addr 0x16df0a8, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 _convertToNormalizedPoint(::UnityEngine::Vector3  worldPosition) ;

/// @brief Method _convertToPointerEventArgs, addr 0x16deb38, size 0xcc, virtual false, abstract: false, final false
inline ::Vuplex::WebView::PointerEventArgs* _convertToPointerEventArgs(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method .ctor, addr 0x16dbf64, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _getLastPointerEventData, addr 0x16df1ac, size 0x3fc, virtual false, abstract: false, final false
inline ::UnityEngine::EventSystems::PointerEventData* _getLastPointerEventData() ;

/// @brief Method _positionIsZero, addr 0x16df5a8, size 0x88, virtual true, abstract: false, final false
inline bool _positionIsZero(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method _raiseBeganDragEvent, addr 0x16dea48, size 0x28, virtual false, abstract: false, final false
inline void _raiseBeganDragEvent(::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*  eventArgs) ;

/// @brief Method _raiseDraggedEvent, addr 0x16dead4, size 0x28, virtual false, abstract: false, final false
inline void _raiseDraggedEvent(::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*  eventArgs) ;

/// @brief Method _raisePointerDownEvent, addr 0x16dec04, size 0x28, virtual false, abstract: false, final false
inline void _raisePointerDownEvent(::Vuplex::WebView::PointerEventArgs*  eventArgs) ;

/// @brief Method _raisePointerEnteredEvent, addr 0x16decb4, size 0x28, virtual false, abstract: false, final false
inline void _raisePointerEnteredEvent(::System::EventArgs*  eventArgs) ;

/// @brief Method _raisePointerExitedEvent, addr 0x16dee34, size 0x28, virtual false, abstract: false, final false
inline void _raisePointerExitedEvent(::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*  eventArgs) ;

/// @brief Method _raisePointerMovedEvent, addr 0x16df71c, size 0x28, virtual false, abstract: false, final false
inline void _raisePointerMovedEvent(::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*  eventArgs) ;

/// @brief Method _raisePointerMovedIfNeeded, addr 0x16df630, size 0xec, virtual false, abstract: false, final false
inline void _raisePointerMovedIfNeeded() ;

/// @brief Method _raisePointerUpEvent, addr 0x16dee94, size 0x28, virtual false, abstract: false, final false
inline void _raisePointerUpEvent(::Vuplex::WebView::PointerEventArgs*  eventArgs) ;

/// @brief Method _raiseScrolledEvent, addr 0x16def98, size 0x28, virtual false, abstract: false, final false
inline void _raiseScrolledEvent(::Vuplex::WebView::ScrolledEventArgs*  eventArgs) ;

/// @brief Method add_BeganDrag, addr 0x16dde7c, size 0xb0, virtual true, abstract: false, final true
inline void add_BeganDrag(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  value) ;

/// @brief Method add_Dragged, addr 0x16ddfdc, size 0xb0, virtual true, abstract: false, final true
inline void add_Dragged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  value) ;

/// @brief Method add_PointerDown, addr 0x16de13c, size 0xb0, virtual true, abstract: false, final true
inline void add_PointerDown(::System::EventHandler_1<::Vuplex::WebView::PointerEventArgs*>*  value) ;

/// @brief Method add_PointerEntered, addr 0x16de29c, size 0x9c, virtual true, abstract: false, final true
inline void add_PointerEntered(::System::EventHandler*  value) ;

/// @brief Method add_PointerExited, addr 0x16de3d4, size 0xb0, virtual true, abstract: false, final true
inline void add_PointerExited(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  value) ;

/// @brief Method add_PointerMoved, addr 0x16de534, size 0xb0, virtual true, abstract: false, final true
inline void add_PointerMoved(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  value) ;

/// @brief Method add_PointerUp, addr 0x16de694, size 0xb0, virtual true, abstract: false, final true
inline void add_PointerUp(::System::EventHandler_1<::Vuplex::WebView::PointerEventArgs*>*  value) ;

/// @brief Method add_Scrolled, addr 0x16de7f4, size 0xb0, virtual true, abstract: false, final true
inline void add_Scrolled(::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>*  value) ;

/// @brief Method get_PointerMovedEnabled, addr 0x16de954, size 0x8, virtual true, abstract: false, final true
inline bool get_PointerMovedEnabled() ;

/// @brief Convert to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr ::UnityEngine::EventSystems::IBeginDragHandler* i___UnityEngine__EventSystems__IBeginDragHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
constexpr ::UnityEngine::EventSystems::IDragHandler* i___UnityEngine__EventSystems__IDragHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* i___UnityEngine__EventSystems__IPointerDownHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IScrollHandler"
constexpr ::UnityEngine::EventSystems::IScrollHandler* i___UnityEngine__EventSystems__IScrollHandler() noexcept;

/// @brief Convert to "::Vuplex::WebView::IPointerInputDetector"
constexpr ::Vuplex::WebView::IPointerInputDetector* i___Vuplex__WebView__IPointerInputDetector() noexcept;

/// @brief Method remove_BeganDrag, addr 0x16ddf2c, size 0xb0, virtual true, abstract: false, final true
inline void remove_BeganDrag(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  value) ;

/// @brief Method remove_Dragged, addr 0x16de08c, size 0xb0, virtual true, abstract: false, final true
inline void remove_Dragged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  value) ;

/// @brief Method remove_PointerDown, addr 0x16de1ec, size 0xb0, virtual true, abstract: false, final true
inline void remove_PointerDown(::System::EventHandler_1<::Vuplex::WebView::PointerEventArgs*>*  value) ;

/// @brief Method remove_PointerEntered, addr 0x16de338, size 0x9c, virtual true, abstract: false, final true
inline void remove_PointerEntered(::System::EventHandler*  value) ;

/// @brief Method remove_PointerExited, addr 0x16de484, size 0xb0, virtual true, abstract: false, final true
inline void remove_PointerExited(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  value) ;

/// @brief Method remove_PointerMoved, addr 0x16de5e4, size 0xb0, virtual true, abstract: false, final true
inline void remove_PointerMoved(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  value) ;

/// @brief Method remove_PointerUp, addr 0x16de744, size 0xb0, virtual true, abstract: false, final true
inline void remove_PointerUp(::System::EventHandler_1<::Vuplex::WebView::PointerEventArgs*>*  value) ;

/// @brief Method remove_Scrolled, addr 0x16de8a4, size 0xb0, virtual true, abstract: false, final true
inline void remove_Scrolled(::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>*  value) ;

/// @brief Method set_PointerMovedEnabled, addr 0x16de95c, size 0xc, virtual true, abstract: false, final true
inline void set_PointerMovedEnabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultPointerInputDetector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultPointerInputDetector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultPointerInputDetector(DefaultPointerInputDetector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultPointerInputDetector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultPointerInputDetector(DefaultPointerInputDetector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{134};

/// @brief Field BeganDrag, offset: 0x20, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  ___BeganDrag;

/// @brief Field Dragged, offset: 0x28, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  ___Dragged;

/// @brief Field PointerDown, offset: 0x30, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::PointerEventArgs*>*  ___PointerDown;

/// @brief Field PointerEntered, offset: 0x38, size: 0x8, def value: None
 ::System::EventHandler*  ___PointerEntered;

/// @brief Field PointerExited, offset: 0x40, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  ___PointerExited;

/// @brief Field PointerMoved, offset: 0x48, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*>*  ___PointerMoved;

/// @brief Field PointerUp, offset: 0x50, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::PointerEventArgs*>*  ___PointerUp;

/// @brief Field Scrolled, offset: 0x58, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>*  ___Scrolled;

/// @brief Field <PointerMovedEnabled>k__BackingField, offset: 0x60, size: 0x1, def value: None
 bool  ____PointerMovedEnabled_k__BackingField;

/// @brief Field _isHovering, offset: 0x61, size: 0x1, def value: None
 bool  ____isHovering;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::DefaultPointerInputDetector, ___BeganDrag) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::DefaultPointerInputDetector, ___Dragged) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::DefaultPointerInputDetector, ___PointerDown) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::DefaultPointerInputDetector, ___PointerEntered) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::DefaultPointerInputDetector, ___PointerExited) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::DefaultPointerInputDetector, ___PointerMoved) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::DefaultPointerInputDetector, ___PointerUp) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::DefaultPointerInputDetector, ___Scrolled) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::DefaultPointerInputDetector, ____PointerMovedEnabled_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::DefaultPointerInputDetector, ____isHovering) == 0x61, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::DefaultPointerInputDetector, 0x68>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::DefaultPointerInputDetector);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::DefaultPointerInputDetector*, "Vuplex.WebView", "DefaultPointerInputDetector");
