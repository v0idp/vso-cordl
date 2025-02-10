#pragma once
// IWYU pragma private; include "VROSC/UI/Meshes/RescalableMesh.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RescalableMesh)
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC::UI::Meshes {
class RescalableMeshData;
}
// Forward declare root types
namespace VROSC::UI::Meshes {
class RescalableMesh;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::Meshes::RescalableMesh);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC::UI::Meshes {
// Is value type: false
// CS Name: VROSC.UI.Meshes.RescalableMesh
class CORDL_TYPE RescalableMesh : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Data)) ::UnityW<::VROSC::UI::Meshes::RescalableMeshData>  Data;

 __declspec(property(get=get_Height)) float_t  Height;

 __declspec(property(get=get_Width)) float_t  Width;

/// @brief Field _data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::VROSC::UI::Meshes::RescalableMeshData>  _data;

/// @brief Field _height, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__height, put=__cordl_internal_set__height)) float_t  _height;

/// @brief Field _mesh, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__mesh, put=__cordl_internal_set__mesh)) ::UnityW<::UnityEngine::Mesh>  _mesh;

/// @brief Field _meshFilter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshFilter, put=__cordl_internal_set__meshFilter)) ::UnityW<::UnityEngine::MeshFilter>  _meshFilter;

/// @brief Field _positions, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__positions, put=__cordl_internal_set__positions)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _positions;

/// @brief Field _width, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__width, put=__cordl_internal_set__width)) float_t  _width;

/// @brief Method Awake, addr 0x17e90fc, size 0xdc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetValuesFromData, addr 0x17e91d8, size 0x24, virtual false, abstract: false, final false
inline void GetValuesFromData() ;

static inline ::VROSC::UI::Meshes::RescalableMesh* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x17e9324, size 0x40, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method Update, addr 0x17e91fc, size 0x48, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::VROSC::UI::Meshes::RescalableMeshData> const& __cordl_internal_get__data() const;

constexpr ::UnityW<::VROSC::UI::Meshes::RescalableMeshData>& __cordl_internal_get__data() ;

constexpr float_t const& __cordl_internal_get__height() const;

constexpr float_t& __cordl_internal_get__height() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__meshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__meshFilter() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__positions() const;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__positions() ;

constexpr float_t const& __cordl_internal_get__width() const;

constexpr float_t& __cordl_internal_get__width() ;

constexpr void __cordl_internal_set__data(::UnityW<::VROSC::UI::Meshes::RescalableMeshData>  value) ;

constexpr void __cordl_internal_set__height(float_t  value) ;

constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set__positions(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr void __cordl_internal_set__width(float_t  value) ;

/// @brief Method .ctor, addr 0x17e9364, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x17e90f4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UI::Meshes::RescalableMeshData> get_Data() ;

/// @brief Method get_Height, addr 0x17e90ec, size 0x8, virtual false, abstract: false, final false
inline float_t get_Height() ;

/// @brief Method get_Width, addr 0x17e90e4, size 0x8, virtual false, abstract: false, final false
inline float_t get_Width() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RescalableMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RescalableMesh", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RescalableMesh(RescalableMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RescalableMesh", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RescalableMesh(RescalableMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1630};

/// @brief Field _meshFilter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ____meshFilter;

/// @brief Field _data, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::Meshes::RescalableMeshData>  ____data;

/// @brief Field _width, offset: 0x30, size: 0x4, def value: None
 float_t  ____width;

/// @brief Field _height, offset: 0x34, size: 0x4, def value: None
 float_t  ____height;

/// @brief Field _mesh, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____mesh;

/// @brief Field _positions, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  ____positions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::Meshes::RescalableMesh, ____meshFilter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::RescalableMesh, ____data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::RescalableMesh, ____width) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::RescalableMesh, ____height) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::RescalableMesh, ____mesh) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::RescalableMesh, ____positions) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::Meshes::RescalableMesh, 0x48>, "Size mismatch!");

} // namespace end def VROSC::UI::Meshes
NEED_NO_BOX(::VROSC::UI::Meshes::RescalableMesh);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::RescalableMesh*, "VROSC.UI.Meshes", "RescalableMesh");
