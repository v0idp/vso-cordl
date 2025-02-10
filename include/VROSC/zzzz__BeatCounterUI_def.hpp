#pragma once
// IWYU pragma private; include "VROSC/BeatCounterUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatCounterUI)
namespace TMPro {
class TextMeshPro;
}
namespace VROSC {
struct BeatCounterUI_SyncToggleSource;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
struct Metronome_Medium;
}
namespace VROSC {
struct Metronome_Mode;
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
// Forward declare root types
namespace VROSC {
struct BeatCounterUI_SyncToggleSource;
}
namespace VROSC {
class BeatCounterUI;
}
// Write type traits
MARK_VAL_T(::VROSC::BeatCounterUI_SyncToggleSource);
MARK_REF_PTR_T(::VROSC::BeatCounterUI);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.BeatCounterUI/SyncToggleSource
struct CORDL_TYPE BeatCounterUI_SyncToggleSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BeatCounterUI_SyncToggleSource_Unwrapped
enum struct __BeatCounterUI_SyncToggleSource_Unwrapped : int32_t {
__E_ToggleButton = static_cast<int32_t>(0x0),
__E_DataLoad = static_cast<int32_t>(0x1),
__E_Slider = static_cast<int32_t>(0x2),
__E_Reset = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BeatCounterUI_SyncToggleSource_Unwrapped () const noexcept {
return static_cast<__BeatCounterUI_SyncToggleSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BeatCounterUI_SyncToggleSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BeatCounterUI_SyncToggleSource(int32_t  value__) noexcept;

/// @brief Field DataLoad value: I32(1)
static ::VROSC::BeatCounterUI_SyncToggleSource const DataLoad;

/// @brief Field Reset value: I32(3)
static ::VROSC::BeatCounterUI_SyncToggleSource const Reset;

/// @brief Field Slider value: I32(2)
static ::VROSC::BeatCounterUI_SyncToggleSource const Slider;

/// @brief Field ToggleButton value: I32(0)
static ::VROSC::BeatCounterUI_SyncToggleSource const ToggleButton;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{305};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BeatCounterUI_SyncToggleSource, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BeatCounterUI_SyncToggleSource, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.BeatCounterUI
class CORDL_TYPE BeatCounterUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SyncToggleSource = ::VROSC::BeatCounterUI_SyncToggleSource;

 __declspec(property(get=get_DisplayedLinkPeers, put=set_DisplayedLinkPeers)) int32_t  DisplayedLinkPeers;

/// @brief Field <DisplayedLinkPeers>k__BackingField, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__DisplayedLinkPeers_k__BackingField, put=__cordl_internal_set__DisplayedLinkPeers_k__BackingField)) int32_t  _DisplayedLinkPeers_k__BackingField;

/// @brief Field _abletonLinkButton, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__abletonLinkButton, put=__cordl_internal_set__abletonLinkButton)) ::UnityW<::VROSC::UISlideToggle>  _abletonLinkButton;

/// @brief Field _beatsPerBar, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatsPerBar, put=__cordl_internal_set__beatsPerBar)) ::UnityW<::VROSC::UISpinner>  _beatsPerBar;

/// @brief Field _bpm, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__bpm, put=__cordl_internal_set__bpm)) ::UnityW<::TMPro::TextMeshPro>  _bpm;

/// @brief Field _bpmResetButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__bpmResetButton, put=__cordl_internal_set__bpmResetButton)) ::UnityW<::VROSC::UIButton>  _bpmResetButton;

/// @brief Field _bpmSlider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__bpmSlider, put=__cordl_internal_set__bpmSlider)) ::UnityW<::VROSC::UISlider>  _bpmSlider;

/// @brief Field _linkLatencyResetButton, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__linkLatencyResetButton, put=__cordl_internal_set__linkLatencyResetButton)) ::UnityW<::VROSC::UIButton>  _linkLatencyResetButton;

/// @brief Field _linkLatencySlider, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__linkLatencySlider, put=__cordl_internal_set__linkLatencySlider)) ::UnityW<::VROSC::UISlider>  _linkLatencySlider;

/// @brief Field _linkPeersDisplay, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__linkPeersDisplay, put=__cordl_internal_set__linkPeersDisplay)) ::UnityW<::TMPro::TextMeshPro>  _linkPeersDisplay;

/// @brief Field _looperHadLoops, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get__looperHadLoops, put=__cordl_internal_set__looperHadLoops)) bool  _looperHadLoops;

/// @brief Field _metronomeMedium, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__metronomeMedium, put=__cordl_internal_set__metronomeMedium)) ::UnityW<::VROSC::UISpinner>  _metronomeMedium;

/// @brief Field _metronomeMode, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__metronomeMode, put=__cordl_internal_set__metronomeMode)) ::UnityW<::VROSC::UISpinner>  _metronomeMode;

/// @brief Field _setToDefaultBPMWhenGrabbed, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__setToDefaultBPMWhenGrabbed, put=__cordl_internal_set__setToDefaultBPMWhenGrabbed)) bool  _setToDefaultBPMWhenGrabbed;

/// @brief Field _syncIsInternalDefaultValue, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get__syncIsInternalDefaultValue, put=__cordl_internal_set__syncIsInternalDefaultValue)) bool  _syncIsInternalDefaultValue;

/// @brief Field _syncIsManualBPM, offset 0x7a, size 0x1 
 __declspec(property(get=__cordl_internal_get__syncIsManualBPM, put=__cordl_internal_set__syncIsManualBPM)) bool  _syncIsManualBPM;

/// @brief Field _syncSourceButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__syncSourceButton, put=__cordl_internal_set__syncSourceButton)) ::UnityW<::VROSC::UISlideToggle>  _syncSourceButton;

/// @brief Field _userIsGrabbingSlider, offset 0x7b, size 0x1 
 __declspec(property(get=__cordl_internal_get__userIsGrabbingSlider, put=__cordl_internal_set__userIsGrabbingSlider)) bool  _userIsGrabbingSlider;

/// @brief Method AbletonLinkToggled, addr 0x182c974, size 0x80, virtual false, abstract: false, final false
inline void AbletonLinkToggled(::VROSC::InputDevice*  inputDevice, bool  toggled) ;

/// @brief Method Awake, addr 0x182af24, size 0x6dc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BeatsPerBarChanged, addr 0x182c970, size 0x4, virtual false, abstract: false, final false
inline void BeatsPerBarChanged(int32_t  beatsPerBar) ;

/// @brief Method BpmChanged, addr 0x182c804, size 0x4, virtual false, abstract: false, final false
inline void BpmChanged(double_t  bpm) ;

/// @brief Method BpmReset, addr 0x182c808, size 0x110, virtual false, abstract: false, final false
inline void BpmReset(::VROSC::ClickData*  clickData) ;

/// @brief Method BpmSliderGrabbed, addr 0x182c4e4, size 0xb0, virtual false, abstract: false, final false
inline void BpmSliderGrabbed(bool  isGrabbed) ;

/// @brief Method BpmSliderValueChanged, addr 0x182c594, size 0x270, virtual false, abstract: false, final false
inline void BpmSliderValueChanged(float_t  value) ;

/// @brief Method GetBpmSliderBpm, addr 0x182b68c, size 0x20, virtual false, abstract: false, final false
inline double_t GetBpmSliderBpm(float_t  sliderValue) ;

/// @brief Method GetBpmSliderValue, addr 0x182c4c4, size 0x20, virtual false, abstract: false, final false
inline float_t GetBpmSliderValue(double_t  bpm) ;

/// @brief Method LinkLatencyChanged, addr 0x182c9f4, size 0xa4, virtual false, abstract: false, final false
inline void LinkLatencyChanged(float_t  value) ;

/// @brief Method LinkLatencyReset, addr 0x182ca98, size 0x74, virtual false, abstract: false, final false
inline void LinkLatencyReset(::VROSC::ClickData*  clickData) ;

/// @brief Method LoopStationHasLoopsChanged, addr 0x182bafc, size 0x4c, virtual false, abstract: false, final false
inline void LoopStationHasLoopsChanged(bool  hasLoops) ;

static inline ::VROSC::BeatCounterUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x182bb48, size 0x698, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x182c1e0, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ResetAll, addr 0x182b600, size 0x8c, virtual false, abstract: false, final false
inline void ResetAll() ;

/// @brief Method SetBeatsPerBar, addr 0x182c918, size 0x58, virtual false, abstract: false, final false
inline void SetBeatsPerBar(int32_t  spinnerIndex) ;

/// @brief Method SetBpmSliderValue, addr 0x182ad84, size 0x48, virtual false, abstract: false, final false
inline void SetBpmSliderValue(double_t  bpm) ;

/// @brief Method SetLinkLatencySliderValue, addr 0x1829df4, size 0x80, virtual false, abstract: false, final false
inline void SetLinkLatencySliderValue(float_t  latency) ;

/// @brief Method SetLinkPeersDisplayValue, addr 0x182aea4, size 0x54, virtual false, abstract: false, final false
inline void SetLinkPeersDisplayValue(int32_t  numPeers) ;

/// @brief Method SetMetronomeMedium, addr 0x182cb70, size 0x64, virtual false, abstract: false, final false
inline void SetMetronomeMedium(int32_t  medium) ;

/// @brief Method SetMetronomeMedium, addr 0x182cbf8, size 0x24, virtual false, abstract: false, final false
inline void SetMetronomeMedium(::VROSC::Metronome_Medium  metronomeMedium) ;

/// @brief Method SetMetronomeMode, addr 0x182cbd4, size 0x24, virtual false, abstract: false, final false
inline void SetMetronomeMode(::VROSC::Metronome_Mode  metronomeMode) ;

/// @brief Method SetMetronomeMode, addr 0x182cb0c, size 0x64, virtual false, abstract: false, final false
inline void SetMetronomeMode(int32_t  mode) ;

/// @brief Method SetSyncIsManualBPM, addr 0x1829e74, size 0x24, virtual false, abstract: false, final false
inline void SetSyncIsManualBPM(bool  syncIsManualBPM) ;

/// @brief Method Setup, addr 0x182968c, size 0x6a4, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method ShowOrHideBPMReset, addr 0x182b77c, size 0x2d0, virtual false, abstract: false, final false
inline void ShowOrHideBPMReset() ;

/// @brief Method SyncSourceToggled, addr 0x182c4b8, size 0xc, virtual false, abstract: false, final false
inline void SyncSourceToggled(::VROSC::InputDevice*  inputDevice, bool  syncIsManualBPM) ;

/// @brief Method SyncSourceToggled, addr 0x182c2b4, size 0x204, virtual false, abstract: false, final false
inline void SyncSourceToggled(::VROSC::InputDevice*  inputDevice, bool  syncIsManualBPM, ::VROSC::BeatCounterUI_SyncToggleSource  source) ;

/// @brief Method Update, addr 0x182ba4c, size 0xb0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateText, addr 0x182b6ac, size 0xd0, virtual false, abstract: false, final false
inline void UpdateText() ;

/// @brief Method UpdateUI, addr 0x182c1e4, size 0xd0, virtual false, abstract: false, final false
inline void UpdateUI() ;

constexpr int32_t const& __cordl_internal_get__DisplayedLinkPeers_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__DisplayedLinkPeers_k__BackingField() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__abletonLinkButton() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__abletonLinkButton() ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get__beatsPerBar() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get__beatsPerBar() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__bpm() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__bpm() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__bpmResetButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__bpmResetButton() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__bpmSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__bpmSlider() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__linkLatencyResetButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__linkLatencyResetButton() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__linkLatencySlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__linkLatencySlider() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__linkPeersDisplay() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__linkPeersDisplay() ;

constexpr bool const& __cordl_internal_get__looperHadLoops() const;

constexpr bool& __cordl_internal_get__looperHadLoops() ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get__metronomeMedium() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get__metronomeMedium() ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get__metronomeMode() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get__metronomeMode() ;

constexpr bool const& __cordl_internal_get__setToDefaultBPMWhenGrabbed() const;

constexpr bool& __cordl_internal_get__setToDefaultBPMWhenGrabbed() ;

constexpr bool const& __cordl_internal_get__syncIsInternalDefaultValue() const;

constexpr bool& __cordl_internal_get__syncIsInternalDefaultValue() ;

constexpr bool const& __cordl_internal_get__syncIsManualBPM() const;

constexpr bool& __cordl_internal_get__syncIsManualBPM() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__syncSourceButton() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__syncSourceButton() ;

constexpr bool const& __cordl_internal_get__userIsGrabbingSlider() const;

constexpr bool& __cordl_internal_get__userIsGrabbingSlider() ;

constexpr void __cordl_internal_set__DisplayedLinkPeers_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__abletonLinkButton(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__beatsPerBar(::UnityW<::VROSC::UISpinner>  value) ;

constexpr void __cordl_internal_set__bpm(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__bpmResetButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__bpmSlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__linkLatencyResetButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__linkLatencySlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__linkPeersDisplay(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__looperHadLoops(bool  value) ;

constexpr void __cordl_internal_set__metronomeMedium(::UnityW<::VROSC::UISpinner>  value) ;

constexpr void __cordl_internal_set__metronomeMode(::UnityW<::VROSC::UISpinner>  value) ;

constexpr void __cordl_internal_set__setToDefaultBPMWhenGrabbed(bool  value) ;

constexpr void __cordl_internal_set__syncIsInternalDefaultValue(bool  value) ;

constexpr void __cordl_internal_set__syncIsManualBPM(bool  value) ;

constexpr void __cordl_internal_set__syncSourceButton(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__userIsGrabbingSlider(bool  value) ;

/// @brief Method .ctor, addr 0x182cc1c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DisplayedLinkPeers, addr 0x182af14, size 0x8, virtual false, abstract: false, final false
inline int32_t get_DisplayedLinkPeers() ;

/// @brief Method set_DisplayedLinkPeers, addr 0x182af1c, size 0x8, virtual false, abstract: false, final false
inline void set_DisplayedLinkPeers(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BeatCounterUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BeatCounterUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatCounterUI(BeatCounterUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatCounterUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatCounterUI(BeatCounterUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{306};

/// @brief Field _syncSourceButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____syncSourceButton;

/// @brief Field _bpmSlider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____bpmSlider;

/// @brief Field _bpmResetButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____bpmResetButton;

/// @brief Field _beatsPerBar, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  ____beatsPerBar;

/// @brief Field _metronomeMode, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  ____metronomeMode;

/// @brief Field _metronomeMedium, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  ____metronomeMedium;

/// @brief Field _bpm, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____bpm;

/// @brief Field _abletonLinkButton, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____abletonLinkButton;

/// @brief Field _linkLatencySlider, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____linkLatencySlider;

/// @brief Field _linkLatencyResetButton, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____linkLatencyResetButton;

/// @brief Field _linkPeersDisplay, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____linkPeersDisplay;

/// @brief Field _setToDefaultBPMWhenGrabbed, offset: 0x78, size: 0x1, def value: None
 bool  ____setToDefaultBPMWhenGrabbed;

/// @brief Field _syncIsInternalDefaultValue, offset: 0x79, size: 0x1, def value: None
 bool  ____syncIsInternalDefaultValue;

/// @brief Field _syncIsManualBPM, offset: 0x7a, size: 0x1, def value: None
 bool  ____syncIsManualBPM;

/// @brief Field _userIsGrabbingSlider, offset: 0x7b, size: 0x1, def value: None
 bool  ____userIsGrabbingSlider;

/// @brief Field _looperHadLoops, offset: 0x7c, size: 0x1, def value: None
 bool  ____looperHadLoops;

/// @brief Field <DisplayedLinkPeers>k__BackingField, offset: 0x80, size: 0x4, def value: None
 int32_t  ____DisplayedLinkPeers_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BeatCounterUI, ____syncSourceButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounterUI, ____bpmSlider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounterUI, ____bpmResetButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounterUI, ____beatsPerBar) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounterUI, ____metronomeMode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounterUI, ____metronomeMedium) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounterUI, ____bpm) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounterUI, ____abletonLinkButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounterUI, ____linkLatencySlider) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounterUI, ____linkLatencyResetButton) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounterUI, ____linkPeersDisplay) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounterUI, ____setToDefaultBPMWhenGrabbed) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounterUI, ____syncIsInternalDefaultValue) == 0x79, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounterUI, ____syncIsManualBPM) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounterUI, ____userIsGrabbingSlider) == 0x7b, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounterUI, ____looperHadLoops) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatCounterUI, ____DisplayedLinkPeers_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BeatCounterUI, 0x88>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BeatCounterUI_SyncToggleSource, "VROSC", "BeatCounterUI/SyncToggleSource");
NEED_NO_BOX(::VROSC::BeatCounterUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BeatCounterUI*, "VROSC", "BeatCounterUI");
