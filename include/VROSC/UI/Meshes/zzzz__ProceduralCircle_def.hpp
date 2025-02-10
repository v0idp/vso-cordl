#pragma once
// IWYU pragma private; include "VROSC/UI/Meshes/ProceduralCircle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/UI/Meshes/zzzz__ProceduralMeshData_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProceduralCircle)
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace VROSC {
struct AnimatedAppear_Mode;
}
// Forward declare root types
namespace VROSC::UI::Meshes {
class ProceduralCircle;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::Meshes::ProceduralCircle);
// Dependencies VROSC.UI.Meshes.ProceduralMeshData
namespace VROSC::UI::Meshes {
// Is value type: false
// CS Name: VROSC.UI.Meshes.ProceduralCircle
class CORDL_TYPE ProceduralCircle : public ::VROSC::UI::Meshes::ProceduralMeshData {
public:
// Declarations
 __declspec(property(get=get_VertCount)) int32_t  VertCount;

/// @brief Field _edges, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__edges, put=__cordl_internal_set__edges)) int32_t  _edges;

/// @brief Method GetCirclePosition, addr 0x17ec288, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetCirclePosition(float_t  count) ;

/// @brief Method GetSharedMeshData, addr 0x17ebf40, size 0x348, virtual true, abstract: false, final false
inline void GetSharedMeshData(::UnityEngine::Mesh*  mesh) ;

static inline ::VROSC::UI::Meshes::ProceduralCircle* New_ctor() ;

/// @brief Method OnValidate, addr 0x17ebf28, size 0x18, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SetMeshSize, addr 0x17ec2cc, size 0x1f0, virtual true, abstract: false, final false
inline void SetMeshSize(::UnityEngine::Mesh*  mesh, ::UnityEngine::Rect  rect, float_t  depth, float_t  border, float_t  appear, ::VROSC::AnimatedAppear_Mode  mode) ;

constexpr int32_t const& __cordl_internal_get__edges() const;

constexpr int32_t& __cordl_internal_get__edges() ;

constexpr void __cordl_internal_set__edges(int32_t  value) ;

/// @brief Method .ctor, addr 0x17ec4f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_VertCount, addr 0x17ebf1c, size 0xc, virtual true, abstract: false, final false
inline int32_t get_VertCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProceduralCircle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProceduralCircle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProceduralCircle(ProceduralCircle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProceduralCircle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProceduralCircle(ProceduralCircle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1639};

/// @brief Field _edges, offset: 0x40, size: 0x4, def value: None
 int32_t  ____edges;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::Meshes::ProceduralCircle, ____edges) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::Meshes::ProceduralCircle, 0x48>, "Size mismatch!");

} // namespace end def VROSC::UI::Meshes
NEED_NO_BOX(::VROSC::UI::Meshes::ProceduralCircle);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::ProceduralCircle*, "VROSC.UI.Meshes", "ProceduralCircle");
