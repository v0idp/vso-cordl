#pragma once
// IWYU pragma private; include "VROSC/LoopPlayerPlaybackController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopPlayerPlaybackController)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Action;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class AudioSource;
}
namespace VROSC {
class LoopPlaybackConfigOverride;
}
namespace VROSC {
class LoopPlaybackConfig;
}
namespace VROSC {
class LoopPlaybackSettingsUI;
}
namespace VROSC {
struct LoopPlayerPlaybackController__UpdateClip_d__28;
}
namespace VROSC {
class LoopPlayerPlaybackController___c__DisplayClass28_0;
}
namespace VROSC {
class LoopPlayerPlaybackSettings;
}
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class LoopStationGroup;
}
namespace VROSC {
class LoopStation;
}
namespace VROSC {
class LoopVisualizationData;
}
namespace VROSC {
class Loop;
}
namespace VROSC {
class LooperSettings;
}
namespace VROSC {
struct PlaybackProgressUIData;
}
// Forward declare root types
namespace VROSC {
class LoopPlayerPlaybackController;
}
namespace VROSC {
class LoopPlayerPlaybackController___c__DisplayClass28_0;
}
namespace VROSC {
struct LoopPlayerPlaybackController__UpdateClip_d__28;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopPlayerPlaybackController);
MARK_REF_PTR_T(::VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0);
MARK_VAL_T(::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlayerPlaybackController/<>c__DisplayClass28_0
class CORDL_TYPE LoopPlayerPlaybackController___c__DisplayClass28_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::LoopPlayerPlaybackController>  __4__this;

/// @brief Field audioData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioData, put=__cordl_internal_set_audioData)) ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData;

/// @brief Field loopLength, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_loopLength, put=__cordl_internal_set_loopLength)) int32_t  loopLength;

/// @brief Field overdub, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_overdub, put=__cordl_internal_set_overdub)) bool  overdub;

static inline ::VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0* New_ctor() ;

/// @brief Method <UpdateClip>b__0, addr 0x18a1fb0, size 0x54, virtual false, abstract: false, final false
inline void _UpdateClip_b__0() ;

constexpr ::UnityW<::VROSC::LoopPlayerPlaybackController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::LoopPlayerPlaybackController>& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> const& __cordl_internal_get_audioData() const;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>& __cordl_internal_get_audioData() ;

constexpr int32_t const& __cordl_internal_get_loopLength() const;

constexpr int32_t& __cordl_internal_get_loopLength() ;

constexpr bool const& __cordl_internal_get_overdub() const;

constexpr bool& __cordl_internal_get_overdub() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::LoopPlayerPlaybackController>  value) ;

constexpr void __cordl_internal_set_audioData(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value) ;

constexpr void __cordl_internal_set_loopLength(int32_t  value) ;

constexpr void __cordl_internal_set_overdub(bool  value) ;

/// @brief Method .ctor, addr 0x18a1fa8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlayerPlaybackController___c__DisplayClass28_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerPlaybackController___c__DisplayClass28_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlayerPlaybackController___c__DisplayClass28_0(LoopPlayerPlaybackController___c__DisplayClass28_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerPlaybackController___c__DisplayClass28_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlayerPlaybackController___c__DisplayClass28_0(LoopPlayerPlaybackController___c__DisplayClass28_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{674};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayerPlaybackController>  _____4__this;

/// @brief Field audioData, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  ___audioData;

/// @brief Field loopLength, offset: 0x20, size: 0x4, def value: None
 int32_t  ___loopLength;

/// @brief Field overdub, offset: 0x24, size: 0x1, def value: None
 bool  ___overdub;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0, ___audioData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0, ___loopLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0, ___overdub) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopPlayerPlaybackController/<UpdateClip>d__28
struct CORDL_TYPE LoopPlayerPlaybackController__UpdateClip_d__28 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18a2004, size 0x310, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18a2314, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LoopPlayerPlaybackController__UpdateClip_d__28() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::LoopPlayerPlaybackController>", modifiers: "", def_value: None }, CppParam { name: "audioData", ty: "::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>", modifiers: "", def_value: None }, CppParam { name: "loopLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "overdub", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "callback", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr LoopPlayerPlaybackController__UpdateClip_d__28(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::LoopPlayerPlaybackController>  __4__this, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  loopLength, bool  overdub, ::System::Action*  callback, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{675};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayerPlaybackController>  __4__this;

/// @brief Field audioData, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData;

/// @brief Field loopLength, offset: 0x38, size: 0x4, def value: None
 int32_t  loopLength;

/// @brief Field overdub, offset: 0x3c, size: 0x1, def value: None
 bool  overdub;

/// @brief Field callback, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  callback;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28, audioData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28, loopLength) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28, overdub) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28, callback) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28, 0x50>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlayerPlaybackController
class CORDL_TYPE LoopPlayerPlaybackController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _UpdateClip_d__28 = ::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28;

using __c__DisplayClass28_0 = ::VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0;

 __declspec(property(get=get_Active)) bool  Active;

 __declspec(property(get=get_Settings, put=set_Settings)) ::VROSC::LoopPlayerPlaybackSettings*  Settings;

 __declspec(property(get=get_VisualizationData, put=set_VisualizationData)) ::VROSC::LoopVisualizationData*  VisualizationData;

 __declspec(property(get=get_Volume)) float_t  Volume;

/// @brief Field <Settings>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Settings_k__BackingField, put=__cordl_internal_set__Settings_k__BackingField)) ::VROSC::LoopPlayerPlaybackSettings*  _Settings_k__BackingField;

/// @brief Field <VisualizationData>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__VisualizationData_k__BackingField, put=__cordl_internal_set__VisualizationData_k__BackingField)) ::VROSC::LoopVisualizationData*  _VisualizationData_k__BackingField;

/// @brief Field _groupVolumeMultiplier, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__groupVolumeMultiplier, put=__cordl_internal_set__groupVolumeMultiplier)) float_t  _groupVolumeMultiplier;

/// @brief Field _isMutedBySolo, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__isMutedBySolo, put=__cordl_internal_set__isMutedBySolo)) bool  _isMutedBySolo;

/// @brief Field _lastCommandInputSample, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastCommandInputSample, put=__cordl_internal_set__lastCommandInputSample)) int32_t  _lastCommandInputSample;

/// @brief Field _loop, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__loop, put=__cordl_internal_set__loop)) ::VROSC::Loop*  _loop;

/// @brief Field _loopPlaybackSettingsUI, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopPlaybackSettingsUI, put=__cordl_internal_set__loopPlaybackSettingsUI)) ::UnityW<::VROSC::LoopPlaybackSettingsUI>  _loopPlaybackSettingsUI;

/// @brief Field _loopPlayer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopPlayer, put=__cordl_internal_set__loopPlayer)) ::UnityW<::VROSC::LoopPlayer>  _loopPlayer;

/// @brief Field _loopStation, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopStation, put=__cordl_internal_set__loopStation)) ::UnityW<::VROSC::LoopStation>  _loopStation;

/// @brief Field _looperSettings, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__looperSettings, put=__cordl_internal_set__looperSettings)) ::UnityW<::VROSC::LooperSettings>  _looperSettings;

/// @brief Field _playbackConfig, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__playbackConfig, put=__cordl_internal_set__playbackConfig)) ::VROSC::LoopPlaybackConfig*  _playbackConfig;

/// @brief Field _recordingSource, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordingSource, put=__cordl_internal_set__recordingSource)) ::UnityW<::UnityEngine::AudioSource>  _recordingSource;

/// @brief Field _tmp, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmp, put=__cordl_internal_set__tmp)) ::UnityW<::TMPro::TextMeshPro>  _tmp;

/// @brief Field _volume, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__volume, put=__cordl_internal_set__volume)) float_t  _volume;

/// @brief Method AdjustVolumeToNewGroup, addr 0x189ffe8, size 0xcc, virtual false, abstract: false, final false
inline void AdjustVolumeToNewGroup(::VROSC::LoopStationGroup*  loopStationGroup) ;

/// @brief Method ConfigChanged, addr 0x18a1ba4, size 0x54, virtual false, abstract: false, final false
inline void ConfigChanged() ;

/// @brief Method DebugPrintVolume, addr 0x18a1d64, size 0x234, virtual false, abstract: false, final false
inline void DebugPrintVolume() ;

/// @brief Method GetPlaybackProgress, addr 0x18a1160, size 0x20, virtual false, abstract: false, final false
inline ::VROSC::PlaybackProgressUIData GetPlaybackProgress() ;

static inline ::VROSC::LoopPlayerPlaybackController* New_ctor() ;

/// @brief Method OnAudioFilterRead, addr 0x18a1d4c, size 0x18, virtual false, abstract: false, final false
inline void OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels) ;

/// @brief Method OnDestroy, addr 0x18a19c8, size 0xc0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x18a19a4, size 0x1c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18a1988, size 0x1c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Play, addr 0x18a0d90, size 0x34, virtual false, abstract: false, final false
inline void Play(::VROSC::LoopPlaybackConfig*  config, bool  isResuming) ;

/// @brief Method ResumePlay, addr 0x18a0de4, size 0x18, virtual false, abstract: false, final false
inline void ResumePlay() ;

/// @brief Method SetIsMutedByGroup, addr 0x18a1d14, size 0x38, virtual false, abstract: false, final false
inline void SetIsMutedByGroup(bool  muted) ;

/// @brief Method SetLoopVolume, addr 0x18a0fa8, size 0x58, virtual false, abstract: false, final false
inline void SetLoopVolume(float_t  volume) ;

/// @brief Method SetSolo, addr 0x18a1100, size 0xc, virtual false, abstract: false, final false
inline void SetSolo(bool  isMutedBySolo) ;

/// @brief Method Setup, addr 0x18a034c, size 0x1b0, virtual false, abstract: false, final false
inline void Setup(::VROSC::LoopStation*  loopStation, ::VROSC::LoopPlayer*  loopPlayer, ::VROSC::LoopPlaybackConfig*  config, ::StringW  trackId, int32_t  globalSyncStartOffset, bool  overdub) ;

/// @brief Method StartPlayback, addr 0x18a1a88, size 0xd0, virtual false, abstract: false, final false
inline void StartPlayback(::VROSC::LoopPlaybackConfig*  config, bool  isResuming) ;

/// @brief Method Stop, addr 0x18a0e18, size 0xbc, virtual false, abstract: false, final false
inline void Stop(bool  instant) ;

/// @brief Method TogglePlay, addr 0x18a0a94, size 0x58, virtual false, abstract: false, final false
inline void TogglePlay(bool  play) ;

/// @brief Method Update, addr 0x18a1bf8, size 0x11c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAudioSourceVolume, addr 0x18a0b40, size 0x17c, virtual false, abstract: false, final false
inline void UpdateAudioSourceVolume() ;

/// @brief Method UpdateClip, addr 0x18a0850, size 0xc0, virtual false, abstract: false, final false
inline void UpdateClip(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  loopLength, bool  overdub, ::System::Action*  callback) ;

/// @brief Method UpdatePlayConfig, addr 0x18a0d20, size 0x30, virtual false, abstract: false, final false
inline void UpdatePlayConfig(::VROSC::LoopPlaybackConfigOverride*  playbackConfig) ;

constexpr ::VROSC::LoopPlayerPlaybackSettings* const& __cordl_internal_get__Settings_k__BackingField() const;

constexpr ::VROSC::LoopPlayerPlaybackSettings*& __cordl_internal_get__Settings_k__BackingField() ;

constexpr ::VROSC::LoopVisualizationData* const& __cordl_internal_get__VisualizationData_k__BackingField() const;

constexpr ::VROSC::LoopVisualizationData*& __cordl_internal_get__VisualizationData_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__groupVolumeMultiplier() const;

constexpr float_t& __cordl_internal_get__groupVolumeMultiplier() ;

constexpr bool const& __cordl_internal_get__isMutedBySolo() const;

constexpr bool& __cordl_internal_get__isMutedBySolo() ;

constexpr int32_t const& __cordl_internal_get__lastCommandInputSample() const;

constexpr int32_t& __cordl_internal_get__lastCommandInputSample() ;

constexpr ::VROSC::Loop* const& __cordl_internal_get__loop() const;

constexpr ::VROSC::Loop*& __cordl_internal_get__loop() ;

constexpr ::UnityW<::VROSC::LoopPlaybackSettingsUI> const& __cordl_internal_get__loopPlaybackSettingsUI() const;

constexpr ::UnityW<::VROSC::LoopPlaybackSettingsUI>& __cordl_internal_get__loopPlaybackSettingsUI() ;

constexpr ::UnityW<::VROSC::LoopPlayer> const& __cordl_internal_get__loopPlayer() const;

constexpr ::UnityW<::VROSC::LoopPlayer>& __cordl_internal_get__loopPlayer() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__loopStation() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__loopStation() ;

constexpr ::UnityW<::VROSC::LooperSettings> const& __cordl_internal_get__looperSettings() const;

constexpr ::UnityW<::VROSC::LooperSettings>& __cordl_internal_get__looperSettings() ;

constexpr ::VROSC::LoopPlaybackConfig* const& __cordl_internal_get__playbackConfig() const;

constexpr ::VROSC::LoopPlaybackConfig*& __cordl_internal_get__playbackConfig() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__recordingSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__recordingSource() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__tmp() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__tmp() ;

constexpr float_t const& __cordl_internal_get__volume() const;

constexpr float_t& __cordl_internal_get__volume() ;

constexpr void __cordl_internal_set__Settings_k__BackingField(::VROSC::LoopPlayerPlaybackSettings*  value) ;

constexpr void __cordl_internal_set__VisualizationData_k__BackingField(::VROSC::LoopVisualizationData*  value) ;

constexpr void __cordl_internal_set__groupVolumeMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__isMutedBySolo(bool  value) ;

constexpr void __cordl_internal_set__lastCommandInputSample(int32_t  value) ;

constexpr void __cordl_internal_set__loop(::VROSC::Loop*  value) ;

constexpr void __cordl_internal_set__loopPlaybackSettingsUI(::UnityW<::VROSC::LoopPlaybackSettingsUI>  value) ;

constexpr void __cordl_internal_set__loopPlayer(::UnityW<::VROSC::LoopPlayer>  value) ;

constexpr void __cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value) ;

constexpr void __cordl_internal_set__looperSettings(::UnityW<::VROSC::LooperSettings>  value) ;

constexpr void __cordl_internal_set__playbackConfig(::VROSC::LoopPlaybackConfig*  value) ;

constexpr void __cordl_internal_set__recordingSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__tmp(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__volume(float_t  value) ;

/// @brief Method .ctor, addr 0x18a1f98, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0x189f53c, size 0x1c, virtual false, abstract: false, final false
inline bool get_Active() ;

/// @brief Method get_Settings, addr 0x18a1968, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LoopPlayerPlaybackSettings* get_Settings() ;

/// @brief Method get_VisualizationData, addr 0x18a1978, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LoopVisualizationData* get_VisualizationData() ;

/// @brief Method get_Volume, addr 0x18a1980, size 0x8, virtual false, abstract: false, final false
inline float_t get_Volume() ;

/// @brief Method set_Settings, addr 0x18a1960, size 0x8, virtual false, abstract: false, final false
inline void set_Settings(::VROSC::LoopPlayerPlaybackSettings*  value) ;

/// @brief Method set_VisualizationData, addr 0x18a1970, size 0x8, virtual false, abstract: false, final false
inline void set_VisualizationData(::VROSC::LoopVisualizationData*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlayerPlaybackController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerPlaybackController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlayerPlaybackController(LoopPlayerPlaybackController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerPlaybackController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlayerPlaybackController(LoopPlayerPlaybackController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{676};

/// @brief Field <Settings>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::VROSC::LoopPlayerPlaybackSettings*  ____Settings_k__BackingField;

/// @brief Field <VisualizationData>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::VROSC::LoopVisualizationData*  ____VisualizationData_k__BackingField;

/// @brief Field _recordingSource, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____recordingSource;

/// @brief Field _tmp, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____tmp;

/// @brief Field _loopPlaybackSettingsUI, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlaybackSettingsUI>  ____loopPlaybackSettingsUI;

/// @brief Field _looperSettings, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::LooperSettings>  ____looperSettings;

/// @brief Field _loop, offset: 0x50, size: 0x8, def value: None
 ::VROSC::Loop*  ____loop;

/// @brief Field _loopStation, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____loopStation;

/// @brief Field _loopPlayer, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayer>  ____loopPlayer;

/// @brief Field _playbackConfig, offset: 0x68, size: 0x8, def value: None
 ::VROSC::LoopPlaybackConfig*  ____playbackConfig;

/// @brief Field _isMutedBySolo, offset: 0x70, size: 0x1, def value: None
 bool  ____isMutedBySolo;

/// @brief Field _volume, offset: 0x74, size: 0x4, def value: None
 float_t  ____volume;

/// @brief Field _groupVolumeMultiplier, offset: 0x78, size: 0x4, def value: None
 float_t  ____groupVolumeMultiplier;

/// @brief Field _lastCommandInputSample, offset: 0x7c, size: 0x4, def value: None
 int32_t  ____lastCommandInputSample;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlayerPlaybackController, ____Settings_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackController, ____VisualizationData_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackController, ____recordingSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackController, ____tmp) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackController, ____loopPlaybackSettingsUI) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackController, ____looperSettings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackController, ____loop) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackController, ____loopStation) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackController, ____loopPlayer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackController, ____playbackConfig) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackController, ____isMutedBySolo) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackController, ____volume) == 0x74, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackController, ____groupVolumeMultiplier) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackController, ____lastCommandInputSample) == 0x7c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlayerPlaybackController, 0x80>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopPlayerPlaybackController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerPlaybackController*, "VROSC", "LoopPlayerPlaybackController");
NEED_NO_BOX(::VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0*, "VROSC", "LoopPlayerPlaybackController/<>c__DisplayClass28_0");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28, "VROSC", "LoopPlayerPlaybackController/<UpdateClip>d__28");
