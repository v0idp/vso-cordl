#pragma once
// IWYU pragma private; include "UnityEngine/AnimationClip.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Motion_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AnimationClip)
// Forward declare root types
namespace UnityEngine {
class AnimationClip;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AnimationClip);
// Dependencies UnityEngine.Motion
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AnimationClip
class CORDL_TYPE AnimationClip : public ::UnityEngine::Motion {
public:
// Declarations
 __declspec(property(get=get_empty)) bool  empty;

 __declspec(property(get=get_frameRate, put=set_frameRate)) float_t  frameRate;

 __declspec(property(get=get_hasGenericRootTransform)) bool  hasGenericRootTransform;

 __declspec(property(get=get_hasMotionCurves)) bool  hasMotionCurves;

 __declspec(property(get=get_hasRootCurves)) bool  hasRootCurves;

 __declspec(property(get=get_hasRootMotion)) bool  hasRootMotion;

 __declspec(property(get=get_legacy, put=set_legacy)) bool  legacy;

 __declspec(property(get=get_length)) float_t  length;

/// @brief Method Internal_CreateAnimationClip, addr 0x2f52e78, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_CreateAnimationClip(::UnityEngine::AnimationClip*  self) ;

static inline ::UnityEngine::AnimationClip* New_ctor() ;

/// @brief Method .ctor, addr 0x2f52de0, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_empty, addr 0x2f52ff8, size 0x3c, virtual false, abstract: false, final false
inline bool get_empty() ;

/// @brief Method get_frameRate, addr 0x2f52ef0, size 0x3c, virtual false, abstract: false, final false
inline float_t get_frameRate() ;

/// @brief Method get_hasGenericRootTransform, addr 0x2f53034, size 0x3c, virtual false, abstract: false, final false
inline bool get_hasGenericRootTransform() ;

/// @brief Method get_hasMotionCurves, addr 0x2f53070, size 0x3c, virtual false, abstract: false, final false
inline bool get_hasMotionCurves() ;

/// @brief Method get_hasRootCurves, addr 0x2f530ac, size 0x3c, virtual false, abstract: false, final false
inline bool get_hasRootCurves() ;

/// @brief Method get_hasRootMotion, addr 0x2f530e8, size 0x3c, virtual false, abstract: false, final false
inline bool get_hasRootMotion() ;

/// @brief Method get_legacy, addr 0x2f52f78, size 0x3c, virtual false, abstract: false, final false
inline bool get_legacy() ;

/// @brief Method get_length, addr 0x2f52eb4, size 0x3c, virtual false, abstract: false, final false
inline float_t get_length() ;

/// @brief Method set_frameRate, addr 0x2f52f2c, size 0x4c, virtual false, abstract: false, final false
inline void set_frameRate(float_t  value) ;

/// @brief Method set_legacy, addr 0x2f52fb4, size 0x44, virtual false, abstract: false, final false
inline void set_legacy(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationClip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationClip", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationClip(AnimationClip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationClip", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationClip(AnimationClip const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12028};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimationClip, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AnimationClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationClip*, "UnityEngine", "AnimationClip");
