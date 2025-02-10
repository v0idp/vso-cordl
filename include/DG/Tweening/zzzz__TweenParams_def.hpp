#pragma once
// IWYU pragma private; include "DG/Tweening/TweenParams.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/zzzz__Ease_def.hpp"
#include "DG/Tweening/zzzz__LoopType_def.hpp"
#include "DG/Tweening/zzzz__UpdateType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TweenParams)
namespace DG::Tweening {
class EaseFunction;
}
namespace DG::Tweening {
struct Ease;
}
namespace DG::Tweening {
struct LoopType;
}
namespace DG::Tweening {
template<typename T>
class TweenCallback_1;
}
namespace DG::Tweening {
class TweenCallback;
}
namespace DG::Tweening {
struct UpdateType;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace DG::Tweening {
class TweenParams;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::TweenParams);
// Dependencies DG.Tweening.Ease, DG.Tweening.LoopType, DG.Tweening.UpdateType, System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.TweenParams
class CORDL_TYPE TweenParams : public ::System::Object {
public:
// Declarations
/// @brief Field Params, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Params, put=setStaticF_Params)) ::DG::Tweening::TweenParams*  Params;

/// @brief Field autoKill, offset 0x6a, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoKill, put=__cordl_internal_set_autoKill)) bool  autoKill;

/// @brief Field customEase, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_customEase, put=__cordl_internal_set_customEase)) ::DG::Tweening::EaseFunction*  customEase;

/// @brief Field delay, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay, put=__cordl_internal_set_delay)) float_t  delay;

/// @brief Field easeOvershootOrAmplitude, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_easeOvershootOrAmplitude, put=__cordl_internal_set_easeOvershootOrAmplitude)) float_t  easeOvershootOrAmplitude;

/// @brief Field easePeriod, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_easePeriod, put=__cordl_internal_set_easePeriod)) float_t  easePeriod;

/// @brief Field easeType, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_easeType, put=__cordl_internal_set_easeType)) ::DG::Tweening::Ease  easeType;

/// @brief Field id, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) ::System::Object*  id;

/// @brief Field isIndependentUpdate, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_isIndependentUpdate, put=__cordl_internal_set_isIndependentUpdate)) bool  isIndependentUpdate;

/// @brief Field isRecyclable, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRecyclable, put=__cordl_internal_set_isRecyclable)) bool  isRecyclable;

/// @brief Field isRelative, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRelative, put=__cordl_internal_set_isRelative)) bool  isRelative;

/// @brief Field isSpeedBased, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSpeedBased, put=__cordl_internal_set_isSpeedBased)) bool  isSpeedBased;

/// @brief Field loopType, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_loopType, put=__cordl_internal_set_loopType)) ::DG::Tweening::LoopType  loopType;

/// @brief Field loops, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_loops, put=__cordl_internal_set_loops)) int32_t  loops;

/// @brief Field onComplete, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_onComplete, put=__cordl_internal_set_onComplete)) ::DG::Tweening::TweenCallback*  onComplete;

/// @brief Field onKill, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_onKill, put=__cordl_internal_set_onKill)) ::DG::Tweening::TweenCallback*  onKill;

/// @brief Field onPlay, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPlay, put=__cordl_internal_set_onPlay)) ::DG::Tweening::TweenCallback*  onPlay;

/// @brief Field onRewind, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRewind, put=__cordl_internal_set_onRewind)) ::DG::Tweening::TweenCallback*  onRewind;

/// @brief Field onStart, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStart, put=__cordl_internal_set_onStart)) ::DG::Tweening::TweenCallback*  onStart;

/// @brief Field onStepComplete, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStepComplete, put=__cordl_internal_set_onStepComplete)) ::DG::Tweening::TweenCallback*  onStepComplete;

/// @brief Field onUpdate, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onUpdate, put=__cordl_internal_set_onUpdate)) ::DG::Tweening::TweenCallback*  onUpdate;

/// @brief Field onWaypointChange, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_onWaypointChange, put=__cordl_internal_set_onWaypointChange)) ::DG::Tweening::TweenCallback_1<int32_t>*  onWaypointChange;

/// @brief Field target, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::System::Object*  target;

/// @brief Field updateType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateType, put=__cordl_internal_set_updateType)) ::DG::Tweening::UpdateType  updateType;

/// @brief Method Clear, addr 0x18d5ab8, size 0xbc, virtual false, abstract: false, final false
inline ::DG::Tweening::TweenParams* Clear() ;

static inline ::DG::Tweening::TweenParams* New_ctor() ;

/// @brief Method OnComplete, addr 0x18d5ea8, size 0x8, virtual false, abstract: false, final false
inline ::DG::Tweening::TweenParams* OnComplete(::DG::Tweening::TweenCallback*  action) ;

/// @brief Method OnKill, addr 0x18d5eb0, size 0x8, virtual false, abstract: false, final false
inline ::DG::Tweening::TweenParams* OnKill(::DG::Tweening::TweenCallback*  action) ;

/// @brief Method OnPlay, addr 0x18d5e88, size 0x8, virtual false, abstract: false, final false
inline ::DG::Tweening::TweenParams* OnPlay(::DG::Tweening::TweenCallback*  action) ;

/// @brief Method OnRewind, addr 0x18d5e90, size 0x8, virtual false, abstract: false, final false
inline ::DG::Tweening::TweenParams* OnRewind(::DG::Tweening::TweenCallback*  action) ;

/// @brief Method OnStart, addr 0x18d5e80, size 0x8, virtual false, abstract: false, final false
inline ::DG::Tweening::TweenParams* OnStart(::DG::Tweening::TweenCallback*  action) ;

/// @brief Method OnStepComplete, addr 0x18d5ea0, size 0x8, virtual false, abstract: false, final false
inline ::DG::Tweening::TweenParams* OnStepComplete(::DG::Tweening::TweenCallback*  action) ;

/// @brief Method OnUpdate, addr 0x18d5e98, size 0x8, virtual false, abstract: false, final false
inline ::DG::Tweening::TweenParams* OnUpdate(::DG::Tweening::TweenCallback*  action) ;

/// @brief Method OnWaypointChange, addr 0x18d5eb8, size 0x8, virtual false, abstract: false, final false
inline ::DG::Tweening::TweenParams* OnWaypointChange(::DG::Tweening::TweenCallback_1<int32_t>*  action) ;

/// @brief Method SetAutoKill, addr 0x18d5b74, size 0xc, virtual false, abstract: false, final false
inline ::DG::Tweening::TweenParams* SetAutoKill(bool  autoKillOnCompletion) ;

/// @brief Method SetDelay, addr 0x18d5ec0, size 0x8, virtual false, abstract: false, final false
inline ::DG::Tweening::TweenParams* SetDelay(float_t  delay) ;

/// @brief Method SetEase, addr 0x18d5d20, size 0xbc, virtual false, abstract: false, final false
inline ::DG::Tweening::TweenParams* SetEase(::UnityEngine::AnimationCurve*  animCurve) ;

/// @brief Method SetEase, addr 0x18d5ddc, size 0x10, virtual false, abstract: false, final false
inline ::DG::Tweening::TweenParams* SetEase(::DG::Tweening::EaseFunction*  customEase) ;

/// @brief Method SetEase, addr 0x18d5c20, size 0x100, virtual false, abstract: false, final false
inline ::DG::Tweening::TweenParams* SetEase(::DG::Tweening::Ease  ease, ::System::Nullable_1<float_t>  overshootOrAmplitude, ::System::Nullable_1<float_t>  period) ;

/// @brief Method SetId, addr 0x18d5b80, size 0x8, virtual false, abstract: false, final false
inline ::DG::Tweening::TweenParams* SetId(::System::Object*  id) ;

/// @brief Method SetLoops, addr 0x18d5b90, size 0x90, virtual false, abstract: false, final false
inline ::DG::Tweening::TweenParams* SetLoops(int32_t  loops, ::System::Nullable_1<::DG::Tweening::LoopType>  loopType) ;

/// @brief Method SetRecyclable, addr 0x18d5dec, size 0xc, virtual false, abstract: false, final false
inline ::DG::Tweening::TweenParams* SetRecyclable(bool  recyclable) ;

/// @brief Method SetRelative, addr 0x18d5ec8, size 0xc, virtual false, abstract: false, final false
inline ::DG::Tweening::TweenParams* SetRelative(bool  isRelative) ;

/// @brief Method SetSpeedBased, addr 0x18d5ed4, size 0xc, virtual false, abstract: false, final false
inline ::DG::Tweening::TweenParams* SetSpeedBased(bool  isSpeedBased) ;

/// @brief Method SetTarget, addr 0x18d5b88, size 0x8, virtual false, abstract: false, final false
inline ::DG::Tweening::TweenParams* SetTarget(::System::Object*  target) ;

/// @brief Method SetUpdate, addr 0x18d5df8, size 0x78, virtual false, abstract: false, final false
inline ::DG::Tweening::TweenParams* SetUpdate(bool  isIndependentUpdate) ;

/// @brief Method SetUpdate, addr 0x18d5e70, size 0x10, virtual false, abstract: false, final false
inline ::DG::Tweening::TweenParams* SetUpdate(::DG::Tweening::UpdateType  updateType, bool  isIndependentUpdate) ;

constexpr bool const& __cordl_internal_get_autoKill() const;

constexpr bool& __cordl_internal_get_autoKill() ;

constexpr ::DG::Tweening::EaseFunction* const& __cordl_internal_get_customEase() const;

constexpr ::DG::Tweening::EaseFunction*& __cordl_internal_get_customEase() ;

constexpr float_t const& __cordl_internal_get_delay() const;

constexpr float_t& __cordl_internal_get_delay() ;

constexpr float_t const& __cordl_internal_get_easeOvershootOrAmplitude() const;

constexpr float_t& __cordl_internal_get_easeOvershootOrAmplitude() ;

constexpr float_t const& __cordl_internal_get_easePeriod() const;

constexpr float_t& __cordl_internal_get_easePeriod() ;

constexpr ::DG::Tweening::Ease const& __cordl_internal_get_easeType() const;

constexpr ::DG::Tweening::Ease& __cordl_internal_get_easeType() ;

constexpr ::System::Object* const& __cordl_internal_get_id() const;

constexpr ::System::Object*& __cordl_internal_get_id() ;

constexpr bool const& __cordl_internal_get_isIndependentUpdate() const;

constexpr bool& __cordl_internal_get_isIndependentUpdate() ;

constexpr bool const& __cordl_internal_get_isRecyclable() const;

constexpr bool& __cordl_internal_get_isRecyclable() ;

constexpr bool const& __cordl_internal_get_isRelative() const;

constexpr bool& __cordl_internal_get_isRelative() ;

constexpr bool const& __cordl_internal_get_isSpeedBased() const;

constexpr bool& __cordl_internal_get_isSpeedBased() ;

constexpr ::DG::Tweening::LoopType const& __cordl_internal_get_loopType() const;

constexpr ::DG::Tweening::LoopType& __cordl_internal_get_loopType() ;

constexpr int32_t const& __cordl_internal_get_loops() const;

constexpr int32_t& __cordl_internal_get_loops() ;

constexpr ::DG::Tweening::TweenCallback* const& __cordl_internal_get_onComplete() const;

constexpr ::DG::Tweening::TweenCallback*& __cordl_internal_get_onComplete() ;

constexpr ::DG::Tweening::TweenCallback* const& __cordl_internal_get_onKill() const;

constexpr ::DG::Tweening::TweenCallback*& __cordl_internal_get_onKill() ;

constexpr ::DG::Tweening::TweenCallback* const& __cordl_internal_get_onPlay() const;

constexpr ::DG::Tweening::TweenCallback*& __cordl_internal_get_onPlay() ;

constexpr ::DG::Tweening::TweenCallback* const& __cordl_internal_get_onRewind() const;

constexpr ::DG::Tweening::TweenCallback*& __cordl_internal_get_onRewind() ;

constexpr ::DG::Tweening::TweenCallback* const& __cordl_internal_get_onStart() const;

constexpr ::DG::Tweening::TweenCallback*& __cordl_internal_get_onStart() ;

constexpr ::DG::Tweening::TweenCallback* const& __cordl_internal_get_onStepComplete() const;

constexpr ::DG::Tweening::TweenCallback*& __cordl_internal_get_onStepComplete() ;

constexpr ::DG::Tweening::TweenCallback* const& __cordl_internal_get_onUpdate() const;

constexpr ::DG::Tweening::TweenCallback*& __cordl_internal_get_onUpdate() ;

constexpr ::DG::Tweening::TweenCallback_1<int32_t>* const& __cordl_internal_get_onWaypointChange() const;

constexpr ::DG::Tweening::TweenCallback_1<int32_t>*& __cordl_internal_get_onWaypointChange() ;

constexpr ::System::Object* const& __cordl_internal_get_target() const;

constexpr ::System::Object*& __cordl_internal_get_target() ;

constexpr ::DG::Tweening::UpdateType const& __cordl_internal_get_updateType() const;

constexpr ::DG::Tweening::UpdateType& __cordl_internal_get_updateType() ;

constexpr void __cordl_internal_set_autoKill(bool  value) ;

constexpr void __cordl_internal_set_customEase(::DG::Tweening::EaseFunction*  value) ;

constexpr void __cordl_internal_set_delay(float_t  value) ;

constexpr void __cordl_internal_set_easeOvershootOrAmplitude(float_t  value) ;

constexpr void __cordl_internal_set_easePeriod(float_t  value) ;

constexpr void __cordl_internal_set_easeType(::DG::Tweening::Ease  value) ;

constexpr void __cordl_internal_set_id(::System::Object*  value) ;

constexpr void __cordl_internal_set_isIndependentUpdate(bool  value) ;

constexpr void __cordl_internal_set_isRecyclable(bool  value) ;

constexpr void __cordl_internal_set_isRelative(bool  value) ;

constexpr void __cordl_internal_set_isSpeedBased(bool  value) ;

constexpr void __cordl_internal_set_loopType(::DG::Tweening::LoopType  value) ;

constexpr void __cordl_internal_set_loops(int32_t  value) ;

constexpr void __cordl_internal_set_onComplete(::DG::Tweening::TweenCallback*  value) ;

constexpr void __cordl_internal_set_onKill(::DG::Tweening::TweenCallback*  value) ;

constexpr void __cordl_internal_set_onPlay(::DG::Tweening::TweenCallback*  value) ;

constexpr void __cordl_internal_set_onRewind(::DG::Tweening::TweenCallback*  value) ;

constexpr void __cordl_internal_set_onStart(::DG::Tweening::TweenCallback*  value) ;

constexpr void __cordl_internal_set_onStepComplete(::DG::Tweening::TweenCallback*  value) ;

constexpr void __cordl_internal_set_onUpdate(::DG::Tweening::TweenCallback*  value) ;

constexpr void __cordl_internal_set_onWaypointChange(::DG::Tweening::TweenCallback_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_target(::System::Object*  value) ;

constexpr void __cordl_internal_set_updateType(::DG::Tweening::UpdateType  value) ;

/// @brief Method .ctor, addr 0x18d5a9c, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::DG::Tweening::TweenParams* getStaticF_Params() ;

static inline void setStaticF_Params(::DG::Tweening::TweenParams*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TweenParams() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TweenParams", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TweenParams(TweenParams && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TweenParams", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TweenParams(TweenParams const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10782};

/// @brief Field id, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ___id;

/// @brief Field target, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___target;

/// @brief Field updateType, offset: 0x20, size: 0x4, def value: None
 ::DG::Tweening::UpdateType  ___updateType;

/// @brief Field isIndependentUpdate, offset: 0x24, size: 0x1, def value: None
 bool  ___isIndependentUpdate;

/// @brief Field onStart, offset: 0x28, size: 0x8, def value: None
 ::DG::Tweening::TweenCallback*  ___onStart;

/// @brief Field onPlay, offset: 0x30, size: 0x8, def value: None
 ::DG::Tweening::TweenCallback*  ___onPlay;

/// @brief Field onRewind, offset: 0x38, size: 0x8, def value: None
 ::DG::Tweening::TweenCallback*  ___onRewind;

/// @brief Field onUpdate, offset: 0x40, size: 0x8, def value: None
 ::DG::Tweening::TweenCallback*  ___onUpdate;

/// @brief Field onStepComplete, offset: 0x48, size: 0x8, def value: None
 ::DG::Tweening::TweenCallback*  ___onStepComplete;

/// @brief Field onComplete, offset: 0x50, size: 0x8, def value: None
 ::DG::Tweening::TweenCallback*  ___onComplete;

/// @brief Field onKill, offset: 0x58, size: 0x8, def value: None
 ::DG::Tweening::TweenCallback*  ___onKill;

/// @brief Field onWaypointChange, offset: 0x60, size: 0x8, def value: None
 ::DG::Tweening::TweenCallback_1<int32_t>*  ___onWaypointChange;

/// @brief Field isRecyclable, offset: 0x68, size: 0x1, def value: None
 bool  ___isRecyclable;

/// @brief Field isSpeedBased, offset: 0x69, size: 0x1, def value: None
 bool  ___isSpeedBased;

/// @brief Field autoKill, offset: 0x6a, size: 0x1, def value: None
 bool  ___autoKill;

/// @brief Field loops, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___loops;

/// @brief Field loopType, offset: 0x70, size: 0x4, def value: None
 ::DG::Tweening::LoopType  ___loopType;

/// @brief Field delay, offset: 0x74, size: 0x4, def value: None
 float_t  ___delay;

/// @brief Field isRelative, offset: 0x78, size: 0x1, def value: None
 bool  ___isRelative;

/// @brief Field easeType, offset: 0x7c, size: 0x4, def value: None
 ::DG::Tweening::Ease  ___easeType;

/// @brief Field customEase, offset: 0x80, size: 0x8, def value: None
 ::DG::Tweening::EaseFunction*  ___customEase;

/// @brief Field easeOvershootOrAmplitude, offset: 0x88, size: 0x4, def value: None
 float_t  ___easeOvershootOrAmplitude;

/// @brief Field easePeriod, offset: 0x8c, size: 0x4, def value: None
 float_t  ___easePeriod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::TweenParams, ___id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::TweenParams, ___target) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::TweenParams, ___updateType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::TweenParams, ___isIndependentUpdate) == 0x24, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::TweenParams, ___onStart) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::TweenParams, ___onPlay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::TweenParams, ___onRewind) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::TweenParams, ___onUpdate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::TweenParams, ___onStepComplete) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::TweenParams, ___onComplete) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::TweenParams, ___onKill) == 0x58, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::TweenParams, ___onWaypointChange) == 0x60, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::TweenParams, ___isRecyclable) == 0x68, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::TweenParams, ___isSpeedBased) == 0x69, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::TweenParams, ___autoKill) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::TweenParams, ___loops) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::TweenParams, ___loopType) == 0x70, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::TweenParams, ___delay) == 0x74, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::TweenParams, ___isRelative) == 0x78, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::TweenParams, ___easeType) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::TweenParams, ___customEase) == 0x80, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::TweenParams, ___easeOvershootOrAmplitude) == 0x88, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::TweenParams, ___easePeriod) == 0x8c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::TweenParams, 0x90>, "Size mismatch!");

} // namespace end def DG::Tweening
NEED_NO_BOX(::DG::Tweening::TweenParams);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::TweenParams*, "DG.Tweening", "TweenParams");
