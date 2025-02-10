#pragma once
// IWYU pragma private; include "UnityEngine/CharacterController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CharacterController)
namespace UnityEngine {
struct CollisionFlags;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class CharacterController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::CharacterController);
// Dependencies UnityEngine.Collider
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CharacterController
class CORDL_TYPE CharacterController : public ::UnityEngine::Collider {
public:
// Declarations
 __declspec(property(get=get_center)) ::UnityEngine::Vector3  center;

 __declspec(property(get=get_height)) float_t  height;

 __declspec(property(get=get_isGrounded)) bool  isGrounded;

 __declspec(property(get=get_stepOffset)) float_t  stepOffset;

/// @brief Method Move, addr 0x2fc6b94, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::CollisionFlags Move(::UnityEngine::Vector3  motion) ;

/// @brief Method Move_Injected, addr 0x2fc6be8, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::CollisionFlags Move_Injected(::ByRef<::UnityEngine::Vector3>  motion) ;

/// @brief Method get_center, addr 0x2fc6ca4, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_center() ;

/// @brief Method get_center_Injected, addr 0x2fc6d00, size 0x44, virtual false, abstract: false, final false
inline void get_center_Injected(::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_height, addr 0x2fc6c68, size 0x3c, virtual false, abstract: false, final false
inline float_t get_height() ;

/// @brief Method get_isGrounded, addr 0x2fc6c2c, size 0x3c, virtual false, abstract: false, final false
inline bool get_isGrounded() ;

/// @brief Method get_stepOffset, addr 0x2fc6d44, size 0x3c, virtual false, abstract: false, final false
inline float_t get_stepOffset() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CharacterController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CharacterController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CharacterController(CharacterController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CharacterController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CharacterController(CharacterController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12078};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CharacterController, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::CharacterController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CharacterController*, "UnityEngine", "CharacterController");
