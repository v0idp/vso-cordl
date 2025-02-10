#pragma once
// IWYU pragma private; include "VROSC/MicrophoneController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__ToolController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MicrophoneController)
namespace NatSuite::Devices {
class AudioDevice;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class ControlPanelUI;
}
namespace VROSC {
class InfoPanel;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class MicrophoneDataController;
}
namespace VROSC {
class MicrophoneDeviceManager;
}
namespace VROSC {
class Microphone;
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
class UISpinner;
}
namespace VROSC {
class UserDataControllers;
}
// Forward declare root types
namespace VROSC {
class MicrophoneController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MicrophoneController);
// Dependencies VROSC.ToolController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MicrophoneController
class CORDL_TYPE MicrophoneController : public ::VROSC::ToolController {
public:
// Declarations
 __declspec(property(get=get_MicrophoneDataController)) ::VROSC::MicrophoneDataController*  MicrophoneDataController;

/// @brief Field _controlPanel, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__controlPanel, put=__cordl_internal_set__controlPanel)) ::UnityW<::VROSC::ControlPanelUI>  _controlPanel;

/// @brief Field _failedToInitializeText, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__failedToInitializeText, put=__cordl_internal_set__failedToInitializeText)) ::UnityW<::UnityEngine::GameObject>  _failedToInitializeText;

/// @brief Field _grabToActivateToggle, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabToActivateToggle, put=__cordl_internal_set__grabToActivateToggle)) ::UnityW<::VROSC::UISlideToggle>  _grabToActivateToggle;

/// @brief Field _infoPanel, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__infoPanel, put=__cordl_internal_set__infoPanel)) ::UnityW<::VROSC::InfoPanel>  _infoPanel;

/// @brief Field _inputDevices, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputDevices, put=__cordl_internal_set__inputDevices)) ::System::Collections::Generic::Dictionary_2<::StringW,::NatSuite::Devices::AudioDevice*>*  _inputDevices;

/// @brief Field _inputSpinner, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputSpinner, put=__cordl_internal_set__inputSpinner)) ::UnityW<::VROSC::UISpinner>  _inputSpinner;

/// @brief Field _inputVisualizer, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputVisualizer, put=__cordl_internal_set__inputVisualizer)) ::UnityW<::VROSC::UISlider>  _inputVisualizer;

/// @brief Field _latencySlider, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__latencySlider, put=__cordl_internal_set__latencySlider)) ::UnityW<::VROSC::UISlider>  _latencySlider;

/// @brief Field _microphone, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__microphone, put=__cordl_internal_set__microphone)) ::UnityW<::VROSC::Microphone>  _microphone;

/// @brief Field _microphoneDeviceManager, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__microphoneDeviceManager, put=__cordl_internal_set__microphoneDeviceManager)) ::UnityW<::VROSC::MicrophoneDeviceManager>  _microphoneDeviceManager;

/// @brief Field _microphoneGrabbed, offset 0x108, size 0x1 
 __declspec(property(get=__cordl_internal_get__microphoneGrabbed, put=__cordl_internal_set__microphoneGrabbed)) bool  _microphoneGrabbed;

/// @brief Field _pcOnlyObjects, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__pcOnlyObjects, put=__cordl_internal_set__pcOnlyObjects)) ::UnityW<::UnityEngine::GameObject>  _pcOnlyObjects;

/// @brief Field _peakWarning, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__peakWarning, put=__cordl_internal_set__peakWarning)) ::UnityW<::UnityEngine::GameObject>  _peakWarning;

/// @brief Field _previewReverbToggle, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__previewReverbToggle, put=__cordl_internal_set__previewReverbToggle)) ::UnityW<::VROSC::UISlideToggle>  _previewReverbToggle;

/// @brief Field _proximityToggle, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__proximityToggle, put=__cordl_internal_set__proximityToggle)) ::UnityW<::VROSC::UISlideToggle>  _proximityToggle;

/// @brief Field _resetLatencyButton, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__resetLatencyButton, put=__cordl_internal_set__resetLatencyButton)) ::UnityW<::VROSC::UIButton>  _resetLatencyButton;

/// @brief Field _reverbSlider, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__reverbSlider, put=__cordl_internal_set__reverbSlider)) ::UnityW<::VROSC::UISlider>  _reverbSlider;

/// @brief Field _volumeSlider, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__volumeSlider, put=__cordl_internal_set__volumeSlider)) ::UnityW<::VROSC::UISlider>  _volumeSlider;

/// @brief Method EnableMicrophone, addr 0x179b370, size 0xc8, virtual false, abstract: false, final false
inline void EnableMicrophone(bool  enable) ;

/// @brief Method GrabToActivateToggled, addr 0x179b1ac, size 0xa4, virtual false, abstract: false, final false
inline void GrabToActivateToggled(::VROSC::InputDevice*  device, bool  state) ;

/// @brief Method HidePeakWarning, addr 0x1799f90, size 0x20, virtual false, abstract: false, final false
inline void HidePeakWarning() ;

/// @brief Method InputSelectionChanged, addr 0x179a614, size 0xfc, virtual false, abstract: false, final false
inline void InputSelectionChanged(int32_t  selection) ;

/// @brief Method LatencyCompensationChanged, addr 0x179afb4, size 0xf0, virtual false, abstract: false, final false
inline void LatencyCompensationChanged(float_t  newValue) ;

/// @brief Method MicrophoneGrabbed, addr 0x179b438, size 0x9c, virtual false, abstract: false, final false
inline void MicrophoneGrabbed(bool  grabbed) ;

/// @brief Method MicrophoneProximityChanged, addr 0x179b4d4, size 0x1c, virtual false, abstract: false, final false
inline void MicrophoneProximityChanged(float_t  distance) ;

static inline ::VROSC::MicrophoneController* New_ctor() ;

/// @brief Method OnDestroy, addr 0x179a710, size 0x6e8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PopulateInputDeviceList, addr 0x179a198, size 0x47c, virtual false, abstract: false, final false
inline void PopulateInputDeviceList() ;

/// @brief Method PreviewReverbToggled, addr 0x179b2e4, size 0x8c, virtual false, abstract: false, final false
inline void PreviewReverbToggled(::VROSC::InputDevice*  device, bool  state) ;

/// @brief Method ProximityToggled, addr 0x1799fb0, size 0x94, virtual false, abstract: false, final false
inline void ProximityToggled(::VROSC::InputDevice*  device, bool  state) ;

/// @brief Method ResetLatency, addr 0x179b0a4, size 0x108, virtual false, abstract: false, final false
inline void ResetLatency() ;

/// @brief Method ReverbChanged, addr 0x179af50, size 0x64, virtual false, abstract: false, final false
inline void ReverbChanged(float_t  newValue) ;

/// @brief Method SaveUserPreferences, addr 0x179b250, size 0x94, virtual false, abstract: false, final false
inline void SaveUserPreferences() ;

/// @brief Method Setup, addr 0x179977c, size 0x814, virtual true, abstract: false, final false
inline void Setup() ;

/// @brief Method ShowPeakWarning, addr 0x179b940, size 0x20, virtual false, abstract: false, final false
inline void ShowPeakWarning() ;

/// @brief Method Toggle, addr 0x179a134, size 0x4, virtual true, abstract: false, final false
inline void Toggle() ;

/// @brief Method UpdateInputVisualizer, addr 0x179b914, size 0x2c, virtual false, abstract: false, final false
inline void UpdateInputVisualizer(float_t  value) ;

/// @brief Method UserDataLoaded, addr 0x179b4f0, size 0x148, virtual true, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  user) ;

/// @brief Method VolumeChanged, addr 0x179aef4, size 0x5c, virtual false, abstract: false, final false
inline void VolumeChanged(float_t  newValue) ;

constexpr ::UnityW<::VROSC::ControlPanelUI> const& __cordl_internal_get__controlPanel() const;

constexpr ::UnityW<::VROSC::ControlPanelUI>& __cordl_internal_get__controlPanel() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__failedToInitializeText() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__failedToInitializeText() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__grabToActivateToggle() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__grabToActivateToggle() ;

constexpr ::UnityW<::VROSC::InfoPanel> const& __cordl_internal_get__infoPanel() const;

constexpr ::UnityW<::VROSC::InfoPanel>& __cordl_internal_get__infoPanel() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::NatSuite::Devices::AudioDevice*>* const& __cordl_internal_get__inputDevices() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::NatSuite::Devices::AudioDevice*>*& __cordl_internal_get__inputDevices() ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get__inputSpinner() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get__inputSpinner() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__inputVisualizer() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__inputVisualizer() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__latencySlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__latencySlider() ;

constexpr ::UnityW<::VROSC::Microphone> const& __cordl_internal_get__microphone() const;

constexpr ::UnityW<::VROSC::Microphone>& __cordl_internal_get__microphone() ;

constexpr ::UnityW<::VROSC::MicrophoneDeviceManager> const& __cordl_internal_get__microphoneDeviceManager() const;

constexpr ::UnityW<::VROSC::MicrophoneDeviceManager>& __cordl_internal_get__microphoneDeviceManager() ;

constexpr bool const& __cordl_internal_get__microphoneGrabbed() const;

constexpr bool& __cordl_internal_get__microphoneGrabbed() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__pcOnlyObjects() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__pcOnlyObjects() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__peakWarning() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__peakWarning() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__previewReverbToggle() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__previewReverbToggle() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__proximityToggle() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__proximityToggle() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__resetLatencyButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__resetLatencyButton() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__reverbSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__reverbSlider() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__volumeSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__volumeSlider() ;

constexpr void __cordl_internal_set__controlPanel(::UnityW<::VROSC::ControlPanelUI>  value) ;

constexpr void __cordl_internal_set__failedToInitializeText(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__grabToActivateToggle(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__infoPanel(::UnityW<::VROSC::InfoPanel>  value) ;

constexpr void __cordl_internal_set__inputDevices(::System::Collections::Generic::Dictionary_2<::StringW,::NatSuite::Devices::AudioDevice*>*  value) ;

constexpr void __cordl_internal_set__inputSpinner(::UnityW<::VROSC::UISpinner>  value) ;

constexpr void __cordl_internal_set__inputVisualizer(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__latencySlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__microphone(::UnityW<::VROSC::Microphone>  value) ;

constexpr void __cordl_internal_set__microphoneDeviceManager(::UnityW<::VROSC::MicrophoneDeviceManager>  value) ;

constexpr void __cordl_internal_set__microphoneGrabbed(bool  value) ;

constexpr void __cordl_internal_set__pcOnlyObjects(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__peakWarning(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__previewReverbToggle(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__proximityToggle(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__resetLatencyButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__reverbSlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__volumeSlider(::UnityW<::VROSC::UISlider>  value) ;

/// @brief Method .ctor, addr 0x179b960, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MicrophoneDataController, addr 0x1799704, size 0x78, virtual false, abstract: false, final false
inline ::VROSC::MicrophoneDataController* get_MicrophoneDataController() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicrophoneController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicrophoneController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicrophoneController(MicrophoneController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicrophoneController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicrophoneController(MicrophoneController const& ) = delete;

/// @brief Field LatencyCompensationPrefsString offset 0xffffffff size 0x8
static constexpr ::ConstString  LatencyCompensationPrefsString{u"LatencyCompensation"};

/// @brief Field SelectedMicrophonePrefsString offset 0xffffffff size 0x8
static constexpr ::ConstString  SelectedMicrophonePrefsString{u"SelectedMicrophone"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1358};

/// @brief Field _microphone, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::VROSC::Microphone>  ____microphone;

/// @brief Field _volumeSlider, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____volumeSlider;

/// @brief Field _reverbSlider, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____reverbSlider;

/// @brief Field _proximityToggle, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____proximityToggle;

/// @brief Field _inputVisualizer, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____inputVisualizer;

/// @brief Field _peakWarning, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____peakWarning;

/// @brief Field _controlPanel, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::VROSC::ControlPanelUI>  ____controlPanel;

/// @brief Field _infoPanel, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::VROSC::InfoPanel>  ____infoPanel;

/// @brief Field _failedToInitializeText, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____failedToInitializeText;

/// @brief Field _pcOnlyObjects, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____pcOnlyObjects;

/// @brief Field _inputSpinner, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  ____inputSpinner;

/// @brief Field _latencySlider, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____latencySlider;

/// @brief Field _resetLatencyButton, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____resetLatencyButton;

/// @brief Field _grabToActivateToggle, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____grabToActivateToggle;

/// @brief Field _previewReverbToggle, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____previewReverbToggle;

/// @brief Field _microphoneDeviceManager, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::VROSC::MicrophoneDeviceManager>  ____microphoneDeviceManager;

/// @brief Field _inputDevices, offset: 0x100, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::NatSuite::Devices::AudioDevice*>*  ____inputDevices;

/// @brief Field _microphoneGrabbed, offset: 0x108, size: 0x1, def value: None
 bool  ____microphoneGrabbed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MicrophoneController, ____microphone) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneController, ____volumeSlider) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneController, ____reverbSlider) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneController, ____proximityToggle) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneController, ____inputVisualizer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneController, ____peakWarning) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneController, ____controlPanel) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneController, ____infoPanel) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneController, ____failedToInitializeText) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneController, ____pcOnlyObjects) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneController, ____inputSpinner) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneController, ____latencySlider) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneController, ____resetLatencyButton) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneController, ____grabToActivateToggle) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneController, ____previewReverbToggle) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneController, ____microphoneDeviceManager) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneController, ____inputDevices) == 0x100, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneController, ____microphoneGrabbed) == 0x108, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MicrophoneController, 0x110>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MicrophoneController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MicrophoneController*, "VROSC", "MicrophoneController");
