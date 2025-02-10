#pragma once
// IWYU pragma private; include "Vuplex/WebView/TouchEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "Vuplex/WebView/zzzz__TouchEventType_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchEvent)
// Forward declare root types
namespace Vuplex::WebView {
struct TouchEvent;
}
// Write type traits
MARK_VAL_T(::Vuplex::WebView::TouchEvent);
// Dependencies UnityEngine.Vector2, Vuplex.WebView.TouchEventType
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.TouchEvent
struct CORDL_TYPE TouchEvent {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TouchEvent() ;

// Ctor Parameters [CppParam { name: "TouchID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Type", ty: "::Vuplex::WebView::TouchEventType", modifiers: "", def_value: None }, CppParam { name: "Point", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "RadiusX", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "RadiusY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "RotationAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Pressure", ty: "float_t", modifiers: "", def_value: None }]
constexpr TouchEvent(int32_t  TouchID, ::Vuplex::WebView::TouchEventType  Type, ::UnityEngine::Vector2  Point, float_t  RadiusX, float_t  RadiusY, float_t  RotationAngle, float_t  Pressure) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{188};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field TouchID, offset: 0x0, size: 0x4, def value: None
 int32_t  TouchID;

/// @brief Field Type, offset: 0x4, size: 0x4, def value: None
 ::Vuplex::WebView::TouchEventType  Type;

/// @brief Field Point, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2  Point;

/// @brief Field RadiusX, offset: 0x10, size: 0x4, def value: None
 float_t  RadiusX;

/// @brief Field RadiusY, offset: 0x14, size: 0x4, def value: None
 float_t  RadiusY;

/// @brief Field RotationAngle, offset: 0x18, size: 0x4, def value: None
 float_t  RotationAngle;

/// @brief Field Pressure, offset: 0x1c, size: 0x4, def value: None
 float_t  Pressure;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::TouchEvent, TouchID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::TouchEvent, Type) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::TouchEvent, Point) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::TouchEvent, RadiusX) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::TouchEvent, RadiusY) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::TouchEvent, RotationAngle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::TouchEvent, Pressure) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::TouchEvent, 0x20>, "Size mismatch!");

} // namespace end def Vuplex::WebView
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::TouchEvent, "Vuplex.WebView", "TouchEvent");
