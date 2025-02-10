#pragma once
// IWYU pragma private; include "VROSC/DrumpadUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__PadUI_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DrumpadUI)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace VROSC::UI {
class DrumSampleSwitcherUI;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
class IncrementDecrementUI;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class ModularDrumsDataController;
}
namespace VROSC {
class TooltipData;
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
// Forward declare root types
namespace VROSC {
class DrumpadUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DrumpadUI);
// Dependencies VROSC.PadUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DrumpadUI
class CORDL_TYPE DrumpadUI : public ::VROSC::PadUI {
public:
// Declarations
/// @brief Field OnPitchChanged, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPitchChanged, put=__cordl_internal_set_OnPitchChanged)) ::System::Action_1<int32_t>*  OnPitchChanged;

/// @brief Field OnSwitcherChanged, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSwitcherChanged, put=__cordl_internal_set_OnSwitcherChanged)) ::System::Action_2<int32_t,bool>*  OnSwitcherChanged;

/// @brief Field OnUseVelocityChanged, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnUseVelocityChanged, put=__cordl_internal_set_OnUseVelocityChanged)) ::System::Action_1<bool>*  OnUseVelocityChanged;

/// @brief Field OnVolumeChanged, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnVolumeChanged, put=__cordl_internal_set_OnVolumeChanged)) ::System::Action_1<float_t>*  OnVolumeChanged;

/// @brief Field _closeUiButton, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeUiButton, put=__cordl_internal_set__closeUiButton)) ::UnityW<::VROSC::UIButton>  _closeUiButton;

/// @brief Field _isSpinnerPressed, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get__isSpinnerPressed, put=__cordl_internal_set__isSpinnerPressed)) bool  _isSpinnerPressed;

/// @brief Field _openToolTip, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__openToolTip, put=__cordl_internal_set__openToolTip)) ::VROSC::TooltipData*  _openToolTip;

/// @brief Field _openUiButton, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__openUiButton, put=__cordl_internal_set__openUiButton)) ::UnityW<::VROSC::UIButton>  _openUiButton;

/// @brief Field _pitch, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__pitch, put=__cordl_internal_set__pitch)) ::UnityW<::VROSC::IncrementDecrementUI>  _pitch;

/// @brief Field _switcher, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__switcher, put=__cordl_internal_set__switcher)) ::UnityW<::VROSC::UI::DrumSampleSwitcherUI>  _switcher;

/// @brief Field _useVelocity, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__useVelocity, put=__cordl_internal_set__useVelocity)) ::UnityW<::VROSC::UISlideToggle>  _useVelocity;

/// @brief Field _volumeSlider, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__volumeSlider, put=__cordl_internal_set__volumeSlider)) ::UnityW<::VROSC::UISlider>  _volumeSlider;

/// @brief Method Awake, addr 0x170c014, size 0x5f8, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CloseUI, addr 0x170ccbc, size 0x8, virtual false, abstract: false, final false
inline void CloseUI(::VROSC::ClickData*  clickData) ;

static inline ::VROSC::DrumpadUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x170c64c, size 0x5b0, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetDrumUseVelocityChanged, addr 0x170cce0, size 0x24, virtual false, abstract: false, final false
inline void SetDrumUseVelocityChanged(::VROSC::InputDevice*  device, bool  toggled) ;

/// @brief Method SetPitchChanged, addr 0x170cd04, size 0x1c, virtual false, abstract: false, final false
inline void SetPitchChanged(int32_t  pitch) ;

/// @brief Method SetToolTip, addr 0x170cbfc, size 0x30, virtual false, abstract: false, final false
inline void SetToolTip(bool  isHovered) ;

/// @brief Method Setup, addr 0x1709828, size 0x114, virtual false, abstract: false, final false
inline void Setup(int32_t  empadId, int32_t  groupId, ::VROSC::ModularDrumsDataController*  controller, bool  useVelocity, float_t  volume, int32_t  pitch) ;

/// @brief Method SpinnerActive, addr 0x170cc2c, size 0xc, virtual false, abstract: false, final false
inline void SpinnerActive(bool  active) ;

/// @brief Method SwitcherChanged, addr 0x170cd20, size 0x20, virtual false, abstract: false, final false
inline void SwitcherChanged(int32_t  sampleIdOrNoteNumber, bool  preview) ;

/// @brief Method SynthesizerChanged, addr 0x170c60c, size 0x40, virtual false, abstract: false, final false
inline void SynthesizerChanged(bool  useExternal) ;

/// @brief Method ToggleUI, addr 0x170cca0, size 0x1c, virtual false, abstract: false, final false
inline void ToggleUI(::VROSC::ClickData*  clickData) ;

/// @brief Method UpdateHover, addr 0x170cc38, size 0x68, virtual true, abstract: false, final false
inline void UpdateHover() ;

/// @brief Method VolumeChanged, addr 0x170ccc4, size 0x1c, virtual false, abstract: false, final false
inline void VolumeChanged(float_t  volume) ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnPitchChanged() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnPitchChanged() ;

constexpr ::System::Action_2<int32_t,bool>* const& __cordl_internal_get_OnSwitcherChanged() const;

constexpr ::System::Action_2<int32_t,bool>*& __cordl_internal_get_OnSwitcherChanged() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnUseVelocityChanged() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnUseVelocityChanged() ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_OnVolumeChanged() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get_OnVolumeChanged() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__closeUiButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__closeUiButton() ;

constexpr bool const& __cordl_internal_get__isSpinnerPressed() const;

constexpr bool& __cordl_internal_get__isSpinnerPressed() ;

constexpr ::VROSC::TooltipData* const& __cordl_internal_get__openToolTip() const;

constexpr ::VROSC::TooltipData*& __cordl_internal_get__openToolTip() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__openUiButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__openUiButton() ;

constexpr ::UnityW<::VROSC::IncrementDecrementUI> const& __cordl_internal_get__pitch() const;

constexpr ::UnityW<::VROSC::IncrementDecrementUI>& __cordl_internal_get__pitch() ;

constexpr ::UnityW<::VROSC::UI::DrumSampleSwitcherUI> const& __cordl_internal_get__switcher() const;

constexpr ::UnityW<::VROSC::UI::DrumSampleSwitcherUI>& __cordl_internal_get__switcher() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__useVelocity() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__useVelocity() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__volumeSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__volumeSlider() ;

constexpr void __cordl_internal_set_OnPitchChanged(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_OnSwitcherChanged(::System::Action_2<int32_t,bool>*  value) ;

constexpr void __cordl_internal_set_OnUseVelocityChanged(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnVolumeChanged(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set__closeUiButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__isSpinnerPressed(bool  value) ;

constexpr void __cordl_internal_set__openToolTip(::VROSC::TooltipData*  value) ;

constexpr void __cordl_internal_set__openUiButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__pitch(::UnityW<::VROSC::IncrementDecrementUI>  value) ;

constexpr void __cordl_internal_set__switcher(::UnityW<::VROSC::UI::DrumSampleSwitcherUI>  value) ;

constexpr void __cordl_internal_set__useVelocity(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__volumeSlider(::UnityW<::VROSC::UISlider>  value) ;

/// @brief Method .ctor, addr 0x170cd40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrumpadUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrumpadUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrumpadUI(DrumpadUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrumpadUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrumpadUI(DrumpadUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{872};

/// @brief Field _switcher, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::DrumSampleSwitcherUI>  ____switcher;

/// @brief Field _volumeSlider, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____volumeSlider;

/// @brief Field _useVelocity, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____useVelocity;

/// @brief Field _pitch, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::IncrementDecrementUI>  ____pitch;

/// @brief Field _closeUiButton, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____closeUiButton;

/// @brief Field _openUiButton, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____openUiButton;

/// @brief Field _isSpinnerPressed, offset: 0x90, size: 0x1, def value: None
 bool  ____isSpinnerPressed;

/// @brief Field _openToolTip, offset: 0x98, size: 0x8, def value: None
 ::VROSC::TooltipData*  ____openToolTip;

/// @brief Field OnUseVelocityChanged, offset: 0xa0, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnUseVelocityChanged;

/// @brief Field OnPitchChanged, offset: 0xa8, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnPitchChanged;

/// @brief Field OnVolumeChanged, offset: 0xb0, size: 0x8, def value: None
 ::System::Action_1<float_t>*  ___OnVolumeChanged;

/// @brief Field OnSwitcherChanged, offset: 0xb8, size: 0x8, def value: None
 ::System::Action_2<int32_t,bool>*  ___OnSwitcherChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DrumpadUI, ____switcher) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadUI, ____volumeSlider) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadUI, ____useVelocity) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadUI, ____pitch) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadUI, ____closeUiButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadUI, ____openUiButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadUI, ____isSpinnerPressed) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadUI, ____openToolTip) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadUI, ___OnUseVelocityChanged) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadUI, ___OnPitchChanged) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadUI, ___OnVolumeChanged) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadUI, ___OnSwitcherChanged) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DrumpadUI, 0xc0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DrumpadUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DrumpadUI*, "VROSC", "DrumpadUI");
