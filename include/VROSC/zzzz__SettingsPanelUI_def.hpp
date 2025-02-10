#pragma once
// IWYU pragma private; include "VROSC/SettingsPanelUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SettingsPanelUI)
namespace VROSC {
class BeatCounterUI;
}
namespace VROSC {
class RemoteControlUI;
}
namespace VROSC {
class UserDataControllers;
}
// Forward declare root types
namespace VROSC {
class SettingsPanelUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SettingsPanelUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SettingsPanelUI
class CORDL_TYPE SettingsPanelUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsOpen)) bool  IsOpen;

/// @brief Field _beatCounterUI, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatCounterUI, put=__cordl_internal_set__beatCounterUI)) ::UnityW<::VROSC::BeatCounterUI>  _beatCounterUI;

/// @brief Field _remoteControlUI, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__remoteControlUI, put=__cordl_internal_set__remoteControlUI)) ::UnityW<::VROSC::RemoteControlUI>  _remoteControlUI;

/// @brief Method Awake, addr 0x1739ca4, size 0xf8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::SettingsPanelUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1739d9c, size 0xf8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x1739e94, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method UserDataLoaded, addr 0x1739ee4, size 0x7c, virtual false, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  user) ;

constexpr ::UnityW<::VROSC::BeatCounterUI> const& __cordl_internal_get__beatCounterUI() const;

constexpr ::UnityW<::VROSC::BeatCounterUI>& __cordl_internal_get__beatCounterUI() ;

constexpr ::UnityW<::VROSC::RemoteControlUI> const& __cordl_internal_get__remoteControlUI() const;

constexpr ::UnityW<::VROSC::RemoteControlUI>& __cordl_internal_get__remoteControlUI() ;

constexpr void __cordl_internal_set__beatCounterUI(::UnityW<::VROSC::BeatCounterUI>  value) ;

constexpr void __cordl_internal_set__remoteControlUI(::UnityW<::VROSC::RemoteControlUI>  value) ;

/// @brief Method .ctor, addr 0x1739f60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsOpen, addr 0x1739c84, size 0x20, virtual false, abstract: false, final false
inline bool get_IsOpen() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsPanelUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsPanelUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsPanelUI(SettingsPanelUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsPanelUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsPanelUI(SettingsPanelUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1092};

/// @brief Field _beatCounterUI, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::BeatCounterUI>  ____beatCounterUI;

/// @brief Field _remoteControlUI, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::RemoteControlUI>  ____remoteControlUI;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SettingsPanelUI, ____beatCounterUI) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsPanelUI, ____remoteControlUI) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SettingsPanelUI, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SettingsPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SettingsPanelUI*, "VROSC", "SettingsPanelUI");
