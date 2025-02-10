#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/PitchBendEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Core/zzzz__ChannelEvent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PitchBendEvent)
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
class PitchBendEvent;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::PitchBendEvent);
// Dependencies Melanchall.DryWetMidi.Core.ChannelEvent
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.PitchBendEvent
class CORDL_TYPE PitchBendEvent : public ::Melanchall::DryWetMidi::Core::ChannelEvent {
public:
// Declarations
 __declspec(property(get=get_PitchValue, put=set_PitchValue)) uint16_t  PitchValue;

/// @brief Method CloneEvent, addr 0x25a22bc, size 0x84, virtual true, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::MidiEvent* CloneEvent() ;

/// @brief Method GetSize, addr 0x25a22b4, size 0x8, virtual true, abstract: false, final false
inline int32_t GetSize(::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

static inline ::Melanchall::DryWetMidi::Core::PitchBendEvent* New_ctor() ;

static inline ::Melanchall::DryWetMidi::Core::PitchBendEvent* New_ctor(uint16_t  pitchValue) ;

/// @brief Method ToString, addr 0x25a2340, size 0xc4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Write, addr 0x25a227c, size 0x38, virtual true, abstract: false, final false
inline void Write(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

/// @brief Method .ctor, addr 0x25a1f74, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x25a1f9c, size 0x34, virtual false, abstract: false, final false
inline void _ctor(uint16_t  pitchValue) ;

/// @brief Method get_PitchValue, addr 0x25a20f0, size 0x10, virtual false, abstract: false, final false
inline uint16_t get_PitchValue() ;

/// @brief Method set_PitchValue, addr 0x25a1fd0, size 0x120, virtual false, abstract: false, final false
inline void set_PitchValue(uint16_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PitchBendEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PitchBendEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PitchBendEvent(PitchBendEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PitchBendEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PitchBendEvent(PitchBendEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11634};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::PitchBendEvent, 0x20>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::PitchBendEvent);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::PitchBendEvent*, "Melanchall.DryWetMidi.Core", "PitchBendEvent");
