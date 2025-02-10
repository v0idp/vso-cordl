#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/MetaEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Core/zzzz__MidiEvent_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MetaEvent)
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
class MetaEvent;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::MetaEvent);
// Dependencies Melanchall.DryWetMidi.Core.MidiEvent
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.MetaEvent
class CORDL_TYPE MetaEvent : public ::Melanchall::DryWetMidi::Core::MidiEvent {
public:
// Declarations
/// @brief Method GetContentSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetContentSize(::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

/// @brief Method GetSize, addr 0x25a1648, size 0xc, virtual true, abstract: false, final true
inline int32_t GetSize(::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

static inline ::Melanchall::DryWetMidi::Core::MetaEvent* New_ctor(::Melanchall::DryWetMidi::Core::MidiEventType  eventType) ;

/// @brief Method Write, addr 0x25a163c, size 0xc, virtual true, abstract: false, final true
inline void Write(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

/// @brief Method WriteContent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void WriteContent(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

/// @brief Method .ctor, addr 0x25a1614, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Melanchall::DryWetMidi::Core::MidiEventType  eventType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaEvent(MetaEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaEvent(MetaEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11625};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::MetaEvent, 0x20>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::MetaEvent);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::MetaEvent*, "Melanchall.DryWetMidi.Core", "MetaEvent");
