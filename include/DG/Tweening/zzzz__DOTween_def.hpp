#pragma once
// IWYU pragma private; include "DG/Tweening/DOTween.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Core/Enums/zzzz__NestedTweenFailureBehaviour_def.hpp"
#include "DG/Tweening/Core/Enums/zzzz__RewindCallbackMode_def.hpp"
#include "DG/Tweening/Core/zzzz__SafeModeReport_def.hpp"
#include "DG/Tweening/zzzz__AutoPlay_def.hpp"
#include "DG/Tweening/zzzz__Ease_def.hpp"
#include "DG/Tweening/zzzz__LogBehaviour_def.hpp"
#include "DG/Tweening/zzzz__LoopType_def.hpp"
#include "DG/Tweening/zzzz__UpdateType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DOTween)
namespace DG::Tweening::Core {
template<typename T>
class DOGetter_1;
}
namespace DG::Tweening::Core {
template<typename T>
class DOSetter_1;
}
namespace DG::Tweening::Core {
class DOTweenComponent;
}
namespace DG::Tweening::Core {
class DOTweenSettings;
}
namespace DG::Tweening::Core {
template<typename T1,typename T2,typename TPlugOptions>
class TweenerCore_3;
}
namespace DG::Tweening::Plugins::Core {
template<typename T1,typename T2,typename TPlugOptions>
class ABSTweenPlugin_3;
}
namespace DG::Tweening::Plugins::Options {
struct ColorOptions;
}
namespace DG::Tweening::Plugins::Options {
struct FloatOptions;
}
namespace DG::Tweening::Plugins::Options {
struct NoOptions;
}
namespace DG::Tweening::Plugins::Options {
struct QuaternionOptions;
}
namespace DG::Tweening::Plugins::Options {
struct RectOptions;
}
namespace DG::Tweening::Plugins::Options {
struct StringOptions;
}
namespace DG::Tweening::Plugins::Options {
struct UintOptions;
}
namespace DG::Tweening::Plugins::Options {
struct Vector3ArrayOptions;
}
namespace DG::Tweening::Plugins::Options {
struct VectorOptions;
}
namespace DG::Tweening {
struct AxisConstraint;
}
namespace DG::Tweening {
struct Color2;
}
namespace DG::Tweening {
class DOTween___c__DisplayClass60_0;
}
namespace DG::Tweening {
class IDOTweenInit;
}
namespace DG::Tweening {
struct LogBehaviour;
}
namespace DG::Tweening {
class Sequence;
}
namespace DG::Tweening {
class TweenCallback;
}
namespace DG::Tweening {
class Tween;
}
namespace DG::Tweening {
class Tweener;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class RectOffset;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace DG::Tweening {
class DOTween;
}
namespace DG::Tweening {
class DOTween___c__DisplayClass60_0;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::DOTween);
MARK_REF_PTR_T(::DG::Tweening::DOTween___c__DisplayClass60_0);
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTween/<>c__DisplayClass60_0
class CORDL_TYPE DOTween___c__DisplayClass60_0 : public ::System::Object {
public:
// Declarations
/// @brief Field setter, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_setter, put=__cordl_internal_set_setter)) ::DG::Tweening::Core::DOSetter_1<float_t>*  setter;

/// @brief Field v, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_v, put=__cordl_internal_set_v)) float_t  v;

static inline ::DG::Tweening::DOTween___c__DisplayClass60_0* New_ctor() ;

/// @brief Method <To>b__0, addr 0x18c5b08, size 0x8, virtual false, abstract: false, final false
inline float_t _To_b__0() ;

/// @brief Method <To>b__1, addr 0x18c5b10, size 0x28, virtual false, abstract: false, final false
inline void _To_b__1(float_t  x) ;

constexpr ::DG::Tweening::Core::DOSetter_1<float_t>* const& __cordl_internal_get_setter() const;

constexpr ::DG::Tweening::Core::DOSetter_1<float_t>*& __cordl_internal_get_setter() ;

constexpr float_t const& __cordl_internal_get_v() const;

constexpr float_t& __cordl_internal_get_v() ;

constexpr void __cordl_internal_set_setter(::DG::Tweening::Core::DOSetter_1<float_t>*  value) ;

constexpr void __cordl_internal_set_v(float_t  value) ;

/// @brief Method .ctor, addr 0x18c34fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTween___c__DisplayClass60_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTween___c__DisplayClass60_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTween___c__DisplayClass60_0(DOTween___c__DisplayClass60_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTween___c__DisplayClass60_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTween___c__DisplayClass60_0(DOTween___c__DisplayClass60_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10689};

/// @brief Field v, offset: 0x10, size: 0x4, def value: None
 float_t  ___v;

/// @brief Field setter, offset: 0x18, size: 0x8, def value: None
 ::DG::Tweening::Core::DOSetter_1<float_t>*  ___setter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTween___c__DisplayClass60_0, ___v) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTween___c__DisplayClass60_0, ___setter) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTween___c__DisplayClass60_0, 0x20>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies DG.Tweening.AutoPlay, DG.Tweening.Core.Enums.NestedTweenFailureBehaviour, DG.Tweening.Core.Enums.RewindCallbackMode, DG.Tweening.Core.SafeModeReport, DG.Tweening.Ease, DG.Tweening.LogBehaviour, DG.Tweening.LoopType, DG.Tweening.UpdateType, System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTween
class CORDL_TYPE DOTween : public ::System::Object {
public:
// Declarations
using __c__DisplayClass60_0 = ::DG::Tweening::DOTween___c__DisplayClass60_0;

/// @brief Field GizmosDelegates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GizmosDelegates, put=setStaticF_GizmosDelegates)) ::System::Collections::Generic::List_1<::DG::Tweening::TweenCallback*>*  GizmosDelegates;

/// @brief Field Version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Version, put=setStaticF_Version)) ::StringW  Version;

/// @brief Field _fooDebugStoreTargetId, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__fooDebugStoreTargetId, put=setStaticF__fooDebugStoreTargetId)) bool  _fooDebugStoreTargetId;

/// @brief Field _logBehaviour, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__logBehaviour, put=setStaticF__logBehaviour)) ::DG::Tweening::LogBehaviour  _logBehaviour;

/// @brief Field debugMode, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_debugMode, put=setStaticF_debugMode)) bool  debugMode;

/// @brief Field defaultAutoKill, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_defaultAutoKill, put=setStaticF_defaultAutoKill)) bool  defaultAutoKill;

/// @brief Field defaultAutoPlay, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_defaultAutoPlay, put=setStaticF_defaultAutoPlay)) ::DG::Tweening::AutoPlay  defaultAutoPlay;

/// @brief Field defaultEaseOvershootOrAmplitude, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_defaultEaseOvershootOrAmplitude, put=setStaticF_defaultEaseOvershootOrAmplitude)) float_t  defaultEaseOvershootOrAmplitude;

/// @brief Field defaultEasePeriod, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_defaultEasePeriod, put=setStaticF_defaultEasePeriod)) float_t  defaultEasePeriod;

/// @brief Field defaultEaseType, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_defaultEaseType, put=setStaticF_defaultEaseType)) ::DG::Tweening::Ease  defaultEaseType;

/// @brief Field defaultLoopType, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_defaultLoopType, put=setStaticF_defaultLoopType)) ::DG::Tweening::LoopType  defaultLoopType;

/// @brief Field defaultRecyclable, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_defaultRecyclable, put=setStaticF_defaultRecyclable)) bool  defaultRecyclable;

/// @brief Field defaultTimeScaleIndependent, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_defaultTimeScaleIndependent, put=setStaticF_defaultTimeScaleIndependent)) bool  defaultTimeScaleIndependent;

/// @brief Field defaultUpdateType, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_defaultUpdateType, put=setStaticF_defaultUpdateType)) ::DG::Tweening::UpdateType  defaultUpdateType;

/// @brief Field drawGizmos, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_drawGizmos, put=setStaticF_drawGizmos)) bool  drawGizmos;

/// @brief Field initialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_initialized, put=setStaticF_initialized)) bool  initialized;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::DG::Tweening::Core::DOTweenComponent>  instance;

/// @brief Field isQuitting, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_isQuitting, put=setStaticF_isQuitting)) bool  isQuitting;

/// @brief Field maxActiveSequencesReached, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_maxActiveSequencesReached, put=setStaticF_maxActiveSequencesReached)) int32_t  maxActiveSequencesReached;

/// @brief Field maxActiveTweenersReached, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_maxActiveTweenersReached, put=setStaticF_maxActiveTweenersReached)) int32_t  maxActiveTweenersReached;

/// @brief Field maxSmoothUnscaledTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_maxSmoothUnscaledTime, put=setStaticF_maxSmoothUnscaledTime)) float_t  maxSmoothUnscaledTime;

/// @brief Field nestedTweenFailureBehaviour, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_nestedTweenFailureBehaviour, put=setStaticF_nestedTweenFailureBehaviour)) ::DG::Tweening::Core::Enums::NestedTweenFailureBehaviour  nestedTweenFailureBehaviour;

/// @brief Field onWillLog, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onWillLog, put=setStaticF_onWillLog)) ::System::Func_3<::UnityEngine::LogType,::System::Object*,bool>*  onWillLog;

/// @brief Field rewindCallbackMode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_rewindCallbackMode, put=setStaticF_rewindCallbackMode)) ::DG::Tweening::Core::Enums::RewindCallbackMode  rewindCallbackMode;

/// @brief Field safeModeReport, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_safeModeReport, put=setStaticF_safeModeReport)) ::DG::Tweening::Core::SafeModeReport  safeModeReport;

/// @brief Field showUnityEditorReport, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_showUnityEditorReport, put=setStaticF_showUnityEditorReport)) bool  showUnityEditorReport;

/// @brief Field timeScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_timeScale, put=setStaticF_timeScale)) float_t  timeScale;

/// @brief Field useSafeMode, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_useSafeMode, put=setStaticF_useSafeMode)) bool  useSafeMode;

/// @brief Field useSmoothDeltaTime, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_useSmoothDeltaTime, put=setStaticF_useSmoothDeltaTime)) bool  useSmoothDeltaTime;

/// @brief Method ApplyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename TPlugOptions>
static inline ::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>* ApplyTo(::DG::Tweening::Core::DOGetter_1<T1>*  getter, ::DG::Tweening::Core::DOSetter_1<T1>*  setter, T2  endValue, float_t  duration, ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>*  plugin) ;

/// @brief Method AutoInit, addr 0x18c246c, size 0xd4, virtual false, abstract: false, final false
static inline void AutoInit() ;

/// @brief Method Clear, addr 0x18c25a8, size 0x108, virtual false, abstract: false, final false
static inline void Clear(bool  destroy) ;

/// @brief Method ClearCachedTweens, addr 0x18c26b0, size 0x50, virtual false, abstract: false, final false
static inline void ClearCachedTweens() ;

/// @brief Method Complete, addr 0x18c4634, size 0xa4, virtual false, abstract: false, final false
static inline int32_t Complete(::System::Object*  targetOrId, bool  withCallbacks) ;

/// @brief Method CompleteAll, addr 0x18c45b8, size 0x7c, virtual false, abstract: false, final false
static inline int32_t CompleteAll(bool  withCallbacks) ;

/// @brief Method CompleteAndReturnKilledTot, addr 0x18c46d8, size 0x6c, virtual false, abstract: false, final false
static inline int32_t CompleteAndReturnKilledTot() ;

/// @brief Method CompleteAndReturnKilledTot, addr 0x18c4744, size 0x84, virtual false, abstract: false, final false
static inline int32_t CompleteAndReturnKilledTot(::System::Object*  targetOrId) ;

/// @brief Method CompleteAndReturnKilledTotExceptFor, addr 0x18c47c8, size 0x70, virtual false, abstract: false, final false
static inline int32_t CompleteAndReturnKilledTotExceptFor(::ArrayW<::System::Object*,::Array<::System::Object*>*>  excludeTargetsOrIds) ;

/// @brief Method Flip, addr 0x18c48a4, size 0x84, virtual false, abstract: false, final false
static inline int32_t Flip(::System::Object*  targetOrId) ;

/// @brief Method FlipAll, addr 0x18c4838, size 0x6c, virtual false, abstract: false, final false
static inline int32_t FlipAll() ;

/// @brief Method Goto, addr 0x18c49a4, size 0x98, virtual false, abstract: false, final false
static inline int32_t Goto(::System::Object*  targetOrId, float_t  to, bool  andPlay) ;

/// @brief Method GotoAll, addr 0x18c4928, size 0x7c, virtual false, abstract: false, final false
static inline int32_t GotoAll(float_t  to, bool  andPlay) ;

/// @brief Method Init, addr 0x18c1d2c, size 0x188, virtual false, abstract: false, final false
static inline ::DG::Tweening::IDOTweenInit* Init(::System::Nullable_1<bool>  recycleAllByDefault, ::System::Nullable_1<bool>  useSafeMode, ::System::Nullable_1<::DG::Tweening::LogBehaviour>  logBehaviour) ;

/// @brief Method Init, addr 0x18c1eb4, size 0x5b8, virtual false, abstract: false, final false
static inline ::DG::Tweening::IDOTweenInit* Init(::DG::Tweening::Core::DOTweenSettings*  settings, ::System::Nullable_1<bool>  recycleAllByDefault, ::System::Nullable_1<bool>  useSafeMode, ::System::Nullable_1<::DG::Tweening::LogBehaviour>  logBehaviour) ;

/// @brief Method InitCheck, addr 0x18c2840, size 0xc4, virtual false, abstract: false, final false
static inline void InitCheck() ;

/// @brief Method IsTweening, addr 0x18c568c, size 0x88, virtual false, abstract: false, final false
static inline bool IsTweening(::System::Object*  targetOrId, bool  alsoCheckIfIsPlaying) ;

/// @brief Method Kill, addr 0x18c4bd8, size 0xc4, virtual false, abstract: false, final false
static inline int32_t Kill(::System::Object*  targetOrId, bool  complete) ;

/// @brief Method KillAll, addr 0x18c4a3c, size 0x94, virtual false, abstract: false, final false
static inline int32_t KillAll(bool  complete) ;

/// @brief Method KillAll, addr 0x18c4ad0, size 0x108, virtual false, abstract: false, final false
static inline int32_t KillAll(bool  complete, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  idsOrTargetsToExclude) ;

/// @brief Method ManualUpdate, addr 0x18c2750, size 0xf0, virtual false, abstract: false, final false
static inline void ManualUpdate(float_t  deltaTime, float_t  unscaledDeltaTime) ;

static inline ::DG::Tweening::DOTween* New_ctor() ;

/// @brief Method Pause, addr 0x18c4d08, size 0x84, virtual false, abstract: false, final false
static inline int32_t Pause(::System::Object*  targetOrId) ;

/// @brief Method PauseAll, addr 0x18c4c9c, size 0x6c, virtual false, abstract: false, final false
static inline int32_t PauseAll() ;

/// @brief Method PausedTweens, addr 0x18c57f4, size 0x90, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* PausedTweens(::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*  fillableList) ;

/// @brief Method Play, addr 0x18c4e7c, size 0x8c, virtual false, abstract: false, final false
static inline int32_t Play(::System::Object*  target, ::System::Object*  id) ;

/// @brief Method Play, addr 0x18c4df8, size 0x84, virtual false, abstract: false, final false
static inline int32_t Play(::System::Object*  targetOrId) ;

/// @brief Method PlayAll, addr 0x18c4d8c, size 0x6c, virtual false, abstract: false, final false
static inline int32_t PlayAll() ;

/// @brief Method PlayBackwards, addr 0x18c4ff8, size 0x8c, virtual false, abstract: false, final false
static inline int32_t PlayBackwards(::System::Object*  target, ::System::Object*  id) ;

/// @brief Method PlayBackwards, addr 0x18c4f74, size 0x84, virtual false, abstract: false, final false
static inline int32_t PlayBackwards(::System::Object*  targetOrId) ;

/// @brief Method PlayBackwardsAll, addr 0x18c4f08, size 0x6c, virtual false, abstract: false, final false
static inline int32_t PlayBackwardsAll() ;

/// @brief Method PlayForward, addr 0x18c5174, size 0x8c, virtual false, abstract: false, final false
static inline int32_t PlayForward(::System::Object*  target, ::System::Object*  id) ;

/// @brief Method PlayForward, addr 0x18c50f0, size 0x84, virtual false, abstract: false, final false
static inline int32_t PlayForward(::System::Object*  targetOrId) ;

/// @brief Method PlayForwardAll, addr 0x18c5084, size 0x6c, virtual false, abstract: false, final false
static inline int32_t PlayForwardAll() ;

/// @brief Method PlayingTweens, addr 0x18c5764, size 0x90, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* PlayingTweens(::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*  fillableList) ;

/// @brief Method Punch, addr 0x18c3504, size 0x3f0, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>,::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* Punch(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>*  getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>*  setter, ::UnityEngine::Vector3  direction, float_t  duration, int32_t  vibrato, float_t  elasticity) ;

/// @brief Method Restart, addr 0x18c5308, size 0xac, virtual false, abstract: false, final false
static inline int32_t Restart(::System::Object*  target, ::System::Object*  id, bool  includeDelay, float_t  changeDelayTo) ;

/// @brief Method Restart, addr 0x18c5270, size 0x98, virtual false, abstract: false, final false
static inline int32_t Restart(::System::Object*  targetOrId, bool  includeDelay, float_t  changeDelayTo) ;

/// @brief Method RestartAll, addr 0x18c5200, size 0x70, virtual false, abstract: false, final false
static inline int32_t RestartAll(bool  includeDelay) ;

/// @brief Method Rewind, addr 0x18c5424, size 0x88, virtual false, abstract: false, final false
static inline int32_t Rewind(::System::Object*  targetOrId, bool  includeDelay) ;

/// @brief Method RewindAll, addr 0x18c53b4, size 0x70, virtual false, abstract: false, final false
static inline int32_t RewindAll(bool  includeDelay) ;

/// @brief Method Sequence, addr 0x18c445c, size 0x88, virtual false, abstract: false, final false
static inline ::DG::Tweening::Sequence* Sequence() ;

/// @brief Method SetTweensCapacity, addr 0x18c2540, size 0x68, virtual false, abstract: false, final false
static inline void SetTweensCapacity(int32_t  tweenersCapacity, int32_t  sequencesCapacity) ;

/// @brief Method Shake, addr 0x18c42e4, size 0xc4, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>,::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* Shake(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>*  getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>*  setter, float_t  duration, ::UnityEngine::Vector3  strength, int32_t  vibrato, float_t  randomness, bool  fadeOut) ;

/// @brief Method Shake, addr 0x18c3bcc, size 0x718, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>,::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* Shake(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>*  getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>*  setter, float_t  duration, ::UnityEngine::Vector3  strength, int32_t  vibrato, float_t  randomness, bool  ignoreZAxis, bool  vectorBased, bool  fadeOut) ;

/// @brief Method Shake, addr 0x18c3b14, size 0xb8, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>,::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* Shake(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>*  getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>*  setter, float_t  duration, float_t  strength, int32_t  vibrato, float_t  randomness, bool  ignoreZAxis, bool  fadeOut) ;

/// @brief Method SmoothRewind, addr 0x18c5518, size 0x84, virtual false, abstract: false, final false
static inline int32_t SmoothRewind(::System::Object*  targetOrId) ;

/// @brief Method SmoothRewindAll, addr 0x18c54ac, size 0x6c, virtual false, abstract: false, final false
static inline int32_t SmoothRewindAll() ;

/// @brief Method To, addr 0x18c43a8, size 0xb4, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2,::DG::Tweening::Color2,::DG::Tweening::Plugins::Options::ColorOptions>* To(::DG::Tweening::Core::DOGetter_1<::DG::Tweening::Color2>*  getter, ::DG::Tweening::Core::DOSetter_1<::DG::Tweening::Color2>*  setter, ::DG::Tweening::Color2  endValue, float_t  duration) ;

/// @brief Method To, addr 0x18c2c94, size 0x98, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::StringW,::StringW,::DG::Tweening::Plugins::Options::StringOptions>* To(::DG::Tweening::Core::DOGetter_1<::StringW>*  getter, ::DG::Tweening::Core::DOSetter_1<::StringW>*  setter, ::StringW  endValue, float_t  duration) ;

/// @brief Method To, addr 0x18c2ff4, size 0xc0, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color,::UnityEngine::Color,::DG::Tweening::Plugins::Options::ColorOptions>* To(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Color>*  getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Color>*  setter, ::UnityEngine::Color  endValue, float_t  duration) ;

/// @brief Method To, addr 0x18c2f44, size 0xb0, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::QuaternionOptions>* To(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Quaternion>*  getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Quaternion>*  setter, ::UnityEngine::Vector3  endValue, float_t  duration) ;

/// @brief Method To, addr 0x18c30b4, size 0xc0, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Rect,::UnityEngine::Rect,::DG::Tweening::Plugins::Options::RectOptions>* To(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Rect>*  getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Rect>*  setter, ::UnityEngine::Rect  endValue, float_t  duration) ;

/// @brief Method To, addr 0x18c2d2c, size 0xa8, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2,::UnityEngine::Vector2,::DG::Tweening::Plugins::Options::VectorOptions>* To(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector2>*  getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector2>*  setter, ::UnityEngine::Vector2  endValue, float_t  duration) ;

/// @brief Method To, addr 0x18c2dd4, size 0xb0, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>* To(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>*  getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>*  setter, ::UnityEngine::Vector3  endValue, float_t  duration) ;

/// @brief Method To, addr 0x18c2e84, size 0xc0, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector4,::UnityEngine::Vector4,::DG::Tweening::Plugins::Options::VectorOptions>* To(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector4>*  getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector4>*  setter, ::UnityEngine::Vector4  endValue, float_t  duration) ;

/// @brief Method To, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename TPlugOptions>
static inline ::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>* To(::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>*  plugin, ::DG::Tweening::Core::DOGetter_1<T1>*  getter, ::DG::Tweening::Core::DOSetter_1<T1>*  setter, T2  endValue, float_t  duration) ;

/// @brief Method To, addr 0x18c299c, size 0x98, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<double_t,double_t,::DG::Tweening::Plugins::Options::NoOptions>* To(::DG::Tweening::Core::DOGetter_1<double_t>*  getter, ::DG::Tweening::Core::DOSetter_1<double_t>*  setter, double_t  endValue, float_t  duration) ;

/// @brief Method To, addr 0x18c2904, size 0x98, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<float_t,float_t,::DG::Tweening::Plugins::Options::FloatOptions>* To(::DG::Tweening::Core::DOGetter_1<float_t>*  getter, ::DG::Tweening::Core::DOSetter_1<float_t>*  setter, float_t  endValue, float_t  duration) ;

/// @brief Method To, addr 0x18c2a34, size 0x98, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<int32_t,int32_t,::DG::Tweening::Plugins::Options::NoOptions>* To(::DG::Tweening::Core::DOGetter_1<int32_t>*  getter, ::DG::Tweening::Core::DOSetter_1<int32_t>*  setter, int32_t  endValue, float_t  duration) ;

/// @brief Method To, addr 0x18c2b64, size 0x98, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<int64_t,int64_t,::DG::Tweening::Plugins::Options::NoOptions>* To(::DG::Tweening::Core::DOGetter_1<int64_t>*  getter, ::DG::Tweening::Core::DOSetter_1<int64_t>*  setter, int64_t  endValue, float_t  duration) ;

/// @brief Method To, addr 0x18c2acc, size 0x98, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<uint32_t,uint32_t,::DG::Tweening::Plugins::Options::UintOptions>* To(::DG::Tweening::Core::DOGetter_1<uint32_t>*  getter, ::DG::Tweening::Core::DOSetter_1<uint32_t>*  setter, uint32_t  endValue, float_t  duration) ;

/// @brief Method To, addr 0x18c2bfc, size 0x98, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<uint64_t,uint64_t,::DG::Tweening::Plugins::Options::NoOptions>* To(::DG::Tweening::Core::DOGetter_1<uint64_t>*  getter, ::DG::Tweening::Core::DOSetter_1<uint64_t>*  setter, uint64_t  endValue, float_t  duration) ;

/// @brief Method To, addr 0x18c3174, size 0x98, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* To(::DG::Tweening::Core::DOGetter_1<::UnityEngine::RectOffset*>*  getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::RectOffset*>*  setter, ::UnityEngine::RectOffset*  endValue, float_t  duration) ;

/// @brief Method To, addr 0x18c3394, size 0x168, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* To(::DG::Tweening::Core::DOSetter_1<float_t>*  setter, float_t  startValue, float_t  endValue, float_t  duration) ;

/// @brief Method ToAlpha, addr 0x18c32c0, size 0xbc, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color,::UnityEngine::Color,::DG::Tweening::Plugins::Options::ColorOptions>* ToAlpha(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Color>*  getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Color>*  setter, float_t  endValue, float_t  duration) ;

/// @brief Method ToArray, addr 0x18c38f4, size 0x220, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>,::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* ToArray(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>*  getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>*  setter, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  endValues, ::ArrayW<float_t,::Array<float_t>*>  durations) ;

/// @brief Method ToAxis, addr 0x18c320c, size 0xb4, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>* ToAxis(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>*  getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>*  setter, float_t  endValue, float_t  duration, ::DG::Tweening::AxisConstraint  axisConstraint) ;

/// @brief Method TogglePause, addr 0x18c5608, size 0x84, virtual false, abstract: false, final false
static inline int32_t TogglePause(::System::Object*  targetOrId) ;

/// @brief Method TogglePauseAll, addr 0x18c559c, size 0x6c, virtual false, abstract: false, final false
static inline int32_t TogglePauseAll() ;

/// @brief Method TotalPlayingTweens, addr 0x18c5714, size 0x50, virtual false, abstract: false, final false
static inline int32_t TotalPlayingTweens() ;

/// @brief Method TweensById, addr 0x18c5884, size 0xbc, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* TweensById(::System::Object*  id, bool  playingOnly, ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*  fillableList) ;

/// @brief Method TweensByTarget, addr 0x18c5940, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* TweensByTarget(::System::Object*  target, bool  playingOnly, ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*  fillableList) ;

/// @brief Method Validate, addr 0x18c2700, size 0x50, virtual false, abstract: false, final false
static inline int32_t Validate() ;

/// @brief Method .ctor, addr 0x18c59e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::DG::Tweening::TweenCallback*>* getStaticF_GizmosDelegates() ;

static inline ::StringW getStaticF_Version() ;

static inline bool getStaticF__fooDebugStoreTargetId() ;

static inline ::DG::Tweening::LogBehaviour getStaticF__logBehaviour() ;

static inline bool getStaticF_debugMode() ;

static inline bool getStaticF_defaultAutoKill() ;

static inline ::DG::Tweening::AutoPlay getStaticF_defaultAutoPlay() ;

static inline float_t getStaticF_defaultEaseOvershootOrAmplitude() ;

static inline float_t getStaticF_defaultEasePeriod() ;

static inline ::DG::Tweening::Ease getStaticF_defaultEaseType() ;

static inline ::DG::Tweening::LoopType getStaticF_defaultLoopType() ;

static inline bool getStaticF_defaultRecyclable() ;

static inline bool getStaticF_defaultTimeScaleIndependent() ;

static inline ::DG::Tweening::UpdateType getStaticF_defaultUpdateType() ;

static inline bool getStaticF_drawGizmos() ;

static inline bool getStaticF_initialized() ;

static inline ::UnityW<::DG::Tweening::Core::DOTweenComponent> getStaticF_instance() ;

static inline bool getStaticF_isQuitting() ;

static inline int32_t getStaticF_maxActiveSequencesReached() ;

static inline int32_t getStaticF_maxActiveTweenersReached() ;

static inline float_t getStaticF_maxSmoothUnscaledTime() ;

static inline ::DG::Tweening::Core::Enums::NestedTweenFailureBehaviour getStaticF_nestedTweenFailureBehaviour() ;

static inline ::System::Func_3<::UnityEngine::LogType,::System::Object*,bool>* getStaticF_onWillLog() ;

static inline ::DG::Tweening::Core::Enums::RewindCallbackMode getStaticF_rewindCallbackMode() ;

static inline ::DG::Tweening::Core::SafeModeReport getStaticF_safeModeReport() ;

static inline bool getStaticF_showUnityEditorReport() ;

static inline float_t getStaticF_timeScale() ;

static inline bool getStaticF_useSafeMode() ;

static inline bool getStaticF_useSmoothDeltaTime() ;

/// @brief Method get_debugStoreTargetId, addr 0x18c1c2c, size 0xa0, virtual false, abstract: false, final false
static inline bool get_debugStoreTargetId() ;

/// @brief Method get_logBehaviour, addr 0x18c1b70, size 0x58, virtual false, abstract: false, final false
static inline ::DG::Tweening::LogBehaviour get_logBehaviour() ;

static inline void setStaticF_GizmosDelegates(::System::Collections::Generic::List_1<::DG::Tweening::TweenCallback*>*  value) ;

static inline void setStaticF_Version(::StringW  value) ;

static inline void setStaticF__fooDebugStoreTargetId(bool  value) ;

static inline void setStaticF__logBehaviour(::DG::Tweening::LogBehaviour  value) ;

static inline void setStaticF_debugMode(bool  value) ;

static inline void setStaticF_defaultAutoKill(bool  value) ;

static inline void setStaticF_defaultAutoPlay(::DG::Tweening::AutoPlay  value) ;

static inline void setStaticF_defaultEaseOvershootOrAmplitude(float_t  value) ;

static inline void setStaticF_defaultEasePeriod(float_t  value) ;

static inline void setStaticF_defaultEaseType(::DG::Tweening::Ease  value) ;

static inline void setStaticF_defaultLoopType(::DG::Tweening::LoopType  value) ;

static inline void setStaticF_defaultRecyclable(bool  value) ;

static inline void setStaticF_defaultTimeScaleIndependent(bool  value) ;

static inline void setStaticF_defaultUpdateType(::DG::Tweening::UpdateType  value) ;

static inline void setStaticF_drawGizmos(bool  value) ;

static inline void setStaticF_initialized(bool  value) ;

static inline void setStaticF_instance(::UnityW<::DG::Tweening::Core::DOTweenComponent>  value) ;

static inline void setStaticF_isQuitting(bool  value) ;

static inline void setStaticF_maxActiveSequencesReached(int32_t  value) ;

static inline void setStaticF_maxActiveTweenersReached(int32_t  value) ;

static inline void setStaticF_maxSmoothUnscaledTime(float_t  value) ;

static inline void setStaticF_nestedTweenFailureBehaviour(::DG::Tweening::Core::Enums::NestedTweenFailureBehaviour  value) ;

static inline void setStaticF_onWillLog(::System::Func_3<::UnityEngine::LogType,::System::Object*,bool>*  value) ;

static inline void setStaticF_rewindCallbackMode(::DG::Tweening::Core::Enums::RewindCallbackMode  value) ;

static inline void setStaticF_safeModeReport(::DG::Tweening::Core::SafeModeReport  value) ;

static inline void setStaticF_showUnityEditorReport(bool  value) ;

static inline void setStaticF_timeScale(float_t  value) ;

static inline void setStaticF_useSafeMode(bool  value) ;

static inline void setStaticF_useSmoothDeltaTime(bool  value) ;

/// @brief Method set_debugStoreTargetId, addr 0x18c1ccc, size 0x60, virtual false, abstract: false, final false
static inline void set_debugStoreTargetId(bool  value) ;

/// @brief Method set_logBehaviour, addr 0x18c1bc8, size 0x64, virtual false, abstract: false, final false
static inline void set_logBehaviour(::DG::Tweening::LogBehaviour  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTween() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTween", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTween(DOTween && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTween", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTween(DOTween const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10690};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTween, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening
NEED_NO_BOX(::DG::Tweening::DOTween);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTween*, "DG.Tweening", "DOTween");
NEED_NO_BOX(::DG::Tweening::DOTween___c__DisplayClass60_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTween___c__DisplayClass60_0*, "DG.Tweening", "DOTween/<>c__DisplayClass60_0");
