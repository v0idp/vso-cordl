#pragma once
// IWYU pragma private; include "VROSC/UI/Meshes/ProceduralQuad.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/UI/Meshes/zzzz__ProceduralMeshData_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProceduralQuad)
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Rect;
}
namespace VROSC {
struct AnimatedAppear_Mode;
}
// Forward declare root types
namespace VROSC::UI::Meshes {
class ProceduralQuad;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::Meshes::ProceduralQuad);
// Dependencies VROSC.UI.Meshes.ProceduralMeshData
namespace VROSC::UI::Meshes {
// Is value type: false
// CS Name: VROSC.UI.Meshes.ProceduralQuad
class CORDL_TYPE ProceduralQuad : public ::VROSC::UI::Meshes::ProceduralMeshData {
public:
// Declarations
 __declspec(property(get=get_VertCount)) int32_t  VertCount;

/// @brief Method GetSharedMeshData, addr 0x17efc9c, size 0x1f8, virtual true, abstract: false, final false
inline void GetSharedMeshData(::UnityEngine::Mesh*  mesh) ;

static inline ::VROSC::UI::Meshes::ProceduralQuad* New_ctor() ;

/// @brief Method SetMeshSize, addr 0x17efe94, size 0x11c, virtual true, abstract: false, final false
inline void SetMeshSize(::UnityEngine::Mesh*  mesh, ::UnityEngine::Rect  rect, float_t  depth, float_t  border, float_t  appear, ::VROSC::AnimatedAppear_Mode  mode) ;

/// @brief Method .ctor, addr 0x17effb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_VertCount, addr 0x17efc94, size 0x8, virtual true, abstract: false, final false
inline int32_t get_VertCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProceduralQuad() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProceduralQuad", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProceduralQuad(ProceduralQuad && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProceduralQuad", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProceduralQuad(ProceduralQuad const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1647};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::UI::Meshes::ProceduralQuad, 0x40>, "Size mismatch!");

} // namespace end def VROSC::UI::Meshes
NEED_NO_BOX(::VROSC::UI::Meshes::ProceduralQuad);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::ProceduralQuad*, "VROSC.UI.Meshes", "ProceduralQuad");
