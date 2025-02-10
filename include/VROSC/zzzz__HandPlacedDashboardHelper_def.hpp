#pragma once
// IWYU pragma private; include "VROSC/HandPlacedDashboardHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__DashboardSpawnPoint_def.hpp"
CORDL_MODULE_EXPORT(HandPlacedDashboardHelper)
namespace VROSC {
class DashboardSpawnPoint;
}
namespace VROSC {
class InputDevice;
}
// Forward declare root types
namespace VROSC {
class HandPlacedDashboardHelper;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::HandPlacedDashboardHelper);
// Dependencies UnityEngine.MonoBehaviour, VROSC.DashboardSpawnPoint::TriggerCondition
namespace VROSC {
// Is value type: false
// CS Name: VROSC.HandPlacedDashboardHelper
class CORDL_TYPE HandPlacedDashboardHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_DashBoardAtHand, put=set_DashBoardAtHand)) ::UnityW<::VROSC::DashboardSpawnPoint>  DashBoardAtHand;

 __declspec(property(get=get_MostActivePoint, put=set_MostActivePoint)) ::UnityW<::VROSC::DashboardSpawnPoint>  MostActivePoint;

/// @brief Field <DashBoardAtHand>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__DashBoardAtHand_k__BackingField, put=__cordl_internal_set__DashBoardAtHand_k__BackingField)) ::UnityW<::VROSC::DashboardSpawnPoint>  _DashBoardAtHand_k__BackingField;

/// @brief Field <MostActivePoint>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__MostActivePoint_k__BackingField, put=__cordl_internal_set__MostActivePoint_k__BackingField)) ::UnityW<::VROSC::DashboardSpawnPoint>  _MostActivePoint_k__BackingField;

/// @brief Field _condition, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__condition, put=__cordl_internal_set__condition)) ::VROSC::DashboardSpawnPoint_TriggerCondition  _condition;

/// @brief Field _leftHand, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftHand, put=__cordl_internal_set__leftHand)) ::UnityW<::VROSC::DashboardSpawnPoint>  _leftHand;

/// @brief Field _rightHand, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightHand, put=__cordl_internal_set__rightHand)) ::UnityW<::VROSC::DashboardSpawnPoint>  _rightHand;

/// @brief Method EvaluateActivationCondition, addr 0x1738698, size 0x48, virtual false, abstract: false, final false
inline bool EvaluateActivationCondition() ;

/// @brief Method EvaluateDeactivationCondition, addr 0x1738718, size 0x88, virtual false, abstract: false, final false
inline bool EvaluateDeactivationCondition() ;

/// @brief Method EvaluateDropCondition, addr 0x17385ec, size 0x88, virtual false, abstract: false, final false
inline bool EvaluateDropCondition() ;

static inline ::VROSC::HandPlacedDashboardHelper* New_ctor() ;

/// @brief Method SetDashboardIsInHand, addr 0x17382c4, size 0xa0, virtual false, abstract: false, final false
inline void SetDashboardIsInHand(bool  inHands) ;

/// @brief Method Setup, addr 0x17388ac, size 0x58, virtual false, abstract: false, final false
inline void Setup(::VROSC::InputDevice*  left, ::VROSC::InputDevice*  right) ;

/// @brief Method UpdateInput, addr 0x1738904, size 0xe8, virtual false, abstract: false, final false
inline void UpdateInput() ;

constexpr ::UnityW<::VROSC::DashboardSpawnPoint> const& __cordl_internal_get__DashBoardAtHand_k__BackingField() const;

constexpr ::UnityW<::VROSC::DashboardSpawnPoint>& __cordl_internal_get__DashBoardAtHand_k__BackingField() ;

constexpr ::UnityW<::VROSC::DashboardSpawnPoint> const& __cordl_internal_get__MostActivePoint_k__BackingField() const;

constexpr ::UnityW<::VROSC::DashboardSpawnPoint>& __cordl_internal_get__MostActivePoint_k__BackingField() ;

constexpr ::VROSC::DashboardSpawnPoint_TriggerCondition const& __cordl_internal_get__condition() const;

constexpr ::VROSC::DashboardSpawnPoint_TriggerCondition& __cordl_internal_get__condition() ;

constexpr ::UnityW<::VROSC::DashboardSpawnPoint> const& __cordl_internal_get__leftHand() const;

constexpr ::UnityW<::VROSC::DashboardSpawnPoint>& __cordl_internal_get__leftHand() ;

constexpr ::UnityW<::VROSC::DashboardSpawnPoint> const& __cordl_internal_get__rightHand() const;

constexpr ::UnityW<::VROSC::DashboardSpawnPoint>& __cordl_internal_get__rightHand() ;

constexpr void __cordl_internal_set__DashBoardAtHand_k__BackingField(::UnityW<::VROSC::DashboardSpawnPoint>  value) ;

constexpr void __cordl_internal_set__MostActivePoint_k__BackingField(::UnityW<::VROSC::DashboardSpawnPoint>  value) ;

constexpr void __cordl_internal_set__condition(::VROSC::DashboardSpawnPoint_TriggerCondition  value) ;

constexpr void __cordl_internal_set__leftHand(::UnityW<::VROSC::DashboardSpawnPoint>  value) ;

constexpr void __cordl_internal_set__rightHand(::UnityW<::VROSC::DashboardSpawnPoint>  value) ;

/// @brief Method .ctor, addr 0x17389ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DashBoardAtHand, addr 0x17388a4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::DashboardSpawnPoint> get_DashBoardAtHand() ;

/// @brief Method get_MostActivePoint, addr 0x1738894, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::DashboardSpawnPoint> get_MostActivePoint() ;

/// @brief Method set_DashBoardAtHand, addr 0x173889c, size 0x8, virtual false, abstract: false, final false
inline void set_DashBoardAtHand(::VROSC::DashboardSpawnPoint*  value) ;

/// @brief Method set_MostActivePoint, addr 0x173888c, size 0x8, virtual false, abstract: false, final false
inline void set_MostActivePoint(::VROSC::DashboardSpawnPoint*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandPlacedDashboardHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandPlacedDashboardHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HandPlacedDashboardHelper(HandPlacedDashboardHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandPlacedDashboardHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandPlacedDashboardHelper(HandPlacedDashboardHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1090};

/// @brief Field _condition, offset: 0x20, size: 0x4, def value: None
 ::VROSC::DashboardSpawnPoint_TriggerCondition  ____condition;

/// @brief Field _leftHand, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::DashboardSpawnPoint>  ____leftHand;

/// @brief Field _rightHand, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::DashboardSpawnPoint>  ____rightHand;

/// @brief Field <MostActivePoint>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::DashboardSpawnPoint>  ____MostActivePoint_k__BackingField;

/// @brief Field <DashBoardAtHand>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::DashboardSpawnPoint>  ____DashBoardAtHand_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::HandPlacedDashboardHelper, ____condition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::HandPlacedDashboardHelper, ____leftHand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::HandPlacedDashboardHelper, ____rightHand) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::HandPlacedDashboardHelper, ____MostActivePoint_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::HandPlacedDashboardHelper, ____DashBoardAtHand_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::HandPlacedDashboardHelper, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::HandPlacedDashboardHelper);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HandPlacedDashboardHelper*, "VROSC", "HandPlacedDashboardHelper");
