#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/MidiEventType.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType::MidiEventType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType::MidiEventType()   {
}
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::NormalSysEx{static_cast<uint8_t>(0x0u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::EscapeSysEx{static_cast<uint8_t>(0x1u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::SequenceNumber{static_cast<uint8_t>(0x2u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::Text{static_cast<uint8_t>(0x3u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::CopyrightNotice{static_cast<uint8_t>(0x4u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::SequenceTrackName{static_cast<uint8_t>(0x5u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::InstrumentName{static_cast<uint8_t>(0x6u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::Lyric{static_cast<uint8_t>(0x7u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::Marker{static_cast<uint8_t>(0x8u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::CuePoint{static_cast<uint8_t>(0x9u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::ProgramName{static_cast<uint8_t>(0xau)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::DeviceName{static_cast<uint8_t>(0xbu)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::ChannelPrefix{static_cast<uint8_t>(0xcu)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::PortPrefix{static_cast<uint8_t>(0xdu)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::EndOfTrack{static_cast<uint8_t>(0xeu)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::SetTempo{static_cast<uint8_t>(0xfu)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::SmpteOffset{static_cast<uint8_t>(0x10u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::TimeSignature{static_cast<uint8_t>(0x11u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::KeySignature{static_cast<uint8_t>(0x12u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::SequencerSpecific{static_cast<uint8_t>(0x13u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::UnknownMeta{static_cast<uint8_t>(0x14u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::CustomMeta{static_cast<uint8_t>(0x15u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::NoteOff{static_cast<uint8_t>(0x16u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::NoteOn{static_cast<uint8_t>(0x17u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::NoteAftertouch{static_cast<uint8_t>(0x18u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::ControlChange{static_cast<uint8_t>(0x19u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::ProgramChange{static_cast<uint8_t>(0x1au)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::ChannelAftertouch{static_cast<uint8_t>(0x1bu)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::PitchBend{static_cast<uint8_t>(0x1cu)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::TimingClock{static_cast<uint8_t>(0x1du)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::Start{static_cast<uint8_t>(0x1eu)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::Continue{static_cast<uint8_t>(0x1fu)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::Stop{static_cast<uint8_t>(0x20u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::ActiveSensing{static_cast<uint8_t>(0x21u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::Reset{static_cast<uint8_t>(0x22u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::MidiTimeCode{static_cast<uint8_t>(0x23u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::SongPositionPointer{static_cast<uint8_t>(0x24u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::SongSelect{static_cast<uint8_t>(0x25u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiEventType  Melanchall::DryWetMidi::Core::MidiEventType::TuneRequest{static_cast<uint8_t>(0x26u)};
