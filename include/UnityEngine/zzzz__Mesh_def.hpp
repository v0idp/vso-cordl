#pragma once
// IWYU pragma private; include "UnityEngine/Mesh.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Mesh)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Array;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct IndexFormat;
}
namespace UnityEngine::Rendering {
struct MeshUpdateFlags;
}
namespace UnityEngine::Rendering {
struct SubMeshDescriptor;
}
namespace UnityEngine::Rendering {
struct VertexAttributeDescriptor;
}
namespace UnityEngine::Rendering {
struct VertexAttributeFormat;
}
namespace UnityEngine::Rendering {
struct VertexAttribute;
}
namespace UnityEngine {
struct BoneWeight;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct MeshTopology;
}
namespace UnityEngine {
struct Mesh_MeshDataArray;
}
namespace UnityEngine {
struct Mesh_MeshData;
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
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Mesh_MeshData;
}
namespace UnityEngine {
struct Mesh_MeshDataArray;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Mesh);
MARK_VAL_T(::UnityEngine::Mesh_MeshData);
MARK_VAL_T(::UnityEngine::Mesh_MeshDataArray);
// Dependencies System.IntPtr
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Mesh/MeshData
struct CORDL_TYPE Mesh_MeshData {
public:
// Declarations
 __declspec(property(put=set_subMeshCount)) int32_t  subMeshCount;

 __declspec(property(get=get_vertexBufferCount)) int32_t  vertexBufferCount;

/// @brief Method GetIndexData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> GetIndexData() ;

/// @brief Method GetIndexDataPtr, addr 0x2f72138, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetIndexDataPtr(::System::IntPtr  self) ;

/// @brief Method GetIndexDataSize, addr 0x2f72174, size 0x3c, virtual false, abstract: false, final false
static inline uint64_t GetIndexDataSize(::System::IntPtr  self) ;

/// @brief Method GetVertexBufferCount, addr 0x2f72074, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetVertexBufferCount(::System::IntPtr  self) ;

/// @brief Method GetVertexData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> GetVertexData(int32_t  stream) ;

/// @brief Method GetVertexDataPtr, addr 0x2f720b0, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetVertexDataPtr(::System::IntPtr  self, int32_t  stream) ;

/// @brief Method GetVertexDataSize, addr 0x2f720f4, size 0x44, virtual false, abstract: false, final false
static inline uint64_t GetVertexDataSize(::System::IntPtr  self, int32_t  stream) ;

/// @brief Method SetIndexBufferParams, addr 0x2f723e4, size 0x54, virtual false, abstract: false, final false
inline void SetIndexBufferParams(int32_t  indexCount, ::UnityEngine::Rendering::IndexFormat  format) ;

/// @brief Method SetIndexBufferParamsImpl, addr 0x2f72204, size 0x54, virtual false, abstract: false, final false
static inline void SetIndexBufferParamsImpl(::System::IntPtr  self, int32_t  indexCount, ::UnityEngine::Rendering::IndexFormat  indexFormat) ;

/// @brief Method SetSubMesh, addr 0x2f7247c, size 0x74, virtual false, abstract: false, final false
inline void SetSubMesh(int32_t  index, ::UnityEngine::Rendering::SubMeshDescriptor  desc, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetSubMeshCount, addr 0x2f72258, size 0x44, virtual false, abstract: false, final false
static inline void SetSubMeshCount(::System::IntPtr  self, int32_t  count) ;

/// @brief Method SetSubMeshImpl, addr 0x2f7229c, size 0x5c, virtual false, abstract: false, final false
static inline void SetSubMeshImpl(::System::IntPtr  self, int32_t  index, ::UnityEngine::Rendering::SubMeshDescriptor  desc, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetSubMeshImpl_Injected, addr 0x2f722f8, size 0x5c, virtual false, abstract: false, final false
static inline void SetSubMeshImpl_Injected(::System::IntPtr  self, int32_t  index, ::ByRef<::UnityEngine::Rendering::SubMeshDescriptor>  desc, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetVertexBufferParams, addr 0x2f72390, size 0x54, virtual false, abstract: false, final false
inline void SetVertexBufferParams(int32_t  vertexCount, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor,::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*>  attributes) ;

/// @brief Method SetVertexBufferParamsFromArray, addr 0x2f721b0, size 0x54, virtual false, abstract: false, final false
static inline void SetVertexBufferParamsFromArray(::System::IntPtr  self, int32_t  vertexCount, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor,::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*>  attributes) ;

/// @brief Method get_vertexBufferCount, addr 0x2f72354, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_vertexBufferCount() ;

/// @brief Method set_subMeshCount, addr 0x2f72438, size 0x44, virtual false, abstract: false, final false
inline void set_subMeshCount(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Mesh_MeshData() ;

// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr Mesh_MeshData(::System::IntPtr  m_Ptr) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8491};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Mesh_MeshData, m_Ptr) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Mesh_MeshData, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.IDisposable
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Mesh/MeshDataArray
struct CORDL_TYPE Mesh_MeshDataArray {
public:
// Declarations
 __declspec(property(get=get_Item)) ::UnityEngine::Mesh_MeshData  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method ApplyToMeshAndDispose, addr 0x2f7116c, size 0x11c, virtual false, abstract: false, final false
inline void ApplyToMeshAndDispose(::UnityEngine::Mesh*  mesh, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method ApplyToMeshImpl, addr 0x2f72578, size 0x54, virtual false, abstract: false, final false
static inline void ApplyToMeshImpl(::UnityEngine::Mesh*  mesh, ::System::IntPtr  data, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method CreateNewMeshDatas, addr 0x2f72534, size 0x44, virtual false, abstract: false, final false
static inline void CreateNewMeshDatas(::cordl_internals::Ptr<::System::IntPtr>  datas, int32_t  count) ;

/// @brief Method Dispose, addr 0x2f725e0, size 0xcc, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method ReleaseMeshDatas, addr 0x2f724f0, size 0x44, virtual false, abstract: false, final false
static inline void ReleaseMeshDatas(::cordl_internals::Ptr<::System::IntPtr>  datas, int32_t  count) ;

/// @brief Method .ctor, addr 0x2f70ea4, size 0x14c, virtual false, abstract: false, final false
inline void _ctor(int32_t  meshesCount) ;

/// @brief Method get_Item, addr 0x2f725d4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Mesh_MeshData get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0x2f725cc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr Mesh_MeshDataArray() ;

// Ctor Parameters [CppParam { name: "m_Ptrs", ty: "::cordl_internals::Ptr<::System::IntPtr>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Mesh_MeshDataArray(::cordl_internals::Ptr<::System::IntPtr>  m_Ptrs, int32_t  m_Length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8492};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Ptrs, offset: 0x0, size: 0x8, def value: None
 ::cordl_internals::Ptr<::System::IntPtr>  m_Ptrs;

/// @brief Field m_Length, offset: 0x8, size: 0x4, def value: None
 int32_t  m_Length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Mesh_MeshDataArray, m_Ptrs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Mesh_MeshDataArray, m_Length) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Mesh_MeshDataArray, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Mesh
class CORDL_TYPE Mesh : public ::UnityEngine::Object {
public:
// Declarations
using MeshData = ::UnityEngine::Mesh_MeshData;

using MeshDataArray = ::UnityEngine::Mesh_MeshDataArray;

 __declspec(property(put=set_bindposes)) ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>  bindposes;

 __declspec(property(get=get_blendShapeCount)) int32_t  blendShapeCount;

 __declspec(property(put=set_boneWeights)) ::ArrayW<::UnityEngine::BoneWeight,::Array<::UnityEngine::BoneWeight>*>  boneWeights;

 __declspec(property(get=get_bounds, put=set_bounds)) ::UnityEngine::Bounds  bounds;

 __declspec(property(get=get_canAccess)) bool  canAccess;

 __declspec(property(get=get_colors, put=set_colors)) ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  colors;

 __declspec(property(get=get_colors32, put=set_colors32)) ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors32;

 __declspec(property(get=get_normals, put=set_normals)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  normals;

 __declspec(property(get=get_subMeshCount, put=set_subMeshCount)) int32_t  subMeshCount;

 __declspec(property(get=get_tangents, put=set_tangents)) ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  tangents;

 __declspec(property(get=get_triangles, put=set_triangles)) ::ArrayW<int32_t,::Array<int32_t>*>  triangles;

 __declspec(property(get=get_uv, put=set_uv)) ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  uv;

 __declspec(property(get=get_uv2, put=set_uv2)) ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  uv2;

 __declspec(property(get=get_uv3, put=set_uv3)) ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  uv3;

 __declspec(property(get=get_uv4, put=set_uv4)) ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  uv4;

 __declspec(property(get=get_vertexCount)) int32_t  vertexCount;

 __declspec(property(get=get_vertices, put=set_vertices)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  vertices;

/// @brief Method AllocateWritableMeshData, addr 0x2f70e7c, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Mesh_MeshDataArray AllocateWritableMeshData(int32_t  meshCount) ;

/// @brief Method ApplyAndDisposeWritableMeshData, addr 0x2f70ff0, size 0x17c, virtual false, abstract: false, final false
static inline void ApplyAndDisposeWritableMeshData(::UnityEngine::Mesh_MeshDataArray  data, ::UnityEngine::Mesh*  mesh, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method CheckCanAccessSubmesh, addr 0x2f71320, size 0x140, virtual false, abstract: false, final false
inline bool CheckCanAccessSubmesh(int32_t  submesh, bool  errorAboutTriangles) ;

/// @brief Method CheckCanAccessSubmeshIndices, addr 0x2f71468, size 0x8, virtual false, abstract: false, final false
inline bool CheckCanAccessSubmeshIndices(int32_t  submesh) ;

/// @brief Method CheckCanAccessSubmeshTriangles, addr 0x2f71460, size 0x8, virtual false, abstract: false, final false
inline bool CheckCanAccessSubmeshTriangles(int32_t  submesh) ;

/// @brief Method CheckIndicesArrayRange, addr 0x2f7171c, size 0x19c, virtual false, abstract: false, final false
inline void CheckIndicesArrayRange(int32_t  valuesLength, int32_t  start, int32_t  length) ;

/// @brief Method Clear, addr 0x2f71c50, size 0x40, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Clear, addr 0x2f71c0c, size 0x44, virtual false, abstract: false, final false
inline void Clear(bool  keepVertexLayout) ;

/// @brief Method ClearImpl, addr 0x2f6f898, size 0x44, virtual false, abstract: false, final false
inline void ClearImpl(bool  keepVertexLayout) ;

/// @brief Method DefaultDimensionForChannel, addr 0x2f6fad8, size 0x9c, virtual false, abstract: false, final false
static inline int32_t DefaultDimensionForChannel(::UnityEngine::Rendering::VertexAttribute  channel) ;

/// @brief Method GetAllocArrayFromChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T,::Array<T>*> GetAllocArrayFromChannel(::UnityEngine::Rendering::VertexAttribute  channel) ;

/// @brief Method GetAllocArrayFromChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T,::Array<T>*> GetAllocArrayFromChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim) ;

/// @brief Method GetAllocArrayFromChannelImpl, addr 0x2f6f3e4, size 0x5c, virtual false, abstract: false, final false
inline ::System::Array* GetAllocArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim) ;

/// @brief Method GetArrayFromChannelImpl, addr 0x2f6f440, size 0x6c, virtual false, abstract: false, final false
inline void GetArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::Array*  values) ;

/// @brief Method GetBlendShapeName, addr 0x2f6f4e8, size 0x44, virtual false, abstract: false, final false
inline ::StringW GetBlendShapeName(int32_t  shapeIndex) ;

/// @brief Method GetIndices, addr 0x2f7166c, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<int32_t,::Array<int32_t>*> GetIndices(int32_t  submesh) ;

/// @brief Method GetIndices, addr 0x2f71674, size 0xa8, virtual false, abstract: false, final false
inline ::ArrayW<int32_t,::Array<int32_t>*> GetIndices(int32_t  submesh, bool  applyBaseVertex) ;

/// @brief Method GetIndicesImpl, addr 0x2f6f098, size 0x54, virtual false, abstract: false, final false
inline ::ArrayW<int32_t,::Array<int32_t>*> GetIndicesImpl(int32_t  submesh, bool  applyBaseVertex) ;

/// @brief Method GetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GetListForChannel(::System::Collections::Generic::List_1<T>*  buffer, int32_t  capacity, ::UnityEngine::Rendering::VertexAttribute  channel, int32_t  dim) ;

/// @brief Method GetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GetListForChannel(::System::Collections::Generic::List_1<T>*  buffer, int32_t  capacity, ::UnityEngine::Rendering::VertexAttribute  channel, int32_t  dim, ::UnityEngine::Rendering::VertexAttributeFormat  channelType) ;

/// @brief Method GetTrianglesImpl, addr 0x2f6f044, size 0x54, virtual false, abstract: false, final false
inline ::ArrayW<int32_t,::Array<int32_t>*> GetTrianglesImpl(int32_t  submesh, bool  applyBaseVertex) ;

/// @brief Method GetUVChannel, addr 0x2f6fa64, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::VertexAttribute GetUVChannel(int32_t  uvIndex) ;

/// @brief Method GetUVs, addr 0x2f70e18, size 0x64, virtual false, abstract: false, final false
inline void GetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uvs) ;

/// @brief Method GetUVsImpl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GetUVsImpl(int32_t  uvIndex, ::System::Collections::Generic::List_1<T>*  uvs, int32_t  dim) ;

/// @brief Method HasVertexAttribute, addr 0x2f6f268, size 0x44, virtual false, abstract: false, final false
inline bool HasVertexAttribute(::UnityEngine::Rendering::VertexAttribute  attr) ;

/// @brief Method InternalSetIndexBufferData, addr 0x2f6efc0, size 0x84, virtual false, abstract: false, final false
inline void InternalSetIndexBufferData(::System::IntPtr  data, int32_t  dataStart, int32_t  meshBufferStart, int32_t  count, int32_t  elemSize, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method Internal_Create, addr 0x2f6eeb0, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_Create(::UnityEngine::Mesh*  mono) ;

/// @brief Method MarkDynamic, addr 0x2f71f84, size 0x74, virtual false, abstract: false, final false
inline void MarkDynamic() ;

/// @brief Method MarkDynamicImpl, addr 0x2f6f9a8, size 0x3c, virtual false, abstract: false, final false
inline void MarkDynamicImpl() ;

/// @brief Method MarkModified, addr 0x2f6f9e4, size 0x3c, virtual false, abstract: false, final false
inline void MarkModified() ;

static inline ::UnityEngine::Mesh* New_ctor() ;

/// @brief Method PrintErrorCantAccessChannel, addr 0x2f6f224, size 0x44, virtual false, abstract: false, final false
inline void PrintErrorCantAccessChannel(::UnityEngine::Rendering::VertexAttribute  ch) ;

/// @brief Method PrintErrorCantAccessIndices, addr 0x2f71288, size 0x98, virtual false, abstract: false, final false
inline void PrintErrorCantAccessIndices() ;

/// @brief Method RecalculateBounds, addr 0x2f71c90, size 0x8, virtual false, abstract: false, final false
inline void RecalculateBounds() ;

/// @brief Method RecalculateBounds, addr 0x2f71c98, size 0xf4, virtual false, abstract: false, final false
inline void RecalculateBounds(::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method RecalculateBoundsImpl, addr 0x2f6f8dc, size 0x44, virtual false, abstract: false, final false
inline void RecalculateBoundsImpl(::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method RecalculateNormals, addr 0x2f71d8c, size 0x8, virtual false, abstract: false, final false
inline void RecalculateNormals() ;

/// @brief Method RecalculateNormals, addr 0x2f71d94, size 0xf4, virtual false, abstract: false, final false
inline void RecalculateNormals(::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method RecalculateNormalsImpl, addr 0x2f6f920, size 0x44, virtual false, abstract: false, final false
inline void RecalculateNormalsImpl(::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method RecalculateTangents, addr 0x2f71e88, size 0x8, virtual false, abstract: false, final false
inline void RecalculateTangents() ;

/// @brief Method RecalculateTangents, addr 0x2f71e90, size 0xf4, virtual false, abstract: false, final false
inline void RecalculateTangents(::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method RecalculateTangentsImpl, addr 0x2f6f964, size 0x44, virtual false, abstract: false, final false
inline void RecalculateTangentsImpl(::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetArrayForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetArrayForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::ArrayW<T,::Array<T>*>  values, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetArrayForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetArrayForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::ArrayW<T,::Array<T>*>  values, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetArrayForChannelImpl, addr 0x2f6f2ac, size 0x9c, virtual false, abstract: false, final false
inline void SetArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::Array*  values, int32_t  arraySize, int32_t  valuesStart, int32_t  valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetBoneWeightsImpl, addr 0x2f6f52c, size 0x44, virtual false, abstract: false, final false
inline void SetBoneWeightsImpl(::ArrayW<::UnityEngine::BoneWeight,::Array<::UnityEngine::BoneWeight>*>  weights) ;

/// @brief Method SetColors, addr 0x2f70980, size 0x6c, virtual false, abstract: false, final false
inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>*  inColors) ;

/// @brief Method SetColors, addr 0x2f709ec, size 0x8, virtual false, abstract: false, final false
inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>*  inColors, int32_t  start, int32_t  length) ;

/// @brief Method SetColors, addr 0x2f709f4, size 0x94, virtual false, abstract: false, final false
inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>*  inColors, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetIndexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetIndexBufferData(::Unity::Collections::NativeArray_1<T>  data, int32_t  dataStart, int32_t  meshBufferStart, int32_t  count, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetIndexBufferParams, addr 0x2f6ef6c, size 0x54, virtual false, abstract: false, final false
inline void SetIndexBufferParams(int32_t  indexCount, ::UnityEngine::Rendering::IndexFormat  format) ;

/// @brief Method SetIndices, addr 0x2f71af4, size 0xd4, virtual false, abstract: false, final false
inline void SetIndices(::ArrayW<int32_t,::Array<int32_t>*>  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0x2f71a1c, size 0x64, virtual false, abstract: false, final false
inline void SetIndices(::ArrayW<int32_t,::Array<int32_t>*>  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh) ;

/// @brief Method SetIndices, addr 0x2f71a80, size 0x74, virtual false, abstract: false, final false
inline void SetIndices(::ArrayW<int32_t,::Array<int32_t>*>  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetIndices(::Unity::Collections::NativeArray_1<T>  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetIndices(::Unity::Collections::NativeArray_1<T>  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndicesImpl, addr 0x2f6f0ec, size 0x9c, virtual false, abstract: false, final false
inline void SetIndicesImpl(int32_t  submesh, ::UnityEngine::MeshTopology  topology, ::UnityEngine::Rendering::IndexFormat  indicesFormat, ::System::Array*  indices, int32_t  arrayStart, int32_t  arraySize, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndicesNativeArrayImpl, addr 0x2f6f188, size 0x9c, virtual false, abstract: false, final false
inline void SetIndicesNativeArrayImpl(int32_t  submesh, ::UnityEngine::MeshTopology  topology, ::UnityEngine::Rendering::IndexFormat  indicesFormat, ::System::IntPtr  indices, int32_t  arrayStart, int32_t  arraySize, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetListForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::Collections::Generic::List_1<T>*  values, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetListForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::System::Collections::Generic::List_1<T>*  values, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetNativeArrayForChannelImpl, addr 0x2f6f348, size 0x9c, virtual false, abstract: false, final false
inline void SetNativeArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::IntPtr  values, int32_t  arraySize, int32_t  valuesStart, int32_t  valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetNormals, addr 0x2f707a0, size 0x6c, virtual false, abstract: false, final false
inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inNormals) ;

/// @brief Method SetNormals, addr 0x2f7080c, size 0x8, virtual false, abstract: false, final false
inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inNormals, int32_t  start, int32_t  length) ;

/// @brief Method SetNormals, addr 0x2f70814, size 0x7c, virtual false, abstract: false, final false
inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inNormals, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetNormals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetNormals(::Unity::Collections::NativeArray_1<T>  inNormals) ;

/// @brief Method SetNormals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetNormals(::Unity::Collections::NativeArray_1<T>  inNormals, int32_t  start, int32_t  length) ;

/// @brief Method SetNormals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetNormals(::Unity::Collections::NativeArray_1<T>  inNormals, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetSizedArrayForChannel, addr 0x2f6fb74, size 0x294, virtual false, abstract: false, final false
inline void SetSizedArrayForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::Array*  values, int32_t  valuesArrayLength, int32_t  valuesStart, int32_t  valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetSizedNativeArrayForChannel, addr 0x2f6fe08, size 0x28c, virtual false, abstract: false, final false
inline void SetSizedNativeArrayForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::IntPtr  values, int32_t  valuesArrayLength, int32_t  valuesStart, int32_t  valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetSubMesh, addr 0x2f6f6ac, size 0x5c, virtual false, abstract: false, final false
inline void SetSubMesh(int32_t  index, ::UnityEngine::Rendering::SubMeshDescriptor  desc, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetSubMesh_Injected, addr 0x2f6f708, size 0x5c, virtual false, abstract: false, final false
inline void SetSubMesh_Injected(int32_t  index, ::ByRef<::UnityEngine::Rendering::SubMeshDescriptor>  desc, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetTangents, addr 0x2f70890, size 0x6c, virtual false, abstract: false, final false
inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  inTangents) ;

/// @brief Method SetTangents, addr 0x2f708fc, size 0x8, virtual false, abstract: false, final false
inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  inTangents, int32_t  start, int32_t  length) ;

/// @brief Method SetTangents, addr 0x2f70904, size 0x7c, virtual false, abstract: false, final false
inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  inTangents, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetTriangles, addr 0x2f718b8, size 0xc, virtual false, abstract: false, final false
inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>*  triangles, int32_t  submesh) ;

/// @brief Method SetTriangles, addr 0x2f718c4, size 0x88, virtual false, abstract: false, final false
inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>*  triangles, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetTriangles, addr 0x2f7194c, size 0xd0, virtual false, abstract: false, final false
inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>*  triangles, int32_t  trianglesStart, int32_t  trianglesLength, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetTrianglesImpl, addr 0x2f715cc, size 0xa0, virtual false, abstract: false, final false
inline void SetTrianglesImpl(int32_t  submesh, ::UnityEngine::Rendering::IndexFormat  indicesFormat, ::System::Array*  triangles, int32_t  trianglesArrayLength, int32_t  start, int32_t  length, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetUVs, addr 0x2f70da0, size 0x48, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  uvs) ;

/// @brief Method SetUVs, addr 0x2f70de8, size 0x18, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  uvs, int32_t  start, int32_t  length) ;

/// @brief Method SetUVs, addr 0x2f70e00, size 0x18, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  uvs, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetUVs, addr 0x2f70a88, size 0x74, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uvs) ;

/// @brief Method SetUVs, addr 0x2f70afc, size 0x8, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uvs, int32_t  start, int32_t  length) ;

/// @brief Method SetUVs, addr 0x2f70b80, size 0x8c, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uvs, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetUVs, addr 0x2f70b04, size 0x74, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uvs) ;

/// @brief Method SetUVs, addr 0x2f70b78, size 0x8, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uvs, int32_t  start, int32_t  length) ;

/// @brief Method SetUVs, addr 0x2f70c0c, size 0x8c, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uvs, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetUVs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetUVs(int32_t  channel, ::Unity::Collections::NativeArray_1<T>  uvs) ;

/// @brief Method SetUVs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetUVs(int32_t  channel, ::Unity::Collections::NativeArray_1<T>  uvs, int32_t  start, int32_t  length) ;

/// @brief Method SetUVs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetUVs(int32_t  channel, ::Unity::Collections::NativeArray_1<T>  uvs, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetUvsImpl, addr 0x2f70c98, size 0x108, virtual false, abstract: false, final false
inline void SetUvsImpl(int32_t  uvIndex, int32_t  dim, ::System::Array*  uvs, int32_t  arrayStart, int32_t  arraySize, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetUvsImpl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetUvsImpl(int32_t  uvIndex, int32_t  dim, ::System::Collections::Generic::List_1<T>*  uvs, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetVertices, addr 0x2f706b0, size 0x6c, virtual false, abstract: false, final false
inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inVertices) ;

/// @brief Method SetVertices, addr 0x2f7071c, size 0x8, virtual false, abstract: false, final false
inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inVertices, int32_t  start, int32_t  length) ;

/// @brief Method SetVertices, addr 0x2f70724, size 0x7c, virtual false, abstract: false, final false
inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inVertices, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetVertices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetVertices(::Unity::Collections::NativeArray_1<T>  inVertices) ;

/// @brief Method SetVertices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetVertices(::Unity::Collections::NativeArray_1<T>  inVertices, int32_t  start, int32_t  length) ;

/// @brief Method SetVertices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetVertices(::Unity::Collections::NativeArray_1<T>  inVertices, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method UploadMeshData, addr 0x2f71ff8, size 0x7c, virtual false, abstract: false, final false
inline void UploadMeshData(bool  markNoLongerReadable) ;

/// @brief Method UploadMeshDataImpl, addr 0x2f6fa20, size 0x44, virtual false, abstract: false, final false
inline void UploadMeshDataImpl(bool  markNoLongerReadable) ;

/// @brief Method .ctor, addr 0x2f6eeec, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_blendShapeCount, addr 0x2f6f4ac, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_blendShapeCount() ;

/// @brief Method get_bounds, addr 0x2f6f764, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_bounds() ;

/// @brief Method get_bounds_Injected, addr 0x2f6f7cc, size 0x44, virtual false, abstract: false, final false
inline void get_bounds_Injected(::ByRef<::UnityEngine::Bounds>  ret) ;

/// @brief Method get_canAccess, addr 0x2f6f5b4, size 0x3c, virtual false, abstract: false, final false
inline bool get_canAccess() ;

/// @brief Method get_colors, addr 0x2f70548, size 0x4c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> get_colors() ;

/// @brief Method get_colors32, addr 0x2f705f4, size 0x54, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> get_colors32() ;

/// @brief Method get_normals, addr 0x2f70140, size 0x4c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> get_normals() ;

/// @brief Method get_subMeshCount, addr 0x2f6f62c, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_subMeshCount() ;

/// @brief Method get_tangents, addr 0x2f701ec, size 0x4c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> get_tangents() ;

/// @brief Method get_triangles, addr 0x2f71470, size 0xb4, virtual false, abstract: false, final false
inline ::ArrayW<int32_t,::Array<int32_t>*> get_triangles() ;

/// @brief Method get_uv, addr 0x2f70298, size 0x4c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> get_uv() ;

/// @brief Method get_uv2, addr 0x2f70344, size 0x4c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> get_uv2() ;

/// @brief Method get_uv3, addr 0x2f703f0, size 0x4c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> get_uv3() ;

/// @brief Method get_uv4, addr 0x2f7049c, size 0x4c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> get_uv4() ;

/// @brief Method get_vertexCount, addr 0x2f6f5f0, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_vertexCount() ;

/// @brief Method get_vertices, addr 0x2f70094, size 0x4c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> get_vertices() ;

/// @brief Method set_bindposes, addr 0x2f6f570, size 0x44, virtual false, abstract: false, final false
inline void set_bindposes(::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>  value) ;

/// @brief Method set_boneWeights, addr 0x2f71bc8, size 0x44, virtual false, abstract: false, final false
inline void set_boneWeights(::ArrayW<::UnityEngine::BoneWeight,::Array<::UnityEngine::BoneWeight>*>  value) ;

/// @brief Method set_bounds, addr 0x2f6f810, size 0x44, virtual false, abstract: false, final false
inline void set_bounds(::UnityEngine::Bounds  value) ;

/// @brief Method set_bounds_Injected, addr 0x2f6f854, size 0x44, virtual false, abstract: false, final false
inline void set_bounds_Injected(::ByRef<::UnityEngine::Bounds>  value) ;

/// @brief Method set_colors, addr 0x2f70594, size 0x60, virtual false, abstract: false, final false
inline void set_colors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value) ;

/// @brief Method set_colors32, addr 0x2f70648, size 0x68, virtual false, abstract: false, final false
inline void set_colors32(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  value) ;

/// @brief Method set_normals, addr 0x2f7018c, size 0x60, virtual false, abstract: false, final false
inline void set_normals(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

/// @brief Method set_subMeshCount, addr 0x2f6f668, size 0x44, virtual false, abstract: false, final false
inline void set_subMeshCount(int32_t  value) ;

/// @brief Method set_tangents, addr 0x2f70238, size 0x60, virtual false, abstract: false, final false
inline void set_tangents(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  value) ;

/// @brief Method set_triangles, addr 0x2f71524, size 0xa8, virtual false, abstract: false, final false
inline void set_triangles(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

/// @brief Method set_uv, addr 0x2f702e4, size 0x60, virtual false, abstract: false, final false
inline void set_uv(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value) ;

/// @brief Method set_uv2, addr 0x2f70390, size 0x60, virtual false, abstract: false, final false
inline void set_uv2(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value) ;

/// @brief Method set_uv3, addr 0x2f7043c, size 0x60, virtual false, abstract: false, final false
inline void set_uv3(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value) ;

/// @brief Method set_uv4, addr 0x2f704e8, size 0x60, virtual false, abstract: false, final false
inline void set_uv4(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value) ;

/// @brief Method set_vertices, addr 0x2f700e0, size 0x60, virtual false, abstract: false, final false
inline void set_vertices(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Mesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Mesh", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Mesh(Mesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Mesh", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Mesh(Mesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8493};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Mesh, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Mesh);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Mesh*, "UnityEngine", "Mesh");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Mesh_MeshData, "UnityEngine", "Mesh/MeshData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Mesh_MeshDataArray, "UnityEngine", "Mesh/MeshDataArray");
