#pragma once
// IWYU pragma private; include "VROSC/AdjustableMeshVertexEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__AdjustableMeshEffect_def.hpp"
CORDL_MODULE_EXPORT(AdjustableMeshVertexEffect)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace VROSC {
class AdjustableMeshVertexEffect;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AdjustableMeshVertexEffect);
// Dependencies UnityEngine.Vector3, VROSC.AdjustableMeshEffect
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AdjustableMeshVertexEffect
class CORDL_TYPE AdjustableMeshVertexEffect : public ::VROSC::AdjustableMeshEffect {
public:
// Declarations
/// @brief Field _originalPositions, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__originalPositions, put=__cordl_internal_set__originalPositions)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _originalPositions;

/// @brief Field _scale, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get__scale, put=__cordl_internal_set__scale)) ::UnityEngine::Vector3  _scale;

static inline ::VROSC::AdjustableMeshVertexEffect* New_ctor() ;

/// @brief Method SetScale, addr 0x17a7398, size 0xc, virtual false, abstract: false, final false
inline void SetScale(::UnityEngine::Vector3  scale) ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__originalPositions() const;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__originalPositions() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__scale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__scale() ;

constexpr void __cordl_internal_set__originalPositions(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr void __cordl_internal_set__scale(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x17a73a4, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdjustableMeshVertexEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshVertexEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdjustableMeshVertexEffect(AdjustableMeshVertexEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshVertexEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdjustableMeshVertexEffect(AdjustableMeshVertexEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1393};

/// @brief Field _scale, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____scale;

/// @brief Field _originalPositions, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  ____originalPositions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AdjustableMeshVertexEffect, ____scale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshVertexEffect, ____originalPositions) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AdjustableMeshVertexEffect, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AdjustableMeshVertexEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMeshVertexEffect*, "VROSC", "AdjustableMeshVertexEffect");
