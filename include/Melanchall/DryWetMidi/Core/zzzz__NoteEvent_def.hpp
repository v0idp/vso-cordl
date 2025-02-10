#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/NoteEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Core/zzzz__ChannelEvent_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NoteEvent)
namespace Melanchall::DryWetMidi::Common {
struct SevenBitNumber;
}
namespace Melanchall::DryWetMidi::Core {
struct MidiEventType;
}
namespace Melanchall::DryWetMidi::Core {
class MidiWriter;
}
namespace Melanchall::DryWetMidi::Core {
class WritingSettings;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class NoteEvent;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::NoteEvent);
// Dependencies Melanchall.DryWetMidi.Core.ChannelEvent
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.NoteEvent
class CORDL_TYPE NoteEvent : public ::Melanchall::DryWetMidi::Core::ChannelEvent {
public:
// Declarations
 __declspec(property(get=get_NoteNumber, put=set_NoteNumber)) ::Melanchall::DryWetMidi::Common::SevenBitNumber  NoteNumber;

 __declspec(property(get=get_Velocity, put=set_Velocity)) ::Melanchall::DryWetMidi::Common::SevenBitNumber  Velocity;

/// @brief Method GetSize, addr 0x25a1c64, size 0x8, virtual true, abstract: false, final true
inline int32_t GetSize(::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

static inline ::Melanchall::DryWetMidi::Core::NoteEvent* New_ctor(::Melanchall::DryWetMidi::Core::MidiEventType  eventType) ;

static inline ::Melanchall::DryWetMidi::Core::NoteEvent* New_ctor(::Melanchall::DryWetMidi::Core::MidiEventType  eventType, ::Melanchall::DryWetMidi::Common::SevenBitNumber  noteNumber, ::Melanchall::DryWetMidi::Common::SevenBitNumber  velocity) ;

/// @brief Method Write, addr 0x25a1c2c, size 0x38, virtual true, abstract: false, final true
inline void Write(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

/// @brief Method .ctor, addr 0x25a1ae8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Melanchall::DryWetMidi::Core::MidiEventType  eventType) ;

/// @brief Method .ctor, addr 0x25a1b10, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::Melanchall::DryWetMidi::Core::MidiEventType  eventType, ::Melanchall::DryWetMidi::Common::SevenBitNumber  noteNumber, ::Melanchall::DryWetMidi::Common::SevenBitNumber  velocity) ;

/// @brief Method get_NoteNumber, addr 0x25a04a4, size 0x70, virtual false, abstract: false, final false
inline ::Melanchall::DryWetMidi::Common::SevenBitNumber get_NoteNumber() ;

/// @brief Method get_Velocity, addr 0x25a1bbc, size 0x70, virtual false, abstract: false, final false
inline ::Melanchall::DryWetMidi::Common::SevenBitNumber get_Velocity() ;

/// @brief Method set_NoteNumber, addr 0x25a0514, size 0x60, virtual false, abstract: false, final false
inline void set_NoteNumber(::Melanchall::DryWetMidi::Common::SevenBitNumber  value) ;

/// @brief Method set_Velocity, addr 0x25a1b5c, size 0x60, virtual false, abstract: false, final false
inline void set_Velocity(::Melanchall::DryWetMidi::Common::SevenBitNumber  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteEvent(NoteEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteEvent(NoteEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11631};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::NoteEvent, 0x20>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::NoteEvent);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::NoteEvent*, "Melanchall.DryWetMidi.Core", "NoteEvent");
