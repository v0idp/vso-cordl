#pragma once
// IWYU pragma private; include "VROSC/UI/Meshes/ProceduralRoundedBar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/UI/Meshes/zzzz__ProceduralMeshData_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProceduralRoundedBar)
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
class ProceduralRoundedBar;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::Meshes::ProceduralRoundedBar);
// Dependencies VROSC.UI.Meshes.ProceduralMeshData
namespace VROSC::UI::Meshes {
// Is value type: false
// CS Name: VROSC.UI.Meshes.ProceduralRoundedBar
class CORDL_TYPE ProceduralRoundedBar : public ::VROSC::UI::Meshes::ProceduralMeshData {
public:
// Declarations
 __declspec(property(get=get_VertCount)) int32_t  VertCount;

/// @brief Field _edges, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__edges, put=__cordl_internal_set__edges)) int32_t  _edges;

/// @brief Field _flipFirst, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__flipFirst, put=__cordl_internal_set__flipFirst)) bool  _flipFirst;

/// @brief Field _flipSecond, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get__flipSecond, put=__cordl_internal_set__flipSecond)) bool  _flipSecond;

 __declspec(property(get=get_edgeVertexPairs)) int32_t  edgeVertexPairs;

/// @brief Method GetCirclePosition, addr 0x17f0d18, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetCirclePosition(float_t  count, bool  first, bool  horizontal, bool  flip) ;

/// @brief Method GetSharedMeshData, addr 0x17f0630, size 0x3dc, virtual true, abstract: false, final false
inline void GetSharedMeshData(::UnityEngine::Mesh*  mesh) ;

static inline ::VROSC::UI::Meshes::ProceduralRoundedBar* New_ctor() ;

/// @brief Method OnValidate, addr 0x17f0618, size 0x18, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SetMeshSize, addr 0x17f0a0c, size 0x30c, virtual true, abstract: false, final false
inline void SetMeshSize(::UnityEngine::Mesh*  mesh, ::UnityEngine::Rect  rect, float_t  depth, float_t  border, float_t  appear, ::VROSC::AnimatedAppear_Mode  mode) ;

constexpr int32_t const& __cordl_internal_get__edges() const;

constexpr int32_t& __cordl_internal_get__edges() ;

constexpr bool const& __cordl_internal_get__flipFirst() const;

constexpr bool& __cordl_internal_get__flipFirst() ;

constexpr bool const& __cordl_internal_get__flipSecond() const;

constexpr bool& __cordl_internal_get__flipSecond() ;

constexpr void __cordl_internal_set__edges(int32_t  value) ;

constexpr void __cordl_internal_set__flipFirst(bool  value) ;

constexpr void __cordl_internal_set__flipSecond(bool  value) ;

/// @brief Method .ctor, addr 0x17f0db8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_VertCount, addr 0x17f05fc, size 0x10, virtual true, abstract: false, final false
inline int32_t get_VertCount() ;

/// @brief Method get_edgeVertexPairs, addr 0x17f060c, size 0xc, virtual false, abstract: false, final false
inline int32_t get_edgeVertexPairs() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProceduralRoundedBar() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProceduralRoundedBar", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProceduralRoundedBar(ProceduralRoundedBar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProceduralRoundedBar", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProceduralRoundedBar(ProceduralRoundedBar const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1649};

/// @brief Field _edges, offset: 0x40, size: 0x4, def value: None
 int32_t  ____edges;

/// @brief Field _flipFirst, offset: 0x44, size: 0x1, def value: None
 bool  ____flipFirst;

/// @brief Field _flipSecond, offset: 0x45, size: 0x1, def value: None
 bool  ____flipSecond;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::Meshes::ProceduralRoundedBar, ____edges) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralRoundedBar, ____flipFirst) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralRoundedBar, ____flipSecond) == 0x45, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::Meshes::ProceduralRoundedBar, 0x48>, "Size mismatch!");

} // namespace end def VROSC::UI::Meshes
NEED_NO_BOX(::VROSC::UI::Meshes::ProceduralRoundedBar);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::ProceduralRoundedBar*, "VROSC.UI.Meshes", "ProceduralRoundedBar");
