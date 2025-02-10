#pragma once
// IWYU pragma private; include "VROSC/WebViewInputArea.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "VROSC/zzzz__Clickable_def.hpp"
CORDL_MODULE_EXPORT(WebViewInputArea)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
class InputDevice;
}
// Forward declare root types
namespace VROSC {
class WebViewInputArea;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::WebViewInputArea);
// Dependencies UnityEngine.Vector2, VROSC.Clickable
namespace VROSC {
// Is value type: false
// CS Name: VROSC.WebViewInputArea
class CORDL_TYPE WebViewInputArea : public ::VROSC::Clickable {
public:
// Declarations
 __declspec(property(get=get_InteractionStopsLaser)) bool  InteractionStopsLaser;

/// @brief Field OnAreaClicked, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnAreaClicked, put=__cordl_internal_set_OnAreaClicked)) ::System::Action_2<::UnityEngine::Vector2,bool>*  OnAreaClicked;

/// @brief Field OnAreaDragged, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnAreaDragged, put=__cordl_internal_set_OnAreaDragged)) ::System::Action_2<::UnityEngine::Vector2,::UnityEngine::Vector2>*  OnAreaDragged;

/// @brief Field OnAreaHovered, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnAreaHovered, put=__cordl_internal_set_OnAreaHovered)) ::System::Action_1<::UnityEngine::Vector2>*  OnAreaHovered;

/// @brief Field OnScroll, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnScroll, put=__cordl_internal_set_OnScroll)) ::System::Action_2<::UnityEngine::Vector2,::UnityEngine::Vector2>*  OnScroll;

/// @brief Field _area, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__area, put=__cordl_internal_set__area)) ::UnityW<::UnityEngine::RectTransform>  _area;

/// @brief Field _draggingController, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__draggingController, put=__cordl_internal_set__draggingController)) ::UnityW<::VROSC::InputDevice>  _draggingController;

/// @brief Field _lastDraggedPosition, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastDraggedPosition, put=__cordl_internal_set__lastDraggedPosition)) ::UnityEngine::Vector2  _lastDraggedPosition;

/// @brief Field _lastNormalizedHoverPosition, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastNormalizedHoverPosition, put=__cordl_internal_set__lastNormalizedHoverPosition)) ::UnityEngine::Vector2  _lastNormalizedHoverPosition;

/// @brief Field _scrollDirection, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__scrollDirection, put=__cordl_internal_set__scrollDirection)) ::UnityEngine::Vector2  _scrollDirection;

/// @brief Method Awake, addr 0x1890968, size 0x190, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ContinousHovering, addr 0x1890eec, size 0x12c, virtual true, abstract: false, final false
inline void ContinousHovering(::VROSC::InputDevice*  device, ::UnityEngine::Vector3  position, bool  pointedAt, bool  v) ;

/// @brief Method GetNormalizedPosition, addr 0x1890df0, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetNormalizedPosition(::UnityEngine::Vector3  position) ;

/// @brief Method LateUpdate, addr 0x1890af8, size 0xc0, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::VROSC::WebViewInputArea* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1890bb8, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Pressed, addr 0x1890c90, size 0x160, virtual false, abstract: false, final false
inline void Pressed(::VROSC::ClickData*  clickData, bool  pressed) ;

/// @brief Method ThumbStickPushed, addr 0x1890e6c, size 0x80, virtual false, abstract: false, final false
inline void ThumbStickPushed(::VROSC::InputDevice*  device, ::UnityEngine::Vector2  direction) ;

constexpr ::System::Action_2<::UnityEngine::Vector2,bool>* const& __cordl_internal_get_OnAreaClicked() const;

constexpr ::System::Action_2<::UnityEngine::Vector2,bool>*& __cordl_internal_get_OnAreaClicked() ;

constexpr ::System::Action_2<::UnityEngine::Vector2,::UnityEngine::Vector2>* const& __cordl_internal_get_OnAreaDragged() const;

constexpr ::System::Action_2<::UnityEngine::Vector2,::UnityEngine::Vector2>*& __cordl_internal_get_OnAreaDragged() ;

constexpr ::System::Action_1<::UnityEngine::Vector2>* const& __cordl_internal_get_OnAreaHovered() const;

constexpr ::System::Action_1<::UnityEngine::Vector2>*& __cordl_internal_get_OnAreaHovered() ;

constexpr ::System::Action_2<::UnityEngine::Vector2,::UnityEngine::Vector2>* const& __cordl_internal_get_OnScroll() const;

constexpr ::System::Action_2<::UnityEngine::Vector2,::UnityEngine::Vector2>*& __cordl_internal_get_OnScroll() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__area() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__area() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__draggingController() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__draggingController() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__lastDraggedPosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__lastDraggedPosition() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__lastNormalizedHoverPosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__lastNormalizedHoverPosition() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__scrollDirection() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__scrollDirection() ;

constexpr void __cordl_internal_set_OnAreaClicked(::System::Action_2<::UnityEngine::Vector2,bool>*  value) ;

constexpr void __cordl_internal_set_OnAreaDragged(::System::Action_2<::UnityEngine::Vector2,::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_OnAreaHovered(::System::Action_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_OnScroll(::System::Action_2<::UnityEngine::Vector2,::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set__area(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__draggingController(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__lastDraggedPosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__lastNormalizedHoverPosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__scrollDirection(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x1891018, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InteractionStopsLaser, addr 0x1890960, size 0x8, virtual true, abstract: false, final false
inline bool get_InteractionStopsLaser() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebViewInputArea() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebViewInputArea", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebViewInputArea(WebViewInputArea && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebViewInputArea", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebViewInputArea(WebViewInputArea const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{633};

/// @brief Field _area, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____area;

/// @brief Field _scrollDirection, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____scrollDirection;

/// @brief Field OnAreaClicked, offset: 0xa0, size: 0x8, def value: None
 ::System::Action_2<::UnityEngine::Vector2,bool>*  ___OnAreaClicked;

/// @brief Field OnScroll, offset: 0xa8, size: 0x8, def value: None
 ::System::Action_2<::UnityEngine::Vector2,::UnityEngine::Vector2>*  ___OnScroll;

/// @brief Field OnAreaHovered, offset: 0xb0, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Vector2>*  ___OnAreaHovered;

/// @brief Field OnAreaDragged, offset: 0xb8, size: 0x8, def value: None
 ::System::Action_2<::UnityEngine::Vector2,::UnityEngine::Vector2>*  ___OnAreaDragged;

/// @brief Field _draggingController, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____draggingController;

/// @brief Field _lastDraggedPosition, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____lastDraggedPosition;

/// @brief Field _lastNormalizedHoverPosition, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____lastNormalizedHoverPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::WebViewInputArea, ____area) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::WebViewInputArea, ____scrollDirection) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::WebViewInputArea, ___OnAreaClicked) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::WebViewInputArea, ___OnScroll) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::WebViewInputArea, ___OnAreaHovered) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::WebViewInputArea, ___OnAreaDragged) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::VROSC::WebViewInputArea, ____draggingController) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::VROSC::WebViewInputArea, ____lastDraggedPosition) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::VROSC::WebViewInputArea, ____lastNormalizedHoverPosition) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::WebViewInputArea, 0xd8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::WebViewInputArea);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::WebViewInputArea*, "VROSC", "WebViewInputArea");
