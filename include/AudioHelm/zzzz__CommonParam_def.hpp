#pragma once
// IWYU pragma private; include "AudioHelm/CommonParam.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CommonParam)
// Forward declare root types
namespace AudioHelm {
struct CommonParam;
}
// Write type traits
MARK_VAL_T(::AudioHelm::CommonParam);
// Dependencies 
namespace AudioHelm {
// Is value type: true
// CS Name: AudioHelm.CommonParam
struct CORDL_TYPE CommonParam {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CommonParam_Unwrapped
enum struct __CommonParam_Unwrapped : int32_t {
__E_kNone = static_cast<int32_t>(0x0),
__E_kFilterCutoff = static_cast<int32_t>(0xe),
__E_kResonance = static_cast<int32_t>(0x55),
__E_kFilterAttack = static_cast<int32_t>(0x19),
__E_kFilterRelease = static_cast<int32_t>(0x1c),
__E_kFilterEnvelopeDepth = static_cast<int32_t>(0x1b),
__E_kFormantX = static_cast<int32_t>(0x26),
__E_kFormantY = static_cast<int32_t>(0x27),
__E_kAmplitudeAttack = static_cast<int32_t>(0x1),
__E_kAmplitudeRelease = static_cast<int32_t>(0x4),
__E_kCrossMod = static_cast<int32_t>(0xd),
__E_kOsc1Tune = static_cast<int32_t>(0x3d),
__E_kOsc2Tune = static_cast<int32_t>(0x43),
__E_kOsc1Transpose = static_cast<int32_t>(0x3c),
__E_kOsc2Transpose = static_cast<int32_t>(0x42),
__E_kOsc1UnisonDetune = static_cast<int32_t>(0x3e),
__E_kOsc2UnisonDetune = static_cast<int32_t>(0x44),
__E_kDelayFrequency = static_cast<int32_t>(0x11),
__E_kDelayTempo = static_cast<int32_t>(0x14),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CommonParam_Unwrapped () const noexcept {
return static_cast<__CommonParam_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CommonParam() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CommonParam(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1906};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field kAmplitudeAttack value: I32(1)
static ::AudioHelm::CommonParam const kAmplitudeAttack;

/// @brief Field kAmplitudeRelease value: I32(4)
static ::AudioHelm::CommonParam const kAmplitudeRelease;

/// @brief Field kCrossMod value: I32(13)
static ::AudioHelm::CommonParam const kCrossMod;

/// @brief Field kDelayFrequency value: I32(17)
static ::AudioHelm::CommonParam const kDelayFrequency;

/// @brief Field kDelayTempo value: I32(20)
static ::AudioHelm::CommonParam const kDelayTempo;

/// @brief Field kFilterAttack value: I32(25)
static ::AudioHelm::CommonParam const kFilterAttack;

/// @brief Field kFilterCutoff value: I32(14)
static ::AudioHelm::CommonParam const kFilterCutoff;

/// @brief Field kFilterEnvelopeDepth value: I32(27)
static ::AudioHelm::CommonParam const kFilterEnvelopeDepth;

/// @brief Field kFilterRelease value: I32(28)
static ::AudioHelm::CommonParam const kFilterRelease;

/// @brief Field kFormantX value: I32(38)
static ::AudioHelm::CommonParam const kFormantX;

/// @brief Field kFormantY value: I32(39)
static ::AudioHelm::CommonParam const kFormantY;

/// @brief Field kNone value: I32(0)
static ::AudioHelm::CommonParam const kNone;

/// @brief Field kOsc1Transpose value: I32(60)
static ::AudioHelm::CommonParam const kOsc1Transpose;

/// @brief Field kOsc1Tune value: I32(61)
static ::AudioHelm::CommonParam const kOsc1Tune;

/// @brief Field kOsc1UnisonDetune value: I32(62)
static ::AudioHelm::CommonParam const kOsc1UnisonDetune;

/// @brief Field kOsc2Transpose value: I32(66)
static ::AudioHelm::CommonParam const kOsc2Transpose;

/// @brief Field kOsc2Tune value: I32(67)
static ::AudioHelm::CommonParam const kOsc2Tune;

/// @brief Field kOsc2UnisonDetune value: I32(68)
static ::AudioHelm::CommonParam const kOsc2UnisonDetune;

/// @brief Field kResonance value: I32(85)
static ::AudioHelm::CommonParam const kResonance;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::CommonParam, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::CommonParam, 0x4>, "Size mismatch!");

} // namespace end def AudioHelm
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::CommonParam, "AudioHelm", "CommonParam");
