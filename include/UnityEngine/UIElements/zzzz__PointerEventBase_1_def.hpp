#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerEventBase_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerEventInternal_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerEvent_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__PenStatus_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerEventBase_1)
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
struct EventType;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct PenData;
}
namespace UnityEngine {
struct PenStatus;
}
namespace UnityEngine {
struct Touch;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class PointerEventBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::PointerEventBase_1);
// Dependencies UnityEngine.EventModifiers, UnityEngine.PenStatus, UnityEngine.UIElements.EventBase`1<T>, UnityEngine.UIElements.IPointerEvent, UnityEngine.UIElements.IPointerEventInternal, UnityEngine.Vector2, UnityEngine.Vector3
namespace UnityEngine::UIElements {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerEventBase`1<T>
class CORDL_TYPE PointerEventBase_1 : public ::UnityEngine::UIElements::EventBase_1<T> {
public:
// Declarations
 __declspec(property(get=UnityEngine_UIElements_IPointerEventInternal_get_recomputeTopElementUnderPointer, put=UnityEngine_UIElements_IPointerEventInternal_set_recomputeTopElementUnderPointer)) bool  UnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointer;

 __declspec(property(get=UnityEngine_UIElements_IPointerEventInternal_get_triggeredByOS, put=UnityEngine_UIElements_IPointerEventInternal_set_triggeredByOS)) bool  UnityEngine_UIElements_IPointerEventInternal_triggeredByOS;

/// @brief Field <UnityEngine.UIElements.IPointerEventInternal.recomputeTopElementUnderPointer>k__BackingField, offset 0x105, size 0x1 
 __declspec(property(get=__cordl_internal_get__UnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointer_k__BackingField, put=__cordl_internal_set__UnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointer_k__BackingField)) bool  _UnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointer_k__BackingField;

/// @brief Field <UnityEngine.UIElements.IPointerEventInternal.triggeredByOS>k__BackingField, offset 0x104, size 0x1 
 __declspec(property(get=__cordl_internal_get__UnityEngine_UIElements_IPointerEventInternal_triggeredByOS_k__BackingField, put=__cordl_internal_set__UnityEngine_UIElements_IPointerEventInternal_triggeredByOS_k__BackingField)) bool  _UnityEngine_UIElements_IPointerEventInternal_triggeredByOS_k__BackingField;

/// @brief Field <button>k__BackingField, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get__button_k__BackingField, put=__cordl_internal_set__button_k__BackingField)) int32_t  _button_k__BackingField;

/// @brief Field <clickCount>k__BackingField, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get__clickCount_k__BackingField, put=__cordl_internal_set__clickCount_k__BackingField)) int32_t  _clickCount_k__BackingField;

/// @brief Field <deltaPosition>k__BackingField, offset 0xcc, size 0xc 
 __declspec(property(get=__cordl_internal_get__deltaPosition_k__BackingField, put=__cordl_internal_set__deltaPosition_k__BackingField)) ::UnityEngine::Vector3  _deltaPosition_k__BackingField;

/// @brief Field <deltaTime>k__BackingField, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get__deltaTime_k__BackingField, put=__cordl_internal_set__deltaTime_k__BackingField)) float_t  _deltaTime_k__BackingField;

/// @brief Field <isPrimary>k__BackingField, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__isPrimary_k__BackingField, put=__cordl_internal_set__isPrimary_k__BackingField)) bool  _isPrimary_k__BackingField;

/// @brief Field <localPosition>k__BackingField, offset 0xc0, size 0xc 
 __declspec(property(get=__cordl_internal_get__localPosition_k__BackingField, put=__cordl_internal_set__localPosition_k__BackingField)) ::UnityEngine::Vector3  _localPosition_k__BackingField;

/// @brief Field <modifiers>k__BackingField, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get__modifiers_k__BackingField, put=__cordl_internal_set__modifiers_k__BackingField)) ::UnityEngine::EventModifiers  _modifiers_k__BackingField;

/// @brief Field <penStatus>k__BackingField, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get__penStatus_k__BackingField, put=__cordl_internal_set__penStatus_k__BackingField)) ::UnityEngine::PenStatus  _penStatus_k__BackingField;

/// @brief Field <pointerId>k__BackingField, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__pointerId_k__BackingField, put=__cordl_internal_set__pointerId_k__BackingField)) int32_t  _pointerId_k__BackingField;

/// @brief Field <pointerType>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointerType_k__BackingField, put=__cordl_internal_set__pointerType_k__BackingField)) ::StringW  _pointerType_k__BackingField;

/// @brief Field <position>k__BackingField, offset 0xb4, size 0xc 
 __declspec(property(get=__cordl_internal_get__position_k__BackingField, put=__cordl_internal_set__position_k__BackingField)) ::UnityEngine::Vector3  _position_k__BackingField;

/// @brief Field <pressedButtons>k__BackingField, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__pressedButtons_k__BackingField, put=__cordl_internal_set__pressedButtons_k__BackingField)) int32_t  _pressedButtons_k__BackingField;

/// @brief Field <pressure>k__BackingField, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get__pressure_k__BackingField, put=__cordl_internal_set__pressure_k__BackingField)) float_t  _pressure_k__BackingField;

/// @brief Field <radiusVariance>k__BackingField, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__radiusVariance_k__BackingField, put=__cordl_internal_set__radiusVariance_k__BackingField)) ::UnityEngine::Vector2  _radiusVariance_k__BackingField;

/// @brief Field <radius>k__BackingField, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__radius_k__BackingField, put=__cordl_internal_set__radius_k__BackingField)) ::UnityEngine::Vector2  _radius_k__BackingField;

/// @brief Field <tangentialPressure>k__BackingField, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get__tangentialPressure_k__BackingField, put=__cordl_internal_set__tangentialPressure_k__BackingField)) float_t  _tangentialPressure_k__BackingField;

/// @brief Field <twist>k__BackingField, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get__twist_k__BackingField, put=__cordl_internal_set__twist_k__BackingField)) float_t  _twist_k__BackingField;

 __declspec(property(get=get_actionKey)) bool  actionKey;

 __declspec(property(get=get_altKey)) bool  altKey;

 __declspec(property(get=get_altitudeAngle, put=set_altitudeAngle)) float_t  altitudeAngle;

 __declspec(property(get=get_azimuthAngle, put=set_azimuthAngle)) float_t  azimuthAngle;

 __declspec(property(get=get_button, put=set_button)) int32_t  button;

 __declspec(property(get=get_clickCount, put=set_clickCount)) int32_t  clickCount;

 __declspec(property(get=get_commandKey)) bool  commandKey;

 __declspec(property(get=get_ctrlKey)) bool  ctrlKey;

 __declspec(property(get=get_currentTarget, put=set_currentTarget)) ::UnityEngine::UIElements::IEventHandler*  currentTarget;

 __declspec(property(get=get_deltaPosition, put=set_deltaPosition)) ::UnityEngine::Vector3  deltaPosition;

 __declspec(property(get=get_deltaTime, put=set_deltaTime)) float_t  deltaTime;

 __declspec(property(get=get_isPrimary, put=set_isPrimary)) bool  isPrimary;

 __declspec(property(get=get_localPosition, put=set_localPosition)) ::UnityEngine::Vector3  localPosition;

/// @brief Field m_AltitudeAngle, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AltitudeAngle, put=__cordl_internal_set_m_AltitudeAngle)) float_t  m_AltitudeAngle;

/// @brief Field m_AltitudeNeedsConversion, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AltitudeNeedsConversion, put=__cordl_internal_set_m_AltitudeNeedsConversion)) bool  m_AltitudeNeedsConversion;

/// @brief Field m_AzimuthAngle, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AzimuthAngle, put=__cordl_internal_set_m_AzimuthAngle)) float_t  m_AzimuthAngle;

/// @brief Field m_AzimuthNeedsConversion, offset 0x85, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AzimuthNeedsConversion, put=__cordl_internal_set_m_AzimuthNeedsConversion)) bool  m_AzimuthNeedsConversion;

/// @brief Field m_Tilt, offset 0x94, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Tilt, put=__cordl_internal_set_m_Tilt)) ::UnityEngine::Vector2  m_Tilt;

/// @brief Field m_TiltNeeded, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_TiltNeeded, put=__cordl_internal_set_m_TiltNeeded)) bool  m_TiltNeeded;

 __declspec(property(get=get_modifiers, put=set_modifiers)) ::UnityEngine::EventModifiers  modifiers;

 __declspec(property(get=get_penStatus, put=set_penStatus)) ::UnityEngine::PenStatus  penStatus;

 __declspec(property(get=get_pointerId, put=set_pointerId)) int32_t  pointerId;

 __declspec(property(get=get_pointerType, put=set_pointerType)) ::StringW  pointerType;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_pressedButtons, put=set_pressedButtons)) int32_t  pressedButtons;

 __declspec(property(get=get_pressure, put=set_pressure)) float_t  pressure;

 __declspec(property(get=get_radius, put=set_radius)) ::UnityEngine::Vector2  radius;

 __declspec(property(get=get_radiusVariance, put=set_radiusVariance)) ::UnityEngine::Vector2  radiusVariance;

 __declspec(property(get=get_shiftKey)) bool  shiftKey;

 __declspec(property(get=get_tangentialPressure, put=set_tangentialPressure)) float_t  tangentialPressure;

 __declspec(property(get=get_tilt, put=set_tilt)) ::UnityEngine::Vector2  tilt;

 __declspec(property(get=get_twist, put=set_twist)) float_t  twist;

/// @brief Convert operator to "::UnityEngine::UIElements::IPointerEvent"
constexpr operator  ::UnityEngine::UIElements::IPointerEvent*() noexcept;

/// @brief Convert operator to "::UnityEngine::UIElements::IPointerEventInternal"
constexpr operator  ::UnityEngine::UIElements::IPointerEventInternal*() noexcept;

/// @brief Method AzimuthAndAlitutudeToTilt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 AzimuthAndAlitutudeToTilt(float_t  altitude, float_t  azimuth) ;

/// @brief Method GetPooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T GetPooled(::UnityEngine::EventType  eventType, ::UnityEngine::Vector3  mousePosition, ::UnityEngine::Vector2  delta, int32_t  button, int32_t  clickCount, ::UnityEngine::EventModifiers  modifiers) ;

/// @brief Method GetPooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T GetPooled(::UnityEngine::PenData  pen, ::UnityEngine::EventModifiers  modifiers) ;

/// @brief Method GetPooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T GetPooled(::UnityEngine::Event*  systemEvent) ;

/// @brief Method GetPooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T GetPooled(::UnityEngine::Touch  touch, ::UnityEngine::EventModifiers  modifiers) ;

/// @brief Method GetPooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T GetPooled(::UnityEngine::UIElements::IPointerEvent*  triggerEvent) ;

/// @brief Method GetPooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T GetPooled(::UnityEngine::UIElements::IPointerEvent*  triggerEvent, ::UnityEngine::Vector2  position, int32_t  pointerId) ;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Init() ;

/// @brief Method IsMouse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool IsMouse(::UnityEngine::Event*  systemEvent) ;

/// @brief Method IsTouch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool IsTouch(::UnityEngine::Event*  systemEvent) ;

/// @brief Method LocalInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void LocalInit() ;

static inline ::UnityEngine::UIElements::PointerEventBase_1<T>* New_ctor() ;

/// @brief Method PostDispatch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void PostDispatch(::UnityEngine::UIElements::IPanel*  panel) ;

/// @brief Method PreDispatch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void PreDispatch(::UnityEngine::UIElements::IPanel*  panel) ;

/// @brief Method TiltToAltitude, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline float_t TiltToAltitude(::UnityEngine::Vector2  tilt) ;

/// @brief Method TiltToAzimuth, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline float_t TiltToAzimuth(::UnityEngine::Vector2  tilt) ;

/// @brief Method UnityEngine.UIElements.IPointerEventInternal.get_recomputeTopElementUnderPointer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool UnityEngine_UIElements_IPointerEventInternal_get_recomputeTopElementUnderPointer() ;

/// @brief Method UnityEngine.UIElements.IPointerEventInternal.get_triggeredByOS, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool UnityEngine_UIElements_IPointerEventInternal_get_triggeredByOS() ;

/// @brief Method UnityEngine.UIElements.IPointerEventInternal.set_recomputeTopElementUnderPointer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IPointerEventInternal_set_recomputeTopElementUnderPointer(bool  value) ;

/// @brief Method UnityEngine.UIElements.IPointerEventInternal.set_triggeredByOS, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void UnityEngine_UIElements_IPointerEventInternal_set_triggeredByOS(bool  value) ;

constexpr bool const& __cordl_internal_get__UnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointer_k__BackingField() const;

constexpr bool& __cordl_internal_get__UnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointer_k__BackingField() ;

constexpr bool const& __cordl_internal_get__UnityEngine_UIElements_IPointerEventInternal_triggeredByOS_k__BackingField() const;

constexpr bool& __cordl_internal_get__UnityEngine_UIElements_IPointerEventInternal_triggeredByOS_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__button_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__button_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__clickCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__clickCount_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__deltaPosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__deltaPosition_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__deltaTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__deltaTime_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isPrimary_k__BackingField() const;

constexpr bool& __cordl_internal_get__isPrimary_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localPosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__localPosition_k__BackingField() ;

constexpr ::UnityEngine::EventModifiers const& __cordl_internal_get__modifiers_k__BackingField() const;

constexpr ::UnityEngine::EventModifiers& __cordl_internal_get__modifiers_k__BackingField() ;

constexpr ::UnityEngine::PenStatus const& __cordl_internal_get__penStatus_k__BackingField() const;

constexpr ::UnityEngine::PenStatus& __cordl_internal_get__penStatus_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__pointerId_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__pointerId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__pointerType_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__pointerType_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__position_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__position_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__pressedButtons_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__pressedButtons_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__pressure_k__BackingField() const;

constexpr float_t& __cordl_internal_get__pressure_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__radiusVariance_k__BackingField() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__radiusVariance_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__radius_k__BackingField() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__radius_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__tangentialPressure_k__BackingField() const;

constexpr float_t& __cordl_internal_get__tangentialPressure_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__twist_k__BackingField() const;

constexpr float_t& __cordl_internal_get__twist_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_m_AltitudeAngle() const;

constexpr float_t& __cordl_internal_get_m_AltitudeAngle() ;

constexpr bool const& __cordl_internal_get_m_AltitudeNeedsConversion() const;

constexpr bool& __cordl_internal_get_m_AltitudeNeedsConversion() ;

constexpr float_t const& __cordl_internal_get_m_AzimuthAngle() const;

constexpr float_t& __cordl_internal_get_m_AzimuthAngle() ;

constexpr bool const& __cordl_internal_get_m_AzimuthNeedsConversion() const;

constexpr bool& __cordl_internal_get_m_AzimuthNeedsConversion() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_Tilt() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_Tilt() ;

constexpr bool const& __cordl_internal_get_m_TiltNeeded() const;

constexpr bool& __cordl_internal_get_m_TiltNeeded() ;

constexpr void __cordl_internal_set__UnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointer_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__UnityEngine_UIElements_IPointerEventInternal_triggeredByOS_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__button_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__clickCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__deltaPosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__deltaTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__isPrimary_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__localPosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__modifiers_k__BackingField(::UnityEngine::EventModifiers  value) ;

constexpr void __cordl_internal_set__penStatus_k__BackingField(::UnityEngine::PenStatus  value) ;

constexpr void __cordl_internal_set__pointerId_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__pointerType_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__position_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__pressedButtons_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__pressure_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__radiusVariance_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__radius_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__tangentialPressure_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__twist_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_m_AltitudeAngle(float_t  value) ;

constexpr void __cordl_internal_set_m_AltitudeNeedsConversion(bool  value) ;

constexpr void __cordl_internal_set_m_AzimuthAngle(float_t  value) ;

constexpr void __cordl_internal_set_m_AzimuthNeedsConversion(bool  value) ;

constexpr void __cordl_internal_set_m_Tilt(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_TiltNeeded(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_actionKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_actionKey() ;

/// @brief Method get_altKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_altKey() ;

/// @brief Method get_altitudeAngle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline float_t get_altitudeAngle() ;

/// @brief Method get_azimuthAngle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline float_t get_azimuthAngle() ;

/// @brief Method get_button, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_button() ;

/// @brief Method get_clickCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_clickCount() ;

/// @brief Method get_commandKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_commandKey() ;

/// @brief Method get_ctrlKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_ctrlKey() ;

/// @brief Method get_currentTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::IEventHandler* get_currentTarget() ;

/// @brief Method get_deltaPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_deltaPosition() ;

/// @brief Method get_deltaTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline float_t get_deltaTime() ;

/// @brief Method get_isPrimary, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_isPrimary() ;

/// @brief Method get_localPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_localPosition() ;

/// @brief Method get_modifiers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::UnityEngine::EventModifiers get_modifiers() ;

/// @brief Method get_penStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::UnityEngine::PenStatus get_penStatus() ;

/// @brief Method get_pointerId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_pointerId() ;

/// @brief Method get_pointerType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::StringW get_pointerType() ;

/// @brief Method get_position, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_pressedButtons, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_pressedButtons() ;

/// @brief Method get_pressure, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline float_t get_pressure() ;

/// @brief Method get_radius, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 get_radius() ;

/// @brief Method get_radiusVariance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 get_radiusVariance() ;

/// @brief Method get_shiftKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_shiftKey() ;

/// @brief Method get_tangentialPressure, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline float_t get_tangentialPressure() ;

/// @brief Method get_tilt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 get_tilt() ;

/// @brief Method get_twist, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline float_t get_twist() ;

/// @brief Convert to "::UnityEngine::UIElements::IPointerEvent"
constexpr ::UnityEngine::UIElements::IPointerEvent* i___UnityEngine__UIElements__IPointerEvent() noexcept;

/// @brief Convert to "::UnityEngine::UIElements::IPointerEventInternal"
constexpr ::UnityEngine::UIElements::IPointerEventInternal* i___UnityEngine__UIElements__IPointerEventInternal() noexcept;

/// @brief Method set_altitudeAngle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_altitudeAngle(float_t  value) ;

/// @brief Method set_azimuthAngle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_azimuthAngle(float_t  value) ;

/// @brief Method set_button, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_button(int32_t  value) ;

/// @brief Method set_clickCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_clickCount(int32_t  value) ;

/// @brief Method set_currentTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_currentTarget(::UnityEngine::UIElements::IEventHandler*  value) ;

/// @brief Method set_deltaPosition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_deltaPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_deltaTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_deltaTime(float_t  value) ;

/// @brief Method set_isPrimary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_isPrimary(bool  value) ;

/// @brief Method set_localPosition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_localPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_modifiers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_modifiers(::UnityEngine::EventModifiers  value) ;

/// @brief Method set_penStatus, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_penStatus(::UnityEngine::PenStatus  value) ;

/// @brief Method set_pointerId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_pointerId(int32_t  value) ;

/// @brief Method set_pointerType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_pointerType(::StringW  value) ;

/// @brief Method set_position, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::Vector3  value) ;

/// @brief Method set_pressedButtons, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_pressedButtons(int32_t  value) ;

/// @brief Method set_pressure, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_pressure(float_t  value) ;

/// @brief Method set_radius, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_radius(::UnityEngine::Vector2  value) ;

/// @brief Method set_radiusVariance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_radiusVariance(::UnityEngine::Vector2  value) ;

/// @brief Method set_tangentialPressure, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_tangentialPressure(float_t  value) ;

/// @brief Method set_tilt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_tilt(::UnityEngine::Vector2  value) ;

/// @brief Method set_twist, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_twist(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointerEventBase_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointerEventBase_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerEventBase_1(PointerEventBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerEventBase_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerEventBase_1(PointerEventBase_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4091};

/// @brief Field m_AltitudeNeedsConversion, offset: 0x84, size: 0x1, def value: None
 bool  ___m_AltitudeNeedsConversion;

/// @brief Field m_AzimuthNeedsConversion, offset: 0x85, size: 0x1, def value: None
 bool  ___m_AzimuthNeedsConversion;

/// @brief Field m_AltitudeAngle, offset: 0x88, size: 0x4, def value: None
 float_t  ___m_AltitudeAngle;

/// @brief Field m_AzimuthAngle, offset: 0x8c, size: 0x4, def value: None
 float_t  ___m_AzimuthAngle;

/// @brief Field m_TiltNeeded, offset: 0x90, size: 0x1, def value: None
 bool  ___m_TiltNeeded;

/// @brief Field m_Tilt, offset: 0x94, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_Tilt;

/// @brief Field <pointerId>k__BackingField, offset: 0x9c, size: 0x4, def value: None
 int32_t  ____pointerId_k__BackingField;

/// @brief Field <pointerType>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ____pointerType_k__BackingField;

/// @brief Field <isPrimary>k__BackingField, offset: 0xa8, size: 0x1, def value: None
 bool  ____isPrimary_k__BackingField;

/// @brief Field <button>k__BackingField, offset: 0xac, size: 0x4, def value: None
 int32_t  ____button_k__BackingField;

/// @brief Field <pressedButtons>k__BackingField, offset: 0xb0, size: 0x4, def value: None
 int32_t  ____pressedButtons_k__BackingField;

/// @brief Field <position>k__BackingField, offset: 0xb4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____position_k__BackingField;

/// @brief Field <localPosition>k__BackingField, offset: 0xc0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____localPosition_k__BackingField;

/// @brief Field <deltaPosition>k__BackingField, offset: 0xcc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____deltaPosition_k__BackingField;

/// @brief Field <deltaTime>k__BackingField, offset: 0xd8, size: 0x4, def value: None
 float_t  ____deltaTime_k__BackingField;

/// @brief Field <clickCount>k__BackingField, offset: 0xdc, size: 0x4, def value: None
 int32_t  ____clickCount_k__BackingField;

/// @brief Field <pressure>k__BackingField, offset: 0xe0, size: 0x4, def value: None
 float_t  ____pressure_k__BackingField;

/// @brief Field <tangentialPressure>k__BackingField, offset: 0xe4, size: 0x4, def value: None
 float_t  ____tangentialPressure_k__BackingField;

/// @brief Field <twist>k__BackingField, offset: 0xe8, size: 0x4, def value: None
 float_t  ____twist_k__BackingField;

/// @brief Field <penStatus>k__BackingField, offset: 0xec, size: 0x4, def value: None
 ::UnityEngine::PenStatus  ____penStatus_k__BackingField;

/// @brief Field <radius>k__BackingField, offset: 0xf0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____radius_k__BackingField;

/// @brief Field <radiusVariance>k__BackingField, offset: 0xf8, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____radiusVariance_k__BackingField;

/// @brief Field <modifiers>k__BackingField, offset: 0x100, size: 0x4, def value: None
 ::UnityEngine::EventModifiers  ____modifiers_k__BackingField;

/// @brief Field <UnityEngine.UIElements.IPointerEventInternal.triggeredByOS>k__BackingField, offset: 0x104, size: 0x1, def value: None
 bool  ____UnityEngine_UIElements_IPointerEventInternal_triggeredByOS_k__BackingField;

/// @brief Field <UnityEngine.UIElements.IPointerEventInternal.recomputeTopElementUnderPointer>k__BackingField, offset: 0x105, size: 0x1, def value: None
 bool  ____UnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointer_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::PointerEventBase_1, "UnityEngine.UIElements", "PointerEventBase`1");
