#pragma once
// IWYU pragma private; include "VROSC/MoveOnPlane.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__Grabable_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MoveOnPlane)
namespace System {
class Action;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class GrabData;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class MovementPlane;
}
namespace VROSC {
class SmoothMovement;
}
namespace VROSC {
struct TriggerButton;
}
// Forward declare root types
namespace VROSC {
class MoveOnPlane;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MoveOnPlane);
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3, VROSC.Grabable
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MoveOnPlane
class CORDL_TYPE MoveOnPlane : public ::VROSC::Grabable {
public:
// Declarations
/// @brief Field OnGrabBegin, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGrabBegin, put=__cordl_internal_set_OnGrabBegin)) ::System::Action*  OnGrabBegin;

/// @brief Field OnGrabEnd, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGrabEnd, put=__cordl_internal_set_OnGrabEnd)) ::System::Action*  OnGrabEnd;

/// @brief Field OnPositioningComplete, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPositioningComplete, put=__cordl_internal_set_OnPositioningComplete)) ::System::Action*  OnPositioningComplete;

/// @brief Field _constrain, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__constrain, put=__cordl_internal_set__constrain)) ::UnityW<::UnityEngine::RectTransform>  _constrain;

/// @brief Field _grabOffset, offset 0xb8, size 0xc 
 __declspec(property(get=__cordl_internal_get__grabOffset, put=__cordl_internal_set__grabOffset)) ::UnityEngine::Vector3  _grabOffset;

/// @brief Field _grabRotation, offset 0xc4, size 0x10 
 __declspec(property(get=__cordl_internal_get__grabRotation, put=__cordl_internal_set__grabRotation)) ::UnityEngine::Quaternion  _grabRotation;

/// @brief Field _grabber, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabber, put=__cordl_internal_set__grabber)) ::UnityW<::VROSC::InputDevice>  _grabber;

/// @brief Field _lastPlaneHit, offset 0x98, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastPlaneHit, put=__cordl_internal_set__lastPlaneHit)) ::UnityEngine::Vector3  _lastPlaneHit;

/// @brief Field _liftAmount, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__liftAmount, put=__cordl_internal_set__liftAmount)) float_t  _liftAmount;

/// @brief Field _plane, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__plane, put=__cordl_internal_set__plane)) ::UnityW<::VROSC::MovementPlane>  _plane;

/// @brief Field _smoothMovement, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__smoothMovement, put=__cordl_internal_set__smoothMovement)) ::VROSC::SmoothMovement*  _smoothMovement;

/// @brief Field _smoothing, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__smoothing, put=__cordl_internal_set__smoothing)) float_t  _smoothing;

/// @brief Field _target, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::Transform>  _target;

/// @brief Method BeamPositionOnGrid, addr 0x1743894, size 0xb4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 BeamPositionOnGrid() ;

/// @brief Method ButtonEnd, addr 0x17434f8, size 0xa8, virtual false, abstract: false, final false
inline void ButtonEnd(::VROSC::InputDevice*  inputDevice, ::VROSC::TriggerButton  button) ;

/// @brief Method Grab, addr 0x1743640, size 0x104, virtual true, abstract: false, final false
inline void Grab(::VROSC::GrabData*  data, bool  grabbing) ;

/// @brief Method GrabBegin, addr 0x1743744, size 0x150, virtual false, abstract: false, final false
inline void GrabBegin(::VROSC::InputDevice*  grabber) ;

/// @brief Method LateUpdate, addr 0x17435c0, size 0x80, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::VROSC::MoveOnPlane* New_ctor() ;

/// @brief Method OnDisable, addr 0x1743400, size 0xf8, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmos, addr 0x1743ac8, size 0xb4, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnEnable, addr 0x1743308, size 0xf8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Setup, addr 0x1743260, size 0xa8, virtual false, abstract: false, final false
inline void Setup(::UnityEngine::Transform*  target, ::VROSC::MovementPlane*  movementPlane) ;

/// @brief Method StopGrab, addr 0x17435a0, size 0x20, virtual false, abstract: false, final false
inline void StopGrab() ;

/// @brief Method UpdateGrab, addr 0x1743948, size 0x180, virtual true, abstract: false, final false
inline void UpdateGrab() ;

constexpr ::System::Action* const& __cordl_internal_get_OnGrabBegin() const;

constexpr ::System::Action*& __cordl_internal_get_OnGrabBegin() ;

constexpr ::System::Action* const& __cordl_internal_get_OnGrabEnd() const;

constexpr ::System::Action*& __cordl_internal_get_OnGrabEnd() ;

constexpr ::System::Action* const& __cordl_internal_get_OnPositioningComplete() const;

constexpr ::System::Action*& __cordl_internal_get_OnPositioningComplete() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__constrain() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__constrain() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__grabOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__grabOffset() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__grabRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__grabRotation() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__grabber() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__grabber() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastPlaneHit() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastPlaneHit() ;

constexpr float_t const& __cordl_internal_get__liftAmount() const;

constexpr float_t& __cordl_internal_get__liftAmount() ;

constexpr ::UnityW<::VROSC::MovementPlane> const& __cordl_internal_get__plane() const;

constexpr ::UnityW<::VROSC::MovementPlane>& __cordl_internal_get__plane() ;

constexpr ::VROSC::SmoothMovement* const& __cordl_internal_get__smoothMovement() const;

constexpr ::VROSC::SmoothMovement*& __cordl_internal_get__smoothMovement() ;

constexpr float_t const& __cordl_internal_get__smoothing() const;

constexpr float_t& __cordl_internal_get__smoothing() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set_OnGrabBegin(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnGrabEnd(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnPositioningComplete(::System::Action*  value) ;

constexpr void __cordl_internal_set__constrain(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__grabOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__grabRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__grabber(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__lastPlaneHit(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__liftAmount(float_t  value) ;

constexpr void __cordl_internal_set__plane(::UnityW<::VROSC::MovementPlane>  value) ;

constexpr void __cordl_internal_set__smoothMovement(::VROSC::SmoothMovement*  value) ;

constexpr void __cordl_internal_set__smoothing(float_t  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1743b7c, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MoveOnPlane() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MoveOnPlane", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MoveOnPlane(MoveOnPlane && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MoveOnPlane", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MoveOnPlane(MoveOnPlane const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1120};

/// @brief Field _constrain, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____constrain;

/// @brief Field _liftAmount, offset: 0x80, size: 0x4, def value: None
 float_t  ____liftAmount;

/// @brief Field _smoothing, offset: 0x84, size: 0x4, def value: None
 float_t  ____smoothing;

/// @brief Field _plane, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::VROSC::MovementPlane>  ____plane;

/// @brief Field _target, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____target;

/// @brief Field _lastPlaneHit, offset: 0x98, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastPlaneHit;

/// @brief Field _smoothMovement, offset: 0xa8, size: 0x8, def value: None
 ::VROSC::SmoothMovement*  ____smoothMovement;

/// @brief Field _grabber, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____grabber;

/// @brief Field _grabOffset, offset: 0xb8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____grabOffset;

/// @brief Field _grabRotation, offset: 0xc4, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____grabRotation;

/// @brief Field OnGrabBegin, offset: 0xd8, size: 0x8, def value: None
 ::System::Action*  ___OnGrabBegin;

/// @brief Field OnGrabEnd, offset: 0xe0, size: 0x8, def value: None
 ::System::Action*  ___OnGrabEnd;

/// @brief Field OnPositioningComplete, offset: 0xe8, size: 0x8, def value: None
 ::System::Action*  ___OnPositioningComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MoveOnPlane, ____constrain) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::MoveOnPlane, ____liftAmount) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::MoveOnPlane, ____smoothing) == 0x84, "Offset mismatch!");

static_assert(offsetof(::VROSC::MoveOnPlane, ____plane) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::MoveOnPlane, ____target) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::MoveOnPlane, ____lastPlaneHit) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::MoveOnPlane, ____smoothMovement) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::MoveOnPlane, ____grabber) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::MoveOnPlane, ____grabOffset) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::VROSC::MoveOnPlane, ____grabRotation) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::VROSC::MoveOnPlane, ___OnGrabBegin) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::VROSC::MoveOnPlane, ___OnGrabEnd) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::VROSC::MoveOnPlane, ___OnPositioningComplete) == 0xe8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MoveOnPlane, 0xf0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MoveOnPlane);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MoveOnPlane*, "VROSC", "MoveOnPlane");
