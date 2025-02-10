#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/NoteOnEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Core/zzzz__NoteEvent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NoteOnEvent)
namespace Melanchall::DryWetMidi::Common {
struct SevenBitNumber;
}
namespace Melanchall::DryWetMidi::Core {
class MidiEvent;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class NoteOnEvent;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::NoteOnEvent);
// Dependencies Melanchall.DryWetMidi.Core.NoteEvent
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.NoteOnEvent
class CORDL_TYPE NoteOnEvent : public ::Melanchall::DryWetMidi::Core::NoteEvent {
public:
// Declarations
/// @brief Method CloneEvent, addr 0x25a1e14, size 0x78, virtual true, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::MidiEvent* CloneEvent() ;

static inline ::Melanchall::DryWetMidi::Core::NoteOnEvent* New_ctor() ;

static inline ::Melanchall::DryWetMidi::Core::NoteOnEvent* New_ctor(::Melanchall::DryWetMidi::Common::SevenBitNumber  noteNumber, ::Melanchall::DryWetMidi::Common::SevenBitNumber  velocity) ;

/// @brief Method ToString, addr 0x25a1e8c, size 0xe8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x25a0484, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x25a1e00, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::Melanchall::DryWetMidi::Common::SevenBitNumber  noteNumber, ::Melanchall::DryWetMidi::Common::SevenBitNumber  velocity) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteOnEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteOnEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteOnEvent(NoteOnEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteOnEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteOnEvent(NoteOnEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11633};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::NoteOnEvent, 0x20>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::NoteOnEvent);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::NoteOnEvent*, "Melanchall.DryWetMidi.Core", "NoteOnEvent");
