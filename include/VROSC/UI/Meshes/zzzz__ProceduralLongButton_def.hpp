#pragma once
// IWYU pragma private; include "VROSC/UI/Meshes/ProceduralLongButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/UI/Meshes/zzzz__ProceduralMeshData_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProceduralLongButton)
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
class ProceduralLongButton;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::Meshes::ProceduralLongButton);
// Dependencies VROSC.UI.Meshes.ProceduralMeshData
namespace VROSC::UI::Meshes {
// Is value type: false
// CS Name: VROSC.UI.Meshes.ProceduralLongButton
class CORDL_TYPE ProceduralLongButton : public ::VROSC::UI::Meshes::ProceduralMeshData {
public:
// Declarations
 __declspec(property(get=get_VertCount)) int32_t  VertCount;

/// @brief Field _cap, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__cap, put=__cordl_internal_set__cap)) bool  _cap;

/// @brief Field _edge, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get__edge, put=__cordl_internal_set__edge)) bool  _edge;

/// @brief Field _edges, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__edges, put=__cordl_internal_set__edges)) int32_t  _edges;

 __declspec(property(get=get_edgeVertexPairs)) int32_t  edgeVertexPairs;

/// @brief Method GetCirclePosition, addr 0x17ee83c, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetCirclePosition(float_t  count, bool  first, bool  horizontal) ;

/// @brief Method GetSharedMeshData, addr 0x17edebc, size 0x5b4, virtual true, abstract: false, final false
inline void GetSharedMeshData(::UnityEngine::Mesh*  mesh) ;

/// @brief Method GetVertexCount, addr 0x17ede68, size 0x2c, virtual false, abstract: false, final false
inline int32_t GetVertexCount() ;

static inline ::VROSC::UI::Meshes::ProceduralLongButton* New_ctor() ;

/// @brief Method OnValidate, addr 0x17edea4, size 0x18, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SetMeshSize, addr 0x17ee470, size 0x3cc, virtual true, abstract: false, final false
inline void SetMeshSize(::UnityEngine::Mesh*  mesh, ::UnityEngine::Rect  rect, float_t  depth, float_t  border, float_t  appear, ::VROSC::AnimatedAppear_Mode  mode) ;

constexpr bool const& __cordl_internal_get__cap() const;

constexpr bool& __cordl_internal_get__cap() ;

constexpr bool const& __cordl_internal_get__edge() const;

constexpr bool& __cordl_internal_get__edge() ;

constexpr int32_t const& __cordl_internal_get__edges() const;

constexpr int32_t& __cordl_internal_get__edges() ;

constexpr void __cordl_internal_set__cap(bool  value) ;

constexpr void __cordl_internal_set__edge(bool  value) ;

constexpr void __cordl_internal_set__edges(int32_t  value) ;

/// @brief Method .ctor, addr 0x17ee89c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_VertCount, addr 0x17ede3c, size 0x2c, virtual true, abstract: false, final false
inline int32_t get_VertCount() ;

/// @brief Method get_edgeVertexPairs, addr 0x17ede94, size 0x10, virtual false, abstract: false, final false
inline int32_t get_edgeVertexPairs() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProceduralLongButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProceduralLongButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProceduralLongButton(ProceduralLongButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProceduralLongButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProceduralLongButton(ProceduralLongButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1644};

/// @brief Field _edges, offset: 0x40, size: 0x4, def value: None
 int32_t  ____edges;

/// @brief Field _cap, offset: 0x44, size: 0x1, def value: None
 bool  ____cap;

/// @brief Field _edge, offset: 0x45, size: 0x1, def value: None
 bool  ____edge;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::Meshes::ProceduralLongButton, ____edges) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralLongButton, ____cap) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralLongButton, ____edge) == 0x45, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::Meshes::ProceduralLongButton, 0x48>, "Size mismatch!");

} // namespace end def VROSC::UI::Meshes
NEED_NO_BOX(::VROSC::UI::Meshes::ProceduralLongButton);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::ProceduralLongButton*, "VROSC.UI.Meshes", "ProceduralLongButton");
