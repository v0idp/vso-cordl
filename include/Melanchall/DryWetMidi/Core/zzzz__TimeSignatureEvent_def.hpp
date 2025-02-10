#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/TimeSignatureEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Core/zzzz__MetaEvent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSignatureEvent)
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
class TimeSignatureEvent;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::TimeSignatureEvent);
// Dependencies Melanchall.DryWetMidi.Core.MetaEvent
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.TimeSignatureEvent
class CORDL_TYPE TimeSignatureEvent : public ::Melanchall::DryWetMidi::Core::MetaEvent {
public:
// Declarations
 __declspec(property(get=get_ClocksPerClick, put=set_ClocksPerClick)) uint8_t  ClocksPerClick;

 __declspec(property(get=get_Denominator)) uint8_t  Denominator;

 __declspec(property(get=get_Numerator, put=set_Numerator)) uint8_t  Numerator;

 __declspec(property(get=get_ThirtySecondNotesPerBeat, put=set_ThirtySecondNotesPerBeat)) uint8_t  ThirtySecondNotesPerBeat;

/// @brief Field <ClocksPerClick>k__BackingField, offset 0x1b, size 0x1 
 __declspec(property(get=__cordl_internal_get__ClocksPerClick_k__BackingField, put=__cordl_internal_set__ClocksPerClick_k__BackingField)) uint8_t  _ClocksPerClick_k__BackingField;

/// @brief Field <Numerator>k__BackingField, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get__Numerator_k__BackingField, put=__cordl_internal_set__Numerator_k__BackingField)) uint8_t  _Numerator_k__BackingField;

/// @brief Field <ThirtySecondNotesPerBeat>k__BackingField, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__ThirtySecondNotesPerBeat_k__BackingField, put=__cordl_internal_set__ThirtySecondNotesPerBeat_k__BackingField)) uint8_t  _ThirtySecondNotesPerBeat_k__BackingField;

/// @brief Field _denominator, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get__denominator, put=__cordl_internal_set__denominator)) uint8_t  _denominator;

/// @brief Method CloneEvent, addr 0x25a2c6c, size 0x8c, virtual true, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::MidiEvent* CloneEvent() ;

/// @brief Method GetContentSize, addr 0x25a2c64, size 0x8, virtual true, abstract: false, final false
inline int32_t GetContentSize(::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

static inline ::Melanchall::DryWetMidi::Core::TimeSignatureEvent* New_ctor() ;

/// @brief Method ToString, addr 0x25a2cf8, size 0x1ac, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method WriteContent, addr 0x25a2bc0, size 0xa4, virtual true, abstract: false, final false
inline void WriteContent(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

constexpr uint8_t const& __cordl_internal_get__ClocksPerClick_k__BackingField() const;

constexpr uint8_t& __cordl_internal_get__ClocksPerClick_k__BackingField() ;

constexpr uint8_t const& __cordl_internal_get__Numerator_k__BackingField() const;

constexpr uint8_t& __cordl_internal_get__Numerator_k__BackingField() ;

constexpr uint8_t const& __cordl_internal_get__ThirtySecondNotesPerBeat_k__BackingField() const;

constexpr uint8_t& __cordl_internal_get__ThirtySecondNotesPerBeat_k__BackingField() ;

constexpr uint8_t const& __cordl_internal_get__denominator() const;

constexpr uint8_t& __cordl_internal_get__denominator() ;

constexpr void __cordl_internal_set__ClocksPerClick_k__BackingField(uint8_t  value) ;

constexpr void __cordl_internal_set__Numerator_k__BackingField(uint8_t  value) ;

constexpr void __cordl_internal_set__ThirtySecondNotesPerBeat_k__BackingField(uint8_t  value) ;

constexpr void __cordl_internal_set__denominator(uint8_t  value) ;

/// @brief Method .ctor, addr 0x25a2b5c, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ClocksPerClick, addr 0x25a2ba0, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_ClocksPerClick() ;

/// @brief Method get_Denominator, addr 0x25a2b98, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_Denominator() ;

/// @brief Method get_Numerator, addr 0x25a2b88, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_Numerator() ;

/// @brief Method get_ThirtySecondNotesPerBeat, addr 0x25a2bb0, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_ThirtySecondNotesPerBeat() ;

/// @brief Method set_ClocksPerClick, addr 0x25a2ba8, size 0x8, virtual false, abstract: false, final false
inline void set_ClocksPerClick(uint8_t  value) ;

/// @brief Method set_Numerator, addr 0x25a2b90, size 0x8, virtual false, abstract: false, final false
inline void set_Numerator(uint8_t  value) ;

/// @brief Method set_ThirtySecondNotesPerBeat, addr 0x25a2bb8, size 0x8, virtual false, abstract: false, final false
inline void set_ThirtySecondNotesPerBeat(uint8_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeSignatureEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeSignatureEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeSignatureEvent(TimeSignatureEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeSignatureEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeSignatureEvent(TimeSignatureEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11641};

/// @brief Field _denominator, offset: 0x19, size: 0x1, def value: None
 uint8_t  ____denominator;

/// @brief Field <Numerator>k__BackingField, offset: 0x1a, size: 0x1, def value: None
 uint8_t  ____Numerator_k__BackingField;

/// @brief Field <ClocksPerClick>k__BackingField, offset: 0x1b, size: 0x1, def value: None
 uint8_t  ____ClocksPerClick_k__BackingField;

/// @brief Field <ThirtySecondNotesPerBeat>k__BackingField, offset: 0x1c, size: 0x1, def value: None
 uint8_t  ____ThirtySecondNotesPerBeat_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::TimeSignatureEvent, ____denominator) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::TimeSignatureEvent, ____Numerator_k__BackingField) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::TimeSignatureEvent, ____ClocksPerClick_k__BackingField) == 0x1b, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::TimeSignatureEvent, ____ThirtySecondNotesPerBeat_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::TimeSignatureEvent, 0x20>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::TimeSignatureEvent);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::TimeSignatureEvent*, "Melanchall.DryWetMidi.Core", "TimeSignatureEvent");
