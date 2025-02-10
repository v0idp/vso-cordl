#pragma once
// IWYU pragma private; include "AudioHelm/CommonParam.hpp"
#include "AudioHelm/zzzz__CommonParam_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::AudioHelm::CommonParam::CommonParam(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::AudioHelm::CommonParam::CommonParam()   {
}
constexpr ::AudioHelm::CommonParam  AudioHelm::CommonParam::kNone{static_cast<int32_t>(0x0)};
constexpr ::AudioHelm::CommonParam  AudioHelm::CommonParam::kFilterCutoff{static_cast<int32_t>(0xe)};
constexpr ::AudioHelm::CommonParam  AudioHelm::CommonParam::kResonance{static_cast<int32_t>(0x55)};
constexpr ::AudioHelm::CommonParam  AudioHelm::CommonParam::kFilterAttack{static_cast<int32_t>(0x19)};
constexpr ::AudioHelm::CommonParam  AudioHelm::CommonParam::kFilterRelease{static_cast<int32_t>(0x1c)};
constexpr ::AudioHelm::CommonParam  AudioHelm::CommonParam::kFilterEnvelopeDepth{static_cast<int32_t>(0x1b)};
constexpr ::AudioHelm::CommonParam  AudioHelm::CommonParam::kFormantX{static_cast<int32_t>(0x26)};
constexpr ::AudioHelm::CommonParam  AudioHelm::CommonParam::kFormantY{static_cast<int32_t>(0x27)};
constexpr ::AudioHelm::CommonParam  AudioHelm::CommonParam::kAmplitudeAttack{static_cast<int32_t>(0x1)};
constexpr ::AudioHelm::CommonParam  AudioHelm::CommonParam::kAmplitudeRelease{static_cast<int32_t>(0x4)};
constexpr ::AudioHelm::CommonParam  AudioHelm::CommonParam::kCrossMod{static_cast<int32_t>(0xd)};
constexpr ::AudioHelm::CommonParam  AudioHelm::CommonParam::kOsc1Tune{static_cast<int32_t>(0x3d)};
constexpr ::AudioHelm::CommonParam  AudioHelm::CommonParam::kOsc2Tune{static_cast<int32_t>(0x43)};
constexpr ::AudioHelm::CommonParam  AudioHelm::CommonParam::kOsc1Transpose{static_cast<int32_t>(0x3c)};
constexpr ::AudioHelm::CommonParam  AudioHelm::CommonParam::kOsc2Transpose{static_cast<int32_t>(0x42)};
constexpr ::AudioHelm::CommonParam  AudioHelm::CommonParam::kOsc1UnisonDetune{static_cast<int32_t>(0x3e)};
constexpr ::AudioHelm::CommonParam  AudioHelm::CommonParam::kOsc2UnisonDetune{static_cast<int32_t>(0x44)};
constexpr ::AudioHelm::CommonParam  AudioHelm::CommonParam::kDelayFrequency{static_cast<int32_t>(0x11)};
constexpr ::AudioHelm::CommonParam  AudioHelm::CommonParam::kDelayTempo{static_cast<int32_t>(0x14)};
