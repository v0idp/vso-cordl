#pragma once
// IWYU pragma private; include "UnityEngine/Renderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Renderer)
namespace UnityEngine::Rendering {
struct LightProbeUsage;
}
namespace UnityEngine::Rendering {
struct ReflectionProbeUsage;
}
namespace UnityEngine::Rendering {
struct ShadowCastingMode;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine {
class Renderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Renderer);
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Renderer
class CORDL_TYPE Renderer : public ::UnityEngine::Component {
public:
// Declarations
 __declspec(property(put=set_allowOcclusionWhenDynamic)) bool  allowOcclusionWhenDynamic;

 __declspec(property(get=get_bounds)) ::UnityEngine::Bounds  bounds;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(put=set_lightProbeUsage)) ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage;

 __declspec(property(get=get_material, put=set_material)) ::UnityW<::UnityEngine::Material>  material;

 __declspec(property(put=set_materials)) ::ArrayW<::UnityW<::UnityEngine::Material>,::Array<::UnityW<::UnityEngine::Material>>*>  materials;

 __declspec(property(put=set_receiveShadows)) bool  receiveShadows;

 __declspec(property(put=set_reflectionProbeUsage)) ::UnityEngine::Rendering::ReflectionProbeUsage  reflectionProbeUsage;

 __declspec(property(put=set_shadowCastingMode)) ::UnityEngine::Rendering::ShadowCastingMode  shadowCastingMode;

 __declspec(property(get=get_sharedMaterial, put=set_sharedMaterial)) ::UnityW<::UnityEngine::Material>  sharedMaterial;

 __declspec(property(get=get_sortingGroupID)) int32_t  sortingGroupID;

 __declspec(property(get=get_sortingGroupOrder)) int32_t  sortingGroupOrder;

 __declspec(property(get=get_sortingLayerID, put=set_sortingLayerID)) int32_t  sortingLayerID;

 __declspec(property(get=get_sortingOrder, put=set_sortingOrder)) int32_t  sortingOrder;

/// @brief Method GetMaterial, addr 0x2f6babc, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> GetMaterial() ;

/// @brief Method GetPropertyBlock, addr 0x2f6bd00, size 0x44, virtual false, abstract: false, final false
inline void GetPropertyBlock(::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method GetSharedMaterial, addr 0x2f6baf8, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> GetSharedMaterial() ;

/// @brief Method Internal_GetPropertyBlock, addr 0x2f6bc78, size 0x44, virtual false, abstract: false, final false
inline void Internal_GetPropertyBlock(::UnityEngine::MaterialPropertyBlock*  dest) ;

/// @brief Method Internal_SetPropertyBlock, addr 0x2f6bc34, size 0x44, virtual false, abstract: false, final false
inline void Internal_SetPropertyBlock(::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method SetMaterial, addr 0x2f6bb34, size 0x44, virtual false, abstract: false, final false
inline void SetMaterial(::UnityEngine::Material*  m) ;

/// @brief Method SetMaterialArray, addr 0x2f6bbcc, size 0x68, virtual false, abstract: false, final false
inline void SetMaterialArray(::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>  m) ;

/// @brief Method SetMaterialArray, addr 0x2f6bb78, size 0x54, virtual false, abstract: false, final false
inline void SetMaterialArray(::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>  m, int32_t  length) ;

/// @brief Method SetPropertyBlock, addr 0x2f6bcbc, size 0x44, virtual false, abstract: false, final false
inline void SetPropertyBlock(::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method get_bounds, addr 0x2f6ba10, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_bounds() ;

/// @brief Method get_bounds_Injected, addr 0x2f6ba78, size 0x44, virtual false, abstract: false, final false
inline void get_bounds_Injected(::ByRef<::UnityEngine::Bounds>  ret) ;

/// @brief Method get_enabled, addr 0x2f6bd44, size 0x3c, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_material, addr 0x2f6c094, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_material() ;

/// @brief Method get_sharedMaterial, addr 0x2f6c114, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_sharedMaterial() ;

/// @brief Method get_sortingGroupID, addr 0x2f6bfd4, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_sortingGroupID() ;

/// @brief Method get_sortingGroupOrder, addr 0x2f6c010, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_sortingGroupOrder() ;

/// @brief Method get_sortingLayerID, addr 0x2f6bed4, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_sortingLayerID() ;

/// @brief Method get_sortingOrder, addr 0x2f6bf54, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_sortingOrder() ;

/// @brief Method set_allowOcclusionWhenDynamic, addr 0x2f6c04c, size 0x44, virtual false, abstract: false, final false
inline void set_allowOcclusionWhenDynamic(bool  value) ;

/// @brief Method set_enabled, addr 0x2f6bd80, size 0x44, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_lightProbeUsage, addr 0x2f6be4c, size 0x44, virtual false, abstract: false, final false
inline void set_lightProbeUsage(::UnityEngine::Rendering::LightProbeUsage  value) ;

/// @brief Method set_material, addr 0x2f6c0d0, size 0x44, virtual false, abstract: false, final false
inline void set_material(::UnityEngine::Material*  value) ;

/// @brief Method set_materials, addr 0x2f6c090, size 0x4, virtual false, abstract: false, final false
inline void set_materials(::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>  value) ;

/// @brief Method set_receiveShadows, addr 0x2f6be08, size 0x44, virtual false, abstract: false, final false
inline void set_receiveShadows(bool  value) ;

/// @brief Method set_reflectionProbeUsage, addr 0x2f6be90, size 0x44, virtual false, abstract: false, final false
inline void set_reflectionProbeUsage(::UnityEngine::Rendering::ReflectionProbeUsage  value) ;

/// @brief Method set_shadowCastingMode, addr 0x2f6bdc4, size 0x44, virtual false, abstract: false, final false
inline void set_shadowCastingMode(::UnityEngine::Rendering::ShadowCastingMode  value) ;

/// @brief Method set_sharedMaterial, addr 0x2f6c150, size 0x44, virtual false, abstract: false, final false
inline void set_sharedMaterial(::UnityEngine::Material*  value) ;

/// @brief Method set_sortingLayerID, addr 0x2f6bf10, size 0x44, virtual false, abstract: false, final false
inline void set_sortingLayerID(int32_t  value) ;

/// @brief Method set_sortingOrder, addr 0x2f6bf90, size 0x44, virtual false, abstract: false, final false
inline void set_sortingOrder(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Renderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Renderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Renderer(Renderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Renderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Renderer(Renderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8457};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Renderer, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Renderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Renderer*, "UnityEngine", "Renderer");
