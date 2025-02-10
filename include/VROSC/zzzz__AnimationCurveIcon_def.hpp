#pragma once
// IWYU pragma private; include "VROSC/AnimationCurveIcon.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AnimationCurveIcon)
namespace UnityEngine {
class AnimationCurve;
}
namespace VROSC {
class ProceduralAdjustableMesh;
}
// Forward declare root types
namespace VROSC {
class AnimationCurveIcon;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AnimationCurveIcon);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AnimationCurveIcon
class CORDL_TYPE AnimationCurveIcon : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _animationCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__animationCurve, put=__cordl_internal_set__animationCurve)) ::UnityEngine::AnimationCurve*  _animationCurve;

/// @brief Field _mesh, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__mesh, put=__cordl_internal_set__mesh)) ::UnityW<::VROSC::ProceduralAdjustableMesh>  _mesh;

/// @brief Method MeshUpdated, addr 0x17aa6bc, size 0x328, virtual false, abstract: false, final false
inline void MeshUpdated() ;

static inline ::VROSC::AnimationCurveIcon* New_ctor() ;

/// @brief Method OnDisable, addr 0x17aa9e4, size 0xfc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x17aa598, size 0x124, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetAnimationCurve, addr 0x17aaae0, size 0x30, virtual false, abstract: false, final false
inline void SetAnimationCurve(::UnityEngine::AnimationCurve*  animationCurve) ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__animationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__animationCurve() ;

constexpr ::UnityW<::VROSC::ProceduralAdjustableMesh> const& __cordl_internal_get__mesh() const;

constexpr ::UnityW<::VROSC::ProceduralAdjustableMesh>& __cordl_internal_get__mesh() ;

constexpr void __cordl_internal_set__animationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__mesh(::UnityW<::VROSC::ProceduralAdjustableMesh>  value) ;

/// @brief Method .ctor, addr 0x17aab10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationCurveIcon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationCurveIcon", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationCurveIcon(AnimationCurveIcon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationCurveIcon", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationCurveIcon(AnimationCurveIcon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1412};

/// @brief Field _mesh, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::ProceduralAdjustableMesh>  ____mesh;

/// @brief Field _animationCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____animationCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AnimationCurveIcon, ____mesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimationCurveIcon, ____animationCurve) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AnimationCurveIcon, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AnimationCurveIcon);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AnimationCurveIcon*, "VROSC", "AnimationCurveIcon");
