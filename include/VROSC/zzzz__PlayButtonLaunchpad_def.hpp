#pragma once
// IWYU pragma private; include "VROSC/PlayButtonLaunchpad.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__Launchpad_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayButtonLaunchpad)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class LaunchpadSpawner;
}
namespace VROSC {
class LoopPlayButton;
}
namespace VROSC {
class LoopPlaybackConfig;
}
namespace VROSC {
class LoopPlaybackSettingsToggle;
}
namespace VROSC {
class LoopPlaybackSettingsUI;
}
namespace VROSC {
class OverridePlaybackSettingsUI;
}
// Forward declare root types
namespace VROSC {
class PlayButtonLaunchpad;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PlayButtonLaunchpad);
// Dependencies VROSC.Launchpad
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PlayButtonLaunchpad
class CORDL_TYPE PlayButtonLaunchpad : public ::VROSC::Launchpad {
public:
// Declarations
/// @brief Field _loopPlayButton, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopPlayButton, put=__cordl_internal_set__loopPlayButton)) ::UnityW<::VROSC::LoopPlayButton>  _loopPlayButton;

/// @brief Field _loopPlaybackSettingsUI, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopPlaybackSettingsUI, put=__cordl_internal_set__loopPlaybackSettingsUI)) ::UnityW<::VROSC::LoopPlaybackSettingsUI>  _loopPlaybackSettingsUI;

/// @brief Field _overridePlaybackSettingsUI, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__overridePlaybackSettingsUI, put=__cordl_internal_set__overridePlaybackSettingsUI)) ::UnityW<::VROSC::OverridePlaybackSettingsUI>  _overridePlaybackSettingsUI;

/// @brief Field _slidersHolder, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__slidersHolder, put=__cordl_internal_set__slidersHolder)) ::UnityW<::UnityEngine::Transform>  _slidersHolder;

/// @brief Field _startIcon, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__startIcon, put=__cordl_internal_set__startIcon)) ::UnityW<::UnityEngine::GameObject>  _startIcon;

/// @brief Field _stopIcon, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__stopIcon, put=__cordl_internal_set__stopIcon)) ::UnityW<::UnityEngine::GameObject>  _stopIcon;

/// @brief Field _timingMesh, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__timingMesh, put=__cordl_internal_set__timingMesh)) ::UnityW<::UnityEngine::Renderer>  _timingMesh;

/// @brief Field _toggleButton, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggleButton, put=__cordl_internal_set__toggleButton)) ::UnityW<::VROSC::LoopPlaybackSettingsToggle>  _toggleButton;

/// @brief Field _updaterMesh, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__updaterMesh, put=__cordl_internal_set__updaterMesh)) ::UnityW<::UnityEngine::Renderer>  _updaterMesh;

/// @brief Method AssignButton, addr 0x17177a8, size 0x180, virtual false, abstract: false, final false
inline void AssignButton(::VROSC::LoopPlayButton*  loopPlayButton) ;

/// @brief Method AssignConfig, addr 0x17174a8, size 0x138, virtual false, abstract: false, final false
inline void AssignConfig(::VROSC::LoopPlaybackConfig*  config) ;

/// @brief Method LoopIsPlaying, addr 0x1717cc8, size 0x50, virtual false, abstract: false, final false
inline void LoopIsPlaying(bool  isPlaying) ;

static inline ::VROSC::PlayButtonLaunchpad* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1717304, size 0x1a4, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Setup, addr 0x17172c8, size 0x3c, virtual true, abstract: false, final false
inline void Setup(::VROSC::LaunchpadSpawner*  launchpadSpawner, ::StringW  id, ::StringW  targetID, ::StringW  displayName, ::UnityEngine::Color  color) ;

/// @brief Method Unassign, addr 0x17175e0, size 0x1c8, virtual false, abstract: false, final false
inline void Unassign() ;

/// @brief Method Update, addr 0x1717a54, size 0x274, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateLoopPlayer, addr 0x1717928, size 0x12c, virtual false, abstract: false, final false
inline void UpdateLoopPlayer() ;

constexpr ::UnityW<::VROSC::LoopPlayButton> const& __cordl_internal_get__loopPlayButton() const;

constexpr ::UnityW<::VROSC::LoopPlayButton>& __cordl_internal_get__loopPlayButton() ;

constexpr ::UnityW<::VROSC::LoopPlaybackSettingsUI> const& __cordl_internal_get__loopPlaybackSettingsUI() const;

constexpr ::UnityW<::VROSC::LoopPlaybackSettingsUI>& __cordl_internal_get__loopPlaybackSettingsUI() ;

constexpr ::UnityW<::VROSC::OverridePlaybackSettingsUI> const& __cordl_internal_get__overridePlaybackSettingsUI() const;

constexpr ::UnityW<::VROSC::OverridePlaybackSettingsUI>& __cordl_internal_get__overridePlaybackSettingsUI() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__slidersHolder() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__slidersHolder() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__startIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__startIcon() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__stopIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__stopIcon() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__timingMesh() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__timingMesh() ;

constexpr ::UnityW<::VROSC::LoopPlaybackSettingsToggle> const& __cordl_internal_get__toggleButton() const;

constexpr ::UnityW<::VROSC::LoopPlaybackSettingsToggle>& __cordl_internal_get__toggleButton() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__updaterMesh() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__updaterMesh() ;

constexpr void __cordl_internal_set__loopPlayButton(::UnityW<::VROSC::LoopPlayButton>  value) ;

constexpr void __cordl_internal_set__loopPlaybackSettingsUI(::UnityW<::VROSC::LoopPlaybackSettingsUI>  value) ;

constexpr void __cordl_internal_set__overridePlaybackSettingsUI(::UnityW<::VROSC::OverridePlaybackSettingsUI>  value) ;

constexpr void __cordl_internal_set__slidersHolder(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__startIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__stopIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__timingMesh(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__toggleButton(::UnityW<::VROSC::LoopPlaybackSettingsToggle>  value) ;

constexpr void __cordl_internal_set__updaterMesh(::UnityW<::UnityEngine::Renderer>  value) ;

/// @brief Method .ctor, addr 0x1717d18, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayButtonLaunchpad() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayButtonLaunchpad", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayButtonLaunchpad(PlayButtonLaunchpad && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayButtonLaunchpad", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayButtonLaunchpad(PlayButtonLaunchpad const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{915};

/// @brief Field _loopPlayButton, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayButton>  ____loopPlayButton;

/// @brief Field _updaterMesh, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____updaterMesh;

/// @brief Field _timingMesh, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____timingMesh;

/// @brief Field _startIcon, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____startIcon;

/// @brief Field _stopIcon, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____stopIcon;

/// @brief Field _slidersHolder, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____slidersHolder;

/// @brief Field _overridePlaybackSettingsUI, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::VROSC::OverridePlaybackSettingsUI>  ____overridePlaybackSettingsUI;

/// @brief Field _loopPlaybackSettingsUI, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlaybackSettingsUI>  ____loopPlaybackSettingsUI;

/// @brief Field _toggleButton, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlaybackSettingsToggle>  ____toggleButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PlayButtonLaunchpad, ____loopPlayButton) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlayButtonLaunchpad, ____updaterMesh) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlayButtonLaunchpad, ____timingMesh) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlayButtonLaunchpad, ____startIcon) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlayButtonLaunchpad, ____stopIcon) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlayButtonLaunchpad, ____slidersHolder) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlayButtonLaunchpad, ____overridePlaybackSettingsUI) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlayButtonLaunchpad, ____loopPlaybackSettingsUI) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlayButtonLaunchpad, ____toggleButton) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PlayButtonLaunchpad, 0xe0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PlayButtonLaunchpad);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PlayButtonLaunchpad*, "VROSC", "PlayButtonLaunchpad");
