#pragma once
// IWYU pragma private; include "VROSC/AudioRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioRecorder)
namespace System {
template<typename T>
class Action_1;
}
namespace VROSC {
class HelmRecorder;
}
namespace VROSC {
class MasterRecorder;
}
namespace VROSC {
class MicrophoneRecorder;
}
namespace VROSC {
class MixerGroupRecorder;
}
namespace VROSC {
struct SoundSource;
}
// Forward declare root types
namespace VROSC {
class AudioRecorder;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioRecorder);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AudioRecorder
class CORDL_TYPE AudioRecorder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field RecordingMaxLength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_RecordingMaxLength, put=setStaticF_RecordingMaxLength)) int32_t  RecordingMaxLength;

/// @brief Field SampleRate, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SampleRate, put=setStaticF_SampleRate)) int32_t  SampleRate;

/// @brief Field _helmRecorder, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__helmRecorder, put=__cordl_internal_set__helmRecorder)) ::UnityW<::VROSC::HelmRecorder>  _helmRecorder;

/// @brief Field _masterRecorder, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__masterRecorder, put=__cordl_internal_set__masterRecorder)) ::UnityW<::VROSC::MasterRecorder>  _masterRecorder;

/// @brief Field _microphoneRecorder, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__microphoneRecorder, put=__cordl_internal_set__microphoneRecorder)) ::UnityW<::VROSC::MicrophoneRecorder>  _microphoneRecorder;

/// @brief Field _samplerRecorder, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__samplerRecorder, put=__cordl_internal_set__samplerRecorder)) ::UnityW<::VROSC::MixerGroupRecorder>  _samplerRecorder;

/// @brief Method ClearMicrophoneBuffer, addr 0x17ce064, size 0x18, virtual false, abstract: false, final false
inline void ClearMicrophoneBuffer() ;

/// @brief Method GetRawMicrophoneRecordingData, addr 0x17ce0a0, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<float_t,::Array<float_t>*> GetRawMicrophoneRecordingData() ;

/// @brief Method IsRecording, addr 0x17ce194, size 0x5c, virtual false, abstract: false, final false
inline bool IsRecording() ;

/// @brief Method IsRecording, addr 0x17ce0bc, size 0xd8, virtual false, abstract: false, final false
inline bool IsRecording(::VROSC::SoundSource  soundSource) ;

static inline ::VROSC::AudioRecorder* New_ctor() ;

/// @brief Method ResetAudioBufferSize, addr 0x17cda90, size 0xa4, virtual false, abstract: false, final false
inline void ResetAudioBufferSize() ;

/// @brief Method SetMicrophoneSamples, addr 0x17ce020, size 0x18, virtual false, abstract: false, final false
inline void SetMicrophoneSamples(::ArrayW<float_t,::Array<float_t>*>  buffer) ;

/// @brief Method Setup, addr 0x17c6bb4, size 0x318, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method StartOverdubRecording, addr 0x17cdd68, size 0x84, virtual false, abstract: false, final false
inline void StartOverdubRecording(::VROSC::SoundSource  soundSource, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  fillArray) ;

/// @brief Method StartRecording, addr 0x17cdc50, size 0xc, virtual false, abstract: false, final false
inline void StartRecording(::VROSC::SoundSource  soundSource, ::System::Action_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>*  recordingFilledCallback, int32_t  length) ;

/// @brief Method StartRecording, addr 0x17cdc5c, size 0x10c, virtual false, abstract: false, final false
inline void StartRecording(::VROSC::SoundSource  soundSource, ::System::Action_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>*  recordingFilledCallback, int32_t  length, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  fillArray, bool  overdub) ;

/// @brief Method StartTapeRecording, addr 0x17cddec, size 0x84, virtual false, abstract: false, final false
inline void StartTapeRecording(::System::Action_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>*  recordingFilledCallback, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  fillArray) ;

/// @brief Method StealRecording, addr 0x17cde70, size 0x7c, virtual false, abstract: false, final false
inline ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> StealRecording(::VROSC::SoundSource  soundSource, bool  clear, bool  stealEvenIfNotRecording) ;

/// @brief Method StopAndGetRecording, addr 0x17cdf5c, size 0x90, virtual false, abstract: false, final false
inline ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> StopAndGetRecording(::VROSC::SoundSource  soundSource) ;

/// @brief Method StopRecording, addr 0x17cdeec, size 0x64, virtual false, abstract: false, final false
inline void StopRecording(::VROSC::SoundSource  soundSource) ;

constexpr ::UnityW<::VROSC::HelmRecorder> const& __cordl_internal_get__helmRecorder() const;

constexpr ::UnityW<::VROSC::HelmRecorder>& __cordl_internal_get__helmRecorder() ;

constexpr ::UnityW<::VROSC::MasterRecorder> const& __cordl_internal_get__masterRecorder() const;

constexpr ::UnityW<::VROSC::MasterRecorder>& __cordl_internal_get__masterRecorder() ;

constexpr ::UnityW<::VROSC::MicrophoneRecorder> const& __cordl_internal_get__microphoneRecorder() const;

constexpr ::UnityW<::VROSC::MicrophoneRecorder>& __cordl_internal_get__microphoneRecorder() ;

constexpr ::UnityW<::VROSC::MixerGroupRecorder> const& __cordl_internal_get__samplerRecorder() const;

constexpr ::UnityW<::VROSC::MixerGroupRecorder>& __cordl_internal_get__samplerRecorder() ;

constexpr void __cordl_internal_set__helmRecorder(::UnityW<::VROSC::HelmRecorder>  value) ;

constexpr void __cordl_internal_set__masterRecorder(::UnityW<::VROSC::MasterRecorder>  value) ;

constexpr void __cordl_internal_set__microphoneRecorder(::UnityW<::VROSC::MicrophoneRecorder>  value) ;

constexpr void __cordl_internal_set__samplerRecorder(::UnityW<::VROSC::MixerGroupRecorder>  value) ;

/// @brief Method .ctor, addr 0x17ce1f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_RecordingMaxLength() ;

static inline int32_t getStaticF_SampleRate() ;

static inline void setStaticF_RecordingMaxLength(int32_t  value) ;

static inline void setStaticF_SampleRate(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioRecorder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioRecorder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioRecorder(AudioRecorder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioRecorder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioRecorder(AudioRecorder const& ) = delete;

/// @brief Field AudioLatency offset 0xffffffff size 0x4
static constexpr float_t  AudioLatency{static_cast<float_t>(0.06f)};

/// @brief Field BufferSize offset 0xffffffff size 0x4
static constexpr int32_t  BufferSize{static_cast<int32_t>(0x100)};

/// @brief Field Channels offset 0xffffffff size 0x4
static constexpr int32_t  Channels{static_cast<int32_t>(0x2)};

/// @brief Field DesiredSampleRate offset 0xffffffff size 0x4
static constexpr int32_t  DesiredSampleRate{static_cast<int32_t>(0xbb80)};

/// @brief Field MaxBufferSize offset 0xffffffff size 0x4
static constexpr int32_t  MaxBufferSize{static_cast<int32_t>(0x200)};

/// @brief Field MaxChannels offset 0xffffffff size 0x4
static constexpr int32_t  MaxChannels{static_cast<int32_t>(0x2)};

/// @brief Field RecordingBufferLengthSeconds offset 0xffffffff size 0x4
static constexpr float_t  RecordingBufferLengthSeconds{static_cast<float_t>(1.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{294};

/// @brief Field _helmRecorder, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::HelmRecorder>  ____helmRecorder;

/// @brief Field _microphoneRecorder, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::MicrophoneRecorder>  ____microphoneRecorder;

/// @brief Field _samplerRecorder, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::MixerGroupRecorder>  ____samplerRecorder;

/// @brief Field _masterRecorder, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::MasterRecorder>  ____masterRecorder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioRecorder, ____helmRecorder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioRecorder, ____microphoneRecorder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioRecorder, ____samplerRecorder) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioRecorder, ____masterRecorder) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioRecorder, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AudioRecorder);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioRecorder*, "VROSC", "AudioRecorder");
