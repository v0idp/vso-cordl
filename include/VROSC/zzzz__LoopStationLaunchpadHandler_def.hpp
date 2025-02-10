#pragma once
// IWYU pragma private; include "VROSC/LoopStationLaunchpadHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LoopStationLaunchpadHandler)
namespace UnityEngine {
struct Color;
}
namespace VROSC {
class LaunchpadSpawner;
}
namespace VROSC {
class Launchpad;
}
namespace VROSC {
class LoopPlayButton;
}
namespace VROSC {
class LoopPlaybackConfig;
}
namespace VROSC {
class LoopStation;
}
namespace VROSC {
class PlayButtonLaunchpad;
}
namespace VROSC {
class TransformDataController;
}
// Forward declare root types
namespace VROSC {
class LoopStationLaunchpadHandler;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationLaunchpadHandler);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationLaunchpadHandler
class CORDL_TYPE LoopStationLaunchpadHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_LaunchpadSpawner)) ::UnityW<::VROSC::LaunchpadSpawner>  LaunchpadSpawner;

/// @brief Field _config, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__config, put=__cordl_internal_set__config)) ::VROSC::LoopPlaybackConfig*  _config;

/// @brief Field _isGroup, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__isGroup, put=__cordl_internal_set__isGroup)) bool  _isGroup;

/// @brief Field _launchpadSpawner, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__launchpadSpawner, put=__cordl_internal_set__launchpadSpawner)) ::UnityW<::VROSC::LaunchpadSpawner>  _launchpadSpawner;

/// @brief Field _loopStation, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopStation, put=__cordl_internal_set__loopStation)) ::UnityW<::VROSC::LoopStation>  _loopStation;

/// @brief Field _playButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__playButton, put=__cordl_internal_set__playButton)) ::UnityW<::VROSC::LoopPlayButton>  _playButton;

/// @brief Method AssignToPlayButtonLaunchpad, addr 0x18b93a8, size 0x40, virtual false, abstract: false, final false
inline void AssignToPlayButtonLaunchpad(::VROSC::PlayButtonLaunchpad*  launchpad) ;

/// @brief Method Awake, addr 0x18b8e88, size 0x26c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LaunchPadCreated, addr 0x18b944c, size 0xb4, virtual false, abstract: false, final false
inline void LaunchPadCreated(::VROSC::Launchpad*  launchpad) ;

/// @brief Method LaunchPadDeleted, addr 0x18b93e8, size 0x34, virtual false, abstract: false, final false
inline void LaunchPadDeleted(::VROSC::Launchpad*  launchpad) ;

/// @brief Method LaunchPadHit, addr 0x18b9500, size 0x1c, virtual false, abstract: false, final false
inline void LaunchPadHit(::VROSC::Launchpad*  launchpad) ;

/// @brief Method LaunchPadMoved, addr 0x18b941c, size 0x30, virtual false, abstract: false, final false
inline void LaunchPadMoved(::VROSC::Launchpad*  launchpad) ;

/// @brief Method LoadLaunchPad, addr 0x18b8cc0, size 0xb0, virtual false, abstract: false, final false
inline void LoadLaunchPad(::StringW  padID, ::VROSC::TransformDataController*  transformData) ;

static inline ::VROSC::LoopStationLaunchpadHandler* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18b90f4, size 0x27c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetColor, addr 0x18b8d70, size 0x1c, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method SetName, addr 0x18b8b0c, size 0x1c, virtual false, abstract: false, final false
inline void SetName(::StringW  text) ;

/// @brief Method Setup, addr 0x18b9370, size 0x38, virtual true, abstract: false, final false
inline void Setup(::StringW  targetID, bool  isGroup, ::VROSC::LoopStation*  loopStation, ::StringW  displayName, ::VROSC::LoopPlaybackConfig*  config) ;

constexpr ::VROSC::LoopPlaybackConfig* const& __cordl_internal_get__config() const;

constexpr ::VROSC::LoopPlaybackConfig*& __cordl_internal_get__config() ;

constexpr bool const& __cordl_internal_get__isGroup() const;

constexpr bool& __cordl_internal_get__isGroup() ;

constexpr ::UnityW<::VROSC::LaunchpadSpawner> const& __cordl_internal_get__launchpadSpawner() const;

constexpr ::UnityW<::VROSC::LaunchpadSpawner>& __cordl_internal_get__launchpadSpawner() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__loopStation() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__loopStation() ;

constexpr ::UnityW<::VROSC::LoopPlayButton> const& __cordl_internal_get__playButton() const;

constexpr ::UnityW<::VROSC::LoopPlayButton>& __cordl_internal_get__playButton() ;

constexpr void __cordl_internal_set__config(::VROSC::LoopPlaybackConfig*  value) ;

constexpr void __cordl_internal_set__isGroup(bool  value) ;

constexpr void __cordl_internal_set__launchpadSpawner(::UnityW<::VROSC::LaunchpadSpawner>  value) ;

constexpr void __cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value) ;

constexpr void __cordl_internal_set__playButton(::UnityW<::VROSC::LoopPlayButton>  value) ;

/// @brief Method .ctor, addr 0x18b951c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_LaunchpadSpawner, addr 0x18b8e80, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LaunchpadSpawner> get_LaunchpadSpawner() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationLaunchpadHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationLaunchpadHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationLaunchpadHandler(LoopStationLaunchpadHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationLaunchpadHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationLaunchpadHandler(LoopStationLaunchpadHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{731};

/// @brief Field _launchpadSpawner, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::LaunchpadSpawner>  ____launchpadSpawner;

/// @brief Field _playButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayButton>  ____playButton;

/// @brief Field _loopStation, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____loopStation;

/// @brief Field _isGroup, offset: 0x38, size: 0x1, def value: None
 bool  ____isGroup;

/// @brief Field _config, offset: 0x40, size: 0x8, def value: None
 ::VROSC::LoopPlaybackConfig*  ____config;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationLaunchpadHandler, ____launchpadSpawner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLaunchpadHandler, ____playButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLaunchpadHandler, ____loopStation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLaunchpadHandler, ____isGroup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLaunchpadHandler, ____config) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationLaunchpadHandler, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationLaunchpadHandler);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationLaunchpadHandler*, "VROSC", "LoopStationLaunchpadHandler");
