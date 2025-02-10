#pragma once
// IWYU pragma private; include "UnityEngine/Graphics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Graphics)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::Rendering {
struct GraphicsTier;
}
namespace UnityEngine::Rendering {
struct LightProbeUsage;
}
namespace UnityEngine::Rendering {
struct ShadowCastingMode;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
class LightProbeProxyVolume;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct RenderBuffer;
}
namespace UnityEngine {
struct RenderInstancedDataLayout;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine {
class Graphics;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Graphics);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Graphics
class CORDL_TYPE Graphics : public ::System::Object {
public:
// Declarations
/// @brief Field kMaxDrawMeshInstanceCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kMaxDrawMeshInstanceCount, put=setStaticF_kMaxDrawMeshInstanceCount)) int32_t  kMaxDrawMeshInstanceCount;

/// @brief Field s_RenderInstancedDataLayouts, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_RenderInstancedDataLayouts, put=setStaticF_s_RenderInstancedDataLayouts)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderInstancedDataLayout>*  s_RenderInstancedDataLayouts;

/// @brief Method Blit, addr 0x2f69834, size 0x84, virtual false, abstract: false, final false
static inline void Blit(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest) ;

/// @brief Method Blit, addr 0x2f69958, size 0x70, virtual false, abstract: false, final false
static inline void Blit(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest, ::UnityEngine::Material*  mat) ;

/// @brief Method Blit, addr 0x2f698b8, size 0xa0, virtual false, abstract: false, final false
static inline void Blit(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest, ::UnityEngine::Material*  mat, int32_t  pass) ;

/// @brief Method Blit2, addr 0x2f69194, size 0x44, virtual false, abstract: false, final false
static inline void Blit2(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest) ;

/// @brief Method CopyTexture, addr 0x2f69424, size 0x84, virtual false, abstract: false, final false
static inline void CopyTexture(::UnityEngine::Texture*  src, ::UnityEngine::Texture*  dst) ;

/// @brief Method CopyTexture, addr 0x2f694a8, size 0xb4, virtual false, abstract: false, final false
static inline void CopyTexture(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, ::UnityEngine::Texture*  dst, int32_t  dstElement, int32_t  dstMip) ;

/// @brief Method CopyTexture_Full, addr 0x2f68ec0, size 0x44, virtual false, abstract: false, final false
static inline void CopyTexture_Full(::UnityEngine::Texture*  src, ::UnityEngine::Texture*  dst) ;

/// @brief Method CopyTexture_Slice, addr 0x2f68f04, size 0x74, virtual false, abstract: false, final false
static inline void CopyTexture_Slice(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, ::UnityEngine::Texture*  dst, int32_t  dstElement, int32_t  dstMip) ;

/// @brief Method DrawMesh, addr 0x2f6969c, size 0x198, virtual false, abstract: false, final false
static inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  layer, ::UnityEngine::Camera*  camera, int32_t  submeshIndex, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, ::UnityEngine::Transform*  probeAnchor, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::UnityEngine::LightProbeProxyVolume*  lightProbeProxyVolume) ;

/// @brief Method DrawMesh, addr 0x2f6955c, size 0x140, virtual false, abstract: false, final false
static inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  layer, ::UnityEngine::Camera*  camera, int32_t  submeshIndex, ::UnityEngine::MaterialPropertyBlock*  properties, bool  castShadows, bool  receiveShadows, bool  useLightProbes) ;

/// @brief Method Internal_BlitMaterial5, addr 0x2f69128, size 0x6c, virtual false, abstract: false, final false
static inline void Internal_BlitMaterial5(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest, ::UnityEngine::Material*  mat, int32_t  pass, bool  setRT) ;

/// @brief Method Internal_DrawMesh, addr 0x2f68f78, size 0xf0, virtual false, abstract: false, final false
static inline void Internal_DrawMesh(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  layer, ::UnityEngine::Camera*  camera, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, ::UnityEngine::Transform*  probeAnchor, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::UnityEngine::LightProbeProxyVolume*  lightProbeProxyVolume) ;

/// @brief Method Internal_DrawMesh_Injected, addr 0x2f69068, size 0xc0, virtual false, abstract: false, final false
static inline void Internal_DrawMesh_Injected(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::ByRef<::UnityEngine::Matrix4x4>  matrix, ::UnityEngine::Material*  material, int32_t  layer, ::UnityEngine::Camera*  camera, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, ::UnityEngine::Transform*  probeAnchor, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::UnityEngine::LightProbeProxyVolume*  lightProbeProxyVolume) ;

/// @brief Method Internal_GetMaxDrawMeshInstanceCount, addr 0x2f68d20, size 0x28, virtual false, abstract: false, final false
static inline int32_t Internal_GetMaxDrawMeshInstanceCount() ;

/// @brief Method Internal_SetNullRT, addr 0x2f68d84, size 0x28, virtual false, abstract: false, final false
static inline void Internal_SetNullRT() ;

/// @brief Method Internal_SetRTSimple, addr 0x2f68dac, size 0xa8, virtual false, abstract: false, final false
static inline void Internal_SetRTSimple(::UnityEngine::RenderBuffer  color, ::UnityEngine::RenderBuffer  depth, int32_t  mip, ::UnityEngine::CubemapFace  face, int32_t  depthSlice) ;

/// @brief Method Internal_SetRTSimple_Injected, addr 0x2f68e54, size 0x6c, virtual false, abstract: false, final false
static inline void Internal_SetRTSimple_Injected(::ByRef<::UnityEngine::RenderBuffer>  color, ::ByRef<::UnityEngine::RenderBuffer>  depth, int32_t  mip, ::UnityEngine::CubemapFace  face, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0x2f699c8, size 0x60, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::RenderTexture*  rt) ;

/// @brief Method SetRenderTarget, addr 0x2f693a8, size 0x7c, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::RenderTexture*  rt, int32_t  mipLevel, ::UnityEngine::CubemapFace  face, int32_t  depthSlice) ;

/// @brief Method SetRenderTargetImpl, addr 0x2f691d8, size 0x9c, virtual false, abstract: false, final false
static inline void SetRenderTargetImpl(::UnityEngine::RenderBuffer  colorBuffer, ::UnityEngine::RenderBuffer  depthBuffer, int32_t  mipLevel, ::UnityEngine::CubemapFace  face, int32_t  depthSlice) ;

/// @brief Method SetRenderTargetImpl, addr 0x2f69274, size 0x12c, virtual false, abstract: false, final false
static inline void SetRenderTargetImpl(::UnityEngine::RenderTexture*  rt, int32_t  mipLevel, ::UnityEngine::CubemapFace  face, int32_t  depthSlice) ;

static inline int32_t getStaticF_kMaxDrawMeshInstanceCount() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderInstancedDataLayout>* getStaticF_s_RenderInstancedDataLayouts() ;

static inline void setStaticF_kMaxDrawMeshInstanceCount(int32_t  value) ;

static inline void setStaticF_s_RenderInstancedDataLayouts(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderInstancedDataLayout>*  value) ;

/// @brief Method set_activeTier, addr 0x2f68d48, size 0x3c, virtual false, abstract: false, final false
static inline void set_activeTier(::UnityEngine::Rendering::GraphicsTier  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Graphics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Graphics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Graphics(Graphics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Graphics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Graphics(Graphics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8444};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Graphics, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Graphics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Graphics*, "UnityEngine", "Graphics");
