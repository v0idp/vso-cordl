#pragma once
// IWYU pragma private; include "UnityEngine/Rigidbody2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Rigidbody2D)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class Rigidbody2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rigidbody2D);
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Rigidbody2D
class CORDL_TYPE Rigidbody2D : public ::UnityEngine::Component {
public:
// Declarations
 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector2  position;

 __declspec(property(get=get_rotation)) float_t  rotation;

/// @brief Method MovePosition, addr 0x2fc2284, size 0x48, virtual false, abstract: false, final false
inline void MovePosition(::UnityEngine::Vector2  position) ;

/// @brief Method MovePosition_Injected, addr 0x2fc22cc, size 0x44, virtual false, abstract: false, final false
inline void MovePosition_Injected(::ByRef<::UnityEngine::Vector2>  position) ;

/// @brief Method MoveRotation, addr 0x2fc2310, size 0x4c, virtual false, abstract: false, final false
inline void MoveRotation(float_t  angle) ;

/// @brief Method MoveRotation_Angle, addr 0x2fc235c, size 0x4c, virtual false, abstract: false, final false
inline void MoveRotation_Angle(float_t  angle) ;

/// @brief Method get_position, addr 0x2fc212c, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_position() ;

/// @brief Method get_position_Injected, addr 0x2fc2178, size 0x44, virtual false, abstract: false, final false
inline void get_position_Injected(::ByRef<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_rotation, addr 0x2fc2248, size 0x3c, virtual false, abstract: false, final false
inline float_t get_rotation() ;

/// @brief Method set_position, addr 0x2fc21bc, size 0x48, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::Vector2  value) ;

/// @brief Method set_position_Injected, addr 0x2fc2204, size 0x44, virtual false, abstract: false, final false
inline void set_position_Injected(::ByRef<::UnityEngine::Vector2>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Rigidbody2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Rigidbody2D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Rigidbody2D(Rigidbody2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Rigidbody2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Rigidbody2D(Rigidbody2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12302};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rigidbody2D, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Rigidbody2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rigidbody2D*, "UnityEngine", "Rigidbody2D");
