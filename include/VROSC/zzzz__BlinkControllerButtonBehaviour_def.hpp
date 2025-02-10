#pragma once
// IWYU pragma private; include "VROSC/BlinkControllerButtonBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BlinkControllerButtonBehaviour)
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC {
struct BlinkControllerButtonBehaviour_EventAction;
}
namespace VROSC {
struct HandType;
}
namespace VROSC {
struct TriggerButton;
}
namespace VROSC {
struct TutorialEvent;
}
// Forward declare root types
namespace VROSC {
struct BlinkControllerButtonBehaviour_EventAction;
}
namespace VROSC {
class BlinkControllerButtonBehaviour;
}
// Write type traits
MARK_VAL_T(::VROSC::BlinkControllerButtonBehaviour_EventAction);
MARK_REF_PTR_T(::VROSC::BlinkControllerButtonBehaviour);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.BlinkControllerButtonBehaviour/EventAction
struct CORDL_TYPE BlinkControllerButtonBehaviour_EventAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BlinkControllerButtonBehaviour_EventAction_Unwrapped
enum struct __BlinkControllerButtonBehaviour_EventAction_Unwrapped : int32_t {
__E_Nothing = static_cast<int32_t>(0x0),
__E_Start = static_cast<int32_t>(0x1),
__E_StopWithFade = static_cast<int32_t>(0x2),
__E_InstantStop = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BlinkControllerButtonBehaviour_EventAction_Unwrapped () const noexcept {
return static_cast<__BlinkControllerButtonBehaviour_EventAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BlinkControllerButtonBehaviour_EventAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BlinkControllerButtonBehaviour_EventAction(int32_t  value__) noexcept;

/// @brief Field InstantStop value: I32(3)
static ::VROSC::BlinkControllerButtonBehaviour_EventAction const InstantStop;

/// @brief Field Nothing value: I32(0)
static ::VROSC::BlinkControllerButtonBehaviour_EventAction const Nothing;

/// @brief Field Start value: I32(1)
static ::VROSC::BlinkControllerButtonBehaviour_EventAction const Start;

/// @brief Field StopWithFade value: I32(2)
static ::VROSC::BlinkControllerButtonBehaviour_EventAction const StopWithFade;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1229};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BlinkControllerButtonBehaviour_EventAction, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BlinkControllerButtonBehaviour_EventAction, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Color, UnityEngine.Playables.PlayableBehaviour, VROSC.BlinkControllerButtonBehaviour::EventAction, VROSC.HandType, VROSC.TriggerButton
namespace VROSC {
// Is value type: false
// CS Name: VROSC.BlinkControllerButtonBehaviour
class CORDL_TYPE BlinkControllerButtonBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
using EventAction = ::VROSC::BlinkControllerButtonBehaviour_EventAction;

/// @brief Field _button, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__button, put=__cordl_internal_set__button)) ::VROSC::TriggerButton  _button;

/// @brief Field _color, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__color, put=__cordl_internal_set__color)) ::UnityEngine::Color  _color;

/// @brief Field _fadeTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeTime, put=__cordl_internal_set__fadeTime)) float_t  _fadeTime;

/// @brief Field _hand, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::VROSC::HandType  _hand;

/// @brief Field _onAssetStartAction, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__onAssetStartAction, put=__cordl_internal_set__onAssetStartAction)) ::VROSC::BlinkControllerButtonBehaviour_EventAction  _onAssetStartAction;

/// @brief Field _onAssetStopAction, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__onAssetStopAction, put=__cordl_internal_set__onAssetStopAction)) ::VROSC::BlinkControllerButtonBehaviour_EventAction  _onAssetStopAction;

/// @brief Field _onTimelineStartAction, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__onTimelineStartAction, put=__cordl_internal_set__onTimelineStartAction)) ::VROSC::BlinkControllerButtonBehaviour_EventAction  _onTimelineStartAction;

/// @brief Field _onTimelineStopAction, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__onTimelineStopAction, put=__cordl_internal_set__onTimelineStopAction)) ::VROSC::BlinkControllerButtonBehaviour_EventAction  _onTimelineStopAction;

/// @brief Field _playing, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__playing, put=__cordl_internal_set__playing)) bool  _playing;

/// @brief Method Finalize, addr 0x176ed90, size 0x188, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::VROSC::BlinkControllerButtonBehaviour* New_ctor() ;

/// @brief Method OnBehaviourPause, addr 0x176f0a8, size 0x170, virtual true, abstract: false, final false
inline void OnBehaviourPause(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info) ;

/// @brief Method OnBehaviourPlay, addr 0x176f068, size 0x40, virtual true, abstract: false, final false
inline void OnBehaviourPlay(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info) ;

/// @brief Method OnGraphStart, addr 0x176f028, size 0x20, virtual true, abstract: false, final false
inline void OnGraphStart(::UnityEngine::Playables::Playable  playable) ;

/// @brief Method OnGraphStop, addr 0x176f048, size 0x20, virtual true, abstract: false, final false
inline void OnGraphStop(::UnityEngine::Playables::Playable  playable) ;

/// @brief Method OnTutorialEvent, addr 0x176ef18, size 0x14, virtual false, abstract: false, final false
inline void OnTutorialEvent(::VROSC::TutorialEvent  tutorialEvent) ;

/// @brief Method ProcessEventAction, addr 0x176f000, size 0x28, virtual false, abstract: false, final false
inline void ProcessEventAction(::VROSC::BlinkControllerButtonBehaviour_EventAction  eventAction) ;

/// @brief Method ProcessFrame, addr 0x176efc0, size 0x40, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method Setup, addr 0x176ec10, size 0x160, virtual false, abstract: false, final false
inline void Setup(::VROSC::HandType  hand, ::VROSC::TriggerButton  button, ::UnityEngine::Color  color, float_t  fadeTime, ::VROSC::BlinkControllerButtonBehaviour_EventAction  onAssetStartAction, ::VROSC::BlinkControllerButtonBehaviour_EventAction  onAssetStopAction, ::VROSC::BlinkControllerButtonBehaviour_EventAction  onTimelineStartAction, ::VROSC::BlinkControllerButtonBehaviour_EventAction  onTimelineStopAction) ;

/// @brief Method StartBlinking, addr 0x176f218, size 0xa0, virtual false, abstract: false, final false
inline void StartBlinking() ;

/// @brief Method StopBlinking, addr 0x176ef2c, size 0x94, virtual false, abstract: false, final false
inline void StopBlinking(float_t  time) ;

constexpr ::VROSC::TriggerButton const& __cordl_internal_get__button() const;

constexpr ::VROSC::TriggerButton& __cordl_internal_get__button() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__color() ;

constexpr float_t const& __cordl_internal_get__fadeTime() const;

constexpr float_t& __cordl_internal_get__fadeTime() ;

constexpr ::VROSC::HandType const& __cordl_internal_get__hand() const;

constexpr ::VROSC::HandType& __cordl_internal_get__hand() ;

constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction const& __cordl_internal_get__onAssetStartAction() const;

constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction& __cordl_internal_get__onAssetStartAction() ;

constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction const& __cordl_internal_get__onAssetStopAction() const;

constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction& __cordl_internal_get__onAssetStopAction() ;

constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction const& __cordl_internal_get__onTimelineStartAction() const;

constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction& __cordl_internal_get__onTimelineStartAction() ;

constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction const& __cordl_internal_get__onTimelineStopAction() const;

constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction& __cordl_internal_get__onTimelineStopAction() ;

constexpr bool const& __cordl_internal_get__playing() const;

constexpr bool& __cordl_internal_get__playing() ;

constexpr void __cordl_internal_set__button(::VROSC::TriggerButton  value) ;

constexpr void __cordl_internal_set__color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__fadeTime(float_t  value) ;

constexpr void __cordl_internal_set__hand(::VROSC::HandType  value) ;

constexpr void __cordl_internal_set__onAssetStartAction(::VROSC::BlinkControllerButtonBehaviour_EventAction  value) ;

constexpr void __cordl_internal_set__onAssetStopAction(::VROSC::BlinkControllerButtonBehaviour_EventAction  value) ;

constexpr void __cordl_internal_set__onTimelineStartAction(::VROSC::BlinkControllerButtonBehaviour_EventAction  value) ;

constexpr void __cordl_internal_set__onTimelineStopAction(::VROSC::BlinkControllerButtonBehaviour_EventAction  value) ;

constexpr void __cordl_internal_set__playing(bool  value) ;

/// @brief Method .ctor, addr 0x176f2b8, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BlinkControllerButtonBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BlinkControllerButtonBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BlinkControllerButtonBehaviour(BlinkControllerButtonBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BlinkControllerButtonBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BlinkControllerButtonBehaviour(BlinkControllerButtonBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1230};

/// @brief Field _hand, offset: 0x10, size: 0x4, def value: None
 ::VROSC::HandType  ____hand;

/// @brief Field _button, offset: 0x14, size: 0x4, def value: None
 ::VROSC::TriggerButton  ____button;

/// @brief Field _color, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  ____color;

/// @brief Field _fadeTime, offset: 0x28, size: 0x4, def value: None
 float_t  ____fadeTime;

/// @brief Field _onAssetStartAction, offset: 0x2c, size: 0x4, def value: None
 ::VROSC::BlinkControllerButtonBehaviour_EventAction  ____onAssetStartAction;

/// @brief Field _onAssetStopAction, offset: 0x30, size: 0x4, def value: None
 ::VROSC::BlinkControllerButtonBehaviour_EventAction  ____onAssetStopAction;

/// @brief Field _onTimelineStartAction, offset: 0x34, size: 0x4, def value: None
 ::VROSC::BlinkControllerButtonBehaviour_EventAction  ____onTimelineStartAction;

/// @brief Field _onTimelineStopAction, offset: 0x38, size: 0x4, def value: None
 ::VROSC::BlinkControllerButtonBehaviour_EventAction  ____onTimelineStopAction;

/// @brief Field _playing, offset: 0x3c, size: 0x1, def value: None
 bool  ____playing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BlinkControllerButtonBehaviour, ____hand) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::BlinkControllerButtonBehaviour, ____button) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::BlinkControllerButtonBehaviour, ____color) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::BlinkControllerButtonBehaviour, ____fadeTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::BlinkControllerButtonBehaviour, ____onAssetStartAction) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::BlinkControllerButtonBehaviour, ____onAssetStopAction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::BlinkControllerButtonBehaviour, ____onTimelineStartAction) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::BlinkControllerButtonBehaviour, ____onTimelineStopAction) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::BlinkControllerButtonBehaviour, ____playing) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BlinkControllerButtonBehaviour, 0x40>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BlinkControllerButtonBehaviour_EventAction, "VROSC", "BlinkControllerButtonBehaviour/EventAction");
NEED_NO_BOX(::VROSC::BlinkControllerButtonBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BlinkControllerButtonBehaviour*, "VROSC", "BlinkControllerButtonBehaviour");
