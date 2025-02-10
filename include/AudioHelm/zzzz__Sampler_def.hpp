#pragma once
// IWYU pragma private; include "AudioHelm/Sampler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "AudioHelm/zzzz__NoteHandler_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Sampler)
namespace AudioHelm {
class Keyzone;
}
namespace AudioHelm {
class Sampler_ActiveNote;
}
namespace AudioHelm {
struct Sampler_KeyzonePlayMode;
}
namespace AudioHelm {
class Sampler__TurnVoiceOffInSeconds_d__27;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace AudioHelm {
struct Sampler_KeyzonePlayMode;
}
namespace AudioHelm {
class Sampler;
}
namespace AudioHelm {
class Sampler_ActiveNote;
}
namespace AudioHelm {
class Sampler__TurnVoiceOffInSeconds_d__27;
}
// Write type traits
MARK_VAL_T(::AudioHelm::Sampler_KeyzonePlayMode);
MARK_REF_PTR_T(::AudioHelm::Sampler);
MARK_REF_PTR_T(::AudioHelm::Sampler_ActiveNote);
MARK_REF_PTR_T(::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27);
// Dependencies 
namespace AudioHelm {
// Is value type: true
// CS Name: AudioHelm.Sampler/KeyzonePlayMode
struct CORDL_TYPE Sampler_KeyzonePlayMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Sampler_KeyzonePlayMode_Unwrapped
enum struct __Sampler_KeyzonePlayMode_Unwrapped : int32_t {
__E_kAll = static_cast<int32_t>(0x0),
__E_kRoundRobin = static_cast<int32_t>(0x1),
__E_kRandom = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Sampler_KeyzonePlayMode_Unwrapped () const noexcept {
return static_cast<__Sampler_KeyzonePlayMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Sampler_KeyzonePlayMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Sampler_KeyzonePlayMode(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1892};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field kAll value: I32(0)
static ::AudioHelm::Sampler_KeyzonePlayMode const kAll;

/// @brief Field kRandom value: I32(2)
static ::AudioHelm::Sampler_KeyzonePlayMode const kRandom;

/// @brief Field kRoundRobin value: I32(1)
static ::AudioHelm::Sampler_KeyzonePlayMode const kRoundRobin;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::Sampler_KeyzonePlayMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::Sampler_KeyzonePlayMode, 0x4>, "Size mismatch!");

} // namespace end def AudioHelm
// Dependencies System.Object
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.Sampler/ActiveNote
class CORDL_TYPE Sampler_ActiveNote : public ::System::Object {
public:
// Declarations
/// @brief Field audioSources, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSources, put=__cordl_internal_set_audioSources)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*  audioSources;

/// @brief Field note, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_note, put=__cordl_internal_set_note)) int32_t  note;

/// @brief Field startTime, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) double_t  startTime;

static inline ::AudioHelm::Sampler_ActiveNote* New_ctor(int32_t  n, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*  sources, double_t  start) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>* const& __cordl_internal_get_audioSources() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*& __cordl_internal_get_audioSources() ;

constexpr int32_t const& __cordl_internal_get_note() const;

constexpr int32_t& __cordl_internal_get_note() ;

constexpr double_t const& __cordl_internal_get_startTime() const;

constexpr double_t& __cordl_internal_get_startTime() ;

constexpr void __cordl_internal_set_audioSources(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*  value) ;

constexpr void __cordl_internal_set_note(int32_t  value) ;

constexpr void __cordl_internal_set_startTime(double_t  value) ;

/// @brief Method .ctor, addr 0x182633c, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  n, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*  sources, double_t  start) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Sampler_ActiveNote() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Sampler_ActiveNote", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Sampler_ActiveNote(Sampler_ActiveNote && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sampler_ActiveNote", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sampler_ActiveNote(Sampler_ActiveNote const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1893};

/// @brief Field note, offset: 0x10, size: 0x4, def value: None
 int32_t  ___note;

/// @brief Field audioSources, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*  ___audioSources;

/// @brief Field startTime, offset: 0x20, size: 0x8, def value: None
 double_t  ___startTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::Sampler_ActiveNote, ___note) == 0x10, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sampler_ActiveNote, ___audioSources) == 0x18, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sampler_ActiveNote, ___startTime) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::Sampler_ActiveNote, 0x28>, "Size mismatch!");

} // namespace end def AudioHelm
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.Sampler/<TurnVoiceOffInSeconds>d__27
class CORDL_TYPE Sampler__TurnVoiceOffInSeconds_d__27 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::AudioHelm::Sampler>  __4__this;

/// @brief Field note, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_note, put=__cordl_internal_set_note)) int32_t  note;

/// @brief Field seconds, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_seconds, put=__cordl_internal_set_seconds)) float_t  seconds;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1826b50, size 0xac, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1826bfc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1826c04, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1826c3c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1826b4c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::AudioHelm::Sampler> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::AudioHelm::Sampler>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get_note() const;

constexpr int32_t& __cordl_internal_get_note() ;

constexpr float_t const& __cordl_internal_get_seconds() const;

constexpr float_t& __cordl_internal_get_seconds() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::AudioHelm::Sampler>  value) ;

constexpr void __cordl_internal_set_note(int32_t  value) ;

constexpr void __cordl_internal_set_seconds(float_t  value) ;

/// @brief Method .ctor, addr 0x1826040, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Sampler__TurnVoiceOffInSeconds_d__27() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Sampler__TurnVoiceOffInSeconds_d__27", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Sampler__TurnVoiceOffInSeconds_d__27(Sampler__TurnVoiceOffInSeconds_d__27 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sampler__TurnVoiceOffInSeconds_d__27", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sampler__TurnVoiceOffInSeconds_d__27(Sampler__TurnVoiceOffInSeconds_d__27 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1894};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field seconds, offset: 0x20, size: 0x4, def value: None
 float_t  ___seconds;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::AudioHelm::Sampler>  _____4__this;

/// @brief Field note, offset: 0x30, size: 0x4, def value: None
 int32_t  ___note;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27, ___seconds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27, ___note) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27, 0x38>, "Size mismatch!");

} // namespace end def AudioHelm
// Dependencies AudioHelm.NoteHandler, AudioHelm.Sampler::KeyzonePlayMode, UnityEngine.MonoBehaviour
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.Sampler
class CORDL_TYPE Sampler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ActiveNote = ::AudioHelm::Sampler_ActiveNote;

using KeyzonePlayMode = ::AudioHelm::Sampler_KeyzonePlayMode;

using _TurnVoiceOffInSeconds_d__27 = ::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27;

/// @brief Field activeNotes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeNotes, put=__cordl_internal_set_activeNotes)) ::System::Collections::Generic::List_1<::AudioHelm::Sampler_ActiveNote*>*  activeNotes;

/// @brief Field audioIndex, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_audioIndex, put=__cordl_internal_set_audioIndex)) int32_t  audioIndex;

/// @brief Field keyzonePlayMode, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_keyzonePlayMode, put=__cordl_internal_set_keyzonePlayMode)) ::AudioHelm::Sampler_KeyzonePlayMode  keyzonePlayMode;

/// @brief Field keyzones, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyzones, put=__cordl_internal_set_keyzones)) ::System::Collections::Generic::List_1<::AudioHelm::Keyzone*>*  keyzones;

/// @brief Field numVoices, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_numVoices, put=__cordl_internal_set_numVoices)) int32_t  numVoices;

 __declspec(property(get=get_useNoteOff, put=set_useNoteOff)) bool  useNoteOff;

/// @brief Field useNoteOff_, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_useNoteOff_, put=__cordl_internal_set_useNoteOff_)) bool  useNoteOff_;

/// @brief Field velocityTracking, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocityTracking, put=__cordl_internal_set_velocityTracking)) float_t  velocityTracking;

/// @brief Convert operator to "::AudioHelm::NoteHandler"
constexpr operator  ::AudioHelm::NoteHandler*() noexcept;

/// @brief Method AddKeyzone, addr 0x18250f4, size 0xe0, virtual false, abstract: false, final false
inline ::AudioHelm::Keyzone* AddKeyzone() ;

/// @brief Method AllNotesOff, addr 0x1824efc, size 0xd8, virtual true, abstract: false, final true
inline void AllNotesOff() ;

/// @brief Method Awake, addr 0x1824fd4, size 0x118, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DoNoteOff, addr 0x1826830, size 0x1a4, virtual false, abstract: false, final false
inline void DoNoteOff(int32_t  note) ;

/// @brief Method FindActiveNote, addr 0x18266c8, size 0x158, virtual false, abstract: false, final false
inline ::AudioHelm::Sampler_ActiveNote* FindActiveNote(int32_t  note) ;

/// @brief Method GetKeyzonesToPlay, addr 0x1825784, size 0x2fc, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::AudioHelm::Keyzone*>* GetKeyzonesToPlay(::System::Collections::Generic::List_1<::AudioHelm::Keyzone*>*  validKeyzones) ;

/// @brief Method GetMaxKey, addr 0x1825e50, size 0x170, virtual false, abstract: false, final false
inline int32_t GetMaxKey() ;

/// @brief Method GetMinKey, addr 0x1825ce0, size 0x170, virtual false, abstract: false, final false
inline int32_t GetMinKey() ;

/// @brief Method GetNextAudioSource, addr 0x1825264, size 0x108, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioSource> GetNextAudioSource(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*  ignore) ;

/// @brief Method GetPreppedAudioSources, addr 0x1825a80, size 0x260, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>* GetPreppedAudioSources(int32_t  note, float_t  velocity) ;

/// @brief Method GetValidKeyzones, addr 0x182553c, size 0x248, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::AudioHelm::Keyzone*>* GetValidKeyzones(int32_t  note, float_t  velocity) ;

static inline ::AudioHelm::Sampler* New_ctor() ;

/// @brief Method NoteOff, addr 0x1826820, size 0x10, virtual true, abstract: false, final true
inline void NoteOff(int32_t  note) ;

/// @brief Method NoteOn, addr 0x1826068, size 0x2d4, virtual true, abstract: false, final true
inline void NoteOn(int32_t  note, float_t  velocity) ;

/// @brief Method NoteOnScheduled, addr 0x182637c, size 0x34c, virtual false, abstract: false, final false
inline void NoteOnScheduled(int32_t  note, float_t  velocity, double_t  timeToStart, double_t  timeToEnd) ;

/// @brief Method OnDestroy, addr 0x18250ec, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x18250f0, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method PrepNote, addr 0x1825440, size 0xfc, virtual false, abstract: false, final false
inline void PrepNote(::UnityEngine::AudioSource*  audioSource, ::AudioHelm::Keyzone*  keyzone, int32_t  note, float_t  velocity) ;

/// @brief Method PrepNote, addr 0x182536c, size 0xc4, virtual false, abstract: false, final false
inline void PrepNote(::UnityEngine::AudioSource*  audioSource, int32_t  note, float_t  velocity) ;

/// @brief Method RemoveKeyzone, addr 0x18251d4, size 0x90, virtual false, abstract: false, final false
inline int32_t RemoveKeyzone(::AudioHelm::Keyzone*  keyzone) ;

/// @brief Method TurnVoiceOffInSeconds, addr 0x1825fc0, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* TurnVoiceOffInSeconds(int32_t  note, float_t  seconds) ;

constexpr ::System::Collections::Generic::List_1<::AudioHelm::Sampler_ActiveNote*>* const& __cordl_internal_get_activeNotes() const;

constexpr ::System::Collections::Generic::List_1<::AudioHelm::Sampler_ActiveNote*>*& __cordl_internal_get_activeNotes() ;

constexpr int32_t const& __cordl_internal_get_audioIndex() const;

constexpr int32_t& __cordl_internal_get_audioIndex() ;

constexpr ::AudioHelm::Sampler_KeyzonePlayMode const& __cordl_internal_get_keyzonePlayMode() const;

constexpr ::AudioHelm::Sampler_KeyzonePlayMode& __cordl_internal_get_keyzonePlayMode() ;

constexpr ::System::Collections::Generic::List_1<::AudioHelm::Keyzone*>* const& __cordl_internal_get_keyzones() const;

constexpr ::System::Collections::Generic::List_1<::AudioHelm::Keyzone*>*& __cordl_internal_get_keyzones() ;

constexpr int32_t const& __cordl_internal_get_numVoices() const;

constexpr int32_t& __cordl_internal_get_numVoices() ;

constexpr bool const& __cordl_internal_get_useNoteOff_() const;

constexpr bool& __cordl_internal_get_useNoteOff_() ;

constexpr float_t const& __cordl_internal_get_velocityTracking() const;

constexpr float_t& __cordl_internal_get_velocityTracking() ;

constexpr void __cordl_internal_set_activeNotes(::System::Collections::Generic::List_1<::AudioHelm::Sampler_ActiveNote*>*  value) ;

constexpr void __cordl_internal_set_audioIndex(int32_t  value) ;

constexpr void __cordl_internal_set_keyzonePlayMode(::AudioHelm::Sampler_KeyzonePlayMode  value) ;

constexpr void __cordl_internal_set_keyzones(::System::Collections::Generic::List_1<::AudioHelm::Keyzone*>*  value) ;

constexpr void __cordl_internal_set_numVoices(int32_t  value) ;

constexpr void __cordl_internal_set_useNoteOff_(bool  value) ;

constexpr void __cordl_internal_set_velocityTracking(float_t  value) ;

/// @brief Method .ctor, addr 0x18269d4, size 0x178, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_useNoteOff, addr 0x1824ee0, size 0x8, virtual false, abstract: false, final false
inline bool get_useNoteOff() ;

/// @brief Convert to "::AudioHelm::NoteHandler"
constexpr ::AudioHelm::NoteHandler* i___AudioHelm__NoteHandler() noexcept;

/// @brief Method set_useNoteOff, addr 0x1824ee8, size 0x14, virtual false, abstract: false, final false
inline void set_useNoteOff(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Sampler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Sampler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Sampler(Sampler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sampler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sampler(Sampler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1895};

/// @brief Field endEarlyTime offset 0xffffffff size 0x8
static constexpr double_t  endEarlyTime{static_cast<double_t>(0.0)};

/// @brief Field keyzones, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::AudioHelm::Keyzone*>*  ___keyzones;

/// @brief Field keyzonePlayMode, offset: 0x28, size: 0x4, def value: None
 ::AudioHelm::Sampler_KeyzonePlayMode  ___keyzonePlayMode;

/// @brief Field velocityTracking, offset: 0x2c, size: 0x4, def value: None
 float_t  ___velocityTracking;

/// @brief Field numVoices, offset: 0x30, size: 0x4, def value: None
 int32_t  ___numVoices;

/// @brief Field useNoteOff_, offset: 0x34, size: 0x1, def value: None
 bool  ___useNoteOff_;

/// @brief Field audioIndex, offset: 0x38, size: 0x4, def value: None
 int32_t  ___audioIndex;

/// @brief Field activeNotes, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::AudioHelm::Sampler_ActiveNote*>*  ___activeNotes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::Sampler, ___keyzones) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sampler, ___keyzonePlayMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sampler, ___velocityTracking) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sampler, ___numVoices) == 0x30, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sampler, ___useNoteOff_) == 0x34, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sampler, ___audioIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Sampler, ___activeNotes) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::Sampler, 0x48>, "Size mismatch!");

} // namespace end def AudioHelm
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Sampler_KeyzonePlayMode, "AudioHelm", "Sampler/KeyzonePlayMode");
NEED_NO_BOX(::AudioHelm::Sampler);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Sampler*, "AudioHelm", "Sampler");
NEED_NO_BOX(::AudioHelm::Sampler_ActiveNote);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Sampler_ActiveNote*, "AudioHelm", "Sampler/ActiveNote");
NEED_NO_BOX(::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27*, "AudioHelm", "Sampler/<TurnVoiceOffInSeconds>d__27");
