#pragma once
// IWYU pragma private; include "VROSC/DrumsControlPanelUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__InstrumentControlPanelUI_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DrumsControlPanelUI)
namespace GlobalNamespace {
class MalletSettingsPanel;
}
namespace System {
class Action;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class ChannelControlUI;
}
namespace VROSC {
class DrumEffectsUI;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class InstrumentController;
}
namespace VROSC {
class UIHoldButton;
}
namespace VROSC {
class UISlideToggle;
}
namespace VROSC {
class UISlider;
}
namespace VROSC {
class UIToggle;
}
// Forward declare root types
namespace VROSC {
class DrumsControlPanelUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DrumsControlPanelUI);
// Dependencies VROSC.InstrumentControlPanelUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DrumsControlPanelUI
class CORDL_TYPE DrumsControlPanelUI : public ::VROSC::InstrumentControlPanelUI {
public:
// Declarations
/// @brief Field OnDeleteAll, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDeleteAll, put=__cordl_internal_set_OnDeleteAll)) ::System::Action*  OnDeleteAll;

/// @brief Field _channelControl, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__channelControl, put=__cordl_internal_set__channelControl)) ::UnityW<::VROSC::ChannelControlUI>  _channelControl;

/// @brief Field _deleteAllButton, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__deleteAllButton, put=__cordl_internal_set__deleteAllButton)) ::UnityW<::VROSC::UIHoldButton>  _deleteAllButton;

/// @brief Field _drumEffectsUI, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__drumEffectsUI, put=__cordl_internal_set__drumEffectsUI)) ::UnityW<::VROSC::DrumEffectsUI>  _drumEffectsUI;

/// @brief Field _effectsPanelButton, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__effectsPanelButton, put=__cordl_internal_set__effectsPanelButton)) ::UnityW<::VROSC::UIToggle>  _effectsPanelButton;

/// @brief Field _malletSettingsPanel, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__malletSettingsPanel, put=__cordl_internal_set__malletSettingsPanel)) ::UnityW<::GlobalNamespace::MalletSettingsPanel>  _malletSettingsPanel;

/// @brief Field _previewParent, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__previewParent, put=__cordl_internal_set__previewParent)) ::UnityW<::UnityEngine::GameObject>  _previewParent;

/// @brief Field _previewSampleSoundsToggle, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__previewSampleSoundsToggle, put=__cordl_internal_set__previewSampleSoundsToggle)) ::UnityW<::VROSC::UISlideToggle>  _previewSampleSoundsToggle;

/// @brief Field _previewVolumeSlider, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__previewVolumeSlider, put=__cordl_internal_set__previewVolumeSlider)) ::UnityW<::VROSC::UISlider>  _previewVolumeSlider;

/// @brief Method Awake, addr 0x178161c, size 0x3cc, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method DeleteAllPressed, addr 0x17825d8, size 0x1c, virtual false, abstract: false, final false
inline void DeleteAllPressed() ;

/// @brief Method EffectsPanelButtonToggled, addr 0x17825b8, size 0x20, virtual false, abstract: false, final false
inline void EffectsPanelButtonToggled(::VROSC::InputDevice*  device, bool  isOn) ;

static inline ::VROSC::DrumsControlPanelUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1781e80, size 0x38c, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x1782328, size 0xd0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetMalletsValues, addr 0x178250c, size 0x1c, virtual false, abstract: false, final false
inline void SetMalletsValues(float_t  malletAngle, float_t  malletLength) ;

/// @brief Method SetPreviewSoundsToggled, addr 0x1782464, size 0xa8, virtual false, abstract: false, final false
inline void SetPreviewSoundsToggled(::VROSC::InputDevice*  device, bool  active) ;

/// @brief Method SetPreviewValues, addr 0x1782528, size 0x90, virtual false, abstract: false, final false
inline void SetPreviewValues(bool  previewDrums, float_t  previewDrumsVolume) ;

/// @brief Method SetPreviewVolume, addr 0x17823f8, size 0x6c, virtual false, abstract: false, final false
inline void SetPreviewVolume(float_t  volume) ;

/// @brief Method Setup, addr 0x1781a3c, size 0x20c, virtual true, abstract: false, final false
inline void Setup(::VROSC::InstrumentController*  instrumentController) ;

/// @brief Method SynthesizerChanged, addr 0x17819e8, size 0x54, virtual false, abstract: false, final false
inline void SynthesizerChanged(bool  useExternal) ;

constexpr ::System::Action* const& __cordl_internal_get_OnDeleteAll() const;

constexpr ::System::Action*& __cordl_internal_get_OnDeleteAll() ;

constexpr ::UnityW<::VROSC::ChannelControlUI> const& __cordl_internal_get__channelControl() const;

constexpr ::UnityW<::VROSC::ChannelControlUI>& __cordl_internal_get__channelControl() ;

constexpr ::UnityW<::VROSC::UIHoldButton> const& __cordl_internal_get__deleteAllButton() const;

constexpr ::UnityW<::VROSC::UIHoldButton>& __cordl_internal_get__deleteAllButton() ;

constexpr ::UnityW<::VROSC::DrumEffectsUI> const& __cordl_internal_get__drumEffectsUI() const;

constexpr ::UnityW<::VROSC::DrumEffectsUI>& __cordl_internal_get__drumEffectsUI() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__effectsPanelButton() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__effectsPanelButton() ;

constexpr ::UnityW<::GlobalNamespace::MalletSettingsPanel> const& __cordl_internal_get__malletSettingsPanel() const;

constexpr ::UnityW<::GlobalNamespace::MalletSettingsPanel>& __cordl_internal_get__malletSettingsPanel() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__previewParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__previewParent() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__previewSampleSoundsToggle() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__previewSampleSoundsToggle() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__previewVolumeSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__previewVolumeSlider() ;

constexpr void __cordl_internal_set_OnDeleteAll(::System::Action*  value) ;

constexpr void __cordl_internal_set__channelControl(::UnityW<::VROSC::ChannelControlUI>  value) ;

constexpr void __cordl_internal_set__deleteAllButton(::UnityW<::VROSC::UIHoldButton>  value) ;

constexpr void __cordl_internal_set__drumEffectsUI(::UnityW<::VROSC::DrumEffectsUI>  value) ;

constexpr void __cordl_internal_set__effectsPanelButton(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__malletSettingsPanel(::UnityW<::GlobalNamespace::MalletSettingsPanel>  value) ;

constexpr void __cordl_internal_set__previewParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__previewSampleSoundsToggle(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__previewVolumeSlider(::UnityW<::VROSC::UISlider>  value) ;

/// @brief Method .ctor, addr 0x17825f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrumsControlPanelUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrumsControlPanelUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrumsControlPanelUI(DrumsControlPanelUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrumsControlPanelUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrumsControlPanelUI(DrumsControlPanelUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1307};

/// @brief Field _deleteAllButton, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::VROSC::UIHoldButton>  ____deleteAllButton;

/// @brief Field _previewSampleSoundsToggle, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____previewSampleSoundsToggle;

/// @brief Field _previewVolumeSlider, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____previewVolumeSlider;

/// @brief Field _effectsPanelButton, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____effectsPanelButton;

/// @brief Field _drumEffectsUI, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::VROSC::DrumEffectsUI>  ____drumEffectsUI;

/// @brief Field _previewParent, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____previewParent;

/// @brief Field _channelControl, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::VROSC::ChannelControlUI>  ____channelControl;

/// @brief Field _malletSettingsPanel, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MalletSettingsPanel>  ____malletSettingsPanel;

/// @brief Field OnDeleteAll, offset: 0xb0, size: 0x8, def value: None
 ::System::Action*  ___OnDeleteAll;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DrumsControlPanelUI, ____deleteAllButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumsControlPanelUI, ____previewSampleSoundsToggle) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumsControlPanelUI, ____previewVolumeSlider) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumsControlPanelUI, ____effectsPanelButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumsControlPanelUI, ____drumEffectsUI) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumsControlPanelUI, ____previewParent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumsControlPanelUI, ____channelControl) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumsControlPanelUI, ____malletSettingsPanel) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumsControlPanelUI, ___OnDeleteAll) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DrumsControlPanelUI, 0xb8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DrumsControlPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DrumsControlPanelUI*, "VROSC", "DrumsControlPanelUI");
