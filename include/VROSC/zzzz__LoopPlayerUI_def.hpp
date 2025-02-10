#pragma once
// IWYU pragma private; include "VROSC/LoopPlayerUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoopPlayerUI)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
class Grabable;
}
namespace VROSC {
class LoopEditorToggle;
}
namespace VROSC {
class LoopPlayButton;
}
namespace VROSC {
class LoopPlaybackConfig;
}
namespace VROSC {
class LoopPlaybackSettingsUI;
}
namespace VROSC {
class LoopPlayerColorizer;
}
namespace VROSC {
class LoopPlayerHighlighter;
}
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class LoopStationLaunchpadHandler;
}
namespace VROSC {
struct LoopStationRecorder_RecordingState;
}
namespace VROSC {
class LoopStation;
}
namespace VROSC {
class LoopVolumeController;
}
namespace VROSC {
class TransformDataController;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UIHoldButton;
}
// Forward declare root types
namespace VROSC {
class LoopPlayerUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopPlayerUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlayerUI
class CORDL_TYPE LoopPlayerUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_DisplayName, put=set_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=get_MainColor)) ::UnityEngine::Color  MainColor;

/// @brief Field OnDeletePressed, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDeletePressed, put=__cordl_internal_set_OnDeletePressed)) ::System::Action*  OnDeletePressed;

/// @brief Field OnRecolor, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRecolor, put=__cordl_internal_set_OnRecolor)) ::System::Action_1<::UnityEngine::Color>*  OnRecolor;

/// @brief Field OnRename, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRename, put=__cordl_internal_set_OnRename)) ::System::Action_1<::StringW>*  OnRename;

 __declspec(property(get=get_PlayButton)) ::UnityW<::VROSC::LoopPlayButton>  PlayButton;

 __declspec(property(get=get_VolumeController)) ::VROSC::LoopVolumeController*  VolumeController;

/// @brief Field <DisplayName>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__DisplayName_k__BackingField, put=__cordl_internal_set__DisplayName_k__BackingField)) ::StringW  _DisplayName_k__BackingField;

/// @brief Field _copyButton, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__copyButton, put=__cordl_internal_set__copyButton)) ::UnityW<::VROSC::UIButton>  _copyButton;

/// @brief Field _deleteButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__deleteButton, put=__cordl_internal_set__deleteButton)) ::UnityW<::VROSC::UIHoldButton>  _deleteButton;

/// @brief Field _highlighter, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__highlighter, put=__cordl_internal_set__highlighter)) ::UnityW<::VROSC::LoopPlayerHighlighter>  _highlighter;

/// @brief Field _hoverCheck, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__hoverCheck, put=__cordl_internal_set__hoverCheck)) ::UnityW<::VROSC::Grabable>  _hoverCheck;

/// @brief Field _hoveringState, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__hoveringState, put=__cordl_internal_set__hoveringState)) ::UnityW<::UnityEngine::GameObject>  _hoveringState;

/// @brief Field _launchpadHandler, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__launchpadHandler, put=__cordl_internal_set__launchpadHandler)) ::UnityW<::VROSC::LoopStationLaunchpadHandler>  _launchpadHandler;

/// @brief Field _loopEditorToggle, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopEditorToggle, put=__cordl_internal_set__loopEditorToggle)) ::UnityW<::VROSC::LoopEditorToggle>  _loopEditorToggle;

/// @brief Field _loopPlayer, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopPlayer, put=__cordl_internal_set__loopPlayer)) ::UnityW<::VROSC::LoopPlayer>  _loopPlayer;

/// @brief Field _loopStation, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopStation, put=__cordl_internal_set__loopStation)) ::UnityW<::VROSC::LoopStation>  _loopStation;

/// @brief Field _nameLabel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__nameLabel, put=__cordl_internal_set__nameLabel)) ::UnityW<::TMPro::TextMeshPro>  _nameLabel;

/// @brief Field _playButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__playButton, put=__cordl_internal_set__playButton)) ::UnityW<::VROSC::LoopPlayButton>  _playButton;

/// @brief Field _playerColorizer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerColorizer, put=__cordl_internal_set__playerColorizer)) ::UnityW<::VROSC::LoopPlayerColorizer>  _playerColorizer;

/// @brief Field _renameButton, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__renameButton, put=__cordl_internal_set__renameButton)) ::UnityW<::VROSC::UIButton>  _renameButton;

/// @brief Field _settingsMenu, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsMenu, put=__cordl_internal_set__settingsMenu)) ::UnityW<::VROSC::LoopPlaybackSettingsUI>  _settingsMenu;

/// @brief Field _userIsRecording, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get__userIsRecording, put=__cordl_internal_set__userIsRecording)) bool  _userIsRecording;

/// @brief Field _volumeController, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__volumeController, put=__cordl_internal_set__volumeController)) ::VROSC::LoopVolumeController*  _volumeController;

/// @brief Method Awake, addr 0x18a2e78, size 0x550, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CopyPressed, addr 0x18a3ff8, size 0x2c, virtual false, abstract: false, final false
inline void CopyPressed(::VROSC::ClickData*  obj) ;

/// @brief Method DeleteFromButton, addr 0x18a4024, size 0x1c, virtual false, abstract: false, final false
inline void DeleteFromButton() ;

/// @brief Method Highlight, addr 0x18a2e14, size 0x1c, virtual false, abstract: false, final false
inline void Highlight(bool  highLight) ;

/// @brief Method KeyboardClosed, addr 0x18a4334, size 0x198, virtual false, abstract: false, final false
inline void KeyboardClosed() ;

/// @brief Method LoadLaunchPad, addr 0x18a44cc, size 0x1c, virtual false, abstract: false, final false
inline void LoadLaunchPad(::StringW  padID, ::VROSC::TransformDataController*  transformData) ;

/// @brief Method LoopAmountChanged, addr 0x18a3ff4, size 0x4, virtual false, abstract: false, final false
inline void LoopAmountChanged(int32_t  amount) ;

static inline ::VROSC::LoopPlayerUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18a372c, size 0x648, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnRecordingStateChanged, addr 0x18a3f70, size 0x20, virtual false, abstract: false, final false
inline void OnRecordingStateChanged(::VROSC::LoopStationRecorder_RecordingState  state) ;

/// @brief Method RanameComplete, addr 0x18a4234, size 0x44, virtual false, abstract: false, final false
inline void RanameComplete(::StringW  displayName) ;

/// @brief Method RenameButtonPressed, addr 0x18a4040, size 0x1f4, virtual false, abstract: false, final false
inline void RenameButtonPressed() ;

/// @brief Method SetColor, addr 0x18a4278, size 0xbc, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method SetDisplayName, addr 0x18a11d8, size 0x40, virtual false, abstract: false, final false
inline void SetDisplayName(::StringW  displayName) ;

/// @brief Method Setup, addr 0x18a04fc, size 0x1e0, virtual false, abstract: false, final false
inline void Setup(::VROSC::LoopStation*  loopStation, ::VROSC::LoopPlayer*  loopPlayer, ::UnityEngine::Color  color, ::StringW  displayName, ::VROSC::LoopPlaybackConfig*  config) ;

/// @brief Method ShowAsMuted, addr 0x18a1b58, size 0x4c, virtual false, abstract: false, final false
inline void ShowAsMuted(bool  showAsMuted) ;

/// @brief Method UpdateCanUseCopy, addr 0x18a3f90, size 0x64, virtual false, abstract: false, final false
inline void UpdateCanUseCopy() ;

/// @brief Method UpdateHovering, addr 0x18a3690, size 0x9c, virtual false, abstract: false, final false
inline void UpdateHovering(bool  hovering) ;

constexpr ::System::Action* const& __cordl_internal_get_OnDeletePressed() const;

constexpr ::System::Action*& __cordl_internal_get_OnDeletePressed() ;

constexpr ::System::Action_1<::UnityEngine::Color>* const& __cordl_internal_get_OnRecolor() const;

constexpr ::System::Action_1<::UnityEngine::Color>*& __cordl_internal_get_OnRecolor() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnRename() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnRename() ;

constexpr ::StringW const& __cordl_internal_get__DisplayName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__DisplayName_k__BackingField() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__copyButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__copyButton() ;

constexpr ::UnityW<::VROSC::UIHoldButton> const& __cordl_internal_get__deleteButton() const;

constexpr ::UnityW<::VROSC::UIHoldButton>& __cordl_internal_get__deleteButton() ;

constexpr ::UnityW<::VROSC::LoopPlayerHighlighter> const& __cordl_internal_get__highlighter() const;

constexpr ::UnityW<::VROSC::LoopPlayerHighlighter>& __cordl_internal_get__highlighter() ;

constexpr ::UnityW<::VROSC::Grabable> const& __cordl_internal_get__hoverCheck() const;

constexpr ::UnityW<::VROSC::Grabable>& __cordl_internal_get__hoverCheck() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__hoveringState() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__hoveringState() ;

constexpr ::UnityW<::VROSC::LoopStationLaunchpadHandler> const& __cordl_internal_get__launchpadHandler() const;

constexpr ::UnityW<::VROSC::LoopStationLaunchpadHandler>& __cordl_internal_get__launchpadHandler() ;

constexpr ::UnityW<::VROSC::LoopEditorToggle> const& __cordl_internal_get__loopEditorToggle() const;

constexpr ::UnityW<::VROSC::LoopEditorToggle>& __cordl_internal_get__loopEditorToggle() ;

constexpr ::UnityW<::VROSC::LoopPlayer> const& __cordl_internal_get__loopPlayer() const;

constexpr ::UnityW<::VROSC::LoopPlayer>& __cordl_internal_get__loopPlayer() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__loopStation() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__loopStation() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__nameLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__nameLabel() ;

constexpr ::UnityW<::VROSC::LoopPlayButton> const& __cordl_internal_get__playButton() const;

constexpr ::UnityW<::VROSC::LoopPlayButton>& __cordl_internal_get__playButton() ;

constexpr ::UnityW<::VROSC::LoopPlayerColorizer> const& __cordl_internal_get__playerColorizer() const;

constexpr ::UnityW<::VROSC::LoopPlayerColorizer>& __cordl_internal_get__playerColorizer() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__renameButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__renameButton() ;

constexpr ::UnityW<::VROSC::LoopPlaybackSettingsUI> const& __cordl_internal_get__settingsMenu() const;

constexpr ::UnityW<::VROSC::LoopPlaybackSettingsUI>& __cordl_internal_get__settingsMenu() ;

constexpr bool const& __cordl_internal_get__userIsRecording() const;

constexpr bool& __cordl_internal_get__userIsRecording() ;

constexpr ::VROSC::LoopVolumeController* const& __cordl_internal_get__volumeController() const;

constexpr ::VROSC::LoopVolumeController*& __cordl_internal_get__volumeController() ;

constexpr void __cordl_internal_set_OnDeletePressed(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnRecolor(::System::Action_1<::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set_OnRename(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__DisplayName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__copyButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__deleteButton(::UnityW<::VROSC::UIHoldButton>  value) ;

constexpr void __cordl_internal_set__highlighter(::UnityW<::VROSC::LoopPlayerHighlighter>  value) ;

constexpr void __cordl_internal_set__hoverCheck(::UnityW<::VROSC::Grabable>  value) ;

constexpr void __cordl_internal_set__hoveringState(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__launchpadHandler(::UnityW<::VROSC::LoopStationLaunchpadHandler>  value) ;

constexpr void __cordl_internal_set__loopEditorToggle(::UnityW<::VROSC::LoopEditorToggle>  value) ;

constexpr void __cordl_internal_set__loopPlayer(::UnityW<::VROSC::LoopPlayer>  value) ;

constexpr void __cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value) ;

constexpr void __cordl_internal_set__nameLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__playButton(::UnityW<::VROSC::LoopPlayButton>  value) ;

constexpr void __cordl_internal_set__playerColorizer(::UnityW<::VROSC::LoopPlayerColorizer>  value) ;

constexpr void __cordl_internal_set__renameButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__settingsMenu(::UnityW<::VROSC::LoopPlaybackSettingsUI>  value) ;

constexpr void __cordl_internal_set__userIsRecording(bool  value) ;

constexpr void __cordl_internal_set__volumeController(::VROSC::LoopVolumeController*  value) ;

/// @brief Method .ctor, addr 0x18a44e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DisplayName, addr 0x18a2e60, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_MainColor, addr 0x18a2e38, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_MainColor() ;

/// @brief Method get_PlayButton, addr 0x18a2e70, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopPlayButton> get_PlayButton() ;

/// @brief Method get_VolumeController, addr 0x18a2e68, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LoopVolumeController* get_VolumeController() ;

/// @brief Method set_DisplayName, addr 0x18a2e58, size 0x8, virtual false, abstract: false, final false
inline void set_DisplayName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlayerUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlayerUI(LoopPlayerUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlayerUI(LoopPlayerUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{678};

/// @brief Field _nameLabel, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____nameLabel;

/// @brief Field _hoverCheck, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::Grabable>  ____hoverCheck;

/// @brief Field _hoveringState, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____hoveringState;

/// @brief Field _settingsMenu, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlaybackSettingsUI>  ____settingsMenu;

/// @brief Field _playButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayButton>  ____playButton;

/// @brief Field _deleteButton, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UIHoldButton>  ____deleteButton;

/// @brief Field _playerColorizer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayerColorizer>  ____playerColorizer;

/// @brief Field _highlighter, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayerHighlighter>  ____highlighter;

/// @brief Field _volumeController, offset: 0x60, size: 0x8, def value: None
 ::VROSC::LoopVolumeController*  ____volumeController;

/// @brief Field _renameButton, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____renameButton;

/// @brief Field _copyButton, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____copyButton;

/// @brief Field _loopEditorToggle, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopEditorToggle>  ____loopEditorToggle;

/// @brief Field _launchpadHandler, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationLaunchpadHandler>  ____launchpadHandler;

/// @brief Field <DisplayName>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::StringW  ____DisplayName_k__BackingField;

/// @brief Field OnDeletePressed, offset: 0x90, size: 0x8, def value: None
 ::System::Action*  ___OnDeletePressed;

/// @brief Field OnRename, offset: 0x98, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnRename;

/// @brief Field OnRecolor, offset: 0xa0, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Color>*  ___OnRecolor;

/// @brief Field _loopPlayer, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayer>  ____loopPlayer;

/// @brief Field _loopStation, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____loopStation;

/// @brief Field _userIsRecording, offset: 0xb8, size: 0x1, def value: None
 bool  ____userIsRecording;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlayerUI, ____nameLabel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerUI, ____hoverCheck) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerUI, ____hoveringState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerUI, ____settingsMenu) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerUI, ____playButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerUI, ____deleteButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerUI, ____playerColorizer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerUI, ____highlighter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerUI, ____volumeController) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerUI, ____renameButton) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerUI, ____copyButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerUI, ____loopEditorToggle) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerUI, ____launchpadHandler) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerUI, ____DisplayName_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerUI, ___OnDeletePressed) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerUI, ___OnRename) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerUI, ___OnRecolor) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerUI, ____loopPlayer) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerUI, ____loopStation) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerUI, ____userIsRecording) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlayerUI, 0xc0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopPlayerUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerUI*, "VROSC", "LoopPlayerUI");
