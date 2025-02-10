#pragma once
// IWYU pragma private; include "UnityEngine/PhysicsScene.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsScene)
namespace System {
class Object;
}
namespace UnityEngine {
class Collider;
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
struct PhysicsScene;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PhysicsScene);
// Dependencies System.IEquatable`1<T>
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.PhysicsScene
struct CORDL_TYPE PhysicsScene {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::PhysicsScene>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::PhysicsScene>*() ;

/// @brief Method Equals, addr 0x2fc73e8, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals, addr 0x2fc7460, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::PhysicsScene  other) ;

/// @brief Method GetHashCode, addr 0x2fc73e0, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Internal_Raycast, addr 0x2fc7558, size 0x7c, virtual false, abstract: false, final false
static inline bool Internal_Raycast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, float_t  maxDistance, ::ByRef<::UnityEngine::RaycastHit>  hit, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_RaycastNonAlloc, addr 0x2fc7650, size 0x78, virtual false, abstract: false, final false
static inline int32_t Internal_RaycastNonAlloc(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_RaycastNonAlloc_Injected, addr 0x2fc76c8, size 0x7c, virtual false, abstract: false, final false
static inline int32_t Internal_RaycastNonAlloc_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Ray>  ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_RaycastTest, addr 0x2fc7470, size 0x7c, virtual false, abstract: false, final false
static inline bool Internal_RaycastTest(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_RaycastTest_Injected, addr 0x2fc74ec, size 0x6c, virtual false, abstract: false, final false
static inline bool Internal_RaycastTest_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Ray>  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_Raycast_Injected, addr 0x2fc75d4, size 0x7c, virtual false, abstract: false, final false
static inline bool Internal_Raycast_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Ray>  ray, float_t  maxDistance, ::ByRef<::UnityEngine::RaycastHit>  hit, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphere, addr 0x2fc4ebc, size 0x8, virtual false, abstract: false, final false
inline int32_t OverlapSphere(::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphereNonAlloc_Internal, addr 0x2fc7744, size 0x84, virtual false, abstract: false, final false
static inline int32_t OverlapSphereNonAlloc_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphereNonAlloc_Internal_Injected, addr 0x2fc77c8, size 0x7c, virtual false, abstract: false, final false
static inline int32_t OverlapSphereNonAlloc_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0x2fc2e90, size 0x1ec, virtual false, abstract: false, final false
inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0x2fc29a4, size 0x1d0, virtual false, abstract: false, final false
inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0x2fc404c, size 0x254, virtual false, abstract: false, final false
inline int32_t Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  raycastHits, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method ToString, addr 0x2fc72fc, size 0xe4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::PhysicsScene>"
constexpr ::System::IEquatable_1<::UnityEngine::PhysicsScene>* i___System__IEquatable_1___UnityEngine__PhysicsScene_() ;

// Ctor Parameters []
// @brief default ctor
constexpr PhysicsScene() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PhysicsScene(int32_t  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12086};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_Handle, offset: 0x0, size: 0x4, def value: None
 int32_t  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PhysicsScene, m_Handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::PhysicsScene, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PhysicsScene, "UnityEngine", "PhysicsScene");
