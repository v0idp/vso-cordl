#pragma once
// IWYU pragma private; include "VROSC/DashboardPositioning.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DashboardPositioning)
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class VRPlayer;
}
// Forward declare root types
namespace VROSC {
class DashboardPositioning;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DashboardPositioning);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DashboardPositioning
class CORDL_TYPE DashboardPositioning : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _cameraCenter, offset 0x6c, size 0xc 
 __declspec(property(get=__cordl_internal_get__cameraCenter, put=__cordl_internal_set__cameraCenter)) ::UnityEngine::Vector3  _cameraCenter;

/// @brief Field _cameraPosition, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get__cameraPosition, put=__cordl_internal_set__cameraPosition)) ::UnityEngine::Vector3  _cameraPosition;

/// @brief Field _controllerPosition, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get__controllerPosition, put=__cordl_internal_set__controllerPosition)) ::UnityEngine::Vector3  _controllerPosition;

/// @brief Field _dashboardPosition, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get__dashboardPosition, put=__cordl_internal_set__dashboardPosition)) ::UnityEngine::Vector3  _dashboardPosition;

/// @brief Field _debugPlayerDepth, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__debugPlayerDepth, put=__cordl_internal_set__debugPlayerDepth)) float_t  _debugPlayerDepth;

/// @brief Field _distanceFromHand, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__distanceFromHand, put=__cordl_internal_set__distanceFromHand)) float_t  _distanceFromHand;

/// @brief Field _isInRightHand, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInRightHand, put=__cordl_internal_set__isInRightHand)) bool  _isInRightHand;

/// @brief Field _lookAtPoint, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get__lookAtPoint, put=__cordl_internal_set__lookAtPoint)) ::UnityEngine::Vector3  _lookAtPoint;

/// @brief Field _lookAtPointAbovePlayer, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__lookAtPointAbovePlayer, put=__cordl_internal_set__lookAtPointAbovePlayer)) float_t  _lookAtPointAbovePlayer;

/// @brief Field _moveTowardsCamera, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__moveTowardsCamera, put=__cordl_internal_set__moveTowardsCamera)) float_t  _moveTowardsCamera;

/// @brief Field _rectTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rectTransform, put=__cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform>  _rectTransform;

/// @brief Method Awake, addr 0x1736154, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LookAtDebugPlayer, addr 0x1736298, size 0xb4, virtual false, abstract: false, final false
inline void LookAtDebugPlayer(::UnityEngine::Transform*  cameraTransform) ;

/// @brief Method LookAtPlayer, addr 0x173634c, size 0x300, virtual false, abstract: false, final false
inline void LookAtPlayer(::UnityEngine::Transform*  cameraTransform, ::VROSC::VRPlayer*  vrPlayer, bool  activeInRightHand) ;

static inline ::VROSC::DashboardPositioning* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x173664c, size 0xdc, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method UpdateDashboardHandPosition, addr 0x17361a4, size 0xf4, virtual false, abstract: false, final false
inline void UpdateDashboardHandPosition(bool  activeInRightHand) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__cameraCenter() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__cameraCenter() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__cameraPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__cameraPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__controllerPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__controllerPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__dashboardPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__dashboardPosition() ;

constexpr float_t const& __cordl_internal_get__debugPlayerDepth() const;

constexpr float_t& __cordl_internal_get__debugPlayerDepth() ;

constexpr float_t const& __cordl_internal_get__distanceFromHand() const;

constexpr float_t& __cordl_internal_get__distanceFromHand() ;

constexpr bool const& __cordl_internal_get__isInRightHand() const;

constexpr bool& __cordl_internal_get__isInRightHand() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lookAtPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lookAtPoint() ;

constexpr float_t const& __cordl_internal_get__lookAtPointAbovePlayer() const;

constexpr float_t& __cordl_internal_get__lookAtPointAbovePlayer() ;

constexpr float_t const& __cordl_internal_get__moveTowardsCamera() const;

constexpr float_t& __cordl_internal_get__moveTowardsCamera() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform() ;

constexpr void __cordl_internal_set__cameraCenter(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__cameraPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__controllerPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__dashboardPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__debugPlayerDepth(float_t  value) ;

constexpr void __cordl_internal_set__distanceFromHand(float_t  value) ;

constexpr void __cordl_internal_set__isInRightHand(bool  value) ;

constexpr void __cordl_internal_set__lookAtPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__lookAtPointAbovePlayer(float_t  value) ;

constexpr void __cordl_internal_set__moveTowardsCamera(float_t  value) ;

constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x1736728, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DashboardPositioning() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DashboardPositioning", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DashboardPositioning(DashboardPositioning && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DashboardPositioning", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DashboardPositioning(DashboardPositioning const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1083};

/// @brief Field _distanceFromHand, offset: 0x20, size: 0x4, def value: None
 float_t  ____distanceFromHand;

/// @brief Field _moveTowardsCamera, offset: 0x24, size: 0x4, def value: None
 float_t  ____moveTowardsCamera;

/// @brief Field _lookAtPointAbovePlayer, offset: 0x28, size: 0x4, def value: None
 float_t  ____lookAtPointAbovePlayer;

/// @brief Field _debugPlayerDepth, offset: 0x2c, size: 0x4, def value: None
 float_t  ____debugPlayerDepth;

/// @brief Field _rectTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____rectTransform;

/// @brief Field _isInRightHand, offset: 0x38, size: 0x1, def value: None
 bool  ____isInRightHand;

/// @brief Field _lookAtPoint, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lookAtPoint;

/// @brief Field _controllerPosition, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____controllerPosition;

/// @brief Field _cameraPosition, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____cameraPosition;

/// @brief Field _dashboardPosition, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____dashboardPosition;

/// @brief Field _cameraCenter, offset: 0x6c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____cameraCenter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DashboardPositioning, ____distanceFromHand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardPositioning, ____moveTowardsCamera) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardPositioning, ____lookAtPointAbovePlayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardPositioning, ____debugPlayerDepth) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardPositioning, ____rectTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardPositioning, ____isInRightHand) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardPositioning, ____lookAtPoint) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardPositioning, ____controllerPosition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardPositioning, ____cameraPosition) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardPositioning, ____dashboardPosition) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardPositioning, ____cameraCenter) == 0x6c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DashboardPositioning, 0x78>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DashboardPositioning);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DashboardPositioning*, "VROSC", "DashboardPositioning");
