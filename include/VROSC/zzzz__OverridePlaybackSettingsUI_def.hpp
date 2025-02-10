#pragma once
// IWYU pragma private; include "VROSC/OverridePlaybackSettingsUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__LoopPlaybackSettingsUI_def.hpp"
CORDL_MODULE_EXPORT(OverridePlaybackSettingsUI)
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class LoopPlaybackConfigOverride;
}
namespace VROSC {
class UIToggle;
}
// Forward declare root types
namespace VROSC {
class OverridePlaybackSettingsUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::OverridePlaybackSettingsUI);
// Dependencies VROSC.LoopPlaybackSettingsUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.OverridePlaybackSettingsUI
class CORDL_TYPE OverridePlaybackSettingsUI : public ::VROSC::LoopPlaybackSettingsUI {
public:
// Declarations
/// @brief Field _overrideConfig, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__overrideConfig, put=__cordl_internal_set__overrideConfig)) ::VROSC::LoopPlaybackConfigOverride*  _overrideConfig;

/// @brief Field _overrideFadeIn, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__overrideFadeIn, put=__cordl_internal_set__overrideFadeIn)) ::UnityW<::VROSC::UIToggle>  _overrideFadeIn;

/// @brief Field _overrideFadeOut, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__overrideFadeOut, put=__cordl_internal_set__overrideFadeOut)) ::UnityW<::VROSC::UIToggle>  _overrideFadeOut;

/// @brief Field _overrideOneShot, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__overrideOneShot, put=__cordl_internal_set__overrideOneShot)) ::UnityW<::VROSC::UIToggle>  _overrideOneShot;

/// @brief Field _overrideRetrigger, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__overrideRetrigger, put=__cordl_internal_set__overrideRetrigger)) ::UnityW<::VROSC::UIToggle>  _overrideRetrigger;

/// @brief Field _overrideStart, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__overrideStart, put=__cordl_internal_set__overrideStart)) ::UnityW<::VROSC::UIToggle>  _overrideStart;

/// @brief Field _overrideStop, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__overrideStop, put=__cordl_internal_set__overrideStop)) ::UnityW<::VROSC::UIToggle>  _overrideStop;

/// @brief Method Awake, addr 0x189df88, size 0x4bc, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::OverridePlaybackSettingsUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x189e444, size 0x6a8, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnFadeInOverriddenChanged, addr 0x189f2a4, size 0x54, virtual false, abstract: false, final false
inline void OnFadeInOverriddenChanged(bool  active) ;

/// @brief Method OnFadeOutOverriddenChanged, addr 0x189f2f8, size 0x54, virtual false, abstract: false, final false
inline void OnFadeOutOverriddenChanged(bool  active) ;

/// @brief Method OnOneShotOverriddenChanged, addr 0x189f34c, size 0x54, virtual false, abstract: false, final false
inline void OnOneShotOverriddenChanged(bool  active) ;

/// @brief Method OnRetriggerOverriddenChanged, addr 0x189f3a0, size 0x54, virtual false, abstract: false, final false
inline void OnRetriggerOverriddenChanged(bool  active) ;

/// @brief Method OnStartOverriddenChanged, addr 0x189f1fc, size 0x54, virtual false, abstract: false, final false
inline void OnStartOverriddenChanged(bool  active) ;

/// @brief Method OnStopOverriddenChanged, addr 0x189f250, size 0x54, virtual false, abstract: false, final false
inline void OnStopOverriddenChanged(bool  active) ;

/// @brief Method SetFadeInOverridden, addr 0x189f464, size 0x1c, virtual false, abstract: false, final false
inline void SetFadeInOverridden(::VROSC::InputDevice*  device, bool  active) ;

/// @brief Method SetFadeOutOverridden, addr 0x189f480, size 0x1c, virtual false, abstract: false, final false
inline void SetFadeOutOverridden(::VROSC::InputDevice*  device, bool  active) ;

/// @brief Method SetOneShotOverridden, addr 0x189f3f4, size 0x1c, virtual false, abstract: false, final false
inline void SetOneShotOverridden(::VROSC::InputDevice*  device, bool  active) ;

/// @brief Method SetOverrideConfig, addr 0x189eaec, size 0x710, virtual false, abstract: false, final false
inline void SetOverrideConfig(::VROSC::LoopPlaybackConfigOverride*  config) ;

/// @brief Method SetRetriggerOverridden, addr 0x189f410, size 0x1c, virtual false, abstract: false, final false
inline void SetRetriggerOverridden(::VROSC::InputDevice*  device, bool  active) ;

/// @brief Method SetStartOverridden, addr 0x189f42c, size 0x1c, virtual false, abstract: false, final false
inline void SetStartOverridden(::VROSC::InputDevice*  device, bool  active) ;

/// @brief Method SetStopOverridden, addr 0x189f448, size 0x1c, virtual false, abstract: false, final false
inline void SetStopOverridden(::VROSC::InputDevice*  device, bool  active) ;

constexpr ::VROSC::LoopPlaybackConfigOverride* const& __cordl_internal_get__overrideConfig() const;

constexpr ::VROSC::LoopPlaybackConfigOverride*& __cordl_internal_get__overrideConfig() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__overrideFadeIn() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__overrideFadeIn() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__overrideFadeOut() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__overrideFadeOut() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__overrideOneShot() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__overrideOneShot() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__overrideRetrigger() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__overrideRetrigger() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__overrideStart() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__overrideStart() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__overrideStop() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__overrideStop() ;

constexpr void __cordl_internal_set__overrideConfig(::VROSC::LoopPlaybackConfigOverride*  value) ;

constexpr void __cordl_internal_set__overrideFadeIn(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__overrideFadeOut(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__overrideOneShot(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__overrideRetrigger(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__overrideStart(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__overrideStop(::UnityW<::VROSC::UIToggle>  value) ;

/// @brief Method .ctor, addr 0x189f49c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OverridePlaybackSettingsUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OverridePlaybackSettingsUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OverridePlaybackSettingsUI(OverridePlaybackSettingsUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OverridePlaybackSettingsUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OverridePlaybackSettingsUI(OverridePlaybackSettingsUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{668};

/// @brief Field _overrideOneShot, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____overrideOneShot;

/// @brief Field _overrideRetrigger, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____overrideRetrigger;

/// @brief Field _overrideStart, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____overrideStart;

/// @brief Field _overrideStop, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____overrideStop;

/// @brief Field _overrideFadeIn, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____overrideFadeIn;

/// @brief Field _overrideFadeOut, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____overrideFadeOut;

/// @brief Field _overrideConfig, offset: 0xa8, size: 0x8, def value: None
 ::VROSC::LoopPlaybackConfigOverride*  ____overrideConfig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::OverridePlaybackSettingsUI, ____overrideOneShot) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::OverridePlaybackSettingsUI, ____overrideRetrigger) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::OverridePlaybackSettingsUI, ____overrideStart) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::OverridePlaybackSettingsUI, ____overrideStop) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::OverridePlaybackSettingsUI, ____overrideFadeIn) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::OverridePlaybackSettingsUI, ____overrideFadeOut) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::OverridePlaybackSettingsUI, ____overrideConfig) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::OverridePlaybackSettingsUI, 0xb0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::OverridePlaybackSettingsUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OverridePlaybackSettingsUI*, "VROSC", "OverridePlaybackSettingsUI");
