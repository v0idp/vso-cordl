#pragma once
// IWYU pragma private; include "VROSC/Launchpad.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__IAnchoredObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Launchpad)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T>
class Action_1;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class GrabData;
}
namespace VROSC {
class LaunchPadEffectOnSignal;
}
namespace VROSC {
class LaunchpadSpawner;
}
namespace VROSC {
struct Launchpad__LaunchpadHit_d__29;
}
namespace VROSC {
class Launchpad___c__DisplayClass28_0;
}
namespace VROSC {
class PadUI;
}
namespace VROSC {
class PredictiveHittable;
}
namespace VROSC {
class Signal;
}
namespace VROSC {
class TransformMover;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace VROSC {
class Launchpad;
}
namespace VROSC {
class Launchpad___c__DisplayClass28_0;
}
namespace VROSC {
struct Launchpad__LaunchpadHit_d__29;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Launchpad);
MARK_REF_PTR_T(::VROSC::Launchpad___c__DisplayClass28_0);
MARK_VAL_T(::VROSC::Launchpad__LaunchpadHit_d__29);
// Dependencies System.Object, UnityEngine.Quaternion, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Launchpad/<>c__DisplayClass28_0
class CORDL_TYPE Launchpad___c__DisplayClass28_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::Launchpad>  __4__this;

/// @brief Field position, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) ::UnityEngine::Vector3  position;

/// @brief Field rotation, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_rotation, put=__cordl_internal_set_rotation)) ::UnityEngine::Quaternion  rotation;

/// @brief Field scale, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) ::UnityEngine::Vector3  scale;

static inline ::VROSC::Launchpad___c__DisplayClass28_0* New_ctor() ;

/// @brief Method <SetTransform>b__0, addr 0x171602c, size 0x170, virtual false, abstract: false, final false
inline void _SetTransform_b__0(bool  success, ::UnityEngine::Vector3  anchorPosition, ::UnityEngine::Quaternion  anchorRotation) ;

/// @brief Method <SetTransform>b__1, addr 0x171619c, size 0x148, virtual false, abstract: false, final false
inline void _SetTransform_b__1(::VROSC::Error  error) ;

constexpr ::UnityW<::VROSC::Launchpad> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::Launchpad>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_position() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_scale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_scale() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::Launchpad>  value) ;

constexpr void __cordl_internal_set_position(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_scale(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x1715acc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Launchpad___c__DisplayClass28_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Launchpad___c__DisplayClass28_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Launchpad___c__DisplayClass28_0(Launchpad___c__DisplayClass28_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Launchpad___c__DisplayClass28_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Launchpad___c__DisplayClass28_0(Launchpad___c__DisplayClass28_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{911};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::Launchpad>  _____4__this;

/// @brief Field scale, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___scale;

/// @brief Field position, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___position;

/// @brief Field rotation, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Launchpad___c__DisplayClass28_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::Launchpad___c__DisplayClass28_0, ___scale) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::Launchpad___c__DisplayClass28_0, ___position) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::Launchpad___c__DisplayClass28_0, ___rotation) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Launchpad___c__DisplayClass28_0, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.Launchpad/<LaunchpadHit>d__29
struct CORDL_TYPE Launchpad__LaunchpadHit_d__29 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x17162e4, size 0x258, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x171653c, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr Launchpad__LaunchpadHit_d__29() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::Launchpad>", modifiers: "", def_value: None }, CppParam { name: "signal", ty: "::VROSC::Signal*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr Launchpad__LaunchpadHit_d__29(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::Launchpad>  __4__this, ::VROSC::Signal*  signal, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{912};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::Launchpad>  __4__this;

/// @brief Field signal, offset: 0x30, size: 0x8, def value: None
 ::VROSC::Signal*  signal;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Launchpad__LaunchpadHit_d__29, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::Launchpad__LaunchpadHit_d__29, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::Launchpad__LaunchpadHit_d__29, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::Launchpad__LaunchpadHit_d__29, signal) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::Launchpad__LaunchpadHit_d__29, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Launchpad__LaunchpadHit_d__29, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, VROSC.IAnchoredObject
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Launchpad
class CORDL_TYPE Launchpad : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _LaunchpadHit_d__29 = ::VROSC::Launchpad__LaunchpadHit_d__29;

using __c__DisplayClass28_0 = ::VROSC::Launchpad___c__DisplayClass28_0;

/// @brief Field OnLaunchPadDeletedByUser, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLaunchPadDeletedByUser, put=__cordl_internal_set_OnLaunchPadDeletedByUser)) ::System::Action_1<::UnityW<::VROSC::Launchpad>>*  OnLaunchPadDeletedByUser;

/// @brief Field OnLaunchPadHit, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLaunchPadHit, put=__cordl_internal_set_OnLaunchPadHit)) ::System::Action_1<::UnityW<::VROSC::Launchpad>>*  OnLaunchPadHit;

/// @brief Field OnLaunchPadMoved, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLaunchPadMoved, put=__cordl_internal_set_OnLaunchPadMoved)) ::System::Action_1<::UnityW<::VROSC::Launchpad>>*  OnLaunchPadMoved;

 __declspec(property(get=get_TargetID, put=set_TargetID)) ::StringW  TargetID;

 __declspec(property(get=get_TransformMover)) ::UnityW<::VROSC::TransformMover>  TransformMover;

/// @brief Field <ID>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__ID_k__BackingField, put=__cordl_internal_set__ID_k__BackingField)) ::StringW  _ID_k__BackingField;

/// @brief Field <TargetID>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__TargetID_k__BackingField, put=__cordl_internal_set__TargetID_k__BackingField)) ::StringW  _TargetID_k__BackingField;

/// @brief Field _UI, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__UI, put=__cordl_internal_set__UI)) ::UnityW<::VROSC::PadUI>  _UI;

/// @brief Field _clickInput, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__clickInput, put=__cordl_internal_set__clickInput)) ::UnityW<::VROSC::UIButton>  _clickInput;

 __declspec(property(get=get_ID, put=set_ID)) ::StringW  _cordl_ID;

/// @brief Field _hittable, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__hittable, put=__cordl_internal_set__hittable)) ::UnityW<::VROSC::PredictiveHittable>  _hittable;

/// @brief Field _launchpadSpawner, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__launchpadSpawner, put=__cordl_internal_set__launchpadSpawner)) ::UnityW<::VROSC::LaunchpadSpawner>  _launchpadSpawner;

/// @brief Field _mover, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__mover, put=__cordl_internal_set__mover)) ::UnityW<::VROSC::TransformMover>  _mover;

/// @brief Field _overlappingSpawner, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__overlappingSpawner, put=__cordl_internal_set__overlappingSpawner)) ::UnityW<::VROSC::LaunchpadSpawner>  _overlappingSpawner;

/// @brief Field _overlaps, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__overlaps, put=__cordl_internal_set__overlaps)) ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>  _overlaps;

/// @brief Field _spawnerDeleteDistance, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__spawnerDeleteDistance, put=__cordl_internal_set__spawnerDeleteDistance)) float_t  _spawnerDeleteDistance;

/// @brief Field _trackName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__trackName, put=__cordl_internal_set__trackName)) ::UnityW<::TMPro::TextMeshPro>  _trackName;

/// @brief Field _visual, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__visual, put=__cordl_internal_set__visual)) ::UnityW<::VROSC::LaunchPadEffectOnSignal>  _visual;

/// @brief Convert operator to "::VROSC::IAnchoredObject"
constexpr operator  ::VROSC::IAnchoredObject*() noexcept;

/// @brief Method AddSpatialAnchorToData, addr 0x1715ee0, size 0x74, virtual true, abstract: false, final true
inline void AddSpatialAnchorToData(::StringW  anchorUuid) ;

/// @brief Method Awake, addr 0x171509c, size 0x20c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Delete, addr 0x1715d54, size 0x14c, virtual false, abstract: false, final false
inline void Delete() ;

/// @brief Method DeleteByUser, addr 0x1715d24, size 0x30, virtual false, abstract: false, final false
inline void DeleteByUser() ;

/// @brief Method Grab, addr 0x1715b6c, size 0x24, virtual false, abstract: false, final false
inline void Grab(::VROSC::GrabData*  grabData, bool  grabbing) ;

/// @brief Method GrabEnded, addr 0x1715b90, size 0x194, virtual false, abstract: false, final false
inline void GrabEnded(::VROSC::TransformMover*  mover) ;

/// @brief Method LaunchpadHit, addr 0x1715ad4, size 0x98, virtual false, abstract: false, final false
inline void LaunchpadHit(::VROSC::Signal*  signal) ;

static inline ::VROSC::Launchpad* New_ctor() ;

/// @brief Method OnClicked, addr 0x1715ea0, size 0x40, virtual false, abstract: false, final false
inline void OnClicked(::VROSC::ClickData*  obj) ;

/// @brief Method OnDestroy, addr 0x17152a8, size 0x334, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RemoveSpatialAnchorFromData, addr 0x1715f54, size 0x74, virtual true, abstract: false, final true
inline void RemoveSpatialAnchorFromData(::StringW  anchorUuid) ;

/// @brief Method SetColor, addr 0x17157f0, size 0x64, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method SetDisplayName, addr 0x17157cc, size 0x24, virtual false, abstract: false, final false
inline void SetDisplayName(::StringW  newName) ;

/// @brief Method SetTransform, addr 0x1715854, size 0x278, virtual false, abstract: false, final false
inline void SetTransform(::UnityEngine::Transform*  parent, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale, bool  isNewLaunchpad) ;

/// @brief Method Setup, addr 0x17155dc, size 0x1f0, virtual true, abstract: false, final false
inline void Setup(::VROSC::LaunchpadSpawner*  launchpadSpawner, ::StringW  id, ::StringW  targetID, ::StringW  displayName, ::UnityEngine::Color  color) ;

constexpr ::System::Action_1<::UnityW<::VROSC::Launchpad>>* const& __cordl_internal_get_OnLaunchPadDeletedByUser() const;

constexpr ::System::Action_1<::UnityW<::VROSC::Launchpad>>*& __cordl_internal_get_OnLaunchPadDeletedByUser() ;

constexpr ::System::Action_1<::UnityW<::VROSC::Launchpad>>* const& __cordl_internal_get_OnLaunchPadHit() const;

constexpr ::System::Action_1<::UnityW<::VROSC::Launchpad>>*& __cordl_internal_get_OnLaunchPadHit() ;

constexpr ::System::Action_1<::UnityW<::VROSC::Launchpad>>* const& __cordl_internal_get_OnLaunchPadMoved() const;

constexpr ::System::Action_1<::UnityW<::VROSC::Launchpad>>*& __cordl_internal_get_OnLaunchPadMoved() ;

constexpr ::StringW const& __cordl_internal_get__ID_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ID_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__TargetID_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__TargetID_k__BackingField() ;

constexpr ::UnityW<::VROSC::PadUI> const& __cordl_internal_get__UI() const;

constexpr ::UnityW<::VROSC::PadUI>& __cordl_internal_get__UI() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__clickInput() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__clickInput() ;

constexpr ::UnityW<::VROSC::PredictiveHittable> const& __cordl_internal_get__hittable() const;

constexpr ::UnityW<::VROSC::PredictiveHittable>& __cordl_internal_get__hittable() ;

constexpr ::UnityW<::VROSC::LaunchpadSpawner> const& __cordl_internal_get__launchpadSpawner() const;

constexpr ::UnityW<::VROSC::LaunchpadSpawner>& __cordl_internal_get__launchpadSpawner() ;

constexpr ::UnityW<::VROSC::TransformMover> const& __cordl_internal_get__mover() const;

constexpr ::UnityW<::VROSC::TransformMover>& __cordl_internal_get__mover() ;

constexpr ::UnityW<::VROSC::LaunchpadSpawner> const& __cordl_internal_get__overlappingSpawner() const;

constexpr ::UnityW<::VROSC::LaunchpadSpawner>& __cordl_internal_get__overlappingSpawner() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> const& __cordl_internal_get__overlaps() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>& __cordl_internal_get__overlaps() ;

constexpr float_t const& __cordl_internal_get__spawnerDeleteDistance() const;

constexpr float_t& __cordl_internal_get__spawnerDeleteDistance() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__trackName() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__trackName() ;

constexpr ::UnityW<::VROSC::LaunchPadEffectOnSignal> const& __cordl_internal_get__visual() const;

constexpr ::UnityW<::VROSC::LaunchPadEffectOnSignal>& __cordl_internal_get__visual() ;

constexpr void __cordl_internal_set_OnLaunchPadDeletedByUser(::System::Action_1<::UnityW<::VROSC::Launchpad>>*  value) ;

constexpr void __cordl_internal_set_OnLaunchPadHit(::System::Action_1<::UnityW<::VROSC::Launchpad>>*  value) ;

constexpr void __cordl_internal_set_OnLaunchPadMoved(::System::Action_1<::UnityW<::VROSC::Launchpad>>*  value) ;

constexpr void __cordl_internal_set__ID_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__TargetID_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__UI(::UnityW<::VROSC::PadUI>  value) ;

constexpr void __cordl_internal_set__clickInput(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__hittable(::UnityW<::VROSC::PredictiveHittable>  value) ;

constexpr void __cordl_internal_set__launchpadSpawner(::UnityW<::VROSC::LaunchpadSpawner>  value) ;

constexpr void __cordl_internal_set__mover(::UnityW<::VROSC::TransformMover>  value) ;

constexpr void __cordl_internal_set__overlappingSpawner(::UnityW<::VROSC::LaunchpadSpawner>  value) ;

constexpr void __cordl_internal_set__overlaps(::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>  value) ;

constexpr void __cordl_internal_set__spawnerDeleteDistance(float_t  value) ;

constexpr void __cordl_internal_set__trackName(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__visual(::UnityW<::VROSC::LaunchPadEffectOnSignal>  value) ;

/// @brief Method .ctor, addr 0x1715fc8, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ID, addr 0x171507c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ID() ;

/// @brief Method get_TargetID, addr 0x171508c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_TargetID() ;

/// @brief Method get_TransformMover, addr 0x1715094, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::VROSC::TransformMover> get_TransformMover() ;

/// @brief Convert to "::VROSC::IAnchoredObject"
constexpr ::VROSC::IAnchoredObject* i___VROSC__IAnchoredObject() noexcept;

/// @brief Method set_ID, addr 0x1715074, size 0x8, virtual false, abstract: false, final false
inline void set_ID(::StringW  value) ;

/// @brief Method set_TargetID, addr 0x1715084, size 0x8, virtual false, abstract: false, final false
inline void set_TargetID(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Launchpad() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Launchpad", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Launchpad(Launchpad && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Launchpad", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Launchpad(Launchpad const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{913};

/// @brief Field _mover, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::TransformMover>  ____mover;

/// @brief Field _UI, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::PadUI>  ____UI;

/// @brief Field _clickInput, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____clickInput;

/// @brief Field _visual, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::LaunchPadEffectOnSignal>  ____visual;

/// @brief Field _hittable, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::PredictiveHittable>  ____hittable;

/// @brief Field _trackName, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____trackName;

/// @brief Field _launchpadSpawner, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::LaunchpadSpawner>  ____launchpadSpawner;

/// @brief Field _overlaps, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>  ____overlaps;

/// @brief Field _overlappingSpawner, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::LaunchpadSpawner>  ____overlappingSpawner;

/// @brief Field _spawnerDeleteDistance, offset: 0x68, size: 0x4, def value: None
 float_t  ____spawnerDeleteDistance;

/// @brief Field OnLaunchPadHit, offset: 0x70, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::Launchpad>>*  ___OnLaunchPadHit;

/// @brief Field OnLaunchPadMoved, offset: 0x78, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::Launchpad>>*  ___OnLaunchPadMoved;

/// @brief Field OnLaunchPadDeletedByUser, offset: 0x80, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::Launchpad>>*  ___OnLaunchPadDeletedByUser;

/// @brief Field <ID>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::StringW  ____ID_k__BackingField;

/// @brief Field <TargetID>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::StringW  ____TargetID_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Launchpad, ____mover) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::Launchpad, ____UI) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::Launchpad, ____clickInput) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::Launchpad, ____visual) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::Launchpad, ____hittable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::Launchpad, ____trackName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::Launchpad, ____launchpadSpawner) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::Launchpad, ____overlaps) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::Launchpad, ____overlappingSpawner) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::Launchpad, ____spawnerDeleteDistance) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::Launchpad, ___OnLaunchPadHit) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::Launchpad, ___OnLaunchPadMoved) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::Launchpad, ___OnLaunchPadDeletedByUser) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::Launchpad, ____ID_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::Launchpad, ____TargetID_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Launchpad, 0x98>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::Launchpad);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Launchpad*, "VROSC", "Launchpad");
NEED_NO_BOX(::VROSC::Launchpad___c__DisplayClass28_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Launchpad___c__DisplayClass28_0*, "VROSC", "Launchpad/<>c__DisplayClass28_0");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Launchpad__LaunchpadHit_d__29, "VROSC", "Launchpad/<LaunchpadHit>d__29");
