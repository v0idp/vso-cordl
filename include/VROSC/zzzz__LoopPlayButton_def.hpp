#pragma once
// IWYU pragma private; include "VROSC/LoopPlayButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LoopPlayButton)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class LaunchPadEffectOnSignal;
}
namespace VROSC {
class Launchpad;
}
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class LooperProgressSliderUpdater;
}
namespace VROSC {
class UIToggle;
}
// Forward declare root types
namespace VROSC {
class LoopPlayButton;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopPlayButton);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlayButton
class CORDL_TYPE LoopPlayButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ConnectedPlayer, put=set_ConnectedPlayer)) ::UnityW<::VROSC::LoopPlayer>  ConnectedPlayer;

/// @brief Field OnNewLoopPlayerAssigned, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnNewLoopPlayerAssigned, put=__cordl_internal_set_OnNewLoopPlayerAssigned)) ::System::Action*  OnNewLoopPlayerAssigned;

/// @brief Field OnPlayToggleChanged, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayToggleChanged, put=__cordl_internal_set_OnPlayToggleChanged)) ::System::Action_1<bool>*  OnPlayToggleChanged;

/// @brief Field OnPlayingChanged, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayingChanged, put=__cordl_internal_set_OnPlayingChanged)) ::System::Action_1<bool>*  OnPlayingChanged;

 __declspec(property(get=get_ProgressUpdater)) ::UnityW<::VROSC::LooperProgressSliderUpdater>  ProgressUpdater;

/// @brief Field <ConnectedPlayer>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ConnectedPlayer_k__BackingField, put=__cordl_internal_set__ConnectedPlayer_k__BackingField)) ::UnityW<::VROSC::LoopPlayer>  _ConnectedPlayer_k__BackingField;

/// @brief Field _padVisual, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__padVisual, put=__cordl_internal_set__padVisual)) ::UnityW<::VROSC::LaunchPadEffectOnSignal>  _padVisual;

/// @brief Field _playButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__playButton, put=__cordl_internal_set__playButton)) ::UnityW<::VROSC::UIToggle>  _playButton;

/// @brief Field _playing, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__playing, put=__cordl_internal_set__playing)) bool  _playing;

/// @brief Field _progressUpdater, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__progressUpdater, put=__cordl_internal_set__progressUpdater)) ::UnityW<::VROSC::LooperProgressSliderUpdater>  _progressUpdater;

/// @brief Field _visualizationColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__visualizationColor, put=__cordl_internal_set__visualizationColor)) ::UnityEngine::Color  _visualizationColor;

/// @brief Method Awake, addr 0x189d81c, size 0x25c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetIsPlaying, addr 0x189dc6c, size 0x94, virtual false, abstract: false, final false
inline bool GetIsPlaying() ;

/// @brief Method LaunchpadHit, addr 0x189dba0, size 0x50, virtual false, abstract: false, final false
inline void LaunchpadHit(::VROSC::Launchpad*  launchpad) ;

static inline ::VROSC::LoopPlayButton* New_ctor() ;

/// @brief Method OnButtonPressed, addr 0x189db50, size 0x28, virtual false, abstract: false, final false
inline void OnButtonPressed(::VROSC::InputDevice*  device, bool  play) ;

/// @brief Method OnDestroy, addr 0x189da78, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetColor, addr 0x189df00, size 0x80, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method SetDisabled, addr 0x189ddb4, size 0x6c, virtual false, abstract: false, final false
inline void SetDisabled(bool  disabled) ;

/// @brief Method ShowAsMuted, addr 0x189de20, size 0x20, virtual false, abstract: false, final false
inline void ShowAsMuted(bool  muted) ;

/// @brief Method TogglePlay, addr 0x189db78, size 0x28, virtual false, abstract: false, final false
inline void TogglePlay() ;

/// @brief Method TrackLoopPlayer, addr 0x189dbf0, size 0x7c, virtual false, abstract: false, final false
inline void TrackLoopPlayer(::VROSC::LoopPlayer*  loopPlayer) ;

/// @brief Method Update, addr 0x189de40, size 0x9c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdatePlaying, addr 0x189dd00, size 0xb4, virtual false, abstract: false, final false
inline void UpdatePlaying(bool  isPlaying, bool  force) ;

constexpr ::System::Action* const& __cordl_internal_get_OnNewLoopPlayerAssigned() const;

constexpr ::System::Action*& __cordl_internal_get_OnNewLoopPlayerAssigned() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnPlayToggleChanged() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnPlayToggleChanged() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnPlayingChanged() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnPlayingChanged() ;

constexpr ::UnityW<::VROSC::LoopPlayer> const& __cordl_internal_get__ConnectedPlayer_k__BackingField() const;

constexpr ::UnityW<::VROSC::LoopPlayer>& __cordl_internal_get__ConnectedPlayer_k__BackingField() ;

constexpr ::UnityW<::VROSC::LaunchPadEffectOnSignal> const& __cordl_internal_get__padVisual() const;

constexpr ::UnityW<::VROSC::LaunchPadEffectOnSignal>& __cordl_internal_get__padVisual() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__playButton() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__playButton() ;

constexpr bool const& __cordl_internal_get__playing() const;

constexpr bool& __cordl_internal_get__playing() ;

constexpr ::UnityW<::VROSC::LooperProgressSliderUpdater> const& __cordl_internal_get__progressUpdater() const;

constexpr ::UnityW<::VROSC::LooperProgressSliderUpdater>& __cordl_internal_get__progressUpdater() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__visualizationColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__visualizationColor() ;

constexpr void __cordl_internal_set_OnNewLoopPlayerAssigned(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnPlayToggleChanged(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnPlayingChanged(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set__ConnectedPlayer_k__BackingField(::UnityW<::VROSC::LoopPlayer>  value) ;

constexpr void __cordl_internal_set__padVisual(::UnityW<::VROSC::LaunchPadEffectOnSignal>  value) ;

constexpr void __cordl_internal_set__playButton(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__playing(bool  value) ;

constexpr void __cordl_internal_set__progressUpdater(::UnityW<::VROSC::LooperProgressSliderUpdater>  value) ;

constexpr void __cordl_internal_set__visualizationColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x189df80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ConnectedPlayer, addr 0x189d814, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopPlayer> get_ConnectedPlayer() ;

/// @brief Method get_ProgressUpdater, addr 0x189d804, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LooperProgressSliderUpdater> get_ProgressUpdater() ;

/// @brief Method set_ConnectedPlayer, addr 0x189d80c, size 0x8, virtual false, abstract: false, final false
inline void set_ConnectedPlayer(::VROSC::LoopPlayer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlayButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlayButton(LoopPlayButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlayButton(LoopPlayButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{667};

/// @brief Field <ConnectedPlayer>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayer>  ____ConnectedPlayer_k__BackingField;

/// @brief Field _playButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____playButton;

/// @brief Field _visualizationColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____visualizationColor;

/// @brief Field _progressUpdater, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::LooperProgressSliderUpdater>  ____progressUpdater;

/// @brief Field _padVisual, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::LaunchPadEffectOnSignal>  ____padVisual;

/// @brief Field OnPlayToggleChanged, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnPlayToggleChanged;

/// @brief Field OnPlayingChanged, offset: 0x58, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnPlayingChanged;

/// @brief Field OnNewLoopPlayerAssigned, offset: 0x60, size: 0x8, def value: None
 ::System::Action*  ___OnNewLoopPlayerAssigned;

/// @brief Field _playing, offset: 0x68, size: 0x1, def value: None
 bool  ____playing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlayButton, ____ConnectedPlayer_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayButton, ____playButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayButton, ____visualizationColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayButton, ____progressUpdater) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayButton, ____padVisual) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayButton, ___OnPlayToggleChanged) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayButton, ___OnPlayingChanged) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayButton, ___OnNewLoopPlayerAssigned) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayButton, ____playing) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlayButton, 0x70>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopPlayButton);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayButton*, "VROSC", "LoopPlayButton");
