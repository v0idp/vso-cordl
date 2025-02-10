#pragma once
// IWYU pragma private; include "VROSC/TransformMover.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__Grabable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformMover)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class GrabData;
}
namespace VROSC {
class GrabbingDevice;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class LocalTransformData;
}
namespace VROSC {
class MinMaxFloat;
}
namespace VROSC {
class TooltipData;
}
namespace VROSC {
class TransformAnchor;
}
namespace VROSC {
class TransformDataController;
}
namespace VROSC {
class TransformMover__MoveInObject_d__51;
}
namespace VROSC {
struct TriggerButton;
}
namespace VROSC {
class WorldTransformData;
}
// Forward declare root types
namespace VROSC {
class TransformMover;
}
namespace VROSC {
class TransformMover__MoveInObject_d__51;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TransformMover);
MARK_REF_PTR_T(::VROSC::TransformMover__MoveInObject_d__51);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TransformMover/<MoveInObject>d__51
class CORDL_TYPE TransformMover__MoveInObject_d__51 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::TransformMover>  __4__this;

/// @brief Field <_moverEndPosition>5__4, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get___moverEndPosition_5__4, put=__cordl_internal_set___moverEndPosition_5__4)) ::UnityEngine::Vector3  __moverEndPosition_5__4;

/// @brief Field <_moverStartPosition>5__3, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get___moverStartPosition_5__3, put=__cordl_internal_set___moverStartPosition_5__3)) ::UnityEngine::Vector3  __moverStartPosition_5__3;

/// @brief Field <controller>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller_5__2, put=__cordl_internal_set__controller_5__2)) ::UnityW<::UnityEngine::Transform>  _controller_5__2;

/// @brief Field <time>5__5, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__5, put=__cordl_internal_set__time_5__5)) float_t  _time_5__5;

/// @brief Field device, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_device, put=__cordl_internal_set_device)) ::VROSC::GrabbingDevice*  device;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x173fb64, size 0x39c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::TransformMover__MoveInObject_d__51* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x173ff00, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x173ff08, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x173ff40, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x173fb60, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::TransformMover> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::TransformMover>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get___moverEndPosition_5__4() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get___moverEndPosition_5__4() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get___moverStartPosition_5__3() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get___moverStartPosition_5__3() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__controller_5__2() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__controller_5__2() ;

constexpr float_t const& __cordl_internal_get__time_5__5() const;

constexpr float_t& __cordl_internal_get__time_5__5() ;

constexpr ::VROSC::GrabbingDevice* const& __cordl_internal_get_device() const;

constexpr ::VROSC::GrabbingDevice*& __cordl_internal_get_device() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::TransformMover>  value) ;

constexpr void __cordl_internal_set___moverEndPosition_5__4(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set___moverStartPosition_5__3(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__controller_5__2(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__time_5__5(float_t  value) ;

constexpr void __cordl_internal_set_device(::VROSC::GrabbingDevice*  value) ;

/// @brief Method .ctor, addr 0x173fb38, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformMover__MoveInObject_d__51() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformMover__MoveInObject_d__51", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformMover__MoveInObject_d__51(TransformMover__MoveInObject_d__51 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformMover__MoveInObject_d__51", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformMover__MoveInObject_d__51(TransformMover__MoveInObject_d__51 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1106};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field device, offset: 0x20, size: 0x8, def value: None
 ::VROSC::GrabbingDevice*  ___device;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::TransformMover>  _____4__this;

/// @brief Field <controller>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____controller_5__2;

/// @brief Field <_moverStartPosition>5__3, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  _____moverStartPosition_5__3;

/// @brief Field <_moverEndPosition>5__4, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  _____moverEndPosition_5__4;

/// @brief Field <time>5__5, offset: 0x50, size: 0x4, def value: None
 float_t  ____time_5__5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TransformMover__MoveInObject_d__51, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover__MoveInObject_d__51, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover__MoveInObject_d__51, ___device) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover__MoveInObject_d__51, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover__MoveInObject_d__51, ____controller_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover__MoveInObject_d__51, _____moverStartPosition_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover__MoveInObject_d__51, _____moverEndPosition_5__4) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover__MoveInObject_d__51, ____time_5__5) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TransformMover__MoveInObject_d__51, 0x58>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.Grabable
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TransformMover
class CORDL_TYPE TransformMover : public ::VROSC::Grabable {
public:
// Declarations
using _MoveInObject_d__51 = ::VROSC::TransformMover__MoveInObject_d__51;

 __declspec(property(get=get_Anchor)) ::UnityW<::VROSC::TransformAnchor>  Anchor;

 __declspec(property(get=get_Grabbed)) bool  Grabbed;

 __declspec(property(get=get_GrabbingDevices, put=set_GrabbingDevices)) ::System::Collections::Generic::List_1<::VROSC::GrabbingDevice*>*  GrabbingDevices;

 __declspec(property(get=get_IsPinned)) bool  IsPinned;

/// @brief Field OnGrabBegin, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGrabBegin, put=__cordl_internal_set_OnGrabBegin)) ::System::Action_1<::UnityW<::VROSC::TransformMover>>*  OnGrabBegin;

/// @brief Field OnGrabEnd, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGrabEnd, put=__cordl_internal_set_OnGrabEnd)) ::System::Action_1<::UnityW<::VROSC::TransformMover>>*  OnGrabEnd;

 __declspec(property(get=get_Scale, put=set_Scale)) float_t  Scale;

/// @brief Field <GrabbingDevices>k__BackingField, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__GrabbingDevices_k__BackingField, put=__cordl_internal_set__GrabbingDevices_k__BackingField)) ::System::Collections::Generic::List_1<::VROSC::GrabbingDevice*>*  _GrabbingDevices_k__BackingField;

/// @brief Field <Scale>k__BackingField, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__Scale_k__BackingField, put=__cordl_internal_set__Scale_k__BackingField)) float_t  _Scale_k__BackingField;

/// @brief Field _animating, offset 0xa5, size 0x1 
 __declspec(property(get=__cordl_internal_get__animating, put=__cordl_internal_set__animating)) bool  _animating;

/// @brief Field _attractTooltip, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__attractTooltip, put=__cordl_internal_set__attractTooltip)) ::VROSC::TooltipData*  _attractTooltip;

/// @brief Field _disableRotation, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__disableRotation, put=__cordl_internal_set__disableRotation)) bool  _disableRotation;

/// @brief Field _dontLockInOneHanded, offset 0x7a, size 0x1 
 __declspec(property(get=__cordl_internal_get__dontLockInOneHanded, put=__cordl_internal_set__dontLockInOneHanded)) bool  _dontLockInOneHanded;

/// @brief Field _grabOriginData, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabOriginData, put=__cordl_internal_set__grabOriginData)) ::VROSC::WorldTransformData*  _grabOriginData;

/// @brief Field _gripTooltip, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__gripTooltip, put=__cordl_internal_set__gripTooltip)) ::VROSC::TooltipData*  _gripTooltip;

/// @brief Field _lockUpright, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get__lockUpright, put=__cordl_internal_set__lockUpright)) bool  _lockUpright;

/// @brief Field _originaltransformData, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__originaltransformData, put=__cordl_internal_set__originaltransformData)) ::VROSC::LocalTransformData*  _originaltransformData;

/// @brief Field _pinTooltip, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__pinTooltip, put=__cordl_internal_set__pinTooltip)) ::VROSC::TooltipData*  _pinTooltip;

/// @brief Field _pinned, offset 0xa4, size 0x1 
 __declspec(property(get=__cordl_internal_get__pinned, put=__cordl_internal_set__pinned)) bool  _pinned;

/// @brief Field _pinnedTooltips, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__pinnedTooltips, put=__cordl_internal_set__pinnedTooltips)) ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  _pinnedTooltips;

/// @brief Field _scaleAtGrab, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__scaleAtGrab, put=__cordl_internal_set__scaleAtGrab)) float_t  _scaleAtGrab;

/// @brief Field _scalingLimits, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__scalingLimits, put=__cordl_internal_set__scalingLimits)) ::VROSC::MinMaxFloat*  _scalingLimits;

/// @brief Field _transformAnchor, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformAnchor, put=__cordl_internal_set__transformAnchor)) ::UnityW<::VROSC::TransformAnchor>  _transformAnchor;

/// @brief Field _unpinTooltip, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__unpinTooltip, put=__cordl_internal_set__unpinTooltip)) ::VROSC::TooltipData*  _unpinTooltip;

/// @brief Field _unpinnedTooltips, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__unpinnedTooltips, put=__cordl_internal_set__unpinnedTooltips)) ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  _unpinnedTooltips;

/// @brief Method AnchorForOneHand, addr 0x173ec98, size 0x1dc, virtual false, abstract: false, final false
inline void AnchorForOneHand() ;

/// @brief Method ApplyTransformData, addr 0x172d02c, size 0xcc, virtual false, abstract: false, final false
inline void ApplyTransformData(::VROSC::TransformDataController*  controller) ;

/// @brief Method Awake, addr 0x173e17c, size 0x3d4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ButtonBegin, addr 0x173f9b4, size 0xe4, virtual false, abstract: false, final false
inline void ButtonBegin(::VROSC::InputDevice*  inputDevice, ::VROSC::TriggerButton  button) ;

/// @brief Method ButtonEnd, addr 0x173e6f0, size 0x10, virtual false, abstract: false, final false
inline void ButtonEnd(::VROSC::InputDevice*  inputDevice, ::VROSC::TriggerButton  button) ;

/// @brief Method GetGrabbingDevice, addr 0x173eaf8, size 0x1a0, virtual false, abstract: false, final false
inline ::VROSC::GrabbingDevice* GetGrabbingDevice(::VROSC::InputDevice*  inputDevice) ;

/// @brief Method GetTwoHandScale, addr 0x173f3dc, size 0x424, virtual false, abstract: false, final false
inline void GetTwoHandScale() ;

/// @brief Method Grab, addr 0x173e850, size 0xb8, virtual true, abstract: false, final false
inline void Grab(::VROSC::GrabData*  data, bool  grabbing) ;

/// @brief Method GrabBegin, addr 0x173e908, size 0x1f0, virtual false, abstract: false, final false
inline void GrabBegin(::VROSC::GrabData*  data) ;

/// @brief Method LateUpdate, addr 0x173e7e0, size 0x70, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method MoveInObject, addr 0x173fa98, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* MoveInObject(::VROSC::GrabbingDevice*  device) ;

static inline ::VROSC::TransformMover* New_ctor() ;

/// @brief Method OnDisable, addr 0x173f800, size 0x1b4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x173e550, size 0x1a0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RemoveGrabbingDevice, addr 0x173e700, size 0xd4, virtual false, abstract: false, final false
inline void RemoveGrabbingDevice(::VROSC::InputDevice*  inputDevice) ;

/// @brief Method ResetTransform, addr 0x172cc6c, size 0x28, virtual false, abstract: false, final false
inline void ResetTransform() ;

/// @brief Method SetNewOrigin, addr 0x173ee74, size 0x128, virtual false, abstract: false, final false
inline void SetNewOrigin() ;

/// @brief Method SetPinned, addr 0x173e7d4, size 0xc, virtual false, abstract: false, final false
inline void SetPinned(bool  isPinned) ;

/// @brief Method SetScale, addr 0x173dacc, size 0x98, virtual false, abstract: false, final false
inline void SetScale(float_t  scale) ;

/// @brief Method TogglePin, addr 0x173fb0c, size 0x2c, virtual false, abstract: false, final false
inline void TogglePin() ;

/// @brief Method UpdateDualHandLookat, addr 0x173f104, size 0x2d8, virtual false, abstract: false, final false
inline void UpdateDualHandLookat() ;

/// @brief Method UpdateGrab, addr 0x173ab1c, size 0x488, virtual true, abstract: false, final false
inline void UpdateGrab() ;

/// @brief Method UpdateIsGrabbedTooltips, addr 0x173ef9c, size 0x168, virtual false, abstract: false, final false
inline void UpdateIsGrabbedTooltips() ;

constexpr ::System::Action_1<::UnityW<::VROSC::TransformMover>>* const& __cordl_internal_get_OnGrabBegin() const;

constexpr ::System::Action_1<::UnityW<::VROSC::TransformMover>>*& __cordl_internal_get_OnGrabBegin() ;

constexpr ::System::Action_1<::UnityW<::VROSC::TransformMover>>* const& __cordl_internal_get_OnGrabEnd() const;

constexpr ::System::Action_1<::UnityW<::VROSC::TransformMover>>*& __cordl_internal_get_OnGrabEnd() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::GrabbingDevice*>* const& __cordl_internal_get__GrabbingDevices_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::GrabbingDevice*>*& __cordl_internal_get__GrabbingDevices_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Scale_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Scale_k__BackingField() ;

constexpr bool const& __cordl_internal_get__animating() const;

constexpr bool& __cordl_internal_get__animating() ;

constexpr ::VROSC::TooltipData* const& __cordl_internal_get__attractTooltip() const;

constexpr ::VROSC::TooltipData*& __cordl_internal_get__attractTooltip() ;

constexpr bool const& __cordl_internal_get__disableRotation() const;

constexpr bool& __cordl_internal_get__disableRotation() ;

constexpr bool const& __cordl_internal_get__dontLockInOneHanded() const;

constexpr bool& __cordl_internal_get__dontLockInOneHanded() ;

constexpr ::VROSC::WorldTransformData* const& __cordl_internal_get__grabOriginData() const;

constexpr ::VROSC::WorldTransformData*& __cordl_internal_get__grabOriginData() ;

constexpr ::VROSC::TooltipData* const& __cordl_internal_get__gripTooltip() const;

constexpr ::VROSC::TooltipData*& __cordl_internal_get__gripTooltip() ;

constexpr bool const& __cordl_internal_get__lockUpright() const;

constexpr bool& __cordl_internal_get__lockUpright() ;

constexpr ::VROSC::LocalTransformData* const& __cordl_internal_get__originaltransformData() const;

constexpr ::VROSC::LocalTransformData*& __cordl_internal_get__originaltransformData() ;

constexpr ::VROSC::TooltipData* const& __cordl_internal_get__pinTooltip() const;

constexpr ::VROSC::TooltipData*& __cordl_internal_get__pinTooltip() ;

constexpr bool const& __cordl_internal_get__pinned() const;

constexpr bool& __cordl_internal_get__pinned() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::TooltipData*>* const& __cordl_internal_get__pinnedTooltips() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*& __cordl_internal_get__pinnedTooltips() ;

constexpr float_t const& __cordl_internal_get__scaleAtGrab() const;

constexpr float_t& __cordl_internal_get__scaleAtGrab() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__scalingLimits() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__scalingLimits() ;

constexpr ::UnityW<::VROSC::TransformAnchor> const& __cordl_internal_get__transformAnchor() const;

constexpr ::UnityW<::VROSC::TransformAnchor>& __cordl_internal_get__transformAnchor() ;

constexpr ::VROSC::TooltipData* const& __cordl_internal_get__unpinTooltip() const;

constexpr ::VROSC::TooltipData*& __cordl_internal_get__unpinTooltip() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::TooltipData*>* const& __cordl_internal_get__unpinnedTooltips() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*& __cordl_internal_get__unpinnedTooltips() ;

constexpr void __cordl_internal_set_OnGrabBegin(::System::Action_1<::UnityW<::VROSC::TransformMover>>*  value) ;

constexpr void __cordl_internal_set_OnGrabEnd(::System::Action_1<::UnityW<::VROSC::TransformMover>>*  value) ;

constexpr void __cordl_internal_set__GrabbingDevices_k__BackingField(::System::Collections::Generic::List_1<::VROSC::GrabbingDevice*>*  value) ;

constexpr void __cordl_internal_set__Scale_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__animating(bool  value) ;

constexpr void __cordl_internal_set__attractTooltip(::VROSC::TooltipData*  value) ;

constexpr void __cordl_internal_set__disableRotation(bool  value) ;

constexpr void __cordl_internal_set__dontLockInOneHanded(bool  value) ;

constexpr void __cordl_internal_set__grabOriginData(::VROSC::WorldTransformData*  value) ;

constexpr void __cordl_internal_set__gripTooltip(::VROSC::TooltipData*  value) ;

constexpr void __cordl_internal_set__lockUpright(bool  value) ;

constexpr void __cordl_internal_set__originaltransformData(::VROSC::LocalTransformData*  value) ;

constexpr void __cordl_internal_set__pinTooltip(::VROSC::TooltipData*  value) ;

constexpr void __cordl_internal_set__pinned(bool  value) ;

constexpr void __cordl_internal_set__pinnedTooltips(::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  value) ;

constexpr void __cordl_internal_set__scaleAtGrab(float_t  value) ;

constexpr void __cordl_internal_set__scalingLimits(::VROSC::MinMaxFloat*  value) ;

constexpr void __cordl_internal_set__transformAnchor(::UnityW<::VROSC::TransformAnchor>  value) ;

constexpr void __cordl_internal_set__unpinTooltip(::VROSC::TooltipData*  value) ;

constexpr void __cordl_internal_set__unpinnedTooltips(::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  value) ;

/// @brief Method .ctor, addr 0x173afa8, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Anchor, addr 0x173e164, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::TransformAnchor> get_Anchor() ;

/// @brief Method get_Grabbed, addr 0x173e10c, size 0x50, virtual false, abstract: false, final false
inline bool get_Grabbed() ;

/// @brief Method get_GrabbingDevices, addr 0x173e174, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::VROSC::GrabbingDevice*>* get_GrabbingDevices() ;

/// @brief Method get_IsPinned, addr 0x173e15c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsPinned() ;

/// @brief Method get_Scale, addr 0x173e104, size 0x8, virtual false, abstract: false, final false
inline float_t get_Scale() ;

/// @brief Method set_GrabbingDevices, addr 0x173e16c, size 0x8, virtual false, abstract: false, final false
inline void set_GrabbingDevices(::System::Collections::Generic::List_1<::VROSC::GrabbingDevice*>*  value) ;

/// @brief Method set_Scale, addr 0x173e0fc, size 0x8, virtual false, abstract: false, final false
inline void set_Scale(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformMover() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformMover", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformMover(TransformMover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformMover", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformMover(TransformMover const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1107};

/// @brief Field <Scale>k__BackingField, offset: 0x74, size: 0x4, def value: None
 float_t  ____Scale_k__BackingField;

/// @brief Field _disableRotation, offset: 0x78, size: 0x1, def value: None
 bool  ____disableRotation;

/// @brief Field _lockUpright, offset: 0x79, size: 0x1, def value: None
 bool  ____lockUpright;

/// @brief Field _dontLockInOneHanded, offset: 0x7a, size: 0x1, def value: None
 bool  ____dontLockInOneHanded;

/// @brief Field _scalingLimits, offset: 0x80, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____scalingLimits;

/// @brief Field _transformAnchor, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::VROSC::TransformAnchor>  ____transformAnchor;

/// @brief Field _originaltransformData, offset: 0x90, size: 0x8, def value: None
 ::VROSC::LocalTransformData*  ____originaltransformData;

/// @brief Field _grabOriginData, offset: 0x98, size: 0x8, def value: None
 ::VROSC::WorldTransformData*  ____grabOriginData;

/// @brief Field _scaleAtGrab, offset: 0xa0, size: 0x4, def value: None
 float_t  ____scaleAtGrab;

/// @brief Field _pinned, offset: 0xa4, size: 0x1, def value: None
 bool  ____pinned;

/// @brief Field _animating, offset: 0xa5, size: 0x1, def value: None
 bool  ____animating;

/// @brief Field _gripTooltip, offset: 0xa8, size: 0x8, def value: None
 ::VROSC::TooltipData*  ____gripTooltip;

/// @brief Field _pinTooltip, offset: 0xb0, size: 0x8, def value: None
 ::VROSC::TooltipData*  ____pinTooltip;

/// @brief Field _unpinTooltip, offset: 0xb8, size: 0x8, def value: None
 ::VROSC::TooltipData*  ____unpinTooltip;

/// @brief Field _attractTooltip, offset: 0xc0, size: 0x8, def value: None
 ::VROSC::TooltipData*  ____attractTooltip;

/// @brief Field _pinnedTooltips, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  ____pinnedTooltips;

/// @brief Field _unpinnedTooltips, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  ____unpinnedTooltips;

/// @brief Field <GrabbingDevices>k__BackingField, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::GrabbingDevice*>*  ____GrabbingDevices_k__BackingField;

/// @brief Field OnGrabBegin, offset: 0xe0, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::TransformMover>>*  ___OnGrabBegin;

/// @brief Field OnGrabEnd, offset: 0xe8, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::TransformMover>>*  ___OnGrabEnd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TransformMover, ____Scale_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover, ____disableRotation) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover, ____lockUpright) == 0x79, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover, ____dontLockInOneHanded) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover, ____scalingLimits) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover, ____transformAnchor) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover, ____originaltransformData) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover, ____grabOriginData) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover, ____scaleAtGrab) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover, ____pinned) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover, ____animating) == 0xa5, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover, ____gripTooltip) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover, ____pinTooltip) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover, ____unpinTooltip) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover, ____attractTooltip) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover, ____pinnedTooltips) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover, ____unpinnedTooltips) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover, ____GrabbingDevices_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover, ___OnGrabBegin) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformMover, ___OnGrabEnd) == 0xe8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TransformMover, 0xf0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TransformMover);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TransformMover*, "VROSC", "TransformMover");
NEED_NO_BOX(::VROSC::TransformMover__MoveInObject_d__51);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TransformMover__MoveInObject_d__51*, "VROSC", "TransformMover/<MoveInObject>d__51");
