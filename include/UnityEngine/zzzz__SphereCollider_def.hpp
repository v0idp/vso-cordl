#pragma once
// IWYU pragma private; include "UnityEngine/SphereCollider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SphereCollider)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class SphereCollider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SphereCollider);
// Dependencies UnityEngine.Collider
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SphereCollider
class CORDL_TYPE SphereCollider : public ::UnityEngine::Collider {
public:
// Declarations
 __declspec(property(put=set_center)) ::UnityEngine::Vector3  center;

 __declspec(property(put=set_radius)) float_t  radius;

/// @brief Method set_center, addr 0x2fc7200, size 0x54, virtual false, abstract: false, final false
inline void set_center(::UnityEngine::Vector3  value) ;

/// @brief Method set_center_Injected, addr 0x2fc7254, size 0x44, virtual false, abstract: false, final false
inline void set_center_Injected(::ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_radius, addr 0x2fc7298, size 0x4c, virtual false, abstract: false, final false
inline void set_radius(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SphereCollider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SphereCollider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SphereCollider(SphereCollider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SphereCollider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SphereCollider(SphereCollider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12082};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SphereCollider, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::SphereCollider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SphereCollider*, "UnityEngine", "SphereCollider");
