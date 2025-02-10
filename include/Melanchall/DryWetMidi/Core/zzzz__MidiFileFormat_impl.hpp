#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/MidiFileFormat.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiFileFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Melanchall::DryWetMidi::Core::MidiFileFormat::MidiFileFormat(uint16_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::MidiFileFormat::MidiFileFormat()   {
}
constexpr ::Melanchall::DryWetMidi::Core::MidiFileFormat  Melanchall::DryWetMidi::Core::MidiFileFormat::SingleTrack{static_cast<uint16_t>(0x0u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiFileFormat  Melanchall::DryWetMidi::Core::MidiFileFormat::MultiTrack{static_cast<uint16_t>(0x1u)};
constexpr ::Melanchall::DryWetMidi::Core::MidiFileFormat  Melanchall::DryWetMidi::Core::MidiFileFormat::MultiSequence{static_cast<uint16_t>(0x2u)};
