#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/ChannelPrefixEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Core/zzzz__MetaEvent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChannelPrefixEvent)
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
class ChannelPrefixEvent;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::ChannelPrefixEvent);
// Dependencies Melanchall.DryWetMidi.Core.MetaEvent
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.ChannelPrefixEvent
class CORDL_TYPE ChannelPrefixEvent : public ::Melanchall::DryWetMidi::Core::MetaEvent {
public:
// Declarations
 __declspec(property(get=get_Channel, put=set_Channel)) uint8_t  Channel;

/// @brief Field <Channel>k__BackingField, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get__Channel_k__BackingField, put=__cordl_internal_set__Channel_k__BackingField)) uint8_t  _Channel_k__BackingField;

/// @brief Method CloneEvent, addr 0x25a24f4, size 0x68, virtual true, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::MidiEvent* CloneEvent() ;

/// @brief Method GetContentSize, addr 0x25a24ec, size 0x8, virtual true, abstract: false, final false
inline int32_t GetContentSize(::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

static inline ::Melanchall::DryWetMidi::Core::ChannelPrefixEvent* New_ctor() ;

static inline ::Melanchall::DryWetMidi::Core::ChannelPrefixEvent* New_ctor(uint8_t  channel) ;

/// @brief Method ToString, addr 0x25a255c, size 0x84, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method WriteContent, addr 0x25a24cc, size 0x20, virtual true, abstract: false, final false
inline void WriteContent(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

constexpr uint8_t const& __cordl_internal_get__Channel_k__BackingField() const;

constexpr uint8_t& __cordl_internal_get__Channel_k__BackingField() ;

constexpr void __cordl_internal_set__Channel_k__BackingField(uint8_t  value) ;

/// @brief Method .ctor, addr 0x25a246c, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x25a248c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(uint8_t  channel) ;

/// @brief Method get_Channel, addr 0x25a24bc, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_Channel() ;

/// @brief Method set_Channel, addr 0x25a24c4, size 0x8, virtual false, abstract: false, final false
inline void set_Channel(uint8_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChannelPrefixEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChannelPrefixEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChannelPrefixEvent(ChannelPrefixEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChannelPrefixEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChannelPrefixEvent(ChannelPrefixEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11636};

/// @brief Field <Channel>k__BackingField, offset: 0x19, size: 0x1, def value: None
 uint8_t  ____Channel_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::ChannelPrefixEvent, ____Channel_k__BackingField) == 0x19, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::ChannelPrefixEvent, 0x20>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::ChannelPrefixEvent);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::ChannelPrefixEvent*, "Melanchall.DryWetMidi.Core", "ChannelPrefixEvent");
