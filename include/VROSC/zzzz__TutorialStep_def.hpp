#pragma once
// IWYU pragma private; include "VROSC/TutorialStep.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TutorialStep)
namespace System {
class Action;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace VROSC {
class TutorialStep_Condition;
}
namespace VROSC {
class TutorialStep___c;
}
// Forward declare root types
namespace VROSC {
class TutorialStep;
}
namespace VROSC {
class TutorialStep_Condition;
}
namespace VROSC {
class TutorialStep___c;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TutorialStep);
MARK_REF_PTR_T(::VROSC::TutorialStep_Condition);
MARK_REF_PTR_T(::VROSC::TutorialStep___c);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TutorialStep/Condition
class CORDL_TYPE TutorialStep_Condition : public ::System::Object {
public:
// Declarations
/// @brief Field OnConditionCompleted, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnConditionCompleted, put=__cordl_internal_set_OnConditionCompleted)) ::System::Action*  OnConditionCompleted;

/// @brief Field Text, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Text, put=__cordl_internal_set_Text)) ::StringW  Text;

static inline ::VROSC::TutorialStep_Condition* New_ctor() ;

constexpr ::System::Action* const& __cordl_internal_get_OnConditionCompleted() const;

constexpr ::System::Action*& __cordl_internal_get_OnConditionCompleted() ;

constexpr ::StringW const& __cordl_internal_get_Text() const;

constexpr ::StringW& __cordl_internal_get_Text() ;

constexpr void __cordl_internal_set_OnConditionCompleted(::System::Action*  value) ;

constexpr void __cordl_internal_set_Text(::StringW  value) ;

/// @brief Method .ctor, addr 0x1707dac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TutorialStep_Condition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TutorialStep_Condition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TutorialStep_Condition(TutorialStep_Condition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TutorialStep_Condition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TutorialStep_Condition(TutorialStep_Condition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{857};

/// @brief Field Text, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Text;

/// @brief Field OnConditionCompleted, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___OnConditionCompleted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TutorialStep_Condition, ___Text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialStep_Condition, ___OnConditionCompleted) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TutorialStep_Condition, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TutorialStep/<>c
class CORDL_TYPE TutorialStep___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VROSC::TutorialStep___c*  __9;

/// @brief Field <>9__27_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_0, put=setStaticF___9__27_0)) ::System::Func_2<::UnityW<::UnityEngine::Timeline::TrackAsset>,bool>*  __9__27_0;

static inline ::VROSC::TutorialStep___c* New_ctor() ;

/// @brief Method <Replay>b__27_0, addr 0x1707e18, size 0x78, virtual false, abstract: false, final false
inline bool _Replay_b__27_0(::UnityEngine::Timeline::TrackAsset*  t) ;

/// @brief Method .ctor, addr 0x1707e10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VROSC::TutorialStep___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::Timeline::TrackAsset>,bool>* getStaticF___9__27_0() ;

static inline void setStaticF___9(::VROSC::TutorialStep___c*  value) ;

static inline void setStaticF___9__27_0(::System::Func_2<::UnityW<::UnityEngine::Timeline::TrackAsset>,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TutorialStep___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TutorialStep___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TutorialStep___c(TutorialStep___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TutorialStep___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TutorialStep___c(TutorialStep___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{858};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::TutorialStep___c, 0x10>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, VROSC.IState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TutorialStep
class CORDL_TYPE TutorialStep : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Condition = ::VROSC::TutorialStep_Condition;

using __c = ::VROSC::TutorialStep___c;

 __declspec(property(get=get_AutoContinue)) bool  AutoContinue;

 __declspec(property(get=get_Conditions)) ::ArrayW<::VROSC::TutorialStep_Condition*,::Array<::VROSC::TutorialStep_Condition*>*>  Conditions;

 __declspec(property(get=get_IsCompleted, put=set_IsCompleted)) bool  IsCompleted;

/// @brief Field OnConditionsCompleted, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnConditionsCompleted, put=__cordl_internal_set_OnConditionsCompleted)) ::System::Action*  OnConditionsCompleted;

/// @brief Field OnTimelineReachedEnd, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTimelineReachedEnd, put=__cordl_internal_set_OnTimelineReachedEnd)) ::System::Action*  OnTimelineReachedEnd;

 __declspec(property(get=get_TipText)) ::StringW  TipText;

/// @brief Field <IsCompleted>k__BackingField, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsCompleted_k__BackingField, put=__cordl_internal_set__IsCompleted_k__BackingField)) bool  _IsCompleted_k__BackingField;

/// @brief Field _autoContinue, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__autoContinue, put=__cordl_internal_set__autoContinue)) bool  _autoContinue;

/// @brief Field _conditions, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__conditions, put=__cordl_internal_set__conditions)) ::ArrayW<::VROSC::TutorialStep_Condition*,::Array<::VROSC::TutorialStep_Condition*>*>  _conditions;

/// @brief Field _isFinished, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__isFinished, put=__cordl_internal_set__isFinished)) bool  _isFinished;

/// @brief Field _isReplayingAudio, offset 0x52, size 0x1 
 __declspec(property(get=__cordl_internal_get__isReplayingAudio, put=__cordl_internal_set__isReplayingAudio)) bool  _isReplayingAudio;

/// @brief Field _playableDirector, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__playableDirector, put=__cordl_internal_set__playableDirector)) ::UnityW<::UnityEngine::Playables::PlayableDirector>  _playableDirector;

/// @brief Field _timelineReachedEnd, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__timelineReachedEnd, put=__cordl_internal_set__timelineReachedEnd)) bool  _timelineReachedEnd;

/// @brief Field _tipText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__tipText, put=__cordl_internal_set__tipText)) ::StringW  _tipText;

/// @brief Convert operator to "::VROSC::IState"
constexpr operator  ::VROSC::IState*() noexcept;

/// @brief Method ConditionsCompleted, addr 0x17075d8, size 0xc0, virtual false, abstract: false, final false
inline void ConditionsCompleted() ;

/// @brief Method FinishStep, addr 0x1706ab0, size 0xc, virtual false, abstract: false, final false
inline void FinishStep() ;

/// @brief Method IsFinished, addr 0x17056ec, size 0x7c, virtual false, abstract: false, final false
inline ::System::Func_1<bool>* IsFinished() ;

static inline ::VROSC::TutorialStep* New_ctor() ;

/// @brief Method OnAppPaused, addr 0x1707d70, size 0x2c, virtual false, abstract: false, final false
inline void OnAppPaused(bool  paused) ;

/// @brief Method OnEnter, addr 0x1707340, size 0x298, virtual true, abstract: false, final false
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x170773c, size 0x244, virtual true, abstract: false, final false
inline void OnExit() ;

/// @brief Method Replay, addr 0x1707a3c, size 0x284, virtual true, abstract: false, final false
inline void Replay() ;

/// @brief Method Stop, addr 0x1706998, size 0x1c, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Tick, addr 0x1707980, size 0xb8, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method TimelineEnded, addr 0x1707698, size 0xa4, virtual false, abstract: false, final false
inline void TimelineEnded(::UnityEngine::Playables::PlayableDirector*  director) ;

/// @brief Method TimelineReachedEnd, addr 0x1707cc0, size 0xb0, virtual true, abstract: false, final false
inline void TimelineReachedEnd() ;

/// @brief Method UpdateData, addr 0x1707a38, size 0x4, virtual true, abstract: false, final false
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method <IsFinished>b__11_0, addr 0x1707da4, size 0x8, virtual false, abstract: false, final false
inline bool _IsFinished_b__11_0() ;

constexpr ::System::Action* const& __cordl_internal_get_OnConditionsCompleted() const;

constexpr ::System::Action*& __cordl_internal_get_OnConditionsCompleted() ;

constexpr ::System::Action* const& __cordl_internal_get_OnTimelineReachedEnd() const;

constexpr ::System::Action*& __cordl_internal_get_OnTimelineReachedEnd() ;

constexpr bool const& __cordl_internal_get__IsCompleted_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsCompleted_k__BackingField() ;

constexpr bool const& __cordl_internal_get__autoContinue() const;

constexpr bool& __cordl_internal_get__autoContinue() ;

constexpr ::ArrayW<::VROSC::TutorialStep_Condition*,::Array<::VROSC::TutorialStep_Condition*>*> const& __cordl_internal_get__conditions() const;

constexpr ::ArrayW<::VROSC::TutorialStep_Condition*,::Array<::VROSC::TutorialStep_Condition*>*>& __cordl_internal_get__conditions() ;

constexpr bool const& __cordl_internal_get__isFinished() const;

constexpr bool& __cordl_internal_get__isFinished() ;

constexpr bool const& __cordl_internal_get__isReplayingAudio() const;

constexpr bool& __cordl_internal_get__isReplayingAudio() ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get__playableDirector() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get__playableDirector() ;

constexpr bool const& __cordl_internal_get__timelineReachedEnd() const;

constexpr bool& __cordl_internal_get__timelineReachedEnd() ;

constexpr ::StringW const& __cordl_internal_get__tipText() const;

constexpr ::StringW& __cordl_internal_get__tipText() ;

constexpr void __cordl_internal_set_OnConditionsCompleted(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnTimelineReachedEnd(::System::Action*  value) ;

constexpr void __cordl_internal_set__IsCompleted_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__autoContinue(bool  value) ;

constexpr void __cordl_internal_set__conditions(::ArrayW<::VROSC::TutorialStep_Condition*,::Array<::VROSC::TutorialStep_Condition*>*>  value) ;

constexpr void __cordl_internal_set__isFinished(bool  value) ;

constexpr void __cordl_internal_set__isReplayingAudio(bool  value) ;

constexpr void __cordl_internal_set__playableDirector(::UnityW<::UnityEngine::Playables::PlayableDirector>  value) ;

constexpr void __cordl_internal_set__timelineReachedEnd(bool  value) ;

constexpr void __cordl_internal_set__tipText(::StringW  value) ;

/// @brief Method .ctor, addr 0x1707d9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AutoContinue, addr 0x1707324, size 0x8, virtual false, abstract: false, final false
inline bool get_AutoContinue() ;

/// @brief Method get_Conditions, addr 0x1707314, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::VROSC::TutorialStep_Condition*,::Array<::VROSC::TutorialStep_Condition*>*> get_Conditions() ;

/// @brief Method get_IsCompleted, addr 0x170732c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Method get_TipText, addr 0x170731c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_TipText() ;

/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* i___VROSC__IState() noexcept;

/// @brief Method set_IsCompleted, addr 0x1707334, size 0xc, virtual false, abstract: false, final false
inline void set_IsCompleted(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TutorialStep() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TutorialStep", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TutorialStep(TutorialStep && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TutorialStep", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TutorialStep(TutorialStep const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{859};

/// @brief Field _playableDirector, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableDirector>  ____playableDirector;

/// @brief Field _tipText, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____tipText;

/// @brief Field _autoContinue, offset: 0x30, size: 0x1, def value: None
 bool  ____autoContinue;

/// @brief Field _conditions, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::VROSC::TutorialStep_Condition*,::Array<::VROSC::TutorialStep_Condition*>*>  ____conditions;

/// @brief Field _isFinished, offset: 0x40, size: 0x1, def value: None
 bool  ____isFinished;

/// @brief Field OnConditionsCompleted, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  ___OnConditionsCompleted;

/// @brief Field <IsCompleted>k__BackingField, offset: 0x50, size: 0x1, def value: None
 bool  ____IsCompleted_k__BackingField;

/// @brief Field _timelineReachedEnd, offset: 0x51, size: 0x1, def value: None
 bool  ____timelineReachedEnd;

/// @brief Field _isReplayingAudio, offset: 0x52, size: 0x1, def value: None
 bool  ____isReplayingAudio;

/// @brief Field OnTimelineReachedEnd, offset: 0x58, size: 0x8, def value: None
 ::System::Action*  ___OnTimelineReachedEnd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TutorialStep, ____playableDirector) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialStep, ____tipText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialStep, ____autoContinue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialStep, ____conditions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialStep, ____isFinished) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialStep, ___OnConditionsCompleted) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialStep, ____IsCompleted_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialStep, ____timelineReachedEnd) == 0x51, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialStep, ____isReplayingAudio) == 0x52, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialStep, ___OnTimelineReachedEnd) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TutorialStep, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TutorialStep);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialStep*, "VROSC", "TutorialStep");
NEED_NO_BOX(::VROSC::TutorialStep_Condition);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialStep_Condition*, "VROSC", "TutorialStep/Condition");
NEED_NO_BOX(::VROSC::TutorialStep___c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialStep___c*, "VROSC", "TutorialStep/<>c");
