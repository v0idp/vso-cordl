#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/SequenceNumberEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Core/zzzz__MetaEvent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SequenceNumberEvent)
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
class SequenceNumberEvent;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::SequenceNumberEvent);
// Dependencies Melanchall.DryWetMidi.Core.MetaEvent
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.SequenceNumberEvent
class CORDL_TYPE SequenceNumberEvent : public ::Melanchall::DryWetMidi::Core::MetaEvent {
public:
// Declarations
 __declspec(property(get=get_Number, put=set_Number)) uint16_t  Number;

/// @brief Field <Number>k__BackingField, offset 0x1a, size 0x2 
 __declspec(property(get=__cordl_internal_get__Number_k__BackingField, put=__cordl_internal_set__Number_k__BackingField)) uint16_t  _Number_k__BackingField;

/// @brief Method CloneEvent, addr 0x25a28b0, size 0x68, virtual true, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::MidiEvent* CloneEvent() ;

/// @brief Method GetContentSize, addr 0x25a28a8, size 0x8, virtual true, abstract: false, final false
inline int32_t GetContentSize(::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

static inline ::Melanchall::DryWetMidi::Core::SequenceNumberEvent* New_ctor() ;

static inline ::Melanchall::DryWetMidi::Core::SequenceNumberEvent* New_ctor(uint16_t  number) ;

/// @brief Method ToString, addr 0x25a2918, size 0x84, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method WriteContent, addr 0x25a2888, size 0x20, virtual true, abstract: false, final false
inline void WriteContent(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

constexpr uint16_t const& __cordl_internal_get__Number_k__BackingField() const;

constexpr uint16_t& __cordl_internal_get__Number_k__BackingField() ;

constexpr void __cordl_internal_set__Number_k__BackingField(uint16_t  value) ;

/// @brief Method .ctor, addr 0x25a2828, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x25a2848, size 0x30, virtual false, abstract: false, final false
inline void _ctor(uint16_t  number) ;

/// @brief Method get_Number, addr 0x25a2878, size 0x8, virtual false, abstract: false, final false
inline uint16_t get_Number() ;

/// @brief Method set_Number, addr 0x25a2880, size 0x8, virtual false, abstract: false, final false
inline void set_Number(uint16_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SequenceNumberEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SequenceNumberEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SequenceNumberEvent(SequenceNumberEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SequenceNumberEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SequenceNumberEvent(SequenceNumberEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11639};

/// @brief Field <Number>k__BackingField, offset: 0x1a, size: 0x2, def value: None
 uint16_t  ____Number_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::SequenceNumberEvent, ____Number_k__BackingField) == 0x1a, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::SequenceNumberEvent, 0x20>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::SequenceNumberEvent);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::SequenceNumberEvent*, "Melanchall.DryWetMidi.Core", "SequenceNumberEvent");
