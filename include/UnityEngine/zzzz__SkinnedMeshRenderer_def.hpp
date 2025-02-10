#pragma once
// IWYU pragma private; include "UnityEngine/SkinnedMeshRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SkinnedMeshRenderer)
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SkinnedMeshRenderer);
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SkinnedMeshRenderer
class CORDL_TYPE SkinnedMeshRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
 __declspec(property(put=set_bones)) ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  bones;

 __declspec(property(put=set_rootBone)) ::UnityW<::UnityEngine::Transform>  rootBone;

 __declspec(property(get=get_sharedMesh, put=set_sharedMesh)) ::UnityW<::UnityEngine::Mesh>  sharedMesh;

 __declspec(property(put=set_updateWhenOffscreen)) bool  updateWhenOffscreen;

/// @brief Method SetBlendShapeWeight, addr 0x2f6ee58, size 0x54, virtual false, abstract: false, final false
inline void SetBlendShapeWeight(int32_t  index, float_t  value) ;

/// @brief Method get_sharedMesh, addr 0x2f6edd8, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_sharedMesh() ;

/// @brief Method set_bones, addr 0x2f6ed94, size 0x44, virtual false, abstract: false, final false
inline void set_bones(::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  value) ;

/// @brief Method set_rootBone, addr 0x2f6ed50, size 0x44, virtual false, abstract: false, final false
inline void set_rootBone(::UnityEngine::Transform*  value) ;

/// @brief Method set_sharedMesh, addr 0x2f6ee14, size 0x44, virtual false, abstract: false, final false
inline void set_sharedMesh(::UnityEngine::Mesh*  value) ;

/// @brief Method set_updateWhenOffscreen, addr 0x2f6ed0c, size 0x44, virtual false, abstract: false, final false
inline void set_updateWhenOffscreen(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkinnedMeshRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkinnedMeshRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SkinnedMeshRenderer(SkinnedMeshRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkinnedMeshRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkinnedMeshRenderer(SkinnedMeshRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8489};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SkinnedMeshRenderer, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::SkinnedMeshRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SkinnedMeshRenderer*, "UnityEngine", "SkinnedMeshRenderer");
