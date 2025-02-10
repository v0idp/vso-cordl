#pragma once
// IWYU pragma private; include "VROSC/UI/Meshes/ProceduralHeaderBar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/UI/Meshes/zzzz__ProceduralMeshData_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProceduralHeaderBar)
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
class ProceduralHeaderBar;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::Meshes::ProceduralHeaderBar);
// Dependencies VROSC.UI.Meshes.ProceduralMeshData
namespace VROSC::UI::Meshes {
// Is value type: false
// CS Name: VROSC.UI.Meshes.ProceduralHeaderBar
class CORDL_TYPE ProceduralHeaderBar : public ::VROSC::UI::Meshes::ProceduralMeshData {
public:
// Declarations
 __declspec(property(get=get_VertCount)) int32_t  VertCount;

/// @brief Field _buttonOnLeft, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__buttonOnLeft, put=__cordl_internal_set__buttonOnLeft)) bool  _buttonOnLeft;

/// @brief Field _buttonOnRight, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get__buttonOnRight, put=__cordl_internal_set__buttonOnRight)) bool  _buttonOnRight;

/// @brief Field _edges, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__edges, put=__cordl_internal_set__edges)) int32_t  _edges;

 __declspec(property(get=get_edgeVertexPairs)) int32_t  edgeVertexPairs;

/// @brief Method GetCirclePosition, addr 0x17ed234, size 0x64, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetCirclePosition(float_t  count, bool  first, bool  flip) ;

/// @brief Method GetSharedMeshData, addr 0x17ecb1c, size 0x3e4, virtual true, abstract: false, final false
inline void GetSharedMeshData(::UnityEngine::Mesh*  mesh) ;

static inline ::VROSC::UI::Meshes::ProceduralHeaderBar* New_ctor() ;

/// @brief Method OnValidate, addr 0x17ecb04, size 0x18, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SetMeshSize, addr 0x17ecf00, size 0x334, virtual true, abstract: false, final false
inline void SetMeshSize(::UnityEngine::Mesh*  mesh, ::UnityEngine::Rect  rect, float_t  depth, float_t  border, float_t  appear, ::VROSC::AnimatedAppear_Mode  mode) ;

constexpr bool const& __cordl_internal_get__buttonOnLeft() const;

constexpr bool& __cordl_internal_get__buttonOnLeft() ;

constexpr bool const& __cordl_internal_get__buttonOnRight() const;

constexpr bool& __cordl_internal_get__buttonOnRight() ;

constexpr int32_t const& __cordl_internal_get__edges() const;

constexpr int32_t& __cordl_internal_get__edges() ;

constexpr void __cordl_internal_set__buttonOnLeft(bool  value) ;

constexpr void __cordl_internal_set__buttonOnRight(bool  value) ;

constexpr void __cordl_internal_set__edges(int32_t  value) ;

/// @brief Method .ctor, addr 0x17ed298, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_VertCount, addr 0x17ecae8, size 0x10, virtual true, abstract: false, final false
inline int32_t get_VertCount() ;

/// @brief Method get_edgeVertexPairs, addr 0x17ecaf8, size 0xc, virtual false, abstract: false, final false
inline int32_t get_edgeVertexPairs() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProceduralHeaderBar() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProceduralHeaderBar", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProceduralHeaderBar(ProceduralHeaderBar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProceduralHeaderBar", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProceduralHeaderBar(ProceduralHeaderBar const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1641};

/// @brief Field _edges, offset: 0x40, size: 0x4, def value: None
 int32_t  ____edges;

/// @brief Field _buttonOnLeft, offset: 0x44, size: 0x1, def value: None
 bool  ____buttonOnLeft;

/// @brief Field _buttonOnRight, offset: 0x45, size: 0x1, def value: None
 bool  ____buttonOnRight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::Meshes::ProceduralHeaderBar, ____edges) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralHeaderBar, ____buttonOnLeft) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralHeaderBar, ____buttonOnRight) == 0x45, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::Meshes::ProceduralHeaderBar, 0x48>, "Size mismatch!");

} // namespace end def VROSC::UI::Meshes
NEED_NO_BOX(::VROSC::UI::Meshes::ProceduralHeaderBar);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::ProceduralHeaderBar*, "VROSC.UI.Meshes", "ProceduralHeaderBar");
