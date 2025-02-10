#pragma once
// IWYU pragma private; include "VROSC/TapeRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TapeRecorder)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class AudioSource;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class TapeRecorderDataController;
}
namespace VROSC {
class TapeRecorderUI;
}
namespace VROSC {
struct TapeRecorder__StartRecording_d__30;
}
// Forward declare root types
namespace VROSC {
class TapeRecorder;
}
namespace VROSC {
struct TapeRecorder__StartRecording_d__30;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TapeRecorder);
MARK_VAL_T(::VROSC::TapeRecorder__StartRecording_d__30);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.TapeRecorder/<StartRecording>d__30
struct CORDL_TYPE TapeRecorder__StartRecording_d__30 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16fc870, size 0x270, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16fcb48, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr TapeRecorder__StartRecording_d__30() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::TapeRecorder>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr TapeRecorder__StartRecording_d__30(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::TapeRecorder>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{827};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::TapeRecorder>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TapeRecorder__StartRecording_d__30, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorder__StartRecording_d__30, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorder__StartRecording_d__30, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorder__StartRecording_d__30, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TapeRecorder__StartRecording_d__30, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TapeRecorder
class CORDL_TYPE TapeRecorder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _StartRecording_d__30 = ::VROSC::TapeRecorder__StartRecording_d__30;

 __declspec(property(get=get_CurrentPlaybackTimeSeconds)) float_t  CurrentPlaybackTimeSeconds;

 __declspec(property(get=get_HasRecording)) bool  HasRecording;

 __declspec(property(get=get_IsSetup, put=set_IsSetup)) bool  IsSetup;

 __declspec(property(get=get_MaxRecordingLengthSeconds)) float_t  MaxRecordingLengthSeconds;

/// @brief Field OnSaveFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSaveFailure, put=setStaticF_OnSaveFailure)) ::System::Action_1<::VROSC::Error>*  OnSaveFailure;

/// @brief Field OnSaveSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSaveSuccess, put=setStaticF_OnSaveSuccess)) ::System::Action*  OnSaveSuccess;

/// @brief Field OnStartSaving, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnStartSaving, put=setStaticF_OnStartSaving)) ::System::Action*  OnStartSaving;

 __declspec(property(get=get_Playing)) bool  Playing;

 __declspec(property(get=get_Recording)) bool  Recording;

 __declspec(property(get=get_RecordingLengthSeconds)) float_t  RecordingLengthSeconds;

/// @brief Field <IsSetup>k__BackingField, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSetup_k__BackingField, put=__cordl_internal_set__IsSetup_k__BackingField)) bool  _IsSetup_k__BackingField;

/// @brief Field _audioSource, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioSource, put=__cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource>  _audioSource;

/// @brief Field _currentPlaybackSample, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentPlaybackSample, put=__cordl_internal_set__currentPlaybackSample)) int32_t  _currentPlaybackSample;

/// @brief Field _dataController, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataController, put=__cordl_internal_set__dataController)) ::VROSC::TapeRecorderDataController*  _dataController;

/// @brief Field _lastFetchedRecordingIndex, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastFetchedRecordingIndex, put=__cordl_internal_set__lastFetchedRecordingIndex)) int32_t  _lastFetchedRecordingIndex;

/// @brief Field _playing, offset 0x46, size 0x1 
 __declspec(property(get=__cordl_internal_get__playing, put=__cordl_internal_set__playing)) bool  _playing;

/// @brief Field _recording, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__recording, put=__cordl_internal_set__recording)) bool  _recording;

/// @brief Field _recordingStartTime, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordingStartTime, put=__cordl_internal_set__recordingStartTime)) double_t  _recordingStartTime;

/// @brief Field _ui, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ui, put=__cordl_internal_set__ui)) ::UnityW<::VROSC::TapeRecorderUI>  _ui;

/// @brief Field _wasPlaying, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasPlaying, put=__cordl_internal_set__wasPlaying)) bool  _wasPlaying;

/// @brief Method ConcludeRecording, addr 0x16fbbf8, size 0x50, virtual false, abstract: false, final false
inline void ConcludeRecording() ;

/// @brief Method GetElapsedRecordingTime, addr 0x16fbb08, size 0x34, virtual false, abstract: false, final false
inline float_t GetElapsedRecordingTime() ;

static inline ::VROSC::TapeRecorder* New_ctor() ;

/// @brief Method OnAudioFilterRead, addr 0x16fc518, size 0xf8, virtual false, abstract: false, final false
inline void OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels) ;

/// @brief Method PausePlayback, addr 0x16fc3b8, size 0x20, virtual false, abstract: false, final false
inline void PausePlayback() ;

/// @brief Method RecordingReachedEnd, addr 0x16fbbf4, size 0x4, virtual false, abstract: false, final false
inline void RecordingReachedEnd(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  recordingData) ;

/// @brief Method SaveRecording, addr 0x16fc0f0, size 0x21c, virtual false, abstract: false, final false
inline void SaveRecording() ;

/// @brief Method SetPlaybackTime, addr 0x16fc478, size 0xa0, virtual false, abstract: false, final false
inline void SetPlaybackTime(float_t  time) ;

/// @brief Method SetUseAsPreview, addr 0x16fc3d8, size 0x20, virtual false, abstract: false, final false
inline void SetUseAsPreview(bool  useAsPreview) ;

/// @brief Method Setup, addr 0x16fb36c, size 0x3c, virtual false, abstract: false, final false
inline void Setup(::VROSC::TapeRecorderDataController*  dataController) ;

/// @brief Method StartPlayback, addr 0x16fc394, size 0x24, virtual false, abstract: false, final false
inline void StartPlayback() ;

/// @brief Method StartRecording, addr 0x16fbb64, size 0x90, virtual false, abstract: false, final false
inline void StartRecording() ;

/// @brief Method StopRecording, addr 0x16fbc48, size 0x64, virtual false, abstract: false, final false
inline void StopRecording() ;

/// @brief Method Update, addr 0x16fb940, size 0x130, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateLoadedRecording, addr 0x16fbcac, size 0x15c, virtual false, abstract: false, final false
inline void UpdateLoadedRecording(bool  trim, float_t  recordedLengthSeconds) ;

/// @brief Method UserDataLoaded, addr 0x16fc3f8, size 0x5c, virtual false, abstract: false, final false
inline void UserDataLoaded(::VROSC::TapeRecorderDataController*  dataController) ;

/// @brief Method <SaveRecording>b__36_0, addr 0x16fc618, size 0x6c, virtual false, abstract: false, final false
inline void _SaveRecording_b__36_0() ;

/// @brief Method <SaveRecording>b__36_1, addr 0x16fc70c, size 0x80, virtual false, abstract: false, final false
inline void _SaveRecording_b__36_1(::VROSC::Error  error) ;

constexpr bool const& __cordl_internal_get__IsSetup_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSetup_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource() ;

constexpr int32_t const& __cordl_internal_get__currentPlaybackSample() const;

constexpr int32_t& __cordl_internal_get__currentPlaybackSample() ;

constexpr ::VROSC::TapeRecorderDataController* const& __cordl_internal_get__dataController() const;

constexpr ::VROSC::TapeRecorderDataController*& __cordl_internal_get__dataController() ;

constexpr int32_t const& __cordl_internal_get__lastFetchedRecordingIndex() const;

constexpr int32_t& __cordl_internal_get__lastFetchedRecordingIndex() ;

constexpr bool const& __cordl_internal_get__playing() const;

constexpr bool& __cordl_internal_get__playing() ;

constexpr bool const& __cordl_internal_get__recording() const;

constexpr bool& __cordl_internal_get__recording() ;

constexpr double_t const& __cordl_internal_get__recordingStartTime() const;

constexpr double_t& __cordl_internal_get__recordingStartTime() ;

constexpr ::UnityW<::VROSC::TapeRecorderUI> const& __cordl_internal_get__ui() const;

constexpr ::UnityW<::VROSC::TapeRecorderUI>& __cordl_internal_get__ui() ;

constexpr bool const& __cordl_internal_get__wasPlaying() const;

constexpr bool& __cordl_internal_get__wasPlaying() ;

constexpr void __cordl_internal_set__IsSetup_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__currentPlaybackSample(int32_t  value) ;

constexpr void __cordl_internal_set__dataController(::VROSC::TapeRecorderDataController*  value) ;

constexpr void __cordl_internal_set__lastFetchedRecordingIndex(int32_t  value) ;

constexpr void __cordl_internal_set__playing(bool  value) ;

constexpr void __cordl_internal_set__recording(bool  value) ;

constexpr void __cordl_internal_set__recordingStartTime(double_t  value) ;

constexpr void __cordl_internal_set__ui(::UnityW<::VROSC::TapeRecorderUI>  value) ;

constexpr void __cordl_internal_set__wasPlaying(bool  value) ;

/// @brief Method .ctor, addr 0x16fc610, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::VROSC::Error>* getStaticF_OnSaveFailure() ;

static inline ::System::Action* getStaticF_OnSaveSuccess() ;

static inline ::System::Action* getStaticF_OnStartSaving() ;

/// @brief Method get_CurrentPlaybackTimeSeconds, addr 0x16fb254, size 0x84, virtual false, abstract: false, final false
inline float_t get_CurrentPlaybackTimeSeconds() ;

/// @brief Method get_HasRecording, addr 0x16fb238, size 0x1c, virtual false, abstract: false, final false
inline bool get_HasRecording() ;

/// @brief Method get_IsSetup, addr 0x16fb358, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSetup() ;

/// @brief Method get_MaxRecordingLengthSeconds, addr 0x16fb20c, size 0x1c, virtual false, abstract: false, final false
inline float_t get_MaxRecordingLengthSeconds() ;

/// @brief Method get_Playing, addr 0x16fb230, size 0x8, virtual false, abstract: false, final false
inline bool get_Playing() ;

/// @brief Method get_Recording, addr 0x16fb228, size 0x8, virtual false, abstract: false, final false
inline bool get_Recording() ;

/// @brief Method get_RecordingLengthSeconds, addr 0x16fb2d8, size 0x80, virtual false, abstract: false, final false
inline float_t get_RecordingLengthSeconds() ;

static inline void setStaticF_OnSaveFailure(::System::Action_1<::VROSC::Error>*  value) ;

static inline void setStaticF_OnSaveSuccess(::System::Action*  value) ;

static inline void setStaticF_OnStartSaving(::System::Action*  value) ;

/// @brief Method set_IsSetup, addr 0x16fb360, size 0xc, virtual false, abstract: false, final false
inline void set_IsSetup(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TapeRecorder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TapeRecorder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TapeRecorder(TapeRecorder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TapeRecorder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TapeRecorder(TapeRecorder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{828};

/// @brief Field _ui, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::TapeRecorderUI>  ____ui;

/// @brief Field _audioSource, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____audioSource;

/// @brief Field _dataController, offset: 0x30, size: 0x8, def value: None
 ::VROSC::TapeRecorderDataController*  ____dataController;

/// @brief Field _recordingStartTime, offset: 0x38, size: 0x8, def value: None
 double_t  ____recordingStartTime;

/// @brief Field _lastFetchedRecordingIndex, offset: 0x40, size: 0x4, def value: None
 int32_t  ____lastFetchedRecordingIndex;

/// @brief Field _recording, offset: 0x44, size: 0x1, def value: None
 bool  ____recording;

/// @brief Field _wasPlaying, offset: 0x45, size: 0x1, def value: None
 bool  ____wasPlaying;

/// @brief Field _playing, offset: 0x46, size: 0x1, def value: None
 bool  ____playing;

/// @brief Field _currentPlaybackSample, offset: 0x48, size: 0x4, def value: None
 int32_t  ____currentPlaybackSample;

/// @brief Field <IsSetup>k__BackingField, offset: 0x4c, size: 0x1, def value: None
 bool  ____IsSetup_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TapeRecorder, ____ui) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorder, ____audioSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorder, ____dataController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorder, ____recordingStartTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorder, ____lastFetchedRecordingIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorder, ____recording) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorder, ____wasPlaying) == 0x45, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorder, ____playing) == 0x46, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorder, ____currentPlaybackSample) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorder, ____IsSetup_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TapeRecorder, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TapeRecorder);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TapeRecorder*, "VROSC", "TapeRecorder");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TapeRecorder__StartRecording_d__30, "VROSC", "TapeRecorder/<StartRecording>d__30");
