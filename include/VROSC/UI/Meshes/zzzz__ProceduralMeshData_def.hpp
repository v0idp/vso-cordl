#pragma once
// IWYU pragma private; include "VROSC/UI/Meshes/ProceduralMeshData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProceduralMeshData)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
struct AnimatedAppear_Mode;
}
// Forward declare root types
namespace VROSC::UI::Meshes {
class ProceduralMeshData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::Meshes::ProceduralMeshData);
// Dependencies UnityEngine.ScriptableObject
namespace VROSC::UI::Meshes {
// Is value type: false
// CS Name: VROSC.UI.Meshes.ProceduralMeshData
class CORDL_TYPE ProceduralMeshData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_VertCount)) int32_t  VertCount;

/// @brief Field _colors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__colors, put=__cordl_internal_set__colors)) ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  _colors;

/// @brief Field _meshDataExistsForVertCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__meshDataExistsForVertCount, put=__cordl_internal_set__meshDataExistsForVertCount)) int32_t  _meshDataExistsForVertCount;

/// @brief Field _normals, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__normals, put=__cordl_internal_set__normals)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _normals;

/// @brief Field _tris, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__tris, put=__cordl_internal_set__tris)) ::ArrayW<int32_t,::Array<int32_t>*>  _tris;

/// @brief Field _uv, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__uv, put=__cordl_internal_set__uv)) ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  _uv;

/// @brief Method AnimateFromCenter, addr 0x17ec4bc, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::Rect AnimateFromCenter(::UnityEngine::Rect  rect, float_t  appear) ;

/// @brief Method FlatMapUV, addr 0x17eea48, size 0x134, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> FlatMapUV(::UnityEngine::Mesh*  mesh, ::UnityEngine::Rect  rect) ;

/// @brief Method GenerateMesh, addr 0x17ee8a4, size 0x15c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> GenerateMesh(::UnityEngine::Rect  rect, float_t  depth, float_t  border) ;

/// @brief Method GetSharedMeshData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void GetSharedMeshData(::UnityEngine::Mesh*  mesh) ;

static inline ::VROSC::UI::Meshes::ProceduralMeshData* New_ctor() ;

/// @brief Method RebuildData, addr 0x17eeb7c, size 0x8, virtual false, abstract: false, final false
inline void RebuildData() ;

/// @brief Method SetMeshSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetMeshSize(::UnityEngine::Mesh*  mesh, ::UnityEngine::Rect  rect, float_t  depth, float_t  border, float_t  appear, ::VROSC::AnimatedAppear_Mode  mode) ;

/// @brief Method Verify, addr 0x17eea00, size 0x48, virtual false, abstract: false, final false
inline bool Verify(::UnityEngine::Mesh*  mesh) ;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& __cordl_internal_get__colors() const;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& __cordl_internal_get__colors() ;

constexpr int32_t const& __cordl_internal_get__meshDataExistsForVertCount() const;

constexpr int32_t& __cordl_internal_get__meshDataExistsForVertCount() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__normals() const;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__normals() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __cordl_internal_get__tris() const;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __cordl_internal_get__tris() ;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> const& __cordl_internal_get__uv() const;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>& __cordl_internal_get__uv() ;

constexpr void __cordl_internal_set__colors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value) ;

constexpr void __cordl_internal_set__meshDataExistsForVertCount(int32_t  value) ;

constexpr void __cordl_internal_set__normals(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr void __cordl_internal_set__tris(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr void __cordl_internal_set__uv(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value) ;

/// @brief Method .ctor, addr 0x17eb2c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_VertCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_VertCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProceduralMeshData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProceduralMeshData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProceduralMeshData(ProceduralMeshData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProceduralMeshData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProceduralMeshData(ProceduralMeshData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1645};

/// @brief Field _meshDataExistsForVertCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ____meshDataExistsForVertCount;

/// @brief Field _normals, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  ____normals;

/// @brief Field _colors, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  ____colors;

/// @brief Field _tris, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<int32_t,::Array<int32_t>*>  ____tris;

/// @brief Field _uv, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  ____uv;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::Meshes::ProceduralMeshData, ____meshDataExistsForVertCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralMeshData, ____normals) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralMeshData, ____colors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralMeshData, ____tris) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralMeshData, ____uv) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::Meshes::ProceduralMeshData, 0x40>, "Size mismatch!");

} // namespace end def VROSC::UI::Meshes
NEED_NO_BOX(::VROSC::UI::Meshes::ProceduralMeshData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::ProceduralMeshData*, "VROSC.UI.Meshes", "ProceduralMeshData");
