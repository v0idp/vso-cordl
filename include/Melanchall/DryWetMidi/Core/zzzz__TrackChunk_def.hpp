#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/TrackChunk.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Core/zzzz__MidiChunk_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TrackChunk)
namespace Melanchall::DryWetMidi::Core {
class EventsCollection;
}
namespace Melanchall::DryWetMidi::Core {
class IEventWriter;
}
namespace Melanchall::DryWetMidi::Core {
class MidiEvent;
}
namespace Melanchall::DryWetMidi::Core {
class MidiWriter;
}
namespace Melanchall::DryWetMidi::Core {
class TrackChunk___c__DisplayClass10_0;
}
namespace Melanchall::DryWetMidi::Core {
class TrackChunk___c__DisplayClass9_0;
}
namespace Melanchall::DryWetMidi::Core {
class WritingSettings;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class TrackChunk;
}
namespace Melanchall::DryWetMidi::Core {
class TrackChunk___c__DisplayClass10_0;
}
namespace Melanchall::DryWetMidi::Core {
class TrackChunk___c__DisplayClass9_0;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::TrackChunk);
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0);
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0);
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.TrackChunk/<>c__DisplayClass10_0
class CORDL_TYPE TrackChunk___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field result, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) uint32_t  result;

/// @brief Field settings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::Melanchall::DryWetMidi::Core::WritingSettings*  settings;

static inline ::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0* New_ctor() ;

/// @brief Method <GetContentSize>b__0, addr 0x25a09b0, size 0x178, virtual false, abstract: false, final false
inline void _GetContentSize_b__0(::Melanchall::DryWetMidi::Core::IEventWriter*  eventWriter, ::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, bool  writeStatusByte) ;

constexpr uint32_t const& __cordl_internal_get_result() const;

constexpr uint32_t& __cordl_internal_get_result() ;

constexpr ::Melanchall::DryWetMidi::Core::WritingSettings* const& __cordl_internal_get_settings() const;

constexpr ::Melanchall::DryWetMidi::Core::WritingSettings*& __cordl_internal_get_settings() ;

constexpr void __cordl_internal_set_result(uint32_t  value) ;

constexpr void __cordl_internal_set_settings(::Melanchall::DryWetMidi::Core::WritingSettings*  value) ;

/// @brief Method .ctor, addr 0x259ff8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackChunk___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackChunk___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackChunk___c__DisplayClass10_0(TrackChunk___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackChunk___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackChunk___c__DisplayClass10_0(TrackChunk___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11618};

/// @brief Field result, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___result;

/// @brief Field settings, offset: 0x18, size: 0x8, def value: None
 ::Melanchall::DryWetMidi::Core::WritingSettings*  ___settings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0, ___result) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0, ___settings) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0, 0x20>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.TrackChunk/<>c__DisplayClass9_0
class CORDL_TYPE TrackChunk___c__DisplayClass9_0 : public ::System::Object {
public:
// Declarations
/// @brief Field settings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::Melanchall::DryWetMidi::Core::WritingSettings*  settings;

/// @brief Field writer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_writer, put=__cordl_internal_set_writer)) ::Melanchall::DryWetMidi::Core::MidiWriter*  writer;

static inline ::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0* New_ctor() ;

/// @brief Method <WriteContent>b__0, addr 0x25a0bbc, size 0xd8, virtual false, abstract: false, final false
inline void _WriteContent_b__0(::Melanchall::DryWetMidi::Core::IEventWriter*  eventWriter, ::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, bool  writeStatusByte) ;

constexpr ::Melanchall::DryWetMidi::Core::WritingSettings* const& __cordl_internal_get_settings() const;

constexpr ::Melanchall::DryWetMidi::Core::WritingSettings*& __cordl_internal_get_settings() ;

constexpr ::Melanchall::DryWetMidi::Core::MidiWriter* const& __cordl_internal_get_writer() const;

constexpr ::Melanchall::DryWetMidi::Core::MidiWriter*& __cordl_internal_get_writer() ;

constexpr void __cordl_internal_set_settings(::Melanchall::DryWetMidi::Core::WritingSettings*  value) ;

constexpr void __cordl_internal_set_writer(::Melanchall::DryWetMidi::Core::MidiWriter*  value) ;

/// @brief Method .ctor, addr 0x259fb78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackChunk___c__DisplayClass9_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackChunk___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackChunk___c__DisplayClass9_0(TrackChunk___c__DisplayClass9_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackChunk___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackChunk___c__DisplayClass9_0(TrackChunk___c__DisplayClass9_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11619};

/// @brief Field writer, offset: 0x10, size: 0x8, def value: None
 ::Melanchall::DryWetMidi::Core::MidiWriter*  ___writer;

/// @brief Field settings, offset: 0x18, size: 0x8, def value: None
 ::Melanchall::DryWetMidi::Core::WritingSettings*  ___settings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0, ___writer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0, ___settings) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0, 0x20>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
// Dependencies Melanchall.DryWetMidi.Core.MidiChunk
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.TrackChunk
class CORDL_TYPE TrackChunk : public ::Melanchall::DryWetMidi::Core::MidiChunk {
public:
// Declarations
using __c__DisplayClass10_0 = ::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0;

using __c__DisplayClass9_0 = ::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0;

 __declspec(property(get=get_Events)) ::Melanchall::DryWetMidi::Core::EventsCollection*  Events;

/// @brief Field <Events>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Events_k__BackingField, put=__cordl_internal_set__Events_k__BackingField)) ::Melanchall::DryWetMidi::Core::EventsCollection*  _Events_k__BackingField;

/// @brief Method GetContentSize, addr 0x259fec4, size 0xc8, virtual true, abstract: false, final false
inline uint32_t GetContentSize(::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

static inline ::Melanchall::DryWetMidi::Core::TrackChunk* New_ctor() ;

/// @brief Method ProcessEvent, addr 0x25a0068, size 0x41c, virtual false, abstract: false, final false
static inline void ProcessEvent(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings, ::System::Action_3<::Melanchall::DryWetMidi::Core::IEventWriter*,::Melanchall::DryWetMidi::Core::MidiEvent*,bool>*  eventHandler, ::ByRef<bool>  lastEventIsEndOfTrack, ::ByRef<int64_t>  additionalDeltaTime, ::ByRef<::System::Nullable_1<uint8_t>>  runningStatus, ::ByRef<bool>  skipSetTempo, ::ByRef<bool>  skipKeySignature, ::ByRef<bool>  skipTimeSignature) ;

/// @brief Method ProcessEvents, addr 0x259fb80, size 0x344, virtual false, abstract: false, final false
inline void ProcessEvents(::Melanchall::DryWetMidi::Core::WritingSettings*  settings, ::System::Action_3<::Melanchall::DryWetMidi::Core::IEventWriter*,::Melanchall::DryWetMidi::Core::MidiEvent*,bool>*  eventHandler) ;

/// @brief Method ToString, addr 0x259ff94, size 0x8c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TrySkipDefaultKeySignature, addr 0x25a0604, size 0x90, virtual false, abstract: false, final false
static inline bool TrySkipDefaultKeySignature(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, ::ByRef<bool>  skip) ;

/// @brief Method TrySkipDefaultSetTempo, addr 0x25a0574, size 0x90, virtual false, abstract: false, final false
static inline bool TrySkipDefaultSetTempo(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, ::ByRef<bool>  skip) ;

/// @brief Method TrySkipDefaultTimeSignature, addr 0x25a0694, size 0xb0, virtual false, abstract: false, final false
static inline bool TrySkipDefaultTimeSignature(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, ::ByRef<bool>  skip) ;

/// @brief Method WriteContent, addr 0x259fab8, size 0xc0, virtual true, abstract: false, final false
inline void WriteContent(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

constexpr ::Melanchall::DryWetMidi::Core::EventsCollection* const& __cordl_internal_get__Events_k__BackingField() const;

constexpr ::Melanchall::DryWetMidi::Core::EventsCollection*& __cordl_internal_get__Events_k__BackingField() ;

constexpr void __cordl_internal_set__Events_k__BackingField(::Melanchall::DryWetMidi::Core::EventsCollection*  value) ;

/// @brief Method .ctor, addr 0x259e7cc, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Events, addr 0x259fab0, size 0x8, virtual false, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::EventsCollection* get_Events() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackChunk() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackChunk", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackChunk(TrackChunk && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackChunk", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackChunk(TrackChunk const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11620};

/// @brief Field <Events>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Melanchall::DryWetMidi::Core::EventsCollection*  ____Events_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::TrackChunk, ____Events_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::TrackChunk, 0x20>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::TrackChunk);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::TrackChunk*, "Melanchall.DryWetMidi.Core", "TrackChunk");
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0*, "Melanchall.DryWetMidi.Core", "TrackChunk/<>c__DisplayClass10_0");
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0*, "Melanchall.DryWetMidi.Core", "TrackChunk/<>c__DisplayClass9_0");
