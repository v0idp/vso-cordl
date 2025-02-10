#pragma once
// IWYU pragma private; include "VROSC/UI/Meshes/ProceduralArc.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProceduralArc)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace VROSC::UI::Meshes {
class ProceduralArc;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::Meshes::ProceduralArc);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace VROSC::UI::Meshes {
// Is value type: false
// CS Name: VROSC.UI.Meshes.ProceduralArc
class CORDL_TYPE ProceduralArc : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _colors, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__colors, put=__cordl_internal_set__colors)) ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  _colors;

/// @brief Field _depth, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__depth, put=__cordl_internal_set__depth)) float_t  _depth;

/// @brief Field _edges, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__edges, put=__cordl_internal_set__edges)) int32_t  _edges;

/// @brief Field _mesh, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__mesh, put=__cordl_internal_set__mesh)) ::UnityW<::UnityEngine::Mesh>  _mesh;

/// @brief Field _meshFilter, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshFilter, put=__cordl_internal_set__meshFilter)) ::UnityW<::UnityEngine::MeshFilter>  _meshFilter;

/// @brief Field _normals, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__normals, put=__cordl_internal_set__normals)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _normals;

/// @brief Field _rectTransform, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__rectTransform, put=__cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform>  _rectTransform;

/// @brief Field _startColor, offset 0x2c, size 0x10 
 __declspec(property(get=__cordl_internal_get__startColor, put=__cordl_internal_set__startColor)) ::UnityEngine::Color  _startColor;

/// @brief Field _tris, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__tris, put=__cordl_internal_set__tris)) ::ArrayW<int32_t,::Array<int32_t>*>  _tris;

/// @brief Field _uv, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__uv, put=__cordl_internal_set__uv)) ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  _uv;

 __declspec(property(get=get__vertCount)) int32_t  _vertCount;

 __declspec(property(get=get__vertexPairs)) int32_t  _vertexPairs;

/// @brief Field _vertices, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__vertices, put=__cordl_internal_set__vertices)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _vertices;

/// @brief Field _width, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__width, put=__cordl_internal_set__width)) float_t  _width;

/// @brief Method Create, addr 0x17ea320, size 0xb0, virtual false, abstract: false, final false
inline void Create() ;

/// @brief Method Generate, addr 0x17ea3d0, size 0x3dc, virtual false, abstract: false, final false
inline void Generate() ;

/// @brief Method GetCirclePosition, addr 0x17ea938, size 0x38, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetCirclePosition(float_t  progress) ;

/// @brief Method GetRequiredCompontents, addr 0x17ea238, size 0xe8, virtual false, abstract: false, final false
inline void GetRequiredCompontents() ;

static inline ::VROSC::UI::Meshes::ProceduralArc* New_ctor() ;

/// @brief Method SetColor, addr 0x17ea970, size 0x80, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method UpdateVerts, addr 0x17ea7ac, size 0x18c, virtual false, abstract: false, final false
inline void UpdateVerts(float_t  from, float_t  to) ;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& __cordl_internal_get__colors() const;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& __cordl_internal_get__colors() ;

constexpr float_t const& __cordl_internal_get__depth() const;

constexpr float_t& __cordl_internal_get__depth() ;

constexpr int32_t const& __cordl_internal_get__edges() const;

constexpr int32_t& __cordl_internal_get__edges() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__meshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__meshFilter() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__normals() const;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__normals() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__startColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__startColor() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __cordl_internal_get__tris() const;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __cordl_internal_get__tris() ;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> const& __cordl_internal_get__uv() const;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>& __cordl_internal_get__uv() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__vertices() const;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__vertices() ;

constexpr float_t const& __cordl_internal_get__width() const;

constexpr float_t& __cordl_internal_get__width() ;

constexpr void __cordl_internal_set__colors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value) ;

constexpr void __cordl_internal_set__depth(float_t  value) ;

constexpr void __cordl_internal_set__edges(int32_t  value) ;

constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set__normals(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__startColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__tris(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr void __cordl_internal_set__uv(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value) ;

constexpr void __cordl_internal_set__vertices(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr void __cordl_internal_set__width(float_t  value) ;

/// @brief Method .ctor, addr 0x17ea9f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get__vertCount, addr 0x17ea228, size 0x10, virtual false, abstract: false, final false
inline int32_t get__vertCount() ;

/// @brief Method get__vertexPairs, addr 0x17ea21c, size 0xc, virtual false, abstract: false, final false
inline int32_t get__vertexPairs() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProceduralArc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProceduralArc", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProceduralArc(ProceduralArc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProceduralArc", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProceduralArc(ProceduralArc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1635};

/// @brief Field _edges, offset: 0x20, size: 0x4, def value: None
 int32_t  ____edges;

/// @brief Field _depth, offset: 0x24, size: 0x4, def value: None
 float_t  ____depth;

/// @brief Field _width, offset: 0x28, size: 0x4, def value: None
 float_t  ____width;

/// @brief Field _startColor, offset: 0x2c, size: 0x10, def value: None
 ::UnityEngine::Color  ____startColor;

/// @brief Field _rectTransform, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____rectTransform;

/// @brief Field _meshFilter, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ____meshFilter;

/// @brief Field _vertices, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  ____vertices;

/// @brief Field _normals, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  ____normals;

/// @brief Field _colors, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  ____colors;

/// @brief Field _tris, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<int32_t,::Array<int32_t>*>  ____tris;

/// @brief Field _uv, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  ____uv;

/// @brief Field _mesh, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____mesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::Meshes::ProceduralArc, ____edges) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralArc, ____depth) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralArc, ____width) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralArc, ____startColor) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralArc, ____rectTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralArc, ____meshFilter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralArc, ____vertices) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralArc, ____normals) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralArc, ____colors) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralArc, ____tris) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralArc, ____uv) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralArc, ____mesh) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::Meshes::ProceduralArc, 0x80>, "Size mismatch!");

} // namespace end def VROSC::UI::Meshes
NEED_NO_BOX(::VROSC::UI::Meshes::ProceduralArc);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::ProceduralArc*, "VROSC.UI.Meshes", "ProceduralArc");
