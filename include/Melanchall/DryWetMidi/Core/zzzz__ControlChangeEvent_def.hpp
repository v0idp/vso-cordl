#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/ControlChangeEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Core/zzzz__ChannelEvent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControlChangeEvent)
namespace Melanchall::DryWetMidi::Common {
struct SevenBitNumber;
}
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
class ControlChangeEvent;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::ControlChangeEvent);
// Dependencies Melanchall.DryWetMidi.Core.ChannelEvent
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.ControlChangeEvent
class CORDL_TYPE ControlChangeEvent : public ::Melanchall::DryWetMidi::Core::ChannelEvent {
public:
// Declarations
 __declspec(property(get=get_ControlNumber, put=set_ControlNumber)) ::Melanchall::DryWetMidi::Common::SevenBitNumber  ControlNumber;

 __declspec(property(get=get_ControlValue, put=set_ControlValue)) ::Melanchall::DryWetMidi::Common::SevenBitNumber  ControlValue;

/// @brief Method CloneEvent, addr 0x25a1988, size 0x78, virtual true, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::MidiEvent* CloneEvent() ;

/// @brief Method GetSize, addr 0x25a1980, size 0x8, virtual true, abstract: false, final false
inline int32_t GetSize(::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

static inline ::Melanchall::DryWetMidi::Core::ControlChangeEvent* New_ctor() ;

static inline ::Melanchall::DryWetMidi::Core::ControlChangeEvent* New_ctor(::Melanchall::DryWetMidi::Common::SevenBitNumber  controlNumber, ::Melanchall::DryWetMidi::Common::SevenBitNumber  controlValue) ;

/// @brief Method ToString, addr 0x25a1a00, size 0xe8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Write, addr 0x25a18a4, size 0x38, virtual true, abstract: false, final false
inline void Write(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

/// @brief Method .ctor, addr 0x25a1680, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x25a16a0, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::Melanchall::DryWetMidi::Common::SevenBitNumber  controlNumber, ::Melanchall::DryWetMidi::Common::SevenBitNumber  controlValue) ;

/// @brief Method get_ControlNumber, addr 0x25a17a4, size 0x70, virtual false, abstract: false, final false
inline ::Melanchall::DryWetMidi::Common::SevenBitNumber get_ControlNumber() ;

/// @brief Method get_ControlValue, addr 0x25a1834, size 0x70, virtual false, abstract: false, final false
inline ::Melanchall::DryWetMidi::Common::SevenBitNumber get_ControlValue() ;

/// @brief Method set_ControlNumber, addr 0x25a16e4, size 0x60, virtual false, abstract: false, final false
inline void set_ControlNumber(::Melanchall::DryWetMidi::Common::SevenBitNumber  value) ;

/// @brief Method set_ControlValue, addr 0x25a1744, size 0x60, virtual false, abstract: false, final false
inline void set_ControlValue(::Melanchall::DryWetMidi::Common::SevenBitNumber  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControlChangeEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControlChangeEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControlChangeEvent(ControlChangeEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControlChangeEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControlChangeEvent(ControlChangeEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11630};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::ControlChangeEvent, 0x20>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::ControlChangeEvent);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::ControlChangeEvent*, "Melanchall.DryWetMidi.Core", "ControlChangeEvent");
