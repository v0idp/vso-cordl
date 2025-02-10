#pragma once
// IWYU pragma private; include "VROSC/LoopVolumeController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LoopVolumeController)
namespace System {
template<typename T>
class Action_1;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class UISlider;
}
namespace VROSC {
class UIToggle;
}
// Forward declare root types
namespace VROSC {
class LoopVolumeController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopVolumeController);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopVolumeController
class CORDL_TYPE LoopVolumeController : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsMuteToggled)) bool  IsMuteToggled;

 __declspec(property(get=get_IsSoloToggled)) bool  IsSoloToggled;

/// @brief Field OnMuteChanged, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMuteChanged, put=__cordl_internal_set_OnMuteChanged)) ::System::Action_1<bool>*  OnMuteChanged;

/// @brief Field OnSoloChanged, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSoloChanged, put=__cordl_internal_set_OnSoloChanged)) ::System::Action_1<bool>*  OnSoloChanged;

/// @brief Field OnVolumeChanged, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnVolumeChanged, put=__cordl_internal_set_OnVolumeChanged)) ::System::Action_1<float_t>*  OnVolumeChanged;

 __declspec(property(get=get_Volume)) float_t  Volume;

/// @brief Field _muteButton, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__muteButton, put=__cordl_internal_set__muteButton)) ::UnityW<::VROSC::UIToggle>  _muteButton;

/// @brief Field _soloButton, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__soloButton, put=__cordl_internal_set__soloButton)) ::UnityW<::VROSC::UIToggle>  _soloButton;

/// @brief Field _volumeSlider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__volumeSlider, put=__cordl_internal_set__volumeSlider)) ::UnityW<::VROSC::UISlider>  _volumeSlider;

/// @brief Method Dispose, addr 0x18a3d74, size 0x1fc, virtual false, abstract: false, final false
inline void Dispose() ;

static inline ::VROSC::LoopVolumeController* New_ctor() ;

/// @brief Method OnVolumeSliderChanged, addr 0x18a5068, size 0x1c, virtual false, abstract: false, final false
inline void OnVolumeSliderChanged(float_t  volume) ;

/// @brief Method SetIsMuted, addr 0x18a10bc, size 0x24, virtual false, abstract: false, final false
inline void SetIsMuted(bool  isMuted) ;

/// @brief Method SetIsSolo, addr 0x18a5084, size 0x24, virtual false, abstract: false, final false
inline void SetIsSolo(bool  isMuted) ;

/// @brief Method SetVolume, addr 0x18a1000, size 0x2c, virtual false, abstract: false, final false
inline void SetVolume(float_t  volume) ;

/// @brief Method Setup, addr 0x18a33c8, size 0x2c8, virtual false, abstract: false, final false
inline void Setup(::StringW  sliderHeaderText) ;

/// @brief Method ToggleMute, addr 0x18a4ff8, size 0x38, virtual false, abstract: false, final false
inline void ToggleMute(::VROSC::InputDevice*  device, bool  mute) ;

/// @brief Method ToggleSolo, addr 0x18a5030, size 0x38, virtual false, abstract: false, final false
inline void ToggleSolo(::VROSC::InputDevice*  arg1, bool  arg2) ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnMuteChanged() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnMuteChanged() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnSoloChanged() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnSoloChanged() ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_OnVolumeChanged() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get_OnVolumeChanged() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__muteButton() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__muteButton() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__soloButton() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__soloButton() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__volumeSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__volumeSlider() ;

constexpr void __cordl_internal_set_OnMuteChanged(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnSoloChanged(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnVolumeChanged(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set__muteButton(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__soloButton(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__volumeSlider(::UnityW<::VROSC::UISlider>  value) ;

/// @brief Method .ctor, addr 0x18a50a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsMuteToggled, addr 0x189f520, size 0x1c, virtual false, abstract: false, final false
inline bool get_IsMuteToggled() ;

/// @brief Method get_IsSoloToggled, addr 0x189f4d8, size 0x1c, virtual false, abstract: false, final false
inline bool get_IsSoloToggled() ;

/// @brief Method get_Volume, addr 0x18a4fdc, size 0x1c, virtual false, abstract: false, final false
inline float_t get_Volume() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopVolumeController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopVolumeController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopVolumeController(LoopVolumeController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopVolumeController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopVolumeController(LoopVolumeController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{683};

/// @brief Field _muteButton, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____muteButton;

/// @brief Field _soloButton, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____soloButton;

/// @brief Field _volumeSlider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____volumeSlider;

/// @brief Field OnVolumeChanged, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<float_t>*  ___OnVolumeChanged;

/// @brief Field OnMuteChanged, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnMuteChanged;

/// @brief Field OnSoloChanged, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnSoloChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopVolumeController, ____muteButton) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVolumeController, ____soloButton) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVolumeController, ____volumeSlider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVolumeController, ___OnVolumeChanged) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVolumeController, ___OnMuteChanged) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVolumeController, ___OnSoloChanged) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopVolumeController, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopVolumeController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopVolumeController*, "VROSC", "LoopVolumeController");
