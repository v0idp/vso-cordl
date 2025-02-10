#pragma once
// IWYU pragma private; include "DG/Tweening/Tween.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Core/Enums/zzzz__SpecialStartupMode_def.hpp"
#include "DG/Tweening/Core/zzzz__ABSSequentiable_def.hpp"
#include "DG/Tweening/zzzz__Ease_def.hpp"
#include "DG/Tweening/zzzz__LoopType_def.hpp"
#include "DG/Tweening/zzzz__UpdateType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Tween)
namespace DG::Tweening::Core::Enums {
struct UpdateMode;
}
namespace DG::Tweening::Core::Enums {
struct UpdateNotice;
}
namespace DG::Tweening {
class EaseFunction;
}
namespace DG::Tweening {
class Sequence;
}
namespace DG::Tweening {
template<typename T>
class TweenCallback_1;
}
namespace DG::Tweening {
class TweenCallback;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace DG::Tweening {
class Tween;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Tween);
// Dependencies DG.Tweening.Core.ABSSequentiable, DG.Tweening.Core.Enums.SpecialStartupMode, DG.Tweening.Ease, DG.Tweening.LoopType, DG.Tweening.UpdateType
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.Tween
class CORDL_TYPE Tween : public ::DG::Tweening::Core::ABSSequentiable {
public:
// Declarations
/// @brief Field <active>k__BackingField, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get__active_k__BackingField, put=__cordl_internal_set__active_k__BackingField)) bool  _active_k__BackingField;

/// @brief Field <isRelative>k__BackingField, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRelative_k__BackingField, put=__cordl_internal_set__isRelative_k__BackingField)) bool  _isRelative_k__BackingField;

/// @brief Field <playedOnce>k__BackingField, offset 0x102, size 0x1 
 __declspec(property(get=__cordl_internal_get__playedOnce_k__BackingField, put=__cordl_internal_set__playedOnce_k__BackingField)) bool  _playedOnce_k__BackingField;

/// @brief Field <position>k__BackingField, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get__position_k__BackingField, put=__cordl_internal_set__position_k__BackingField)) float_t  _position_k__BackingField;

 __declspec(property(get=get_active, put=set_active)) bool  active;

/// @brief Field activeId, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_activeId, put=__cordl_internal_set_activeId)) int32_t  activeId;

/// @brief Field autoKill, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoKill, put=__cordl_internal_set_autoKill)) bool  autoKill;

/// @brief Field completedLoops, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedLoops, put=__cordl_internal_set_completedLoops)) int32_t  completedLoops;

/// @brief Field creationLocked, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get_creationLocked, put=__cordl_internal_set_creationLocked)) bool  creationLocked;

/// @brief Field customEase, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_customEase, put=__cordl_internal_set_customEase)) ::DG::Tweening::EaseFunction*  customEase;

/// @brief Field debugTargetId, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugTargetId, put=__cordl_internal_set_debugTargetId)) ::StringW  debugTargetId;

/// @brief Field delay, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay, put=__cordl_internal_set_delay)) float_t  delay;

/// @brief Field delayComplete, offset 0x118, size 0x1 
 __declspec(property(get=__cordl_internal_get_delayComplete, put=__cordl_internal_set_delayComplete)) bool  delayComplete;

/// @brief Field duration, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field easeOvershootOrAmplitude, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_easeOvershootOrAmplitude, put=__cordl_internal_set_easeOvershootOrAmplitude)) float_t  easeOvershootOrAmplitude;

/// @brief Field easePeriod, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_easePeriod, put=__cordl_internal_set_easePeriod)) float_t  easePeriod;

/// @brief Field easeType, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_easeType, put=__cordl_internal_set_easeType)) ::DG::Tweening::Ease  easeType;

/// @brief Field elapsedDelay, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_elapsedDelay, put=__cordl_internal_set_elapsedDelay)) float_t  elapsedDelay;

/// @brief Field fullDuration, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_fullDuration, put=__cordl_internal_set_fullDuration)) float_t  fullDuration;

 __declspec(property(get=get_fullPosition, put=set_fullPosition)) float_t  fullPosition;

/// @brief Field id, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) ::System::Object*  id;

/// @brief Field intId, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_intId, put=__cordl_internal_set_intId)) int32_t  intId;

/// @brief Field isBackwards, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isBackwards, put=__cordl_internal_set_isBackwards)) bool  isBackwards;

/// @brief Field isBlendable, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_isBlendable, put=__cordl_internal_set_isBlendable)) bool  isBlendable;

/// @brief Field isComplete, offset 0x111, size 0x1 
 __declspec(property(get=__cordl_internal_get_isComplete, put=__cordl_internal_set_isComplete)) bool  isComplete;

/// @brief Field isFrom, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_isFrom, put=__cordl_internal_set_isFrom)) bool  isFrom;

/// @brief Field isIndependentUpdate, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_isIndependentUpdate, put=__cordl_internal_set_isIndependentUpdate)) bool  isIndependentUpdate;

/// @brief Field isPlaying, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPlaying, put=__cordl_internal_set_isPlaying)) bool  isPlaying;

/// @brief Field isRecyclable, offset 0x9a, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRecyclable, put=__cordl_internal_set_isRecyclable)) bool  isRecyclable;

 __declspec(property(get=get_isRelative, put=set_isRelative)) bool  isRelative;

/// @brief Field isSequenced, offset 0xe9, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSequenced, put=__cordl_internal_set_isSequenced)) bool  isSequenced;

/// @brief Field isSpeedBased, offset 0x9b, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSpeedBased, put=__cordl_internal_set_isSpeedBased)) bool  isSpeedBased;

/// @brief Field loopType, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_loopType, put=__cordl_internal_set_loopType)) ::DG::Tweening::LoopType  loopType;

/// @brief Field loops, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_loops, put=__cordl_internal_set_loops)) int32_t  loops;

/// @brief Field miscInt, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get_miscInt, put=__cordl_internal_set_miscInt)) int32_t  miscInt;

/// @brief Field onComplete, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_onComplete, put=__cordl_internal_set_onComplete)) ::DG::Tweening::TweenCallback*  onComplete;

/// @brief Field onKill, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_onKill, put=__cordl_internal_set_onKill)) ::DG::Tweening::TweenCallback*  onKill;

/// @brief Field onPause, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPause, put=__cordl_internal_set_onPause)) ::DG::Tweening::TweenCallback*  onPause;

/// @brief Field onPlay, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPlay, put=__cordl_internal_set_onPlay)) ::DG::Tweening::TweenCallback*  onPlay;

/// @brief Field onRewind, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRewind, put=__cordl_internal_set_onRewind)) ::DG::Tweening::TweenCallback*  onRewind;

/// @brief Field onStepComplete, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStepComplete, put=__cordl_internal_set_onStepComplete)) ::DG::Tweening::TweenCallback*  onStepComplete;

/// @brief Field onUpdate, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_onUpdate, put=__cordl_internal_set_onUpdate)) ::DG::Tweening::TweenCallback*  onUpdate;

/// @brief Field onWaypointChange, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_onWaypointChange, put=__cordl_internal_set_onWaypointChange)) ::DG::Tweening::TweenCallback_1<int32_t>*  onWaypointChange;

 __declspec(property(get=get_playedOnce, put=set_playedOnce)) bool  playedOnce;

 __declspec(property(get=get_position, put=set_position)) float_t  position;

/// @brief Field sequenceParent, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_sequenceParent, put=__cordl_internal_set_sequenceParent)) ::DG::Tweening::Sequence*  sequenceParent;

/// @brief Field specialStartupMode, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_specialStartupMode, put=__cordl_internal_set_specialStartupMode)) ::DG::Tweening::Core::Enums::SpecialStartupMode  specialStartupMode;

/// @brief Field startupDone, offset 0x101, size 0x1 
 __declspec(property(get=__cordl_internal_get_startupDone, put=__cordl_internal_set_startupDone)) bool  startupDone;

/// @brief Field stringId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_stringId, put=__cordl_internal_set_stringId)) ::StringW  stringId;

/// @brief Field target, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::System::Object*  target;

/// @brief Field timeScale, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeScale, put=__cordl_internal_set_timeScale)) float_t  timeScale;

/// @brief Field typeofT1, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_typeofT1, put=__cordl_internal_set_typeofT1)) ::System::Type*  typeofT1;

/// @brief Field typeofT2, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_typeofT2, put=__cordl_internal_set_typeofT2)) ::System::Type*  typeofT2;

/// @brief Field typeofTPlugOptions, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_typeofTPlugOptions, put=__cordl_internal_set_typeofTPlugOptions)) ::System::Type*  typeofTPlugOptions;

/// @brief Field updateType, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateType, put=__cordl_internal_set_updateType)) ::DG::Tweening::UpdateType  updateType;

/// @brief Method ApplyTween, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ApplyTween(float_t  prevPosition, int32_t  prevCompletedLoops, int32_t  newCompletedSteps, bool  useInversePosition, ::DG::Tweening::Core::Enums::UpdateMode  updateMode, ::DG::Tweening::Core::Enums::UpdateNotice  updateNotice) ;

/// @brief Method DoGoto, addr 0x18d67c0, size 0x358, virtual false, abstract: false, final false
static inline bool DoGoto(::DG::Tweening::Tween*  t, float_t  toPosition, int32_t  toCompletedLoops, ::DG::Tweening::Core::Enums::UpdateMode  updateMode) ;

static inline ::DG::Tweening::Tween* New_ctor() ;

/// @brief Method OnTweenCallback, addr 0x18c9fb8, size 0x1f8, virtual false, abstract: false, final false
static inline bool OnTweenCallback(::DG::Tweening::TweenCallback*  callback, ::DG::Tweening::Tween*  t) ;

/// @brief Method OnTweenCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool OnTweenCallback(::DG::Tweening::TweenCallback_1<T>*  callback, ::DG::Tweening::Tween*  t, T  param) ;

/// @brief Method Reset, addr 0x18c91ac, size 0x8c, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Startup, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Startup() ;

/// @brief Method UpdateDelay, addr 0x18d67b8, size 0x8, virtual true, abstract: false, final false
inline float_t UpdateDelay(float_t  elapsed) ;

/// @brief Method Validate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Validate() ;

constexpr bool const& __cordl_internal_get__active_k__BackingField() const;

constexpr bool& __cordl_internal_get__active_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isRelative_k__BackingField() const;

constexpr bool& __cordl_internal_get__isRelative_k__BackingField() ;

constexpr bool const& __cordl_internal_get__playedOnce_k__BackingField() const;

constexpr bool& __cordl_internal_get__playedOnce_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__position_k__BackingField() const;

constexpr float_t& __cordl_internal_get__position_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_activeId() const;

constexpr int32_t& __cordl_internal_get_activeId() ;

constexpr bool const& __cordl_internal_get_autoKill() const;

constexpr bool& __cordl_internal_get_autoKill() ;

constexpr int32_t const& __cordl_internal_get_completedLoops() const;

constexpr int32_t& __cordl_internal_get_completedLoops() ;

constexpr bool const& __cordl_internal_get_creationLocked() const;

constexpr bool& __cordl_internal_get_creationLocked() ;

constexpr ::DG::Tweening::EaseFunction* const& __cordl_internal_get_customEase() const;

constexpr ::DG::Tweening::EaseFunction*& __cordl_internal_get_customEase() ;

constexpr ::StringW const& __cordl_internal_get_debugTargetId() const;

constexpr ::StringW& __cordl_internal_get_debugTargetId() ;

constexpr float_t const& __cordl_internal_get_delay() const;

constexpr float_t& __cordl_internal_get_delay() ;

constexpr bool const& __cordl_internal_get_delayComplete() const;

constexpr bool& __cordl_internal_get_delayComplete() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr float_t const& __cordl_internal_get_easeOvershootOrAmplitude() const;

constexpr float_t& __cordl_internal_get_easeOvershootOrAmplitude() ;

constexpr float_t const& __cordl_internal_get_easePeriod() const;

constexpr float_t& __cordl_internal_get_easePeriod() ;

constexpr ::DG::Tweening::Ease const& __cordl_internal_get_easeType() const;

constexpr ::DG::Tweening::Ease& __cordl_internal_get_easeType() ;

constexpr float_t const& __cordl_internal_get_elapsedDelay() const;

constexpr float_t& __cordl_internal_get_elapsedDelay() ;

constexpr float_t const& __cordl_internal_get_fullDuration() const;

constexpr float_t& __cordl_internal_get_fullDuration() ;

constexpr ::System::Object* const& __cordl_internal_get_id() const;

constexpr ::System::Object*& __cordl_internal_get_id() ;

constexpr int32_t const& __cordl_internal_get_intId() const;

constexpr int32_t& __cordl_internal_get_intId() ;

constexpr bool const& __cordl_internal_get_isBackwards() const;

constexpr bool& __cordl_internal_get_isBackwards() ;

constexpr bool const& __cordl_internal_get_isBlendable() const;

constexpr bool& __cordl_internal_get_isBlendable() ;

constexpr bool const& __cordl_internal_get_isComplete() const;

constexpr bool& __cordl_internal_get_isComplete() ;

constexpr bool const& __cordl_internal_get_isFrom() const;

constexpr bool& __cordl_internal_get_isFrom() ;

constexpr bool const& __cordl_internal_get_isIndependentUpdate() const;

constexpr bool& __cordl_internal_get_isIndependentUpdate() ;

constexpr bool const& __cordl_internal_get_isPlaying() const;

constexpr bool& __cordl_internal_get_isPlaying() ;

constexpr bool const& __cordl_internal_get_isRecyclable() const;

constexpr bool& __cordl_internal_get_isRecyclable() ;

constexpr bool const& __cordl_internal_get_isSequenced() const;

constexpr bool& __cordl_internal_get_isSequenced() ;

constexpr bool const& __cordl_internal_get_isSpeedBased() const;

constexpr bool& __cordl_internal_get_isSpeedBased() ;

constexpr ::DG::Tweening::LoopType const& __cordl_internal_get_loopType() const;

constexpr ::DG::Tweening::LoopType& __cordl_internal_get_loopType() ;

constexpr int32_t const& __cordl_internal_get_loops() const;

constexpr int32_t& __cordl_internal_get_loops() ;

constexpr int32_t const& __cordl_internal_get_miscInt() const;

constexpr int32_t& __cordl_internal_get_miscInt() ;

constexpr ::DG::Tweening::TweenCallback* const& __cordl_internal_get_onComplete() const;

constexpr ::DG::Tweening::TweenCallback*& __cordl_internal_get_onComplete() ;

constexpr ::DG::Tweening::TweenCallback* const& __cordl_internal_get_onKill() const;

constexpr ::DG::Tweening::TweenCallback*& __cordl_internal_get_onKill() ;

constexpr ::DG::Tweening::TweenCallback* const& __cordl_internal_get_onPause() const;

constexpr ::DG::Tweening::TweenCallback*& __cordl_internal_get_onPause() ;

constexpr ::DG::Tweening::TweenCallback* const& __cordl_internal_get_onPlay() const;

constexpr ::DG::Tweening::TweenCallback*& __cordl_internal_get_onPlay() ;

constexpr ::DG::Tweening::TweenCallback* const& __cordl_internal_get_onRewind() const;

constexpr ::DG::Tweening::TweenCallback*& __cordl_internal_get_onRewind() ;

constexpr ::DG::Tweening::TweenCallback* const& __cordl_internal_get_onStepComplete() const;

constexpr ::DG::Tweening::TweenCallback*& __cordl_internal_get_onStepComplete() ;

constexpr ::DG::Tweening::TweenCallback* const& __cordl_internal_get_onUpdate() const;

constexpr ::DG::Tweening::TweenCallback*& __cordl_internal_get_onUpdate() ;

constexpr ::DG::Tweening::TweenCallback_1<int32_t>* const& __cordl_internal_get_onWaypointChange() const;

constexpr ::DG::Tweening::TweenCallback_1<int32_t>*& __cordl_internal_get_onWaypointChange() ;

constexpr ::DG::Tweening::Sequence* const& __cordl_internal_get_sequenceParent() const;

constexpr ::DG::Tweening::Sequence*& __cordl_internal_get_sequenceParent() ;

constexpr ::DG::Tweening::Core::Enums::SpecialStartupMode const& __cordl_internal_get_specialStartupMode() const;

constexpr ::DG::Tweening::Core::Enums::SpecialStartupMode& __cordl_internal_get_specialStartupMode() ;

constexpr bool const& __cordl_internal_get_startupDone() const;

constexpr bool& __cordl_internal_get_startupDone() ;

constexpr ::StringW const& __cordl_internal_get_stringId() const;

constexpr ::StringW& __cordl_internal_get_stringId() ;

constexpr ::System::Object* const& __cordl_internal_get_target() const;

constexpr ::System::Object*& __cordl_internal_get_target() ;

constexpr float_t const& __cordl_internal_get_timeScale() const;

constexpr float_t& __cordl_internal_get_timeScale() ;

constexpr ::System::Type* const& __cordl_internal_get_typeofT1() const;

constexpr ::System::Type*& __cordl_internal_get_typeofT1() ;

constexpr ::System::Type* const& __cordl_internal_get_typeofT2() const;

constexpr ::System::Type*& __cordl_internal_get_typeofT2() ;

constexpr ::System::Type* const& __cordl_internal_get_typeofTPlugOptions() const;

constexpr ::System::Type*& __cordl_internal_get_typeofTPlugOptions() ;

constexpr ::DG::Tweening::UpdateType const& __cordl_internal_get_updateType() const;

constexpr ::DG::Tweening::UpdateType& __cordl_internal_get_updateType() ;

constexpr void __cordl_internal_set__active_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__isRelative_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__playedOnce_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__position_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_activeId(int32_t  value) ;

constexpr void __cordl_internal_set_autoKill(bool  value) ;

constexpr void __cordl_internal_set_completedLoops(int32_t  value) ;

constexpr void __cordl_internal_set_creationLocked(bool  value) ;

constexpr void __cordl_internal_set_customEase(::DG::Tweening::EaseFunction*  value) ;

constexpr void __cordl_internal_set_debugTargetId(::StringW  value) ;

constexpr void __cordl_internal_set_delay(float_t  value) ;

constexpr void __cordl_internal_set_delayComplete(bool  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_easeOvershootOrAmplitude(float_t  value) ;

constexpr void __cordl_internal_set_easePeriod(float_t  value) ;

constexpr void __cordl_internal_set_easeType(::DG::Tweening::Ease  value) ;

constexpr void __cordl_internal_set_elapsedDelay(float_t  value) ;

constexpr void __cordl_internal_set_fullDuration(float_t  value) ;

constexpr void __cordl_internal_set_id(::System::Object*  value) ;

constexpr void __cordl_internal_set_intId(int32_t  value) ;

constexpr void __cordl_internal_set_isBackwards(bool  value) ;

constexpr void __cordl_internal_set_isBlendable(bool  value) ;

constexpr void __cordl_internal_set_isComplete(bool  value) ;

constexpr void __cordl_internal_set_isFrom(bool  value) ;

constexpr void __cordl_internal_set_isIndependentUpdate(bool  value) ;

constexpr void __cordl_internal_set_isPlaying(bool  value) ;

constexpr void __cordl_internal_set_isRecyclable(bool  value) ;

constexpr void __cordl_internal_set_isSequenced(bool  value) ;

constexpr void __cordl_internal_set_isSpeedBased(bool  value) ;

constexpr void __cordl_internal_set_loopType(::DG::Tweening::LoopType  value) ;

constexpr void __cordl_internal_set_loops(int32_t  value) ;

constexpr void __cordl_internal_set_miscInt(int32_t  value) ;

constexpr void __cordl_internal_set_onComplete(::DG::Tweening::TweenCallback*  value) ;

constexpr void __cordl_internal_set_onKill(::DG::Tweening::TweenCallback*  value) ;

constexpr void __cordl_internal_set_onPause(::DG::Tweening::TweenCallback*  value) ;

constexpr void __cordl_internal_set_onPlay(::DG::Tweening::TweenCallback*  value) ;

constexpr void __cordl_internal_set_onRewind(::DG::Tweening::TweenCallback*  value) ;

constexpr void __cordl_internal_set_onStepComplete(::DG::Tweening::TweenCallback*  value) ;

constexpr void __cordl_internal_set_onUpdate(::DG::Tweening::TweenCallback*  value) ;

constexpr void __cordl_internal_set_onWaypointChange(::DG::Tweening::TweenCallback_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_sequenceParent(::DG::Tweening::Sequence*  value) ;

constexpr void __cordl_internal_set_specialStartupMode(::DG::Tweening::Core::Enums::SpecialStartupMode  value) ;

constexpr void __cordl_internal_set_startupDone(bool  value) ;

constexpr void __cordl_internal_set_stringId(::StringW  value) ;

constexpr void __cordl_internal_set_target(::System::Object*  value) ;

constexpr void __cordl_internal_set_timeScale(float_t  value) ;

constexpr void __cordl_internal_set_typeofT1(::System::Type*  value) ;

constexpr void __cordl_internal_set_typeofT2(::System::Type*  value) ;

constexpr void __cordl_internal_set_typeofTPlugOptions(::System::Type*  value) ;

constexpr void __cordl_internal_set_updateType(::DG::Tweening::UpdateType  value) ;

/// @brief Method .ctor, addr 0x18c8c2c, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_active, addr 0x18d6770, size 0x8, virtual false, abstract: false, final false
inline bool get_active() ;

/// @brief Method get_fullPosition, addr 0x18d6784, size 0x8, virtual false, abstract: false, final false
inline float_t get_fullPosition() ;

/// @brief Method get_isRelative, addr 0x18d675c, size 0x8, virtual false, abstract: false, final false
inline bool get_isRelative() ;

/// @brief Method get_playedOnce, addr 0x18d6794, size 0x8, virtual false, abstract: false, final false
inline bool get_playedOnce() ;

/// @brief Method get_position, addr 0x18d67a8, size 0x8, virtual false, abstract: false, final false
inline float_t get_position() ;

/// @brief Method set_active, addr 0x18d6778, size 0xc, virtual false, abstract: false, final false
inline void set_active(bool  value) ;

/// @brief Method set_fullPosition, addr 0x18d678c, size 0x8, virtual false, abstract: false, final false
inline void set_fullPosition(float_t  value) ;

/// @brief Method set_isRelative, addr 0x18d6764, size 0xc, virtual false, abstract: false, final false
inline void set_isRelative(bool  value) ;

/// @brief Method set_playedOnce, addr 0x18d679c, size 0xc, virtual false, abstract: false, final false
inline void set_playedOnce(bool  value) ;

/// @brief Method set_position, addr 0x18d67b0, size 0x8, virtual false, abstract: false, final false
inline void set_position(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Tween() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Tween", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tween(Tween && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tween", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tween(Tween const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10785};

/// @brief Field timeScale, offset: 0x28, size: 0x4, def value: None
 float_t  ___timeScale;

/// @brief Field isBackwards, offset: 0x2c, size: 0x1, def value: None
 bool  ___isBackwards;

/// @brief Field id, offset: 0x30, size: 0x8, def value: None
 ::System::Object*  ___id;

/// @brief Field stringId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___stringId;

/// @brief Field intId, offset: 0x40, size: 0x4, def value: None
 int32_t  ___intId;

/// @brief Field target, offset: 0x48, size: 0x8, def value: None
 ::System::Object*  ___target;

/// @brief Field updateType, offset: 0x50, size: 0x4, def value: None
 ::DG::Tweening::UpdateType  ___updateType;

/// @brief Field isIndependentUpdate, offset: 0x54, size: 0x1, def value: None
 bool  ___isIndependentUpdate;

/// @brief Field onPlay, offset: 0x58, size: 0x8, def value: None
 ::DG::Tweening::TweenCallback*  ___onPlay;

/// @brief Field onPause, offset: 0x60, size: 0x8, def value: None
 ::DG::Tweening::TweenCallback*  ___onPause;

/// @brief Field onRewind, offset: 0x68, size: 0x8, def value: None
 ::DG::Tweening::TweenCallback*  ___onRewind;

/// @brief Field onUpdate, offset: 0x70, size: 0x8, def value: None
 ::DG::Tweening::TweenCallback*  ___onUpdate;

/// @brief Field onStepComplete, offset: 0x78, size: 0x8, def value: None
 ::DG::Tweening::TweenCallback*  ___onStepComplete;

/// @brief Field onComplete, offset: 0x80, size: 0x8, def value: None
 ::DG::Tweening::TweenCallback*  ___onComplete;

/// @brief Field onKill, offset: 0x88, size: 0x8, def value: None
 ::DG::Tweening::TweenCallback*  ___onKill;

/// @brief Field onWaypointChange, offset: 0x90, size: 0x8, def value: None
 ::DG::Tweening::TweenCallback_1<int32_t>*  ___onWaypointChange;

/// @brief Field isFrom, offset: 0x98, size: 0x1, def value: None
 bool  ___isFrom;

/// @brief Field isBlendable, offset: 0x99, size: 0x1, def value: None
 bool  ___isBlendable;

/// @brief Field isRecyclable, offset: 0x9a, size: 0x1, def value: None
 bool  ___isRecyclable;

/// @brief Field isSpeedBased, offset: 0x9b, size: 0x1, def value: None
 bool  ___isSpeedBased;

/// @brief Field autoKill, offset: 0x9c, size: 0x1, def value: None
 bool  ___autoKill;

/// @brief Field duration, offset: 0xa0, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field loops, offset: 0xa4, size: 0x4, def value: None
 int32_t  ___loops;

/// @brief Field loopType, offset: 0xa8, size: 0x4, def value: None
 ::DG::Tweening::LoopType  ___loopType;

/// @brief Field delay, offset: 0xac, size: 0x4, def value: None
 float_t  ___delay;

/// @brief Field <isRelative>k__BackingField, offset: 0xb0, size: 0x1, def value: None
 bool  ____isRelative_k__BackingField;

/// @brief Field easeType, offset: 0xb4, size: 0x4, def value: None
 ::DG::Tweening::Ease  ___easeType;

/// @brief Field customEase, offset: 0xb8, size: 0x8, def value: None
 ::DG::Tweening::EaseFunction*  ___customEase;

/// @brief Field easeOvershootOrAmplitude, offset: 0xc0, size: 0x4, def value: None
 float_t  ___easeOvershootOrAmplitude;

/// @brief Field easePeriod, offset: 0xc4, size: 0x4, def value: None
 float_t  ___easePeriod;

/// @brief Field debugTargetId, offset: 0xc8, size: 0x8, def value: None
 ::StringW  ___debugTargetId;

/// @brief Field typeofT1, offset: 0xd0, size: 0x8, def value: None
 ::System::Type*  ___typeofT1;

/// @brief Field typeofT2, offset: 0xd8, size: 0x8, def value: None
 ::System::Type*  ___typeofT2;

/// @brief Field typeofTPlugOptions, offset: 0xe0, size: 0x8, def value: None
 ::System::Type*  ___typeofTPlugOptions;

/// @brief Field <active>k__BackingField, offset: 0xe8, size: 0x1, def value: None
 bool  ____active_k__BackingField;

/// @brief Field isSequenced, offset: 0xe9, size: 0x1, def value: None
 bool  ___isSequenced;

/// @brief Field sequenceParent, offset: 0xf0, size: 0x8, def value: None
 ::DG::Tweening::Sequence*  ___sequenceParent;

/// @brief Field activeId, offset: 0xf8, size: 0x4, def value: None
 int32_t  ___activeId;

/// @brief Field specialStartupMode, offset: 0xfc, size: 0x4, def value: None
 ::DG::Tweening::Core::Enums::SpecialStartupMode  ___specialStartupMode;

/// @brief Field creationLocked, offset: 0x100, size: 0x1, def value: None
 bool  ___creationLocked;

/// @brief Field startupDone, offset: 0x101, size: 0x1, def value: None
 bool  ___startupDone;

/// @brief Field <playedOnce>k__BackingField, offset: 0x102, size: 0x1, def value: None
 bool  ____playedOnce_k__BackingField;

/// @brief Field <position>k__BackingField, offset: 0x104, size: 0x4, def value: None
 float_t  ____position_k__BackingField;

/// @brief Field fullDuration, offset: 0x108, size: 0x4, def value: None
 float_t  ___fullDuration;

/// @brief Field completedLoops, offset: 0x10c, size: 0x4, def value: None
 int32_t  ___completedLoops;

/// @brief Field isPlaying, offset: 0x110, size: 0x1, def value: None
 bool  ___isPlaying;

/// @brief Field isComplete, offset: 0x111, size: 0x1, def value: None
 bool  ___isComplete;

/// @brief Field elapsedDelay, offset: 0x114, size: 0x4, def value: None
 float_t  ___elapsedDelay;

/// @brief Field delayComplete, offset: 0x118, size: 0x1, def value: None
 bool  ___delayComplete;

/// @brief Field miscInt, offset: 0x11c, size: 0x4, def value: None
 int32_t  ___miscInt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Tween, ___timeScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___isBackwards) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___id) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___stringId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___intId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___target) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___updateType) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___isIndependentUpdate) == 0x54, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___onPlay) == 0x58, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___onPause) == 0x60, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___onRewind) == 0x68, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___onUpdate) == 0x70, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___onStepComplete) == 0x78, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___onComplete) == 0x80, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___onKill) == 0x88, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___onWaypointChange) == 0x90, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___isFrom) == 0x98, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___isBlendable) == 0x99, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___isRecyclable) == 0x9a, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___isSpeedBased) == 0x9b, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___autoKill) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___duration) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___loops) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___loopType) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___delay) == 0xac, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ____isRelative_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___easeType) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___customEase) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___easeOvershootOrAmplitude) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___easePeriod) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___debugTargetId) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___typeofT1) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___typeofT2) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___typeofTPlugOptions) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ____active_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___isSequenced) == 0xe9, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___sequenceParent) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___activeId) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___specialStartupMode) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___creationLocked) == 0x100, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___startupDone) == 0x101, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ____playedOnce_k__BackingField) == 0x102, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ____position_k__BackingField) == 0x104, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___fullDuration) == 0x108, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___completedLoops) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___isPlaying) == 0x110, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___isComplete) == 0x111, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___elapsedDelay) == 0x114, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___delayComplete) == 0x118, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Tween, ___miscInt) == 0x11c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Tween, 0x120>, "Size mismatch!");

} // namespace end def DG::Tweening
NEED_NO_BOX(::DG::Tweening::Tween);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Tween*, "DG.Tweening", "Tween");
