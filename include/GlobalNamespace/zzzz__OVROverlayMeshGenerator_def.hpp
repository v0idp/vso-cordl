#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlayMeshGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVROverlayMeshGenerator)
namespace GlobalNamespace {
struct OVROverlayMeshGenerator_CubeFace;
}
namespace GlobalNamespace {
struct OVROverlay_OverlayShape;
}
namespace GlobalNamespace {
class OVROverlay;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVROverlayMeshGenerator_CubeFace;
}
namespace GlobalNamespace {
class OVROverlayMeshGenerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVROverlayMeshGenerator_CubeFace);
MARK_REF_PTR_T(::GlobalNamespace::OVROverlayMeshGenerator);
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVROverlayMeshGenerator/CubeFace
struct CORDL_TYPE OVROverlayMeshGenerator_CubeFace {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVROverlayMeshGenerator_CubeFace_Unwrapped
enum struct __OVROverlayMeshGenerator_CubeFace_Unwrapped : int32_t {
__E_Bottom = static_cast<int32_t>(0x0),
__E_Front = static_cast<int32_t>(0x1),
__E_Back = static_cast<int32_t>(0x2),
__E_Right = static_cast<int32_t>(0x3),
__E_Left = static_cast<int32_t>(0x4),
__E_Top = static_cast<int32_t>(0x5),
__E_COUNT = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVROverlayMeshGenerator_CubeFace_Unwrapped () const noexcept {
return static_cast<__OVROverlayMeshGenerator_CubeFace_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVROverlayMeshGenerator_CubeFace() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OVROverlayMeshGenerator_CubeFace(int32_t  value__) noexcept;

/// @brief Field Back value: I32(2)
static ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace const Back;

/// @brief Field Bottom value: I32(0)
static ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace const Bottom;

/// @brief Field COUNT value: I32(6)
static ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace const COUNT;

/// @brief Field Front value: I32(1)
static ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace const Front;

/// @brief Field Left value: I32(4)
static ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace const Left;

/// @brief Field Right value: I32(3)
static ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace const Right;

/// @brief Field Top value: I32(5)
static ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace const Top;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6186};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator_CubeFace, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVROverlayMeshGenerator_CubeFace, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVROverlay::OverlayShape, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Rect, UnityEngine.Rendering.TextureDimension, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVROverlayMeshGenerator
class CORDL_TYPE OVROverlayMeshGenerator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CubeFace = ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace;

/// @brief Field _CameraRoot, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__CameraRoot, put=__cordl_internal_set__CameraRoot)) ::UnityW<::UnityEngine::Transform>  _CameraRoot;

/// @brief Field _CubeUV, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__CubeUV, put=__cordl_internal_set__CubeUV)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  _CubeUV;

/// @brief Field _LastDestRectLeft, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__LastDestRectLeft, put=__cordl_internal_set__LastDestRectLeft)) ::UnityEngine::Rect  _LastDestRectLeft;

/// @brief Field _LastPosition, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get__LastPosition, put=__cordl_internal_set__LastPosition)) ::UnityEngine::Vector3  _LastPosition;

/// @brief Field _LastRotation, offset 0x64, size 0x10 
 __declspec(property(get=__cordl_internal_get__LastRotation, put=__cordl_internal_set__LastRotation)) ::UnityEngine::Quaternion  _LastRotation;

/// @brief Field _LastScale, offset 0x74, size 0xc 
 __declspec(property(get=__cordl_internal_get__LastScale, put=__cordl_internal_set__LastScale)) ::UnityEngine::Vector3  _LastScale;

/// @brief Field _LastShape, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastShape, put=__cordl_internal_set__LastShape)) ::GlobalNamespace::OVROverlay_OverlayShape  _LastShape;

/// @brief Field _LastSrcRectLeft, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get__LastSrcRectLeft, put=__cordl_internal_set__LastSrcRectLeft)) ::UnityEngine::Rect  _LastSrcRectLeft;

/// @brief Field _LastTextureDimension, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastTextureDimension, put=__cordl_internal_set__LastTextureDimension)) ::UnityEngine::Rendering::TextureDimension  _LastTextureDimension;

/// @brief Field _Mesh, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__Mesh, put=__cordl_internal_set__Mesh)) ::UnityW<::UnityEngine::Mesh>  _Mesh;

/// @brief Field _MeshCollider, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__MeshCollider, put=__cordl_internal_set__MeshCollider)) ::UnityW<::UnityEngine::MeshCollider>  _MeshCollider;

/// @brief Field _MeshFilter, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__MeshFilter, put=__cordl_internal_set__MeshFilter)) ::UnityW<::UnityEngine::MeshFilter>  _MeshFilter;

/// @brief Field _MeshRenderer, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__MeshRenderer, put=__cordl_internal_set__MeshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  _MeshRenderer;

/// @brief Field _Overlay, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Overlay, put=__cordl_internal_set__Overlay)) ::UnityW<::GlobalNamespace::OVROverlay>  _Overlay;

/// @brief Field _PreviewMaterial, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__PreviewMaterial, put=__cordl_internal_set__PreviewMaterial)) ::UnityW<::UnityEngine::Material>  _PreviewMaterial;

/// @brief Field _Transform, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Transform, put=__cordl_internal_set__Transform)) ::UnityW<::UnityEngine::Transform>  _Transform;

/// @brief Field _Tris, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Tris, put=__cordl_internal_set__Tris)) ::System::Collections::Generic::List_1<int32_t>*  _Tris;

/// @brief Field _UV, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__UV, put=__cordl_internal_set__UV)) ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  _UV;

/// @brief Field _Verts, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Verts, put=__cordl_internal_set__Verts)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  _Verts;

/// @brief Method BuildCube, addr 0x28d2134, size 0x800, virtual false, abstract: false, final false
static inline void BuildCube(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uv, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  cubeUV, ::System::Collections::Generic::List_1<int32_t>*  triangles, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale, float_t  worldScale, int32_t  subQuads, float_t  expandCoefficient) ;

/// @brief Method BuildHemicylinder, addr 0x28d2f6c, size 0x5b0, virtual false, abstract: false, final false
static inline void BuildHemicylinder(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uv, ::System::Collections::Generic::List_1<int32_t>*  triangles, ::UnityEngine::Vector3  scale, ::UnityEngine::Rect  rect, int32_t  longitudes) ;

/// @brief Method BuildQuad, addr 0x28d2934, size 0x638, virtual false, abstract: false, final false
static inline void BuildQuad(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uv, ::System::Collections::Generic::List_1<int32_t>*  triangles, ::UnityEngine::Rect  rect) ;

/// @brief Method BuildSphere, addr 0x28d1a70, size 0x6c4, virtual false, abstract: false, final false
static inline void BuildSphere(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uv, ::System::Collections::Generic::List_1<int32_t>*  triangles, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale, ::UnityEngine::Rect  rect, float_t  worldScale, int32_t  latitudes, int32_t  longitudes, float_t  expandCoefficient) ;

/// @brief Method GenerateMesh, addr 0x28d1974, size 0xfc, virtual false, abstract: false, final false
static inline void GenerateMesh(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uvs, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  cubeUVs, ::System::Collections::Generic::List_1<int32_t>*  tris, ::GlobalNamespace::OVROverlay_OverlayShape  shape, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale, ::UnityEngine::Rect  rect) ;

/// @brief Method GetCubeUV, addr 0x28d35e8, size 0x104, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 GetCubeUV(::GlobalNamespace::OVROverlayMeshGenerator_CubeFace  face, float_t  sideU, float_t  sideV, float_t  expandScale, float_t  expandOffset) ;

/// @brief Method GetCubeVert, addr 0x28d36ec, size 0xe4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetCubeVert(::GlobalNamespace::OVROverlayMeshGenerator_CubeFace  face, float_t  sideU, float_t  sideV) ;

/// @brief Method GetSphereUV, addr 0x28d3554, size 0x38, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 GetSphereUV(float_t  theta, float_t  phi, float_t  expandScale) ;

/// @brief Method GetSphereVert, addr 0x28d358c, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetSphereVert(float_t  theta, float_t  phi) ;

/// @brief Method Initialize, addr 0x28d0d44, size 0x170, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method InverseTransformVert, addr 0x28d351c, size 0x38, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 InverseTransformVert(::ByRef<::UnityEngine::Vector3>  vert, ::ByRef<::UnityEngine::Vector3>  position, ::ByRef<::UnityEngine::Vector3>  scale, float_t  worldScale) ;

static inline ::GlobalNamespace::OVROverlayMeshGenerator* New_ctor() ;

/// @brief Method OnDestroy, addr 0x28d0eb4, size 0x158, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x28d0d40, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetOverlay, addr 0x28cfb78, size 0x8, virtual false, abstract: false, final false
inline void SetOverlay(::GlobalNamespace::OVROverlay*  overlay) ;

/// @brief Method TryUpdateMesh, addr 0x28d100c, size 0x7b4, virtual false, abstract: false, final false
inline void TryUpdateMesh() ;

/// @brief Method UpdateMesh, addr 0x28d17c0, size 0x1b4, virtual false, abstract: false, final false
inline void UpdateMesh(::GlobalNamespace::OVROverlay_OverlayShape  shape, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale, ::UnityEngine::Rect  rect, bool  cubemap) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__CameraRoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__CameraRoot() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& __cordl_internal_get__CubeUV() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __cordl_internal_get__CubeUV() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get__LastDestRectLeft() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get__LastDestRectLeft() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__LastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__LastPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__LastRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__LastRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__LastScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__LastScale() ;

constexpr ::GlobalNamespace::OVROverlay_OverlayShape const& __cordl_internal_get__LastShape() const;

constexpr ::GlobalNamespace::OVROverlay_OverlayShape& __cordl_internal_get__LastShape() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get__LastSrcRectLeft() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get__LastSrcRectLeft() ;

constexpr ::UnityEngine::Rendering::TextureDimension const& __cordl_internal_get__LastTextureDimension() const;

constexpr ::UnityEngine::Rendering::TextureDimension& __cordl_internal_get__LastTextureDimension() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__Mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__Mesh() ;

constexpr ::UnityW<::UnityEngine::MeshCollider> const& __cordl_internal_get__MeshCollider() const;

constexpr ::UnityW<::UnityEngine::MeshCollider>& __cordl_internal_get__MeshCollider() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__MeshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__MeshFilter() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__MeshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__MeshRenderer() ;

constexpr ::UnityW<::GlobalNamespace::OVROverlay> const& __cordl_internal_get__Overlay() const;

constexpr ::UnityW<::GlobalNamespace::OVROverlay>& __cordl_internal_get__Overlay() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__PreviewMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__PreviewMaterial() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__Transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__Transform() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__Tris() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__Tris() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* const& __cordl_internal_get__UV() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& __cordl_internal_get__UV() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get__Verts() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get__Verts() ;

constexpr void __cordl_internal_set__CameraRoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__CubeUV(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value) ;

constexpr void __cordl_internal_set__LastDestRectLeft(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set__LastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__LastRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__LastScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__LastShape(::GlobalNamespace::OVROverlay_OverlayShape  value) ;

constexpr void __cordl_internal_set__LastSrcRectLeft(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set__LastTextureDimension(::UnityEngine::Rendering::TextureDimension  value) ;

constexpr void __cordl_internal_set__Mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__MeshCollider(::UnityW<::UnityEngine::MeshCollider>  value) ;

constexpr void __cordl_internal_set__MeshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set__MeshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__Overlay(::UnityW<::GlobalNamespace::OVROverlay>  value) ;

constexpr void __cordl_internal_set__PreviewMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__Transform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__Tris(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__UV(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set__Verts(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

/// @brief Method .ctor, addr 0x28d37d0, size 0x15c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVROverlayMeshGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVROverlayMeshGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVROverlayMeshGenerator(OVROverlayMeshGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVROverlayMeshGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVROverlayMeshGenerator(OVROverlayMeshGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6187};

/// @brief Field _Tris, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ____Tris;

/// @brief Field _UV, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  ____UV;

/// @brief Field _CubeUV, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  ____CubeUV;

/// @brief Field _Verts, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ____Verts;

/// @brief Field _CameraRoot, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____CameraRoot;

/// @brief Field _LastDestRectLeft, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Rect  ____LastDestRectLeft;

/// @brief Field _LastPosition, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____LastPosition;

/// @brief Field _LastRotation, offset: 0x64, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____LastRotation;

/// @brief Field _LastScale, offset: 0x74, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____LastScale;

/// @brief Field _LastTextureDimension, offset: 0x80, size: 0x4, def value: None
 ::UnityEngine::Rendering::TextureDimension  ____LastTextureDimension;

/// @brief Field _LastShape, offset: 0x84, size: 0x4, def value: None
 ::GlobalNamespace::OVROverlay_OverlayShape  ____LastShape;

/// @brief Field _LastSrcRectLeft, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Rect  ____LastSrcRectLeft;

/// @brief Field _Mesh, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____Mesh;

/// @brief Field _MeshCollider, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshCollider>  ____MeshCollider;

/// @brief Field _MeshFilter, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ____MeshFilter;

/// @brief Field _MeshRenderer, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____MeshRenderer;

/// @brief Field _Overlay, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVROverlay>  ____Overlay;

/// @brief Field _Transform, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____Transform;

/// @brief Field _PreviewMaterial, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____PreviewMaterial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____Tris) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____UV) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____CubeUV) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____Verts) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____CameraRoot) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____LastDestRectLeft) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____LastPosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____LastRotation) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____LastScale) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____LastTextureDimension) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____LastShape) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____LastSrcRectLeft) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____Mesh) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____MeshCollider) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____MeshFilter) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____MeshRenderer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____Overlay) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____Transform) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____PreviewMaterial) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVROverlayMeshGenerator, 0xd0>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVROverlayMeshGenerator_CubeFace, "", "OVROverlayMeshGenerator/CubeFace");
NEED_NO_BOX(::GlobalNamespace::OVROverlayMeshGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVROverlayMeshGenerator*, "", "OVROverlayMeshGenerator");
