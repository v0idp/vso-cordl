#pragma once
// IWYU pragma private; include "VROSC/GrabbingDevice.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GrabbingDevice)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
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
class SmoothMovement;
}
namespace VROSC {
class TooltipData;
}
namespace VROSC {
class TransformMover;
}
namespace VROSC {
class WorldTransformData;
}
// Forward declare root types
namespace VROSC {
class GrabbingDevice;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::GrabbingDevice);
// Dependencies System.Object, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.GrabbingDevice
class CORDL_TYPE GrabbingDevice : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AnchorGrabPosition, put=set_AnchorGrabPosition)) ::UnityEngine::Vector3  AnchorGrabPosition;

 __declspec(property(get=get_AnchorPosition, put=set_AnchorPosition)) ::UnityEngine::Vector3  AnchorPosition;

 __declspec(property(get=get_ControllerGrabPosition, put=set_ControllerGrabPosition)) ::UnityEngine::Vector3  ControllerGrabPosition;

 __declspec(property(get=get_CurrentPosition)) ::UnityEngine::Vector3  CurrentPosition;

 __declspec(property(get=get_FullAnchorData, put=set_FullAnchorData)) ::VROSC::WorldTransformData*  FullAnchorData;

 __declspec(property(get=get_GrabData, put=set_GrabData)) ::VROSC::GrabData*  GrabData;

 __declspec(property(get=get_GrabPositionOnObject)) ::UnityEngine::Vector3  GrabPositionOnObject;

 __declspec(property(get=get_InputDevice)) ::UnityW<::VROSC::InputDevice>  InputDevice;

 __declspec(property(get=get_MoveOffset)) ::UnityEngine::Vector3  MoveOffset;

 __declspec(property(get=get_Rotator, put=set_Rotator)) ::UnityW<::UnityEngine::GameObject>  Rotator;

/// @brief Field SmoothAnchorOffset, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_SmoothAnchorOffset, put=__cordl_internal_set_SmoothAnchorOffset)) ::VROSC::SmoothMovement*  SmoothAnchorOffset;

/// @brief Field SmoothPosition, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_SmoothPosition, put=__cordl_internal_set_SmoothPosition)) ::VROSC::SmoothMovement*  SmoothPosition;

 __declspec(property(get=get_TransformPoint, put=set_TransformPoint)) ::UnityW<::UnityEngine::GameObject>  TransformPoint;

 __declspec(property(get=get_UpRightHelper, put=set_UpRightHelper)) ::UnityW<::UnityEngine::GameObject>  UpRightHelper;

/// @brief Field <AnchorGrabPosition>k__BackingField, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get__AnchorGrabPosition_k__BackingField, put=__cordl_internal_set__AnchorGrabPosition_k__BackingField)) ::UnityEngine::Vector3  _AnchorGrabPosition_k__BackingField;

/// @brief Field <AnchorPosition>k__BackingField, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get__AnchorPosition_k__BackingField, put=__cordl_internal_set__AnchorPosition_k__BackingField)) ::UnityEngine::Vector3  _AnchorPosition_k__BackingField;

/// @brief Field <ControllerGrabPosition>k__BackingField, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get__ControllerGrabPosition_k__BackingField, put=__cordl_internal_set__ControllerGrabPosition_k__BackingField)) ::UnityEngine::Vector3  _ControllerGrabPosition_k__BackingField;

/// @brief Field <FullAnchorData>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__FullAnchorData_k__BackingField, put=__cordl_internal_set__FullAnchorData_k__BackingField)) ::VROSC::WorldTransformData*  _FullAnchorData_k__BackingField;

/// @brief Field <GrabData>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__GrabData_k__BackingField, put=__cordl_internal_set__GrabData_k__BackingField)) ::VROSC::GrabData*  _GrabData_k__BackingField;

/// @brief Field <Rotator>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__Rotator_k__BackingField, put=__cordl_internal_set__Rotator_k__BackingField)) ::UnityW<::UnityEngine::GameObject>  _Rotator_k__BackingField;

/// @brief Field <TransformPoint>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__TransformPoint_k__BackingField, put=__cordl_internal_set__TransformPoint_k__BackingField)) ::UnityW<::UnityEngine::GameObject>  _TransformPoint_k__BackingField;

/// @brief Field <UpRightHelper>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__UpRightHelper_k__BackingField, put=__cordl_internal_set__UpRightHelper_k__BackingField)) ::UnityW<::UnityEngine::GameObject>  _UpRightHelper_k__BackingField;

/// @brief Field _additiveRotation, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__additiveRotation, put=__cordl_internal_set__additiveRotation)) float_t  _additiveRotation;

/// @brief Field _controller, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::UnityEngine::Transform>  _controller;

/// @brief Field _currentRequestedTooltips, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentRequestedTooltips, put=__cordl_internal_set__currentRequestedTooltips)) ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  _currentRequestedTooltips;

/// @brief Field _grabDistance, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__grabDistance, put=__cordl_internal_set__grabDistance)) float_t  _grabDistance;

/// @brief Field _isOutsideIsPinnedWarningRange, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__isOutsideIsPinnedWarningRange, put=__cordl_internal_set__isOutsideIsPinnedWarningRange)) bool  _isOutsideIsPinnedWarningRange;

/// @brief Field _localGrabPositionFromController, offset 0x9c, size 0xc 
 __declspec(property(get=__cordl_internal_get__localGrabPositionFromController, put=__cordl_internal_set__localGrabPositionFromController)) ::UnityEngine::Vector3  _localGrabPositionFromController;

/// @brief Field _localGrabPositionFromObject, offset 0x90, size 0xc 
 __declspec(property(get=__cordl_internal_get__localGrabPositionFromObject, put=__cordl_internal_set__localGrabPositionFromObject)) ::UnityEngine::Vector3  _localGrabPositionFromObject;

/// @brief Field _transformMover, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformMover, put=__cordl_internal_set__transformMover)) ::UnityW<::VROSC::TransformMover>  _transformMover;

/// @brief Method CheckForIsPinnedWarning, addr 0x173c3d0, size 0x184, virtual false, abstract: false, final false
inline void CheckForIsPinnedWarning() ;

/// @brief Method EvaluateThumbstickInput, addr 0x173c554, size 0xa8, virtual false, abstract: false, final false
inline void EvaluateThumbstickInput(::VROSC::InputDevice*  device, ::UnityEngine::Vector2  vector) ;

/// @brief Method GetGrabPosition, addr 0x173b938, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetGrabPosition() ;

/// @brief Method GrabEnd, addr 0x173bdc8, size 0x170, virtual false, abstract: false, final false
inline void GrabEnd() ;

static inline ::VROSC::GrabbingDevice* New_ctor(::VROSC::GrabData*  grabData, ::VROSC::TransformMover*  transformMover) ;

/// @brief Method Place, addr 0x173bb64, size 0x264, virtual false, abstract: false, final false
inline void Place(bool  smoothed) ;

/// @brief Method PlaceOneHanded, addr 0x173c234, size 0x19c, virtual false, abstract: false, final false
inline void PlaceOneHanded() ;

/// @brief Method PointHelperTowards, addr 0x173b9d4, size 0x80, virtual false, abstract: false, final false
inline void PointHelperTowards(::UnityEngine::Vector3  direction, ::UnityEngine::Vector3  upwards) ;

/// @brief Method SetAnchor, addr 0x173b56c, size 0x3cc, virtual false, abstract: false, final false
inline void SetAnchor() ;

/// @brief Method SetGrabPosition, addr 0x173b994, size 0x40, virtual false, abstract: false, final false
inline void SetGrabPosition() ;

/// @brief Method UpdateIsGrabbedTooltips, addr 0x173bf38, size 0x2fc, virtual false, abstract: false, final false
inline void UpdateIsGrabbedTooltips(::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  tooltipDatas) ;

/// @brief Method Upright, addr 0x173ba54, size 0x110, virtual false, abstract: false, final false
inline void Upright() ;

constexpr ::VROSC::SmoothMovement* const& __cordl_internal_get_SmoothAnchorOffset() const;

constexpr ::VROSC::SmoothMovement*& __cordl_internal_get_SmoothAnchorOffset() ;

constexpr ::VROSC::SmoothMovement* const& __cordl_internal_get_SmoothPosition() const;

constexpr ::VROSC::SmoothMovement*& __cordl_internal_get_SmoothPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__AnchorGrabPosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__AnchorGrabPosition_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__AnchorPosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__AnchorPosition_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__ControllerGrabPosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__ControllerGrabPosition_k__BackingField() ;

constexpr ::VROSC::WorldTransformData* const& __cordl_internal_get__FullAnchorData_k__BackingField() const;

constexpr ::VROSC::WorldTransformData*& __cordl_internal_get__FullAnchorData_k__BackingField() ;

constexpr ::VROSC::GrabData* const& __cordl_internal_get__GrabData_k__BackingField() const;

constexpr ::VROSC::GrabData*& __cordl_internal_get__GrabData_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__Rotator_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__Rotator_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__TransformPoint_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__TransformPoint_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__UpRightHelper_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__UpRightHelper_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__additiveRotation() const;

constexpr float_t& __cordl_internal_get__additiveRotation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__controller() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::TooltipData*>* const& __cordl_internal_get__currentRequestedTooltips() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*& __cordl_internal_get__currentRequestedTooltips() ;

constexpr float_t const& __cordl_internal_get__grabDistance() const;

constexpr float_t& __cordl_internal_get__grabDistance() ;

constexpr bool const& __cordl_internal_get__isOutsideIsPinnedWarningRange() const;

constexpr bool& __cordl_internal_get__isOutsideIsPinnedWarningRange() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localGrabPositionFromController() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__localGrabPositionFromController() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localGrabPositionFromObject() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__localGrabPositionFromObject() ;

constexpr ::UnityW<::VROSC::TransformMover> const& __cordl_internal_get__transformMover() const;

constexpr ::UnityW<::VROSC::TransformMover>& __cordl_internal_get__transformMover() ;

constexpr void __cordl_internal_set_SmoothAnchorOffset(::VROSC::SmoothMovement*  value) ;

constexpr void __cordl_internal_set_SmoothPosition(::VROSC::SmoothMovement*  value) ;

constexpr void __cordl_internal_set__AnchorGrabPosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__AnchorPosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__ControllerGrabPosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__FullAnchorData_k__BackingField(::VROSC::WorldTransformData*  value) ;

constexpr void __cordl_internal_set__GrabData_k__BackingField(::VROSC::GrabData*  value) ;

constexpr void __cordl_internal_set__Rotator_k__BackingField(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__TransformPoint_k__BackingField(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__UpRightHelper_k__BackingField(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__additiveRotation(float_t  value) ;

constexpr void __cordl_internal_set__controller(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__currentRequestedTooltips(::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  value) ;

constexpr void __cordl_internal_set__grabDistance(float_t  value) ;

constexpr void __cordl_internal_set__isOutsideIsPinnedWarningRange(bool  value) ;

constexpr void __cordl_internal_set__localGrabPositionFromController(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__localGrabPositionFromObject(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__transformMover(::UnityW<::VROSC::TransformMover>  value) ;

/// @brief Method .ctor, addr 0x173b190, size 0x3dc, virtual false, abstract: false, final false
inline void _ctor(::VROSC::GrabData*  grabData, ::VROSC::TransformMover*  transformMover) ;

/// @brief Method get_AnchorGrabPosition, addr 0x173b0a4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_AnchorGrabPosition() ;

/// @brief Method get_AnchorPosition, addr 0x173b08c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_AnchorPosition() ;

/// @brief Method get_ControllerGrabPosition, addr 0x173b0bc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_ControllerGrabPosition() ;

/// @brief Method get_CurrentPosition, addr 0x173b0fc, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_CurrentPosition() ;

/// @brief Method get_FullAnchorData, addr 0x173b078, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::WorldTransformData* get_FullAnchorData() ;

/// @brief Method get_GrabData, addr 0x173b04c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::GrabData* get_GrabData() ;

/// @brief Method get_GrabPositionOnObject, addr 0x173b12c, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_GrabPositionOnObject() ;

/// @brief Method get_InputDevice, addr 0x173b054, size 0x1c, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::InputDevice> get_InputDevice() ;

/// @brief Method get_MoveOffset, addr 0x173b0c8, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_MoveOffset() ;

/// @brief Method get_Rotator, addr 0x173b168, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_Rotator() ;

/// @brief Method get_TransformPoint, addr 0x173b188, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_TransformPoint() ;

/// @brief Method get_UpRightHelper, addr 0x173b178, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_UpRightHelper() ;

/// @brief Method set_AnchorGrabPosition, addr 0x173b098, size 0xc, virtual false, abstract: false, final false
inline void set_AnchorGrabPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_AnchorPosition, addr 0x173b080, size 0xc, virtual false, abstract: false, final false
inline void set_AnchorPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_ControllerGrabPosition, addr 0x173b0b0, size 0xc, virtual false, abstract: false, final false
inline void set_ControllerGrabPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_FullAnchorData, addr 0x173b070, size 0x8, virtual false, abstract: false, final false
inline void set_FullAnchorData(::VROSC::WorldTransformData*  value) ;

/// @brief Method set_GrabData, addr 0x173b044, size 0x8, virtual false, abstract: false, final false
inline void set_GrabData(::VROSC::GrabData*  value) ;

/// @brief Method set_Rotator, addr 0x173b160, size 0x8, virtual false, abstract: false, final false
inline void set_Rotator(::UnityEngine::GameObject*  value) ;

/// @brief Method set_TransformPoint, addr 0x173b180, size 0x8, virtual false, abstract: false, final false
inline void set_TransformPoint(::UnityEngine::GameObject*  value) ;

/// @brief Method set_UpRightHelper, addr 0x173b170, size 0x8, virtual false, abstract: false, final false
inline void set_UpRightHelper(::UnityEngine::GameObject*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabbingDevice() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabbingDevice", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabbingDevice(GrabbingDevice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabbingDevice", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabbingDevice(GrabbingDevice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1099};

/// @brief Field <GrabData>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::VROSC::GrabData*  ____GrabData_k__BackingField;

/// @brief Field <FullAnchorData>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::VROSC::WorldTransformData*  ____FullAnchorData_k__BackingField;

/// @brief Field <AnchorPosition>k__BackingField, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____AnchorPosition_k__BackingField;

/// @brief Field <AnchorGrabPosition>k__BackingField, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____AnchorGrabPosition_k__BackingField;

/// @brief Field <ControllerGrabPosition>k__BackingField, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____ControllerGrabPosition_k__BackingField;

/// @brief Field SmoothAnchorOffset, offset: 0x48, size: 0x8, def value: None
 ::VROSC::SmoothMovement*  ___SmoothAnchorOffset;

/// @brief Field SmoothPosition, offset: 0x50, size: 0x8, def value: None
 ::VROSC::SmoothMovement*  ___SmoothPosition;

/// @brief Field _transformMover, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::TransformMover>  ____transformMover;

/// @brief Field <Rotator>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____Rotator_k__BackingField;

/// @brief Field <UpRightHelper>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____UpRightHelper_k__BackingField;

/// @brief Field <TransformPoint>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____TransformPoint_k__BackingField;

/// @brief Field _grabDistance, offset: 0x78, size: 0x4, def value: None
 float_t  ____grabDistance;

/// @brief Field _additiveRotation, offset: 0x7c, size: 0x4, def value: None
 float_t  ____additiveRotation;

/// @brief Field _isOutsideIsPinnedWarningRange, offset: 0x80, size: 0x1, def value: None
 bool  ____isOutsideIsPinnedWarningRange;

/// @brief Field _controller, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____controller;

/// @brief Field _localGrabPositionFromObject, offset: 0x90, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____localGrabPositionFromObject;

/// @brief Field _localGrabPositionFromController, offset: 0x9c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____localGrabPositionFromController;

/// @brief Field _currentRequestedTooltips, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  ____currentRequestedTooltips;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::GrabbingDevice, ____GrabData_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbingDevice, ____FullAnchorData_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbingDevice, ____AnchorPosition_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbingDevice, ____AnchorGrabPosition_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbingDevice, ____ControllerGrabPosition_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbingDevice, ___SmoothAnchorOffset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbingDevice, ___SmoothPosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbingDevice, ____transformMover) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbingDevice, ____Rotator_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbingDevice, ____UpRightHelper_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbingDevice, ____TransformPoint_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbingDevice, ____grabDistance) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbingDevice, ____additiveRotation) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbingDevice, ____isOutsideIsPinnedWarningRange) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbingDevice, ____controller) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbingDevice, ____localGrabPositionFromObject) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbingDevice, ____localGrabPositionFromController) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbingDevice, ____currentRequestedTooltips) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::GrabbingDevice, 0xb0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::GrabbingDevice);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GrabbingDevice*, "VROSC", "GrabbingDevice");
