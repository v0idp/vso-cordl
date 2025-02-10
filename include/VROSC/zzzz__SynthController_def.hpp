#pragma once
// IWYU pragma private; include "VROSC/SynthController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__InstrumentController_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SynthController)
namespace System {
class Action;
}
namespace VROSC {
class EffectsPanel;
}
namespace VROSC {
struct HandType;
}
namespace VROSC {
class InstrumentDataController;
}
namespace VROSC {
struct Note;
}
namespace VROSC {
class ParameterLinksPreset;
}
namespace VROSC {
class PatchSettings;
}
namespace VROSC {
class ScalePanelUI;
}
namespace VROSC {
class ScalePreset;
}
namespace VROSC {
class Signal;
}
namespace VROSC {
class SynthControlPanelUI;
}
namespace VROSC {
class SynthDataController;
}
namespace VROSC {
class UserDataControllers;
}
// Forward declare root types
namespace VROSC {
class SynthController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SynthController);
// Dependencies VROSC.InstrumentController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SynthController
class CORDL_TYPE SynthController : public ::VROSC::InstrumentController {
public:
// Declarations
 __declspec(property(get=get_CurrentChannel)) int32_t  CurrentChannel;

 __declspec(property(get=get_CurrentOctave)) int32_t  CurrentOctave;

 __declspec(property(get=get_CurrentPatchSettings)) ::VROSC::PatchSettings*  CurrentPatchSettings;

 __declspec(property(get=get_DefaultPatchSettings)) ::VROSC::PatchSettings*  DefaultPatchSettings;

 __declspec(property(get=get_LinkHands)) bool  LinkHands;

 __declspec(property(get=get_MinOctave)) int32_t  MinOctave;

/// @brief Field OnPatchChanged, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPatchChanged, put=__cordl_internal_set_OnPatchChanged)) ::System::Action*  OnPatchChanged;

 __declspec(property(get=get_SynthDataController)) ::VROSC::SynthDataController*  SynthDataController;

/// @brief Field _classicPreset, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__classicPreset, put=__cordl_internal_set__classicPreset)) ::UnityW<::VROSC::ParameterLinksPreset>  _classicPreset;

/// @brief Field _defaultPreset, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultPreset, put=__cordl_internal_set__defaultPreset)) ::UnityW<::VROSC::ParameterLinksPreset>  _defaultPreset;

/// @brief Field _effectspanel, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__effectspanel, put=__cordl_internal_set__effectspanel)) ::UnityW<::VROSC::EffectsPanel>  _effectspanel;

/// @brief Field _externalPreset, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__externalPreset, put=__cordl_internal_set__externalPreset)) ::UnityW<::VROSC::ParameterLinksPreset>  _externalPreset;

/// @brief Field _scalePanelUI, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__scalePanelUI, put=__cordl_internal_set__scalePanelUI)) ::UnityW<::VROSC::ScalePanelUI>  _scalePanelUI;

/// @brief Field _synthControlPanelUI, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__synthControlPanelUI, put=__cordl_internal_set__synthControlPanelUI)) ::UnityW<::VROSC::SynthControlPanelUI>  _synthControlPanelUI;

/// @brief Field _useMallets, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get__useMallets, put=__cordl_internal_set__useMallets)) bool  _useMallets;

static inline ::VROSC::SynthController* New_ctor() ;

/// @brief Method OnDestroy, addr 0x170eca8, size 0x100, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ScalePresetChanged, addr 0x170f204, size 0xa0, virtual false, abstract: false, final false
inline void ScalePresetChanged(::VROSC::ScalePreset*  scalePreset, ::VROSC::Note  key) ;

/// @brief Method SendPatchAnalytics, addr 0x170f084, size 0xc8, virtual false, abstract: false, final false
inline void SendPatchAnalytics() ;

/// @brief Method SetInteractionValToHand, addr 0x170f2a4, size 0x6c, virtual false, abstract: false, final false
inline void SetInteractionValToHand(::VROSC::HandType  handType, float_t  parameterValue) ;

/// @brief Method SetNextOctave, addr 0x170f14c, size 0x1c, virtual false, abstract: false, final false
inline void SetNextOctave() ;

/// @brief Method SetPreviousOctave, addr 0x170f168, size 0x1c, virtual false, abstract: false, final false
inline void SetPreviousOctave() ;

/// @brief Method SetSound, addr 0x170ef7c, size 0x108, virtual true, abstract: false, final false
inline void SetSound(int32_t  index) ;

/// @brief Method Setup, addr 0x170eb94, size 0x114, virtual true, abstract: false, final false
inline void Setup() ;

/// @brief Method SynthsDataLoaded, addr 0x170ee10, size 0x16c, virtual false, abstract: false, final false
inline void SynthsDataLoaded(::VROSC::InstrumentDataController*  dataController) ;

/// @brief Method Toggle, addr 0x170f310, size 0x7c, virtual true, abstract: false, final false
inline void Toggle() ;

/// @brief Method UpdateOutput, addr 0x170f184, size 0x80, virtual true, abstract: false, final false
inline void UpdateOutput() ;

/// @brief Method UpdateParameters, addr 0x170f38c, size 0x2a0, virtual false, abstract: false, final false
inline void UpdateParameters(::VROSC::Signal*  signal) ;

/// @brief Method UserDataLoaded, addr 0x170eda8, size 0x68, virtual true, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  user) ;

constexpr ::System::Action* const& __cordl_internal_get_OnPatchChanged() const;

constexpr ::System::Action*& __cordl_internal_get_OnPatchChanged() ;

constexpr ::UnityW<::VROSC::ParameterLinksPreset> const& __cordl_internal_get__classicPreset() const;

constexpr ::UnityW<::VROSC::ParameterLinksPreset>& __cordl_internal_get__classicPreset() ;

constexpr ::UnityW<::VROSC::ParameterLinksPreset> const& __cordl_internal_get__defaultPreset() const;

constexpr ::UnityW<::VROSC::ParameterLinksPreset>& __cordl_internal_get__defaultPreset() ;

constexpr ::UnityW<::VROSC::EffectsPanel> const& __cordl_internal_get__effectspanel() const;

constexpr ::UnityW<::VROSC::EffectsPanel>& __cordl_internal_get__effectspanel() ;

constexpr ::UnityW<::VROSC::ParameterLinksPreset> const& __cordl_internal_get__externalPreset() const;

constexpr ::UnityW<::VROSC::ParameterLinksPreset>& __cordl_internal_get__externalPreset() ;

constexpr ::UnityW<::VROSC::ScalePanelUI> const& __cordl_internal_get__scalePanelUI() const;

constexpr ::UnityW<::VROSC::ScalePanelUI>& __cordl_internal_get__scalePanelUI() ;

constexpr ::UnityW<::VROSC::SynthControlPanelUI> const& __cordl_internal_get__synthControlPanelUI() const;

constexpr ::UnityW<::VROSC::SynthControlPanelUI>& __cordl_internal_get__synthControlPanelUI() ;

constexpr bool const& __cordl_internal_get__useMallets() const;

constexpr bool& __cordl_internal_get__useMallets() ;

constexpr void __cordl_internal_set_OnPatchChanged(::System::Action*  value) ;

constexpr void __cordl_internal_set__classicPreset(::UnityW<::VROSC::ParameterLinksPreset>  value) ;

constexpr void __cordl_internal_set__defaultPreset(::UnityW<::VROSC::ParameterLinksPreset>  value) ;

constexpr void __cordl_internal_set__effectspanel(::UnityW<::VROSC::EffectsPanel>  value) ;

constexpr void __cordl_internal_set__externalPreset(::UnityW<::VROSC::ParameterLinksPreset>  value) ;

constexpr void __cordl_internal_set__scalePanelUI(::UnityW<::VROSC::ScalePanelUI>  value) ;

constexpr void __cordl_internal_set__synthControlPanelUI(::UnityW<::VROSC::SynthControlPanelUI>  value) ;

constexpr void __cordl_internal_set__useMallets(bool  value) ;

/// @brief Method .ctor, addr 0x170f62c, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentChannel, addr 0x170ea78, size 0x1c, virtual true, abstract: false, final false
inline int32_t get_CurrentChannel() ;

/// @brief Method get_CurrentOctave, addr 0x170eacc, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_CurrentOctave() ;

/// @brief Method get_CurrentPatchSettings, addr 0x170eab0, size 0x1c, virtual true, abstract: false, final false
inline ::VROSC::PatchSettings* get_CurrentPatchSettings() ;

/// @brief Method get_DefaultPatchSettings, addr 0x170ea94, size 0x1c, virtual false, abstract: false, final false
inline ::VROSC::PatchSettings* get_DefaultPatchSettings() ;

/// @brief Method get_LinkHands, addr 0x170eb04, size 0x90, virtual false, abstract: false, final false
inline bool get_LinkHands() ;

/// @brief Method get_MinOctave, addr 0x170eae8, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_MinOctave() ;

/// @brief Method get_SynthDataController, addr 0x170ea00, size 0x78, virtual false, abstract: false, final false
inline ::VROSC::SynthDataController* get_SynthDataController() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthController(SynthController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthController(SynthController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{879};

/// @brief Field _scalePanelUI, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::VROSC::ScalePanelUI>  ____scalePanelUI;

/// @brief Field _effectspanel, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::VROSC::EffectsPanel>  ____effectspanel;

/// @brief Field _synthControlPanelUI, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::VROSC::SynthControlPanelUI>  ____synthControlPanelUI;

/// @brief Field _defaultPreset, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::VROSC::ParameterLinksPreset>  ____defaultPreset;

/// @brief Field _classicPreset, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::VROSC::ParameterLinksPreset>  ____classicPreset;

/// @brief Field _externalPreset, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::VROSC::ParameterLinksPreset>  ____externalPreset;

/// @brief Field _useMallets, offset: 0xf8, size: 0x1, def value: None
 bool  ____useMallets;

/// @brief Field OnPatchChanged, offset: 0x100, size: 0x8, def value: None
 ::System::Action*  ___OnPatchChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SynthController, ____scalePanelUI) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthController, ____effectspanel) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthController, ____synthControlPanelUI) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthController, ____defaultPreset) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthController, ____classicPreset) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthController, ____externalPreset) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthController, ____useMallets) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthController, ___OnPatchChanged) == 0x100, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SynthController, 0x108>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SynthController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthController*, "VROSC", "SynthController");
