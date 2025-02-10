#pragma once
// IWYU pragma private; include "VROSC/AudioAnalyzer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__FFTWindow_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioAnalyzer)
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace VROSC {
class AudioAnalyzer;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioAnalyzer);
// Dependencies UnityEngine.FFTWindow, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AudioAnalyzer
class CORDL_TYPE AudioAnalyzer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _cachedBands, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cachedBands, put=setStaticF__cachedBands)) ::ArrayW<float_t,::Array<float_t>*>  _cachedBands;

/// @brief Field _cachedBandsPlaying, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cachedBandsPlaying, put=setStaticF__cachedBandsPlaying)) ::ArrayW<float_t,::Array<float_t>*>  _cachedBandsPlaying;

/// @brief Field _currentlyPlayingAudioSource, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentlyPlayingAudioSource, put=__cordl_internal_set__currentlyPlayingAudioSource)) ::UnityW<::UnityEngine::AudioSource>  _currentlyPlayingAudioSource;

/// @brief Field _currentlyPlayingData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentlyPlayingData, put=__cordl_internal_set__currentlyPlayingData)) ::ArrayW<float_t,::Array<float_t>*>  _currentlyPlayingData;

/// @brief Field _fftWindow, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__fftWindow, put=__cordl_internal_set__fftWindow)) ::UnityEngine::FFTWindow  _fftWindow;

/// @brief Field _hasCachedBands, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__hasCachedBands, put=setStaticF__hasCachedBands)) bool  _hasCachedBands;

/// @brief Field _hasCachedBandsPlaying, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__hasCachedBandsPlaying, put=setStaticF__hasCachedBandsPlaying)) bool  _hasCachedBandsPlaying;

/// @brief Field _leftMasterSamplesRaw, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftMasterSamplesRaw, put=__cordl_internal_set__leftMasterSamplesRaw)) ::ArrayW<float_t,::Array<float_t>*>  _leftMasterSamplesRaw;

/// @brief Field _leftPlayingSamplesRaw, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftPlayingSamplesRaw, put=__cordl_internal_set__leftPlayingSamplesRaw)) ::ArrayW<float_t,::Array<float_t>*>  _leftPlayingSamplesRaw;

/// @brief Field _masterIsMono, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get__masterIsMono, put=__cordl_internal_set__masterIsMono)) bool  _masterIsMono;

/// @brief Field _monoMasterSamplesNormalized, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__monoMasterSamplesNormalized, put=setStaticF__monoMasterSamplesNormalized)) ::ArrayW<float_t,::Array<float_t>*>  _monoMasterSamplesNormalized;

/// @brief Field _monoMasterSamplesNormalizedSmoothed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__monoMasterSamplesNormalizedSmoothed, put=setStaticF__monoMasterSamplesNormalizedSmoothed)) ::ArrayW<float_t,::Array<float_t>*>  _monoMasterSamplesNormalizedSmoothed;

/// @brief Field _monoMasterSamplesRaw, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__monoMasterSamplesRaw, put=setStaticF__monoMasterSamplesRaw)) ::ArrayW<float_t,::Array<float_t>*>  _monoMasterSamplesRaw;

/// @brief Field _monoPlayingSamplesNormalized, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__monoPlayingSamplesNormalized, put=setStaticF__monoPlayingSamplesNormalized)) ::ArrayW<float_t,::Array<float_t>*>  _monoPlayingSamplesNormalized;

/// @brief Field _monoPlayingSamplesNormalizedSmoothed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__monoPlayingSamplesNormalizedSmoothed, put=setStaticF__monoPlayingSamplesNormalizedSmoothed)) ::ArrayW<float_t,::Array<float_t>*>  _monoPlayingSamplesNormalizedSmoothed;

/// @brief Field _monoPlayingSamplesRaw, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__monoPlayingSamplesRaw, put=setStaticF__monoPlayingSamplesRaw)) ::ArrayW<float_t,::Array<float_t>*>  _monoPlayingSamplesRaw;

/// @brief Field _normalizeCeiling, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__normalizeCeiling, put=__cordl_internal_set__normalizeCeiling)) float_t  _normalizeCeiling;

/// @brief Field _normalizeFloor, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__normalizeFloor, put=__cordl_internal_set__normalizeFloor)) float_t  _normalizeFloor;

/// @brief Field _rightMasterSamplesRaw, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightMasterSamplesRaw, put=__cordl_internal_set__rightMasterSamplesRaw)) ::ArrayW<float_t,::Array<float_t>*>  _rightMasterSamplesRaw;

/// @brief Field _rightPlayingSamplesRaw, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightPlayingSamplesRaw, put=__cordl_internal_set__rightPlayingSamplesRaw)) ::ArrayW<float_t,::Array<float_t>*>  _rightPlayingSamplesRaw;

/// @brief Field _smoothingSpeed, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__smoothingSpeed, put=__cordl_internal_set__smoothingSpeed)) float_t  _smoothingSpeed;

/// @brief Method FrequencyToSpectrumIndex, addr 0x17c84e8, size 0xa8, virtual false, abstract: false, final false
static inline int32_t FrequencyToSpectrumIndex(float_t  frequency) ;

/// @brief Method GetAmplitude, addr 0x17c81bc, size 0xbc, virtual false, abstract: false, final false
static inline float_t GetAmplitude(float_t  minFrequency, float_t  maxFrequency, bool  currentlyPlayingOnly, bool  usePeakInsteadOfAverage, bool  smoothed) ;

/// @brief Method GetAmplitude, addr 0x17c8278, size 0x270, virtual false, abstract: false, final false
static inline float_t GetAmplitude(::ArrayW<float_t,::Array<float_t>*>  samples, float_t  minFrequency, float_t  maxFrequency, bool  usePeakInsteadOfAverage) ;

/// @brief Method GetBands, addr 0x17c5194, size 0x30c, virtual false, abstract: false, final false
static inline ::ArrayW<float_t,::Array<float_t>*> GetBands(int32_t  numberOfBands, bool  currentPlayingOnly) ;

/// @brief Method GetSpectrumAudioSource, addr 0x17c7de8, size 0x350, virtual false, abstract: false, final false
inline void GetSpectrumAudioSource() ;

static inline ::VROSC::AudioAnalyzer* New_ctor() ;

/// @brief Method Normalize, addr 0x17c8138, size 0x44, virtual false, abstract: false, final false
inline float_t Normalize(float_t  rawValue) ;

/// @brief Method OnAudioFilterRead, addr 0x17c85c8, size 0xdc, virtual false, abstract: false, final false
inline void OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels) ;

/// @brief Method RoutingDemo_GetData, addr 0x17c7c60, size 0xa4, virtual false, abstract: false, final false
static inline void RoutingDemo_GetData(int32_t  target, ::ArrayW<float_t,::Array<float_t>*>  data, int32_t  numsamples, int32_t  numchannels) ;

/// @brief Method Smooth, addr 0x17c817c, size 0x40, virtual false, abstract: false, final false
inline float_t Smooth(float_t  newValue, float_t  oldValue) ;

/// @brief Method SpectrumIndexToFrequency, addr 0x17c8590, size 0x38, virtual false, abstract: false, final false
static inline float_t SpectrumIndexToFrequency(int32_t  index) ;

/// @brief Method Start, addr 0x17c7d04, size 0xe0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x17c7de4, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__currentlyPlayingAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__currentlyPlayingAudioSource() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get__currentlyPlayingData() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get__currentlyPlayingData() ;

constexpr ::UnityEngine::FFTWindow const& __cordl_internal_get__fftWindow() const;

constexpr ::UnityEngine::FFTWindow& __cordl_internal_get__fftWindow() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get__leftMasterSamplesRaw() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get__leftMasterSamplesRaw() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get__leftPlayingSamplesRaw() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get__leftPlayingSamplesRaw() ;

constexpr bool const& __cordl_internal_get__masterIsMono() const;

constexpr bool& __cordl_internal_get__masterIsMono() ;

constexpr float_t const& __cordl_internal_get__normalizeCeiling() const;

constexpr float_t& __cordl_internal_get__normalizeCeiling() ;

constexpr float_t const& __cordl_internal_get__normalizeFloor() const;

constexpr float_t& __cordl_internal_get__normalizeFloor() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get__rightMasterSamplesRaw() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get__rightMasterSamplesRaw() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get__rightPlayingSamplesRaw() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get__rightPlayingSamplesRaw() ;

constexpr float_t const& __cordl_internal_get__smoothingSpeed() const;

constexpr float_t& __cordl_internal_get__smoothingSpeed() ;

constexpr void __cordl_internal_set__currentlyPlayingAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__currentlyPlayingData(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set__fftWindow(::UnityEngine::FFTWindow  value) ;

constexpr void __cordl_internal_set__leftMasterSamplesRaw(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set__leftPlayingSamplesRaw(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set__masterIsMono(bool  value) ;

constexpr void __cordl_internal_set__normalizeCeiling(float_t  value) ;

constexpr void __cordl_internal_set__normalizeFloor(float_t  value) ;

constexpr void __cordl_internal_set__rightMasterSamplesRaw(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set__rightPlayingSamplesRaw(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set__smoothingSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x17c86a4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<float_t,::Array<float_t>*> getStaticF__cachedBands() ;

static inline ::ArrayW<float_t,::Array<float_t>*> getStaticF__cachedBandsPlaying() ;

static inline bool getStaticF__hasCachedBands() ;

static inline bool getStaticF__hasCachedBandsPlaying() ;

static inline ::ArrayW<float_t,::Array<float_t>*> getStaticF__monoMasterSamplesNormalized() ;

static inline ::ArrayW<float_t,::Array<float_t>*> getStaticF__monoMasterSamplesNormalizedSmoothed() ;

static inline ::ArrayW<float_t,::Array<float_t>*> getStaticF__monoMasterSamplesRaw() ;

static inline ::ArrayW<float_t,::Array<float_t>*> getStaticF__monoPlayingSamplesNormalized() ;

static inline ::ArrayW<float_t,::Array<float_t>*> getStaticF__monoPlayingSamplesNormalizedSmoothed() ;

static inline ::ArrayW<float_t,::Array<float_t>*> getStaticF__monoPlayingSamplesRaw() ;

static inline void setStaticF__cachedBands(::ArrayW<float_t,::Array<float_t>*>  value) ;

static inline void setStaticF__cachedBandsPlaying(::ArrayW<float_t,::Array<float_t>*>  value) ;

static inline void setStaticF__hasCachedBands(bool  value) ;

static inline void setStaticF__hasCachedBandsPlaying(bool  value) ;

static inline void setStaticF__monoMasterSamplesNormalized(::ArrayW<float_t,::Array<float_t>*>  value) ;

static inline void setStaticF__monoMasterSamplesNormalizedSmoothed(::ArrayW<float_t,::Array<float_t>*>  value) ;

static inline void setStaticF__monoMasterSamplesRaw(::ArrayW<float_t,::Array<float_t>*>  value) ;

static inline void setStaticF__monoPlayingSamplesNormalized(::ArrayW<float_t,::Array<float_t>*>  value) ;

static inline void setStaticF__monoPlayingSamplesNormalizedSmoothed(::ArrayW<float_t,::Array<float_t>*>  value) ;

static inline void setStaticF__monoPlayingSamplesRaw(::ArrayW<float_t,::Array<float_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioAnalyzer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioAnalyzer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioAnalyzer(AudioAnalyzer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioAnalyzer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioAnalyzer(AudioAnalyzer const& ) = delete;

/// @brief Field MaxVisualizerBands offset 0xffffffff size 0x4
static constexpr int32_t  MaxVisualizerBands{static_cast<int32_t>(0x40)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{281};

/// @brief Field _currentlyPlayingData, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ____currentlyPlayingData;

/// @brief Field _currentlyPlayingAudioSource, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____currentlyPlayingAudioSource;

/// @brief Field _fftWindow, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::FFTWindow  ____fftWindow;

/// @brief Field _leftMasterSamplesRaw, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ____leftMasterSamplesRaw;

/// @brief Field _rightMasterSamplesRaw, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ____rightMasterSamplesRaw;

/// @brief Field _leftPlayingSamplesRaw, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ____leftPlayingSamplesRaw;

/// @brief Field _rightPlayingSamplesRaw, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ____rightPlayingSamplesRaw;

/// @brief Field _normalizeFloor, offset: 0x58, size: 0x4, def value: None
 float_t  ____normalizeFloor;

/// @brief Field _normalizeCeiling, offset: 0x5c, size: 0x4, def value: None
 float_t  ____normalizeCeiling;

/// @brief Field _smoothingSpeed, offset: 0x60, size: 0x4, def value: None
 float_t  ____smoothingSpeed;

/// @brief Field _masterIsMono, offset: 0x64, size: 0x1, def value: None
 bool  ____masterIsMono;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioAnalyzer, ____currentlyPlayingData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioAnalyzer, ____currentlyPlayingAudioSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioAnalyzer, ____fftWindow) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioAnalyzer, ____leftMasterSamplesRaw) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioAnalyzer, ____rightMasterSamplesRaw) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioAnalyzer, ____leftPlayingSamplesRaw) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioAnalyzer, ____rightPlayingSamplesRaw) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioAnalyzer, ____normalizeFloor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioAnalyzer, ____normalizeCeiling) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioAnalyzer, ____smoothingSpeed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioAnalyzer, ____masterIsMono) == 0x64, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioAnalyzer, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AudioAnalyzer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioAnalyzer*, "VROSC", "AudioAnalyzer");
