#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/SystemCommonEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Core/zzzz__MidiEvent_def.hpp"
CORDL_MODULE_EXPORT(SystemCommonEvent)
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class SystemCommonEvent;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::SystemCommonEvent);
// Dependencies Melanchall.DryWetMidi.Core.MidiEvent
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.SystemCommonEvent
class CORDL_TYPE SystemCommonEvent : public ::Melanchall::DryWetMidi::Core::MidiEvent {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemCommonEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemCommonEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemCommonEvent(SystemCommonEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemCommonEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemCommonEvent(SystemCommonEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11628};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::SystemCommonEvent, 0x20>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::SystemCommonEvent);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::SystemCommonEvent*, "Melanchall.DryWetMidi.Core", "SystemCommonEvent");
