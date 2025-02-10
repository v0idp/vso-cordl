#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/IEventWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IEventWriter)
namespace Melanchall::DryWetMidi::Core {
class MidiEvent;
}
namespace Melanchall::DryWetMidi::Core {
class MidiWriter;
}
namespace Melanchall::DryWetMidi::Core {
class WritingSettings;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class IEventWriter;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::IEventWriter);
// Dependencies 
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.IEventWriter
class CORDL_TYPE IEventWriter {
public:
// Declarations
/// @brief Method CalculateSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t CalculateSize(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings, bool  writeStatusByte) ;

/// @brief Method GetStatusByte, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline uint8_t GetStatusByte(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent) ;

/// @brief Method Write, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Write(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, ::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings, bool  writeStatusByte) ;

// Ctor Parameters [CppParam { name: "", ty: "IEventWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEventWriter(IEventWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11645};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::IEventWriter);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::IEventWriter*, "Melanchall.DryWetMidi.Core", "IEventWriter");
