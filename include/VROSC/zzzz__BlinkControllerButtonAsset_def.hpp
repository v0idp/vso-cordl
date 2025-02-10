#pragma once
// IWYU pragma private; include "VROSC/BlinkControllerButtonAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__BlinkControllerButtonBehaviour_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BlinkControllerButtonAsset)
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class BlinkControllerButtonBehaviour;
}
// Forward declare root types
namespace VROSC {
class BlinkControllerButtonAsset;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::BlinkControllerButtonAsset);
// Dependencies UnityEngine.Color, UnityEngine.Playables.PlayableAsset, VROSC.BlinkControllerButtonBehaviour::EventAction, VROSC.HandType, VROSC.TriggerButton
namespace VROSC {
// Is value type: false
// CS Name: VROSC.BlinkControllerButtonAsset
class CORDL_TYPE BlinkControllerButtonAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Field _button, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__button, put=__cordl_internal_set__button)) ::VROSC::TriggerButton  _button;

/// @brief Field _color, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__color, put=__cordl_internal_set__color)) ::UnityEngine::Color  _color;

/// @brief Field _fadeTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeTime, put=__cordl_internal_set__fadeTime)) float_t  _fadeTime;

/// @brief Field _hand, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::VROSC::HandType  _hand;

/// @brief Field _onAssetStartAction, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__onAssetStartAction, put=__cordl_internal_set__onAssetStartAction)) ::VROSC::BlinkControllerButtonBehaviour_EventAction  _onAssetStartAction;

/// @brief Field _onAssetStopAction, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__onAssetStopAction, put=__cordl_internal_set__onAssetStopAction)) ::VROSC::BlinkControllerButtonBehaviour_EventAction  _onAssetStopAction;

/// @brief Field _onTimelineStartAction, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__onTimelineStartAction, put=__cordl_internal_set__onTimelineStartAction)) ::VROSC::BlinkControllerButtonBehaviour_EventAction  _onTimelineStartAction;

/// @brief Field _onTimelineStopAction, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__onTimelineStopAction, put=__cordl_internal_set__onTimelineStopAction)) ::VROSC::BlinkControllerButtonBehaviour_EventAction  _onTimelineStopAction;

/// @brief Field settings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::VROSC::BlinkControllerButtonBehaviour*  settings;

/// @brief Method CreatePlayable, addr 0x176eb04, size 0x10c, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner) ;

static inline ::VROSC::BlinkControllerButtonAsset* New_ctor() ;

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

constexpr ::VROSC::BlinkControllerButtonBehaviour* const& __cordl_internal_get_settings() const;

constexpr ::VROSC::BlinkControllerButtonBehaviour*& __cordl_internal_get_settings() ;

constexpr void __cordl_internal_set__button(::VROSC::TriggerButton  value) ;

constexpr void __cordl_internal_set__color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__fadeTime(float_t  value) ;

constexpr void __cordl_internal_set__hand(::VROSC::HandType  value) ;

constexpr void __cordl_internal_set__onAssetStartAction(::VROSC::BlinkControllerButtonBehaviour_EventAction  value) ;

constexpr void __cordl_internal_set__onAssetStopAction(::VROSC::BlinkControllerButtonBehaviour_EventAction  value) ;

constexpr void __cordl_internal_set__onTimelineStartAction(::VROSC::BlinkControllerButtonBehaviour_EventAction  value) ;

constexpr void __cordl_internal_set__onTimelineStopAction(::VROSC::BlinkControllerButtonBehaviour_EventAction  value) ;

constexpr void __cordl_internal_set_settings(::VROSC::BlinkControllerButtonBehaviour*  value) ;

/// @brief Method .ctor, addr 0x176ed70, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BlinkControllerButtonAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BlinkControllerButtonAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BlinkControllerButtonAsset(BlinkControllerButtonAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BlinkControllerButtonAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BlinkControllerButtonAsset(BlinkControllerButtonAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1228};

/// @brief Field settings, offset: 0x18, size: 0x8, def value: None
 ::VROSC::BlinkControllerButtonBehaviour*  ___settings;

/// @brief Field _hand, offset: 0x20, size: 0x4, def value: None
 ::VROSC::HandType  ____hand;

/// @brief Field _button, offset: 0x24, size: 0x4, def value: None
 ::VROSC::TriggerButton  ____button;

/// @brief Field _color, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ____color;

/// @brief Field _fadeTime, offset: 0x38, size: 0x4, def value: None
 float_t  ____fadeTime;

/// @brief Field _onAssetStartAction, offset: 0x3c, size: 0x4, def value: None
 ::VROSC::BlinkControllerButtonBehaviour_EventAction  ____onAssetStartAction;

/// @brief Field _onAssetStopAction, offset: 0x40, size: 0x4, def value: None
 ::VROSC::BlinkControllerButtonBehaviour_EventAction  ____onAssetStopAction;

/// @brief Field _onTimelineStartAction, offset: 0x44, size: 0x4, def value: None
 ::VROSC::BlinkControllerButtonBehaviour_EventAction  ____onTimelineStartAction;

/// @brief Field _onTimelineStopAction, offset: 0x48, size: 0x4, def value: None
 ::VROSC::BlinkControllerButtonBehaviour_EventAction  ____onTimelineStopAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BlinkControllerButtonAsset, ___settings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::BlinkControllerButtonAsset, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::BlinkControllerButtonAsset, ____button) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::BlinkControllerButtonAsset, ____color) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::BlinkControllerButtonAsset, ____fadeTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::BlinkControllerButtonAsset, ____onAssetStartAction) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::BlinkControllerButtonAsset, ____onAssetStopAction) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::BlinkControllerButtonAsset, ____onTimelineStartAction) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::BlinkControllerButtonAsset, ____onTimelineStopAction) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BlinkControllerButtonAsset, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::BlinkControllerButtonAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BlinkControllerButtonAsset*, "VROSC", "BlinkControllerButtonAsset");
