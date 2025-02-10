#pragma once
// IWYU pragma private; include "VROSC/ResizeableAdjustableMesh.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__AdjustableMesh_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ResizeableAdjustableMesh)
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC::UI::Meshes {
class AdjustableMeshData;
}
namespace VROSC {
struct AnimatedAppear_Mode;
}
// Forward declare root types
namespace VROSC {
class ResizeableAdjustableMesh;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ResizeableAdjustableMesh);
// Dependencies VROSC.AdjustableMesh
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ResizeableAdjustableMesh
class CORDL_TYPE ResizeableAdjustableMesh : public ::VROSC::AdjustableMesh {
public:
// Declarations
 __declspec(property(get=get_Original)) ::UnityW<::UnityEngine::Mesh>  Original;

/// @brief Field _alwaysUpdate, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__alwaysUpdate, put=__cordl_internal_set__alwaysUpdate)) bool  _alwaysUpdate;

/// @brief Field _data, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::VROSC::UI::Meshes::AdjustableMeshData>  _data;

/// @brief Field _lastHeight, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastHeight, put=__cordl_internal_set__lastHeight)) float_t  _lastHeight;

/// @brief Field _lastWidth, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastWidth, put=__cordl_internal_set__lastWidth)) float_t  _lastWidth;

/// @brief Field _modifiedPositions, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__modifiedPositions, put=__cordl_internal_set__modifiedPositions)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _modifiedPositions;

/// @brief Field _originalPositions, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__originalPositions, put=__cordl_internal_set__originalPositions)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _originalPositions;

/// @brief Method LoadMesh, addr 0x17a7614, size 0xac, virtual true, abstract: false, final false
inline void LoadMesh(bool  force) ;

static inline ::VROSC::ResizeableAdjustableMesh* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x17a79d8, size 0x64, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnEnable, addr 0x17a7600, size 0x14, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetMeshSize, addr 0x17a77ac, size 0x68, virtual false, abstract: false, final false
inline void SetMeshSize(::UnityEngine::Rect  rect) ;

/// @brief Method Update, addr 0x17a7814, size 0x154, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateMesh, addr 0x17a76c0, size 0xec, virtual false, abstract: false, final false
inline void UpdateMesh(bool  force) ;

/// @brief Method UpdateMeshAppearance, addr 0x17a7968, size 0x70, virtual true, abstract: false, final false
inline void UpdateMeshAppearance(float_t  appearAmount, ::VROSC::AnimatedAppear_Mode  mode, bool  useFlash) ;

constexpr bool const& __cordl_internal_get__alwaysUpdate() const;

constexpr bool& __cordl_internal_get__alwaysUpdate() ;

constexpr ::UnityW<::VROSC::UI::Meshes::AdjustableMeshData> const& __cordl_internal_get__data() const;

constexpr ::UnityW<::VROSC::UI::Meshes::AdjustableMeshData>& __cordl_internal_get__data() ;

constexpr float_t const& __cordl_internal_get__lastHeight() const;

constexpr float_t& __cordl_internal_get__lastHeight() ;

constexpr float_t const& __cordl_internal_get__lastWidth() const;

constexpr float_t& __cordl_internal_get__lastWidth() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__modifiedPositions() const;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__modifiedPositions() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__originalPositions() const;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__originalPositions() ;

constexpr void __cordl_internal_set__alwaysUpdate(bool  value) ;

constexpr void __cordl_internal_set__data(::UnityW<::VROSC::UI::Meshes::AdjustableMeshData>  value) ;

constexpr void __cordl_internal_set__lastHeight(float_t  value) ;

constexpr void __cordl_internal_set__lastWidth(float_t  value) ;

constexpr void __cordl_internal_set__modifiedPositions(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr void __cordl_internal_set__originalPositions(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

/// @brief Method .ctor, addr 0x17a7a3c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Original, addr 0x17a75e4, size 0x1c, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_Original() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ResizeableAdjustableMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ResizeableAdjustableMesh", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ResizeableAdjustableMesh(ResizeableAdjustableMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ResizeableAdjustableMesh", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ResizeableAdjustableMesh(ResizeableAdjustableMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1395};

/// @brief Field _data, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::Meshes::AdjustableMeshData>  ____data;

/// @brief Field _alwaysUpdate, offset: 0x98, size: 0x1, def value: None
 bool  ____alwaysUpdate;

/// @brief Field _lastHeight, offset: 0x9c, size: 0x4, def value: None
 float_t  ____lastHeight;

/// @brief Field _lastWidth, offset: 0xa0, size: 0x4, def value: None
 float_t  ____lastWidth;

/// @brief Field _originalPositions, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  ____originalPositions;

/// @brief Field _modifiedPositions, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  ____modifiedPositions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ResizeableAdjustableMesh, ____data) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::ResizeableAdjustableMesh, ____alwaysUpdate) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::ResizeableAdjustableMesh, ____lastHeight) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ResizeableAdjustableMesh, ____lastWidth) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::ResizeableAdjustableMesh, ____originalPositions) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::ResizeableAdjustableMesh, ____modifiedPositions) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ResizeableAdjustableMesh, 0xb8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ResizeableAdjustableMesh);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ResizeableAdjustableMesh*, "VROSC", "ResizeableAdjustableMesh");
