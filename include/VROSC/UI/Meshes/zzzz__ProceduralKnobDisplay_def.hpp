#pragma once
// IWYU pragma private; include "VROSC/UI/Meshes/ProceduralKnobDisplay.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/UI/Meshes/zzzz__ProceduralMeshData_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProceduralKnobDisplay)
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
class ProceduralKnobDisplay;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::Meshes::ProceduralKnobDisplay);
// Dependencies VROSC.UI.Meshes.ProceduralMeshData
namespace VROSC::UI::Meshes {
// Is value type: false
// CS Name: VROSC.UI.Meshes.ProceduralKnobDisplay
class CORDL_TYPE ProceduralKnobDisplay : public ::VROSC::UI::Meshes::ProceduralMeshData {
public:
// Declarations
 __declspec(property(get=get_VertCount)) int32_t  VertCount;

/// @brief Field _edges, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__edges, put=__cordl_internal_set__edges)) int32_t  _edges;

/// @brief Field _from, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__from, put=__cordl_internal_set__from)) float_t  _from;

/// @brief Field _length, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__length, put=__cordl_internal_set__length)) float_t  _length;

/// @brief Field _noVerticalUV, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get__noVerticalUV, put=__cordl_internal_set__noVerticalUV)) bool  _noVerticalUV;

 __declspec(property(get=get_vertexPairs)) int32_t  vertexPairs;

/// @brief Method GetCirclePosition, addr 0x17ed84c, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetCirclePosition(float_t  count) ;

/// @brief Method GetSharedMeshData, addr 0x17ed2d4, size 0x3d4, virtual true, abstract: false, final false
inline void GetSharedMeshData(::UnityEngine::Mesh*  mesh) ;

static inline ::VROSC::UI::Meshes::ProceduralKnobDisplay* New_ctor() ;

/// @brief Method OnValidate, addr 0x17ed2bc, size 0x18, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SetMeshSize, addr 0x17ed6a8, size 0x1a4, virtual true, abstract: false, final false
inline void SetMeshSize(::UnityEngine::Mesh*  mesh, ::UnityEngine::Rect  rect, float_t  depth, float_t  border, float_t  appear, ::VROSC::AnimatedAppear_Mode  mode) ;

constexpr int32_t const& __cordl_internal_get__edges() const;

constexpr int32_t& __cordl_internal_get__edges() ;

constexpr float_t const& __cordl_internal_get__from() const;

constexpr float_t& __cordl_internal_get__from() ;

constexpr float_t const& __cordl_internal_get__length() const;

constexpr float_t& __cordl_internal_get__length() ;

constexpr bool const& __cordl_internal_get__noVerticalUV() const;

constexpr bool& __cordl_internal_get__noVerticalUV() ;

constexpr void __cordl_internal_set__edges(int32_t  value) ;

constexpr void __cordl_internal_set__from(float_t  value) ;

constexpr void __cordl_internal_set__length(float_t  value) ;

constexpr void __cordl_internal_set__noVerticalUV(bool  value) ;

/// @brief Method .ctor, addr 0x17ed8dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_VertCount, addr 0x17ed2ac, size 0x10, virtual true, abstract: false, final false
inline int32_t get_VertCount() ;

/// @brief Method get_vertexPairs, addr 0x17ed2a0, size 0xc, virtual false, abstract: false, final false
inline int32_t get_vertexPairs() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProceduralKnobDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProceduralKnobDisplay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProceduralKnobDisplay(ProceduralKnobDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProceduralKnobDisplay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProceduralKnobDisplay(ProceduralKnobDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1642};

/// @brief Field _from, offset: 0x40, size: 0x4, def value: None
 float_t  ____from;

/// @brief Field _length, offset: 0x44, size: 0x4, def value: None
 float_t  ____length;

/// @brief Field _edges, offset: 0x48, size: 0x4, def value: None
 int32_t  ____edges;

/// @brief Field _noVerticalUV, offset: 0x4c, size: 0x1, def value: None
 bool  ____noVerticalUV;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::Meshes::ProceduralKnobDisplay, ____from) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralKnobDisplay, ____length) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralKnobDisplay, ____edges) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralKnobDisplay, ____noVerticalUV) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::Meshes::ProceduralKnobDisplay, 0x50>, "Size mismatch!");

} // namespace end def VROSC::UI::Meshes
NEED_NO_BOX(::VROSC::UI::Meshes::ProceduralKnobDisplay);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::ProceduralKnobDisplay*, "VROSC.UI.Meshes", "ProceduralKnobDisplay");
