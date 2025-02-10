#pragma once
// IWYU pragma private; include "AudioHelm/Sequencer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "AudioHelm/zzzz__NoteHandler_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Sequencer)
namespace AudioHelm {
class MidiFile_MidiData;
}
namespace AudioHelm {
class MidiFile;
}
namespace AudioHelm {
class NoteRow;
}
namespace AudioHelm {
class Note;
}
namespace AudioHelm {
class Sequencer_BeatAction;
}
namespace AudioHelm {
class Sequencer_BeatEvent;
}
namespace AudioHelm {
struct Sequencer_Division;
}
namespace AudioHelm {
class Sequencer_NoteAction;
}
namespace AudioHelm {
class Sequencer_NoteComparer;
}
namespace AudioHelm {
class Sequencer_NoteEvent;
}
namespace AudioHelm {
class Sequencer_NotePositionComparer;
}
namespace AudioHelm {
struct Sequencer_NotePosition;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace System::IO {
class Stream;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace AudioHelm {
struct Sequencer_Division;
}
namespace AudioHelm {
class Sequencer;
}
namespace AudioHelm {
class Sequencer_BeatAction;
}
namespace AudioHelm {
class Sequencer_BeatEvent;
}
namespace AudioHelm {
class Sequencer_NoteAction;
}
namespace AudioHelm {
class Sequencer_NoteComparer;
}
namespace AudioHelm {
class Sequencer_NoteEvent;
}
namespace AudioHelm {
class Sequencer_NotePositionComparer;
}
namespace AudioHelm {
struct Sequencer_NotePosition;
}
// Write type traits
MARK_VAL_T(::AudioHelm::Sequencer_Division);
MARK_REF_PTR_T(::AudioHelm::Sequencer);
MARK_REF_PTR_T(::AudioHelm::Sequencer_BeatAction);
MARK_REF_PTR_T(::AudioHelm::Sequencer_BeatEvent);
MARK_REF_PTR_T(::AudioHelm::Sequencer_NoteAction);
MARK_REF_PTR_T(::AudioHelm::Sequencer_NoteComparer);
MARK_REF_PTR_T(::AudioHelm::Sequencer_NoteEvent);
MARK_REF_PTR_T(::AudioHelm::Sequencer_NotePositionComparer);
MARK_VAL_T(::AudioHelm::Sequencer_NotePosition);
// Dependencies System.MulticastDelegate
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.Sequencer/NoteAction
class CORDL_TYPE Sequencer_NoteAction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1828e54, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::AudioHelm::Note*  note, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1828e74, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1828e40, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::AudioHelm::Note*  note) ;

static inline ::AudioHelm::Sequencer_NoteAction* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1828d40, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Sequencer_NoteAction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Sequencer_NoteAction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Sequencer_NoteAction(Sequencer_NoteAction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sequencer_NoteAction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sequencer_NoteAction(Sequencer_NoteAction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1897};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::AudioHelm::Sequencer_NoteAction, 0x80>, "Size mismatch!");

} // namespace end def AudioHelm
// Dependencies System.MulticastDelegate
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.Sequencer/BeatAction
class CORDL_TYPE Sequencer_BeatAction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1828f20, size 0x84, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  index, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1828fa4, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1828f0c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  index) ;

static inline ::AudioHelm::Sequencer_BeatAction* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1828e80, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Sequencer_BeatAction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Sequencer_BeatAction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Sequencer_BeatAction(Sequencer_BeatAction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sequencer_BeatAction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sequencer_BeatAction(Sequencer_BeatAction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1898};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::AudioHelm::Sequencer_BeatAction, 0x80>, "Size mismatch!");

} // namespace end def AudioHelm
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.Sequencer/NoteEvent
class CORDL_TYPE Sequencer_NoteEvent : public ::UnityEngine::Events::UnityEvent_1<::AudioHelm::Note*> {
public:
// Declarations
static inline ::AudioHelm::Sequencer_NoteEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x1828fb0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Sequencer_NoteEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Sequencer_NoteEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Sequencer_NoteEvent(Sequencer_NoteEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sequencer_NoteEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sequencer_NoteEvent(Sequencer_NoteEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1899};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::AudioHelm::Sequencer_NoteEvent, 0x30>, "Size mismatch!");

} // namespace end def AudioHelm
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.Sequencer/BeatEvent
class CORDL_TYPE Sequencer_BeatEvent : public ::UnityEngine::Events::UnityEvent_1<int32_t> {
public:
// Declarations
static inline ::AudioHelm::Sequencer_BeatEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x1828ff8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Sequencer_BeatEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Sequencer_BeatEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Sequencer_BeatEvent(Sequencer_BeatEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sequencer_BeatEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sequencer_BeatEvent(Sequencer_BeatEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1900};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::AudioHelm::Sequencer_BeatEvent, 0x30>, "Size mismatch!");

} // namespace end def AudioHelm
// Dependencies System.Collections.Generic.IComparer`1<T>, System.Object
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.Sequencer/NoteComparer
class CORDL_TYPE Sequencer_NoteComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::AudioHelm::Note*>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::AudioHelm::Note*>*() noexcept;

/// @brief Method Compare, addr 0x1829040, size 0x40, virtual true, abstract: false, final true
inline int32_t Compare(::AudioHelm::Note*  left, ::AudioHelm::Note*  right) ;

static inline ::AudioHelm::Sequencer_NoteComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x1828d30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::AudioHelm::Note*>"
constexpr ::System::Collections::Generic::IComparer_1<::AudioHelm::Note*>* i___System__Collections__Generic__IComparer_1___AudioHelm__Note__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Sequencer_NoteComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Sequencer_NoteComparer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Sequencer_NoteComparer(Sequencer_NoteComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sequencer_NoteComparer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sequencer_NoteComparer(Sequencer_NoteComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1901};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::AudioHelm::Sequencer_NoteComparer, 0x10>, "Size mismatch!");

} // namespace end def AudioHelm
// Dependencies 
namespace AudioHelm {
// Is value type: true
// CS Name: AudioHelm.Sequencer/NotePosition
struct CORDL_TYPE Sequencer_NotePosition {
public:
// Declarations
/// @brief Method .ctor, addr 0x182774c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  position, int32_t  note) ;

// Ctor Parameters []
// @brief default ctor
constexpr Sequencer_NotePosition() ;

// Ctor Parameters [CppParam { name: "position_", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "note_", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Sequencer_NotePosition(float_t  position_, int32_t  note_) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1903};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field position_, offset: 0x0, size: 0x4, def value: None
 float_t  position_;

/// @brief Field note_, offset: 0x4, size: 0x4, def value: None
 int32_t  note_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::Sequencer_NotePosition, position_) == 0x0, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sequencer_NotePosition, note_) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::Sequencer_NotePosition, 0x8>, "Size mismatch!");

} // namespace end def AudioHelm
// Dependencies AudioHelm.Sequencer::NotePosition, System.Collections.Generic.IComparer`1<T>, System.Object
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.Sequencer/NotePositionComparer
class CORDL_TYPE Sequencer_NotePositionComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::AudioHelm::Sequencer_NotePosition>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::AudioHelm::Sequencer_NotePosition>*() noexcept;

/// @brief Method Compare, addr 0x1829080, size 0x3c, virtual true, abstract: false, final true
inline int32_t Compare(::AudioHelm::Sequencer_NotePosition  left, ::AudioHelm::Sequencer_NotePosition  right) ;

static inline ::AudioHelm::Sequencer_NotePositionComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x1828d38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::AudioHelm::Sequencer_NotePosition>"
constexpr ::System::Collections::Generic::IComparer_1<::AudioHelm::Sequencer_NotePosition>* i___System__Collections__Generic__IComparer_1___AudioHelm__Sequencer_NotePosition_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Sequencer_NotePositionComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Sequencer_NotePositionComparer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Sequencer_NotePositionComparer(Sequencer_NotePositionComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sequencer_NotePositionComparer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sequencer_NotePositionComparer(Sequencer_NotePositionComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1902};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::AudioHelm::Sequencer_NotePositionComparer, 0x10>, "Size mismatch!");

} // namespace end def AudioHelm
// Dependencies 
namespace AudioHelm {
// Is value type: true
// CS Name: AudioHelm.Sequencer/Division
struct CORDL_TYPE Sequencer_Division {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Sequencer_Division_Unwrapped
enum struct __Sequencer_Division_Unwrapped : int32_t {
__E_kEighth = static_cast<int32_t>(0x0),
__E_kSixteenth = static_cast<int32_t>(0x1),
__E_kTriplet = static_cast<int32_t>(0x2),
__E_kThirtySecond = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Sequencer_Division_Unwrapped () const noexcept {
return static_cast<__Sequencer_Division_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Sequencer_Division() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Sequencer_Division(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1904};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field kEighth value: I32(0)
static ::AudioHelm::Sequencer_Division const kEighth;

/// @brief Field kSixteenth value: I32(1)
static ::AudioHelm::Sequencer_Division const kSixteenth;

/// @brief Field kThirtySecond value: I32(3)
static ::AudioHelm::Sequencer_Division const kThirtySecond;

/// @brief Field kTriplet value: I32(2)
static ::AudioHelm::Sequencer_Division const kTriplet;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::Sequencer_Division, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::Sequencer_Division, 0x4>, "Size mismatch!");

} // namespace end def AudioHelm
// Dependencies AudioHelm.NoteHandler, AudioHelm.Sequencer::Division, UnityEngine.ISerializationCallbackReceiver, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.Sequencer
class CORDL_TYPE Sequencer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BeatAction = ::AudioHelm::Sequencer_BeatAction;

using BeatEvent = ::AudioHelm::Sequencer_BeatEvent;

using Division = ::AudioHelm::Sequencer_Division;

using NoteAction = ::AudioHelm::Sequencer_NoteAction;

using NoteComparer = ::AudioHelm::Sequencer_NoteComparer;

using NoteEvent = ::AudioHelm::Sequencer_NoteEvent;

using NotePosition = ::AudioHelm::Sequencer_NotePosition;

using NotePositionComparer = ::AudioHelm::Sequencer_NotePositionComparer;

/// @brief Field OnBeat, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnBeat, put=__cordl_internal_set_OnBeat)) ::AudioHelm::Sequencer_BeatAction*  OnBeat;

/// @brief Field OnNoteOff, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnNoteOff, put=__cordl_internal_set_OnNoteOff)) ::AudioHelm::Sequencer_NoteAction*  OnNoteOff;

/// @brief Field OnNoteOn, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnNoteOn, put=__cordl_internal_set_OnNoteOn)) ::AudioHelm::Sequencer_NoteAction*  OnNoteOn;

/// @brief Field activeNotes, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeNotes, put=__cordl_internal_set_activeNotes)) ::System::Collections::Generic::List_1<::AudioHelm::Note*>*  activeNotes;

/// @brief Field allNotes, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_allNotes, put=__cordl_internal_set_allNotes)) ::ArrayW<::AudioHelm::NoteRow*,::Array<::AudioHelm::NoteRow*>*>  allNotes;

/// @brief Field autoScroll, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoScroll, put=__cordl_internal_set_autoScroll)) bool  autoScroll;

/// @brief Field beatEvent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_beatEvent, put=__cordl_internal_set_beatEvent)) ::AudioHelm::Sequencer_BeatEvent*  beatEvent;

/// @brief Field beatTime, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_beatTime, put=__cordl_internal_set_beatTime)) double_t  beatTime;

/// @brief Field currentIndex, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field division, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_division, put=__cordl_internal_set_division)) ::AudioHelm::Sequencer_Division  division;

/// @brief Field lastSequencerPosition, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastSequencerPosition, put=__cordl_internal_set_lastSequencerPosition)) float_t  lastSequencerPosition;

/// @brief Field length, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_length, put=__cordl_internal_set_length)) int32_t  length;

/// @brief Field loop, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_loop, put=__cordl_internal_set_loop)) bool  loop;

/// @brief Field noteComparer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_noteComparer, put=setStaticF_noteComparer)) ::AudioHelm::Sequencer_NoteComparer*  noteComparer;

/// @brief Field noteOffEvent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_noteOffEvent, put=__cordl_internal_set_noteOffEvent)) ::AudioHelm::Sequencer_NoteEvent*  noteOffEvent;

/// @brief Field noteOnEvent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_noteOnEvent, put=__cordl_internal_set_noteOnEvent)) ::AudioHelm::Sequencer_NoteEvent*  noteOnEvent;

/// @brief Field notePositionComparer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_notePositionComparer, put=setStaticF_notePositionComparer)) ::AudioHelm::Sequencer_NotePositionComparer*  notePositionComparer;

/// @brief Field numCycles, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_numCycles, put=__cordl_internal_set_numCycles)) int32_t  numCycles;

/// @brief Field paused, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_paused, put=__cordl_internal_set_paused)) bool  paused;

/// @brief Field scrollPosition, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_scrollPosition, put=__cordl_internal_set_scrollPosition)) ::UnityEngine::Vector2  scrollPosition;

/// @brief Field sortedNoteOffs, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_sortedNoteOffs, put=__cordl_internal_set_sortedNoteOffs)) ::System::Collections::Generic::SortedList_2<::AudioHelm::Sequencer_NotePosition,::AudioHelm::Note*>*  sortedNoteOffs;

/// @brief Field sortedNoteOns, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_sortedNoteOns, put=__cordl_internal_set_sortedNoteOns)) ::System::Collections::Generic::SortedList_2<::AudioHelm::Sequencer_NotePosition,::AudioHelm::Note*>*  sortedNoteOns;

/// @brief Field waitTillNextCycle, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get_waitTillNextCycle, put=__cordl_internal_set_waitTillNextCycle)) bool  waitTillNextCycle;

/// @brief Field zoom, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_zoom, put=__cordl_internal_set_zoom)) float_t  zoom;

/// @brief Convert operator to "::AudioHelm::NoteHandler"
constexpr operator  ::AudioHelm::NoteHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method AddNote, addr 0x181c990, size 0x284, virtual false, abstract: false, final false
inline ::AudioHelm::Note* AddNote(int32_t  note, float_t  start, float_t  end, float_t  velocity) ;

/// @brief Method AddSortedNoteEvents, addr 0x18277f4, size 0xe8, virtual false, abstract: false, final false
inline void AddSortedNoteEvents(::AudioHelm::Note*  note) ;

/// @brief Method AllNotesOff, addr 0x1822e60, size 0x1f4, virtual true, abstract: false, final false
inline void AllNotesOff() ;

/// @brief Method ClampNotesInRange, addr 0x1828590, size 0x60, virtual false, abstract: false, final false
inline void ClampNotesInRange(int32_t  note, float_t  start, float_t  end, ::AudioHelm::Note*  ignore) ;

/// @brief Method Clear, addr 0x181c764, size 0x22c, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GetAllNoteEventsInRange, addr 0x1827c40, size 0x29c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::AudioHelm::Note*>* GetAllNoteEventsInRange(float_t  start, float_t  end, ::System::Collections::Generic::SortedList_2<::AudioHelm::Sequencer_NotePosition,::AudioHelm::Note*>*  events) ;

/// @brief Method GetAllNoteOffsInRange, addr 0x1827edc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::AudioHelm::Note*>* GetAllNoteOffsInRange(float_t  start, float_t  end) ;

/// @brief Method GetAllNoteOnsInRange, addr 0x1827304, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::AudioHelm::Note*>* GetAllNoteOnsInRange(float_t  start, float_t  end) ;

/// @brief Method GetAllNotes, addr 0x1827ba0, size 0xa0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::AudioHelm::Note*>* GetAllNotes() ;

/// @brief Method GetDivisionLength, addr 0x18278e4, size 0x30, virtual false, abstract: false, final false
inline float_t GetDivisionLength() ;

/// @brief Method GetNoteInRange, addr 0x18279d0, size 0x1d0, virtual false, abstract: false, final false
inline ::AudioHelm::Note* GetNoteInRange(int32_t  note, float_t  start, float_t  end, ::AudioHelm::Note*  ignore) ;

/// @brief Method GetSequencerPosition, addr 0x18272bc, size 0x48, virtual false, abstract: false, final false
inline double_t GetSequencerPosition() ;

/// @brief Method GetSequencerTime, addr 0x182325c, size 0x10, virtual false, abstract: false, final false
inline double_t GetSequencerTime() ;

/// @brief Method GetSixteenthTime, addr 0x1826ca8, size 0x9c, virtual false, abstract: false, final false
inline float_t GetSixteenthTime() ;

/// @brief Method InitNoteRows, addr 0x182263c, size 0x24c, virtual false, abstract: false, final false
inline void InitNoteRows() ;

static inline ::AudioHelm::Sequencer* New_ctor() ;

/// @brief Method NoteExistsInRange, addr 0x18279b4, size 0x1c, virtual false, abstract: false, final false
inline bool NoteExistsInRange(int32_t  note, float_t  start, float_t  end) ;

/// @brief Method NoteOff, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void NoteOff(int32_t  note) ;

/// @brief Method NoteOffPosition, addr 0x1827758, size 0x20, virtual false, abstract: false, final false
inline ::AudioHelm::Sequencer_NotePosition NoteOffPosition(::AudioHelm::Note*  note) ;

/// @brief Method NoteOn, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void NoteOn(int32_t  note, float_t  velocity) ;

/// @brief Method NoteOnPosition, addr 0x1827730, size 0x1c, virtual false, abstract: false, final false
inline ::AudioHelm::Sequencer_NotePosition NoteOnPosition(::AudioHelm::Note*  note) ;

/// @brief Method NotifyNoteEndChanged, addr 0x1824670, size 0xa4, virtual false, abstract: false, final false
inline void NotifyNoteEndChanged(::AudioHelm::Note*  note, float_t  oldEnd) ;

/// @brief Method NotifyNoteKeyChanged, addr 0x182437c, size 0x170, virtual false, abstract: false, final false
inline void NotifyNoteKeyChanged(::AudioHelm::Note*  note, int32_t  oldKey) ;

/// @brief Method NotifyNoteStartChanged, addr 0x18245c8, size 0xa0, virtual false, abstract: false, final false
inline void NotifyNoteStartChanged(::AudioHelm::Note*  note, float_t  oldStart) ;

/// @brief Method OnAfterDeserialize, addr 0x1827724, size 0x4, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0x1827720, size 0x4, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method OnDisable, addr 0x1822d34, size 0x110, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1822b04, size 0x168, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReadMidiData, addr 0x1828788, size 0x178, virtual false, abstract: false, final false
inline void ReadMidiData(::AudioHelm::MidiFile_MidiData*  midiData) ;

/// @brief Method ReadMidiFile, addr 0x182891c, size 0x90, virtual false, abstract: false, final false
inline void ReadMidiFile(::AudioHelm::MidiFile*  midiFile) ;

/// @brief Method ReadMidiFile, addr 0x1828900, size 0x1c, virtual false, abstract: false, final false
inline void ReadMidiFile(::System::IO::Stream*  midiStream) ;

/// @brief Method Reference, addr 0x18278dc, size 0x8, virtual true, abstract: false, final false
inline ::System::IntPtr Reference() ;

/// @brief Method RemoveNote, addr 0x1827914, size 0xa0, virtual false, abstract: false, final false
inline void RemoveNote(::AudioHelm::Note*  note) ;

/// @brief Method RemoveNotesContainedInRange, addr 0x1828234, size 0x35c, virtual false, abstract: false, final false
inline void RemoveNotesContainedInRange(int32_t  note, float_t  start, float_t  end, ::AudioHelm::Note*  ignore) ;

/// @brief Method RemoveNotesInRange, addr 0x1827ee4, size 0x350, virtual false, abstract: false, final false
inline void RemoveNotesInRange(int32_t  note, float_t  start, float_t  end) ;

/// @brief Method RemoveSortedNoteEvents, addr 0x1827778, size 0x7c, virtual false, abstract: false, final false
inline void RemoveSortedNoteEvents(::AudioHelm::Note*  note) ;

/// @brief Method SendNoteOff, addr 0x1828ac0, size 0xbc, virtual false, abstract: false, final false
inline void SendNoteOff(::AudioHelm::Note*  note) ;

/// @brief Method SendNoteOn, addr 0x1828b7c, size 0x108, virtual false, abstract: false, final false
inline void SendNoteOn(::AudioHelm::Note*  note) ;

/// @brief Method StartOnNextCycle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void StartOnNextCycle() ;

/// @brief Method StartScheduled, addr 0x182771c, size 0x4, virtual false, abstract: false, final false
inline void StartScheduled(double_t  dspTime) ;

/// @brief Method TransposeNotes, addr 0x18285f0, size 0x198, virtual false, abstract: false, final false
inline void TransposeNotes(int32_t  transpose) ;

/// @brief Method UpdateBeatTime, addr 0x1823128, size 0x134, virtual false, abstract: false, final false
inline void UpdateBeatTime() ;

/// @brief Method UpdateIndex, addr 0x18289ac, size 0x114, virtual false, abstract: false, final false
inline void UpdateIndex() ;

/// @brief Method UpdatePosition, addr 0x1823414, size 0x374, virtual false, abstract: false, final false
inline void UpdatePosition(bool  sendEvents) ;

/// @brief Method WaitForNextCycle, addr 0x18232f8, size 0x40, virtual false, abstract: false, final false
inline void WaitForNextCycle() ;

/// @brief Method WaitingForNextCycle, addr 0x1827728, size 0x8, virtual false, abstract: false, final false
inline bool WaitingForNextCycle() ;

constexpr ::AudioHelm::Sequencer_BeatAction* const& __cordl_internal_get_OnBeat() const;

constexpr ::AudioHelm::Sequencer_BeatAction*& __cordl_internal_get_OnBeat() ;

constexpr ::AudioHelm::Sequencer_NoteAction* const& __cordl_internal_get_OnNoteOff() const;

constexpr ::AudioHelm::Sequencer_NoteAction*& __cordl_internal_get_OnNoteOff() ;

constexpr ::AudioHelm::Sequencer_NoteAction* const& __cordl_internal_get_OnNoteOn() const;

constexpr ::AudioHelm::Sequencer_NoteAction*& __cordl_internal_get_OnNoteOn() ;

constexpr ::System::Collections::Generic::List_1<::AudioHelm::Note*>* const& __cordl_internal_get_activeNotes() const;

constexpr ::System::Collections::Generic::List_1<::AudioHelm::Note*>*& __cordl_internal_get_activeNotes() ;

constexpr ::ArrayW<::AudioHelm::NoteRow*,::Array<::AudioHelm::NoteRow*>*> const& __cordl_internal_get_allNotes() const;

constexpr ::ArrayW<::AudioHelm::NoteRow*,::Array<::AudioHelm::NoteRow*>*>& __cordl_internal_get_allNotes() ;

constexpr bool const& __cordl_internal_get_autoScroll() const;

constexpr bool& __cordl_internal_get_autoScroll() ;

constexpr ::AudioHelm::Sequencer_BeatEvent* const& __cordl_internal_get_beatEvent() const;

constexpr ::AudioHelm::Sequencer_BeatEvent*& __cordl_internal_get_beatEvent() ;

constexpr double_t const& __cordl_internal_get_beatTime() const;

constexpr double_t& __cordl_internal_get_beatTime() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr ::AudioHelm::Sequencer_Division const& __cordl_internal_get_division() const;

constexpr ::AudioHelm::Sequencer_Division& __cordl_internal_get_division() ;

constexpr float_t const& __cordl_internal_get_lastSequencerPosition() const;

constexpr float_t& __cordl_internal_get_lastSequencerPosition() ;

constexpr int32_t const& __cordl_internal_get_length() const;

constexpr int32_t& __cordl_internal_get_length() ;

constexpr bool const& __cordl_internal_get_loop() const;

constexpr bool& __cordl_internal_get_loop() ;

constexpr ::AudioHelm::Sequencer_NoteEvent* const& __cordl_internal_get_noteOffEvent() const;

constexpr ::AudioHelm::Sequencer_NoteEvent*& __cordl_internal_get_noteOffEvent() ;

constexpr ::AudioHelm::Sequencer_NoteEvent* const& __cordl_internal_get_noteOnEvent() const;

constexpr ::AudioHelm::Sequencer_NoteEvent*& __cordl_internal_get_noteOnEvent() ;

constexpr int32_t const& __cordl_internal_get_numCycles() const;

constexpr int32_t& __cordl_internal_get_numCycles() ;

constexpr bool const& __cordl_internal_get_paused() const;

constexpr bool& __cordl_internal_get_paused() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_scrollPosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_scrollPosition() ;

constexpr ::System::Collections::Generic::SortedList_2<::AudioHelm::Sequencer_NotePosition,::AudioHelm::Note*>* const& __cordl_internal_get_sortedNoteOffs() const;

constexpr ::System::Collections::Generic::SortedList_2<::AudioHelm::Sequencer_NotePosition,::AudioHelm::Note*>*& __cordl_internal_get_sortedNoteOffs() ;

constexpr ::System::Collections::Generic::SortedList_2<::AudioHelm::Sequencer_NotePosition,::AudioHelm::Note*>* const& __cordl_internal_get_sortedNoteOns() const;

constexpr ::System::Collections::Generic::SortedList_2<::AudioHelm::Sequencer_NotePosition,::AudioHelm::Note*>*& __cordl_internal_get_sortedNoteOns() ;

constexpr bool const& __cordl_internal_get_waitTillNextCycle() const;

constexpr bool& __cordl_internal_get_waitTillNextCycle() ;

constexpr float_t const& __cordl_internal_get_zoom() const;

constexpr float_t& __cordl_internal_get_zoom() ;

constexpr void __cordl_internal_set_OnBeat(::AudioHelm::Sequencer_BeatAction*  value) ;

constexpr void __cordl_internal_set_OnNoteOff(::AudioHelm::Sequencer_NoteAction*  value) ;

constexpr void __cordl_internal_set_OnNoteOn(::AudioHelm::Sequencer_NoteAction*  value) ;

constexpr void __cordl_internal_set_activeNotes(::System::Collections::Generic::List_1<::AudioHelm::Note*>*  value) ;

constexpr void __cordl_internal_set_allNotes(::ArrayW<::AudioHelm::NoteRow*,::Array<::AudioHelm::NoteRow*>*>  value) ;

constexpr void __cordl_internal_set_autoScroll(bool  value) ;

constexpr void __cordl_internal_set_beatEvent(::AudioHelm::Sequencer_BeatEvent*  value) ;

constexpr void __cordl_internal_set_beatTime(double_t  value) ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_division(::AudioHelm::Sequencer_Division  value) ;

constexpr void __cordl_internal_set_lastSequencerPosition(float_t  value) ;

constexpr void __cordl_internal_set_length(int32_t  value) ;

constexpr void __cordl_internal_set_loop(bool  value) ;

constexpr void __cordl_internal_set_noteOffEvent(::AudioHelm::Sequencer_NoteEvent*  value) ;

constexpr void __cordl_internal_set_noteOnEvent(::AudioHelm::Sequencer_NoteEvent*  value) ;

constexpr void __cordl_internal_set_numCycles(int32_t  value) ;

constexpr void __cordl_internal_set_paused(bool  value) ;

constexpr void __cordl_internal_set_scrollPosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_sortedNoteOffs(::System::Collections::Generic::SortedList_2<::AudioHelm::Sequencer_NotePosition,::AudioHelm::Note*>*  value) ;

constexpr void __cordl_internal_set_sortedNoteOns(::System::Collections::Generic::SortedList_2<::AudioHelm::Sequencer_NotePosition,::AudioHelm::Note*>*  value) ;

constexpr void __cordl_internal_set_waitTillNextCycle(bool  value) ;

constexpr void __cordl_internal_set_zoom(float_t  value) ;

/// @brief Method .ctor, addr 0x18237f0, size 0x1ac, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnBeat, addr 0x18275e4, size 0x9c, virtual false, abstract: false, final false
inline void add_OnBeat(::AudioHelm::Sequencer_BeatAction*  value) ;

/// @brief Method add_OnNoteOff, addr 0x18274ac, size 0x9c, virtual false, abstract: false, final false
inline void add_OnNoteOff(::AudioHelm::Sequencer_NoteAction*  value) ;

/// @brief Method add_OnNoteOn, addr 0x1827374, size 0x9c, virtual false, abstract: false, final false
inline void add_OnNoteOn(::AudioHelm::Sequencer_NoteAction*  value) ;

static inline ::AudioHelm::Sequencer_NoteComparer* getStaticF_noteComparer() ;

static inline ::AudioHelm::Sequencer_NotePositionComparer* getStaticF_notePositionComparer() ;

/// @brief Convert to "::AudioHelm::NoteHandler"
constexpr ::AudioHelm::NoteHandler* i___AudioHelm__NoteHandler() noexcept;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Method remove_OnBeat, addr 0x1827680, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnBeat(::AudioHelm::Sequencer_BeatAction*  value) ;

/// @brief Method remove_OnNoteOff, addr 0x1827548, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnNoteOff(::AudioHelm::Sequencer_NoteAction*  value) ;

/// @brief Method remove_OnNoteOn, addr 0x1827410, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnNoteOn(::AudioHelm::Sequencer_NoteAction*  value) ;

static inline void setStaticF_noteComparer(::AudioHelm::Sequencer_NoteComparer*  value) ;

static inline void setStaticF_notePositionComparer(::AudioHelm::Sequencer_NotePositionComparer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Sequencer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Sequencer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Sequencer(Sequencer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sequencer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sequencer(Sequencer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1905};

/// @brief Field OnNoteOn, offset: 0x20, size: 0x8, def value: None
 ::AudioHelm::Sequencer_NoteAction*  ___OnNoteOn;

/// @brief Field OnNoteOff, offset: 0x28, size: 0x8, def value: None
 ::AudioHelm::Sequencer_NoteAction*  ___OnNoteOff;

/// @brief Field OnBeat, offset: 0x30, size: 0x8, def value: None
 ::AudioHelm::Sequencer_BeatAction*  ___OnBeat;

/// @brief Field noteOnEvent, offset: 0x38, size: 0x8, def value: None
 ::AudioHelm::Sequencer_NoteEvent*  ___noteOnEvent;

/// @brief Field noteOffEvent, offset: 0x40, size: 0x8, def value: None
 ::AudioHelm::Sequencer_NoteEvent*  ___noteOffEvent;

/// @brief Field beatEvent, offset: 0x48, size: 0x8, def value: None
 ::AudioHelm::Sequencer_BeatEvent*  ___beatEvent;

/// @brief Field activeNotes, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::AudioHelm::Note*>*  ___activeNotes;

/// @brief Field length, offset: 0x58, size: 0x4, def value: None
 int32_t  ___length;

/// @brief Field currentIndex, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___currentIndex;

/// @brief Field loop, offset: 0x60, size: 0x1, def value: None
 bool  ___loop;

/// @brief Field beatTime, offset: 0x68, size: 0x8, def value: None
 double_t  ___beatTime;

/// @brief Field paused, offset: 0x70, size: 0x1, def value: None
 bool  ___paused;

/// @brief Field allNotes, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::AudioHelm::NoteRow*,::Array<::AudioHelm::NoteRow*>*>  ___allNotes;

/// @brief Field scrollPosition, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___scrollPosition;

/// @brief Field autoScroll, offset: 0x88, size: 0x1, def value: None
 bool  ___autoScroll;

/// @brief Field division, offset: 0x8c, size: 0x4, def value: None
 ::AudioHelm::Sequencer_Division  ___division;

/// @brief Field zoom, offset: 0x90, size: 0x4, def value: None
 float_t  ___zoom;

/// @brief Field sortedNoteOns, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::SortedList_2<::AudioHelm::Sequencer_NotePosition,::AudioHelm::Note*>*  ___sortedNoteOns;

/// @brief Field sortedNoteOffs, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::SortedList_2<::AudioHelm::Sequencer_NotePosition,::AudioHelm::Note*>*  ___sortedNoteOffs;

/// @brief Field lastSequencerPosition, offset: 0xa8, size: 0x4, def value: None
 float_t  ___lastSequencerPosition;

/// @brief Field waitTillNextCycle, offset: 0xac, size: 0x1, def value: None
 bool  ___waitTillNextCycle;

/// @brief Field numCycles, offset: 0xb0, size: 0x4, def value: None
 int32_t  ___numCycles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::Sequencer, ___OnNoteOn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sequencer, ___OnNoteOff) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sequencer, ___OnBeat) == 0x30, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sequencer, ___noteOnEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sequencer, ___noteOffEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sequencer, ___beatEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sequencer, ___activeNotes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sequencer, ___length) == 0x58, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sequencer, ___currentIndex) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sequencer, ___loop) == 0x60, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sequencer, ___beatTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sequencer, ___paused) == 0x70, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sequencer, ___allNotes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sequencer, ___scrollPosition) == 0x80, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sequencer, ___autoScroll) == 0x88, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sequencer, ___division) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sequencer, ___zoom) == 0x90, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sequencer, ___sortedNoteOns) == 0x98, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sequencer, ___sortedNoteOffs) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sequencer, ___lastSequencerPosition) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sequencer, ___waitTillNextCycle) == 0xac, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sequencer, ___numCycles) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::Sequencer, 0xb8>, "Size mismatch!");

} // namespace end def AudioHelm
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Sequencer_Division, "AudioHelm", "Sequencer/Division");
NEED_NO_BOX(::AudioHelm::Sequencer);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Sequencer*, "AudioHelm", "Sequencer");
NEED_NO_BOX(::AudioHelm::Sequencer_BeatAction);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Sequencer_BeatAction*, "AudioHelm", "Sequencer/BeatAction");
NEED_NO_BOX(::AudioHelm::Sequencer_BeatEvent);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Sequencer_BeatEvent*, "AudioHelm", "Sequencer/BeatEvent");
NEED_NO_BOX(::AudioHelm::Sequencer_NoteAction);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Sequencer_NoteAction*, "AudioHelm", "Sequencer/NoteAction");
NEED_NO_BOX(::AudioHelm::Sequencer_NoteComparer);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Sequencer_NoteComparer*, "AudioHelm", "Sequencer/NoteComparer");
NEED_NO_BOX(::AudioHelm::Sequencer_NoteEvent);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Sequencer_NoteEvent*, "AudioHelm", "Sequencer/NoteEvent");
NEED_NO_BOX(::AudioHelm::Sequencer_NotePositionComparer);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Sequencer_NotePositionComparer*, "AudioHelm", "Sequencer/NotePositionComparer");
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Sequencer_NotePosition, "AudioHelm", "Sequencer/NotePosition");
