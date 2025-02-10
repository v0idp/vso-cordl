#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/EventsCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventsCollection)
namespace Melanchall::DryWetMidi::Core {
class MidiEvent;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class EventsCollection;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::EventsCollection);
// Dependencies System.Collections.Generic.ICollection`1<T>, System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable, System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.EventsCollection
class CORDL_TYPE EventsCollection : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(put=set_IsInitialState)) bool  IsInitialState;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(put=set_LastTempoMapEventIndex)) int32_t  LastTempoMapEventIndex;

/// @brief Field <IsInitialState>k__BackingField, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsInitialState_k__BackingField, put=__cordl_internal_set__IsInitialState_k__BackingField)) bool  _IsInitialState_k__BackingField;

/// @brief Field <IsReadOnly>k__BackingField, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsReadOnly_k__BackingField, put=__cordl_internal_set__IsReadOnly_k__BackingField)) bool  _IsReadOnly_k__BackingField;

/// @brief Field <LastTempoMapEventIndex>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastTempoMapEventIndex_k__BackingField, put=__cordl_internal_set__LastTempoMapEventIndex_k__BackingField)) int32_t  _LastTempoMapEventIndex_k__BackingField;

/// @brief Field _events, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::System::Collections::Generic::List_1<::Melanchall::DryWetMidi::Core::MidiEvent*>*  _events;

/// @brief Field _tempoMapEventsCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__tempoMapEventsCount, put=__cordl_internal_set__tempoMapEventsCount)) int32_t  _tempoMapEventsCount;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::Melanchall::DryWetMidi::Core::MidiEvent*>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::Melanchall::DryWetMidi::Core::MidiEvent*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiEvent*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiEvent*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x259e708, size 0x68, virtual true, abstract: false, final true
inline void Add(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent) ;

/// @brief Method AddInternal, addr 0x25a1214, size 0xe8, virtual false, abstract: false, final false
inline void AddInternal(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent) ;

/// @brief Method Clear, addr 0x25a13f4, size 0x70, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0x25a14f4, size 0x58, virtual true, abstract: false, final true
inline bool Contains(::Melanchall::DryWetMidi::Core::MidiEvent*  item) ;

/// @brief Method CopyTo, addr 0x25a154c, size 0x68, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::Melanchall::DryWetMidi::Core::MidiEvent*,::Array<::Melanchall::DryWetMidi::Core::MidiEvent*>*>  array, int32_t  arrayIndex) ;

/// @brief Method GetEnumerator, addr 0x25a0900, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Melanchall::DryWetMidi::Core::MidiEvent*>* GetEnumerator() ;

/// @brief Method IsTempoMapEvent, addr 0x25a13c8, size 0x2c, virtual false, abstract: false, final false
static inline bool IsTempoMapEvent(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent) ;

static inline ::Melanchall::DryWetMidi::Core::EventsCollection* New_ctor() ;

/// @brief Method Remove, addr 0x25a12fc, size 0xcc, virtual true, abstract: false, final true
inline bool Remove(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x25a1464, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr bool const& __cordl_internal_get__IsInitialState_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsInitialState_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__LastTempoMapEventIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__LastTempoMapEventIndex_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Melanchall::DryWetMidi::Core::MidiEvent*>* const& __cordl_internal_get__events() const;

constexpr ::System::Collections::Generic::List_1<::Melanchall::DryWetMidi::Core::MidiEvent*>*& __cordl_internal_get__events() ;

constexpr int32_t const& __cordl_internal_get__tempoMapEventsCount() const;

constexpr int32_t& __cordl_internal_get__tempoMapEventsCount() ;

constexpr void __cordl_internal_set__IsInitialState_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LastTempoMapEventIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__events(::System::Collections::Generic::List_1<::Melanchall::DryWetMidi::Core::MidiEvent*>*  value) ;

constexpr void __cordl_internal_set__tempoMapEventsCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x259fa24, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0x25a0020, size 0x48, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsReadOnly, addr 0x25a11f8, size 0x8, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::Melanchall::DryWetMidi::Core::MidiEvent*>"
constexpr ::System::Collections::Generic::ICollection_1<::Melanchall::DryWetMidi::Core::MidiEvent*>* i___System__Collections__Generic__ICollection_1___Melanchall__DryWetMidi__Core__MidiEvent__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiEvent*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiEvent*>* i___System__Collections__Generic__IEnumerable_1___Melanchall__DryWetMidi__Core__MidiEvent__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method set_IsInitialState, addr 0x25a1200, size 0xc, virtual false, abstract: false, final false
inline void set_IsInitialState(bool  value) ;

/// @brief Method set_LastTempoMapEventIndex, addr 0x25a120c, size 0x8, virtual false, abstract: false, final false
inline void set_LastTempoMapEventIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventsCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventsCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventsCollection(EventsCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventsCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventsCollection(EventsCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11623};

/// @brief Field _events, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Melanchall::DryWetMidi::Core::MidiEvent*>*  ____events;

/// @brief Field _tempoMapEventsCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ____tempoMapEventsCount;

/// @brief Field <IsReadOnly>k__BackingField, offset: 0x1c, size: 0x1, def value: None
 bool  ____IsReadOnly_k__BackingField;

/// @brief Field <IsInitialState>k__BackingField, offset: 0x1d, size: 0x1, def value: None
 bool  ____IsInitialState_k__BackingField;

/// @brief Field <LastTempoMapEventIndex>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____LastTempoMapEventIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::EventsCollection, ____events) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::EventsCollection, ____tempoMapEventsCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::EventsCollection, ____IsReadOnly_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::EventsCollection, ____IsInitialState_k__BackingField) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::EventsCollection, ____LastTempoMapEventIndex_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::EventsCollection, 0x28>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::EventsCollection);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::EventsCollection*, "Melanchall.DryWetMidi.Core", "EventsCollection");
