#pragma once
// IWYU pragma private; include "VROSC/UI/Meshes/ColorPickerMesh.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorPickerMesh)
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
struct Rect;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace VROSC::UI::Meshes {
class ColorPickerMesh;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::Meshes::ColorPickerMesh);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC::UI::Meshes {
// Is value type: false
// CS Name: VROSC.UI.Meshes.ColorPickerMesh
class CORDL_TYPE ColorPickerMesh : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _colors, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__colors, put=__cordl_internal_set__colors)) ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  _colors;

/// @brief Field _mesh, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__mesh, put=__cordl_internal_set__mesh)) ::UnityW<::UnityEngine::Mesh>  _mesh;

/// @brief Field _meshFilter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshFilter, put=__cordl_internal_set__meshFilter)) ::UnityW<::UnityEngine::MeshFilter>  _meshFilter;

/// @brief Field _normals, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__normals, put=__cordl_internal_set__normals)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _normals;

/// @brief Field _rectTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rectTransform, put=__cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform>  _rectTransform;

/// @brief Field _tris, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__tris, put=__cordl_internal_set__tris)) ::ArrayW<int32_t,::Array<int32_t>*>  _tris;

/// @brief Field _vertices, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__vertices, put=__cordl_internal_set__vertices)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _vertices;

/// @brief Method Create, addr 0x17e9a7c, size 0x12c, virtual false, abstract: false, final false
inline void Create(bool  forceGeneration) ;

/// @brief Method Generate, addr 0x17e9ba8, size 0x1d8, virtual false, abstract: false, final false
inline void Generate() ;

/// @brief Method GetRequiredCompontents, addr 0x17e9994, size 0xe8, virtual false, abstract: false, final false
inline void GetRequiredCompontents() ;

static inline ::VROSC::UI::Meshes::ColorPickerMesh* New_ctor() ;

/// @brief Method SetAsHueIntensity, addr 0x17e9e50, size 0xb8, virtual false, abstract: false, final false
inline void SetAsHueIntensity() ;

/// @brief Method SetAsHueSaturation, addr 0x17e9f08, size 0xb8, virtual false, abstract: false, final false
inline void SetAsHueSaturation() ;

/// @brief Method SetAsMiniHue, addr 0x17e9fc0, size 0xa8, virtual false, abstract: false, final false
inline void SetAsMiniHue() ;

/// @brief Method SetAsMiniSaturation, addr 0x17ea068, size 0xe4, virtual false, abstract: false, final false
inline void SetAsMiniSaturation(float_t  hue, float_t  value) ;

/// @brief Method SetAsMiniValue, addr 0x17ea14c, size 0xc8, virtual false, abstract: false, final false
inline void SetAsMiniValue(float_t  hue, float_t  saturation) ;

/// @brief Method SetMeshSize, addr 0x17e9d80, size 0xd0, virtual false, abstract: false, final false
inline void SetMeshSize(::UnityEngine::Mesh*  mesh, ::UnityEngine::Rect  rect) ;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& __cordl_internal_get__colors() const;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& __cordl_internal_get__colors() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__meshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__meshFilter() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__normals() const;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__normals() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __cordl_internal_get__tris() const;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __cordl_internal_get__tris() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__vertices() const;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__vertices() ;

constexpr void __cordl_internal_set__colors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value) ;

constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set__normals(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__tris(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr void __cordl_internal_set__vertices(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

/// @brief Method .ctor, addr 0x17ea214, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorPickerMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorPickerMesh", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorPickerMesh(ColorPickerMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorPickerMesh", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorPickerMesh(ColorPickerMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1634};

/// @brief Field _rectTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____rectTransform;

/// @brief Field _meshFilter, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ____meshFilter;

/// @brief Field _vertices, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  ____vertices;

/// @brief Field _normals, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  ____normals;

/// @brief Field _colors, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  ____colors;

/// @brief Field _tris, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<int32_t,::Array<int32_t>*>  ____tris;

/// @brief Field _mesh, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____mesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::Meshes::ColorPickerMesh, ____rectTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ColorPickerMesh, ____meshFilter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ColorPickerMesh, ____vertices) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ColorPickerMesh, ____normals) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ColorPickerMesh, ____colors) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ColorPickerMesh, ____tris) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ColorPickerMesh, ____mesh) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::Meshes::ColorPickerMesh, 0x58>, "Size mismatch!");

} // namespace end def VROSC::UI::Meshes
NEED_NO_BOX(::VROSC::UI::Meshes::ColorPickerMesh);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::ColorPickerMesh*, "VROSC.UI.Meshes", "ColorPickerMesh");
