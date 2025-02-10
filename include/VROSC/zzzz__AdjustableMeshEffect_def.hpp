#pragma once
// IWYU pragma private; include "VROSC/AdjustableMeshEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AdjustableMeshEffect)
namespace VROSC {
class AdjustableMesh;
}
// Forward declare root types
namespace VROSC {
class AdjustableMeshEffect;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AdjustableMeshEffect);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AdjustableMeshEffect
class CORDL_TYPE AdjustableMeshEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _adjustableMesh, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__adjustableMesh, put=__cordl_internal_set__adjustableMesh)) ::UnityW<::VROSC::AdjustableMesh>  _adjustableMesh;

static inline ::VROSC::AdjustableMeshEffect* New_ctor() ;

/// @brief Method OnCreation, addr 0x17a6ed0, size 0x4, virtual true, abstract: false, final false
inline void OnCreation() ;

/// @brief Method OnDisable, addr 0x17a6d7c, size 0x154, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x17a6c28, size 0x154, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnMeshVisible, addr 0x17a6bf4, size 0x4, virtual true, abstract: false, final false
inline void OnMeshVisible() ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__adjustableMesh() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__adjustableMesh() ;

constexpr void __cordl_internal_set__adjustableMesh(::UnityW<::VROSC::AdjustableMesh>  value) ;

/// @brief Method .ctor, addr 0x17a6c20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdjustableMeshEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdjustableMeshEffect(AdjustableMeshEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdjustableMeshEffect(AdjustableMeshEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1389};

/// @brief Field _adjustableMesh, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____adjustableMesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AdjustableMeshEffect, ____adjustableMesh) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AdjustableMeshEffect, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AdjustableMeshEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMeshEffect*, "VROSC", "AdjustableMeshEffect");
