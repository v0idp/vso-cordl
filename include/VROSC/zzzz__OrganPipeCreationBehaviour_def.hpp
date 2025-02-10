#pragma once
// IWYU pragma private; include "VROSC/OrganPipeCreationBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OrganPipeCreationBehaviour)
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace VROSC {
class OrganPipeRow;
}
// Forward declare root types
namespace VROSC {
class OrganPipeCreationBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::OrganPipeCreationBehaviour);
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.OrganPipeCreationBehaviour
class CORDL_TYPE OrganPipeCreationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief Field Appear, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Appear, put=__cordl_internal_set_Appear)) float_t  Appear;

/// @brief Field _animateionEndCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__animateionEndCurve, put=__cordl_internal_set__animateionEndCurve)) ::UnityEngine::AnimationCurve*  _animateionEndCurve;

/// @brief Field _animationStartCurve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__animationStartCurve, put=__cordl_internal_set__animationStartCurve)) ::UnityEngine::AnimationCurve*  _animationStartCurve;

/// @brief Field _row, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__row, put=__cordl_internal_set__row)) ::UnityW<::VROSC::OrganPipeRow>  _row;

/// @brief Method GetAnimationValue, addr 0x176c77c, size 0x88, virtual false, abstract: false, final false
inline float_t GetAnimationValue(float_t  note, float_t  time) ;

static inline ::VROSC::OrganPipeCreationBehaviour* New_ctor() ;

/// @brief Method OnPlayableDestroy, addr 0x176c804, size 0xcc, virtual false, abstract: false, final false
inline void OnPlayableDestroy() ;

/// @brief Method ProcessFrame, addr 0x176c630, size 0x14c, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method Setup, addr 0x176c530, size 0xf8, virtual false, abstract: false, final false
inline void Setup(::VROSC::OrganPipeRow*  row, ::UnityEngine::AnimationCurve*  animationStartCurve, ::UnityEngine::AnimationCurve*  animateionEndCurve) ;

constexpr float_t const& __cordl_internal_get_Appear() const;

constexpr float_t& __cordl_internal_get_Appear() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__animateionEndCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__animateionEndCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__animationStartCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__animationStartCurve() ;

constexpr ::UnityW<::VROSC::OrganPipeRow> const& __cordl_internal_get__row() const;

constexpr ::UnityW<::VROSC::OrganPipeRow>& __cordl_internal_get__row() ;

constexpr void __cordl_internal_set_Appear(float_t  value) ;

constexpr void __cordl_internal_set__animateionEndCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__animationStartCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__row(::UnityW<::VROSC::OrganPipeRow>  value) ;

/// @brief Method .ctor, addr 0x176c8d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OrganPipeCreationBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OrganPipeCreationBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrganPipeCreationBehaviour(OrganPipeCreationBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrganPipeCreationBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrganPipeCreationBehaviour(OrganPipeCreationBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1218};

/// @brief Field _row, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::OrganPipeRow>  ____row;

/// @brief Field Appear, offset: 0x18, size: 0x4, def value: None
 float_t  ___Appear;

/// @brief Field _animationStartCurve, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____animationStartCurve;

/// @brief Field _animateionEndCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____animateionEndCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::OrganPipeCreationBehaviour, ____row) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeCreationBehaviour, ___Appear) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeCreationBehaviour, ____animationStartCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeCreationBehaviour, ____animateionEndCurve) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::OrganPipeCreationBehaviour, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::OrganPipeCreationBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OrganPipeCreationBehaviour*, "VROSC", "OrganPipeCreationBehaviour");
