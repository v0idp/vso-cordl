#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/MidiEventType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MidiEventType)
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
struct MidiEventType;
}
// Write type traits
MARK_VAL_T(::Melanchall::DryWetMidi::Core::MidiEventType);
// Dependencies 
namespace Melanchall::DryWetMidi::Core {
// Is value type: true
// CS Name: Melanchall.DryWetMidi.Core.MidiEventType
struct CORDL_TYPE MidiEventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __MidiEventType_Unwrapped
enum struct __MidiEventType_Unwrapped : uint8_t {
__E_NormalSysEx = static_cast<uint8_t>(0x0u),
__E_EscapeSysEx = static_cast<uint8_t>(0x1u),
__E_SequenceNumber = static_cast<uint8_t>(0x2u),
__E_Text = static_cast<uint8_t>(0x3u),
__E_CopyrightNotice = static_cast<uint8_t>(0x4u),
__E_SequenceTrackName = static_cast<uint8_t>(0x5u),
__E_InstrumentName = static_cast<uint8_t>(0x6u),
__E_Lyric = static_cast<uint8_t>(0x7u),
__E_Marker = static_cast<uint8_t>(0x8u),
__E_CuePoint = static_cast<uint8_t>(0x9u),
__E_ProgramName = static_cast<uint8_t>(0xau),
__E_DeviceName = static_cast<uint8_t>(0xbu),
__E_ChannelPrefix = static_cast<uint8_t>(0xcu),
__E_PortPrefix = static_cast<uint8_t>(0xdu),
__E_EndOfTrack = static_cast<uint8_t>(0xeu),
__E_SetTempo = static_cast<uint8_t>(0xfu),
__E_SmpteOffset = static_cast<uint8_t>(0x10u),
__E_TimeSignature = static_cast<uint8_t>(0x11u),
__E_KeySignature = static_cast<uint8_t>(0x12u),
__E_SequencerSpecific = static_cast<uint8_t>(0x13u),
__E_UnknownMeta = static_cast<uint8_t>(0x14u),
__E_CustomMeta = static_cast<uint8_t>(0x15u),
__E_NoteOff = static_cast<uint8_t>(0x16u),
__E_NoteOn = static_cast<uint8_t>(0x17u),
__E_NoteAftertouch = static_cast<uint8_t>(0x18u),
__E_ControlChange = static_cast<uint8_t>(0x19u),
__E_ProgramChange = static_cast<uint8_t>(0x1au),
__E_ChannelAftertouch = static_cast<uint8_t>(0x1bu),
__E_PitchBend = static_cast<uint8_t>(0x1cu),
__E_TimingClock = static_cast<uint8_t>(0x1du),
__E_Start = static_cast<uint8_t>(0x1eu),
__E_Continue = static_cast<uint8_t>(0x1fu),
__E_Stop = static_cast<uint8_t>(0x20u),
__E_ActiveSensing = static_cast<uint8_t>(0x21u),
__E_Reset = static_cast<uint8_t>(0x22u),
__E_MidiTimeCode = static_cast<uint8_t>(0x23u),
__E_SongPositionPointer = static_cast<uint8_t>(0x24u),
__E_SongSelect = static_cast<uint8_t>(0x25u),
__E_TuneRequest = static_cast<uint8_t>(0x26u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MidiEventType_Unwrapped () const noexcept {
return static_cast<__MidiEventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MidiEventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr MidiEventType(uint8_t  value__) noexcept;

/// @brief Field ActiveSensing value: U8(33)
static ::Melanchall::DryWetMidi::Core::MidiEventType const ActiveSensing;

/// @brief Field ChannelAftertouch value: U8(27)
static ::Melanchall::DryWetMidi::Core::MidiEventType const ChannelAftertouch;

/// @brief Field ChannelPrefix value: U8(12)
static ::Melanchall::DryWetMidi::Core::MidiEventType const ChannelPrefix;

/// @brief Field Continue value: U8(31)
static ::Melanchall::DryWetMidi::Core::MidiEventType const Continue;

/// @brief Field ControlChange value: U8(25)
static ::Melanchall::DryWetMidi::Core::MidiEventType const ControlChange;

/// @brief Field CopyrightNotice value: U8(4)
static ::Melanchall::DryWetMidi::Core::MidiEventType const CopyrightNotice;

/// @brief Field CuePoint value: U8(9)
static ::Melanchall::DryWetMidi::Core::MidiEventType const CuePoint;

/// @brief Field CustomMeta value: U8(21)
static ::Melanchall::DryWetMidi::Core::MidiEventType const CustomMeta;

/// @brief Field DeviceName value: U8(11)
static ::Melanchall::DryWetMidi::Core::MidiEventType const DeviceName;

/// @brief Field EndOfTrack value: U8(14)
static ::Melanchall::DryWetMidi::Core::MidiEventType const EndOfTrack;

/// @brief Field EscapeSysEx value: U8(1)
static ::Melanchall::DryWetMidi::Core::MidiEventType const EscapeSysEx;

/// @brief Field InstrumentName value: U8(6)
static ::Melanchall::DryWetMidi::Core::MidiEventType const InstrumentName;

/// @brief Field KeySignature value: U8(18)
static ::Melanchall::DryWetMidi::Core::MidiEventType const KeySignature;

/// @brief Field Lyric value: U8(7)
static ::Melanchall::DryWetMidi::Core::MidiEventType const Lyric;

/// @brief Field Marker value: U8(8)
static ::Melanchall::DryWetMidi::Core::MidiEventType const Marker;

/// @brief Field MidiTimeCode value: U8(35)
static ::Melanchall::DryWetMidi::Core::MidiEventType const MidiTimeCode;

/// @brief Field NormalSysEx value: U8(0)
static ::Melanchall::DryWetMidi::Core::MidiEventType const NormalSysEx;

/// @brief Field NoteAftertouch value: U8(24)
static ::Melanchall::DryWetMidi::Core::MidiEventType const NoteAftertouch;

/// @brief Field NoteOff value: U8(22)
static ::Melanchall::DryWetMidi::Core::MidiEventType const NoteOff;

/// @brief Field NoteOn value: U8(23)
static ::Melanchall::DryWetMidi::Core::MidiEventType const NoteOn;

/// @brief Field PitchBend value: U8(28)
static ::Melanchall::DryWetMidi::Core::MidiEventType const PitchBend;

/// @brief Field PortPrefix value: U8(13)
static ::Melanchall::DryWetMidi::Core::MidiEventType const PortPrefix;

/// @brief Field ProgramChange value: U8(26)
static ::Melanchall::DryWetMidi::Core::MidiEventType const ProgramChange;

/// @brief Field ProgramName value: U8(10)
static ::Melanchall::DryWetMidi::Core::MidiEventType const ProgramName;

/// @brief Field Reset value: U8(34)
static ::Melanchall::DryWetMidi::Core::MidiEventType const Reset;

/// @brief Field SequenceNumber value: U8(2)
static ::Melanchall::DryWetMidi::Core::MidiEventType const SequenceNumber;

/// @brief Field SequenceTrackName value: U8(5)
static ::Melanchall::DryWetMidi::Core::MidiEventType const SequenceTrackName;

/// @brief Field SequencerSpecific value: U8(19)
static ::Melanchall::DryWetMidi::Core::MidiEventType const SequencerSpecific;

/// @brief Field SetTempo value: U8(15)
static ::Melanchall::DryWetMidi::Core::MidiEventType const SetTempo;

/// @brief Field SmpteOffset value: U8(16)
static ::Melanchall::DryWetMidi::Core::MidiEventType const SmpteOffset;

/// @brief Field SongPositionPointer value: U8(36)
static ::Melanchall::DryWetMidi::Core::MidiEventType const SongPositionPointer;

/// @brief Field SongSelect value: U8(37)
static ::Melanchall::DryWetMidi::Core::MidiEventType const SongSelect;

/// @brief Field Start value: U8(30)
static ::Melanchall::DryWetMidi::Core::MidiEventType const Start;

/// @brief Field Stop value: U8(32)
static ::Melanchall::DryWetMidi::Core::MidiEventType const Stop;

/// @brief Field Text value: U8(3)
static ::Melanchall::DryWetMidi::Core::MidiEventType const Text;

/// @brief Field TimeSignature value: U8(17)
static ::Melanchall::DryWetMidi::Core::MidiEventType const TimeSignature;

/// @brief Field TimingClock value: U8(29)
static ::Melanchall::DryWetMidi::Core::MidiEventType const TimingClock;

/// @brief Field TuneRequest value: U8(38)
static ::Melanchall::DryWetMidi::Core::MidiEventType const TuneRequest;

/// @brief Field UnknownMeta value: U8(20)
static ::Melanchall::DryWetMidi::Core::MidiEventType const UnknownMeta;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11627};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::MidiEventType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::MidiEventType, 0x1>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::MidiEventType, "Melanchall.DryWetMidi.Core", "MidiEventType");
