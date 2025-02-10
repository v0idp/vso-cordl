#pragma once
// IWYU pragma private; include "VROSC/UI/Meshes/ProceduralColorPicker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/UI/Meshes/zzzz__ProceduralMeshData_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProceduralColorPicker)
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
class ProceduralColorPicker;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::Meshes::ProceduralColorPicker);
// Dependencies VROSC.UI.Meshes.ProceduralMeshData
namespace VROSC::UI::Meshes {
// Is value type: false
// CS Name: VROSC.UI.Meshes.ProceduralColorPicker
class CORDL_TYPE ProceduralColorPicker : public ::VROSC::UI::Meshes::ProceduralMeshData {
public:
// Declarations
 __declspec(property(get=get_VertCount)) int32_t  VertCount;

/// @brief Field _centerSaturation, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__centerSaturation, put=__cordl_internal_set__centerSaturation)) float_t  _centerSaturation;

/// @brief Field _centerValue, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__centerValue, put=__cordl_internal_set__centerValue)) float_t  _centerValue;

/// @brief Field _edges, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__edges, put=__cordl_internal_set__edges)) int32_t  _edges;

/// @brief Field _outerSaturation, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__outerSaturation, put=__cordl_internal_set__outerSaturation)) float_t  _outerSaturation;

/// @brief Field _outerValue, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__outerValue, put=__cordl_internal_set__outerValue)) float_t  _outerValue;

/// @brief Method GetCirclePosition, addr 0x17eca9c, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetCirclePosition(float_t  count) ;

/// @brief Method GetSharedMeshData, addr 0x17ec528, size 0x3c0, virtual true, abstract: false, final false
inline void GetSharedMeshData(::UnityEngine::Mesh*  mesh) ;

/// @brief Method GetVertexCount, addr 0x17ec504, size 0xc, virtual false, abstract: false, final false
inline int32_t GetVertexCount() ;

static inline ::VROSC::UI::Meshes::ProceduralColorPicker* New_ctor() ;

/// @brief Method OnValidate, addr 0x17ec510, size 0x18, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SetMeshSize, addr 0x17ec8e8, size 0x1b4, virtual true, abstract: false, final false
inline void SetMeshSize(::UnityEngine::Mesh*  mesh, ::UnityEngine::Rect  rect, float_t  depth, float_t  border, float_t  appear, ::VROSC::AnimatedAppear_Mode  mode) ;

constexpr float_t const& __cordl_internal_get__centerSaturation() const;

constexpr float_t& __cordl_internal_get__centerSaturation() ;

constexpr float_t const& __cordl_internal_get__centerValue() const;

constexpr float_t& __cordl_internal_get__centerValue() ;

constexpr int32_t const& __cordl_internal_get__edges() const;

constexpr int32_t& __cordl_internal_get__edges() ;

constexpr float_t const& __cordl_internal_get__outerSaturation() const;

constexpr float_t& __cordl_internal_get__outerSaturation() ;

constexpr float_t const& __cordl_internal_get__outerValue() const;

constexpr float_t& __cordl_internal_get__outerValue() ;

constexpr void __cordl_internal_set__centerSaturation(float_t  value) ;

constexpr void __cordl_internal_set__centerValue(float_t  value) ;

constexpr void __cordl_internal_set__edges(int32_t  value) ;

constexpr void __cordl_internal_set__outerSaturation(float_t  value) ;

constexpr void __cordl_internal_set__outerValue(float_t  value) ;

/// @brief Method .ctor, addr 0x17ecae0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_VertCount, addr 0x17ec4f8, size 0xc, virtual true, abstract: false, final false
inline int32_t get_VertCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProceduralColorPicker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProceduralColorPicker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProceduralColorPicker(ProceduralColorPicker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProceduralColorPicker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProceduralColorPicker(ProceduralColorPicker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1640};

/// @brief Field _edges, offset: 0x40, size: 0x4, def value: None
 int32_t  ____edges;

/// @brief Field _outerSaturation, offset: 0x44, size: 0x4, def value: None
 float_t  ____outerSaturation;

/// @brief Field _outerValue, offset: 0x48, size: 0x4, def value: None
 float_t  ____outerValue;

/// @brief Field _centerSaturation, offset: 0x4c, size: 0x4, def value: None
 float_t  ____centerSaturation;

/// @brief Field _centerValue, offset: 0x50, size: 0x4, def value: None
 float_t  ____centerValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::Meshes::ProceduralColorPicker, ____edges) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralColorPicker, ____outerSaturation) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralColorPicker, ____outerValue) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralColorPicker, ____centerSaturation) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralColorPicker, ____centerValue) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::Meshes::ProceduralColorPicker, 0x58>, "Size mismatch!");

} // namespace end def VROSC::UI::Meshes
NEED_NO_BOX(::VROSC::UI::Meshes::ProceduralColorPicker);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::ProceduralColorPicker*, "VROSC.UI.Meshes", "ProceduralColorPicker");
