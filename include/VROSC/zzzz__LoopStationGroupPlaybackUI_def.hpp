#pragma once
// IWYU pragma private; include "VROSC/LoopStationGroupPlaybackUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LoopStationGroupPlaybackUI)
namespace UnityEngine {
struct Color;
}
namespace VROSC {
class LoopPlayButton;
}
namespace VROSC {
class LoopPlaybackConfigOverride;
}
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class LoopStationGroup;
}
namespace VROSC {
class LoopStation;
}
namespace VROSC {
class OverridePlaybackSettingsUI;
}
// Forward declare root types
namespace VROSC {
class LoopStationGroupPlaybackUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationGroupPlaybackUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationGroupPlaybackUI
class CORDL_TYPE LoopStationGroupPlaybackUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_PlaybackConfig, put=set_PlaybackConfig)) ::VROSC::LoopPlaybackConfigOverride*  PlaybackConfig;

/// @brief Field <PlaybackConfig>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlaybackConfig_k__BackingField, put=__cordl_internal_set__PlaybackConfig_k__BackingField)) ::VROSC::LoopPlaybackConfigOverride*  _PlaybackConfig_k__BackingField;

/// @brief Field _firstLoopPlayer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstLoopPlayer, put=__cordl_internal_set__firstLoopPlayer)) ::UnityW<::VROSC::LoopPlayer>  _firstLoopPlayer;

/// @brief Field _longestLoopPlayer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__longestLoopPlayer, put=__cordl_internal_set__longestLoopPlayer)) ::UnityW<::VROSC::LoopPlayer>  _longestLoopPlayer;

/// @brief Field _loopGroup, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopGroup, put=__cordl_internal_set__loopGroup)) ::UnityW<::VROSC::LoopStationGroup>  _loopGroup;

/// @brief Field _loopStation, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopStation, put=__cordl_internal_set__loopStation)) ::UnityW<::VROSC::LoopStation>  _loopStation;

/// @brief Field _overridePlaybackSettingsUI, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__overridePlaybackSettingsUI, put=__cordl_internal_set__overridePlaybackSettingsUI)) ::UnityW<::VROSC::OverridePlaybackSettingsUI>  _overridePlaybackSettingsUI;

/// @brief Field _playButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__playButton, put=__cordl_internal_set__playButton)) ::UnityW<::VROSC::LoopPlayButton>  _playButton;

/// @brief Field _shouldUpdatePlayback, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__shouldUpdatePlayback, put=__cordl_internal_set__shouldUpdatePlayback)) bool  _shouldUpdatePlayback;

/// @brief Method ConfigChanged, addr 0x18b753c, size 0x140, virtual false, abstract: false, final false
inline void ConfigChanged() ;

/// @brief Method GetLongestLoopCurrentlyPlaying, addr 0x18b7130, size 0x1d8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopPlayer> GetLongestLoopCurrentlyPlaying() ;

/// @brief Method LoopAdded, addr 0x18b6df0, size 0x178, virtual false, abstract: false, final false
inline void LoopAdded(::VROSC::LoopPlayer*  player) ;

/// @brief Method LoopRemoved, addr 0x18b6f74, size 0x178, virtual false, abstract: false, final false
inline void LoopRemoved(::VROSC::LoopPlayer*  player) ;

static inline ::VROSC::LoopStationGroupPlaybackUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18b7308, size 0x234, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PlayToggled, addr 0x18b767c, size 0x2fc, virtual false, abstract: false, final false
inline void PlayToggled(bool  play) ;

/// @brief Method SetColor, addr 0x18b7978, size 0x1c, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method SetPlaybackConfig, addr 0x18b6dcc, size 0x24, virtual false, abstract: false, final false
inline void SetPlaybackConfig(::VROSC::LoopPlaybackConfigOverride*  playbackOverride) ;

/// @brief Method Setup, addr 0x18b6b10, size 0x2bc, virtual false, abstract: false, final false
inline void Setup(::VROSC::LoopStation*  loopStation, ::VROSC::LoopStationGroup*  loopGroup, ::VROSC::LoopPlaybackConfigOverride*  configOverride) ;

/// @brief Method Update, addr 0x18b70ec, size 0x44, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdatePlayback, addr 0x18b6f68, size 0xc, virtual false, abstract: false, final false
inline void UpdatePlayback() ;

constexpr ::VROSC::LoopPlaybackConfigOverride* const& __cordl_internal_get__PlaybackConfig_k__BackingField() const;

constexpr ::VROSC::LoopPlaybackConfigOverride*& __cordl_internal_get__PlaybackConfig_k__BackingField() ;

constexpr ::UnityW<::VROSC::LoopPlayer> const& __cordl_internal_get__firstLoopPlayer() const;

constexpr ::UnityW<::VROSC::LoopPlayer>& __cordl_internal_get__firstLoopPlayer() ;

constexpr ::UnityW<::VROSC::LoopPlayer> const& __cordl_internal_get__longestLoopPlayer() const;

constexpr ::UnityW<::VROSC::LoopPlayer>& __cordl_internal_get__longestLoopPlayer() ;

constexpr ::UnityW<::VROSC::LoopStationGroup> const& __cordl_internal_get__loopGroup() const;

constexpr ::UnityW<::VROSC::LoopStationGroup>& __cordl_internal_get__loopGroup() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__loopStation() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__loopStation() ;

constexpr ::UnityW<::VROSC::OverridePlaybackSettingsUI> const& __cordl_internal_get__overridePlaybackSettingsUI() const;

constexpr ::UnityW<::VROSC::OverridePlaybackSettingsUI>& __cordl_internal_get__overridePlaybackSettingsUI() ;

constexpr ::UnityW<::VROSC::LoopPlayButton> const& __cordl_internal_get__playButton() const;

constexpr ::UnityW<::VROSC::LoopPlayButton>& __cordl_internal_get__playButton() ;

constexpr bool const& __cordl_internal_get__shouldUpdatePlayback() const;

constexpr bool& __cordl_internal_get__shouldUpdatePlayback() ;

constexpr void __cordl_internal_set__PlaybackConfig_k__BackingField(::VROSC::LoopPlaybackConfigOverride*  value) ;

constexpr void __cordl_internal_set__firstLoopPlayer(::UnityW<::VROSC::LoopPlayer>  value) ;

constexpr void __cordl_internal_set__longestLoopPlayer(::UnityW<::VROSC::LoopPlayer>  value) ;

constexpr void __cordl_internal_set__loopGroup(::UnityW<::VROSC::LoopStationGroup>  value) ;

constexpr void __cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value) ;

constexpr void __cordl_internal_set__overridePlaybackSettingsUI(::UnityW<::VROSC::OverridePlaybackSettingsUI>  value) ;

constexpr void __cordl_internal_set__playButton(::UnityW<::VROSC::LoopPlayButton>  value) ;

constexpr void __cordl_internal_set__shouldUpdatePlayback(bool  value) ;

/// @brief Method .ctor, addr 0x18b7994, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PlaybackConfig, addr 0x18b6b08, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LoopPlaybackConfigOverride* get_PlaybackConfig() ;

/// @brief Method set_PlaybackConfig, addr 0x18b6b00, size 0x8, virtual false, abstract: false, final false
inline void set_PlaybackConfig(::VROSC::LoopPlaybackConfigOverride*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationGroupPlaybackUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationGroupPlaybackUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationGroupPlaybackUI(LoopStationGroupPlaybackUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationGroupPlaybackUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationGroupPlaybackUI(LoopStationGroupPlaybackUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{729};

/// @brief Field _overridePlaybackSettingsUI, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::OverridePlaybackSettingsUI>  ____overridePlaybackSettingsUI;

/// @brief Field _playButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayButton>  ____playButton;

/// @brief Field <PlaybackConfig>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::VROSC::LoopPlaybackConfigOverride*  ____PlaybackConfig_k__BackingField;

/// @brief Field _loopGroup, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationGroup>  ____loopGroup;

/// @brief Field _loopStation, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____loopStation;

/// @brief Field _firstLoopPlayer, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayer>  ____firstLoopPlayer;

/// @brief Field _longestLoopPlayer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayer>  ____longestLoopPlayer;

/// @brief Field _shouldUpdatePlayback, offset: 0x58, size: 0x1, def value: None
 bool  ____shouldUpdatePlayback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationGroupPlaybackUI, ____overridePlaybackSettingsUI) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupPlaybackUI, ____playButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupPlaybackUI, ____PlaybackConfig_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupPlaybackUI, ____loopGroup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupPlaybackUI, ____loopStation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupPlaybackUI, ____firstLoopPlayer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupPlaybackUI, ____longestLoopPlayer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupPlaybackUI, ____shouldUpdatePlayback) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationGroupPlaybackUI, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationGroupPlaybackUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationGroupPlaybackUI*, "VROSC", "LoopStationGroupPlaybackUI");
