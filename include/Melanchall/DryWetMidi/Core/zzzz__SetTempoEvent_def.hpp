#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/SetTempoEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Core/zzzz__MetaEvent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SetTempoEvent)
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
class SetTempoEvent;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::SetTempoEvent);
// Dependencies Melanchall.DryWetMidi.Core.MetaEvent
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.SetTempoEvent
class CORDL_TYPE SetTempoEvent : public ::Melanchall::DryWetMidi::Core::MetaEvent {
public:
// Declarations
 __declspec(property(get=get_MicrosecondsPerQuarterNote)) int64_t  MicrosecondsPerQuarterNote;

/// @brief Field _microsecondsPerBeat, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__microsecondsPerBeat, put=__cordl_internal_set__microsecondsPerBeat)) int64_t  _microsecondsPerBeat;

/// @brief Method CloneEvent, addr 0x25a2a64, size 0x74, virtual true, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::MidiEvent* CloneEvent() ;

/// @brief Method GetContentSize, addr 0x25a2a5c, size 0x8, virtual true, abstract: false, final false
inline int32_t GetContentSize(::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

static inline ::Melanchall::DryWetMidi::Core::SetTempoEvent* New_ctor() ;

/// @brief Method ToString, addr 0x25a2ad8, size 0x84, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method WriteContent, addr 0x25a29d0, size 0x20, virtual true, abstract: false, final false
inline void WriteContent(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

constexpr int64_t const& __cordl_internal_get__microsecondsPerBeat() const;

constexpr int64_t& __cordl_internal_get__microsecondsPerBeat() ;

constexpr void __cordl_internal_set__microsecondsPerBeat(int64_t  value) ;

/// @brief Method .ctor, addr 0x25a299c, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MicrosecondsPerQuarterNote, addr 0x25a29c8, size 0x8, virtual false, abstract: false, final false
inline int64_t get_MicrosecondsPerQuarterNote() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetTempoEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetTempoEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetTempoEvent(SetTempoEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetTempoEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetTempoEvent(SetTempoEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11640};

/// @brief Field _microsecondsPerBeat, offset: 0x20, size: 0x8, def value: None
 int64_t  ____microsecondsPerBeat;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::SetTempoEvent, ____microsecondsPerBeat) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::SetTempoEvent, 0x28>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::SetTempoEvent);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::SetTempoEvent*, "Melanchall.DryWetMidi.Core", "SetTempoEvent");
