#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/MidiEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Core/zzzz__MidiEventType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MidiEvent)
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
class MidiEvent;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::MidiEvent);
// Dependencies Melanchall.DryWetMidi.Core.MidiEventType, System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.MidiEvent
class CORDL_TYPE MidiEvent : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_DeltaTime, put=set_DeltaTime)) int64_t  DeltaTime;

 __declspec(property(get=get_EventType)) ::Melanchall::DryWetMidi::Core::MidiEventType  EventType;

/// @brief Field <EventType>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__EventType_k__BackingField, put=__cordl_internal_set__EventType_k__BackingField)) ::Melanchall::DryWetMidi::Core::MidiEventType  _EventType_k__BackingField;

/// @brief Field _deltaTime, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__deltaTime, put=__cordl_internal_set__deltaTime)) int64_t  _deltaTime;

/// @brief Method Clone, addr 0x259e5dc, size 0x2c, virtual false, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::MidiEvent* Clone() ;

/// @brief Method CloneEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::MidiEvent* CloneEvent() ;

/// @brief Method GetSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetSize(::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

static inline ::Melanchall::DryWetMidi::Core::MidiEvent* New_ctor(::Melanchall::DryWetMidi::Core::MidiEventType  eventType) ;

/// @brief Method Write, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Write(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

constexpr ::Melanchall::DryWetMidi::Core::MidiEventType const& __cordl_internal_get__EventType_k__BackingField() const;

constexpr ::Melanchall::DryWetMidi::Core::MidiEventType& __cordl_internal_get__EventType_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__deltaTime() const;

constexpr int64_t& __cordl_internal_get__deltaTime() ;

constexpr void __cordl_internal_set__EventType_k__BackingField(::Melanchall::DryWetMidi::Core::MidiEventType  value) ;

constexpr void __cordl_internal_set__deltaTime(int64_t  value) ;

/// @brief Method .ctor, addr 0x25a15dc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Melanchall::DryWetMidi::Core::MidiEventType  eventType) ;

/// @brief Method get_DeltaTime, addr 0x25a165c, size 0x8, virtual false, abstract: false, final false
inline int64_t get_DeltaTime() ;

/// @brief Method get_EventType, addr 0x25a1654, size 0x8, virtual false, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::MidiEventType get_EventType() ;

/// @brief Method set_DeltaTime, addr 0x259e68c, size 0x7c, virtual false, abstract: false, final false
inline void set_DeltaTime(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MidiEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MidiEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MidiEvent(MidiEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MidiEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MidiEvent(MidiEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11626};

/// @brief Field _deltaTime, offset: 0x10, size: 0x8, def value: None
 int64_t  ____deltaTime;

/// @brief Field <EventType>k__BackingField, offset: 0x18, size: 0x1, def value: None
 ::Melanchall::DryWetMidi::Core::MidiEventType  ____EventType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::MidiEvent, ____deltaTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::MidiEvent, ____EventType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::MidiEvent, 0x20>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::MidiEvent);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::MidiEvent*, "Melanchall.DryWetMidi.Core", "MidiEvent");
