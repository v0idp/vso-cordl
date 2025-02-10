#pragma once
// IWYU pragma private; include "UnityEngine/ControllerColliderHit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerColliderHit)
namespace UnityEngine {
class CharacterController;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace UnityEngine {
class ControllerColliderHit;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ControllerColliderHit);
// Dependencies System.Object, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ControllerColliderHit
class CORDL_TYPE ControllerColliderHit : public ::System::Object {
public:
// Declarations
/// @brief Field m_Collider, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Collider, put=__cordl_internal_set_m_Collider)) ::UnityW<::UnityEngine::Collider>  m_Collider;

/// @brief Field m_Controller, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Controller, put=__cordl_internal_set_m_Controller)) ::UnityW<::UnityEngine::CharacterController>  m_Controller;

/// @brief Field m_MoveDirection, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_MoveDirection, put=__cordl_internal_set_m_MoveDirection)) ::UnityEngine::Vector3  m_MoveDirection;

/// @brief Field m_MoveLength, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MoveLength, put=__cordl_internal_set_m_MoveLength)) float_t  m_MoveLength;

/// @brief Field m_Normal, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_Normal, put=__cordl_internal_set_m_Normal)) ::UnityEngine::Vector3  m_Normal;

/// @brief Field m_Point, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_Point, put=__cordl_internal_set_m_Point)) ::UnityEngine::Vector3  m_Point;

/// @brief Field m_Push, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Push, put=__cordl_internal_set_m_Push)) int32_t  m_Push;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_m_Collider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_m_Collider() ;

constexpr ::UnityW<::UnityEngine::CharacterController> const& __cordl_internal_get_m_Controller() const;

constexpr ::UnityW<::UnityEngine::CharacterController>& __cordl_internal_get_m_Controller() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_MoveDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_MoveDirection() ;

constexpr float_t const& __cordl_internal_get_m_MoveLength() const;

constexpr float_t& __cordl_internal_get_m_MoveLength() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Normal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Normal() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Point() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Point() ;

constexpr int32_t const& __cordl_internal_get_m_Push() const;

constexpr int32_t& __cordl_internal_get_m_Push() ;

constexpr void __cordl_internal_set_m_Collider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_m_Controller(::UnityW<::UnityEngine::CharacterController>  value) ;

constexpr void __cordl_internal_set_m_MoveDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_MoveLength(float_t  value) ;

constexpr void __cordl_internal_set_m_Normal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_Point(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_Push(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerColliderHit() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerColliderHit", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerColliderHit(ControllerColliderHit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerColliderHit", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerColliderHit(ControllerColliderHit const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12067};

/// @brief Field m_Controller, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CharacterController>  ___m_Controller;

/// @brief Field m_Collider, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___m_Collider;

/// @brief Field m_Point, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_Point;

/// @brief Field m_Normal, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_Normal;

/// @brief Field m_MoveDirection, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_MoveDirection;

/// @brief Field m_MoveLength, offset: 0x44, size: 0x4, def value: None
 float_t  ___m_MoveLength;

/// @brief Field m_Push, offset: 0x48, size: 0x4, def value: None
 int32_t  ___m_Push;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ControllerColliderHit, ___m_Controller) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ControllerColliderHit, ___m_Collider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ControllerColliderHit, ___m_Point) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ControllerColliderHit, ___m_Normal) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ControllerColliderHit, ___m_MoveDirection) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ControllerColliderHit, ___m_MoveLength) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ControllerColliderHit, ___m_Push) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ControllerColliderHit, 0x50>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::ControllerColliderHit);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ControllerColliderHit*, "UnityEngine", "ControllerColliderHit");
