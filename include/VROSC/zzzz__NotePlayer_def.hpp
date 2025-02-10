#pragma once
// IWYU pragma private; include "VROSC/NotePlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__SignalNode_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NotePlayer)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
struct HandType;
}
namespace VROSC {
class InstrumentController;
}
namespace VROSC {
class IntField;
}
namespace VROSC {
struct NotePlayer__PlayNoteQuantized_d__27;
}
namespace VROSC {
struct NotePlayer__Stop_d__28;
}
namespace VROSC {
class NotePlayer___c__DisplayClass22_0;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class NotePlayer;
}
namespace VROSC {
class NotePlayer___c__DisplayClass22_0;
}
namespace VROSC {
struct NotePlayer__PlayNoteQuantized_d__27;
}
namespace VROSC {
struct NotePlayer__Stop_d__28;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NotePlayer);
MARK_REF_PTR_T(::VROSC::NotePlayer___c__DisplayClass22_0);
MARK_VAL_T(::VROSC::NotePlayer__PlayNoteQuantized_d__27);
MARK_VAL_T(::VROSC::NotePlayer__Stop_d__28);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NotePlayer/<>c__DisplayClass22_0
class CORDL_TYPE NotePlayer___c__DisplayClass22_0 : public ::System::Object {
public:
// Declarations
/// @brief Field nextQuantizeDspTime, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextQuantizeDspTime, put=__cordl_internal_set_nextQuantizeDspTime)) double_t  nextQuantizeDspTime;

/// @brief Field quantizeLength, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_quantizeLength, put=__cordl_internal_set_quantizeLength)) double_t  quantizeLength;

static inline ::VROSC::NotePlayer___c__DisplayClass22_0* New_ctor() ;

/// @brief Method <Play>b__0, addr 0x171f2e4, size 0x28, virtual false, abstract: false, final false
inline bool _Play_b__0(double_t  x) ;

constexpr double_t const& __cordl_internal_get_nextQuantizeDspTime() const;

constexpr double_t& __cordl_internal_get_nextQuantizeDspTime() ;

constexpr double_t const& __cordl_internal_get_quantizeLength() const;

constexpr double_t& __cordl_internal_get_quantizeLength() ;

constexpr void __cordl_internal_set_nextQuantizeDspTime(double_t  value) ;

constexpr void __cordl_internal_set_quantizeLength(double_t  value) ;

/// @brief Method .ctor, addr 0x171ef94, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NotePlayer___c__DisplayClass22_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NotePlayer___c__DisplayClass22_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NotePlayer___c__DisplayClass22_0(NotePlayer___c__DisplayClass22_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotePlayer___c__DisplayClass22_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotePlayer___c__DisplayClass22_0(NotePlayer___c__DisplayClass22_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{963};

/// @brief Field nextQuantizeDspTime, offset: 0x10, size: 0x8, def value: None
 double_t  ___nextQuantizeDspTime;

/// @brief Field quantizeLength, offset: 0x18, size: 0x8, def value: None
 double_t  ___quantizeLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NotePlayer___c__DisplayClass22_0, ___nextQuantizeDspTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer___c__DisplayClass22_0, ___quantizeLength) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NotePlayer___c__DisplayClass22_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter, VROSC.HandType
namespace VROSC {
// Is value type: true
// CS Name: VROSC.NotePlayer/<PlayNoteQuantized>d__27
struct CORDL_TYPE NotePlayer__PlayNoteQuantized_d__27 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x171f30c, size 0x654, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x171f960, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr NotePlayer__PlayNoteQuantized_d__27() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "predictedDspTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::NotePlayer>", modifiers: "", def_value: None }, CppParam { name: "note", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "velocity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "handType", ty: "::VROSC::HandType", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr NotePlayer__PlayNoteQuantized_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, double_t  predictedDspTime, ::UnityW<::VROSC::NotePlayer>  __4__this, int32_t  note, float_t  velocity, ::VROSC::HandType  handType, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{964};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field predictedDspTime, offset: 0x28, size: 0x8, def value: None
 double_t  predictedDspTime;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::NotePlayer>  __4__this;

/// @brief Field note, offset: 0x38, size: 0x4, def value: None
 int32_t  note;

/// @brief Field velocity, offset: 0x3c, size: 0x4, def value: None
 float_t  velocity;

/// @brief Field handType, offset: 0x40, size: 0x4, def value: None
 ::VROSC::HandType  handType;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NotePlayer__PlayNoteQuantized_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer__PlayNoteQuantized_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer__PlayNoteQuantized_d__27, predictedDspTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer__PlayNoteQuantized_d__27, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer__PlayNoteQuantized_d__27, note) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer__PlayNoteQuantized_d__27, velocity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer__PlayNoteQuantized_d__27, handType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer__PlayNoteQuantized_d__27, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NotePlayer__PlayNoteQuantized_d__27, 0x50>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter, VROSC.HandType
namespace VROSC {
// Is value type: true
// CS Name: VROSC.NotePlayer/<Stop>d__28
struct CORDL_TYPE NotePlayer__Stop_d__28 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x171f96c, size 0x318, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x171fc84, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr NotePlayer__Stop_d__28() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "linkHands", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "handType", ty: "::VROSC::HandType", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::NotePlayer>", modifiers: "", def_value: None }, CppParam { name: "immediate", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr NotePlayer__Stop_d__28(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, bool  linkHands, ::VROSC::HandType  handType, ::UnityW<::VROSC::NotePlayer>  __4__this, bool  immediate, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{965};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field linkHands, offset: 0x20, size: 0x1, def value: None
 bool  linkHands;

/// @brief Field handType, offset: 0x24, size: 0x4, def value: None
 ::VROSC::HandType  handType;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::NotePlayer>  __4__this;

/// @brief Field immediate, offset: 0x30, size: 0x1, def value: None
 bool  immediate;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NotePlayer__Stop_d__28, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer__Stop_d__28, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer__Stop_d__28, linkHands) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer__Stop_d__28, handType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer__Stop_d__28, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer__Stop_d__28, immediate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer__Stop_d__28, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NotePlayer__Stop_d__28, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NotePlayer
class CORDL_TYPE NotePlayer : public ::VROSC::SignalNode {
public:
// Declarations
using _PlayNoteQuantized_d__27 = ::VROSC::NotePlayer__PlayNoteQuantized_d__27;

using _Stop_d__28 = ::VROSC::NotePlayer__Stop_d__28;

using __c__DisplayClass22_0 = ::VROSC::NotePlayer___c__DisplayClass22_0;

 __declspec(property(get=get_CurrentlyPlayingNotes)) ::ArrayW<int32_t,::Array<int32_t>*>  CurrentlyPlayingNotes;

 __declspec(property(get=get_MaxNotesPerPlayer)) int32_t  MaxNotesPerPlayer;

/// @brief Field _currentPlayingNotes, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentPlayingNotes, put=__cordl_internal_set__currentPlayingNotes)) ::ArrayW<int32_t,::Array<int32_t>*>  _currentPlayingNotes;

/// @brief Field _currentVelocity, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentVelocity, put=__cordl_internal_set__currentVelocity)) float_t  _currentVelocity;

/// @brief Field _heldNote, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__heldNote, put=__cordl_internal_set__heldNote)) int32_t  _heldNote;

/// @brief Field _heldNoteHoldTime, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__heldNoteHoldTime, put=__cordl_internal_set__heldNoteHoldTime)) float_t  _heldNoteHoldTime;

/// @brief Field _instrument, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrument, put=__cordl_internal_set__instrument)) ::UnityW<::VROSC::InstrumentController>  _instrument;

/// @brief Field _note, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__note, put=__cordl_internal_set__note)) ::VROSC::IntField*  _note;

/// @brief Field _noteOffset, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteOffset, put=__cordl_internal_set__noteOffset)) ::VROSC::IntField*  _noteOffset;

/// @brief Field _oneShot, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__oneShot, put=__cordl_internal_set__oneShot)) bool  _oneShot;

/// @brief Field _pitch, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__pitch, put=__cordl_internal_set__pitch)) float_t  _pitch;

/// @brief Field _scheduledNote, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__scheduledNote, put=__cordl_internal_set__scheduledNote)) int32_t  _scheduledNote;

/// @brief Field _scheduledNoteHoldTime, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__scheduledNoteHoldTime, put=__cordl_internal_set__scheduledNoteHoldTime)) float_t  _scheduledNoteHoldTime;

/// @brief Field _scheduledQuantizeSteps, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__scheduledQuantizeSteps, put=__cordl_internal_set__scheduledQuantizeSteps)) ::System::Collections::Generic::List_1<double_t>*  _scheduledQuantizeSteps;

/// @brief Field _scheduledStops, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__scheduledStops, put=__cordl_internal_set__scheduledStops)) int32_t  _scheduledStops;

/// @brief Field _volume, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__volume, put=__cordl_internal_set__volume)) float_t  _volume;

/// @brief Method GetNote, addr 0x171f13c, size 0x38, virtual true, abstract: false, final false
inline int32_t GetNote(::UnityEngine::Vector3  position) ;

/// @brief Method GetNotes, addr 0x171f174, size 0xa8, virtual true, abstract: false, final false
inline ::ArrayW<int32_t,::Array<int32_t>*> GetNotes(::UnityEngine::Vector3  position) ;

static inline ::VROSC::NotePlayer* New_ctor() ;

/// @brief Method NodeBegin, addr 0x171e350, size 0x18, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeEnd, addr 0x171e48c, size 0xe4, virtual true, abstract: false, final false
inline void NodeEnd(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x171ef7c, size 0x18, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

/// @brief Method Play, addr 0x171e570, size 0x3e4, virtual true, abstract: false, final false
inline void Play(::VROSC::Signal*  signal, bool  linkHands, bool  ignoreQuantize) ;

/// @brief Method PlayNote, addr 0x171f21c, size 0x60, virtual true, abstract: false, final false
inline void PlayNote(int32_t  note, float_t  velocity, double_t  predictedDspTime, ::VROSC::HandType  handType, float_t  pitch, float_t  volume) ;

/// @brief Method PlayNoteQuantized, addr 0x171ef9c, size 0xc0, virtual false, abstract: false, final false
inline void PlayNoteQuantized(int32_t  note, float_t  velocity, double_t  predictedDspTime, ::VROSC::HandType  handType) ;

/// @brief Method SetInstrument, addr 0x171f2cc, size 0x8, virtual true, abstract: false, final false
inline void SetInstrument(::VROSC::InstrumentController*  instrument) ;

/// @brief Method SetPitch, addr 0x171f2d4, size 0x8, virtual false, abstract: false, final false
inline void SetPitch(float_t  pitch) ;

/// @brief Method SetVolume, addr 0x171f2dc, size 0x8, virtual false, abstract: false, final false
inline void SetVolume(float_t  volume) ;

/// @brief Method Stop, addr 0x171ebc4, size 0xf4, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* Stop(bool  immediate, ::VROSC::HandType  handType, bool  linkHands) ;

/// @brief Method StopNote, addr 0x171f27c, size 0x50, virtual true, abstract: false, final false
inline void StopNote(int32_t  note, ::VROSC::HandType  handType) ;

/// @brief Method Update, addr 0x171d8c0, size 0x58, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __cordl_internal_get__currentPlayingNotes() const;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __cordl_internal_get__currentPlayingNotes() ;

constexpr float_t const& __cordl_internal_get__currentVelocity() const;

constexpr float_t& __cordl_internal_get__currentVelocity() ;

constexpr int32_t const& __cordl_internal_get__heldNote() const;

constexpr int32_t& __cordl_internal_get__heldNote() ;

constexpr float_t const& __cordl_internal_get__heldNoteHoldTime() const;

constexpr float_t& __cordl_internal_get__heldNoteHoldTime() ;

constexpr ::UnityW<::VROSC::InstrumentController> const& __cordl_internal_get__instrument() const;

constexpr ::UnityW<::VROSC::InstrumentController>& __cordl_internal_get__instrument() ;

constexpr ::VROSC::IntField* const& __cordl_internal_get__note() const;

constexpr ::VROSC::IntField*& __cordl_internal_get__note() ;

constexpr ::VROSC::IntField* const& __cordl_internal_get__noteOffset() const;

constexpr ::VROSC::IntField*& __cordl_internal_get__noteOffset() ;

constexpr bool const& __cordl_internal_get__oneShot() const;

constexpr bool& __cordl_internal_get__oneShot() ;

constexpr float_t const& __cordl_internal_get__pitch() const;

constexpr float_t& __cordl_internal_get__pitch() ;

constexpr int32_t const& __cordl_internal_get__scheduledNote() const;

constexpr int32_t& __cordl_internal_get__scheduledNote() ;

constexpr float_t const& __cordl_internal_get__scheduledNoteHoldTime() const;

constexpr float_t& __cordl_internal_get__scheduledNoteHoldTime() ;

constexpr ::System::Collections::Generic::List_1<double_t>* const& __cordl_internal_get__scheduledQuantizeSteps() const;

constexpr ::System::Collections::Generic::List_1<double_t>*& __cordl_internal_get__scheduledQuantizeSteps() ;

constexpr int32_t const& __cordl_internal_get__scheduledStops() const;

constexpr int32_t& __cordl_internal_get__scheduledStops() ;

constexpr float_t const& __cordl_internal_get__volume() const;

constexpr float_t& __cordl_internal_get__volume() ;

constexpr void __cordl_internal_set__currentPlayingNotes(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr void __cordl_internal_set__currentVelocity(float_t  value) ;

constexpr void __cordl_internal_set__heldNote(int32_t  value) ;

constexpr void __cordl_internal_set__heldNoteHoldTime(float_t  value) ;

constexpr void __cordl_internal_set__instrument(::UnityW<::VROSC::InstrumentController>  value) ;

constexpr void __cordl_internal_set__note(::VROSC::IntField*  value) ;

constexpr void __cordl_internal_set__noteOffset(::VROSC::IntField*  value) ;

constexpr void __cordl_internal_set__oneShot(bool  value) ;

constexpr void __cordl_internal_set__pitch(float_t  value) ;

constexpr void __cordl_internal_set__scheduledNote(int32_t  value) ;

constexpr void __cordl_internal_set__scheduledNoteHoldTime(float_t  value) ;

constexpr void __cordl_internal_set__scheduledQuantizeSteps(::System::Collections::Generic::List_1<double_t>*  value) ;

constexpr void __cordl_internal_set__scheduledStops(int32_t  value) ;

constexpr void __cordl_internal_set__volume(float_t  value) ;

/// @brief Method .ctor, addr 0x171e04c, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentlyPlayingNotes, addr 0x171ef74, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<int32_t,::Array<int32_t>*> get_CurrentlyPlayingNotes() ;

/// @brief Method get_MaxNotesPerPlayer, addr 0x171ef6c, size 0x8, virtual true, abstract: false, final false
inline int32_t get_MaxNotesPerPlayer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NotePlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NotePlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NotePlayer(NotePlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotePlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotePlayer(NotePlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{966};

/// @brief Field _instrument, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::InstrumentController>  ____instrument;

/// @brief Field _note, offset: 0x50, size: 0x8, def value: None
 ::VROSC::IntField*  ____note;

/// @brief Field _noteOffset, offset: 0x58, size: 0x8, def value: None
 ::VROSC::IntField*  ____noteOffset;

/// @brief Field _pitch, offset: 0x60, size: 0x4, def value: None
 float_t  ____pitch;

/// @brief Field _volume, offset: 0x64, size: 0x4, def value: None
 float_t  ____volume;

/// @brief Field _oneShot, offset: 0x68, size: 0x1, def value: None
 bool  ____oneShot;

/// @brief Field _currentPlayingNotes, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<int32_t,::Array<int32_t>*>  ____currentPlayingNotes;

/// @brief Field _scheduledNote, offset: 0x78, size: 0x4, def value: None
 int32_t  ____scheduledNote;

/// @brief Field _heldNote, offset: 0x7c, size: 0x4, def value: None
 int32_t  ____heldNote;

/// @brief Field _scheduledNoteHoldTime, offset: 0x80, size: 0x4, def value: None
 float_t  ____scheduledNoteHoldTime;

/// @brief Field _heldNoteHoldTime, offset: 0x84, size: 0x4, def value: None
 float_t  ____heldNoteHoldTime;

/// @brief Field _scheduledStops, offset: 0x88, size: 0x4, def value: None
 int32_t  ____scheduledStops;

/// @brief Field _scheduledQuantizeSteps, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<double_t>*  ____scheduledQuantizeSteps;

/// @brief Field _currentVelocity, offset: 0x98, size: 0x4, def value: None
 float_t  ____currentVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NotePlayer, ____instrument) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer, ____note) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer, ____noteOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer, ____pitch) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer, ____volume) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer, ____oneShot) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer, ____currentPlayingNotes) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer, ____scheduledNote) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer, ____heldNote) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer, ____scheduledNoteHoldTime) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer, ____heldNoteHoldTime) == 0x84, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer, ____scheduledStops) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer, ____scheduledQuantizeSteps) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotePlayer, ____currentVelocity) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NotePlayer, 0xa0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NotePlayer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NotePlayer*, "VROSC", "NotePlayer");
NEED_NO_BOX(::VROSC::NotePlayer___c__DisplayClass22_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NotePlayer___c__DisplayClass22_0*, "VROSC", "NotePlayer/<>c__DisplayClass22_0");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NotePlayer__PlayNoteQuantized_d__27, "VROSC", "NotePlayer/<PlayNoteQuantized>d__27");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NotePlayer__Stop_d__28, "VROSC", "NotePlayer/<Stop>d__28");
