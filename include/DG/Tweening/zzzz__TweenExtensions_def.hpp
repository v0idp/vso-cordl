#pragma once
// IWYU pragma private; include "DG/Tweening/TweenExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TweenExtensions)
namespace DG::Tweening {
class Tween;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class YieldInstruction;
}
// Forward declare root types
namespace DG::Tweening {
class TweenExtensions;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::TweenExtensions);
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.TweenExtensions
class CORDL_TYPE TweenExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method Complete, addr 0x18c639c, size 0x8, virtual false, abstract: false, final false
static inline void Complete(::DG::Tweening::Tween*  t) ;

/// @brief Method Complete, addr 0x18c63a4, size 0x1a0, virtual false, abstract: false, final false
static inline void Complete(::DG::Tweening::Tween*  t, bool  withCallbacks) ;

/// @brief Method CompletedLoops, addr 0x18c7d7c, size 0x7c, virtual false, abstract: false, final false
static inline int32_t CompletedLoops(::DG::Tweening::Tween*  t) ;

/// @brief Method Delay, addr 0x18c7df8, size 0x88, virtual false, abstract: false, final false
static inline float_t Delay(::DG::Tweening::Tween*  t) ;

/// @brief Method Duration, addr 0x18c7e80, size 0xb4, virtual false, abstract: false, final false
static inline float_t Duration(::DG::Tweening::Tween*  t, bool  includeLoops) ;

/// @brief Method Elapsed, addr 0x18c7f34, size 0xac, virtual false, abstract: false, final false
static inline float_t Elapsed(::DG::Tweening::Tween*  t, bool  includeLoops) ;

/// @brief Method ElapsedDirectionalPercentage, addr 0x18c80b0, size 0xc4, virtual false, abstract: false, final false
static inline float_t ElapsedDirectionalPercentage(::DG::Tweening::Tween*  t) ;

/// @brief Method ElapsedPercentage, addr 0x18c7fe0, size 0xd0, virtual false, abstract: false, final false
static inline float_t ElapsedPercentage(::DG::Tweening::Tween*  t, bool  includeLoops) ;

/// @brief Method Flip, addr 0x18c6544, size 0x168, virtual false, abstract: false, final false
static inline void Flip(::DG::Tweening::Tween*  t) ;

/// @brief Method ForceInit, addr 0x18c66ac, size 0x16c, virtual false, abstract: false, final false
static inline void ForceInit(::DG::Tweening::Tween*  t) ;

/// @brief Method Goto, addr 0x18c6818, size 0x1cc, virtual false, abstract: false, final false
static inline void Goto(::DG::Tweening::Tween*  t, float_t  to, bool  andPlay) ;

/// @brief Method GotoWaypoint, addr 0x18c74a0, size 0x368, virtual false, abstract: false, final false
static inline void GotoWaypoint(::DG::Tweening::Tween*  t, int32_t  waypointIndex, bool  andPlay) ;

/// @brief Method IsActive, addr 0x18c8174, size 0x18, virtual false, abstract: false, final false
static inline bool IsActive(::DG::Tweening::Tween*  t) ;

/// @brief Method IsBackwards, addr 0x18c818c, size 0x84, virtual false, abstract: false, final false
static inline bool IsBackwards(::DG::Tweening::Tween*  t) ;

/// @brief Method IsComplete, addr 0x18c8210, size 0x84, virtual false, abstract: false, final false
static inline bool IsComplete(::DG::Tweening::Tween*  t) ;

/// @brief Method IsInitialized, addr 0x18c8294, size 0x84, virtual false, abstract: false, final false
static inline bool IsInitialized(::DG::Tweening::Tween*  t) ;

/// @brief Method IsPlaying, addr 0x18c8318, size 0x84, virtual false, abstract: false, final false
static inline bool IsPlaying(::DG::Tweening::Tween*  t) ;

/// @brief Method Kill, addr 0x18c69e4, size 0x21c, virtual false, abstract: false, final false
static inline void Kill(::DG::Tweening::Tween*  t, bool  complete) ;

/// @brief Method Loops, addr 0x18c839c, size 0x7c, virtual false, abstract: false, final false
static inline int32_t Loops(::DG::Tweening::Tween*  t) ;

/// @brief Method PathGetDrawPoints, addr 0x18c86ac, size 0x240, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> PathGetDrawPoints(::DG::Tweening::Tween*  t, int32_t  subdivisionsXSegment) ;

/// @brief Method PathGetPoint, addr 0x18c8418, size 0x294, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 PathGetPoint(::DG::Tweening::Tween*  t, float_t  pathPercentage) ;

/// @brief Method PathLength, addr 0x18c88ec, size 0x24c, virtual false, abstract: false, final false
static inline float_t PathLength(::DG::Tweening::Tween*  t) ;

/// @brief Method Pause, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Pause(T  t) ;

/// @brief Method Play, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Play(T  t) ;

/// @brief Method PlayBackwards, addr 0x18c6c00, size 0x168, virtual false, abstract: false, final false
static inline void PlayBackwards(::DG::Tweening::Tween*  t) ;

/// @brief Method PlayForward, addr 0x18c6d68, size 0x168, virtual false, abstract: false, final false
static inline void PlayForward(::DG::Tweening::Tween*  t) ;

/// @brief Method Restart, addr 0x18c6ed0, size 0x190, virtual false, abstract: false, final false
static inline void Restart(::DG::Tweening::Tween*  t, bool  includeDelay, float_t  changeDelayTo) ;

/// @brief Method Rewind, addr 0x18c7060, size 0x170, virtual false, abstract: false, final false
static inline void Rewind(::DG::Tweening::Tween*  t, bool  includeDelay) ;

/// @brief Method SmoothRewind, addr 0x18c71d0, size 0x168, virtual false, abstract: false, final false
static inline void SmoothRewind(::DG::Tweening::Tween*  t) ;

/// @brief Method TogglePause, addr 0x18c7338, size 0x168, virtual false, abstract: false, final false
static inline void TogglePause(::DG::Tweening::Tween*  t) ;

/// @brief Method WaitForCompletion, addr 0x18c7808, size 0xe4, virtual false, abstract: false, final false
static inline ::UnityEngine::YieldInstruction* WaitForCompletion(::DG::Tweening::Tween*  t) ;

/// @brief Method WaitForElapsedLoops, addr 0x18c7ab4, size 0xec, virtual false, abstract: false, final false
static inline ::UnityEngine::YieldInstruction* WaitForElapsedLoops(::DG::Tweening::Tween*  t, int32_t  elapsedLoops) ;

/// @brief Method WaitForKill, addr 0x18c79d0, size 0xe4, virtual false, abstract: false, final false
static inline ::UnityEngine::YieldInstruction* WaitForKill(::DG::Tweening::Tween*  t) ;

/// @brief Method WaitForPosition, addr 0x18c7ba0, size 0xf8, virtual false, abstract: false, final false
static inline ::UnityEngine::YieldInstruction* WaitForPosition(::DG::Tweening::Tween*  t, float_t  position) ;

/// @brief Method WaitForRewind, addr 0x18c78ec, size 0xe4, virtual false, abstract: false, final false
static inline ::UnityEngine::YieldInstruction* WaitForRewind(::DG::Tweening::Tween*  t) ;

/// @brief Method WaitForStart, addr 0x18c7c98, size 0xe4, virtual false, abstract: false, final false
static inline ::UnityEngine::Coroutine* WaitForStart(::DG::Tweening::Tween*  t) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TweenExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TweenExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TweenExtensions(TweenExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TweenExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TweenExtensions(TweenExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10702};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::TweenExtensions, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening
NEED_NO_BOX(::DG::Tweening::TweenExtensions);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::TweenExtensions*, "DG.Tweening", "TweenExtensions");
