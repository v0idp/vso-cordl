#pragma once
// IWYU pragma private; include "UnityEngine/MeshCollider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
CORDL_MODULE_EXPORT(MeshCollider)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine {
class MeshCollider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::MeshCollider);
// Dependencies UnityEngine.Collider
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.MeshCollider
class CORDL_TYPE MeshCollider : public ::UnityEngine::Collider {
public:
// Declarations
 __declspec(property(get=get_convex, put=set_convex)) bool  convex;

 __declspec(property(put=set_sharedMesh)) ::UnityW<::UnityEngine::Mesh>  sharedMesh;

/// @brief Method get_convex, addr 0x2fc6dc4, size 0x3c, virtual false, abstract: false, final false
inline bool get_convex() ;

/// @brief Method set_convex, addr 0x2fc6e00, size 0x44, virtual false, abstract: false, final false
inline void set_convex(bool  value) ;

/// @brief Method set_sharedMesh, addr 0x2fc6d80, size 0x44, virtual false, abstract: false, final false
inline void set_sharedMesh(::UnityEngine::Mesh*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshCollider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshCollider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshCollider(MeshCollider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshCollider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshCollider(MeshCollider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12079};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::MeshCollider, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::MeshCollider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MeshCollider*, "UnityEngine", "MeshCollider");
