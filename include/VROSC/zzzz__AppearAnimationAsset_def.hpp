#pragma once
// IWYU pragma private; include "VROSC/AppearAnimationAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AppearAnimationAsset)
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class AppearAnimationBehaviour;
}
// Forward declare root types
namespace VROSC {
class AppearAnimationAsset;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AppearAnimationAsset);
// Dependencies UnityEngine.ExposedReference`1<T>, UnityEngine.Playables.PlayableAsset
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AppearAnimationAsset
class CORDL_TYPE AppearAnimationAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Field template, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_template, put=__cordl_internal_set__cordl_template)) ::VROSC::AppearAnimationBehaviour*  _cordl_template;

/// @brief Field _end, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__end, put=__cordl_internal_set__end)) ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  _end;

/// @brief Field _positionCurve, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__positionCurve, put=__cordl_internal_set__positionCurve)) ::UnityEngine::AnimationCurve*  _positionCurve;

/// @brief Field _randomStartRotation, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__randomStartRotation, put=__cordl_internal_set__randomStartRotation)) float_t  _randomStartRotation;

/// @brief Field _rotationCurve, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationCurve, put=__cordl_internal_set__rotationCurve)) ::UnityEngine::AnimationCurve*  _rotationCurve;

/// @brief Field _scaleCurve, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__scaleCurve, put=__cordl_internal_set__scaleCurve)) ::UnityEngine::AnimationCurve*  _scaleCurve;

/// @brief Field _start, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__start, put=__cordl_internal_set__start)) ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  _start;

/// @brief Field _target, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  _target;

/// @brief Method CreatePlayable, addr 0x1765f48, size 0x18c, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner) ;

static inline ::VROSC::AppearAnimationAsset* New_ctor() ;

constexpr ::VROSC::AppearAnimationBehaviour* const& __cordl_internal_get__cordl_template() const;

constexpr ::VROSC::AppearAnimationBehaviour*& __cordl_internal_get__cordl_template() ;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__end() const;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__end() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__positionCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__positionCurve() ;

constexpr float_t const& __cordl_internal_get__randomStartRotation() const;

constexpr float_t& __cordl_internal_get__randomStartRotation() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__rotationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__rotationCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__scaleCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__scaleCurve() ;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__start() const;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__start() ;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__target() const;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__cordl_template(::VROSC::AppearAnimationBehaviour*  value) ;

constexpr void __cordl_internal_set__end(::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set__positionCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__randomStartRotation(float_t  value) ;

constexpr void __cordl_internal_set__rotationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__scaleCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__start(::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set__target(::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  value) ;

/// @brief Method .ctor, addr 0x17661a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppearAnimationAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppearAnimationAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AppearAnimationAsset(AppearAnimationAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppearAnimationAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppearAnimationAsset(AppearAnimationAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1183};

/// @brief Field template, offset: 0x18, size: 0x8, def value: None
 ::VROSC::AppearAnimationBehaviour*  ____cordl_template;

/// @brief Field _target, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  ____target;

/// @brief Field _start, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  ____start;

/// @brief Field _end, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  ____end;

/// @brief Field _positionCurve, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____positionCurve;

/// @brief Field _rotationCurve, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____rotationCurve;

/// @brief Field _scaleCurve, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____scaleCurve;

/// @brief Field _randomStartRotation, offset: 0x68, size: 0x4, def value: None
 float_t  ____randomStartRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AppearAnimationAsset, ____cordl_template) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppearAnimationAsset, ____target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppearAnimationAsset, ____start) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppearAnimationAsset, ____end) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppearAnimationAsset, ____positionCurve) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppearAnimationAsset, ____rotationCurve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppearAnimationAsset, ____scaleCurve) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppearAnimationAsset, ____randomStartRotation) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AppearAnimationAsset, 0x70>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AppearAnimationAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AppearAnimationAsset*, "VROSC", "AppearAnimationAsset");
