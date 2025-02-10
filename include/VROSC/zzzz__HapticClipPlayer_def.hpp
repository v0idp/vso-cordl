#pragma once
// IWYU pragma private; include "VROSC/HapticClipPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__SignalNode_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HapticClipPlayer)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace VROSC {
struct HandType;
}
namespace VROSC {
struct HapticClipPlayer_HapticHand;
}
namespace VROSC {
struct HapticClipPlayer__StartHaptics_d__12;
}
namespace VROSC {
class SignalControllerInfo;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
struct HapticClipPlayer_HapticHand;
}
namespace VROSC {
class HapticClipPlayer;
}
namespace VROSC {
struct HapticClipPlayer__StartHaptics_d__12;
}
// Write type traits
MARK_VAL_T(::VROSC::HapticClipPlayer_HapticHand);
MARK_REF_PTR_T(::VROSC::HapticClipPlayer);
MARK_VAL_T(::VROSC::HapticClipPlayer__StartHaptics_d__12);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.HapticClipPlayer/HapticHand
struct CORDL_TYPE HapticClipPlayer_HapticHand {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HapticClipPlayer_HapticHand_Unwrapped
enum struct __HapticClipPlayer_HapticHand_Unwrapped : int32_t {
__E_SignalOrigin = static_cast<int32_t>(0x0),
__E_Left = static_cast<int32_t>(0x1),
__E_Right = static_cast<int32_t>(0x2),
__E_Both = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HapticClipPlayer_HapticHand_Unwrapped () const noexcept {
return static_cast<__HapticClipPlayer_HapticHand_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HapticClipPlayer_HapticHand() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HapticClipPlayer_HapticHand(int32_t  value__) noexcept;

/// @brief Field Both value: I32(3)
static ::VROSC::HapticClipPlayer_HapticHand const Both;

/// @brief Field Left value: I32(1)
static ::VROSC::HapticClipPlayer_HapticHand const Left;

/// @brief Field Right value: I32(2)
static ::VROSC::HapticClipPlayer_HapticHand const Right;

/// @brief Field SignalOrigin value: I32(0)
static ::VROSC::HapticClipPlayer_HapticHand const SignalOrigin;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{954};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::HapticClipPlayer_HapticHand, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::HapticClipPlayer_HapticHand, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.HapticClipPlayer/<StartHaptics>d__12
struct CORDL_TYPE HapticClipPlayer__StartHaptics_d__12 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x171d1f8, size 0x2a8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x171d4a0, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr HapticClipPlayer__StartHaptics_d__12() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "dspTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::HapticClipPlayer>", modifiers: "", def_value: None }, CppParam { name: "signalControllerInfo", ty: "::VROSC::SignalControllerInfo*", modifiers: "", def_value: None }, CppParam { name: "signalAmplitude", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr HapticClipPlayer__StartHaptics_d__12(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, double_t  dspTime, ::UnityW<::VROSC::HapticClipPlayer>  __4__this, ::VROSC::SignalControllerInfo*  signalControllerInfo, float_t  signalAmplitude, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{955};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field dspTime, offset: 0x28, size: 0x8, def value: None
 double_t  dspTime;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::HapticClipPlayer>  __4__this;

/// @brief Field signalControllerInfo, offset: 0x38, size: 0x8, def value: None
 ::VROSC::SignalControllerInfo*  signalControllerInfo;

/// @brief Field signalAmplitude, offset: 0x40, size: 0x4, def value: None
 float_t  signalAmplitude;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::HapticClipPlayer__StartHaptics_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::HapticClipPlayer__StartHaptics_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::HapticClipPlayer__StartHaptics_d__12, dspTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::HapticClipPlayer__StartHaptics_d__12, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::HapticClipPlayer__StartHaptics_d__12, signalControllerInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::HapticClipPlayer__StartHaptics_d__12, signalAmplitude) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::HapticClipPlayer__StartHaptics_d__12, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::HapticClipPlayer__StartHaptics_d__12, 0x50>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.HandType, VROSC.HapticClipPlayer::HapticHand, VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.HapticClipPlayer
class CORDL_TYPE HapticClipPlayer : public ::VROSC::SignalNode {
public:
// Declarations
using HapticHand = ::VROSC::HapticClipPlayer_HapticHand;

using _StartHaptics_d__12 = ::VROSC::HapticClipPlayer__StartHaptics_d__12;

/// @brief Field _amplitude, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__amplitude, put=__cordl_internal_set__amplitude)) float_t  _amplitude;

/// @brief Field _decayCounter, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__decayCounter, put=__cordl_internal_set__decayCounter)) float_t  _decayCounter;

/// @brief Field _decayCurve, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__decayCurve, put=__cordl_internal_set__decayCurve)) ::UnityEngine::AnimationCurve*  _decayCurve;

/// @brief Field _decayTime, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__decayTime, put=__cordl_internal_set__decayTime)) float_t  _decayTime;

/// @brief Field _frequency, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__frequency, put=__cordl_internal_set__frequency)) float_t  _frequency;

/// @brief Field _isMetronome, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get__isMetronome, put=__cordl_internal_set__isMetronome)) bool  _isMetronome;

/// @brief Field _lastHand, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastHand, put=__cordl_internal_set__lastHand)) ::VROSC::HandType  _lastHand;

/// @brief Field _lastSignalAmplitude, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastSignalAmplitude, put=__cordl_internal_set__lastSignalAmplitude)) float_t  _lastSignalAmplitude;

/// @brief Field _playOnHand, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__playOnHand, put=__cordl_internal_set__playOnHand)) ::VROSC::HapticClipPlayer_HapticHand  _playOnHand;

/// @brief Method GenerateHaptics, addr 0x171d094, size 0xa8, virtual false, abstract: false, final false
inline void GenerateHaptics(float_t  amplitude, float_t  frequency, ::VROSC::HandType  hand) ;

static inline ::VROSC::HapticClipPlayer* New_ctor() ;

/// @brief Method NodeBegin, addr 0x171cf98, size 0x24, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x171d070, size 0x24, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

/// @brief Method StartHaptics, addr 0x171cfbc, size 0xb4, virtual false, abstract: false, final false
inline void StartHaptics(float_t  signalAmplitude, ::VROSC::SignalControllerInfo*  signalControllerInfo, double_t  dspTime) ;

/// @brief Method Update, addr 0x171d13c, size 0x74, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__amplitude() const;

constexpr float_t& __cordl_internal_get__amplitude() ;

constexpr float_t const& __cordl_internal_get__decayCounter() const;

constexpr float_t& __cordl_internal_get__decayCounter() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__decayCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__decayCurve() ;

constexpr float_t const& __cordl_internal_get__decayTime() const;

constexpr float_t& __cordl_internal_get__decayTime() ;

constexpr float_t const& __cordl_internal_get__frequency() const;

constexpr float_t& __cordl_internal_get__frequency() ;

constexpr bool const& __cordl_internal_get__isMetronome() const;

constexpr bool& __cordl_internal_get__isMetronome() ;

constexpr ::VROSC::HandType const& __cordl_internal_get__lastHand() const;

constexpr ::VROSC::HandType& __cordl_internal_get__lastHand() ;

constexpr float_t const& __cordl_internal_get__lastSignalAmplitude() const;

constexpr float_t& __cordl_internal_get__lastSignalAmplitude() ;

constexpr ::VROSC::HapticClipPlayer_HapticHand const& __cordl_internal_get__playOnHand() const;

constexpr ::VROSC::HapticClipPlayer_HapticHand& __cordl_internal_get__playOnHand() ;

constexpr void __cordl_internal_set__amplitude(float_t  value) ;

constexpr void __cordl_internal_set__decayCounter(float_t  value) ;

constexpr void __cordl_internal_set__decayCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__decayTime(float_t  value) ;

constexpr void __cordl_internal_set__frequency(float_t  value) ;

constexpr void __cordl_internal_set__isMetronome(bool  value) ;

constexpr void __cordl_internal_set__lastHand(::VROSC::HandType  value) ;

constexpr void __cordl_internal_set__lastSignalAmplitude(float_t  value) ;

constexpr void __cordl_internal_set__playOnHand(::VROSC::HapticClipPlayer_HapticHand  value) ;

/// @brief Method .ctor, addr 0x171d1b0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HapticClipPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HapticClipPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HapticClipPlayer(HapticClipPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HapticClipPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HapticClipPlayer(HapticClipPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{956};

/// @brief Field _amplitude, offset: 0x48, size: 0x4, def value: None
 float_t  ____amplitude;

/// @brief Field _frequency, offset: 0x4c, size: 0x4, def value: None
 float_t  ____frequency;

/// @brief Field _decayTime, offset: 0x50, size: 0x4, def value: None
 float_t  ____decayTime;

/// @brief Field _decayCurve, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____decayCurve;

/// @brief Field _playOnHand, offset: 0x60, size: 0x4, def value: None
 ::VROSC::HapticClipPlayer_HapticHand  ____playOnHand;

/// @brief Field _isMetronome, offset: 0x64, size: 0x1, def value: None
 bool  ____isMetronome;

/// @brief Field _decayCounter, offset: 0x68, size: 0x4, def value: None
 float_t  ____decayCounter;

/// @brief Field _lastSignalAmplitude, offset: 0x6c, size: 0x4, def value: None
 float_t  ____lastSignalAmplitude;

/// @brief Field _lastHand, offset: 0x70, size: 0x4, def value: None
 ::VROSC::HandType  ____lastHand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::HapticClipPlayer, ____amplitude) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::HapticClipPlayer, ____frequency) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::HapticClipPlayer, ____decayTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::HapticClipPlayer, ____decayCurve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::HapticClipPlayer, ____playOnHand) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::HapticClipPlayer, ____isMetronome) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::HapticClipPlayer, ____decayCounter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::HapticClipPlayer, ____lastSignalAmplitude) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::VROSC::HapticClipPlayer, ____lastHand) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::HapticClipPlayer, 0x78>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HapticClipPlayer_HapticHand, "VROSC", "HapticClipPlayer/HapticHand");
NEED_NO_BOX(::VROSC::HapticClipPlayer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HapticClipPlayer*, "VROSC", "HapticClipPlayer");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HapticClipPlayer__StartHaptics_d__12, "VROSC", "HapticClipPlayer/<StartHaptics>d__12");
