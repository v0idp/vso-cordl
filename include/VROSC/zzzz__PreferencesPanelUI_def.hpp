#pragma once
// IWYU pragma private; include "VROSC/PreferencesPanelUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PreferencesPanelUI)
namespace System {
template<typename T>
class Action_1;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class PassthroughManager;
}
namespace VROSC {
class SpectatorCameraUI;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UISlideToggle;
}
namespace VROSC {
class UISlider;
}
namespace VROSC {
class UserDataControllers;
}
// Forward declare root types
namespace VROSC {
class PreferencesPanelUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PreferencesPanelUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PreferencesPanelUI
class CORDL_TYPE PreferencesPanelUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsOpen)) bool  IsOpen;

/// @brief Field OnGlobalVolumeChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnGlobalVolumeChanged, put=setStaticF_OnGlobalVolumeChanged)) ::System::Action_1<float_t>*  OnGlobalVolumeChanged;

/// @brief Field _audioWhenUnfocusedButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioWhenUnfocusedButton, put=__cordl_internal_set__audioWhenUnfocusedButton)) ::UnityW<::VROSC::UISlideToggle>  _audioWhenUnfocusedButton;

/// @brief Field _autoDimLasersToggle, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__autoDimLasersToggle, put=__cordl_internal_set__autoDimLasersToggle)) ::UnityW<::VROSC::UISlideToggle>  _autoDimLasersToggle;

/// @brief Field _disableHaptics, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__disableHaptics, put=__cordl_internal_set__disableHaptics)) ::UnityW<::VROSC::UISlideToggle>  _disableHaptics;

/// @brief Field _passthroughManager, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__passthroughManager, put=__cordl_internal_set__passthroughManager)) ::UnityW<::VROSC::PassthroughManager>  _passthroughManager;

/// @brief Field _resetMalletsButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__resetMalletsButton, put=__cordl_internal_set__resetMalletsButton)) ::UnityW<::VROSC::UIButton>  _resetMalletsButton;

/// @brief Field _spectatorCameraEnabled, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__spectatorCameraEnabled, put=__cordl_internal_set__spectatorCameraEnabled)) bool  _spectatorCameraEnabled;

/// @brief Field _spectatorCameraUI, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__spectatorCameraUI, put=__cordl_internal_set__spectatorCameraUI)) ::UnityW<::VROSC::SpectatorCameraUI>  _spectatorCameraUI;

/// @brief Field _useClassicControls, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__useClassicControls, put=__cordl_internal_set__useClassicControls)) ::UnityW<::VROSC::UISlideToggle>  _useClassicControls;

/// @brief Field _volumeSlider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__volumeSlider, put=__cordl_internal_set__volumeSlider)) ::UnityW<::VROSC::UISlider>  _volumeSlider;

/// @brief Method AudioWhenUnfocusedToggled, addr 0x1745de4, size 0x64, virtual false, abstract: false, final false
inline void AudioWhenUnfocusedToggled(::VROSC::InputDevice*  inputDevice, bool  state) ;

/// @brief Method AutoDimLaserToggled, addr 0x1745f5c, size 0x5c, virtual false, abstract: false, final false
inline void AutoDimLaserToggled(::VROSC::InputDevice*  device, bool  active) ;

/// @brief Method Awake, addr 0x1744e50, size 0x534, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Close, addr 0x1745dc0, size 0x24, virtual false, abstract: false, final false
inline void Close() ;

/// @brief Method DisableHapticsToggled, addr 0x1745eac, size 0x5c, virtual false, abstract: false, final false
inline void DisableHapticsToggled(::VROSC::InputDevice*  inputDevice, bool  state) ;

static inline ::VROSC::PreferencesPanelUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1745660, size 0x458, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x1745ab8, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Open, addr 0x1745d9c, size 0x24, virtual false, abstract: false, final false
inline void Open() ;

/// @brief Method ResetMalletsToDefault, addr 0x1745f08, size 0x54, virtual false, abstract: false, final false
inline void ResetMalletsToDefault(::VROSC::ClickData*  obj) ;

/// @brief Method SetVolume, addr 0x1745ca8, size 0xf4, virtual false, abstract: false, final false
inline void SetVolume(float_t  volume) ;

/// @brief Method TogglePassthrough, addr 0x1745fb8, size 0xbc, virtual false, abstract: false, final false
inline void TogglePassthrough(::VROSC::InputDevice*  device, bool  active) ;

/// @brief Method UseClassicControlsToggled, addr 0x1745e48, size 0x64, virtual false, abstract: false, final false
inline void UseClassicControlsToggled(::VROSC::InputDevice*  inputDevice, bool  state) ;

/// @brief Method UserDataLoaded, addr 0x1745b08, size 0x1a0, virtual false, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  user) ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__audioWhenUnfocusedButton() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__audioWhenUnfocusedButton() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__autoDimLasersToggle() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__autoDimLasersToggle() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__disableHaptics() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__disableHaptics() ;

constexpr ::UnityW<::VROSC::PassthroughManager> const& __cordl_internal_get__passthroughManager() const;

constexpr ::UnityW<::VROSC::PassthroughManager>& __cordl_internal_get__passthroughManager() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__resetMalletsButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__resetMalletsButton() ;

constexpr bool const& __cordl_internal_get__spectatorCameraEnabled() const;

constexpr bool& __cordl_internal_get__spectatorCameraEnabled() ;

constexpr ::UnityW<::VROSC::SpectatorCameraUI> const& __cordl_internal_get__spectatorCameraUI() const;

constexpr ::UnityW<::VROSC::SpectatorCameraUI>& __cordl_internal_get__spectatorCameraUI() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__useClassicControls() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__useClassicControls() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__volumeSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__volumeSlider() ;

constexpr void __cordl_internal_set__audioWhenUnfocusedButton(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__autoDimLasersToggle(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__disableHaptics(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__passthroughManager(::UnityW<::VROSC::PassthroughManager>  value) ;

constexpr void __cordl_internal_set__resetMalletsButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__spectatorCameraEnabled(bool  value) ;

constexpr void __cordl_internal_set__spectatorCameraUI(::UnityW<::VROSC::SpectatorCameraUI>  value) ;

constexpr void __cordl_internal_set__useClassicControls(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__volumeSlider(::UnityW<::VROSC::UISlider>  value) ;

/// @brief Method .ctor, addr 0x1746074, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<float_t>* getStaticF_OnGlobalVolumeChanged() ;

/// @brief Method get_IsOpen, addr 0x1744e30, size 0x20, virtual false, abstract: false, final false
inline bool get_IsOpen() ;

static inline void setStaticF_OnGlobalVolumeChanged(::System::Action_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PreferencesPanelUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PreferencesPanelUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PreferencesPanelUI(PreferencesPanelUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PreferencesPanelUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PreferencesPanelUI(PreferencesPanelUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1124};

/// @brief Field _spectatorCameraUI, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::SpectatorCameraUI>  ____spectatorCameraUI;

/// @brief Field _volumeSlider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____volumeSlider;

/// @brief Field _audioWhenUnfocusedButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____audioWhenUnfocusedButton;

/// @brief Field _useClassicControls, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____useClassicControls;

/// @brief Field _disableHaptics, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____disableHaptics;

/// @brief Field _resetMalletsButton, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____resetMalletsButton;

/// @brief Field _autoDimLasersToggle, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____autoDimLasersToggle;

/// @brief Field _spectatorCameraEnabled, offset: 0x58, size: 0x1, def value: None
 bool  ____spectatorCameraEnabled;

/// @brief Field _passthroughManager, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::PassthroughManager>  ____passthroughManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PreferencesPanelUI, ____spectatorCameraUI) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::PreferencesPanelUI, ____volumeSlider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::PreferencesPanelUI, ____audioWhenUnfocusedButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::PreferencesPanelUI, ____useClassicControls) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::PreferencesPanelUI, ____disableHaptics) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::PreferencesPanelUI, ____resetMalletsButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::PreferencesPanelUI, ____autoDimLasersToggle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::PreferencesPanelUI, ____spectatorCameraEnabled) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::PreferencesPanelUI, ____passthroughManager) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PreferencesPanelUI, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PreferencesPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PreferencesPanelUI*, "VROSC", "PreferencesPanelUI");
