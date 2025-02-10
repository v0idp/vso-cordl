#pragma once
// IWYU pragma private; include "VROSC/UI/Meshes/ProceduralButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/UI/Meshes/zzzz__ProceduralMeshData_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProceduralButton)
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
class ProceduralButton;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::Meshes::ProceduralButton);
// Dependencies UnityEngine.Color, VROSC.UI.Meshes.ProceduralMeshData
namespace VROSC::UI::Meshes {
// Is value type: false
// CS Name: VROSC.UI.Meshes.ProceduralButton
class CORDL_TYPE ProceduralButton : public ::VROSC::UI::Meshes::ProceduralMeshData {
public:
// Declarations
 __declspec(property(get=get_VertCount)) int32_t  VertCount;

/// @brief Field _cap, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__cap, put=__cordl_internal_set__cap)) bool  _cap;

/// @brief Field _edge, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get__edge, put=__cordl_internal_set__edge)) bool  _edge;

/// @brief Field _edges, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__edges, put=__cordl_internal_set__edges)) int32_t  _edges;

/// @brief Field _separateCap, offset 0x46, size 0x1 
 __declspec(property(get=__cordl_internal_get__separateCap, put=__cordl_internal_set__separateCap)) bool  _separateCap;

/// @brief Field _sideLowerColor, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get__sideLowerColor, put=__cordl_internal_set__sideLowerColor)) ::UnityEngine::Color  _sideLowerColor;

/// @brief Field _sideUpperColor, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__sideUpperColor, put=__cordl_internal_set__sideUpperColor)) ::UnityEngine::Color  _sideUpperColor;

 __declspec(property(get=get_edgeVertexPairs)) int32_t  edgeVertexPairs;

/// @brief Method GetCirclePosition, addr 0x17eb27c, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetCirclePosition(float_t  count) ;

/// @brief Method GetSharedMeshData, addr 0x17eaa94, size 0x55c, virtual true, abstract: false, final false
inline void GetSharedMeshData(::UnityEngine::Mesh*  mesh) ;

/// @brief Method GetVertexCount, addr 0x17eaa34, size 0x3c, virtual false, abstract: false, final false
inline int32_t GetVertexCount() ;

static inline ::VROSC::UI::Meshes::ProceduralButton* New_ctor() ;

/// @brief Method OnValidate, addr 0x17eaa7c, size 0x18, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SetMeshSize, addr 0x17eaff0, size 0x28c, virtual true, abstract: false, final false
inline void SetMeshSize(::UnityEngine::Mesh*  mesh, ::UnityEngine::Rect  rect, float_t  depth, float_t  border, float_t  appear, ::VROSC::AnimatedAppear_Mode  mode) ;

constexpr bool const& __cordl_internal_get__cap() const;

constexpr bool& __cordl_internal_get__cap() ;

constexpr bool const& __cordl_internal_get__edge() const;

constexpr bool& __cordl_internal_get__edge() ;

constexpr int32_t const& __cordl_internal_get__edges() const;

constexpr int32_t& __cordl_internal_get__edges() ;

constexpr bool const& __cordl_internal_get__separateCap() const;

constexpr bool& __cordl_internal_get__separateCap() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__sideLowerColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__sideLowerColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__sideUpperColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__sideUpperColor() ;

constexpr void __cordl_internal_set__cap(bool  value) ;

constexpr void __cordl_internal_set__edge(bool  value) ;

constexpr void __cordl_internal_set__edges(int32_t  value) ;

constexpr void __cordl_internal_set__separateCap(bool  value) ;

constexpr void __cordl_internal_set__sideLowerColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__sideUpperColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x17eb2c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_VertCount, addr 0x17ea9f8, size 0x3c, virtual true, abstract: false, final false
inline int32_t get_VertCount() ;

/// @brief Method get_edgeVertexPairs, addr 0x17eaa70, size 0xc, virtual false, abstract: false, final false
inline int32_t get_edgeVertexPairs() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProceduralButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProceduralButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProceduralButton(ProceduralButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProceduralButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProceduralButton(ProceduralButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1636};

/// @brief Field _edges, offset: 0x40, size: 0x4, def value: None
 int32_t  ____edges;

/// @brief Field _cap, offset: 0x44, size: 0x1, def value: None
 bool  ____cap;

/// @brief Field _edge, offset: 0x45, size: 0x1, def value: None
 bool  ____edge;

/// @brief Field _separateCap, offset: 0x46, size: 0x1, def value: None
 bool  ____separateCap;

/// @brief Field _sideUpperColor, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Color  ____sideUpperColor;

/// @brief Field _sideLowerColor, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Color  ____sideLowerColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::Meshes::ProceduralButton, ____edges) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralButton, ____cap) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralButton, ____edge) == 0x45, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralButton, ____separateCap) == 0x46, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralButton, ____sideUpperColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralButton, ____sideLowerColor) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::Meshes::ProceduralButton, 0x68>, "Size mismatch!");

} // namespace end def VROSC::UI::Meshes
NEED_NO_BOX(::VROSC::UI::Meshes::ProceduralButton);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::ProceduralButton*, "VROSC.UI.Meshes", "ProceduralButton");
