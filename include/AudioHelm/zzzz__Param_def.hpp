#pragma once
// IWYU pragma private; include "AudioHelm/Param.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Param)
// Forward declare root types
namespace AudioHelm {
struct Param;
}
// Write type traits
MARK_VAL_T(::AudioHelm::Param);
// Dependencies 
namespace AudioHelm {
// Is value type: true
// CS Name: AudioHelm.Param
struct CORDL_TYPE Param {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Param_Unwrapped
enum struct __Param_Unwrapped : int32_t {
__E_kNone = static_cast<int32_t>(0x0),
__E_kAmplitudeAttack = static_cast<int32_t>(0x1),
__E_kAmplitudeDecay = static_cast<int32_t>(0x2),
__E_kAmplitudeSustain = static_cast<int32_t>(0x3),
__E_kAmplitudeRelease = static_cast<int32_t>(0x4),
__E_kArpFrequency = static_cast<int32_t>(0x5),
__E_kArpGate = static_cast<int32_t>(0x6),
__E_kArpOctaves = static_cast<int32_t>(0x7),
__E_kArpOn = static_cast<int32_t>(0x8),
__E_kArpPattern = static_cast<int32_t>(0x9),
__E_kArpSync = static_cast<int32_t>(0xa),
__E_kArpTempo = static_cast<int32_t>(0xb),
__E_kCrossMod = static_cast<int32_t>(0xd),
__E_kFilterCutoff = static_cast<int32_t>(0xe),
__E_kDelayDryWet = static_cast<int32_t>(0xf),
__E_kDelayFeedback = static_cast<int32_t>(0x10),
__E_kDelayFrequency = static_cast<int32_t>(0x11),
__E_kDelayOn = static_cast<int32_t>(0x12),
__E_kDelaySync = static_cast<int32_t>(0x13),
__E_kDelayTempo = static_cast<int32_t>(0x14),
__E_kDistortionOn = static_cast<int32_t>(0x15),
__E_kDistortionType = static_cast<int32_t>(0x16),
__E_kDistortionDrive = static_cast<int32_t>(0x17),
__E_kDistortionMix = static_cast<int32_t>(0x18),
__E_kFilterAttack = static_cast<int32_t>(0x19),
__E_kFilterDecay = static_cast<int32_t>(0x1a),
__E_kFilterEnvelopeDepth = static_cast<int32_t>(0x1b),
__E_kFilterRelease = static_cast<int32_t>(0x1c),
__E_kFilterSustain = static_cast<int32_t>(0x1d),
__E_kFilterDrive = static_cast<int32_t>(0x1f),
__E_kFilterBlend = static_cast<int32_t>(0x20),
__E_kFilterStyle = static_cast<int32_t>(0x22),
__E_kFilterShelf = static_cast<int32_t>(0x23),
__E_kFilterOn = static_cast<int32_t>(0x24),
__E_kFormantOn = static_cast<int32_t>(0x25),
__E_kFormantX = static_cast<int32_t>(0x26),
__E_kFormantY = static_cast<int32_t>(0x27),
__E_kKeytrack = static_cast<int32_t>(0x28),
__E_kLegato = static_cast<int32_t>(0x29),
__E_kModAttack = static_cast<int32_t>(0x2a),
__E_kModDecay = static_cast<int32_t>(0x2b),
__E_kModRelease = static_cast<int32_t>(0x2c),
__E_kModSustain = static_cast<int32_t>(0x2d),
__E_kMonoLfo1Amplitude = static_cast<int32_t>(0x2e),
__E_kMonoLfo1Frequency = static_cast<int32_t>(0x2f),
__E_kMonoLfo1Retrigger = static_cast<int32_t>(0x30),
__E_kMonoLfo1Sync = static_cast<int32_t>(0x31),
__E_kMonoLfo1Tempo = static_cast<int32_t>(0x32),
__E_kMonoLfo1Waveform = static_cast<int32_t>(0x33),
__E_kMonoLfo2Amplitude = static_cast<int32_t>(0x34),
__E_kMonoLfo2Frequency = static_cast<int32_t>(0x35),
__E_kMonoLfo2Retrigger = static_cast<int32_t>(0x36),
__E_kMonoLfo2Sync = static_cast<int32_t>(0x37),
__E_kMonoLfo2Tempo = static_cast<int32_t>(0x38),
__E_kMonoLfo2Waveform = static_cast<int32_t>(0x39),
__E_kNoiseVolume = static_cast<int32_t>(0x3a),
__E_kNumSteps = static_cast<int32_t>(0x3b),
__E_kOsc1Transpose = static_cast<int32_t>(0x3c),
__E_kOsc1Tune = static_cast<int32_t>(0x3d),
__E_kOsc1UnisonDetune = static_cast<int32_t>(0x3e),
__E_kOsc1UnisonVoices = static_cast<int32_t>(0x3f),
__E_kOsc1Volume = static_cast<int32_t>(0x40),
__E_kOsc1Waveform = static_cast<int32_t>(0x41),
__E_kOsc2Transpose = static_cast<int32_t>(0x42),
__E_kOsc2Tune = static_cast<int32_t>(0x43),
__E_kOsc2UnisonDetune = static_cast<int32_t>(0x44),
__E_kOsc2UnisonVoices = static_cast<int32_t>(0x45),
__E_kOsc2Volume = static_cast<int32_t>(0x46),
__E_kOsc2Waveform = static_cast<int32_t>(0x47),
__E_kOscFeedbackAmount = static_cast<int32_t>(0x48),
__E_kOscFeedbackTranspose = static_cast<int32_t>(0x49),
__E_kOscFeedbackTune = static_cast<int32_t>(0x4a),
__E_kPitchBendRange = static_cast<int32_t>(0x4c),
__E_kPolyLfoAmplitude = static_cast<int32_t>(0x4d),
__E_kPolyLfoFrequency = static_cast<int32_t>(0x4e),
__E_kPolyLfoSync = static_cast<int32_t>(0x4f),
__E_kPolyLfoTempo = static_cast<int32_t>(0x50),
__E_kPolyLfoWaveform = static_cast<int32_t>(0x51),
__E_kPolyphony = static_cast<int32_t>(0x52),
__E_kPortamento = static_cast<int32_t>(0x53),
__E_kPortamentoType = static_cast<int32_t>(0x54),
__E_kResonance = static_cast<int32_t>(0x55),
__E_kReverbDamping = static_cast<int32_t>(0x56),
__E_kReverbDryWet = static_cast<int32_t>(0x57),
__E_kReverbFeedback = static_cast<int32_t>(0x58),
__E_kReverbOn = static_cast<int32_t>(0x59),
__E_kStepFrequency = static_cast<int32_t>(0x5a),
__E_kStepSequencerRetrigger = static_cast<int32_t>(0x7b),
__E_kStepSequencerSync = static_cast<int32_t>(0x7c),
__E_kStepSequencerTempo = static_cast<int32_t>(0x7d),
__E_kStepSmoothing = static_cast<int32_t>(0x7e),
__E_kStutterFrequency = static_cast<int32_t>(0x7f),
__E_kStutterOn = static_cast<int32_t>(0x80),
__E_kStutterResampleFrequency = static_cast<int32_t>(0x81),
__E_kStutterResampleSync = static_cast<int32_t>(0x82),
__E_kStutterResampleTempo = static_cast<int32_t>(0x83),
__E_kStutterSoftness = static_cast<int32_t>(0x84),
__E_kStutterSync = static_cast<int32_t>(0x85),
__E_kStutterTempo = static_cast<int32_t>(0x86),
__E_kSubShuffle = static_cast<int32_t>(0x87),
__E_kSubOctave = static_cast<int32_t>(0x88),
__E_kSubVolume = static_cast<int32_t>(0x89),
__E_kSubWaveform = static_cast<int32_t>(0x8a),
__E_kOsc1UnisonHarmonize = static_cast<int32_t>(0x8b),
__E_kOsc2UnisonHarmonize = static_cast<int32_t>(0x8c),
__E_kVelocityTrack = static_cast<int32_t>(0x8d),
__E_kVolume = static_cast<int32_t>(0x8e),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Param_Unwrapped () const noexcept {
return static_cast<__Param_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Param() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Param(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1907};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field kAmplitudeAttack value: I32(1)
static ::AudioHelm::Param const kAmplitudeAttack;

/// @brief Field kAmplitudeDecay value: I32(2)
static ::AudioHelm::Param const kAmplitudeDecay;

/// @brief Field kAmplitudeRelease value: I32(4)
static ::AudioHelm::Param const kAmplitudeRelease;

/// @brief Field kAmplitudeSustain value: I32(3)
static ::AudioHelm::Param const kAmplitudeSustain;

/// @brief Field kArpFrequency value: I32(5)
static ::AudioHelm::Param const kArpFrequency;

/// @brief Field kArpGate value: I32(6)
static ::AudioHelm::Param const kArpGate;

/// @brief Field kArpOctaves value: I32(7)
static ::AudioHelm::Param const kArpOctaves;

/// @brief Field kArpOn value: I32(8)
static ::AudioHelm::Param const kArpOn;

/// @brief Field kArpPattern value: I32(9)
static ::AudioHelm::Param const kArpPattern;

/// @brief Field kArpSync value: I32(10)
static ::AudioHelm::Param const kArpSync;

/// @brief Field kArpTempo value: I32(11)
static ::AudioHelm::Param const kArpTempo;

/// @brief Field kCrossMod value: I32(13)
static ::AudioHelm::Param const kCrossMod;

/// @brief Field kDelayDryWet value: I32(15)
static ::AudioHelm::Param const kDelayDryWet;

/// @brief Field kDelayFeedback value: I32(16)
static ::AudioHelm::Param const kDelayFeedback;

/// @brief Field kDelayFrequency value: I32(17)
static ::AudioHelm::Param const kDelayFrequency;

/// @brief Field kDelayOn value: I32(18)
static ::AudioHelm::Param const kDelayOn;

/// @brief Field kDelaySync value: I32(19)
static ::AudioHelm::Param const kDelaySync;

/// @brief Field kDelayTempo value: I32(20)
static ::AudioHelm::Param const kDelayTempo;

/// @brief Field kDistortionDrive value: I32(23)
static ::AudioHelm::Param const kDistortionDrive;

/// @brief Field kDistortionMix value: I32(24)
static ::AudioHelm::Param const kDistortionMix;

/// @brief Field kDistortionOn value: I32(21)
static ::AudioHelm::Param const kDistortionOn;

/// @brief Field kDistortionType value: I32(22)
static ::AudioHelm::Param const kDistortionType;

/// @brief Field kFilterAttack value: I32(25)
static ::AudioHelm::Param const kFilterAttack;

/// @brief Field kFilterBlend value: I32(32)
static ::AudioHelm::Param const kFilterBlend;

/// @brief Field kFilterCutoff value: I32(14)
static ::AudioHelm::Param const kFilterCutoff;

/// @brief Field kFilterDecay value: I32(26)
static ::AudioHelm::Param const kFilterDecay;

/// @brief Field kFilterDrive value: I32(31)
static ::AudioHelm::Param const kFilterDrive;

/// @brief Field kFilterEnvelopeDepth value: I32(27)
static ::AudioHelm::Param const kFilterEnvelopeDepth;

/// @brief Field kFilterOn value: I32(36)
static ::AudioHelm::Param const kFilterOn;

/// @brief Field kFilterRelease value: I32(28)
static ::AudioHelm::Param const kFilterRelease;

/// @brief Field kFilterShelf value: I32(35)
static ::AudioHelm::Param const kFilterShelf;

/// @brief Field kFilterStyle value: I32(34)
static ::AudioHelm::Param const kFilterStyle;

/// @brief Field kFilterSustain value: I32(29)
static ::AudioHelm::Param const kFilterSustain;

/// @brief Field kFormantOn value: I32(37)
static ::AudioHelm::Param const kFormantOn;

/// @brief Field kFormantX value: I32(38)
static ::AudioHelm::Param const kFormantX;

/// @brief Field kFormantY value: I32(39)
static ::AudioHelm::Param const kFormantY;

/// @brief Field kKeytrack value: I32(40)
static ::AudioHelm::Param const kKeytrack;

/// @brief Field kLegato value: I32(41)
static ::AudioHelm::Param const kLegato;

/// @brief Field kModAttack value: I32(42)
static ::AudioHelm::Param const kModAttack;

/// @brief Field kModDecay value: I32(43)
static ::AudioHelm::Param const kModDecay;

/// @brief Field kModRelease value: I32(44)
static ::AudioHelm::Param const kModRelease;

/// @brief Field kModSustain value: I32(45)
static ::AudioHelm::Param const kModSustain;

/// @brief Field kMonoLfo1Amplitude value: I32(46)
static ::AudioHelm::Param const kMonoLfo1Amplitude;

/// @brief Field kMonoLfo1Frequency value: I32(47)
static ::AudioHelm::Param const kMonoLfo1Frequency;

/// @brief Field kMonoLfo1Retrigger value: I32(48)
static ::AudioHelm::Param const kMonoLfo1Retrigger;

/// @brief Field kMonoLfo1Sync value: I32(49)
static ::AudioHelm::Param const kMonoLfo1Sync;

/// @brief Field kMonoLfo1Tempo value: I32(50)
static ::AudioHelm::Param const kMonoLfo1Tempo;

/// @brief Field kMonoLfo1Waveform value: I32(51)
static ::AudioHelm::Param const kMonoLfo1Waveform;

/// @brief Field kMonoLfo2Amplitude value: I32(52)
static ::AudioHelm::Param const kMonoLfo2Amplitude;

/// @brief Field kMonoLfo2Frequency value: I32(53)
static ::AudioHelm::Param const kMonoLfo2Frequency;

/// @brief Field kMonoLfo2Retrigger value: I32(54)
static ::AudioHelm::Param const kMonoLfo2Retrigger;

/// @brief Field kMonoLfo2Sync value: I32(55)
static ::AudioHelm::Param const kMonoLfo2Sync;

/// @brief Field kMonoLfo2Tempo value: I32(56)
static ::AudioHelm::Param const kMonoLfo2Tempo;

/// @brief Field kMonoLfo2Waveform value: I32(57)
static ::AudioHelm::Param const kMonoLfo2Waveform;

/// @brief Field kNoiseVolume value: I32(58)
static ::AudioHelm::Param const kNoiseVolume;

/// @brief Field kNone value: I32(0)
static ::AudioHelm::Param const kNone;

/// @brief Field kNumSteps value: I32(59)
static ::AudioHelm::Param const kNumSteps;

/// @brief Field kOsc1Transpose value: I32(60)
static ::AudioHelm::Param const kOsc1Transpose;

/// @brief Field kOsc1Tune value: I32(61)
static ::AudioHelm::Param const kOsc1Tune;

/// @brief Field kOsc1UnisonDetune value: I32(62)
static ::AudioHelm::Param const kOsc1UnisonDetune;

/// @brief Field kOsc1UnisonHarmonize value: I32(139)
static ::AudioHelm::Param const kOsc1UnisonHarmonize;

/// @brief Field kOsc1UnisonVoices value: I32(63)
static ::AudioHelm::Param const kOsc1UnisonVoices;

/// @brief Field kOsc1Volume value: I32(64)
static ::AudioHelm::Param const kOsc1Volume;

/// @brief Field kOsc1Waveform value: I32(65)
static ::AudioHelm::Param const kOsc1Waveform;

/// @brief Field kOsc2Transpose value: I32(66)
static ::AudioHelm::Param const kOsc2Transpose;

/// @brief Field kOsc2Tune value: I32(67)
static ::AudioHelm::Param const kOsc2Tune;

/// @brief Field kOsc2UnisonDetune value: I32(68)
static ::AudioHelm::Param const kOsc2UnisonDetune;

/// @brief Field kOsc2UnisonHarmonize value: I32(140)
static ::AudioHelm::Param const kOsc2UnisonHarmonize;

/// @brief Field kOsc2UnisonVoices value: I32(69)
static ::AudioHelm::Param const kOsc2UnisonVoices;

/// @brief Field kOsc2Volume value: I32(70)
static ::AudioHelm::Param const kOsc2Volume;

/// @brief Field kOsc2Waveform value: I32(71)
static ::AudioHelm::Param const kOsc2Waveform;

/// @brief Field kOscFeedbackAmount value: I32(72)
static ::AudioHelm::Param const kOscFeedbackAmount;

/// @brief Field kOscFeedbackTranspose value: I32(73)
static ::AudioHelm::Param const kOscFeedbackTranspose;

/// @brief Field kOscFeedbackTune value: I32(74)
static ::AudioHelm::Param const kOscFeedbackTune;

/// @brief Field kPitchBendRange value: I32(76)
static ::AudioHelm::Param const kPitchBendRange;

/// @brief Field kPolyLfoAmplitude value: I32(77)
static ::AudioHelm::Param const kPolyLfoAmplitude;

/// @brief Field kPolyLfoFrequency value: I32(78)
static ::AudioHelm::Param const kPolyLfoFrequency;

/// @brief Field kPolyLfoSync value: I32(79)
static ::AudioHelm::Param const kPolyLfoSync;

/// @brief Field kPolyLfoTempo value: I32(80)
static ::AudioHelm::Param const kPolyLfoTempo;

/// @brief Field kPolyLfoWaveform value: I32(81)
static ::AudioHelm::Param const kPolyLfoWaveform;

/// @brief Field kPolyphony value: I32(82)
static ::AudioHelm::Param const kPolyphony;

/// @brief Field kPortamento value: I32(83)
static ::AudioHelm::Param const kPortamento;

/// @brief Field kPortamentoType value: I32(84)
static ::AudioHelm::Param const kPortamentoType;

/// @brief Field kResonance value: I32(85)
static ::AudioHelm::Param const kResonance;

/// @brief Field kReverbDamping value: I32(86)
static ::AudioHelm::Param const kReverbDamping;

/// @brief Field kReverbDryWet value: I32(87)
static ::AudioHelm::Param const kReverbDryWet;

/// @brief Field kReverbFeedback value: I32(88)
static ::AudioHelm::Param const kReverbFeedback;

/// @brief Field kReverbOn value: I32(89)
static ::AudioHelm::Param const kReverbOn;

/// @brief Field kStepFrequency value: I32(90)
static ::AudioHelm::Param const kStepFrequency;

/// @brief Field kStepSequencerRetrigger value: I32(123)
static ::AudioHelm::Param const kStepSequencerRetrigger;

/// @brief Field kStepSequencerSync value: I32(124)
static ::AudioHelm::Param const kStepSequencerSync;

/// @brief Field kStepSequencerTempo value: I32(125)
static ::AudioHelm::Param const kStepSequencerTempo;

/// @brief Field kStepSmoothing value: I32(126)
static ::AudioHelm::Param const kStepSmoothing;

/// @brief Field kStutterFrequency value: I32(127)
static ::AudioHelm::Param const kStutterFrequency;

/// @brief Field kStutterOn value: I32(128)
static ::AudioHelm::Param const kStutterOn;

/// @brief Field kStutterResampleFrequency value: I32(129)
static ::AudioHelm::Param const kStutterResampleFrequency;

/// @brief Field kStutterResampleSync value: I32(130)
static ::AudioHelm::Param const kStutterResampleSync;

/// @brief Field kStutterResampleTempo value: I32(131)
static ::AudioHelm::Param const kStutterResampleTempo;

/// @brief Field kStutterSoftness value: I32(132)
static ::AudioHelm::Param const kStutterSoftness;

/// @brief Field kStutterSync value: I32(133)
static ::AudioHelm::Param const kStutterSync;

/// @brief Field kStutterTempo value: I32(134)
static ::AudioHelm::Param const kStutterTempo;

/// @brief Field kSubOctave value: I32(136)
static ::AudioHelm::Param const kSubOctave;

/// @brief Field kSubShuffle value: I32(135)
static ::AudioHelm::Param const kSubShuffle;

/// @brief Field kSubVolume value: I32(137)
static ::AudioHelm::Param const kSubVolume;

/// @brief Field kSubWaveform value: I32(138)
static ::AudioHelm::Param const kSubWaveform;

/// @brief Field kVelocityTrack value: I32(141)
static ::AudioHelm::Param const kVelocityTrack;

/// @brief Field kVolume value: I32(142)
static ::AudioHelm::Param const kVolume;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::Param, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::Param, 0x4>, "Size mismatch!");

} // namespace end def AudioHelm
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Param, "AudioHelm", "Param");
