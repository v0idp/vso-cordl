#pragma once
// IWYU pragma private; include "UnityEngine/Sprite.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Sprite)
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct SecondarySpriteTexture;
}
namespace UnityEngine {
struct SpriteMeshType;
}
namespace UnityEngine {
struct SpritePackingRotation;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class Sprite;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Sprite);
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Sprite
class CORDL_TYPE Sprite : public ::UnityEngine::Object {
public:
// Declarations
 __declspec(property(get=get_associatedAlphaSplitTexture)) ::UnityW<::UnityEngine::Texture2D>  associatedAlphaSplitTexture;

 __declspec(property(get=get_border)) ::UnityEngine::Vector4  border;

 __declspec(property(get=get_bounds)) ::UnityEngine::Bounds  bounds;

 __declspec(property(get=get_packed)) bool  packed;

 __declspec(property(get=get_packingRotation)) ::UnityEngine::SpritePackingRotation  packingRotation;

 __declspec(property(get=get_pivot)) ::UnityEngine::Vector2  pivot;

 __declspec(property(get=get_pixelsPerUnit)) float_t  pixelsPerUnit;

 __declspec(property(get=get_rect)) ::UnityEngine::Rect  rect;

 __declspec(property(get=get_texture)) ::UnityW<::UnityEngine::Texture2D>  texture;

 __declspec(property(get=get_triangles)) ::ArrayW<uint16_t,::Array<uint16_t>*>  triangles;

 __declspec(property(get=get_uv)) ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  uv;

 __declspec(property(get=get_vertices)) ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  vertices;

/// @brief Method Create, addr 0x2f968d0, size 0xe8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Sprite> Create(::UnityEngine::Texture2D*  texture, ::UnityEngine::Rect  rect, ::UnityEngine::Vector2  pivot, float_t  pixelsPerUnit, uint32_t  extrude, ::UnityEngine::SpriteMeshType  meshType) ;

/// @brief Method Create, addr 0x2f968bc, size 0x14, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Sprite> Create(::UnityEngine::Texture2D*  texture, ::UnityEngine::Rect  rect, ::UnityEngine::Vector2  pivot, float_t  pixelsPerUnit, uint32_t  extrude, ::UnityEngine::SpriteMeshType  meshType, ::UnityEngine::Vector4  border) ;

/// @brief Method Create, addr 0x2f9642c, size 0x14, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Sprite> Create(::UnityEngine::Texture2D*  texture, ::UnityEngine::Rect  rect, ::UnityEngine::Vector2  pivot, float_t  pixelsPerUnit, uint32_t  extrude, ::UnityEngine::SpriteMeshType  meshType, ::UnityEngine::Vector4  border, bool  generateFallbackPhysicsShape) ;

/// @brief Method Create, addr 0x2f96440, size 0x47c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Sprite> Create(::UnityEngine::Texture2D*  texture, ::UnityEngine::Rect  rect, ::UnityEngine::Vector2  pivot, float_t  pixelsPerUnit, uint32_t  extrude, ::UnityEngine::SpriteMeshType  meshType, ::UnityEngine::Vector4  border, bool  generateFallbackPhysicsShape, ::ArrayW<::UnityEngine::SecondarySpriteTexture,::Array<::UnityEngine::SecondarySpriteTexture>*>  secondaryTextures) ;

/// @brief Method CreateSprite, addr 0x2f95e88, size 0xa8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Sprite> CreateSprite(::UnityEngine::Texture2D*  texture, ::UnityEngine::Rect  rect, ::UnityEngine::Vector2  pivot, float_t  pixelsPerUnit, uint32_t  extrude, ::UnityEngine::SpriteMeshType  meshType, ::UnityEngine::Vector4  border, bool  generateFallbackPhysicsShape, ::ArrayW<::UnityEngine::SecondarySpriteTexture,::Array<::UnityEngine::SecondarySpriteTexture>*>  secondaryTexture) ;

/// @brief Method CreateSprite_Injected, addr 0x2f95f30, size 0x9c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Sprite> CreateSprite_Injected(::UnityEngine::Texture2D*  texture, ::ByRef<::UnityEngine::Rect>  rect, ::ByRef<::UnityEngine::Vector2>  pivot, float_t  pixelsPerUnit, uint32_t  extrude, ::UnityEngine::SpriteMeshType  meshType, ::ByRef<::UnityEngine::Vector4>  border, bool  generateFallbackPhysicsShape, ::ArrayW<::UnityEngine::SecondarySpriteTexture,::Array<::UnityEngine::SecondarySpriteTexture>*>  secondaryTexture) ;

/// @brief Method GetInnerUVs, addr 0x2f95cb4, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetInnerUVs() ;

/// @brief Method GetInnerUVs_Injected, addr 0x2f95d0c, size 0x44, virtual false, abstract: false, final false
inline void GetInnerUVs_Injected(::ByRef<::UnityEngine::Vector4>  ret) ;

/// @brief Method GetOuterUVs, addr 0x2f95d50, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetOuterUVs() ;

/// @brief Method GetOuterUVs_Injected, addr 0x2f95da8, size 0x44, virtual false, abstract: false, final false
inline void GetOuterUVs_Injected(::ByRef<::UnityEngine::Vector4>  ret) ;

/// @brief Method GetPacked, addr 0x2f95c78, size 0x3c, virtual false, abstract: false, final false
inline int32_t GetPacked() ;

/// @brief Method GetPackingRotation, addr 0x2f95c3c, size 0x3c, virtual false, abstract: false, final false
inline int32_t GetPackingRotation() ;

/// @brief Method GetPadding, addr 0x2f95dec, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetPadding() ;

/// @brief Method GetPadding_Injected, addr 0x2f95e44, size 0x44, virtual false, abstract: false, final false
inline void GetPadding_Injected(::ByRef<::UnityEngine::Vector4>  ret) ;

static inline ::UnityEngine::Sprite* New_ctor() ;

/// @brief Method .ctor, addr 0x2f95be4, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_associatedAlphaSplitTexture, addr 0x2f96228, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_associatedAlphaSplitTexture() ;

/// @brief Method get_border, addr 0x2f96114, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 get_border() ;

/// @brief Method get_border_Injected, addr 0x2f9616c, size 0x44, virtual false, abstract: false, final false
inline void get_border_Injected(::ByRef<::UnityEngine::Vector4>  ret) ;

/// @brief Method get_bounds, addr 0x2f95fcc, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_bounds() ;

/// @brief Method get_bounds_Injected, addr 0x2f96034, size 0x44, virtual false, abstract: false, final false
inline void get_bounds_Injected(::ByRef<::UnityEngine::Bounds>  ret) ;

/// @brief Method get_packed, addr 0x2f962f4, size 0x48, virtual false, abstract: false, final false
inline bool get_packed() ;

/// @brief Method get_packingRotation, addr 0x2f9633c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::SpritePackingRotation get_packingRotation() ;

/// @brief Method get_pivot, addr 0x2f96264, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_pivot() ;

/// @brief Method get_pivot_Injected, addr 0x2f962b0, size 0x44, virtual false, abstract: false, final false
inline void get_pivot_Injected(::ByRef<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_pixelsPerUnit, addr 0x2f961ec, size 0x3c, virtual false, abstract: false, final false
inline float_t get_pixelsPerUnit() ;

/// @brief Method get_rect, addr 0x2f96078, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_rect() ;

/// @brief Method get_rect_Injected, addr 0x2f960d0, size 0x44, virtual false, abstract: false, final false
inline void get_rect_Injected(::ByRef<::UnityEngine::Rect>  ret) ;

/// @brief Method get_texture, addr 0x2f961b0, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_texture() ;

/// @brief Method get_triangles, addr 0x2f963b4, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<uint16_t,::Array<uint16_t>*> get_triangles() ;

/// @brief Method get_uv, addr 0x2f963f0, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> get_uv() ;

/// @brief Method get_vertices, addr 0x2f96378, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> get_vertices() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Sprite() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Sprite", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Sprite(Sprite && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sprite", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sprite(Sprite const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8656};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Sprite, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Sprite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Sprite*, "UnityEngine", "Sprite");
