#pragma once
// IWYU pragma private; include "VROSC/SpectatorCameraUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpectatorCameraUI)
namespace VROSC {
class ClickData;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UISlideToggle;
}
namespace VROSC {
class UISpinner;
}
namespace VROSC {
class UserDataControllers;
}
// Forward declare root types
namespace VROSC {
class SpectatorCameraUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SpectatorCameraUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SpectatorCameraUI
class CORDL_TYPE SpectatorCameraUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _resetMoveableCameraButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__resetMoveableCameraButton, put=__cordl_internal_set__resetMoveableCameraButton)) ::UnityW<::VROSC::UIButton>  _resetMoveableCameraButton;

/// @brief Field _spectatorCameraAvailable, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__spectatorCameraAvailable, put=__cordl_internal_set__spectatorCameraAvailable)) bool  _spectatorCameraAvailable;

/// @brief Field _spectatorCameraSelector, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__spectatorCameraSelector, put=__cordl_internal_set__spectatorCameraSelector)) ::UnityW<::VROSC::UISpinner>  _spectatorCameraSelector;

/// @brief Field _spectatorHideBackground, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__spectatorHideBackground, put=__cordl_internal_set__spectatorHideBackground)) ::UnityW<::VROSC::UISlideToggle>  _spectatorHideBackground;

/// @brief Method InitializeSpinner, addr 0x174607c, size 0xf8, virtual false, abstract: false, final false
inline void InitializeSpinner() ;

static inline ::VROSC::SpectatorCameraUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17462f0, size 0x23c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x174665c, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x174652c, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ResetMoveableCamera, addr 0x1746718, size 0x54, virtual false, abstract: false, final false
inline void ResetMoveableCamera(::VROSC::ClickData*  data) ;

/// @brief Method SetNewSpectatorCameraSetting, addr 0x1746174, size 0x98, virtual false, abstract: false, final false
inline void SetNewSpectatorCameraSetting(int32_t  selection) ;

/// @brief Method Setup, addr 0x1745384, size 0x2dc, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method ShowOrHideResetButton, addr 0x174620c, size 0xe4, virtual false, abstract: false, final false
inline void ShowOrHideResetButton() ;

/// @brief Method SpectatorHideBackgroundToggled, addr 0x17466bc, size 0x5c, virtual false, abstract: false, final false
inline void SpectatorHideBackgroundToggled(::VROSC::InputDevice*  inputDevice, bool  toggled) ;

/// @brief Method UserDataLoaded, addr 0x174657c, size 0xe0, virtual false, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  user) ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__resetMoveableCameraButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__resetMoveableCameraButton() ;

constexpr bool const& __cordl_internal_get__spectatorCameraAvailable() const;

constexpr bool& __cordl_internal_get__spectatorCameraAvailable() ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get__spectatorCameraSelector() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get__spectatorCameraSelector() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__spectatorHideBackground() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__spectatorHideBackground() ;

constexpr void __cordl_internal_set__resetMoveableCameraButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__spectatorCameraAvailable(bool  value) ;

constexpr void __cordl_internal_set__spectatorCameraSelector(::UnityW<::VROSC::UISpinner>  value) ;

constexpr void __cordl_internal_set__spectatorHideBackground(::UnityW<::VROSC::UISlideToggle>  value) ;

/// @brief Method .ctor, addr 0x174676c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpectatorCameraUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpectatorCameraUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpectatorCameraUI(SpectatorCameraUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpectatorCameraUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpectatorCameraUI(SpectatorCameraUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1125};

/// @brief Field _spectatorCameraSelector, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  ____spectatorCameraSelector;

/// @brief Field _spectatorHideBackground, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____spectatorHideBackground;

/// @brief Field _resetMoveableCameraButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____resetMoveableCameraButton;

/// @brief Field _spectatorCameraAvailable, offset: 0x38, size: 0x1, def value: None
 bool  ____spectatorCameraAvailable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SpectatorCameraUI, ____spectatorCameraSelector) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraUI, ____spectatorHideBackground) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraUI, ____resetMoveableCameraButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraUI, ____spectatorCameraAvailable) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SpectatorCameraUI, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SpectatorCameraUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SpectatorCameraUI*, "VROSC", "SpectatorCameraUI");
