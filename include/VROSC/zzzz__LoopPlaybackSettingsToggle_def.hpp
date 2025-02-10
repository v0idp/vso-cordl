#pragma once
// IWYU pragma private; include "VROSC/LoopPlaybackSettingsToggle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LoopPlaybackSettingsToggle)
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class LoopPlaybackSettingsUI;
}
namespace VROSC {
class UIToggle;
}
// Forward declare root types
namespace VROSC {
class LoopPlaybackSettingsToggle;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopPlaybackSettingsToggle);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlaybackSettingsToggle
class CORDL_TYPE LoopPlaybackSettingsToggle : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _playbackSettings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__playbackSettings, put=__cordl_internal_set__playbackSettings)) ::UnityW<::VROSC::LoopPlaybackSettingsUI>  _playbackSettings;

/// @brief Field _playbackSettingsButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__playbackSettingsButton, put=__cordl_internal_set__playbackSettingsButton)) ::UnityW<::VROSC::UIToggle>  _playbackSettingsButton;

/// @brief Method Awake, addr 0x189b974, size 0x154, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::LoopPlaybackSettingsToggle* New_ctor() ;

/// @brief Method OnDestroy, addr 0x189bcfc, size 0x1b0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PlayBackSettingsOpened, addr 0x189bcd8, size 0x24, virtual false, abstract: false, final false
inline void PlayBackSettingsOpened(bool  isOn) ;

/// @brief Method SetPlaybackSettingsOpen, addr 0x189beac, size 0x8c, virtual false, abstract: false, final false
inline void SetPlaybackSettingsOpen(::VROSC::InputDevice*  inputDevice, bool  isOn) ;

/// @brief Method SetTarget, addr 0x189bac8, size 0x210, virtual false, abstract: false, final false
inline void SetTarget(::VROSC::LoopPlaybackSettingsUI*  settingsUI) ;

constexpr ::UnityW<::VROSC::LoopPlaybackSettingsUI> const& __cordl_internal_get__playbackSettings() const;

constexpr ::UnityW<::VROSC::LoopPlaybackSettingsUI>& __cordl_internal_get__playbackSettings() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__playbackSettingsButton() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__playbackSettingsButton() ;

constexpr void __cordl_internal_set__playbackSettings(::UnityW<::VROSC::LoopPlaybackSettingsUI>  value) ;

constexpr void __cordl_internal_set__playbackSettingsButton(::UnityW<::VROSC::UIToggle>  value) ;

/// @brief Method .ctor, addr 0x189bfe4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlaybackSettingsToggle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlaybackSettingsToggle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlaybackSettingsToggle(LoopPlaybackSettingsToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlaybackSettingsToggle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlaybackSettingsToggle(LoopPlaybackSettingsToggle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{665};

/// @brief Field _playbackSettings, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlaybackSettingsUI>  ____playbackSettings;

/// @brief Field _playbackSettingsButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____playbackSettingsButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlaybackSettingsToggle, ____playbackSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackSettingsToggle, ____playbackSettingsButton) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlaybackSettingsToggle, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopPlaybackSettingsToggle);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlaybackSettingsToggle*, "VROSC", "LoopPlaybackSettingsToggle");
