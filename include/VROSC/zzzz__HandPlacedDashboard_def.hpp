#pragma once
// IWYU pragma private; include "VROSC/HandPlacedDashboard.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__Dashboard_def.hpp"
CORDL_MODULE_EXPORT(HandPlacedDashboard)
namespace VROSC {
class ClickData;
}
namespace VROSC {
class DashboardPositioning;
}
namespace VROSC {
class TransformMover;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class WorldTransformData;
}
// Forward declare root types
namespace VROSC {
class HandPlacedDashboard;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::HandPlacedDashboard);
// Dependencies UnityEngine.Vector3, VROSC.Dashboard
namespace VROSC {
// Is value type: false
// CS Name: VROSC.HandPlacedDashboard
class CORDL_TYPE HandPlacedDashboard : public ::VROSC::Dashboard {
public:
// Declarations
/// @brief Field _closeFloatingButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeFloatingButton, put=__cordl_internal_set__closeFloatingButton)) ::UnityW<::VROSC::UIButton>  _closeFloatingButton;

/// @brief Field _dashboardOriginalScale, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get__dashboardOriginalScale, put=__cordl_internal_set__dashboardOriginalScale)) ::UnityEngine::Vector3  _dashboardOriginalScale;

/// @brief Field _lookAtBehaviour, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__lookAtBehaviour, put=__cordl_internal_set__lookAtBehaviour)) ::UnityW<::VROSC::DashboardPositioning>  _lookAtBehaviour;

/// @brief Field _mover, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__mover, put=__cordl_internal_set__mover)) ::UnityW<::VROSC::TransformMover>  _mover;

/// @brief Field freeFloatData, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_freeFloatData, put=__cordl_internal_set_freeFloatData)) ::VROSC::WorldTransformData*  freeFloatData;

/// @brief Method Awake, addr 0x1737dfc, size 0x2a4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method DashboardToggled, addr 0x17387a0, size 0x98, virtual false, abstract: false, final false
inline void DashboardToggled(bool  toggled) ;

/// @brief Method EvaluateActivationCondition, addr 0x1738674, size 0x24, virtual true, abstract: false, final false
inline bool EvaluateActivationCondition() ;

/// @brief Method EvaluateDeactivationCondition, addr 0x17386e0, size 0x38, virtual true, abstract: false, final false
inline bool EvaluateDeactivationCondition() ;

/// @brief Method EvaluateDropCondition, addr 0x17385b4, size 0x38, virtual true, abstract: false, final false
inline bool EvaluateDropCondition() ;

/// @brief Method Grab, addr 0x1738204, size 0xc, virtual false, abstract: false, final false
inline void Grab(::VROSC::TransformMover*  mover) ;

/// @brief Method MoveToHand, addr 0x17383b0, size 0xc0, virtual true, abstract: false, final false
inline void MoveToHand() ;

static inline ::VROSC::HandPlacedDashboard* New_ctor() ;

/// @brief Method PlaceDashboard, addr 0x1738838, size 0x4c, virtual true, abstract: false, final false
inline void PlaceDashboard() ;

/// @brief Method ReturnToFreeFloat, addr 0x17384cc, size 0x90, virtual true, abstract: false, final false
inline void ReturnToFreeFloat() ;

/// @brief Method SetFreeFloating, addr 0x1738210, size 0xb4, virtual true, abstract: false, final false
inline void SetFreeFloating() ;

/// @brief Method SetHandheld, addr 0x17380a0, size 0x3c, virtual false, abstract: false, final false
inline void SetHandheld(::VROSC::ClickData*  clickData) ;

/// @brief Method Update, addr 0x1738364, size 0x4c, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__closeFloatingButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__closeFloatingButton() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__dashboardOriginalScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__dashboardOriginalScale() ;

constexpr ::UnityW<::VROSC::DashboardPositioning> const& __cordl_internal_get__lookAtBehaviour() const;

constexpr ::UnityW<::VROSC::DashboardPositioning>& __cordl_internal_get__lookAtBehaviour() ;

constexpr ::UnityW<::VROSC::TransformMover> const& __cordl_internal_get__mover() const;

constexpr ::UnityW<::VROSC::TransformMover>& __cordl_internal_get__mover() ;

constexpr ::VROSC::WorldTransformData* const& __cordl_internal_get_freeFloatData() const;

constexpr ::VROSC::WorldTransformData*& __cordl_internal_get_freeFloatData() ;

constexpr void __cordl_internal_set__closeFloatingButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__dashboardOriginalScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__lookAtBehaviour(::UnityW<::VROSC::DashboardPositioning>  value) ;

constexpr void __cordl_internal_set__mover(::UnityW<::VROSC::TransformMover>  value) ;

constexpr void __cordl_internal_set_freeFloatData(::VROSC::WorldTransformData*  value) ;

/// @brief Method .ctor, addr 0x1738884, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandPlacedDashboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandPlacedDashboard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HandPlacedDashboard(HandPlacedDashboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandPlacedDashboard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandPlacedDashboard(HandPlacedDashboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1089};

/// @brief Field _lookAtBehaviour, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::DashboardPositioning>  ____lookAtBehaviour;

/// @brief Field _mover, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::TransformMover>  ____mover;

/// @brief Field _closeFloatingButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____closeFloatingButton;

/// @brief Field freeFloatData, offset: 0x48, size: 0x8, def value: None
 ::VROSC::WorldTransformData*  ___freeFloatData;

/// @brief Field _dashboardOriginalScale, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____dashboardOriginalScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::HandPlacedDashboard, ____lookAtBehaviour) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::HandPlacedDashboard, ____mover) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::HandPlacedDashboard, ____closeFloatingButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::HandPlacedDashboard, ___freeFloatData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::HandPlacedDashboard, ____dashboardOriginalScale) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::HandPlacedDashboard, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::HandPlacedDashboard);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HandPlacedDashboard*, "VROSC", "HandPlacedDashboard");
