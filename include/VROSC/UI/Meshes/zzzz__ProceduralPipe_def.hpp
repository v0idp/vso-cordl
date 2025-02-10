#pragma once
// IWYU pragma private; include "VROSC/UI/Meshes/ProceduralPipe.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/UI/Meshes/zzzz__ProceduralMeshData_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProceduralPipe)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
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
class ProceduralPipe;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::Meshes::ProceduralPipe);
// Dependencies VROSC.UI.Meshes.ProceduralMeshData
namespace VROSC::UI::Meshes {
// Is value type: false
// CS Name: VROSC.UI.Meshes.ProceduralPipe
class CORDL_TYPE ProceduralPipe : public ::VROSC::UI::Meshes::ProceduralMeshData {
public:
// Declarations
 __declspec(property(get=get_VertCount)) int32_t  VertCount;

/// @brief Field _bottomRadius, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__bottomRadius, put=__cordl_internal_set__bottomRadius)) float_t  _bottomRadius;

/// @brief Field _edges, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__edges, put=__cordl_internal_set__edges)) int32_t  _edges;

/// @brief Field _mouthEnd, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__mouthEnd, put=__cordl_internal_set__mouthEnd)) int32_t  _mouthEnd;

/// @brief Field _mouthFlat, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__mouthFlat, put=__cordl_internal_set__mouthFlat)) float_t  _mouthFlat;

/// @brief Field _mouthHeight, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__mouthHeight, put=__cordl_internal_set__mouthHeight)) float_t  _mouthHeight;

/// @brief Field _mouthOpening, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__mouthOpening, put=__cordl_internal_set__mouthOpening)) float_t  _mouthOpening;

/// @brief Field _mouthStart, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__mouthStart, put=__cordl_internal_set__mouthStart)) int32_t  _mouthStart;

/// @brief Field _mouthVertCount, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__mouthVertCount, put=__cordl_internal_set__mouthVertCount)) int32_t  _mouthVertCount;

/// @brief Field _mouthWidth, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__mouthWidth, put=__cordl_internal_set__mouthWidth)) float_t  _mouthWidth;

/// @brief Method AddQuad, addr 0x17ef74c, size 0xf8, virtual false, abstract: false, final false
inline void AddQuad(::System::Collections::Generic::List_1<int32_t>*  triangles, ::ArrayW<int32_t,::Array<int32_t>*>  vx) ;

/// @brief Method GetCirclePosition, addr 0x17efc48, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetCirclePosition(float_t  count) ;

/// @brief Method GetSharedMeshData, addr 0x17eed2c, size 0xa20, virtual true, abstract: false, final false
inline void GetSharedMeshData(::UnityEngine::Mesh*  mesh) ;

/// @brief Method GetVertCount, addr 0x17eeb88, size 0x120, virtual false, abstract: false, final false
inline int32_t GetVertCount() ;

static inline ::VROSC::UI::Meshes::ProceduralPipe* New_ctor() ;

/// @brief Method OnValidate, addr 0x17eeca8, size 0x18, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SetMeshSize, addr 0x17ef844, size 0x404, virtual true, abstract: false, final false
inline void SetMeshSize(::UnityEngine::Mesh*  mesh, ::UnityEngine::Rect  rect, float_t  depth, float_t  border, float_t  appear, ::VROSC::AnimatedAppear_Mode  mode) ;

/// @brief Method VertMultiplier, addr 0x17eecc0, size 0x6c, virtual false, abstract: false, final false
inline float_t VertMultiplier(int32_t  index) ;

constexpr float_t const& __cordl_internal_get__bottomRadius() const;

constexpr float_t& __cordl_internal_get__bottomRadius() ;

constexpr int32_t const& __cordl_internal_get__edges() const;

constexpr int32_t& __cordl_internal_get__edges() ;

constexpr int32_t const& __cordl_internal_get__mouthEnd() const;

constexpr int32_t& __cordl_internal_get__mouthEnd() ;

constexpr float_t const& __cordl_internal_get__mouthFlat() const;

constexpr float_t& __cordl_internal_get__mouthFlat() ;

constexpr float_t const& __cordl_internal_get__mouthHeight() const;

constexpr float_t& __cordl_internal_get__mouthHeight() ;

constexpr float_t const& __cordl_internal_get__mouthOpening() const;

constexpr float_t& __cordl_internal_get__mouthOpening() ;

constexpr int32_t const& __cordl_internal_get__mouthStart() const;

constexpr int32_t& __cordl_internal_get__mouthStart() ;

constexpr int32_t const& __cordl_internal_get__mouthVertCount() const;

constexpr int32_t& __cordl_internal_get__mouthVertCount() ;

constexpr float_t const& __cordl_internal_get__mouthWidth() const;

constexpr float_t& __cordl_internal_get__mouthWidth() ;

constexpr void __cordl_internal_set__bottomRadius(float_t  value) ;

constexpr void __cordl_internal_set__edges(int32_t  value) ;

constexpr void __cordl_internal_set__mouthEnd(int32_t  value) ;

constexpr void __cordl_internal_set__mouthFlat(float_t  value) ;

constexpr void __cordl_internal_set__mouthHeight(float_t  value) ;

constexpr void __cordl_internal_set__mouthOpening(float_t  value) ;

constexpr void __cordl_internal_set__mouthStart(int32_t  value) ;

constexpr void __cordl_internal_set__mouthVertCount(int32_t  value) ;

constexpr void __cordl_internal_set__mouthWidth(float_t  value) ;

/// @brief Method .ctor, addr 0x17efc8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_VertCount, addr 0x17eeb84, size 0x4, virtual true, abstract: false, final false
inline int32_t get_VertCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProceduralPipe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProceduralPipe", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProceduralPipe(ProceduralPipe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProceduralPipe", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProceduralPipe(ProceduralPipe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1646};

/// @brief Field _edges, offset: 0x40, size: 0x4, def value: None
 int32_t  ____edges;

/// @brief Field _bottomRadius, offset: 0x44, size: 0x4, def value: None
 float_t  ____bottomRadius;

/// @brief Field _mouthWidth, offset: 0x48, size: 0x4, def value: None
 float_t  ____mouthWidth;

/// @brief Field _mouthHeight, offset: 0x4c, size: 0x4, def value: None
 float_t  ____mouthHeight;

/// @brief Field _mouthOpening, offset: 0x50, size: 0x4, def value: None
 float_t  ____mouthOpening;

/// @brief Field _mouthFlat, offset: 0x54, size: 0x4, def value: None
 float_t  ____mouthFlat;

/// @brief Field _mouthStart, offset: 0x58, size: 0x4, def value: None
 int32_t  ____mouthStart;

/// @brief Field _mouthEnd, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____mouthEnd;

/// @brief Field _mouthVertCount, offset: 0x60, size: 0x4, def value: None
 int32_t  ____mouthVertCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::Meshes::ProceduralPipe, ____edges) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralPipe, ____bottomRadius) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralPipe, ____mouthWidth) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralPipe, ____mouthHeight) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralPipe, ____mouthOpening) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralPipe, ____mouthFlat) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralPipe, ____mouthStart) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralPipe, ____mouthEnd) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralPipe, ____mouthVertCount) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::Meshes::ProceduralPipe, 0x68>, "Size mismatch!");

} // namespace end def VROSC::UI::Meshes
NEED_NO_BOX(::VROSC::UI::Meshes::ProceduralPipe);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::ProceduralPipe*, "VROSC.UI.Meshes", "ProceduralPipe");
