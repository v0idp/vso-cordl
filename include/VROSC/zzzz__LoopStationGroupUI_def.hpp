#pragma once
// IWYU pragma private; include "VROSC/LoopStationGroupUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopStationGroupUI)
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
class AdjustableMesh;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class InteractionDisabler;
}
namespace VROSC {
class LoopPlaybackConfigOverride;
}
namespace VROSC {
class LoopStationGroupMergeUI;
}
namespace VROSC {
class LoopStationGroupPlaybackUI;
}
namespace VROSC {
struct LoopStationGroup_SetupVariables;
}
namespace VROSC {
class LoopStationGroup;
}
namespace VROSC {
class LoopStationLaunchpadHandler;
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
class UIColorPicker;
}
namespace VROSC {
class UIToggle;
}
// Forward declare root types
namespace VROSC {
class LoopStationGroupUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationGroupUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationGroupUI
class CORDL_TYPE LoopStationGroupUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_DisplayName, put=set_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=get_IsMuted)) bool  IsMuted;

 __declspec(property(get=get_PlaybackConfig)) ::VROSC::LoopPlaybackConfigOverride*  PlaybackConfig;

 __declspec(property(get=get_Volume)) float_t  Volume;

/// @brief Field <DisplayName>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__DisplayName_k__BackingField, put=__cordl_internal_set__DisplayName_k__BackingField)) ::StringW  _DisplayName_k__BackingField;

/// @brief Field _background, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__background, put=__cordl_internal_set__background)) ::UnityW<::VROSC::AdjustableMesh>  _background;

/// @brief Field _colorPicker, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorPicker, put=__cordl_internal_set__colorPicker)) ::UnityW<::VROSC::UIColorPicker>  _colorPicker;

/// @brief Field _disabler, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__disabler, put=__cordl_internal_set__disabler)) ::UnityW<::VROSC::InteractionDisabler>  _disabler;

/// @brief Field _group, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__group, put=__cordl_internal_set__group)) ::UnityW<::VROSC::LoopStationGroup>  _group;

/// @brief Field _groupName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__groupName, put=__cordl_internal_set__groupName)) ::UnityW<::TMPro::TextMeshPro>  _groupName;

/// @brief Field _ifEmptyState, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ifEmptyState, put=__cordl_internal_set__ifEmptyState)) ::UnityW<::UnityEngine::GameObject>  _ifEmptyState;

/// @brief Field _launchpadHandler, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__launchpadHandler, put=__cordl_internal_set__launchpadHandler)) ::UnityW<::VROSC::LoopStationLaunchpadHandler>  _launchpadHandler;

/// @brief Field _loopStation, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopStation, put=__cordl_internal_set__loopStation)) ::UnityW<::VROSC::LoopStation>  _loopStation;

/// @brief Field _mergeUI, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__mergeUI, put=__cordl_internal_set__mergeUI)) ::UnityW<::VROSC::LoopStationGroupMergeUI>  _mergeUI;

/// @brief Field _playBackUI, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__playBackUI, put=__cordl_internal_set__playBackUI)) ::UnityW<::VROSC::LoopStationGroupPlaybackUI>  _playBackUI;

/// @brief Field _recordingTargetToggle, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordingTargetToggle, put=__cordl_internal_set__recordingTargetToggle)) ::UnityW<::VROSC::UIToggle>  _recordingTargetToggle;

/// @brief Field _renameButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__renameButton, put=__cordl_internal_set__renameButton)) ::UnityW<::VROSC::UIButton>  _renameButton;

/// @brief Field _volumeController, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__volumeController, put=__cordl_internal_set__volumeController)) ::VROSC::LoopVolumeController*  _volumeController;

/// @brief Method Awake, addr 0x18b79b4, size 0x3e0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GlobalVolumeChanged, addr 0x18b8888, size 0x4, virtual false, abstract: false, final false
inline void GlobalVolumeChanged(float_t  volume) ;

/// @brief Method GroupVolumeChanged, addr 0x18b8688, size 0x3c, virtual false, abstract: false, final false
inline void GroupVolumeChanged(float_t  volume) ;

/// @brief Method KeyboardClosed, addr 0x18b8b28, size 0x198, virtual false, abstract: false, final false
inline void KeyboardClosed() ;

/// @brief Method LoadLaunchPad, addr 0x18b6050, size 0x18, virtual false, abstract: false, final false
inline void LoadLaunchPad(::StringW  padID, ::VROSC::TransformDataController*  transformData) ;

/// @brief Method MuteChanged, addr 0x18b8810, size 0x44, virtual false, abstract: false, final false
inline void MuteChanged(bool  mute) ;

static inline ::VROSC::LoopStationGroupUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18b7d94, size 0x4c0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnGroupCountChanged, addr 0x18b85bc, size 0xa4, virtual false, abstract: false, final false
inline void OnGroupCountChanged(int32_t  groupCount) ;

/// @brief Method OnNameChangeByKeyboardComplete, addr 0x18b8af4, size 0x18, virtual false, abstract: false, final false
inline void OnNameChangeByKeyboardComplete(::StringW  text) ;

/// @brief Method RecordingTargetToggled, addr 0x18b8ac0, size 0x34, virtual false, abstract: false, final false
inline void RecordingTargetToggled(::VROSC::InputDevice*  inputDevice, bool  toggled) ;

/// @brief Method RenameButtonPressed, addr 0x18b88cc, size 0x1f4, virtual false, abstract: false, final false
inline void RenameButtonPressed() ;

/// @brief Method SetColor, addr 0x18b84b4, size 0x108, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method SetInteractable, addr 0x18b8660, size 0x28, virtual false, abstract: false, final false
inline void SetInteractable(bool  interactable) ;

/// @brief Method SetIsRecordingTarget, addr 0x18b5930, size 0x24, virtual false, abstract: false, final false
inline void SetIsRecordingTarget(bool  isRecordingTarget) ;

/// @brief Method SetVolumeOfGroup, addr 0x18b5a48, size 0x1c, virtual false, abstract: false, final false
inline void SetVolumeOfGroup(float_t  volume) ;

/// @brief Method Setup, addr 0x18b8254, size 0x260, virtual true, abstract: false, final false
inline void Setup(::VROSC::LoopStationGroup*  group, ::VROSC::LoopStation*  loopStation, ::VROSC::LoopStationGroup_SetupVariables  vars) ;

/// @brief Method ShowAsEmpty, addr 0x18b888c, size 0x40, virtual true, abstract: false, final false
inline void ShowAsEmpty(bool  isEmpty, bool  byGrab) ;

/// @brief Method SoloChanged, addr 0x18b8854, size 0x34, virtual false, abstract: false, final false
inline void SoloChanged(bool  soloOn) ;

/// @brief Method Update, addr 0x18b8d8c, size 0xec, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateDisplayName, addr 0x18b59dc, size 0x48, virtual false, abstract: false, final false
inline void UpdateDisplayName(::StringW  text) ;

/// @brief Method UpdateVolumeOfAllGroups, addr 0x18b86c4, size 0x14c, virtual false, abstract: false, final false
inline void UpdateVolumeOfAllGroups() ;

constexpr ::StringW const& __cordl_internal_get__DisplayName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__DisplayName_k__BackingField() ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__background() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__background() ;

constexpr ::UnityW<::VROSC::UIColorPicker> const& __cordl_internal_get__colorPicker() const;

constexpr ::UnityW<::VROSC::UIColorPicker>& __cordl_internal_get__colorPicker() ;

constexpr ::UnityW<::VROSC::InteractionDisabler> const& __cordl_internal_get__disabler() const;

constexpr ::UnityW<::VROSC::InteractionDisabler>& __cordl_internal_get__disabler() ;

constexpr ::UnityW<::VROSC::LoopStationGroup> const& __cordl_internal_get__group() const;

constexpr ::UnityW<::VROSC::LoopStationGroup>& __cordl_internal_get__group() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__groupName() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__groupName() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__ifEmptyState() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__ifEmptyState() ;

constexpr ::UnityW<::VROSC::LoopStationLaunchpadHandler> const& __cordl_internal_get__launchpadHandler() const;

constexpr ::UnityW<::VROSC::LoopStationLaunchpadHandler>& __cordl_internal_get__launchpadHandler() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__loopStation() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__loopStation() ;

constexpr ::UnityW<::VROSC::LoopStationGroupMergeUI> const& __cordl_internal_get__mergeUI() const;

constexpr ::UnityW<::VROSC::LoopStationGroupMergeUI>& __cordl_internal_get__mergeUI() ;

constexpr ::UnityW<::VROSC::LoopStationGroupPlaybackUI> const& __cordl_internal_get__playBackUI() const;

constexpr ::UnityW<::VROSC::LoopStationGroupPlaybackUI>& __cordl_internal_get__playBackUI() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__recordingTargetToggle() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__recordingTargetToggle() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__renameButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__renameButton() ;

constexpr ::VROSC::LoopVolumeController* const& __cordl_internal_get__volumeController() const;

constexpr ::VROSC::LoopVolumeController*& __cordl_internal_get__volumeController() ;

constexpr void __cordl_internal_set__DisplayName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__background(::UnityW<::VROSC::AdjustableMesh>  value) ;

constexpr void __cordl_internal_set__colorPicker(::UnityW<::VROSC::UIColorPicker>  value) ;

constexpr void __cordl_internal_set__disabler(::UnityW<::VROSC::InteractionDisabler>  value) ;

constexpr void __cordl_internal_set__group(::UnityW<::VROSC::LoopStationGroup>  value) ;

constexpr void __cordl_internal_set__groupName(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__ifEmptyState(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__launchpadHandler(::UnityW<::VROSC::LoopStationLaunchpadHandler>  value) ;

constexpr void __cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value) ;

constexpr void __cordl_internal_set__mergeUI(::UnityW<::VROSC::LoopStationGroupMergeUI>  value) ;

constexpr void __cordl_internal_set__playBackUI(::UnityW<::VROSC::LoopStationGroupPlaybackUI>  value) ;

constexpr void __cordl_internal_set__recordingTargetToggle(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__renameButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__volumeController(::VROSC::LoopVolumeController*  value) ;

/// @brief Method .ctor, addr 0x18b8e78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DisplayName, addr 0x18b79ac, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_IsMuted, addr 0x18b5684, size 0x1c, virtual false, abstract: false, final false
inline bool get_IsMuted() ;

/// @brief Method get_PlaybackConfig, addr 0x18b56a8, size 0x1c, virtual false, abstract: false, final false
inline ::VROSC::LoopPlaybackConfigOverride* get_PlaybackConfig() ;

/// @brief Method get_Volume, addr 0x18b5644, size 0x1c, virtual false, abstract: false, final false
inline float_t get_Volume() ;

/// @brief Method set_DisplayName, addr 0x18b79a4, size 0x8, virtual false, abstract: false, final false
inline void set_DisplayName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationGroupUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationGroupUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationGroupUI(LoopStationGroupUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationGroupUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationGroupUI(LoopStationGroupUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{730};

/// @brief Field <DisplayName>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____DisplayName_k__BackingField;

/// @brief Field _groupName, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____groupName;

/// @brief Field _ifEmptyState, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____ifEmptyState;

/// @brief Field _volumeController, offset: 0x38, size: 0x8, def value: None
 ::VROSC::LoopVolumeController*  ____volumeController;

/// @brief Field _renameButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____renameButton;

/// @brief Field _mergeUI, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationGroupMergeUI>  ____mergeUI;

/// @brief Field _recordingTargetToggle, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____recordingTargetToggle;

/// @brief Field _playBackUI, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationGroupPlaybackUI>  ____playBackUI;

/// @brief Field _launchpadHandler, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationLaunchpadHandler>  ____launchpadHandler;

/// @brief Field _disabler, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::InteractionDisabler>  ____disabler;

/// @brief Field _colorPicker, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::VROSC::UIColorPicker>  ____colorPicker;

/// @brief Field _background, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____background;

/// @brief Field _group, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationGroup>  ____group;

/// @brief Field _loopStation, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____loopStation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationGroupUI, ____DisplayName_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupUI, ____groupName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupUI, ____ifEmptyState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupUI, ____volumeController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupUI, ____renameButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupUI, ____mergeUI) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupUI, ____recordingTargetToggle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupUI, ____playBackUI) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupUI, ____launchpadHandler) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupUI, ____disabler) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupUI, ____colorPicker) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupUI, ____background) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupUI, ____group) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupUI, ____loopStation) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationGroupUI, 0x90>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationGroupUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationGroupUI*, "VROSC", "LoopStationGroupUI");
