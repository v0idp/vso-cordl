#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/ChannelEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Common/zzzz__FourBitNumber_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiEvent_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChannelEvent)
namespace Melanchall::DryWetMidi::Common {
struct FourBitNumber;
}
namespace Melanchall::DryWetMidi::Core {
struct MidiEventType;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class ChannelEvent;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::ChannelEvent);
// Dependencies Melanchall.DryWetMidi.Common.FourBitNumber, Melanchall.DryWetMidi.Core.MidiEvent
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.ChannelEvent
class CORDL_TYPE ChannelEvent : public ::Melanchall::DryWetMidi::Core::MidiEvent {
public:
// Declarations
 __declspec(property(get=get_Channel, put=set_Channel)) ::Melanchall::DryWetMidi::Common::FourBitNumber  Channel;

/// @brief Field <Channel>k__BackingField, offset 0x1b, size 0x1 
 __declspec(property(get=__cordl_internal_get__Channel_k__BackingField, put=__cordl_internal_set__Channel_k__BackingField)) ::Melanchall::DryWetMidi::Common::FourBitNumber  _Channel_k__BackingField;

/// @brief Field _dataByte1, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get__dataByte1, put=__cordl_internal_set__dataByte1)) uint8_t  _dataByte1;

/// @brief Field _dataByte2, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get__dataByte2, put=__cordl_internal_set__dataByte2)) uint8_t  _dataByte2;

static inline ::Melanchall::DryWetMidi::Core::ChannelEvent* New_ctor(::Melanchall::DryWetMidi::Core::MidiEventType  eventType) ;

constexpr ::Melanchall::DryWetMidi::Common::FourBitNumber const& __cordl_internal_get__Channel_k__BackingField() const;

constexpr ::Melanchall::DryWetMidi::Common::FourBitNumber& __cordl_internal_get__Channel_k__BackingField() ;

constexpr uint8_t const& __cordl_internal_get__dataByte1() const;

constexpr uint8_t& __cordl_internal_get__dataByte1() ;

constexpr uint8_t const& __cordl_internal_get__dataByte2() const;

constexpr uint8_t& __cordl_internal_get__dataByte2() ;

constexpr void __cordl_internal_set__Channel_k__BackingField(::Melanchall::DryWetMidi::Common::FourBitNumber  value) ;

constexpr void __cordl_internal_set__dataByte1(uint8_t  value) ;

constexpr void __cordl_internal_set__dataByte2(uint8_t  value) ;

/// @brief Method .ctor, addr 0x25a15b4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Melanchall::DryWetMidi::Core::MidiEventType  eventType) ;

/// @brief Method get_Channel, addr 0x25a1604, size 0x8, virtual false, abstract: false, final false
inline ::Melanchall::DryWetMidi::Common::FourBitNumber get_Channel() ;

/// @brief Method set_Channel, addr 0x25a160c, size 0x8, virtual false, abstract: false, final false
inline void set_Channel(::Melanchall::DryWetMidi::Common::FourBitNumber  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChannelEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChannelEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChannelEvent(ChannelEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChannelEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChannelEvent(ChannelEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11624};

/// @brief Field _dataByte1, offset: 0x19, size: 0x1, def value: None
 uint8_t  ____dataByte1;

/// @brief Field _dataByte2, offset: 0x1a, size: 0x1, def value: None
 uint8_t  ____dataByte2;

/// @brief Field <Channel>k__BackingField, offset: 0x1b, size: 0x1, def value: None
 ::Melanchall::DryWetMidi::Common::FourBitNumber  ____Channel_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::ChannelEvent, ____dataByte1) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::ChannelEvent, ____dataByte2) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::ChannelEvent, ____Channel_k__BackingField) == 0x1b, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::ChannelEvent, 0x20>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::ChannelEvent);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::ChannelEvent*, "Melanchall.DryWetMidi.Core", "ChannelEvent");
