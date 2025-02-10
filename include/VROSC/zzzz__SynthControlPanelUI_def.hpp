#pragma once
// IWYU pragma private; include "VROSC/SynthControlPanelUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__InstrumentControlPanelUI_def.hpp"
CORDL_MODULE_EXPORT(SynthControlPanelUI)
namespace VROSC {
class ChannelControlUI;
}
namespace VROSC {
class EffectsPanel;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class InstrumentController;
}
namespace VROSC {
class OctaveControlUI;
}
namespace VROSC {
class ScalePanelUI;
}
namespace VROSC {
class UIToggle;
}
// Forward declare root types
namespace VROSC {
class SynthControlPanelUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SynthControlPanelUI);
// Dependencies VROSC.InstrumentControlPanelUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SynthControlPanelUI
class CORDL_TYPE SynthControlPanelUI : public ::VROSC::InstrumentControlPanelUI {
public:
// Declarations
/// @brief Field _chanelControllUI, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__chanelControllUI, put=__cordl_internal_set__chanelControllUI)) ::UnityW<::VROSC::ChannelControlUI>  _chanelControllUI;

/// @brief Field _effectsPanelButton, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__effectsPanelButton, put=__cordl_internal_set__effectsPanelButton)) ::UnityW<::VROSC::UIToggle>  _effectsPanelButton;

/// @brief Field _effectsPanelUI, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__effectsPanelUI, put=__cordl_internal_set__effectsPanelUI)) ::UnityW<::VROSC::EffectsPanel>  _effectsPanelUI;

/// @brief Field _octaveControlUI, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__octaveControlUI, put=__cordl_internal_set__octaveControlUI)) ::UnityW<::VROSC::OctaveControlUI>  _octaveControlUI;

/// @brief Field _scalePanelButton, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__scalePanelButton, put=__cordl_internal_set__scalePanelButton)) ::UnityW<::VROSC::UIToggle>  _scalePanelButton;

/// @brief Field _scalePanelUI, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__scalePanelUI, put=__cordl_internal_set__scalePanelUI)) ::UnityW<::VROSC::ScalePanelUI>  _scalePanelUI;

/// @brief Method Awake, addr 0x1783fb4, size 0x1d8, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method EffectsPanelButtonToggled, addr 0x1784388, size 0x20, virtual false, abstract: false, final false
inline void EffectsPanelButtonToggled(::VROSC::InputDevice*  device, bool  isOn) ;

static inline ::VROSC::SynthControlPanelUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x178418c, size 0x1d8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ScalePanelButtonToggled, addr 0x1784364, size 0x24, virtual false, abstract: false, final false
inline void ScalePanelButtonToggled(::VROSC::InputDevice*  device, bool  isOn) ;

/// @brief Method Setup, addr 0x1783dc8, size 0x1ec, virtual true, abstract: false, final false
inline void Setup(::VROSC::InstrumentController*  instrumentController) ;

constexpr ::UnityW<::VROSC::ChannelControlUI> const& __cordl_internal_get__chanelControllUI() const;

constexpr ::UnityW<::VROSC::ChannelControlUI>& __cordl_internal_get__chanelControllUI() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__effectsPanelButton() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__effectsPanelButton() ;

constexpr ::UnityW<::VROSC::EffectsPanel> const& __cordl_internal_get__effectsPanelUI() const;

constexpr ::UnityW<::VROSC::EffectsPanel>& __cordl_internal_get__effectsPanelUI() ;

constexpr ::UnityW<::VROSC::OctaveControlUI> const& __cordl_internal_get__octaveControlUI() const;

constexpr ::UnityW<::VROSC::OctaveControlUI>& __cordl_internal_get__octaveControlUI() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__scalePanelButton() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__scalePanelButton() ;

constexpr ::UnityW<::VROSC::ScalePanelUI> const& __cordl_internal_get__scalePanelUI() const;

constexpr ::UnityW<::VROSC::ScalePanelUI>& __cordl_internal_get__scalePanelUI() ;

constexpr void __cordl_internal_set__chanelControllUI(::UnityW<::VROSC::ChannelControlUI>  value) ;

constexpr void __cordl_internal_set__effectsPanelButton(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__effectsPanelUI(::UnityW<::VROSC::EffectsPanel>  value) ;

constexpr void __cordl_internal_set__octaveControlUI(::UnityW<::VROSC::OctaveControlUI>  value) ;

constexpr void __cordl_internal_set__scalePanelButton(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__scalePanelUI(::UnityW<::VROSC::ScalePanelUI>  value) ;

/// @brief Method .ctor, addr 0x17844ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthControlPanelUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthControlPanelUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthControlPanelUI(SynthControlPanelUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthControlPanelUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthControlPanelUI(SynthControlPanelUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1312};

/// @brief Field _chanelControllUI, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::VROSC::ChannelControlUI>  ____chanelControllUI;

/// @brief Field _octaveControlUI, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::OctaveControlUI>  ____octaveControlUI;

/// @brief Field _effectsPanelUI, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::VROSC::EffectsPanel>  ____effectsPanelUI;

/// @brief Field _scalePanelUI, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::VROSC::ScalePanelUI>  ____scalePanelUI;

/// @brief Field _scalePanelButton, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____scalePanelButton;

/// @brief Field _effectsPanelButton, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____effectsPanelButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SynthControlPanelUI, ____chanelControllUI) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthControlPanelUI, ____octaveControlUI) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthControlPanelUI, ____effectsPanelUI) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthControlPanelUI, ____scalePanelUI) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthControlPanelUI, ____scalePanelButton) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthControlPanelUI, ____effectsPanelButton) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SynthControlPanelUI, 0xa0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SynthControlPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthControlPanelUI*, "VROSC", "SynthControlPanelUI");
