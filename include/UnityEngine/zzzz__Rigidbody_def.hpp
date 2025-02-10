#pragma once
// IWYU pragma private; include "UnityEngine/Rigidbody.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Rigidbody)
namespace UnityEngine {
struct CollisionDetectionMode;
}
namespace UnityEngine {
struct ForceMode;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Rigidbody;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rigidbody);
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Rigidbody
class CORDL_TYPE Rigidbody : public ::UnityEngine::Component {
public:
// Declarations
 __declspec(property(put=set_angularVelocity)) ::UnityEngine::Vector3  angularVelocity;

 __declspec(property(put=set_collisionDetectionMode)) ::UnityEngine::CollisionDetectionMode  collisionDetectionMode;

 __declspec(property(get=get_isKinematic, put=set_isKinematic)) bool  isKinematic;

 __declspec(property(put=set_mass)) float_t  mass;

 __declspec(property(put=set_maxAngularVelocity)) float_t  maxAngularVelocity;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_rotation, put=set_rotation)) ::UnityEngine::Quaternion  rotation;

 __declspec(property(put=set_sleepThreshold)) float_t  sleepThreshold;

 __declspec(property(put=set_useGravity)) bool  useGravity;

 __declspec(property(put=set_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Method AddForce, addr 0x2fc6508, size 0x8, virtual false, abstract: false, final false
inline void AddForce(::UnityEngine::Vector3  force) ;

/// @brief Method AddForce, addr 0x2fc6458, size 0x5c, virtual false, abstract: false, final false
inline void AddForce(::UnityEngine::Vector3  force, ::UnityEngine::ForceMode  mode) ;

/// @brief Method AddForce_Injected, addr 0x2fc64b4, size 0x54, virtual false, abstract: false, final false
inline void AddForce_Injected(::ByRef<::UnityEngine::Vector3>  force, ::UnityEngine::ForceMode  mode) ;

/// @brief Method AddTorque, addr 0x2fc65c0, size 0x8, virtual false, abstract: false, final false
inline void AddTorque(::UnityEngine::Vector3  torque) ;

/// @brief Method AddTorque, addr 0x2fc6510, size 0x5c, virtual false, abstract: false, final false
inline void AddTorque(::UnityEngine::Vector3  torque, ::UnityEngine::ForceMode  mode) ;

/// @brief Method AddTorque_Injected, addr 0x2fc656c, size 0x54, virtual false, abstract: false, final false
inline void AddTorque_Injected(::ByRef<::UnityEngine::Vector3>  torque, ::UnityEngine::ForceMode  mode) ;

/// @brief Method MovePosition, addr 0x2fc6328, size 0x54, virtual false, abstract: false, final false
inline void MovePosition(::UnityEngine::Vector3  position) ;

/// @brief Method MovePosition_Injected, addr 0x2fc637c, size 0x44, virtual false, abstract: false, final false
inline void MovePosition_Injected(::ByRef<::UnityEngine::Vector3>  position) ;

/// @brief Method MoveRotation, addr 0x2fc63c0, size 0x54, virtual false, abstract: false, final false
inline void MoveRotation(::UnityEngine::Quaternion  rot) ;

/// @brief Method MoveRotation_Injected, addr 0x2fc6414, size 0x44, virtual false, abstract: false, final false
inline void MoveRotation_Injected(::ByRef<::UnityEngine::Quaternion>  rot) ;

static inline ::UnityEngine::Rigidbody* New_ctor() ;

/// @brief Method .ctor, addr 0x2fc65c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isKinematic, addr 0x2fc5f60, size 0x3c, virtual false, abstract: false, final false
inline bool get_isKinematic() ;

/// @brief Method get_position, addr 0x2fc6024, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_position_Injected, addr 0x2fc6080, size 0x44, virtual false, abstract: false, final false
inline void get_position_Injected(::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_rotation, addr 0x2fc615c, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_rotation() ;

/// @brief Method get_rotation_Injected, addr 0x2fc61b4, size 0x44, virtual false, abstract: false, final false
inline void get_rotation_Injected(::ByRef<::UnityEngine::Quaternion>  ret) ;

/// @brief Method set_angularVelocity, addr 0x2fc5e38, size 0x54, virtual false, abstract: false, final false
inline void set_angularVelocity(::UnityEngine::Vector3  value) ;

/// @brief Method set_angularVelocity_Injected, addr 0x2fc5e8c, size 0x44, virtual false, abstract: false, final false
inline void set_angularVelocity_Injected(::ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_collisionDetectionMode, addr 0x2fc5fe0, size 0x44, virtual false, abstract: false, final false
inline void set_collisionDetectionMode(::UnityEngine::CollisionDetectionMode  value) ;

/// @brief Method set_isKinematic, addr 0x2fc5f9c, size 0x44, virtual false, abstract: false, final false
inline void set_isKinematic(bool  value) ;

/// @brief Method set_mass, addr 0x2fc5ed0, size 0x4c, virtual false, abstract: false, final false
inline void set_mass(float_t  value) ;

/// @brief Method set_maxAngularVelocity, addr 0x2fc62dc, size 0x4c, virtual false, abstract: false, final false
inline void set_maxAngularVelocity(float_t  value) ;

/// @brief Method set_position, addr 0x2fc60c4, size 0x54, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::Vector3  value) ;

/// @brief Method set_position_Injected, addr 0x2fc6118, size 0x44, virtual false, abstract: false, final false
inline void set_position_Injected(::ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_rotation, addr 0x2fc61f8, size 0x54, virtual false, abstract: false, final false
inline void set_rotation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_rotation_Injected, addr 0x2fc624c, size 0x44, virtual false, abstract: false, final false
inline void set_rotation_Injected(::ByRef<::UnityEngine::Quaternion>  value) ;

/// @brief Method set_sleepThreshold, addr 0x2fc6290, size 0x4c, virtual false, abstract: false, final false
inline void set_sleepThreshold(float_t  value) ;

/// @brief Method set_useGravity, addr 0x2fc5f1c, size 0x44, virtual false, abstract: false, final false
inline void set_useGravity(bool  value) ;

/// @brief Method set_velocity, addr 0x2fc5da0, size 0x54, virtual false, abstract: false, final false
inline void set_velocity(::UnityEngine::Vector3  value) ;

/// @brief Method set_velocity_Injected, addr 0x2fc5df4, size 0x44, virtual false, abstract: false, final false
inline void set_velocity_Injected(::ByRef<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Rigidbody() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Rigidbody", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Rigidbody(Rigidbody && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Rigidbody", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Rigidbody(Rigidbody const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12076};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rigidbody, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Rigidbody);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rigidbody*, "UnityEngine", "Rigidbody");
