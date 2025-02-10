#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/SystemRealTimeEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Core/zzzz__MidiEvent_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SystemRealTimeEvent)
namespace Melanchall::DryWetMidi::Core {
class MidiWriter;
}
namespace Melanchall::DryWetMidi::Core {
class WritingSettings;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class SystemRealTimeEvent;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::SystemRealTimeEvent);
// Dependencies Melanchall.DryWetMidi.Core.MidiEvent
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.SystemRealTimeEvent
class CORDL_TYPE SystemRealTimeEvent : public ::Melanchall::DryWetMidi::Core::MidiEvent {
public:
// Declarations
/// @brief Method GetSize, addr 0x25a1678, size 0x8, virtual true, abstract: false, final true
inline int32_t GetSize(::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

/// @brief Method Write, addr 0x25a1674, size 0x4, virtual true, abstract: false, final true
inline void Write(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemRealTimeEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemRealTimeEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemRealTimeEvent(SystemRealTimeEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemRealTimeEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemRealTimeEvent(SystemRealTimeEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11629};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::SystemRealTimeEvent, 0x20>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::SystemRealTimeEvent);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::SystemRealTimeEvent*, "Melanchall.DryWetMidi.Core", "SystemRealTimeEvent");
