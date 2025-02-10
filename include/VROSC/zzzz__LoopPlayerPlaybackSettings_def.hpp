#pragma once
// IWYU pragma private; include "VROSC/LoopPlayerPlaybackSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__LoopPlaybackTiming_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopPlayerPlaybackSettings)
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentQueue_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace VROSC {
class LoopPlaybackConfigOverride;
}
namespace VROSC {
struct LoopPlaybackConfig_FadeDuration;
}
namespace VROSC {
struct LoopPlaybackConfig_TriggerSync;
}
namespace VROSC {
class LoopPlaybackConfig;
}
namespace VROSC {
struct LoopPlaybackTiming;
}
namespace VROSC {
class LoopPlayerPlaybackLoopingState;
}
namespace VROSC {
class LoopPlayerPlaybackState;
}
namespace VROSC {
class LoopPlayerPlaybackStoppedState;
}
namespace VROSC {
class LoopPlayerPlaybackWillStartState;
}
namespace VROSC {
class LoopPlayerPlaybackWillStopState;
}
namespace VROSC {
class Loop;
}
// Forward declare root types
namespace VROSC {
class LoopPlayerPlaybackSettings;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopPlayerPlaybackSettings);
// Dependencies System.Object, VROSC.LoopPlaybackTiming
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlayerPlaybackSettings
class CORDL_TYPE LoopPlayerPlaybackSettings : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Active, put=set_Active)) bool  Active;

 __declspec(property(get=get_BarRelativeStartOffset)) int32_t  BarRelativeStartOffset;

 __declspec(property(get=get_Current, put=set_Current)) ::VROSC::LoopPlaybackConfig*  Current;

 __declspec(property(get=get_CurrentState, put=set_CurrentState)) ::VROSC::LoopPlayerPlaybackState*  CurrentState;

/// @brief Field DebugLogQueue, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_DebugLogQueue, put=__cordl_internal_set_DebugLogQueue)) ::System::Collections::Concurrent::ConcurrentQueue_1<::StringW>*  DebugLogQueue;

 __declspec(property(get=get_FadeMultiplier, put=set_FadeMultiplier)) float_t  FadeMultiplier;

 __declspec(property(get=get_Local, put=set_Local)) ::VROSC::LoopPlaybackConfig*  Local;

 __declspec(property(get=get_Loop, put=set_Loop)) ::VROSC::Loop*  Loop;

 __declspec(property(get=get_LoopingState, put=set_LoopingState)) ::VROSC::LoopPlayerPlaybackLoopingState*  LoopingState;

 __declspec(property(get=get_NextState, put=set_NextState)) ::VROSC::LoopPlayerPlaybackState*  NextState;

/// @brief Field OnPlayingEnd, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayingEnd, put=__cordl_internal_set_OnPlayingEnd)) ::System::Action*  OnPlayingEnd;

/// @brief Field OnPlayingStart, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayingStart, put=__cordl_internal_set_OnPlayingStart)) ::System::Action*  OnPlayingStart;

/// @brief Field OnStateChanged, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStateChanged, put=__cordl_internal_set_OnStateChanged)) ::System::Action_1<::VROSC::LoopPlayerPlaybackState*>*  OnStateChanged;

 __declspec(property(get=get_PlayFromStartOffset)) int32_t  PlayFromStartOffset;

 __declspec(property(get=get_Playing, put=set_Playing)) bool  Playing;

 __declspec(property(get=get_StoppedState, put=set_StoppedState)) ::VROSC::LoopPlayerPlaybackStoppedState*  StoppedState;

 __declspec(property(get=get_Timing, put=set_Timing)) ::VROSC::LoopPlaybackTiming  Timing;

 __declspec(property(get=get_WaitingToStart)) bool  WaitingToStart;

 __declspec(property(get=get_WillStartState, put=set_WillStartState)) ::VROSC::LoopPlayerPlaybackWillStartState*  WillStartState;

 __declspec(property(get=get_WillStopState, put=set_WillStopState)) ::VROSC::LoopPlayerPlaybackWillStopState*  WillStopState;

/// @brief Field <Active>k__BackingField, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get__Active_k__BackingField, put=__cordl_internal_set__Active_k__BackingField)) bool  _Active_k__BackingField;

/// @brief Field <CurrentState>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentState_k__BackingField, put=__cordl_internal_set__CurrentState_k__BackingField)) ::VROSC::LoopPlayerPlaybackState*  _CurrentState_k__BackingField;

/// @brief Field <Current>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Current_k__BackingField, put=__cordl_internal_set__Current_k__BackingField)) ::VROSC::LoopPlaybackConfig*  _Current_k__BackingField;

/// @brief Field <FadeMultiplier>k__BackingField, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__FadeMultiplier_k__BackingField, put=__cordl_internal_set__FadeMultiplier_k__BackingField)) float_t  _FadeMultiplier_k__BackingField;

/// @brief Field <Local>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Local_k__BackingField, put=__cordl_internal_set__Local_k__BackingField)) ::VROSC::LoopPlaybackConfig*  _Local_k__BackingField;

/// @brief Field <Loop>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Loop_k__BackingField, put=__cordl_internal_set__Loop_k__BackingField)) ::VROSC::Loop*  _Loop_k__BackingField;

/// @brief Field <LoopingState>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__LoopingState_k__BackingField, put=__cordl_internal_set__LoopingState_k__BackingField)) ::VROSC::LoopPlayerPlaybackLoopingState*  _LoopingState_k__BackingField;

/// @brief Field <NextState>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__NextState_k__BackingField, put=__cordl_internal_set__NextState_k__BackingField)) ::VROSC::LoopPlayerPlaybackState*  _NextState_k__BackingField;

/// @brief Field <Playing>k__BackingField, offset 0x65, size 0x1 
 __declspec(property(get=__cordl_internal_get__Playing_k__BackingField, put=__cordl_internal_set__Playing_k__BackingField)) bool  _Playing_k__BackingField;

/// @brief Field <StoppedState>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__StoppedState_k__BackingField, put=__cordl_internal_set__StoppedState_k__BackingField)) ::VROSC::LoopPlayerPlaybackStoppedState*  _StoppedState_k__BackingField;

/// @brief Field <Timing>k__BackingField, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get__Timing_k__BackingField, put=__cordl_internal_set__Timing_k__BackingField)) ::VROSC::LoopPlaybackTiming  _Timing_k__BackingField;

/// @brief Field <WillStartState>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__WillStartState_k__BackingField, put=__cordl_internal_set__WillStartState_k__BackingField)) ::VROSC::LoopPlayerPlaybackWillStartState*  _WillStartState_k__BackingField;

/// @brief Field <WillStopState>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__WillStopState_k__BackingField, put=__cordl_internal_set__WillStopState_k__BackingField)) ::VROSC::LoopPlayerPlaybackWillStopState*  _WillStopState_k__BackingField;

/// @brief Field _allowedLeadupToNoTailLoop, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__allowedLeadupToNoTailLoop, put=__cordl_internal_set__allowedLeadupToNoTailLoop)) int32_t  _allowedLeadupToNoTailLoop;

/// @brief Field _fadeWithNaturalTail, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get__fadeWithNaturalTail, put=__cordl_internal_set__fadeWithNaturalTail)) bool  _fadeWithNaturalTail;

/// @brief Field _lastBPM, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastBPM, put=__cordl_internal_set__lastBPM)) double_t  _lastBPM;

/// @brief Field _lastReadSample, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastReadSample, put=__cordl_internal_set__lastReadSample)) int32_t  _lastReadSample;

/// @brief Field _noTailLoops, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__noTailLoops, put=__cordl_internal_set__noTailLoops)) int32_t  _noTailLoops;

/// @brief Field _playedLength, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__playedLength, put=__cordl_internal_set__playedLength)) int32_t  _playedLength;

/// @brief Field _wasPlaying, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasPlaying, put=__cordl_internal_set__wasPlaying)) bool  _wasPlaying;

/// @brief Method CheckForStateSwitchThisSample, addr 0x189b300, size 0x98, virtual false, abstract: false, final false
inline bool CheckForStateSwitchThisSample(int32_t  atSample) ;

/// @brief Method GetNextLoopPointFromOffsetStart, addr 0x189aa64, size 0xd0, virtual false, abstract: false, final false
inline int32_t GetNextLoopPointFromOffsetStart(int32_t  startSample) ;

/// @brief Method LoadLastPlaybackData, addr 0x189af90, size 0x2c, virtual false, abstract: false, final false
inline void LoadLastPlaybackData() ;

static inline ::VROSC::LoopPlayerPlaybackSettings* New_ctor() ;

/// @brief Method PerformIsPlayingCheck, addr 0x189b204, size 0x84, virtual false, abstract: false, final false
inline void PerformIsPlayingCheck() ;

/// @brief Method ProgressState, addr 0x189b1ac, size 0x58, virtual false, abstract: false, final false
inline void ProgressState(int32_t  atSample) ;

/// @brief Method RenderPlaybackData, addr 0x189b410, size 0x4d8, virtual false, abstract: false, final false
inline void RenderPlaybackData(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels) ;

/// @brief Method ResumePlay, addr 0x189b040, size 0x30, virtual false, abstract: false, final false
inline void ResumePlay() ;

/// @brief Method SetFadeIn, addr 0x189a664, size 0x4, virtual false, abstract: false, final false
inline void SetFadeIn(::VROSC::LoopPlaybackConfig_FadeDuration  mode) ;

/// @brief Method SetFadeOut, addr 0x189a668, size 0x44, virtual false, abstract: false, final false
inline void SetFadeOut(::VROSC::LoopPlaybackConfig_FadeDuration  mode) ;

/// @brief Method SetOneShot, addr 0x189a944, size 0xa4, virtual false, abstract: false, final false
inline void SetOneShot(bool  oneShot) ;

/// @brief Method SetRetrigger, addr 0x189ab34, size 0x4, virtual false, abstract: false, final false
inline void SetRetrigger(bool  retrigger) ;

/// @brief Method SetStart, addr 0x189a65c, size 0x4, virtual false, abstract: false, final false
inline void SetStart(::VROSC::LoopPlaybackConfig_TriggerSync  mode) ;

/// @brief Method SetState, addr 0x189afbc, size 0x84, virtual false, abstract: false, final false
inline void SetState(::VROSC::LoopPlayerPlaybackState*  currentState, int32_t  atSample) ;

/// @brief Method SetStop, addr 0x189a660, size 0x4, virtual false, abstract: false, final false
inline void SetStop(::VROSC::LoopPlaybackConfig_TriggerSync  mode) ;

/// @brief Method Setup, addr 0x189a114, size 0x4f0, virtual false, abstract: false, final false
inline void Setup(::VROSC::Loop*  loop, ::VROSC::LoopPlaybackConfig*  config) ;

/// @brief Method ShouldCheckActivityChangeBeforeSample, addr 0x189b288, size 0x38, virtual false, abstract: false, final false
inline bool ShouldCheckActivityChangeBeforeSample(int32_t  samples) ;

/// @brief Method ShouldShowPlayIcon, addr 0x189b070, size 0x74, virtual false, abstract: false, final false
inline bool ShouldShowPlayIcon() ;

/// @brief Method ShouldUpdateFading, addr 0x189b2e4, size 0x1c, virtual false, abstract: false, final false
inline bool ShouldUpdateFading() ;

/// @brief Method StartRequested, addr 0x189ab38, size 0x3e0, virtual false, abstract: false, final false
inline void StartRequested(::VROSC::LoopPlaybackConfig*  config, bool  isResuming) ;

/// @brief Method StopRequested, addr 0x189b10c, size 0xa0, virtual false, abstract: false, final false
inline void StopRequested(int32_t  atSample, bool  instant) ;

/// @brief Method UpdateFading, addr 0x189b3dc, size 0x34, virtual false, abstract: false, final false
inline void UpdateFading(int32_t  atSample) ;

/// @brief Method UpdatePlayConfig, addr 0x189b0e4, size 0x28, virtual false, abstract: false, final false
inline void UpdatePlayConfig(::VROSC::LoopPlaybackConfigOverride*  newConfig) ;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::StringW>* const& __cordl_internal_get_DebugLogQueue() const;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::StringW>*& __cordl_internal_get_DebugLogQueue() ;

constexpr ::System::Action* const& __cordl_internal_get_OnPlayingEnd() const;

constexpr ::System::Action*& __cordl_internal_get_OnPlayingEnd() ;

constexpr ::System::Action* const& __cordl_internal_get_OnPlayingStart() const;

constexpr ::System::Action*& __cordl_internal_get_OnPlayingStart() ;

constexpr ::System::Action_1<::VROSC::LoopPlayerPlaybackState*>* const& __cordl_internal_get_OnStateChanged() const;

constexpr ::System::Action_1<::VROSC::LoopPlayerPlaybackState*>*& __cordl_internal_get_OnStateChanged() ;

constexpr bool const& __cordl_internal_get__Active_k__BackingField() const;

constexpr bool& __cordl_internal_get__Active_k__BackingField() ;

constexpr ::VROSC::LoopPlayerPlaybackState* const& __cordl_internal_get__CurrentState_k__BackingField() const;

constexpr ::VROSC::LoopPlayerPlaybackState*& __cordl_internal_get__CurrentState_k__BackingField() ;

constexpr ::VROSC::LoopPlaybackConfig* const& __cordl_internal_get__Current_k__BackingField() const;

constexpr ::VROSC::LoopPlaybackConfig*& __cordl_internal_get__Current_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__FadeMultiplier_k__BackingField() const;

constexpr float_t& __cordl_internal_get__FadeMultiplier_k__BackingField() ;

constexpr ::VROSC::LoopPlaybackConfig* const& __cordl_internal_get__Local_k__BackingField() const;

constexpr ::VROSC::LoopPlaybackConfig*& __cordl_internal_get__Local_k__BackingField() ;

constexpr ::VROSC::Loop* const& __cordl_internal_get__Loop_k__BackingField() const;

constexpr ::VROSC::Loop*& __cordl_internal_get__Loop_k__BackingField() ;

constexpr ::VROSC::LoopPlayerPlaybackLoopingState* const& __cordl_internal_get__LoopingState_k__BackingField() const;

constexpr ::VROSC::LoopPlayerPlaybackLoopingState*& __cordl_internal_get__LoopingState_k__BackingField() ;

constexpr ::VROSC::LoopPlayerPlaybackState* const& __cordl_internal_get__NextState_k__BackingField() const;

constexpr ::VROSC::LoopPlayerPlaybackState*& __cordl_internal_get__NextState_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Playing_k__BackingField() const;

constexpr bool& __cordl_internal_get__Playing_k__BackingField() ;

constexpr ::VROSC::LoopPlayerPlaybackStoppedState* const& __cordl_internal_get__StoppedState_k__BackingField() const;

constexpr ::VROSC::LoopPlayerPlaybackStoppedState*& __cordl_internal_get__StoppedState_k__BackingField() ;

constexpr ::VROSC::LoopPlaybackTiming const& __cordl_internal_get__Timing_k__BackingField() const;

constexpr ::VROSC::LoopPlaybackTiming& __cordl_internal_get__Timing_k__BackingField() ;

constexpr ::VROSC::LoopPlayerPlaybackWillStartState* const& __cordl_internal_get__WillStartState_k__BackingField() const;

constexpr ::VROSC::LoopPlayerPlaybackWillStartState*& __cordl_internal_get__WillStartState_k__BackingField() ;

constexpr ::VROSC::LoopPlayerPlaybackWillStopState* const& __cordl_internal_get__WillStopState_k__BackingField() const;

constexpr ::VROSC::LoopPlayerPlaybackWillStopState*& __cordl_internal_get__WillStopState_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__allowedLeadupToNoTailLoop() const;

constexpr int32_t& __cordl_internal_get__allowedLeadupToNoTailLoop() ;

constexpr bool const& __cordl_internal_get__fadeWithNaturalTail() const;

constexpr bool& __cordl_internal_get__fadeWithNaturalTail() ;

constexpr double_t const& __cordl_internal_get__lastBPM() const;

constexpr double_t& __cordl_internal_get__lastBPM() ;

constexpr int32_t const& __cordl_internal_get__lastReadSample() const;

constexpr int32_t& __cordl_internal_get__lastReadSample() ;

constexpr int32_t const& __cordl_internal_get__noTailLoops() const;

constexpr int32_t& __cordl_internal_get__noTailLoops() ;

constexpr int32_t const& __cordl_internal_get__playedLength() const;

constexpr int32_t& __cordl_internal_get__playedLength() ;

constexpr bool const& __cordl_internal_get__wasPlaying() const;

constexpr bool& __cordl_internal_get__wasPlaying() ;

constexpr void __cordl_internal_set_DebugLogQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnPlayingEnd(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnPlayingStart(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnStateChanged(::System::Action_1<::VROSC::LoopPlayerPlaybackState*>*  value) ;

constexpr void __cordl_internal_set__Active_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__CurrentState_k__BackingField(::VROSC::LoopPlayerPlaybackState*  value) ;

constexpr void __cordl_internal_set__Current_k__BackingField(::VROSC::LoopPlaybackConfig*  value) ;

constexpr void __cordl_internal_set__FadeMultiplier_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Local_k__BackingField(::VROSC::LoopPlaybackConfig*  value) ;

constexpr void __cordl_internal_set__Loop_k__BackingField(::VROSC::Loop*  value) ;

constexpr void __cordl_internal_set__LoopingState_k__BackingField(::VROSC::LoopPlayerPlaybackLoopingState*  value) ;

constexpr void __cordl_internal_set__NextState_k__BackingField(::VROSC::LoopPlayerPlaybackState*  value) ;

constexpr void __cordl_internal_set__Playing_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__StoppedState_k__BackingField(::VROSC::LoopPlayerPlaybackStoppedState*  value) ;

constexpr void __cordl_internal_set__Timing_k__BackingField(::VROSC::LoopPlaybackTiming  value) ;

constexpr void __cordl_internal_set__WillStartState_k__BackingField(::VROSC::LoopPlayerPlaybackWillStartState*  value) ;

constexpr void __cordl_internal_set__WillStopState_k__BackingField(::VROSC::LoopPlayerPlaybackWillStopState*  value) ;

constexpr void __cordl_internal_set__allowedLeadupToNoTailLoop(int32_t  value) ;

constexpr void __cordl_internal_set__fadeWithNaturalTail(bool  value) ;

constexpr void __cordl_internal_set__lastBPM(double_t  value) ;

constexpr void __cordl_internal_set__lastReadSample(int32_t  value) ;

constexpr void __cordl_internal_set__noTailLoops(int32_t  value) ;

constexpr void __cordl_internal_set__playedLength(int32_t  value) ;

constexpr void __cordl_internal_set__wasPlaying(bool  value) ;

/// @brief Method .ctor, addr 0x189b8e8, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0x189a010, size 0x8, virtual false, abstract: false, final false
inline bool get_Active() ;

/// @brief Method get_AllowedLeadupToNoTailLoop, addr 0x189a094, size 0x80, virtual false, abstract: false, final false
static inline int32_t get_AllowedLeadupToNoTailLoop() ;

/// @brief Method get_BarRelativeStartOffset, addr 0x189a08c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_BarRelativeStartOffset() ;

/// @brief Method get_Current, addr 0x1899f70, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LoopPlaybackConfig* get_Current() ;

/// @brief Method get_CurrentState, addr 0x1899fd0, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LoopPlayerPlaybackState* get_CurrentState() ;

/// @brief Method get_FadeMultiplier, addr 0x189a07c, size 0x8, virtual false, abstract: false, final false
inline float_t get_FadeMultiplier() ;

/// @brief Method get_Local, addr 0x1899f60, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LoopPlaybackConfig* get_Local() ;

/// @brief Method get_Loop, addr 0x1899f80, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::Loop* get_Loop() ;

/// @brief Method get_LoopingState, addr 0x1899fb0, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LoopPlayerPlaybackLoopingState* get_LoopingState() ;

/// @brief Method get_NextState, addr 0x1899fe0, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LoopPlayerPlaybackState* get_NextState() ;

/// @brief Method get_PlayFromStartOffset, addr 0x189a084, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PlayFromStartOffset() ;

/// @brief Method get_Playing, addr 0x189a024, size 0x8, virtual false, abstract: false, final false
inline bool get_Playing() ;

/// @brief Method get_StoppedState, addr 0x1899f90, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LoopPlayerPlaybackStoppedState* get_StoppedState() ;

/// @brief Method get_Timing, addr 0x1899ff4, size 0x10, virtual false, abstract: false, final false
inline ::VROSC::LoopPlaybackTiming get_Timing() ;

/// @brief Method get_WaitingToStart, addr 0x189a02c, size 0x38, virtual false, abstract: false, final false
inline bool get_WaitingToStart() ;

/// @brief Method get_WillStartState, addr 0x1899fa0, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LoopPlayerPlaybackWillStartState* get_WillStartState() ;

/// @brief Method get_WillStopState, addr 0x1899fc0, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LoopPlayerPlaybackWillStopState* get_WillStopState() ;

/// @brief Method set_Active, addr 0x189a004, size 0xc, virtual false, abstract: false, final false
inline void set_Active(bool  value) ;

/// @brief Method set_Current, addr 0x1899f68, size 0x8, virtual false, abstract: false, final false
inline void set_Current(::VROSC::LoopPlaybackConfig*  value) ;

/// @brief Method set_CurrentState, addr 0x1899fc8, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentState(::VROSC::LoopPlayerPlaybackState*  value) ;

/// @brief Method set_FadeMultiplier, addr 0x189a074, size 0x8, virtual false, abstract: false, final false
inline void set_FadeMultiplier(float_t  value) ;

/// @brief Method set_Local, addr 0x1899f58, size 0x8, virtual false, abstract: false, final false
inline void set_Local(::VROSC::LoopPlaybackConfig*  value) ;

/// @brief Method set_Loop, addr 0x1899f78, size 0x8, virtual false, abstract: false, final false
inline void set_Loop(::VROSC::Loop*  value) ;

/// @brief Method set_LoopingState, addr 0x1899fa8, size 0x8, virtual false, abstract: false, final false
inline void set_LoopingState(::VROSC::LoopPlayerPlaybackLoopingState*  value) ;

/// @brief Method set_NextState, addr 0x1899fd8, size 0x8, virtual false, abstract: false, final false
inline void set_NextState(::VROSC::LoopPlayerPlaybackState*  value) ;

/// @brief Method set_Playing, addr 0x189a018, size 0xc, virtual false, abstract: false, final false
inline void set_Playing(bool  value) ;

/// @brief Method set_StoppedState, addr 0x1899f88, size 0x8, virtual false, abstract: false, final false
inline void set_StoppedState(::VROSC::LoopPlayerPlaybackStoppedState*  value) ;

/// @brief Method set_Timing, addr 0x1899fe8, size 0xc, virtual false, abstract: false, final false
inline void set_Timing(::VROSC::LoopPlaybackTiming  value) ;

/// @brief Method set_WillStartState, addr 0x1899f98, size 0x8, virtual false, abstract: false, final false
inline void set_WillStartState(::VROSC::LoopPlayerPlaybackWillStartState*  value) ;

/// @brief Method set_WillStopState, addr 0x1899fb8, size 0x8, virtual false, abstract: false, final false
inline void set_WillStopState(::VROSC::LoopPlayerPlaybackWillStopState*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlayerPlaybackSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerPlaybackSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlayerPlaybackSettings(LoopPlayerPlaybackSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerPlaybackSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlayerPlaybackSettings(LoopPlayerPlaybackSettings const& ) = delete;

/// @brief Field AllowedLeadupToNoTailLoopInSeconds offset 0xffffffff size 0x4
static constexpr float_t  AllowedLeadupToNoTailLoopInSeconds{static_cast<float_t>(0.1f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{664};

/// @brief Field <Local>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::VROSC::LoopPlaybackConfig*  ____Local_k__BackingField;

/// @brief Field <Current>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::VROSC::LoopPlaybackConfig*  ____Current_k__BackingField;

/// @brief Field <Loop>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::VROSC::Loop*  ____Loop_k__BackingField;

/// @brief Field <StoppedState>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::VROSC::LoopPlayerPlaybackStoppedState*  ____StoppedState_k__BackingField;

/// @brief Field <WillStartState>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::VROSC::LoopPlayerPlaybackWillStartState*  ____WillStartState_k__BackingField;

/// @brief Field <LoopingState>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::VROSC::LoopPlayerPlaybackLoopingState*  ____LoopingState_k__BackingField;

/// @brief Field <WillStopState>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::VROSC::LoopPlayerPlaybackWillStopState*  ____WillStopState_k__BackingField;

/// @brief Field <CurrentState>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::VROSC::LoopPlayerPlaybackState*  ____CurrentState_k__BackingField;

/// @brief Field <NextState>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::VROSC::LoopPlayerPlaybackState*  ____NextState_k__BackingField;

/// @brief Field <Timing>k__BackingField, offset: 0x58, size: 0xc, def value: None
 ::VROSC::LoopPlaybackTiming  ____Timing_k__BackingField;

/// @brief Field <Active>k__BackingField, offset: 0x64, size: 0x1, def value: None
 bool  ____Active_k__BackingField;

/// @brief Field <Playing>k__BackingField, offset: 0x65, size: 0x1, def value: None
 bool  ____Playing_k__BackingField;

/// @brief Field <FadeMultiplier>k__BackingField, offset: 0x68, size: 0x4, def value: None
 float_t  ____FadeMultiplier_k__BackingField;

/// @brief Field _wasPlaying, offset: 0x6c, size: 0x1, def value: None
 bool  ____wasPlaying;

/// @brief Field _noTailLoops, offset: 0x70, size: 0x4, def value: None
 int32_t  ____noTailLoops;

/// @brief Field _fadeWithNaturalTail, offset: 0x74, size: 0x1, def value: None
 bool  ____fadeWithNaturalTail;

/// @brief Field _playedLength, offset: 0x78, size: 0x4, def value: None
 int32_t  ____playedLength;

/// @brief Field _allowedLeadupToNoTailLoop, offset: 0x7c, size: 0x4, def value: None
 int32_t  ____allowedLeadupToNoTailLoop;

/// @brief Field OnPlayingStart, offset: 0x80, size: 0x8, def value: None
 ::System::Action*  ___OnPlayingStart;

/// @brief Field OnPlayingEnd, offset: 0x88, size: 0x8, def value: None
 ::System::Action*  ___OnPlayingEnd;

/// @brief Field OnStateChanged, offset: 0x90, size: 0x8, def value: None
 ::System::Action_1<::VROSC::LoopPlayerPlaybackState*>*  ___OnStateChanged;

/// @brief Field DebugLogQueue, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentQueue_1<::StringW>*  ___DebugLogQueue;

/// @brief Field _lastReadSample, offset: 0xa0, size: 0x4, def value: None
 int32_t  ____lastReadSample;

/// @brief Field _lastBPM, offset: 0xa8, size: 0x8, def value: None
 double_t  ____lastBPM;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ____Local_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ____Current_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ____Loop_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ____StoppedState_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ____WillStartState_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ____LoopingState_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ____WillStopState_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ____CurrentState_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ____NextState_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ____Timing_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ____Active_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ____Playing_k__BackingField) == 0x65, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ____FadeMultiplier_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ____wasPlaying) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ____noTailLoops) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ____fadeWithNaturalTail) == 0x74, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ____playedLength) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ____allowedLeadupToNoTailLoop) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ___OnPlayingStart) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ___OnPlayingEnd) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ___OnStateChanged) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ___DebugLogQueue) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ____lastReadSample) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackSettings, ____lastBPM) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlayerPlaybackSettings, 0xb0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopPlayerPlaybackSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerPlaybackSettings*, "VROSC", "LoopPlayerPlaybackSettings");
