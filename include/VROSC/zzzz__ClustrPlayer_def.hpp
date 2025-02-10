#pragma once
// IWYU pragma private; include "VROSC/ClustrPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__NoteBoardPlayer_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClustrPlayer)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class ClustrDataController;
}
namespace VROSC {
struct ClustrPlayer_Chord;
}
namespace VROSC {
struct ClustrPlayer_FifthsInversion;
}
namespace VROSC {
struct ClustrPlayer_StrumDirection;
}
namespace VROSC {
struct ClustrPlayer__StrumChord_d__19;
}
namespace VROSC {
class ClustrPlayer___c__DisplayClass18_0;
}
namespace VROSC {
struct HandType;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
struct ClustrPlayer_Chord;
}
namespace VROSC {
struct ClustrPlayer_FifthsInversion;
}
namespace VROSC {
struct ClustrPlayer_StrumDirection;
}
namespace VROSC {
class ClustrPlayer;
}
namespace VROSC {
class ClustrPlayer___c__DisplayClass18_0;
}
namespace VROSC {
struct ClustrPlayer__StrumChord_d__19;
}
// Write type traits
MARK_VAL_T(::VROSC::ClustrPlayer_Chord);
MARK_VAL_T(::VROSC::ClustrPlayer_FifthsInversion);
MARK_VAL_T(::VROSC::ClustrPlayer_StrumDirection);
MARK_REF_PTR_T(::VROSC::ClustrPlayer);
MARK_REF_PTR_T(::VROSC::ClustrPlayer___c__DisplayClass18_0);
MARK_VAL_T(::VROSC::ClustrPlayer__StrumChord_d__19);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.ClustrPlayer/Chord
struct CORDL_TYPE ClustrPlayer_Chord {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ClustrPlayer_Chord_Unwrapped
enum struct __ClustrPlayer_Chord_Unwrapped : int32_t {
__E_Sus2 = static_cast<int32_t>(0x0),
__E_Triad = static_cast<int32_t>(0x1),
__E_Sus4 = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ClustrPlayer_Chord_Unwrapped () const noexcept {
return static_cast<__ClustrPlayer_Chord_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ClustrPlayer_Chord() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ClustrPlayer_Chord(int32_t  value__) noexcept;

/// @brief Field Sus2 value: I32(0)
static ::VROSC::ClustrPlayer_Chord const Sus2;

/// @brief Field Sus4 value: I32(2)
static ::VROSC::ClustrPlayer_Chord const Sus4;

/// @brief Field Triad value: I32(1)
static ::VROSC::ClustrPlayer_Chord const Triad;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{946};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ClustrPlayer_Chord, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ClustrPlayer_Chord, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.ClustrPlayer/StrumDirection
struct CORDL_TYPE ClustrPlayer_StrumDirection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ClustrPlayer_StrumDirection_Unwrapped
enum struct __ClustrPlayer_StrumDirection_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Up = static_cast<int32_t>(0x1),
__E_Down = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ClustrPlayer_StrumDirection_Unwrapped () const noexcept {
return static_cast<__ClustrPlayer_StrumDirection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ClustrPlayer_StrumDirection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ClustrPlayer_StrumDirection(int32_t  value__) noexcept;

/// @brief Field Down value: I32(2)
static ::VROSC::ClustrPlayer_StrumDirection const Down;

/// @brief Field None value: I32(0)
static ::VROSC::ClustrPlayer_StrumDirection const None;

/// @brief Field Up value: I32(1)
static ::VROSC::ClustrPlayer_StrumDirection const Up;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{947};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ClustrPlayer_StrumDirection, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ClustrPlayer_StrumDirection, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.ClustrPlayer/FifthsInversion
struct CORDL_TYPE ClustrPlayer_FifthsInversion {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ClustrPlayer_FifthsInversion_Unwrapped
enum struct __ClustrPlayer_FifthsInversion_Unwrapped : int32_t {
__E_V_First = static_cast<int32_t>(0x0),
__E_I_Basic = static_cast<int32_t>(0x1),
__E_IV_Second = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ClustrPlayer_FifthsInversion_Unwrapped () const noexcept {
return static_cast<__ClustrPlayer_FifthsInversion_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ClustrPlayer_FifthsInversion() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ClustrPlayer_FifthsInversion(int32_t  value__) noexcept;

/// @brief Field IV_Second value: I32(2)
static ::VROSC::ClustrPlayer_FifthsInversion const IV_Second;

/// @brief Field I_Basic value: I32(1)
static ::VROSC::ClustrPlayer_FifthsInversion const I_Basic;

/// @brief Field V_First value: I32(0)
static ::VROSC::ClustrPlayer_FifthsInversion const V_First;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{948};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ClustrPlayer_FifthsInversion, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ClustrPlayer_FifthsInversion, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object, VROSC.HandType
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ClustrPlayer/<>c__DisplayClass18_0
class CORDL_TYPE ClustrPlayer___c__DisplayClass18_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::ClustrPlayer>  __4__this;

/// @brief Field handType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_handType, put=__cordl_internal_set_handType)) ::VROSC::HandType  handType;

/// @brief Field pitch, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitch, put=__cordl_internal_set_pitch)) float_t  pitch;

/// @brief Field predictedDspTime, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_predictedDspTime, put=__cordl_internal_set_predictedDspTime)) double_t  predictedDspTime;

/// @brief Field velocity, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) float_t  velocity;

/// @brief Field volume, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_volume, put=__cordl_internal_set_volume)) float_t  volume;

static inline ::VROSC::ClustrPlayer___c__DisplayClass18_0* New_ctor() ;

/// @brief Method <PlayNote>b__0, addr 0x171c49c, size 0xb0, virtual false, abstract: false, final false
inline void _PlayNote_b__0() ;

constexpr ::UnityW<::VROSC::ClustrPlayer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::ClustrPlayer>& __cordl_internal_get___4__this() ;

constexpr ::VROSC::HandType const& __cordl_internal_get_handType() const;

constexpr ::VROSC::HandType& __cordl_internal_get_handType() ;

constexpr float_t const& __cordl_internal_get_pitch() const;

constexpr float_t& __cordl_internal_get_pitch() ;

constexpr double_t const& __cordl_internal_get_predictedDspTime() const;

constexpr double_t& __cordl_internal_get_predictedDspTime() ;

constexpr float_t const& __cordl_internal_get_velocity() const;

constexpr float_t& __cordl_internal_get_velocity() ;

constexpr float_t const& __cordl_internal_get_volume() const;

constexpr float_t& __cordl_internal_get_volume() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::ClustrPlayer>  value) ;

constexpr void __cordl_internal_set_handType(::VROSC::HandType  value) ;

constexpr void __cordl_internal_set_pitch(float_t  value) ;

constexpr void __cordl_internal_set_predictedDspTime(double_t  value) ;

constexpr void __cordl_internal_set_velocity(float_t  value) ;

constexpr void __cordl_internal_set_volume(float_t  value) ;

/// @brief Method .ctor, addr 0x171c25c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClustrPlayer___c__DisplayClass18_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClustrPlayer___c__DisplayClass18_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClustrPlayer___c__DisplayClass18_0(ClustrPlayer___c__DisplayClass18_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClustrPlayer___c__DisplayClass18_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClustrPlayer___c__DisplayClass18_0(ClustrPlayer___c__DisplayClass18_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{949};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::ClustrPlayer>  _____4__this;

/// @brief Field velocity, offset: 0x18, size: 0x4, def value: None
 float_t  ___velocity;

/// @brief Field predictedDspTime, offset: 0x20, size: 0x8, def value: None
 double_t  ___predictedDspTime;

/// @brief Field handType, offset: 0x28, size: 0x4, def value: None
 ::VROSC::HandType  ___handType;

/// @brief Field pitch, offset: 0x2c, size: 0x4, def value: None
 float_t  ___pitch;

/// @brief Field volume, offset: 0x30, size: 0x4, def value: None
 float_t  ___volume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ClustrPlayer___c__DisplayClass18_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrPlayer___c__DisplayClass18_0, ___velocity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrPlayer___c__DisplayClass18_0, ___predictedDspTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrPlayer___c__DisplayClass18_0, ___handType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrPlayer___c__DisplayClass18_0, ___pitch) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrPlayer___c__DisplayClass18_0, ___volume) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ClustrPlayer___c__DisplayClass18_0, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken, VROSC.HandType
namespace VROSC {
// Is value type: true
// CS Name: VROSC.ClustrPlayer/<StrumChord>d__19
struct CORDL_TYPE ClustrPlayer__StrumChord_d__19 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x171c54c, size 0x73c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x171cc88, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ClustrPlayer__StrumChord_d__19() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::ClustrPlayer>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "secondNote", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "velocity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "predictedDspTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "handType", ty: "::VROSC::HandType", modifiers: "", def_value: None }, CppParam { name: "pitch", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "volume", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "thirdNote", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstNote", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_strumTime_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr ClustrPlayer__StrumChord_d__19(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::ClustrPlayer>  __4__this, ::System::Threading::CancellationToken  cancellationToken, int32_t  secondNote, float_t  velocity, double_t  predictedDspTime, ::VROSC::HandType  handType, float_t  pitch, float_t  volume, int32_t  thirdNote, int32_t  firstNote, int32_t  _strumTime_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{950};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::ClustrPlayer>  __4__this;

/// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field secondNote, offset: 0x38, size: 0x4, def value: None
 int32_t  secondNote;

/// @brief Field velocity, offset: 0x3c, size: 0x4, def value: None
 float_t  velocity;

/// @brief Field predictedDspTime, offset: 0x40, size: 0x8, def value: None
 double_t  predictedDspTime;

/// @brief Field handType, offset: 0x48, size: 0x4, def value: None
 ::VROSC::HandType  handType;

/// @brief Field pitch, offset: 0x4c, size: 0x4, def value: None
 float_t  pitch;

/// @brief Field volume, offset: 0x50, size: 0x4, def value: None
 float_t  volume;

/// @brief Field thirdNote, offset: 0x54, size: 0x4, def value: None
 int32_t  thirdNote;

/// @brief Field firstNote, offset: 0x58, size: 0x4, def value: None
 int32_t  firstNote;

/// @brief Field <strumTime>5__2, offset: 0x5c, size: 0x4, def value: None
 int32_t  _strumTime_5__2;

/// @brief Field <>u__1, offset: 0x60, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ClustrPlayer__StrumChord_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrPlayer__StrumChord_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrPlayer__StrumChord_d__19, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrPlayer__StrumChord_d__19, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrPlayer__StrumChord_d__19, secondNote) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrPlayer__StrumChord_d__19, velocity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrPlayer__StrumChord_d__19, predictedDspTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrPlayer__StrumChord_d__19, handType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrPlayer__StrumChord_d__19, pitch) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrPlayer__StrumChord_d__19, volume) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrPlayer__StrumChord_d__19, thirdNote) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrPlayer__StrumChord_d__19, firstNote) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrPlayer__StrumChord_d__19, _strumTime_5__2) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrPlayer__StrumChord_d__19, __u__1) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ClustrPlayer__StrumChord_d__19, 0x68>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.ClustrPlayer::Chord, VROSC.ClustrPlayer::FifthsInversion, VROSC.ClustrPlayer::StrumDirection, VROSC.NoteBoardPlayer
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ClustrPlayer
class CORDL_TYPE ClustrPlayer : public ::VROSC::NoteBoardPlayer {
public:
// Declarations
using Chord = ::VROSC::ClustrPlayer_Chord;

using FifthsInversion = ::VROSC::ClustrPlayer_FifthsInversion;

using StrumDirection = ::VROSC::ClustrPlayer_StrumDirection;

using _StrumChord_d__19 = ::VROSC::ClustrPlayer__StrumChord_d__19;

using __c__DisplayClass18_0 = ::VROSC::ClustrPlayer___c__DisplayClass18_0;

 __declspec(property(get=get_MaxNotesPerPlayer)) int32_t  MaxNotesPerPlayer;

/// @brief Field _chord, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get__chord, put=__cordl_internal_set__chord)) ::VROSC::ClustrPlayer_Chord  _chord;

 __declspec(property(get=get__dataController)) ::VROSC::ClustrDataController*  _dataController;

/// @brief Field _fifthsInversion, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get__fifthsInversion, put=__cordl_internal_set__fifthsInversion)) ::VROSC::ClustrPlayer_FifthsInversion  _fifthsInversion;

/// @brief Field _hoveredNotes, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__hoveredNotes, put=__cordl_internal_set__hoveredNotes)) ::ArrayW<int32_t,::Array<int32_t>*>  _hoveredNotes;

/// @brief Field _strumCancellationTokenSource, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__strumCancellationTokenSource, put=__cordl_internal_set__strumCancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _strumCancellationTokenSource;

/// @brief Field _strumDirection, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get__strumDirection, put=__cordl_internal_set__strumDirection)) ::VROSC::ClustrPlayer_StrumDirection  _strumDirection;

/// @brief Field _useAsBass, offset 0xdc, size 0x1 
 __declspec(property(get=__cordl_internal_get__useAsBass, put=__cordl_internal_set__useAsBass)) bool  _useAsBass;

/// @brief Method Awake, addr 0x171b6c8, size 0x7c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetNotes, addr 0x171b908, size 0x2b0, virtual true, abstract: false, final false
inline ::ArrayW<int32_t,::Array<int32_t>*> GetNotes(::UnityEngine::Vector3  position) ;

/// @brief Method GetQuadrant, addr 0x171b744, size 0x174, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2Int GetQuadrant(::UnityEngine::Vector3  position) ;

static inline ::VROSC::ClustrPlayer* New_ctor() ;

/// @brief Method NodeStay, addr 0x171bc60, size 0x58, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

/// @brief Method Play, addr 0x171bcb8, size 0xac, virtual true, abstract: false, final false
inline void Play(::VROSC::Signal*  signal, bool  linkHands, bool  ignoreQuantize) ;

/// @brief Method PlayNote, addr 0x171be40, size 0x41c, virtual true, abstract: false, final false
inline void PlayNote(int32_t  note, float_t  velocity, double_t  predictedDspTime, ::VROSC::HandType  handType, float_t  pitch, float_t  volume) ;

/// @brief Method StopNote, addr 0x171c35c, size 0xbc, virtual true, abstract: false, final false
inline void StopNote(int32_t  note, ::VROSC::HandType  handType) ;

/// @brief Method StrumChord, addr 0x171c264, size 0xf8, virtual false, abstract: false, final false
inline void StrumChord(int32_t  firstNote, int32_t  secondNote, int32_t  thirdNote, float_t  velocity, double_t  predictedDspTime, ::VROSC::HandType  handType, float_t  pitch, float_t  volume, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::VROSC::ClustrPlayer_Chord const& __cordl_internal_get__chord() const;

constexpr ::VROSC::ClustrPlayer_Chord& __cordl_internal_get__chord() ;

constexpr ::VROSC::ClustrPlayer_FifthsInversion const& __cordl_internal_get__fifthsInversion() const;

constexpr ::VROSC::ClustrPlayer_FifthsInversion& __cordl_internal_get__fifthsInversion() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __cordl_internal_get__hoveredNotes() const;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __cordl_internal_get__hoveredNotes() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__strumCancellationTokenSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__strumCancellationTokenSource() ;

constexpr ::VROSC::ClustrPlayer_StrumDirection const& __cordl_internal_get__strumDirection() const;

constexpr ::VROSC::ClustrPlayer_StrumDirection& __cordl_internal_get__strumDirection() ;

constexpr bool const& __cordl_internal_get__useAsBass() const;

constexpr bool& __cordl_internal_get__useAsBass() ;

constexpr void __cordl_internal_set__chord(::VROSC::ClustrPlayer_Chord  value) ;

constexpr void __cordl_internal_set__fifthsInversion(::VROSC::ClustrPlayer_FifthsInversion  value) ;

constexpr void __cordl_internal_set__hoveredNotes(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr void __cordl_internal_set__strumCancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set__strumDirection(::VROSC::ClustrPlayer_StrumDirection  value) ;

constexpr void __cordl_internal_set__useAsBass(bool  value) ;

/// @brief Method .ctor, addr 0x171c418, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MaxNotesPerPlayer, addr 0x171b640, size 0x8, virtual true, abstract: false, final false
inline int32_t get_MaxNotesPerPlayer() ;

/// @brief Method get__dataController, addr 0x171b648, size 0x80, virtual false, abstract: false, final false
inline ::VROSC::ClustrDataController* get__dataController() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClustrPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClustrPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClustrPlayer(ClustrPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClustrPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClustrPlayer(ClustrPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{951};

/// @brief Field _strumDirection, offset: 0xd8, size: 0x4, def value: None
 ::VROSC::ClustrPlayer_StrumDirection  ____strumDirection;

/// @brief Field _useAsBass, offset: 0xdc, size: 0x1, def value: None
 bool  ____useAsBass;

/// @brief Field _chord, offset: 0xe0, size: 0x4, def value: None
 ::VROSC::ClustrPlayer_Chord  ____chord;

/// @brief Field _fifthsInversion, offset: 0xe4, size: 0x4, def value: None
 ::VROSC::ClustrPlayer_FifthsInversion  ____fifthsInversion;

/// @brief Field _strumCancellationTokenSource, offset: 0xe8, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ____strumCancellationTokenSource;

/// @brief Field _hoveredNotes, offset: 0xf0, size: 0x8, def value: None
 ::ArrayW<int32_t,::Array<int32_t>*>  ____hoveredNotes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ClustrPlayer, ____strumDirection) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrPlayer, ____useAsBass) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrPlayer, ____chord) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrPlayer, ____fifthsInversion) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrPlayer, ____strumCancellationTokenSource) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrPlayer, ____hoveredNotes) == 0xf0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ClustrPlayer, 0xf8>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ClustrPlayer_Chord, "VROSC", "ClustrPlayer/Chord");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ClustrPlayer_FifthsInversion, "VROSC", "ClustrPlayer/FifthsInversion");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ClustrPlayer_StrumDirection, "VROSC", "ClustrPlayer/StrumDirection");
NEED_NO_BOX(::VROSC::ClustrPlayer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ClustrPlayer*, "VROSC", "ClustrPlayer");
NEED_NO_BOX(::VROSC::ClustrPlayer___c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ClustrPlayer___c__DisplayClass18_0*, "VROSC", "ClustrPlayer/<>c__DisplayClass18_0");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ClustrPlayer__StrumChord_d__19, "VROSC", "ClustrPlayer/<StrumChord>d__19");
