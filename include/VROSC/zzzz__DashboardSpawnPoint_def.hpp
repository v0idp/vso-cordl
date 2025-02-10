#pragma once
// IWYU pragma private; include "VROSC/DashboardSpawnPoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DashboardSpawnPoint)
namespace UnityEngine {
struct Vector3;
}
namespace VROSC::UI::Meshes {
class ProceduralArc;
}
namespace VROSC::UI {
class UIColorGetter;
}
namespace VROSC {
struct DashboardSpawnPoint_TriggerCondition;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class TooltipData;
}
namespace VROSC {
struct TriggerButton;
}
// Forward declare root types
namespace VROSC {
struct DashboardSpawnPoint_TriggerCondition;
}
namespace VROSC {
class DashboardSpawnPoint;
}
// Write type traits
MARK_VAL_T(::VROSC::DashboardSpawnPoint_TriggerCondition);
MARK_REF_PTR_T(::VROSC::DashboardSpawnPoint);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.DashboardSpawnPoint/TriggerCondition
struct CORDL_TYPE DashboardSpawnPoint_TriggerCondition {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DashboardSpawnPoint_TriggerCondition_Unwrapped
enum struct __DashboardSpawnPoint_TriggerCondition_Unwrapped : int32_t {
__E_Position = static_cast<int32_t>(0x0),
__E_Direction = static_cast<int32_t>(0x1),
__E_MenuButton = static_cast<int32_t>(0x2),
__E_SpaceBar = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DashboardSpawnPoint_TriggerCondition_Unwrapped () const noexcept {
return static_cast<__DashboardSpawnPoint_TriggerCondition_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DashboardSpawnPoint_TriggerCondition() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DashboardSpawnPoint_TriggerCondition(int32_t  value__) noexcept;

/// @brief Field Direction value: I32(1)
static ::VROSC::DashboardSpawnPoint_TriggerCondition const Direction;

/// @brief Field MenuButton value: I32(2)
static ::VROSC::DashboardSpawnPoint_TriggerCondition const MenuButton;

/// @brief Field Position value: I32(0)
static ::VROSC::DashboardSpawnPoint_TriggerCondition const Position;

/// @brief Field SpaceBar value: I32(3)
static ::VROSC::DashboardSpawnPoint_TriggerCondition const SpaceBar;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1084};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DashboardSpawnPoint_TriggerCondition, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DashboardSpawnPoint_TriggerCondition, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DashboardSpawnPoint
class CORDL_TYPE DashboardSpawnPoint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TriggerCondition = ::VROSC::DashboardSpawnPoint_TriggerCondition;

 __declspec(property(get=get_ActivationAmount, put=set_ActivationAmount)) float_t  ActivationAmount;

 __declspec(property(get=get_DashboardIsAtHand, put=set_DashboardIsAtHand)) bool  DashboardIsAtHand;

 __declspec(property(get=get_InputDevice, put=set_InputDevice)) ::UnityW<::VROSC::InputDevice>  InputDevice;

 __declspec(property(get=get_IsRightHand, put=set_IsRightHand)) bool  IsRightHand;

 __declspec(property(get=get_OtherHand, put=set_OtherHand)) ::UnityW<::VROSC::DashboardSpawnPoint>  OtherHand;

 __declspec(property(get=get_ShouldBeDropped, put=set_ShouldBeDropped)) bool  ShouldBeDropped;

 __declspec(property(get=get_TransformedDirection)) ::UnityEngine::Vector3  TransformedDirection;

/// @brief Field <ActivationAmount>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__ActivationAmount_k__BackingField, put=__cordl_internal_set__ActivationAmount_k__BackingField)) float_t  _ActivationAmount_k__BackingField;

/// @brief Field <DashboardIsAtHand>k__BackingField, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__DashboardIsAtHand_k__BackingField, put=__cordl_internal_set__DashboardIsAtHand_k__BackingField)) bool  _DashboardIsAtHand_k__BackingField;

/// @brief Field <InputDevice>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__InputDevice_k__BackingField, put=__cordl_internal_set__InputDevice_k__BackingField)) ::UnityW<::VROSC::InputDevice>  _InputDevice_k__BackingField;

/// @brief Field <IsRightHand>k__BackingField, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsRightHand_k__BackingField, put=__cordl_internal_set__IsRightHand_k__BackingField)) bool  _IsRightHand_k__BackingField;

/// @brief Field <OtherHand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__OtherHand_k__BackingField, put=__cordl_internal_set__OtherHand_k__BackingField)) ::UnityW<::VROSC::DashboardSpawnPoint>  _OtherHand_k__BackingField;

/// @brief Field <ShouldBeDropped>k__BackingField, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__ShouldBeDropped_k__BackingField, put=__cordl_internal_set__ShouldBeDropped_k__BackingField)) bool  _ShouldBeDropped_k__BackingField;

/// @brief Field _YPressed, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__YPressed, put=__cordl_internal_set__YPressed)) bool  _YPressed;

/// @brief Field _activeRingColor, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeRingColor, put=__cordl_internal_set__activeRingColor)) ::UnityW<::VROSC::UI::UIColorGetter>  _activeRingColor;

/// @brief Field _arc, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__arc, put=__cordl_internal_set__arc)) ::UnityW<::VROSC::UI::Meshes::ProceduralArc>  _arc;

/// @brief Field _dropTooltip, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__dropTooltip, put=__cordl_internal_set__dropTooltip)) ::VROSC::TooltipData*  _dropTooltip;

/// @brief Field _lookAtSensitivity, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__lookAtSensitivity, put=__cordl_internal_set__lookAtSensitivity)) float_t  _lookAtSensitivity;

/// @brief Field _lookatTimeRequired, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lookatTimeRequired, put=__cordl_internal_set__lookatTimeRequired)) float_t  _lookatTimeRequired;

/// @brief Field _offset, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get__offset, put=__cordl_internal_set__offset)) ::UnityEngine::Vector3  _offset;

/// @brief Field _openTooltip, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__openTooltip, put=__cordl_internal_set__openTooltip)) ::VROSC::TooltipData*  _openTooltip;

/// @brief Field _showingTooltip, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get__showingTooltip, put=__cordl_internal_set__showingTooltip)) bool  _showingTooltip;

/// @brief Method ButtonPressBegin, addr 0x1736ca4, size 0x54, virtual false, abstract: false, final false
inline void ButtonPressBegin(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  button) ;

/// @brief Method ButtonPressEnd, addr 0x1736c58, size 0x4c, virtual false, abstract: false, final false
inline void ButtonPressEnd(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  button) ;

/// @brief Method CanOpenDashboard, addr 0x1736cf8, size 0xc4, virtual false, abstract: false, final false
inline bool CanOpenDashboard(bool  dashboardIsAtHand) ;

/// @brief Method IsTriggerConditionMet, addr 0x1736f84, size 0x320, virtual false, abstract: false, final false
inline bool IsTriggerConditionMet(::VROSC::DashboardSpawnPoint_TriggerCondition  condition, bool  dashboardIsAtHand) ;

static inline ::VROSC::DashboardSpawnPoint* New_ctor() ;

/// @brief Method OnDisable, addr 0x1736934, size 0xc4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmos, addr 0x17372a4, size 0xb4, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnEnable, addr 0x173686c, size 0xc8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetActivationAmount, addr 0x1736a3c, size 0x7c, virtual false, abstract: false, final false
inline void SetActivationAmount(float_t  value) ;

/// @brief Method SetColorOfArc, addr 0x17367d4, size 0x98, virtual false, abstract: false, final false
inline void SetColorOfArc() ;

/// @brief Method Setup, addr 0x17369f8, size 0x44, virtual false, abstract: false, final false
inline void Setup(::VROSC::InputDevice*  inputDevice, ::VROSC::DashboardSpawnPoint*  otherHand, bool  isRightHand) ;

/// @brief Method Start, addr 0x1736ab8, size 0x1a0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateIsAtHand, addr 0x1736f14, size 0x70, virtual false, abstract: false, final false
inline void UpdateIsAtHand(bool  dashboardIsAtHand) ;

/// @brief Method UpdateTriggerCondition, addr 0x1736dbc, size 0x158, virtual false, abstract: false, final false
inline void UpdateTriggerCondition(::VROSC::DashboardSpawnPoint_TriggerCondition  condition, bool  dashboardIsAtHand) ;

constexpr float_t const& __cordl_internal_get__ActivationAmount_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ActivationAmount_k__BackingField() ;

constexpr bool const& __cordl_internal_get__DashboardIsAtHand_k__BackingField() const;

constexpr bool& __cordl_internal_get__DashboardIsAtHand_k__BackingField() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__InputDevice_k__BackingField() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__InputDevice_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsRightHand_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsRightHand_k__BackingField() ;

constexpr ::UnityW<::VROSC::DashboardSpawnPoint> const& __cordl_internal_get__OtherHand_k__BackingField() const;

constexpr ::UnityW<::VROSC::DashboardSpawnPoint>& __cordl_internal_get__OtherHand_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ShouldBeDropped_k__BackingField() const;

constexpr bool& __cordl_internal_get__ShouldBeDropped_k__BackingField() ;

constexpr bool const& __cordl_internal_get__YPressed() const;

constexpr bool& __cordl_internal_get__YPressed() ;

constexpr ::UnityW<::VROSC::UI::UIColorGetter> const& __cordl_internal_get__activeRingColor() const;

constexpr ::UnityW<::VROSC::UI::UIColorGetter>& __cordl_internal_get__activeRingColor() ;

constexpr ::UnityW<::VROSC::UI::Meshes::ProceduralArc> const& __cordl_internal_get__arc() const;

constexpr ::UnityW<::VROSC::UI::Meshes::ProceduralArc>& __cordl_internal_get__arc() ;

constexpr ::VROSC::TooltipData* const& __cordl_internal_get__dropTooltip() const;

constexpr ::VROSC::TooltipData*& __cordl_internal_get__dropTooltip() ;

constexpr float_t const& __cordl_internal_get__lookAtSensitivity() const;

constexpr float_t& __cordl_internal_get__lookAtSensitivity() ;

constexpr float_t const& __cordl_internal_get__lookatTimeRequired() const;

constexpr float_t& __cordl_internal_get__lookatTimeRequired() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__offset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__offset() ;

constexpr ::VROSC::TooltipData* const& __cordl_internal_get__openTooltip() const;

constexpr ::VROSC::TooltipData*& __cordl_internal_get__openTooltip() ;

constexpr bool const& __cordl_internal_get__showingTooltip() const;

constexpr bool& __cordl_internal_get__showingTooltip() ;

constexpr void __cordl_internal_set__ActivationAmount_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__DashboardIsAtHand_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__InputDevice_k__BackingField(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__IsRightHand_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__OtherHand_k__BackingField(::UnityW<::VROSC::DashboardSpawnPoint>  value) ;

constexpr void __cordl_internal_set__ShouldBeDropped_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__YPressed(bool  value) ;

constexpr void __cordl_internal_set__activeRingColor(::UnityW<::VROSC::UI::UIColorGetter>  value) ;

constexpr void __cordl_internal_set__arc(::UnityW<::VROSC::UI::Meshes::ProceduralArc>  value) ;

constexpr void __cordl_internal_set__dropTooltip(::VROSC::TooltipData*  value) ;

constexpr void __cordl_internal_set__lookAtSensitivity(float_t  value) ;

constexpr void __cordl_internal_set__lookatTimeRequired(float_t  value) ;

constexpr void __cordl_internal_set__offset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__openTooltip(::VROSC::TooltipData*  value) ;

constexpr void __cordl_internal_set__showingTooltip(bool  value) ;

/// @brief Method .ctor, addr 0x1737358, size 0xd4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActivationAmount, addr 0x1736744, size 0x8, virtual false, abstract: false, final false
inline float_t get_ActivationAmount() ;

/// @brief Method get_DashboardIsAtHand, addr 0x1736790, size 0x8, virtual false, abstract: false, final false
inline bool get_DashboardIsAtHand() ;

/// @brief Method get_InputDevice, addr 0x17367cc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::InputDevice> get_InputDevice() ;

/// @brief Method get_IsRightHand, addr 0x173677c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsRightHand() ;

/// @brief Method get_OtherHand, addr 0x1736768, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::DashboardSpawnPoint> get_OtherHand() ;

/// @brief Method get_ShouldBeDropped, addr 0x1736758, size 0x8, virtual false, abstract: false, final false
inline bool get_ShouldBeDropped() ;

/// @brief Method get_TransformedDirection, addr 0x1736798, size 0x2c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_TransformedDirection() ;

/// @brief Method set_ActivationAmount, addr 0x173673c, size 0x8, virtual false, abstract: false, final false
inline void set_ActivationAmount(float_t  value) ;

/// @brief Method set_DashboardIsAtHand, addr 0x1736784, size 0xc, virtual false, abstract: false, final false
inline void set_DashboardIsAtHand(bool  value) ;

/// @brief Method set_InputDevice, addr 0x17367c4, size 0x8, virtual false, abstract: false, final false
inline void set_InputDevice(::VROSC::InputDevice*  value) ;

/// @brief Method set_IsRightHand, addr 0x1736770, size 0xc, virtual false, abstract: false, final false
inline void set_IsRightHand(bool  value) ;

/// @brief Method set_OtherHand, addr 0x1736760, size 0x8, virtual false, abstract: false, final false
inline void set_OtherHand(::VROSC::DashboardSpawnPoint*  value) ;

/// @brief Method set_ShouldBeDropped, addr 0x173674c, size 0xc, virtual false, abstract: false, final false
inline void set_ShouldBeDropped(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DashboardSpawnPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DashboardSpawnPoint", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DashboardSpawnPoint(DashboardSpawnPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DashboardSpawnPoint", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DashboardSpawnPoint(DashboardSpawnPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1085};

/// @brief Field <ActivationAmount>k__BackingField, offset: 0x20, size: 0x4, def value: None
 float_t  ____ActivationAmount_k__BackingField;

/// @brief Field <ShouldBeDropped>k__BackingField, offset: 0x24, size: 0x1, def value: None
 bool  ____ShouldBeDropped_k__BackingField;

/// @brief Field <OtherHand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::DashboardSpawnPoint>  ____OtherHand_k__BackingField;

/// @brief Field <IsRightHand>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  ____IsRightHand_k__BackingField;

/// @brief Field <DashboardIsAtHand>k__BackingField, offset: 0x31, size: 0x1, def value: None
 bool  ____DashboardIsAtHand_k__BackingField;

/// @brief Field <InputDevice>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____InputDevice_k__BackingField;

/// @brief Field _activeRingColor, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIColorGetter>  ____activeRingColor;

/// @brief Field _lookAtSensitivity, offset: 0x48, size: 0x4, def value: None
 float_t  ____lookAtSensitivity;

/// @brief Field _lookatTimeRequired, offset: 0x4c, size: 0x4, def value: None
 float_t  ____lookatTimeRequired;

/// @brief Field _offset, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____offset;

/// @brief Field _arc, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::Meshes::ProceduralArc>  ____arc;

/// @brief Field _YPressed, offset: 0x68, size: 0x1, def value: None
 bool  ____YPressed;

/// @brief Field _showingTooltip, offset: 0x69, size: 0x1, def value: None
 bool  ____showingTooltip;

/// @brief Field _openTooltip, offset: 0x70, size: 0x8, def value: None
 ::VROSC::TooltipData*  ____openTooltip;

/// @brief Field _dropTooltip, offset: 0x78, size: 0x8, def value: None
 ::VROSC::TooltipData*  ____dropTooltip;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DashboardSpawnPoint, ____ActivationAmount_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardSpawnPoint, ____ShouldBeDropped_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardSpawnPoint, ____OtherHand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardSpawnPoint, ____IsRightHand_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardSpawnPoint, ____DashboardIsAtHand_k__BackingField) == 0x31, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardSpawnPoint, ____InputDevice_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardSpawnPoint, ____activeRingColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardSpawnPoint, ____lookAtSensitivity) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardSpawnPoint, ____lookatTimeRequired) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardSpawnPoint, ____offset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardSpawnPoint, ____arc) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardSpawnPoint, ____YPressed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardSpawnPoint, ____showingTooltip) == 0x69, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardSpawnPoint, ____openTooltip) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardSpawnPoint, ____dropTooltip) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DashboardSpawnPoint, 0x80>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DashboardSpawnPoint_TriggerCondition, "VROSC", "DashboardSpawnPoint/TriggerCondition");
NEED_NO_BOX(::VROSC::DashboardSpawnPoint);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DashboardSpawnPoint*, "VROSC", "DashboardSpawnPoint");
