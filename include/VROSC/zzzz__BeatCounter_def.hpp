#pragma once
// IWYU pragma private; include "VROSC/BeatCounter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatCounter)
namespace GlobalNamespace {
class AbletonLink;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class AudioSource;
}
namespace VROSC {
class BeatCounterUI;
}
namespace VROSC {
struct BeatCounter_SyncSource;
}
namespace VROSC {
class Metronome;
}
namespace VROSC {
class UserDataControllers;
}
// Forward declare root types
namespace VROSC {
struct BeatCounter_SyncSource;
}
namespace VROSC {
class BeatCounter;
}
// Write type traits
MARK_VAL_T(::VROSC::BeatCounter_SyncSource);
MARK_REF_PTR_T(::VROSC::BeatCounter);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.BeatCounter/SyncSource
struct CORDL_TYPE BeatCounter_SyncSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BeatCounter_SyncSource_Unwrapped
enum struct __BeatCounter_SyncSource_Unwrapped : int32_t {
__E_Looper = static_cast<int32_t>(0x0),
__E_BeatCounter = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BeatCounter_SyncSource_Unwrapped () const noexcept {
return static_cast<__BeatCounter_SyncSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BeatCounter_SyncSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BeatCounter_SyncSource(int32_t  value__) noexcept;

/// @brief Field BeatCounter value: I32(1)
static ::VROSC::BeatCounter_SyncSource const BeatCounter;

/// @brief Field Looper value: I32(0)
static ::VROSC::BeatCounter_SyncSource const Looper;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{303};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BeatCounter_SyncSource, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BeatCounter_SyncSource, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, VROSC.BeatCounter::SyncSource
namespace VROSC {
// Is value type: false
// CS Name: VROSC.BeatCounter
class CORDL_TYPE BeatCounter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SyncSource = ::VROSC::BeatCounter_SyncSource;

 __declspec(property(get=get_AudioBarNumber, put=set_AudioBarNumber)) int32_t  AudioBarNumber;

 __declspec(property(get=get_AudioBarProgress, put=set_AudioBarProgress)) double_t  AudioBarProgress;

 __declspec(property(get=get_BPM, put=set_BPM)) double_t  BPM;

 __declspec(property(get=get_BarLength)) int32_t  BarLength;

 __declspec(property(get=get_BeatLength, put=set_BeatLength)) int32_t  BeatLength;

 __declspec(property(get=get_BeatsPerBar, put=set_BeatsPerBar)) int32_t  BeatsPerBar;

 __declspec(property(get=get_CurrentSyncSample, put=set_CurrentSyncSample)) int32_t  CurrentSyncSample;

 __declspec(property(get=get_CurrentSyncSource, put=set_CurrentSyncSource)) ::VROSC::BeatCounter_SyncSource  CurrentSyncSource;

 __declspec(property(get=get_IsPlaying, put=set_IsPlaying)) bool  IsPlaying;

 __declspec(property(get=get_IsVisualBeatFrame, put=set_IsVisualBeatFrame)) bool  IsVisualBeatFrame;

 __declspec(property(get=get_Metronome)) ::UnityW<::VROSC::Metronome>  Metronome;

/// @brief Field OnBPMChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnBPMChanged, put=setStaticF_OnBPMChanged)) ::System::Action_1<double_t>*  OnBPMChanged;

/// @brief Field OnBeatsPerBarChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnBeatsPerBarChanged, put=setStaticF_OnBeatsPerBarChanged)) ::System::Action_1<int32_t>*  OnBeatsPerBarChanged;

/// @brief Field OnSyncSourceChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSyncSourceChanged, put=setStaticF_OnSyncSourceChanged)) ::System::Action_1<::VROSC::BeatCounter_SyncSource>*  OnSyncSourceChanged;

/// @brief Field OnVisualBeat, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnVisualBeat, put=setStaticF_OnVisualBeat)) ::System::Action_1<int32_t>*  OnVisualBeat;

 __declspec(property(get=get_UseAbletonLink, put=set_UseAbletonLink)) bool  UseAbletonLink;

 __declspec(property(get=get_VisualBarNumber, put=set_VisualBarNumber)) int32_t  VisualBarNumber;

 __declspec(property(get=get_VisualBarProgress, put=set_VisualBarProgress)) float_t  VisualBarProgress;

 __declspec(property(get=get_VisualCurrentBeat, put=set_VisualCurrentBeat)) int32_t  VisualCurrentBeat;

/// @brief Field <AudioBarNumber>k__BackingField, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__AudioBarNumber_k__BackingField, put=__cordl_internal_set__AudioBarNumber_k__BackingField)) int32_t  _AudioBarNumber_k__BackingField;

/// @brief Field <AudioBarProgress>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__AudioBarProgress_k__BackingField, put=__cordl_internal_set__AudioBarProgress_k__BackingField)) double_t  _AudioBarProgress_k__BackingField;

/// @brief Field <BPM>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__BPM_k__BackingField, put=__cordl_internal_set__BPM_k__BackingField)) double_t  _BPM_k__BackingField;

/// @brief Field <BeatLength>k__BackingField, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__BeatLength_k__BackingField, put=__cordl_internal_set__BeatLength_k__BackingField)) int32_t  _BeatLength_k__BackingField;

/// @brief Field <BeatsPerBar>k__BackingField, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__BeatsPerBar_k__BackingField, put=__cordl_internal_set__BeatsPerBar_k__BackingField)) int32_t  _BeatsPerBar_k__BackingField;

/// @brief Field <CurrentSyncSample>k__BackingField, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentSyncSample_k__BackingField, put=__cordl_internal_set__CurrentSyncSample_k__BackingField)) int32_t  _CurrentSyncSample_k__BackingField;

/// @brief Field <CurrentSyncSource>k__BackingField, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentSyncSource_k__BackingField, put=__cordl_internal_set__CurrentSyncSource_k__BackingField)) ::VROSC::BeatCounter_SyncSource  _CurrentSyncSource_k__BackingField;

/// @brief Field <IsPlaying>k__BackingField, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsPlaying_k__BackingField, put=__cordl_internal_set__IsPlaying_k__BackingField)) bool  _IsPlaying_k__BackingField;

/// @brief Field <IsVisualBeatFrame>k__BackingField, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsVisualBeatFrame_k__BackingField, put=__cordl_internal_set__IsVisualBeatFrame_k__BackingField)) bool  _IsVisualBeatFrame_k__BackingField;

/// @brief Field <UseAbletonLink>k__BackingField, offset 0xc4, size 0x1 
 __declspec(property(get=__cordl_internal_get__UseAbletonLink_k__BackingField, put=__cordl_internal_set__UseAbletonLink_k__BackingField)) bool  _UseAbletonLink_k__BackingField;

/// @brief Field <VisualBarNumber>k__BackingField, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__VisualBarNumber_k__BackingField, put=__cordl_internal_set__VisualBarNumber_k__BackingField)) int32_t  _VisualBarNumber_k__BackingField;

/// @brief Field <VisualBarProgress>k__BackingField, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__VisualBarProgress_k__BackingField, put=__cordl_internal_set__VisualBarProgress_k__BackingField)) float_t  _VisualBarProgress_k__BackingField;

/// @brief Field <VisualCurrentBeat>k__BackingField, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__VisualCurrentBeat_k__BackingField, put=__cordl_internal_set__VisualCurrentBeat_k__BackingField)) int32_t  _VisualCurrentBeat_k__BackingField;

/// @brief Field _abletonLink, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__abletonLink, put=__cordl_internal_set__abletonLink)) ::GlobalNamespace::AbletonLink*  _abletonLink;

/// @brief Field _beatCounterAudioSource, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatCounterAudioSource, put=__cordl_internal_set__beatCounterAudioSource)) ::UnityW<::UnityEngine::AudioSource>  _beatCounterAudioSource;

/// @brief Field _beatCounterUI, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatCounterUI, put=__cordl_internal_set__beatCounterUI)) ::UnityW<::VROSC::BeatCounterUI>  _beatCounterUI;

/// @brief Field _currentlyChangingBpm, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__currentlyChangingBpm, put=__cordl_internal_set__currentlyChangingBpm)) bool  _currentlyChangingBpm;

/// @brief Field _lastFrameVisualBarProgress, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastFrameVisualBarProgress, put=__cordl_internal_set__lastFrameVisualBarProgress)) float_t  _lastFrameVisualBarProgress;

/// @brief Field _linkBPM, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__linkBPM, put=__cordl_internal_set__linkBPM)) double_t  _linkBPM;

/// @brief Field _linkBarProgress, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__linkBarProgress, put=__cordl_internal_set__linkBarProgress)) double_t  _linkBarProgress;

/// @brief Field _linkBeat, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__linkBeat, put=__cordl_internal_set__linkBeat)) double_t  _linkBeat;

/// @brief Field _linkChangedBPM, offset 0xbd, size 0x1 
 __declspec(property(get=__cordl_internal_get__linkChangedBPM, put=__cordl_internal_set__linkChangedBPM)) bool  _linkChangedBPM;

/// @brief Field _linkChangedBarProgress, offset 0xbc, size 0x1 
 __declspec(property(get=__cordl_internal_get__linkChangedBarProgress, put=__cordl_internal_set__linkChangedBarProgress)) bool  _linkChangedBarProgress;

/// @brief Field _linkLatency, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__linkLatency, put=__cordl_internal_set__linkLatency)) float_t  _linkLatency;

/// @brief Field _linkNumPeers, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__linkNumPeers, put=__cordl_internal_set__linkNumPeers)) int32_t  _linkNumPeers;

/// @brief Field _linkPhase, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__linkPhase, put=__cordl_internal_set__linkPhase)) double_t  _linkPhase;

/// @brief Field _linkTime, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__linkTime, put=__cordl_internal_set__linkTime)) double_t  _linkTime;

/// @brief Field _maxAllowedLinkBPMDifference, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxAllowedLinkBPMDifference, put=__cordl_internal_set__maxAllowedLinkBPMDifference)) float_t  _maxAllowedLinkBPMDifference;

/// @brief Field _maxAllowedLinkBarProgressDifference, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxAllowedLinkBarProgressDifference, put=__cordl_internal_set__maxAllowedLinkBarProgressDifference)) float_t  _maxAllowedLinkBarProgressDifference;

/// @brief Field _metronome, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__metronome, put=__cordl_internal_set__metronome)) ::UnityW<::VROSC::Metronome>  _metronome;

/// @brief Method Awake, addr 0x18293a4, size 0xf8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateBPMFromBeatLength, addr 0x182ad00, size 0x84, virtual false, abstract: false, final false
inline double_t CalculateBPMFromBeatLength(int32_t  beatLength) ;

/// @brief Method ChangeBarProgressAndAdjustSyncSample, addr 0x182a984, size 0x28, virtual false, abstract: false, final false
inline void ChangeBarProgressAndAdjustSyncSample(double_t  barProgress) ;

/// @brief Method EnableAbletonLink, addr 0x182adcc, size 0x5c, virtual false, abstract: false, final false
inline void EnableAbletonLink(bool  enable) ;

/// @brief Method GetBarLength, addr 0x182ab20, size 0x20, virtual false, abstract: false, final false
inline double_t GetBarLength() ;

/// @brief Method GetCurrentVisualSubdivision, addr 0x182a9ac, size 0x34, virtual false, abstract: false, final false
inline int32_t GetCurrentVisualSubdivision(int32_t  subdivision) ;

/// @brief Method GetNextQuantizeDspTime, addr 0x182a9e0, size 0x140, virtual false, abstract: false, final false
inline double_t GetNextQuantizeDspTime(int32_t  beatDivision, double_t  predictedDspTime) ;

/// @brief Method GetNextQuantizePointAfterSample, addr 0x182ab40, size 0xa8, virtual false, abstract: false, final false
inline int32_t GetNextQuantizePointAfterSample(int32_t  sample, float_t  barDivision) ;

/// @brief Method GetQuantizeLength, addr 0x182abe8, size 0x48, virtual false, abstract: false, final false
inline double_t GetQuantizeLength(int32_t  beatDivision) ;

static inline ::VROSC::BeatCounter* New_ctor() ;

/// @brief Method OnAudioFilterRead, addr 0x182a564, size 0x74, virtual false, abstract: false, final false
inline void OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels) ;

/// @brief Method OnDestroy, addr 0x182949c, size 0x110, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetBPM, addr 0x182ac30, size 0xd0, virtual false, abstract: false, final false
inline void SetBPM(double_t  bpm, ::VROSC::BeatCounter_SyncSource  syncSource, bool  restartBar, bool  propagateToLink) ;

/// @brief Method SetBeatLength, addr 0x1829e98, size 0x208, virtual false, abstract: false, final false
inline void SetBeatLength(int32_t  beatLength, ::VROSC::BeatCounter_SyncSource  syncSource, bool  restartBar, bool  propagateToLink) ;

/// @brief Method SetBeatsPerBar, addr 0x182a0a0, size 0x178, virtual false, abstract: false, final false
inline void SetBeatsPerBar(int32_t  beatsPerBar) ;

/// @brief Method SetLinkLatency, addr 0x182ae28, size 0x7c, virtual false, abstract: false, final false
inline void SetLinkLatency(float_t  latency) ;

/// @brief Method SetSyncSampleFromBarProgress, addr 0x182a6cc, size 0xf8, virtual false, abstract: false, final false
inline void SetSyncSampleFromBarProgress() ;

/// @brief Method Setup, addr 0x18295ac, size 0xe0, virtual false, abstract: false, final false
inline void Setup(::VROSC::BeatCounterUI*  beatCounterUI) ;

/// @brief Method Update, addr 0x182a218, size 0x1c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAbletonLinkAudioThread, addr 0x182a7c4, size 0x1c0, virtual false, abstract: false, final false
inline void UpdateAbletonLinkAudioThread() ;

/// @brief Method UpdateAbletonLinkMainThread, addr 0x182a234, size 0x1cc, virtual false, abstract: false, final false
inline void UpdateAbletonLinkMainThread() ;

/// @brief Method UpdateBarProgress, addr 0x182a5d8, size 0xf4, virtual false, abstract: false, final false
inline void UpdateBarProgress() ;

/// @brief Method UpdateVisualBeat, addr 0x182a400, size 0xdc, virtual false, abstract: false, final false
inline void UpdateVisualBeat() ;

/// @brief Method UserDataLoaded, addr 0x1829d30, size 0xc4, virtual false, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  user) ;

/// @brief Method VisualBeat, addr 0x182a4dc, size 0x88, virtual false, abstract: false, final false
inline void VisualBeat(int32_t  beatNumber) ;

constexpr int32_t const& __cordl_internal_get__AudioBarNumber_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__AudioBarNumber_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__AudioBarProgress_k__BackingField() const;

constexpr double_t& __cordl_internal_get__AudioBarProgress_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__BPM_k__BackingField() const;

constexpr double_t& __cordl_internal_get__BPM_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__BeatLength_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__BeatLength_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__BeatsPerBar_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__BeatsPerBar_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__CurrentSyncSample_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CurrentSyncSample_k__BackingField() ;

constexpr ::VROSC::BeatCounter_SyncSource const& __cordl_internal_get__CurrentSyncSource_k__BackingField() const;

constexpr ::VROSC::BeatCounter_SyncSource& __cordl_internal_get__CurrentSyncSource_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsPlaying_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsPlaying_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsVisualBeatFrame_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsVisualBeatFrame_k__BackingField() ;

constexpr bool const& __cordl_internal_get__UseAbletonLink_k__BackingField() const;

constexpr bool& __cordl_internal_get__UseAbletonLink_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__VisualBarNumber_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__VisualBarNumber_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__VisualBarProgress_k__BackingField() const;

constexpr float_t& __cordl_internal_get__VisualBarProgress_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__VisualCurrentBeat_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__VisualCurrentBeat_k__BackingField() ;

constexpr ::GlobalNamespace::AbletonLink* const& __cordl_internal_get__abletonLink() const;

constexpr ::GlobalNamespace::AbletonLink*& __cordl_internal_get__abletonLink() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__beatCounterAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__beatCounterAudioSource() ;

constexpr ::UnityW<::VROSC::BeatCounterUI> const& __cordl_internal_get__beatCounterUI() const;

constexpr ::UnityW<::VROSC::BeatCounterUI>& __cordl_internal_get__beatCounterUI() ;

constexpr bool const& __cordl_internal_get__currentlyChangingBpm() const;

constexpr bool& __cordl_internal_get__currentlyChangingBpm() ;

constexpr float_t const& __cordl_internal_get__lastFrameVisualBarProgress() const;

constexpr float_t& __cordl_internal_get__lastFrameVisualBarProgress() ;

constexpr double_t const& __cordl_internal_get__linkBPM() const;

constexpr double_t& __cordl_internal_get__linkBPM() ;

constexpr double_t const& __cordl_internal_get__linkBarProgress() const;

constexpr double_t& __cordl_internal_get__linkBarProgress() ;

constexpr double_t const& __cordl_internal_get__linkBeat() const;

constexpr double_t& __cordl_internal_get__linkBeat() ;

constexpr bool const& __cordl_internal_get__linkChangedBPM() const;

constexpr bool& __cordl_internal_get__linkChangedBPM() ;

constexpr bool const& __cordl_internal_get__linkChangedBarProgress() const;

constexpr bool& __cordl_internal_get__linkChangedBarProgress() ;

constexpr float_t const& __cordl_internal_get__linkLatency() const;

constexpr float_t& __cordl_internal_get__linkLatency() ;

constexpr int32_t const& __cordl_internal_get__linkNumPeers() const;

constexpr int32_t& __cordl_internal_get__linkNumPeers() ;

constexpr double_t const& __cordl_internal_get__linkPhase() const;

constexpr double_t& __cordl_internal_get__linkPhase() ;

constexpr double_t const& __cordl_internal_get__linkTime() const;

constexpr double_t& __cordl_internal_get__linkTime() ;

constexpr float_t const& __cordl_internal_get__maxAllowedLinkBPMDifference() const;

constexpr float_t& __cordl_internal_get__maxAllowedLinkBPMDifference() ;

constexpr float_t const& __cordl_internal_get__maxAllowedLinkBarProgressDifference() const;

constexpr float_t& __cordl_internal_get__maxAllowedLinkBarProgressDifference() ;

constexpr ::UnityW<::VROSC::Metronome> const& __cordl_internal_get__metronome() const;

constexpr ::UnityW<::VROSC::Metronome>& __cordl_internal_get__metronome() ;

constexpr void __cordl_internal_set__AudioBarNumber_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__AudioBarProgress_k__BackingField(double_t  value) ;

constexpr void __cordl_internal_set__BPM_k__BackingField(double_t  value) ;

constexpr void __cordl_internal_set__BeatLength_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__BeatsPerBar_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__CurrentSyncSample_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__CurrentSyncSource_k__BackingField(::VROSC::BeatCounter_SyncSource  value) ;

constexpr void __cordl_internal_set__IsPlaying_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsVisualBeatFrame_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__UseAbletonLink_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__VisualBarNumber_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__VisualBarProgress_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__VisualCurrentBeat_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__abletonLink(::GlobalNamespace::AbletonLink*  value) ;

constexpr void __cordl_internal_set__beatCounterAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__beatCounterUI(::UnityW<::VROSC::BeatCounterUI>  value) ;

constexpr void __cordl_internal_set__currentlyChangingBpm(bool  value) ;

constexpr void __cordl_internal_set__lastFrameVisualBarProgress(float_t  value) ;

constexpr void __cordl_internal_set__linkBPM(double_t  value) ;

constexpr void __cordl_internal_set__linkBarProgress(double_t  value) ;

constexpr void __cordl_internal_set__linkBeat(double_t  value) ;

constexpr void __cordl_internal_set__linkChangedBPM(bool  value) ;

constexpr void __cordl_internal_set__linkChangedBarProgress(bool  value) ;

constexpr void __cordl_internal_set__linkLatency(float_t  value) ;

constexpr void __cordl_internal_set__linkNumPeers(int32_t  value) ;

constexpr void __cordl_internal_set__linkPhase(double_t  value) ;

constexpr void __cordl_internal_set__linkTime(double_t  value) ;

constexpr void __cordl_internal_set__maxAllowedLinkBPMDifference(float_t  value) ;

constexpr void __cordl_internal_set__maxAllowedLinkBarProgressDifference(float_t  value) ;

constexpr void __cordl_internal_set__metronome(::UnityW<::VROSC::Metronome>  value) ;

/// @brief Method .ctor, addr 0x182aef8, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<double_t>* getStaticF_OnBPMChanged() ;

static inline ::System::Action_1<int32_t>* getStaticF_OnBeatsPerBarChanged() ;

static inline ::System::Action_1<::VROSC::BeatCounter_SyncSource>* getStaticF_OnSyncSourceChanged() ;

static inline ::System::Action_1<int32_t>* getStaticF_OnVisualBeat() ;

/// @brief Method get_AudioBarNumber, addr 0x1829318, size 0x8, virtual false, abstract: false, final false
inline int32_t get_AudioBarNumber() ;

/// @brief Method get_AudioBarProgress, addr 0x1829308, size 0x8, virtual false, abstract: false, final false
inline double_t get_AudioBarProgress() ;

/// @brief Method get_BPM, addr 0x18292bc, size 0x8, virtual false, abstract: false, final false
inline double_t get_BPM() ;

/// @brief Method get_BarLength, addr 0x18292ec, size 0xc, virtual false, abstract: false, final false
inline int32_t get_BarLength() ;

/// @brief Method get_BeatLength, addr 0x18292dc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_BeatLength() ;

/// @brief Method get_BeatsPerBar, addr 0x18292cc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_BeatsPerBar() ;

/// @brief Method get_CurrentSyncSample, addr 0x18292f8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentSyncSample() ;

/// @brief Method get_CurrentSyncSource, addr 0x182936c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::BeatCounter_SyncSource get_CurrentSyncSource() ;

/// @brief Method get_IsPlaying, addr 0x182937c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsPlaying() ;

/// @brief Method get_IsVisualBeatFrame, addr 0x1829348, size 0x8, virtual false, abstract: false, final false
inline bool get_IsVisualBeatFrame() ;

/// @brief Method get_Metronome, addr 0x18292b4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::Metronome> get_Metronome() ;

/// @brief Method get_UseAbletonLink, addr 0x1829390, size 0x8, virtual false, abstract: false, final false
inline bool get_UseAbletonLink() ;

/// @brief Method get_VisualBarNumber, addr 0x1829338, size 0x8, virtual false, abstract: false, final false
inline int32_t get_VisualBarNumber() ;

/// @brief Method get_VisualBarProgress, addr 0x1829328, size 0x8, virtual false, abstract: false, final false
inline float_t get_VisualBarProgress() ;

/// @brief Method get_VisualCurrentBeat, addr 0x182935c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_VisualCurrentBeat() ;

static inline void setStaticF_OnBPMChanged(::System::Action_1<double_t>*  value) ;

static inline void setStaticF_OnBeatsPerBarChanged(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF_OnSyncSourceChanged(::System::Action_1<::VROSC::BeatCounter_SyncSource>*  value) ;

static inline void setStaticF_OnVisualBeat(::System::Action_1<int32_t>*  value) ;

/// @brief Method set_AudioBarNumber, addr 0x1829320, size 0x8, virtual false, abstract: false, final false
inline void set_AudioBarNumber(int32_t  value) ;

/// @brief Method set_AudioBarProgress, addr 0x1829310, size 0x8, virtual false, abstract: false, final false
inline void set_AudioBarProgress(double_t  value) ;

/// @brief Method set_BPM, addr 0x18292c4, size 0x8, virtual false, abstract: false, final false
inline void set_BPM(double_t  value) ;

/// @brief Method set_BeatLength, addr 0x18292e4, size 0x8, virtual false, abstract: false, final false
inline void set_BeatLength(int32_t  value) ;

/// @brief Method set_BeatsPerBar, addr 0x18292d4, size 0x8, virtual false, abstract: false, final false
inline void set_BeatsPerBar(int32_t  value) ;

/// @brief Method set_CurrentSyncSample, addr 0x1829300, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentSyncSample(int32_t  value) ;

/// @brief Method set_CurrentSyncSource, addr 0x1829374, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentSyncSource(::VROSC::BeatCounter_SyncSource  value) ;

/// @brief Method set_IsPlaying, addr 0x1829384, size 0xc, virtual false, abstract: false, final false
inline void set_IsPlaying(bool  value) ;

/// @brief Method set_IsVisualBeatFrame, addr 0x1829350, size 0xc, virtual false, abstract: false, final false
inline void set_IsVisualBeatFrame(bool  value) ;

/// @brief Method set_UseAbletonLink, addr 0x1829398, size 0xc, virtual false, abstract: false, final false
inline void set_UseAbletonLink(bool  value) ;

/// @brief Method set_VisualBarNumber, addr 0x1829340, size 0x8, virtual false, abstract: false, final false
inline void set_VisualBarNumber(int32_t  value) ;

/// @brief Method set_VisualBarProgress, addr 0x1829330, size 0x8, virtual false, abstract: false, final false
inline void set_VisualBarProgress(float_t  value) ;

/// @brief Method set_VisualCurrentBeat, addr 0x1829364, size 0x8, virtual false, abstract: false, final false
inline void set_VisualCurrentBeat(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BeatCounter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BeatCounter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatCounter(BeatCounter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatCounter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatCounter(BeatCounter const& ) = delete;

/// @brief Field DefaultBPM offset 0xffffffff size 0x8
static constexpr double_t  DefaultBPM{static_cast<double_t>(120.0)};

/// @brief Field DefaultLinkLatency offset 0xffffffff size 0x4
static constexpr float_t  DefaultLinkLatency{static_cast<float_t>(0.078f)};

/// @brief Field LooperMaxBPM offset 0xffffffff size 0x8
static constexpr double_t  LooperMaxBPM{static_cast<double_t>(150.0)};

/// @brief Field LooperMinBPM offset 0xffffffff size 0x8
static constexpr double_t  LooperMinBPM{static_cast<double_t>(75.0)};

/// @brief Field ManualMaxBPM offset 0xffffffff size 0x8
static constexpr double_t  ManualMaxBPM{static_cast<double_t>(180.0)};

/// @brief Field ManualMinBPM offset 0xffffffff size 0x8
static constexpr double_t  ManualMinBPM{static_cast<double_t>(60.0)};

/// @brief Field MaxBeatsPerBar offset 0xffffffff size 0x4
static constexpr int32_t  MaxBeatsPerBar{static_cast<int32_t>(0xa)};

/// @brief Field MinBeatsPerBar offset 0xffffffff size 0x4
static constexpr int32_t  MinBeatsPerBar{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{304};

/// @brief Field _metronome, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::Metronome>  ____metronome;

/// @brief Field _beatCounterUI, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::BeatCounterUI>  ____beatCounterUI;

/// @brief Field _beatCounterAudioSource, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____beatCounterAudioSource;

/// @brief Field _currentlyChangingBpm, offset: 0x38, size: 0x1, def value: None
 bool  ____currentlyChangingBpm;

/// @brief Field <BPM>k__BackingField, offset: 0x40, size: 0x8, def value: None
 double_t  ____BPM_k__BackingField;

/// @brief Field <BeatsPerBar>k__BackingField, offset: 0x48, size: 0x4, def value: None
 int32_t  ____BeatsPerBar_k__BackingField;

/// @brief Field <BeatLength>k__BackingField, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____BeatLength_k__BackingField;

/// @brief Field _lastFrameVisualBarProgress, offset: 0x50, size: 0x4, def value: None
 float_t  ____lastFrameVisualBarProgress;

/// @brief Field <CurrentSyncSample>k__BackingField, offset: 0x54, size: 0x4, def value: None
 int32_t  ____CurrentSyncSample_k__BackingField;

/// @brief Field <AudioBarProgress>k__BackingField, offset: 0x58, size: 0x8, def value: None
 double_t  ____AudioBarProgress_k__BackingField;

/// @brief Field <AudioBarNumber>k__BackingField, offset: 0x60, size: 0x4, def value: None
 int32_t  ____AudioBarNumber_k__BackingField;

/// @brief Field <VisualBarProgress>k__BackingField, offset: 0x64, size: 0x4, def value: None
 float_t  ____VisualBarProgress_k__BackingField;

/// @brief Field <VisualBarNumber>k__BackingField, offset: 0x68, size: 0x4, def value: None
 int32_t  ____VisualBarNumber_k__BackingField;

/// @brief Field <IsVisualBeatFrame>k__BackingField, offset: 0x6c, size: 0x1, def value: None
 bool  ____IsVisualBeatFrame_k__BackingField;

/// @brief Field <VisualCurrentBeat>k__BackingField, offset: 0x70, size: 0x4, def value: None
 int32_t  ____VisualCurrentBeat_k__BackingField;

/// @brief Field <CurrentSyncSource>k__BackingField, offset: 0x74, size: 0x4, def value: None
 ::VROSC::BeatCounter_SyncSource  ____CurrentSyncSource_k__BackingField;

/// @brief Field <IsPlaying>k__BackingField, offset: 0x78, size: 0x1, def value: None
 bool  ____IsPlaying_k__BackingField;

/// @brief Field _abletonLink, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::AbletonLink*  ____abletonLink;

/// @brief Field _maxAllowedLinkBarProgressDifference, offset: 0x88, size: 0x4, def value: None
 float_t  ____maxAllowedLinkBarProgressDifference;

/// @brief Field _maxAllowedLinkBPMDifference, offset: 0x8c, size: 0x4, def value: None
 float_t  ____maxAllowedLinkBPMDifference;

/// @brief Field _linkBeat, offset: 0x90, size: 0x8, def value: None
 double_t  ____linkBeat;

/// @brief Field _linkPhase, offset: 0x98, size: 0x8, def value: None
 double_t  ____linkPhase;

/// @brief Field _linkBPM, offset: 0xa0, size: 0x8, def value: None
 double_t  ____linkBPM;

/// @brief Field _linkTime, offset: 0xa8, size: 0x8, def value: None
 double_t  ____linkTime;

/// @brief Field _linkBarProgress, offset: 0xb0, size: 0x8, def value: None
 double_t  ____linkBarProgress;

/// @brief Field _linkNumPeers, offset: 0xb8, size: 0x4, def value: None
 int32_t  ____linkNumPeers;

/// @brief Field _linkChangedBarProgress, offset: 0xbc, size: 0x1, def value: None
 bool  ____linkChangedBarProgress;

/// @brief Field _linkChangedBPM, offset: 0xbd, size: 0x1, def value: None
 bool  ____linkChangedBPM;

/// @brief Field _linkLatency, offset: 0xc0, size: 0x4, def value: None
 float_t  ____linkLatency;

/// @brief Field <UseAbletonLink>k__BackingField, offset: 0xc4, size: 0x1, def value: None
 bool  ____UseAbletonLink_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BeatCounter, ____metronome) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____beatCounterUI) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____beatCounterAudioSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____currentlyChangingBpm) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____BPM_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____BeatsPerBar_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____BeatLength_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____lastFrameVisualBarProgress) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____CurrentSyncSample_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____AudioBarProgress_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____AudioBarNumber_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____VisualBarProgress_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____VisualBarNumber_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____IsVisualBeatFrame_k__BackingField) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____VisualCurrentBeat_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____CurrentSyncSource_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____IsPlaying_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____abletonLink) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____maxAllowedLinkBarProgressDifference) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____maxAllowedLinkBPMDifference) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____linkBeat) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____linkPhase) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____linkBPM) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____linkTime) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____linkBarProgress) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____linkNumPeers) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____linkChangedBarProgress) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____linkChangedBPM) == 0xbd, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____linkLatency) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounter, ____UseAbletonLink_k__BackingField) == 0xc4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BeatCounter, 0xc8>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BeatCounter_SyncSource, "VROSC", "BeatCounter/SyncSource");
NEED_NO_BOX(::VROSC::BeatCounter);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BeatCounter*, "VROSC", "BeatCounter");
