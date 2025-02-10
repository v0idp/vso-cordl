#pragma once
// IWYU pragma private; include "VROSC/AppearAnimationBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AppearAnimationBehaviour)
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
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace VROSC {
class AppearAnimationBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AppearAnimationBehaviour);
// Dependencies UnityEngine.Playables.PlayableBehaviour, UnityEngine.Quaternion
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AppearAnimationBehaviour
class CORDL_TYPE AppearAnimationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief Field _end, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__end, put=__cordl_internal_set__end)) ::UnityW<::UnityEngine::Transform>  _end;

/// @brief Field _positionCurve, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__positionCurve, put=__cordl_internal_set__positionCurve)) ::UnityEngine::AnimationCurve*  _positionCurve;

/// @brief Field _randomStartRotation, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__randomStartRotation, put=__cordl_internal_set__randomStartRotation)) ::UnityEngine::Quaternion  _randomStartRotation;

/// @brief Field _rotationCurve, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationCurve, put=__cordl_internal_set__rotationCurve)) ::UnityEngine::AnimationCurve*  _rotationCurve;

/// @brief Field _scaleCurve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__scaleCurve, put=__cordl_internal_set__scaleCurve)) ::UnityEngine::AnimationCurve*  _scaleCurve;

/// @brief Field _start, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__start, put=__cordl_internal_set__start)) ::UnityW<::UnityEngine::Transform>  _start;

/// @brief Field _target, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::Transform>  _target;

/// @brief Field animation, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_animation, put=__cordl_internal_set_animation)) float_t  animation;

static inline ::VROSC::AppearAnimationBehaviour* New_ctor() ;

/// @brief Method ProcessFrame, addr 0x17661b0, size 0x2d8, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method Setup, addr 0x17660d4, size 0xd4, virtual false, abstract: false, final false
inline void Setup(::UnityEngine::Transform*  target, ::UnityEngine::Transform*  start, ::UnityEngine::Transform*  end, ::UnityEngine::AnimationCurve*  positionCurve, ::UnityEngine::AnimationCurve*  rotationCurve, ::UnityEngine::AnimationCurve*  scaleCurve, float_t  randomMidPoint) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__end() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__end() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__positionCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__positionCurve() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__randomStartRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__randomStartRotation() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__rotationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__rotationCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__scaleCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__scaleCurve() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__start() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__start() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__target() ;

constexpr float_t const& __cordl_internal_get_animation() const;

constexpr float_t& __cordl_internal_get_animation() ;

constexpr void __cordl_internal_set__end(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__positionCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__randomStartRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__rotationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__scaleCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__start(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_animation(float_t  value) ;

/// @brief Method .ctor, addr 0x1766488, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppearAnimationBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppearAnimationBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AppearAnimationBehaviour(AppearAnimationBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppearAnimationBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppearAnimationBehaviour(AppearAnimationBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1184};

/// @brief Field _positionCurve, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____positionCurve;

/// @brief Field _rotationCurve, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____rotationCurve;

/// @brief Field _scaleCurve, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____scaleCurve;

/// @brief Field _target, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____target;

/// @brief Field _start, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____start;

/// @brief Field _end, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____end;

/// @brief Field _randomStartRotation, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____randomStartRotation;

/// @brief Field animation, offset: 0x50, size: 0x4, def value: None
 float_t  ___animation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AppearAnimationBehaviour, ____positionCurve) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppearAnimationBehaviour, ____rotationCurve) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppearAnimationBehaviour, ____scaleCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppearAnimationBehaviour, ____target) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppearAnimationBehaviour, ____start) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppearAnimationBehaviour, ____end) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppearAnimationBehaviour, ____randomStartRotation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppearAnimationBehaviour, ___animation) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AppearAnimationBehaviour, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AppearAnimationBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AppearAnimationBehaviour*, "VROSC", "AppearAnimationBehaviour");
