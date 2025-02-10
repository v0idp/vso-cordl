#pragma once
// IWYU pragma private; include "VROSC/PreviewOptionsUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PreviewOptionsUI)
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class SessionsLibraryPreviewPlayer;
}
namespace VROSC {
class TimeSlider;
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
class UserDataControllers;
}
// Forward declare root types
namespace VROSC {
class PreviewOptionsUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PreviewOptionsUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PreviewOptionsUI
class CORDL_TYPE PreviewOptionsUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _autoPlayToggle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__autoPlayToggle, put=__cordl_internal_set__autoPlayToggle)) ::UnityW<::VROSC::UISlideToggle>  _autoPlayToggle;

/// @brief Field _pauseIcon, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__pauseIcon, put=__cordl_internal_set__pauseIcon)) ::UnityW<::UnityEngine::GameObject>  _pauseIcon;

/// @brief Field _playButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__playButton, put=__cordl_internal_set__playButton)) ::UnityW<::VROSC::UIButton>  _playButton;

/// @brief Field _playIcon, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__playIcon, put=__cordl_internal_set__playIcon)) ::UnityW<::UnityEngine::GameObject>  _playIcon;

/// @brief Field _previewPlayer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__previewPlayer, put=__cordl_internal_set__previewPlayer)) ::UnityW<::VROSC::SessionsLibraryPreviewPlayer>  _previewPlayer;

/// @brief Field _timeSlider, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeSlider, put=__cordl_internal_set__timeSlider)) ::UnityW<::VROSC::TimeSlider>  _timeSlider;

/// @brief Field _volumeSlider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__volumeSlider, put=__cordl_internal_set__volumeSlider)) ::UnityW<::VROSC::UISlider>  _volumeSlider;

/// @brief Method AutoPlayToggled, addr 0x1759b88, size 0x64, virtual false, abstract: false, final false
inline void AutoPlayToggled(::VROSC::InputDevice*  device, bool  isOn) ;

/// @brief Method Awake, addr 0x1759290, size 0x358, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::PreviewOptionsUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17595e8, size 0x358, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1759a00, size 0x64, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1759940, size 0xc0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlayButtonPressed, addr 0x1759c94, size 0x28, virtual false, abstract: false, final false
inline void PlayButtonPressed() ;

/// @brief Method PlayingStateChanged, addr 0x1759e94, size 0x80, virtual false, abstract: false, final false
inline void PlayingStateChanged(bool  playing) ;

/// @brief Method PreferencesDataLoaded, addr 0x1759f14, size 0x80, virtual false, abstract: false, final false
inline void PreferencesDataLoaded(::VROSC::UserDataControllers*  userDataControllers) ;

/// @brief Method PreviewChanged, addr 0x1759a64, size 0x7c, virtual false, abstract: false, final false
inline void PreviewChanged(bool  hasPreview) ;

/// @brief Method VolumeValueChanged, addr 0x1759bec, size 0x80, virtual false, abstract: false, final false
inline void VolumeValueChanged(float_t  value) ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__autoPlayToggle() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__autoPlayToggle() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__pauseIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__pauseIcon() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__playButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__playButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__playIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__playIcon() ;

constexpr ::UnityW<::VROSC::SessionsLibraryPreviewPlayer> const& __cordl_internal_get__previewPlayer() const;

constexpr ::UnityW<::VROSC::SessionsLibraryPreviewPlayer>& __cordl_internal_get__previewPlayer() ;

constexpr ::UnityW<::VROSC::TimeSlider> const& __cordl_internal_get__timeSlider() const;

constexpr ::UnityW<::VROSC::TimeSlider>& __cordl_internal_get__timeSlider() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__volumeSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__volumeSlider() ;

constexpr void __cordl_internal_set__autoPlayToggle(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__pauseIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__playButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__playIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__previewPlayer(::UnityW<::VROSC::SessionsLibraryPreviewPlayer>  value) ;

constexpr void __cordl_internal_set__timeSlider(::UnityW<::VROSC::TimeSlider>  value) ;

constexpr void __cordl_internal_set__volumeSlider(::UnityW<::VROSC::UISlider>  value) ;

/// @brief Method .ctor, addr 0x1759f94, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PreviewOptionsUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PreviewOptionsUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PreviewOptionsUI(PreviewOptionsUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PreviewOptionsUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PreviewOptionsUI(PreviewOptionsUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1163};

/// @brief Field _autoPlayToggle, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____autoPlayToggle;

/// @brief Field _volumeSlider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____volumeSlider;

/// @brief Field _playButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____playButton;

/// @brief Field _previewPlayer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::SessionsLibraryPreviewPlayer>  ____previewPlayer;

/// @brief Field _timeSlider, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::TimeSlider>  ____timeSlider;

/// @brief Field _playIcon, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____playIcon;

/// @brief Field _pauseIcon, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____pauseIcon;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PreviewOptionsUI, ____autoPlayToggle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::PreviewOptionsUI, ____volumeSlider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::PreviewOptionsUI, ____playButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::PreviewOptionsUI, ____previewPlayer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::PreviewOptionsUI, ____timeSlider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::PreviewOptionsUI, ____playIcon) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::PreviewOptionsUI, ____pauseIcon) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PreviewOptionsUI, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PreviewOptionsUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PreviewOptionsUI*, "VROSC", "PreviewOptionsUI");
