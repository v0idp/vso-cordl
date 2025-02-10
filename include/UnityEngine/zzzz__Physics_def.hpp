#pragma once
// IWYU pragma private; include "UnityEngine/Physics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Physics)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct ContactPairHeader;
}
namespace UnityEngine {
struct ContactPair;
}
namespace UnityEngine {
struct MeshColliderCookingOptions;
}
namespace UnityEngine {
struct ModifiableContactPair;
}
namespace UnityEngine {
struct PhysicsScene;
}
namespace UnityEngine {
class Physics_ContactEventDelegate;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Physics;
}
namespace UnityEngine {
class Physics_ContactEventDelegate;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Physics);
MARK_REF_PTR_T(::UnityEngine::Physics_ContactEventDelegate);
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Physics/ContactEventDelegate
class CORDL_TYPE Physics_ContactEventDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x2fc5cbc, size 0x18, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::PhysicsScene  scene, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>  headerArray) ;

static inline ::UnityEngine::Physics_ContactEventDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x2fc5c30, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Physics_ContactEventDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Physics_ContactEventDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Physics_ContactEventDelegate(Physics_ContactEventDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Physics_ContactEventDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Physics_ContactEventDelegate(Physics_ContactEventDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12072};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Physics_ContactEventDelegate, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Physics
class CORDL_TYPE Physics : public ::System::Object {
public:
// Declarations
using ContactEventDelegate = ::UnityEngine::Physics_ContactEventDelegate;

/// @brief Field ContactEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ContactEvent, put=setStaticF_ContactEvent)) ::UnityEngine::Physics_ContactEventDelegate*  ContactEvent;

/// @brief Field ContactModifyEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ContactModifyEvent, put=setStaticF_ContactModifyEvent)) ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  ContactModifyEvent;

/// @brief Field ContactModifyEventCCD, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ContactModifyEventCCD, put=setStaticF_ContactModifyEventCCD)) ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  ContactModifyEventCCD;

/// @brief Field s_ReusableCollision, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ReusableCollision, put=setStaticF_s_ReusableCollision)) ::UnityEngine::Collision*  s_ReusableCollision;

/// @brief Method BakeMesh, addr 0x2fc503c, size 0x88, virtual false, abstract: false, final false
static inline void BakeMesh(int32_t  meshID, bool  convex) ;

/// @brief Method BakeMesh, addr 0x2fc4fe8, size 0x54, virtual false, abstract: false, final false
static inline void BakeMesh(int32_t  meshID, bool  convex, ::UnityEngine::MeshColliderCookingOptions  cookingOptions) ;

/// @brief Method GetBodyByInstanceID, addr 0x2fc5100, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Component> GetBodyByInstanceID(int32_t  instanceID) ;

/// @brief Method GetColliderByInstanceID, addr 0x2fc50c4, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Collider> GetColliderByInstanceID(int32_t  instanceID) ;

/// @brief Method GetCollisionToReport, addr 0x2fc5a68, size 0x124, virtual false, abstract: false, final false
static inline ::UnityEngine::Collision* GetCollisionToReport(::ByRef<::UnityEngine::ContactPairHeader>  header, ::ByRef<::UnityEngine::ContactPair>  pair, bool  flipped) ;

/// @brief Method IgnoreCollision, addr 0x2fc2878, size 0x54, virtual false, abstract: false, final false
static inline void IgnoreCollision(::UnityEngine::Collider*  collider1, ::UnityEngine::Collider*  collider2, bool  ignore) ;

/// @brief Method Internal_RaycastAll, addr 0x2fc37c4, size 0xa8, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> Internal_RaycastAll(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_RaycastAll_Injected, addr 0x2fc386c, size 0x6c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> Internal_RaycastAll_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Ray>  ray, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OnSceneContact, addr 0x2fc5208, size 0x258, virtual false, abstract: false, final false
static inline void OnSceneContact(::UnityEngine::PhysicsScene  scene, ::System::IntPtr  buffer, int32_t  count) ;

/// @brief Method OnSceneContactModify, addr 0x2fc25ec, size 0xe4, virtual false, abstract: false, final false
static inline void OnSceneContactModify(::UnityEngine::PhysicsScene  scene, ::System::IntPtr  buffer, int32_t  count, bool  isCCD) ;

/// @brief Method OverlapSphere, addr 0x2fc4d6c, size 0x84, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapSphere(::UnityEngine::Vector3  position, float_t  radius) ;

/// @brief Method OverlapSphere, addr 0x2fc4cd0, size 0x9c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapSphere(::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphereNonAlloc, addr 0x2fc4f5c, size 0x8c, virtual false, abstract: false, final false
static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results) ;

/// @brief Method OverlapSphereNonAlloc, addr 0x2fc4ec4, size 0x98, virtual false, abstract: false, final false
static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask) ;

/// @brief Method OverlapSphereNonAlloc, addr 0x2fc4e18, size 0xa4, virtual false, abstract: false, final false
static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphere_Internal, addr 0x2fc4bb0, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapSphere_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphere_Internal_Injected, addr 0x2fc4c64, size 0x6c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapSphere_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Query_SphereCastAll, addr 0x2fc4794, size 0xc8, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> Query_SphereCastAll(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Query_SphereCastAll_Injected, addr 0x2fc485c, size 0x84, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> Query_SphereCastAll_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  origin, float_t  radius, ::ByRef<::UnityEngine::Vector3>  direction, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0x2fc2d00, size 0xb8, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction) ;

/// @brief Method Raycast, addr 0x2fc3220, size 0xc8, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo) ;

/// @brief Method Raycast, addr 0x2fc3158, size 0xc8, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance) ;

/// @brief Method Raycast, addr 0x2fc307c, size 0xdc, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method Raycast, addr 0x2fc2db8, size 0xd8, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0x2fc2c38, size 0xc8, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance) ;

/// @brief Method Raycast, addr 0x2fc2b74, size 0xc4, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method Raycast, addr 0x2fc28cc, size 0xd8, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0x2fc34a4, size 0x88, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray) ;

/// @brief Method Raycast, addr 0x2fc3734, size 0x90, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, ::ByRef<::UnityEngine::RaycastHit>  hitInfo) ;

/// @brief Method Raycast, addr 0x2fc3694, size 0xa0, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance) ;

/// @brief Method Raycast, addr 0x2fc35dc, size 0xb8, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method Raycast, addr 0x2fc352c, size 0xb0, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0x2fc341c, size 0x88, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, float_t  maxDistance) ;

/// @brief Method Raycast, addr 0x2fc3380, size 0x9c, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method Raycast, addr 0x2fc32e8, size 0x98, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method RaycastAll, addr 0x2fc3c58, size 0xa4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction) ;

/// @brief Method RaycastAll, addr 0x2fc3bac, size 0xac, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance) ;

/// @brief Method RaycastAll, addr 0x2fc3afc, size 0xb0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method RaycastAll, addr 0x2fc38d8, size 0x224, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method RaycastAll, addr 0x2fc3f04, size 0x9c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray  ray) ;

/// @brief Method RaycastAll, addr 0x2fc3e60, size 0xa4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray  ray, float_t  maxDistance) ;

/// @brief Method RaycastAll, addr 0x2fc3db0, size 0xb0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method RaycastAll, addr 0x2fc3cfc, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method RaycastNonAlloc, addr 0x2fc46d0, size 0xc4, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results) ;

/// @brief Method RaycastNonAlloc, addr 0x2fc460c, size 0xc4, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance) ;

/// @brief Method RaycastNonAlloc, addr 0x2fc4534, size 0xd8, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method RaycastNonAlloc, addr 0x2fc4460, size 0xd4, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method RaycastNonAlloc, addr 0x2fc43d4, size 0x8c, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results) ;

/// @brief Method RaycastNonAlloc, addr 0x2fc4338, size 0x9c, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance) ;

/// @brief Method RaycastNonAlloc, addr 0x2fc42a0, size 0x98, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method RaycastNonAlloc, addr 0x2fc3fa0, size 0xac, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method ReportContacts, addr 0x2fc5460, size 0x3d0, virtual false, abstract: false, final false
static inline void ReportContacts(::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>  array) ;

/// @brief Method SendOnCollisionEnter, addr 0x2fc513c, size 0x44, virtual false, abstract: false, final false
static inline void SendOnCollisionEnter(::UnityEngine::Component*  component, ::UnityEngine::Collision*  collision) ;

/// @brief Method SendOnCollisionExit, addr 0x2fc51c4, size 0x44, virtual false, abstract: false, final false
static inline void SendOnCollisionExit(::UnityEngine::Component*  component, ::UnityEngine::Collision*  collision) ;

/// @brief Method SendOnCollisionStay, addr 0x2fc5180, size 0x44, virtual false, abstract: false, final false
static inline void SendOnCollisionStay(::UnityEngine::Component*  component, ::UnityEngine::Collision*  collision) ;

/// @brief Method SphereCastAll, addr 0x2fc48e0, size 0x168, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method SphereCastAll, addr 0x2fc4b04, size 0xac, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray  ray, float_t  radius, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method SphereCastAll, addr 0x2fc4a48, size 0xbc, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray  ray, float_t  radius, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

static inline ::UnityEngine::Physics_ContactEventDelegate* getStaticF_ContactEvent() ;

static inline ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* getStaticF_ContactModifyEvent() ;

static inline ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* getStaticF_ContactModifyEventCCD() ;

static inline ::UnityEngine::Collision* getStaticF_s_ReusableCollision() ;

/// @brief Method get_defaultPhysicsScene, addr 0x2fc27c0, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::PhysicsScene get_defaultPhysicsScene() ;

/// @brief Method get_defaultPhysicsScene_Injected, addr 0x2fc283c, size 0x3c, virtual false, abstract: false, final false
static inline void get_defaultPhysicsScene_Injected(::ByRef<::UnityEngine::PhysicsScene>  ret) ;

/// @brief Method get_gravity, addr 0x2fc26d0, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_gravity() ;

/// @brief Method get_gravity_Injected, addr 0x2fc275c, size 0x3c, virtual false, abstract: false, final false
static inline void get_gravity_Injected(::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_invokeCollisionCallbacks, addr 0x2fc2798, size 0x28, virtual false, abstract: false, final false
static inline bool get_invokeCollisionCallbacks() ;

/// @brief Method get_reuseCollisionCallbacks, addr 0x2fc4df0, size 0x28, virtual false, abstract: false, final false
static inline bool get_reuseCollisionCallbacks() ;

static inline void setStaticF_ContactEvent(::UnityEngine::Physics_ContactEventDelegate*  value) ;

static inline void setStaticF_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value) ;

static inline void setStaticF_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value) ;

static inline void setStaticF_s_ReusableCollision(::UnityEngine::Collision*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Physics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Physics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Physics(Physics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Physics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Physics(Physics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12073};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Physics, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Physics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Physics*, "UnityEngine", "Physics");
NEED_NO_BOX(::UnityEngine::Physics_ContactEventDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Physics_ContactEventDelegate*, "UnityEngine", "Physics/ContactEventDelegate");
