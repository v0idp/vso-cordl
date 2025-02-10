#pragma once
// IWYU pragma private; include "VROSC/LoopPlaybackSettingsUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoopPlaybackSettingsUI)
namespace System {
template<typename T>
class Action_1;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
struct LoopPlaybackConfig_FadeDuration;
}
namespace VROSC {
struct LoopPlaybackConfig_TriggerSync;
}
namespace VROSC {
class LoopPlaybackConfig;
}
namespace VROSC {
class UISlideToggle;
}
namespace VROSC {
class UISpinner;
}
// Forward declare root types
namespace VROSC {
class LoopPlaybackSettingsUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopPlaybackSettingsUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlaybackSettingsUI
class CORDL_TYPE LoopPlaybackSettingsUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsOpen, put=set_IsOpen)) bool  IsOpen;

/// @brief Field OnActivated, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnActivated, put=setStaticF_OnActivated)) ::System::Action_1<bool>*  OnActivated;

/// @brief Field OnActivatedSelf, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnActivatedSelf, put=__cordl_internal_set_OnActivatedSelf)) ::System::Action_1<bool>*  OnActivatedSelf;

/// @brief Field <IsOpen>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsOpen_k__BackingField, put=__cordl_internal_set__IsOpen_k__BackingField)) bool  _IsOpen_k__BackingField;

/// @brief Field _closeWhenOtherWindowOpens, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__closeWhenOtherWindowOpens, put=__cordl_internal_set__closeWhenOtherWindowOpens)) bool  _closeWhenOtherWindowOpens;

/// @brief Field _config, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__config, put=__cordl_internal_set__config)) ::VROSC::LoopPlaybackConfig*  _config;

/// @brief Field _fadeInSpinner, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__fadeInSpinner, put=__cordl_internal_set__fadeInSpinner)) ::UnityW<::VROSC::UISpinner>  _fadeInSpinner;

/// @brief Field _fadeOutSpinner, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__fadeOutSpinner, put=__cordl_internal_set__fadeOutSpinner)) ::UnityW<::VROSC::UISpinner>  _fadeOutSpinner;

/// @brief Field _oneShotToggle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__oneShotToggle, put=__cordl_internal_set__oneShotToggle)) ::UnityW<::VROSC::UISlideToggle>  _oneShotToggle;

/// @brief Field _retriggerToggle, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__retriggerToggle, put=__cordl_internal_set__retriggerToggle)) ::UnityW<::VROSC::UISlideToggle>  _retriggerToggle;

/// @brief Field _setupDone, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__setupDone, put=__cordl_internal_set__setupDone)) bool  _setupDone;

/// @brief Field _startSpinner, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__startSpinner, put=__cordl_internal_set__startSpinner)) ::UnityW<::VROSC::UISpinner>  _startSpinner;

/// @brief Field _stopSpinner, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__stopSpinner, put=__cordl_internal_set__stopSpinner)) ::UnityW<::VROSC::UISpinner>  _stopSpinner;

/// @brief Method Awake, addr 0x189c000, size 0x454, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CloseIfOtherOpen, addr 0x189d664, size 0x80, virtual false, abstract: false, final false
inline void CloseIfOtherOpen(bool  isOn) ;

static inline ::VROSC::LoopPlaybackSettingsUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x189ced0, size 0x794, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnFadeInChanged, addr 0x189ce88, size 0x24, virtual false, abstract: false, final false
inline void OnFadeInChanged(::VROSC::LoopPlaybackConfig_FadeDuration  fadeIn) ;

/// @brief Method OnFadeOutChanged, addr 0x189ceac, size 0x24, virtual false, abstract: false, final false
inline void OnFadeOutChanged(::VROSC::LoopPlaybackConfig_FadeDuration  fadeOut) ;

/// @brief Method OnOneShotChanged, addr 0x189cdf0, size 0x74, virtual false, abstract: false, final false
inline void OnOneShotChanged(bool  oneShot) ;

/// @brief Method OnRetriggerChanged, addr 0x189ce64, size 0x24, virtual false, abstract: false, final false
inline void OnRetriggerChanged(bool  retrigger) ;

/// @brief Method OnStartChanged, addr 0x189cda8, size 0x24, virtual false, abstract: false, final false
inline void OnStartChanged(::VROSC::LoopPlaybackConfig_TriggerSync  startMode) ;

/// @brief Method OnStopChanged, addr 0x189cdcc, size 0x24, virtual false, abstract: false, final false
inline void OnStopChanged(::VROSC::LoopPlaybackConfig_TriggerSync  stopMode) ;

/// @brief Method SetConfig, addr 0x189c6a8, size 0x700, virtual false, abstract: false, final false
inline void SetConfig(::VROSC::LoopPlaybackConfig*  config) ;

/// @brief Method SetFadeIn, addr 0x189d7cc, size 0x14, virtual false, abstract: false, final false
inline void SetFadeIn(int32_t  selection) ;

/// @brief Method SetFadeOut, addr 0x189d7e0, size 0x14, virtual false, abstract: false, final false
inline void SetFadeOut(int32_t  selection) ;

/// @brief Method SetOneShot, addr 0x189d6e4, size 0xa8, virtual false, abstract: false, final false
inline void SetOneShot(::VROSC::InputDevice*  inputDevice, bool  oneShot) ;

/// @brief Method SetOpen, addr 0x189bf38, size 0xac, virtual false, abstract: false, final false
inline void SetOpen(bool  isOn) ;

/// @brief Method SetRetrigger, addr 0x189d7a0, size 0x18, virtual false, abstract: false, final false
inline void SetRetrigger(::VROSC::InputDevice*  inputDevice, bool  retrigger) ;

/// @brief Method SetStart, addr 0x189d7b8, size 0x14, virtual false, abstract: false, final false
inline void SetStart(int32_t  selection) ;

/// @brief Method SetStop, addr 0x189d78c, size 0x14, virtual false, abstract: false, final false
inline void SetStop(int32_t  selection) ;

/// @brief Method SetUIData, addr 0x189c454, size 0x254, virtual false, abstract: false, final false
inline void SetUIData() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnActivatedSelf() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnActivatedSelf() ;

constexpr bool const& __cordl_internal_get__IsOpen_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsOpen_k__BackingField() ;

constexpr bool const& __cordl_internal_get__closeWhenOtherWindowOpens() const;

constexpr bool& __cordl_internal_get__closeWhenOtherWindowOpens() ;

constexpr ::VROSC::LoopPlaybackConfig* const& __cordl_internal_get__config() const;

constexpr ::VROSC::LoopPlaybackConfig*& __cordl_internal_get__config() ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get__fadeInSpinner() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get__fadeInSpinner() ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get__fadeOutSpinner() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get__fadeOutSpinner() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__oneShotToggle() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__oneShotToggle() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__retriggerToggle() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__retriggerToggle() ;

constexpr bool const& __cordl_internal_get__setupDone() const;

constexpr bool& __cordl_internal_get__setupDone() ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get__startSpinner() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get__startSpinner() ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get__stopSpinner() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get__stopSpinner() ;

constexpr void __cordl_internal_set_OnActivatedSelf(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set__IsOpen_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__closeWhenOtherWindowOpens(bool  value) ;

constexpr void __cordl_internal_set__config(::VROSC::LoopPlaybackConfig*  value) ;

constexpr void __cordl_internal_set__fadeInSpinner(::UnityW<::VROSC::UISpinner>  value) ;

constexpr void __cordl_internal_set__fadeOutSpinner(::UnityW<::VROSC::UISpinner>  value) ;

constexpr void __cordl_internal_set__oneShotToggle(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__retriggerToggle(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__setupDone(bool  value) ;

constexpr void __cordl_internal_set__startSpinner(::UnityW<::VROSC::UISpinner>  value) ;

constexpr void __cordl_internal_set__stopSpinner(::UnityW<::VROSC::UISpinner>  value) ;

/// @brief Method .ctor, addr 0x189d7f4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<bool>* getStaticF_OnActivated() ;

/// @brief Method get_IsOpen, addr 0x189bff8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsOpen() ;

static inline void setStaticF_OnActivated(::System::Action_1<bool>*  value) ;

/// @brief Method set_IsOpen, addr 0x189bfec, size 0xc, virtual false, abstract: false, final false
inline void set_IsOpen(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlaybackSettingsUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlaybackSettingsUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlaybackSettingsUI(LoopPlaybackSettingsUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlaybackSettingsUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlaybackSettingsUI(LoopPlaybackSettingsUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{666};

/// @brief Field <IsOpen>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____IsOpen_k__BackingField;

/// @brief Field _oneShotToggle, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____oneShotToggle;

/// @brief Field _retriggerToggle, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____retriggerToggle;

/// @brief Field _startSpinner, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  ____startSpinner;

/// @brief Field _stopSpinner, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  ____stopSpinner;

/// @brief Field _fadeInSpinner, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  ____fadeInSpinner;

/// @brief Field _fadeOutSpinner, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  ____fadeOutSpinner;

/// @brief Field _closeWhenOtherWindowOpens, offset: 0x58, size: 0x1, def value: None
 bool  ____closeWhenOtherWindowOpens;

/// @brief Field OnActivatedSelf, offset: 0x60, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnActivatedSelf;

/// @brief Field _config, offset: 0x68, size: 0x8, def value: None
 ::VROSC::LoopPlaybackConfig*  ____config;

/// @brief Field _setupDone, offset: 0x70, size: 0x1, def value: None
 bool  ____setupDone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlaybackSettingsUI, ____IsOpen_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackSettingsUI, ____oneShotToggle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackSettingsUI, ____retriggerToggle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackSettingsUI, ____startSpinner) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackSettingsUI, ____stopSpinner) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackSettingsUI, ____fadeInSpinner) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackSettingsUI, ____fadeOutSpinner) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackSettingsUI, ____closeWhenOtherWindowOpens) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackSettingsUI, ___OnActivatedSelf) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackSettingsUI, ____config) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackSettingsUI, ____setupDone) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlaybackSettingsUI, 0x78>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopPlaybackSettingsUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlaybackSettingsUI*, "VROSC", "LoopPlaybackSettingsUI");
