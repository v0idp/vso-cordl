#pragma once
// IWYU pragma private; include "UnityEngine/AudioSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioSource)
namespace UnityEngine::Audio {
class AudioMixerGroup;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
struct FFTWindow;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class AudioSource;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AudioSource);
// Dependencies UnityEngine.AudioBehaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioSource
class CORDL_TYPE AudioSource : public ::UnityEngine::AudioBehaviour {
public:
// Declarations
 __declspec(property(get=get_clip, put=set_clip)) ::UnityW<::UnityEngine::AudioClip>  clip;

 __declspec(property(put=set_dopplerLevel)) float_t  dopplerLevel;

 __declspec(property(get=get_isPlaying)) bool  isPlaying;

 __declspec(property(get=get_loop, put=set_loop)) bool  loop;

 __declspec(property(get=get_outputAudioMixerGroup, put=set_outputAudioMixerGroup)) ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  outputAudioMixerGroup;

 __declspec(property(get=get_panStereo, put=set_panStereo)) float_t  panStereo;

 __declspec(property(get=get_pitch, put=set_pitch)) float_t  pitch;

 __declspec(property(get=get_priority, put=set_priority)) int32_t  priority;

 __declspec(property(put=set_spatialBlend)) float_t  spatialBlend;

 __declspec(property(get=get_spatialize, put=set_spatialize)) bool  spatialize;

 __declspec(property(put=set_spatializePostEffects)) bool  spatializePostEffects;

 __declspec(property(get=get_time, put=set_time)) float_t  time;

 __declspec(property(get=get_volume, put=set_volume)) float_t  volume;

/// @brief Method GetPitch, addr 0x2f585a0, size 0x3c, virtual false, abstract: false, final false
static inline float_t GetPitch(::UnityEngine::AudioSource*  source) ;

/// @brief Method GetSpectrumData, addr 0x2f59134, size 0x5c, virtual false, abstract: false, final false
inline void GetSpectrumData(::ArrayW<float_t,::Array<float_t>*>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window) ;

/// @brief Method GetSpectrumDataHelper, addr 0x2f586fc, size 0x5c, virtual false, abstract: false, final false
static inline void GetSpectrumDataHelper(::UnityEngine::AudioSource*  source, ::ByRef<::ArrayW<float_t,::Array<float_t>*>>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window) ;

/// @brief Method Pause, addr 0x2f58b14, size 0x3c, virtual false, abstract: false, final false
inline void Pause() ;

/// @brief Method Play, addr 0x2f589f0, size 0x40, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Play, addr 0x2f5866c, size 0x4c, virtual false, abstract: false, final false
inline void Play(double_t  delay) ;

/// @brief Method PlayClipAtPoint, addr 0x2f58bc8, size 0x8, virtual false, abstract: false, final false
static inline void PlayClipAtPoint(::UnityEngine::AudioClip*  clip, ::UnityEngine::Vector3  position) ;

/// @brief Method PlayClipAtPoint, addr 0x2f58bd0, size 0x280, virtual false, abstract: false, final false
static inline void PlayClipAtPoint(::UnityEngine::AudioClip*  clip, ::UnityEngine::Vector3  position, float_t  volume) ;

/// @brief Method PlayHelper, addr 0x2f58628, size 0x44, virtual false, abstract: false, final false
static inline void PlayHelper(::UnityEngine::AudioSource*  source, uint64_t  delay) ;

/// @brief Method PlayScheduled, addr 0x2f58a30, size 0x58, virtual false, abstract: false, final false
inline void PlayScheduled(double_t  time) ;

/// @brief Method SetPitch, addr 0x2f585dc, size 0x4c, virtual false, abstract: false, final false
static inline void SetPitch(::UnityEngine::AudioSource*  source, float_t  pitch) ;

/// @brief Method SetScheduledEndTime, addr 0x2f58a88, size 0x4c, virtual false, abstract: false, final false
inline void SetScheduledEndTime(double_t  time) ;

/// @brief Method Stop, addr 0x2f58ad4, size 0x40, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Stop, addr 0x2f586b8, size 0x44, virtual false, abstract: false, final false
inline void Stop(bool  stopOneShots) ;

/// @brief Method UnPause, addr 0x2f58b50, size 0x3c, virtual false, abstract: false, final false
inline void UnPause() ;

/// @brief Method get_clip, addr 0x2f588f0, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_clip() ;

/// @brief Method get_isPlaying, addr 0x2f58b8c, size 0x3c, virtual false, abstract: false, final false
inline bool get_isPlaying() ;

/// @brief Method get_loop, addr 0x2f58e9c, size 0x3c, virtual false, abstract: false, final false
inline bool get_loop() ;

/// @brief Method get_outputAudioMixerGroup, addr 0x2f58970, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Audio::AudioMixerGroup> get_outputAudioMixerGroup() ;

/// @brief Method get_panStereo, addr 0x2f58f1c, size 0x3c, virtual false, abstract: false, final false
inline float_t get_panStereo() ;

/// @brief Method get_pitch, addr 0x2f587e0, size 0x3c, virtual false, abstract: false, final false
inline float_t get_pitch() ;

/// @brief Method get_priority, addr 0x2f590b4, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_priority() ;

/// @brief Method get_spatialize, addr 0x2f58fa4, size 0x3c, virtual false, abstract: false, final false
inline bool get_spatialize() ;

/// @brief Method get_time, addr 0x2f58868, size 0x3c, virtual false, abstract: false, final false
inline float_t get_time() ;

/// @brief Method get_volume, addr 0x2f58758, size 0x3c, virtual false, abstract: false, final false
inline float_t get_volume() ;

/// @brief Method set_clip, addr 0x2f5892c, size 0x44, virtual false, abstract: false, final false
inline void set_clip(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_dopplerLevel, addr 0x2f59068, size 0x4c, virtual false, abstract: false, final false
inline void set_dopplerLevel(float_t  value) ;

/// @brief Method set_loop, addr 0x2f58ed8, size 0x44, virtual false, abstract: false, final false
inline void set_loop(bool  value) ;

/// @brief Method set_outputAudioMixerGroup, addr 0x2f589ac, size 0x44, virtual false, abstract: false, final false
inline void set_outputAudioMixerGroup(::UnityEngine::Audio::AudioMixerGroup*  value) ;

/// @brief Method set_panStereo, addr 0x2f58f58, size 0x4c, virtual false, abstract: false, final false
inline void set_panStereo(float_t  value) ;

/// @brief Method set_pitch, addr 0x2f5881c, size 0x4c, virtual false, abstract: false, final false
inline void set_pitch(float_t  value) ;

/// @brief Method set_priority, addr 0x2f590f0, size 0x44, virtual false, abstract: false, final false
inline void set_priority(int32_t  value) ;

/// @brief Method set_spatialBlend, addr 0x2f58e50, size 0x4c, virtual false, abstract: false, final false
inline void set_spatialBlend(float_t  value) ;

/// @brief Method set_spatialize, addr 0x2f58fe0, size 0x44, virtual false, abstract: false, final false
inline void set_spatialize(bool  value) ;

/// @brief Method set_spatializePostEffects, addr 0x2f59024, size 0x44, virtual false, abstract: false, final false
inline void set_spatializePostEffects(bool  value) ;

/// @brief Method set_time, addr 0x2f588a4, size 0x4c, virtual false, abstract: false, final false
inline void set_time(float_t  value) ;

/// @brief Method set_volume, addr 0x2f58794, size 0x4c, virtual false, abstract: false, final false
inline void set_volume(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioSource(AudioSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioSource(AudioSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12128};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioSource, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AudioSource);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioSource*, "UnityEngine", "AudioSource");
