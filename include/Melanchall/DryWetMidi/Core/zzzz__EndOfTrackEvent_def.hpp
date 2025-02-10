#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/EndOfTrackEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Core/zzzz__MetaEvent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EndOfTrackEvent)
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
class EndOfTrackEvent;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::EndOfTrackEvent);
// Dependencies Melanchall.DryWetMidi.Core.MetaEvent
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.EndOfTrackEvent
class CORDL_TYPE EndOfTrackEvent : public ::Melanchall::DryWetMidi::Core::MetaEvent {
public:
// Declarations
/// @brief Method CloneEvent, addr 0x25a25ec, size 0x5c, virtual true, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::MidiEvent* CloneEvent() ;

/// @brief Method GetContentSize, addr 0x25a25e4, size 0x8, virtual true, abstract: false, final false
inline int32_t GetContentSize(::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

static inline ::Melanchall::DryWetMidi::Core::EndOfTrackEvent* New_ctor() ;

/// @brief Method ToString, addr 0x25a2648, size 0x40, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method WriteContent, addr 0x25a25e0, size 0x4, virtual true, abstract: false, final false
inline void WriteContent(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

/// @brief Method .ctor, addr 0x25a0990, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EndOfTrackEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EndOfTrackEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EndOfTrackEvent(EndOfTrackEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EndOfTrackEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EndOfTrackEvent(EndOfTrackEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11637};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::EndOfTrackEvent, 0x20>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::EndOfTrackEvent);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::EndOfTrackEvent*, "Melanchall.DryWetMidi.Core", "EndOfTrackEvent");
