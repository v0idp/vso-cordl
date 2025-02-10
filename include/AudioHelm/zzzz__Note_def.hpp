#pragma once
// IWYU pragma private; include "AudioHelm/Note.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Note)
namespace AudioHelm {
class Note_NoteAction;
}
namespace AudioHelm {
class Sequencer;
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
class Note;
}
namespace AudioHelm {
class Note_NoteAction;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::Note);
MARK_REF_PTR_T(::AudioHelm::Note_NoteAction);
// Dependencies System.MulticastDelegate
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.Note/NoteAction
class CORDL_TYPE Note_NoteAction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1824b54, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::AudioHelm::Note*  note, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1824b74, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1824b40, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::AudioHelm::Note*  note) ;

static inline ::AudioHelm::Note_NoteAction* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1824a40, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Note_NoteAction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Note_NoteAction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Note_NoteAction(Note_NoteAction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Note_NoteAction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Note_NoteAction(Note_NoteAction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1888};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::AudioHelm::Note_NoteAction, 0x80>, "Size mismatch!");

} // namespace end def AudioHelm
// Dependencies System.IntPtr, System.Object, UnityEngine.ISerializationCallbackReceiver
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.Note
class CORDL_TYPE Note : public ::System::Object {
public:
// Declarations
using NoteAction = ::AudioHelm::Note_NoteAction;

/// @brief Field OnNoteOff, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnNoteOff, put=__cordl_internal_set_OnNoteOff)) ::AudioHelm::Note_NoteAction*  OnNoteOff;

/// @brief Field OnNoteOn, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnNoteOn, put=__cordl_internal_set_OnNoteOn)) ::AudioHelm::Note_NoteAction*  OnNoteOn;

 __declspec(property(get=get_end, put=set_end)) float_t  end;

/// @brief Field end_, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_end_, put=__cordl_internal_set_end_)) float_t  end_;

 __declspec(property(get=get_note, put=set_note)) int32_t  note;

/// @brief Field note_, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_note_, put=__cordl_internal_set_note_)) int32_t  note_;

/// @brief Field parent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::UnityW<::AudioHelm::Sequencer>  parent;

/// @brief Field reference, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_reference, put=__cordl_internal_set_reference)) ::System::IntPtr  reference;

 __declspec(property(get=get_start, put=set_start)) float_t  start;

/// @brief Field start_, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_start_, put=__cordl_internal_set_start_)) float_t  start_;

 __declspec(property(get=get_velocity, put=set_velocity)) float_t  velocity;

/// @brief Field velocity_, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocity_, put=__cordl_internal_set_velocity_)) float_t  velocity_;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method CopySettingsToNative, addr 0x182475c, size 0x64, virtual false, abstract: false, final false
inline void CopySettingsToNative() ;

/// @brief Method FullyNative, addr 0x1824348, size 0x34, virtual false, abstract: false, final false
inline bool FullyNative() ;

/// @brief Method HasNativeNote, addr 0x18247c0, size 0x10, virtual false, abstract: false, final false
inline bool HasNativeNote() ;

/// @brief Method HasNativeSequencer, addr 0x18247d0, size 0x9c, virtual false, abstract: false, final false
inline bool HasNativeSequencer() ;

/// @brief Method InsideRange, addr 0x18249bc, size 0x24, virtual false, abstract: false, final false
inline bool InsideRange(float_t  rangeStart, float_t  rangeEnd) ;

static inline ::AudioHelm::Note* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0x1824754, size 0x4, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0x1824758, size 0x4, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method OverlapsRange, addr 0x18248ec, size 0x9c, virtual false, abstract: false, final false
inline bool OverlapsRange(float_t  rangeStart, float_t  rangeEnd) ;

/// @brief Method RemoveRange, addr 0x18249e0, size 0x58, virtual false, abstract: false, final false
inline void RemoveRange(float_t  rangeStart, float_t  rangeEnd) ;

/// @brief Method TriggerNoteOffEvent, addr 0x182488c, size 0x20, virtual false, abstract: false, final false
inline void TriggerNoteOffEvent() ;

/// @brief Method TriggerNoteOnEvent, addr 0x182486c, size 0x20, virtual false, abstract: false, final false
inline void TriggerNoteOnEvent() ;

/// @brief Method TryCreate, addr 0x1822a24, size 0x68, virtual false, abstract: false, final false
inline void TryCreate() ;

/// @brief Method TryDelete, addr 0x18248ac, size 0x40, virtual false, abstract: false, final false
inline void TryDelete() ;

constexpr ::AudioHelm::Note_NoteAction* const& __cordl_internal_get_OnNoteOff() const;

constexpr ::AudioHelm::Note_NoteAction*& __cordl_internal_get_OnNoteOff() ;

constexpr ::AudioHelm::Note_NoteAction* const& __cordl_internal_get_OnNoteOn() const;

constexpr ::AudioHelm::Note_NoteAction*& __cordl_internal_get_OnNoteOn() ;

constexpr float_t const& __cordl_internal_get_end_() const;

constexpr float_t& __cordl_internal_get_end_() ;

constexpr int32_t const& __cordl_internal_get_note_() const;

constexpr int32_t& __cordl_internal_get_note_() ;

constexpr ::UnityW<::AudioHelm::Sequencer> const& __cordl_internal_get_parent() const;

constexpr ::UnityW<::AudioHelm::Sequencer>& __cordl_internal_get_parent() ;

constexpr ::System::IntPtr const& __cordl_internal_get_reference() const;

constexpr ::System::IntPtr& __cordl_internal_get_reference() ;

constexpr float_t const& __cordl_internal_get_start_() const;

constexpr float_t& __cordl_internal_get_start_() ;

constexpr float_t const& __cordl_internal_get_velocity_() const;

constexpr float_t& __cordl_internal_get_velocity_() ;

constexpr void __cordl_internal_set_OnNoteOff(::AudioHelm::Note_NoteAction*  value) ;

constexpr void __cordl_internal_set_OnNoteOn(::AudioHelm::Note_NoteAction*  value) ;

constexpr void __cordl_internal_set_end_(float_t  value) ;

constexpr void __cordl_internal_set_note_(int32_t  value) ;

constexpr void __cordl_internal_set_parent(::UnityW<::AudioHelm::Sequencer>  value) ;

constexpr void __cordl_internal_set_reference(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_start_(float_t  value) ;

constexpr void __cordl_internal_set_velocity_(float_t  value) ;

/// @brief Method .ctor, addr 0x1824a38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnNoteOff, addr 0x1824140, size 0x9c, virtual false, abstract: false, final false
inline void add_OnNoteOff(::AudioHelm::Note_NoteAction*  value) ;

/// @brief Method add_OnNoteOn, addr 0x1824008, size 0x9c, virtual false, abstract: false, final false
inline void add_OnNoteOn(::AudioHelm::Note_NoteAction*  value) ;

/// @brief Method get_end, addr 0x1824668, size 0x8, virtual false, abstract: false, final false
inline float_t get_end() ;

/// @brief Method get_note, addr 0x1824278, size 0x8, virtual false, abstract: false, final false
inline int32_t get_note() ;

/// @brief Method get_start, addr 0x18244ec, size 0x8, virtual false, abstract: false, final false
inline float_t get_start() ;

/// @brief Method get_velocity, addr 0x1824714, size 0x8, virtual false, abstract: false, final false
inline float_t get_velocity() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Method remove_OnNoteOff, addr 0x18241dc, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnNoteOff(::AudioHelm::Note_NoteAction*  value) ;

/// @brief Method remove_OnNoteOn, addr 0x18240a4, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnNoteOn(::AudioHelm::Note_NoteAction*  value) ;

/// @brief Method set_end, addr 0x181cc14, size 0xd4, virtual false, abstract: false, final false
inline void set_end(float_t  value) ;

/// @brief Method set_note, addr 0x1824280, size 0xc8, virtual false, abstract: false, final false
inline void set_note(int32_t  value) ;

/// @brief Method set_start, addr 0x18244f4, size 0xd4, virtual false, abstract: false, final false
inline void set_start(float_t  value) ;

/// @brief Method set_velocity, addr 0x182471c, size 0x38, virtual false, abstract: false, final false
inline void set_velocity(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Note() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Note", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Note(Note && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Note", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Note(Note const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1889};

/// @brief Field OnNoteOn, offset: 0x10, size: 0x8, def value: None
 ::AudioHelm::Note_NoteAction*  ___OnNoteOn;

/// @brief Field OnNoteOff, offset: 0x18, size: 0x8, def value: None
 ::AudioHelm::Note_NoteAction*  ___OnNoteOff;

/// @brief Field note_, offset: 0x20, size: 0x4, def value: None
 int32_t  ___note_;

/// @brief Field start_, offset: 0x24, size: 0x4, def value: None
 float_t  ___start_;

/// @brief Field end_, offset: 0x28, size: 0x4, def value: None
 float_t  ___end_;

/// @brief Field velocity_, offset: 0x2c, size: 0x4, def value: None
 float_t  ___velocity_;

/// @brief Field parent, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::AudioHelm::Sequencer>  ___parent;

/// @brief Field reference, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  ___reference;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::Note, ___OnNoteOn) == 0x10, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Note, ___OnNoteOff) == 0x18, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Note, ___note_) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Note, ___start_) == 0x24, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Note, ___end_) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Note, ___velocity_) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Note, ___parent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Note, ___reference) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::Note, 0x40>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::Note);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Note*, "AudioHelm", "Note");
NEED_NO_BOX(::AudioHelm::Note_NoteAction);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Note_NoteAction*, "AudioHelm", "Note/NoteAction");
