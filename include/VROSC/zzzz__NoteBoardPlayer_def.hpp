#pragma once
// IWYU pragma private; include "VROSC/NoteBoardPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__NoteBoardNote_def.hpp"
#include "VROSC/zzzz__NoteBoard_def.hpp"
#include "VROSC/zzzz__NotePlayer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteBoardPlayer)
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
struct NoteBoardPlayer_PlayBehaviour;
}
namespace VROSC {
struct NoteBoardPlayer__Stop_d__20;
}
namespace VROSC {
class NoteBoard;
}
namespace VROSC {
class NoteFieldNoteData;
}
namespace VROSC {
class PlayBehaviourField;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
struct NoteBoardPlayer_PlayBehaviour;
}
namespace VROSC {
class NoteBoardPlayer;
}
namespace VROSC {
struct NoteBoardPlayer__Stop_d__20;
}
// Write type traits
MARK_VAL_T(::VROSC::NoteBoardPlayer_PlayBehaviour);
MARK_REF_PTR_T(::VROSC::NoteBoardPlayer);
MARK_VAL_T(::VROSC::NoteBoardPlayer__Stop_d__20);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.NoteBoardPlayer/PlayBehaviour
struct CORDL_TYPE NoteBoardPlayer_PlayBehaviour {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NoteBoardPlayer_PlayBehaviour_Unwrapped
enum struct __NoteBoardPlayer_PlayBehaviour_Unwrapped : int32_t {
__E_Slide = static_cast<int32_t>(0x0),
__E_Hold = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NoteBoardPlayer_PlayBehaviour_Unwrapped () const noexcept {
return static_cast<__NoteBoardPlayer_PlayBehaviour_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NoteBoardPlayer_PlayBehaviour() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NoteBoardPlayer_PlayBehaviour(int32_t  value__) noexcept;

/// @brief Field Hold value: I32(1)
static ::VROSC::NoteBoardPlayer_PlayBehaviour const Hold;

/// @brief Field Slide value: I32(0)
static ::VROSC::NoteBoardPlayer_PlayBehaviour const Slide;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{960};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoardPlayer_PlayBehaviour, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoardPlayer_PlayBehaviour, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter, VROSC.HandType
namespace VROSC {
// Is value type: true
// CS Name: VROSC.NoteBoardPlayer/<Stop>d__20
struct CORDL_TYPE NoteBoardPlayer__Stop_d__20 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x171ecb8, size 0x24c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x171ef04, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr NoteBoardPlayer__Stop_d__20() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::NoteBoardPlayer>", modifiers: "", def_value: None }, CppParam { name: "linkHands", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "immediate", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "handType", ty: "::VROSC::HandType", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr NoteBoardPlayer__Stop_d__20(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::VROSC::NoteBoardPlayer>  __4__this, bool  linkHands, bool  immediate, ::VROSC::HandType  handType, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{961};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardPlayer>  __4__this;

/// @brief Field linkHands, offset: 0x28, size: 0x1, def value: None
 bool  linkHands;

/// @brief Field immediate, offset: 0x29, size: 0x1, def value: None
 bool  immediate;

/// @brief Field handType, offset: 0x2c, size: 0x4, def value: None
 ::VROSC::HandType  handType;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoardPlayer__Stop_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardPlayer__Stop_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardPlayer__Stop_d__20, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardPlayer__Stop_d__20, linkHands) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardPlayer__Stop_d__20, immediate) == 0x29, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardPlayer__Stop_d__20, handType) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardPlayer__Stop_d__20, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoardPlayer__Stop_d__20, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.NoteBoard::PlayAxis, VROSC.NoteBoardNote::Coloring, VROSC.NotePlayer
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteBoardPlayer
class CORDL_TYPE NoteBoardPlayer : public ::VROSC::NotePlayer {
public:
// Declarations
using PlayBehaviour = ::VROSC::NoteBoardPlayer_PlayBehaviour;

using _Stop_d__20 = ::VROSC::NoteBoardPlayer__Stop_d__20;

 __declspec(property(get=get_Instrument)) ::UnityW<::VROSC::InstrumentController>  Instrument;

 __declspec(property(get=get_RequireOrigin)) bool  RequireOrigin;

/// @brief Field _avoidTritone, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get__avoidTritone, put=__cordl_internal_set__avoidTritone)) bool  _avoidTritone;

/// @brief Field _coloring, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get__coloring, put=__cordl_internal_set__coloring)) ::VROSC::NoteBoardNote_Coloring  _coloring;

/// @brief Field _currentPlayingNoteField, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentPlayingNoteField, put=__cordl_internal_set__currentPlayingNoteField)) ::VROSC::NoteFieldNoteData*  _currentPlayingNoteField;

/// @brief Field _noteBoard, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteBoard, put=__cordl_internal_set__noteBoard)) ::UnityW<::VROSC::NoteBoard>  _noteBoard;

/// @brief Field _octave, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__octave, put=__cordl_internal_set__octave)) ::VROSC::IntField*  _octave;

/// @brief Field _playAxis, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__playAxis, put=__cordl_internal_set__playAxis)) ::VROSC::NoteBoard_PlayAxis  _playAxis;

/// @brief Field _playBehaviour, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__playBehaviour, put=__cordl_internal_set__playBehaviour)) ::VROSC::PlayBehaviourField*  _playBehaviour;

/// @brief Field _scaleOffset, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__scaleOffset, put=__cordl_internal_set__scaleOffset)) ::VROSC::IntField*  _scaleOffset;

/// @brief Method GetNote, addr 0x171e954, size 0x100, virtual true, abstract: false, final false
inline int32_t GetNote(::UnityEngine::Vector3  position) ;

static inline ::VROSC::NoteBoardPlayer* New_ctor() ;

/// @brief Method NodeBegin, addr 0x171e314, size 0x3c, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeEnd, addr 0x171e44c, size 0x40, virtual true, abstract: false, final false
inline void NodeEnd(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x171e3e8, size 0x64, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

/// @brief Method Play, addr 0x171bd64, size 0xb8, virtual true, abstract: false, final false
inline void Play(::VROSC::Signal*  signal, bool  linkHands, bool  ignoreQuantize) ;

/// @brief Method Stop, addr 0x171eac4, size 0xf4, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* Stop(bool  immediate, ::VROSC::HandType  handType, bool  linkHands) ;

/// @brief Method Update, addr 0x171e1c8, size 0x70, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateCurrentPlayingNotefield, addr 0x171e368, size 0x80, virtual false, abstract: false, final false
inline void UpdateCurrentPlayingNotefield(::VROSC::Signal*  signal) ;

constexpr bool const& __cordl_internal_get__avoidTritone() const;

constexpr bool& __cordl_internal_get__avoidTritone() ;

constexpr ::VROSC::NoteBoardNote_Coloring const& __cordl_internal_get__coloring() const;

constexpr ::VROSC::NoteBoardNote_Coloring& __cordl_internal_get__coloring() ;

constexpr ::VROSC::NoteFieldNoteData* const& __cordl_internal_get__currentPlayingNoteField() const;

constexpr ::VROSC::NoteFieldNoteData*& __cordl_internal_get__currentPlayingNoteField() ;

constexpr ::UnityW<::VROSC::NoteBoard> const& __cordl_internal_get__noteBoard() const;

constexpr ::UnityW<::VROSC::NoteBoard>& __cordl_internal_get__noteBoard() ;

constexpr ::VROSC::IntField* const& __cordl_internal_get__octave() const;

constexpr ::VROSC::IntField*& __cordl_internal_get__octave() ;

constexpr ::VROSC::NoteBoard_PlayAxis const& __cordl_internal_get__playAxis() const;

constexpr ::VROSC::NoteBoard_PlayAxis& __cordl_internal_get__playAxis() ;

constexpr ::VROSC::PlayBehaviourField* const& __cordl_internal_get__playBehaviour() const;

constexpr ::VROSC::PlayBehaviourField*& __cordl_internal_get__playBehaviour() ;

constexpr ::VROSC::IntField* const& __cordl_internal_get__scaleOffset() const;

constexpr ::VROSC::IntField*& __cordl_internal_get__scaleOffset() ;

constexpr void __cordl_internal_set__avoidTritone(bool  value) ;

constexpr void __cordl_internal_set__coloring(::VROSC::NoteBoardNote_Coloring  value) ;

constexpr void __cordl_internal_set__currentPlayingNoteField(::VROSC::NoteFieldNoteData*  value) ;

constexpr void __cordl_internal_set__noteBoard(::UnityW<::VROSC::NoteBoard>  value) ;

constexpr void __cordl_internal_set__octave(::VROSC::IntField*  value) ;

constexpr void __cordl_internal_set__playAxis(::VROSC::NoteBoard_PlayAxis  value) ;

constexpr void __cordl_internal_set__playBehaviour(::VROSC::PlayBehaviourField*  value) ;

constexpr void __cordl_internal_set__scaleOffset(::VROSC::IntField*  value) ;

/// @brief Method <>n__0, addr 0x171ebb8, size 0xc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* __n__0(bool  immediate, ::VROSC::HandType  handType, bool  linkHands) ;

/// @brief Method .ctor, addr 0x171c498, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Instrument, addr 0x171e1c0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::InstrumentController> get_Instrument() ;

/// @brief Method get_RequireOrigin, addr 0x171e1b8, size 0x8, virtual true, abstract: false, final false
inline bool get_RequireOrigin() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteBoardPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteBoardPlayer(NoteBoardPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteBoardPlayer(NoteBoardPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{962};

/// @brief Field _noteBoard, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoard>  ____noteBoard;

/// @brief Field _playAxis, offset: 0xa8, size: 0x4, def value: None
 ::VROSC::NoteBoard_PlayAxis  ____playAxis;

/// @brief Field _coloring, offset: 0xac, size: 0x4, def value: None
 ::VROSC::NoteBoardNote_Coloring  ____coloring;

/// @brief Field _octave, offset: 0xb0, size: 0x8, def value: None
 ::VROSC::IntField*  ____octave;

/// @brief Field _playBehaviour, offset: 0xb8, size: 0x8, def value: None
 ::VROSC::PlayBehaviourField*  ____playBehaviour;

/// @brief Field _scaleOffset, offset: 0xc0, size: 0x8, def value: None
 ::VROSC::IntField*  ____scaleOffset;

/// @brief Field _avoidTritone, offset: 0xc8, size: 0x1, def value: None
 bool  ____avoidTritone;

/// @brief Field _currentPlayingNoteField, offset: 0xd0, size: 0x8, def value: None
 ::VROSC::NoteFieldNoteData*  ____currentPlayingNoteField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoardPlayer, ____noteBoard) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardPlayer, ____playAxis) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardPlayer, ____coloring) == 0xac, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardPlayer, ____octave) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardPlayer, ____playBehaviour) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardPlayer, ____scaleOffset) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardPlayer, ____avoidTritone) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardPlayer, ____currentPlayingNoteField) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoardPlayer, 0xd8>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardPlayer_PlayBehaviour, "VROSC", "NoteBoardPlayer/PlayBehaviour");
NEED_NO_BOX(::VROSC::NoteBoardPlayer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardPlayer*, "VROSC", "NoteBoardPlayer");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardPlayer__Stop_d__20, "VROSC", "NoteBoardPlayer/<Stop>d__20");
