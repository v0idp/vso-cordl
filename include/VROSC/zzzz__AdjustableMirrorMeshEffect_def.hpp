#pragma once
// IWYU pragma private; include "VROSC/AdjustableMirrorMeshEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__AdjustableMeshEffect_def.hpp"
CORDL_MODULE_EXPORT(AdjustableMirrorMeshEffect)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace VROSC {
class AdjustableMirrorMeshEffect;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AdjustableMirrorMeshEffect);
// Dependencies VROSC.AdjustableMeshEffect
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AdjustableMirrorMeshEffect
class CORDL_TYPE AdjustableMirrorMeshEffect : public ::VROSC::AdjustableMeshEffect {
public:
// Declarations
/// @brief Field _flipped, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__flipped, put=__cordl_internal_set__flipped)) bool  _flipped;

/// @brief Method Flip, addr 0x17a7440, size 0x9c, virtual false, abstract: false, final false
inline void Flip(::UnityEngine::Mesh*  mesh) ;

/// @brief Method FlipNormals, addr 0x17a74dc, size 0x100, virtual false, abstract: false, final false
inline void FlipNormals(::UnityEngine::Mesh*  mesh) ;

static inline ::VROSC::AdjustableMirrorMeshEffect* New_ctor() ;

/// @brief Method OnMeshVisible, addr 0x17a7404, size 0x3c, virtual true, abstract: false, final false
inline void OnMeshVisible() ;

constexpr bool const& __cordl_internal_get__flipped() const;

constexpr bool& __cordl_internal_get__flipped() ;

constexpr void __cordl_internal_set__flipped(bool  value) ;

/// @brief Method .ctor, addr 0x17a75dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdjustableMirrorMeshEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMirrorMeshEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdjustableMirrorMeshEffect(AdjustableMirrorMeshEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMirrorMeshEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdjustableMirrorMeshEffect(AdjustableMirrorMeshEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1394};

/// @brief Field _flipped, offset: 0x28, size: 0x1, def value: None
 bool  ____flipped;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AdjustableMirrorMeshEffect, ____flipped) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AdjustableMirrorMeshEffect, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AdjustableMirrorMeshEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMirrorMeshEffect*, "VROSC", "AdjustableMirrorMeshEffect");
