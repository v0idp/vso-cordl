#pragma once
// IWYU pragma private; include "Vuplex/WebView/TouchEvent.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Vuplex/WebView/zzzz__TouchEventType_impl.hpp"
#include "Vuplex/WebView/zzzz__TouchEvent_def.hpp"
// Ctor Parameters [CppParam { name: "TouchID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Type", ty: "::Vuplex::WebView::TouchEventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "Point", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "RadiusX", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "RadiusY", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "RotationAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Pressure", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::TouchEvent::TouchEvent(int32_t  TouchID, ::Vuplex::WebView::TouchEventType  Type, ::UnityEngine::Vector2  Point, float_t  RadiusX, float_t  RadiusY, float_t  RotationAngle, float_t  Pressure) noexcept  {
this->TouchID = TouchID;
this->Type = Type;
this->Point = Point;
this->RadiusX = RadiusX;
this->RadiusY = RadiusY;
this->RotationAngle = RotationAngle;
this->Pressure = Pressure;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::TouchEvent::TouchEvent()   {
}
