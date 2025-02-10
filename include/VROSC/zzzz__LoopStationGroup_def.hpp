#pragma once
// IWYU pragma private; include "VROSC/LoopStationGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopStationGroup)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class InteractionDisabler;
}
namespace VROSC {
class LoopDropzone;
}
namespace VROSC {
class LoopListArranger;
}
namespace VROSC {
class LoopPlaybackConfigOverride;
}
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class LoopStationGroupHandler;
}
namespace VROSC {
class LoopStationGroupMover;
}
namespace VROSC {
class LoopStationGroupUI;
}
namespace VROSC {
struct LoopStationGroup_SetupVariables;
}
namespace VROSC {
class LoopStation;
}
namespace VROSC {
class TransformDataController;
}
// Forward declare root types
namespace VROSC {
class LoopStationGroup;
}
namespace VROSC {
struct LoopStationGroup_SetupVariables;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationGroup);
MARK_VAL_T(::VROSC::LoopStationGroup_SetupVariables);
// Dependencies UnityEngine.Color
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopStationGroup/SetupVariables
struct CORDL_TYPE LoopStationGroup_SetupVariables {
public:
// Declarations
 __declspec(property(get=get_Color, put=set_Color)) ::UnityEngine::Color  Color;

 __declspec(property(get=get_DisplayName, put=set_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=get_GroupID, put=set_GroupID)) ::StringW  GroupID;

 __declspec(property(get=get_Muted, put=set_Muted)) bool  Muted;

 __declspec(property(get=get_PlaybackConfig, put=set_PlaybackConfig)) ::VROSC::LoopPlaybackConfigOverride*  PlaybackConfig;

 __declspec(property(get=get_Solo, put=set_Solo)) bool  Solo;

 __declspec(property(get=get_Volume, put=set_Volume)) float_t  Volume;

/// @brief Method .ctor, addr 0x18b0a1c, size 0xbc, virtual false, abstract: false, final false
inline void _ctor(::StringW  groupID, ::StringW  displayName, float_t  volume) ;

/// @brief Method .ctor, addr 0x18b27c0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::StringW  groupID, ::StringW  displayName, float_t  volume, bool  muted, bool  solo, ::VROSC::LoopPlaybackConfigOverride*  playbackConfig, ::UnityEngine::Color  color) ;

/// @brief Method get_Color, addr 0x18b6204, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Color() ;

/// @brief Method get_DisplayName, addr 0x18b61b8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_GroupID, addr 0x18b61a8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_GroupID() ;

/// @brief Method get_Muted, addr 0x18b61dc, size 0x8, virtual false, abstract: false, final false
inline bool get_Muted() ;

/// @brief Method get_PlaybackConfig, addr 0x18b6218, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LoopPlaybackConfigOverride* get_PlaybackConfig() ;

/// @brief Method get_Solo, addr 0x18b61f0, size 0x8, virtual false, abstract: false, final false
inline bool get_Solo() ;

/// @brief Method get_Volume, addr 0x18b61c8, size 0x8, virtual false, abstract: false, final false
inline float_t get_Volume() ;

/// @brief Method set_Color, addr 0x18b61f8, size 0xc, virtual false, abstract: false, final false
inline void set_Color(::UnityEngine::Color  value) ;

/// @brief Method set_DisplayName, addr 0x18b61b0, size 0x8, virtual false, abstract: false, final false
inline void set_DisplayName(::StringW  value) ;

/// @brief Method set_GroupID, addr 0x18b61a0, size 0x8, virtual false, abstract: false, final false
inline void set_GroupID(::StringW  value) ;

/// @brief Method set_Muted, addr 0x18b61d0, size 0xc, virtual false, abstract: false, final false
inline void set_Muted(bool  value) ;

/// @brief Method set_PlaybackConfig, addr 0x18b6210, size 0x8, virtual false, abstract: false, final false
inline void set_PlaybackConfig(::VROSC::LoopPlaybackConfigOverride*  value) ;

/// @brief Method set_Solo, addr 0x18b61e4, size 0xc, virtual false, abstract: false, final false
inline void set_Solo(bool  value) ;

/// @brief Method set_Volume, addr 0x18b61c0, size 0x8, virtual false, abstract: false, final false
inline void set_Volume(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LoopStationGroup_SetupVariables() ;

// Ctor Parameters [CppParam { name: "_GroupID_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_DisplayName_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_Volume_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_Muted_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_Solo_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_Color_k__BackingField", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "_PlaybackConfig_k__BackingField", ty: "::VROSC::LoopPlaybackConfigOverride*", modifiers: "", def_value: None }]
constexpr LoopStationGroup_SetupVariables(::StringW  _GroupID_k__BackingField, ::StringW  _DisplayName_k__BackingField, float_t  _Volume_k__BackingField, bool  _Muted_k__BackingField, bool  _Solo_k__BackingField, ::UnityEngine::Color  _Color_k__BackingField, ::VROSC::LoopPlaybackConfigOverride*  _PlaybackConfig_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{726};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <GroupID>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::StringW  _GroupID_k__BackingField;

/// @brief Field <DisplayName>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::StringW  _DisplayName_k__BackingField;

/// @brief Field <Volume>k__BackingField, offset: 0x10, size: 0x4, def value: None
 float_t  _Volume_k__BackingField;

/// @brief Field <Muted>k__BackingField, offset: 0x14, size: 0x1, def value: None
 bool  _Muted_k__BackingField;

/// @brief Field <Solo>k__BackingField, offset: 0x15, size: 0x1, def value: None
 bool  _Solo_k__BackingField;

/// @brief Field <Color>k__BackingField, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  _Color_k__BackingField;

/// @brief Field <PlaybackConfig>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::VROSC::LoopPlaybackConfigOverride*  _PlaybackConfig_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationGroup_SetupVariables, _GroupID_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup_SetupVariables, _DisplayName_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup_SetupVariables, _Volume_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup_SetupVariables, _Muted_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup_SetupVariables, _Solo_k__BackingField) == 0x15, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup_SetupVariables, _Color_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup_SetupVariables, _PlaybackConfig_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationGroup_SetupVariables, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationGroup
class CORDL_TYPE LoopStationGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SetupVariables = ::VROSC::LoopStationGroup_SetupVariables;

 __declspec(property(get=get_AutoMover)) ::UnityW<::VROSC::LoopStationGroupMover>  AutoMover;

/// @brief Field DefaultGroupColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_DefaultGroupColor, put=setStaticF_DefaultGroupColor)) ::UnityEngine::Color  DefaultGroupColor;

 __declspec(property(get=get_Dimensions)) ::UnityW<::UnityEngine::RectTransform>  Dimensions;

 __declspec(property(get=get_GroupID, put=set_GroupID)) ::StringW  GroupID;

 __declspec(property(get=get_Handler, put=set_Handler)) ::UnityW<::VROSC::LoopStationGroupHandler>  Handler;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_IsMuted)) bool  IsMuted;

 __declspec(property(get=get_LoopPlayers, put=set_LoopPlayers)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  LoopPlayers;

 __declspec(property(get=get_Loops)) int32_t  Loops;

 __declspec(property(get=get_LoopsCanOnlyBeRearranged)) bool  LoopsCanOnlyBeRearranged;

/// @brief Field OnGroupRemoved, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGroupRemoved, put=__cordl_internal_set_OnGroupRemoved)) ::System::Action_2<::UnityW<::VROSC::LoopStationGroup>,bool>*  OnGroupRemoved;

/// @brief Field OnGroupSizeChanged, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGroupSizeChanged, put=__cordl_internal_set_OnGroupSizeChanged)) ::System::Action*  OnGroupSizeChanged;

/// @brief Field OnLoopAdded, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLoopAdded, put=__cordl_internal_set_OnLoopAdded)) ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*  OnLoopAdded;

/// @brief Field OnLoopAmountChanged, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLoopAmountChanged, put=__cordl_internal_set_OnLoopAmountChanged)) ::System::Action_1<int32_t>*  OnLoopAmountChanged;

/// @brief Field OnLoopRemoved, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLoopRemoved, put=__cordl_internal_set_OnLoopRemoved)) ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*  OnLoopRemoved;

/// @brief Field OnSoloChanged, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSoloChanged, put=__cordl_internal_set_OnSoloChanged)) ::System::Action_2<::UnityW<::VROSC::LoopStationGroup>,bool>*  OnSoloChanged;

 __declspec(property(get=get_PlaybackConfig)) ::VROSC::LoopPlaybackConfigOverride*  PlaybackConfig;

 __declspec(property(get=get_RowInAutoArrange, put=set_RowInAutoArrange)) int32_t  RowInAutoArrange;

 __declspec(property(get=get_Volume)) float_t  Volume;

/// @brief Field <GroupID>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__GroupID_k__BackingField, put=__cordl_internal_set__GroupID_k__BackingField)) ::StringW  _GroupID_k__BackingField;

/// @brief Field <Handler>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Handler_k__BackingField, put=__cordl_internal_set__Handler_k__BackingField)) ::UnityW<::VROSC::LoopStationGroupHandler>  _Handler_k__BackingField;

/// @brief Field <LoopPlayers>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__LoopPlayers_k__BackingField, put=__cordl_internal_set__LoopPlayers_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  _LoopPlayers_k__BackingField;

/// @brief Field <RowInAutoArrange>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__RowInAutoArrange_k__BackingField, put=__cordl_internal_set__RowInAutoArrange_k__BackingField)) int32_t  _RowInAutoArrange_k__BackingField;

/// @brief Field _arranger, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__arranger, put=__cordl_internal_set__arranger)) ::UnityW<::VROSC::LoopListArranger>  _arranger;

/// @brief Field _autoMover, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__autoMover, put=__cordl_internal_set__autoMover)) ::UnityW<::VROSC::LoopStationGroupMover>  _autoMover;

/// @brief Field _dimensions, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__dimensions, put=__cordl_internal_set__dimensions)) ::UnityW<::UnityEngine::RectTransform>  _dimensions;

/// @brief Field _disabler, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__disabler, put=__cordl_internal_set__disabler)) ::UnityW<::VROSC::InteractionDisabler>  _disabler;

/// @brief Field _dropZone, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__dropZone, put=__cordl_internal_set__dropZone)) ::UnityW<::VROSC::LoopDropzone>  _dropZone;

/// @brief Field _footerRect, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__footerRect, put=__cordl_internal_set__footerRect)) ::UnityW<::UnityEngine::RectTransform>  _footerRect;

/// @brief Field _loopStation, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopStation, put=__cordl_internal_set__loopStation)) ::UnityW<::VROSC::LoopStation>  _loopStation;

/// @brief Field _loopsParent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopsParent, put=__cordl_internal_set__loopsParent)) ::UnityW<::UnityEngine::Transform>  _loopsParent;

/// @brief Field _menuRect, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__menuRect, put=__cordl_internal_set__menuRect)) ::UnityW<::UnityEngine::RectTransform>  _menuRect;

/// @brief Field _ui, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__ui, put=__cordl_internal_set__ui)) ::UnityW<::VROSC::LoopStationGroupUI>  _ui;

/// @brief Method AddLoop, addr 0x18b0c70, size 0x98, virtual false, abstract: false, final false
inline void AddLoop(::VROSC::LoopPlayer*  newPlayer, bool  considerPosition) ;

/// @brief Method AddLoopByLoad, addr 0x18b5c54, size 0x2c, virtual false, abstract: false, final false
inline void AddLoopByLoad(::VROSC::LoopPlayer*  newPlayer, int32_t  position) ;

/// @brief Method AddLoopShared, addr 0x18b5a64, size 0x1f0, virtual false, abstract: false, final false
inline void AddLoopShared(::VROSC::LoopPlayer*  newPlayer, int32_t  position) ;

/// @brief Method GetFirstLoop, addr 0x18b5e54, size 0x7c, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopPlayer> GetFirstLoop() ;

/// @brief Method GetLoopPlayerWithLongestLoop, addr 0x18b5ed0, size 0x180, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopPlayer> GetLoopPlayerWithLongestLoop() ;

/// @brief Method GetLooperPositionByOrderInList, addr 0x18b5e3c, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetLooperPositionByOrderInList(int32_t  order) ;

/// @brief Method HasTrack, addr 0x18b5c94, size 0x1a8, virtual false, abstract: false, final false
inline bool HasTrack(::StringW  trackId) ;

/// @brief Method LoadLaunchPad, addr 0x18af7c8, size 0x20, virtual false, abstract: false, final false
inline void LoadLaunchPad(::StringW  padID, ::VROSC::TransformDataController*  transformData) ;

/// @brief Method LoopDroppedOnGroup, addr 0x18b5958, size 0x84, virtual false, abstract: false, final false
inline bool LoopDroppedOnGroup(::VROSC::LoopPlayer*  loopPlayer, ::VROSC::LoopStationGroup*  origin) ;

/// @brief Method MergeLoops, addr 0x18b6068, size 0x20, virtual false, abstract: false, final false
inline void MergeLoops(bool  keepLoops) ;

static inline ::VROSC::LoopStationGroup* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18b56e0, size 0x250, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnLoadComplete, addr 0x18b2c90, size 0x24, virtual false, abstract: false, final false
inline void OnLoadComplete() ;

/// @brief Method OnLoopDeleted, addr 0x18b5c80, size 0x14, virtual false, abstract: false, final false
inline void OnLoopDeleted(::VROSC::LoopPlayer*  loopPlayer, bool  fromReset) ;

/// @brief Method RemoveLoop, addr 0x18b5338, size 0xdc, virtual true, abstract: false, final false
inline void RemoveLoop(::VROSC::LoopPlayer*  loopPlayer, bool  byGrab, bool  fromReset) ;

/// @brief Method SaveGroupPosition, addr 0x18b06a4, size 0x8c, virtual false, abstract: false, final false
inline void SaveGroupPosition() ;

/// @brief Method SetAutoSorted, addr 0x18b5954, size 0x4, virtual true, abstract: false, final false
inline void SetAutoSorted(bool  autoSorted) ;

/// @brief Method SetGroupDisplayName, addr 0x18b5280, size 0x4c, virtual false, abstract: false, final false
inline void SetGroupDisplayName(::StringW  displayName) ;

/// @brief Method SetHovering, addr 0x18b5a24, size 0x24, virtual false, abstract: false, final false
inline void SetHovering(::VROSC::LoopPlayer*  hoveringPlayer) ;

/// @brief Method SetInteractableDuringAnimation, addr 0x18b387c, size 0x194, virtual false, abstract: false, final false
inline void SetInteractableDuringAnimation(bool  interactable) ;

/// @brief Method SetIsRecordingTarget, addr 0x18b2cb4, size 0x3c, virtual false, abstract: false, final false
inline void SetIsRecordingTarget(bool  isRecordingTarget) ;

/// @brief Method SetVolumeOfGroup, addr 0x18b0d9c, size 0x24, virtual false, abstract: false, final false
inline void SetVolumeOfGroup(float_t  volume) ;

/// @brief Method Setup, addr 0x18b4de0, size 0x30c, virtual true, abstract: false, final false
inline void Setup(::VROSC::LoopStation*  loopStation, ::VROSC::LoopStationGroupHandler*  handler, ::VROSC::LoopStationGroup_SetupVariables  vars) ;

/// @brief Method UpdateGroupVisibility, addr 0x18b54f0, size 0x3c, virtual true, abstract: false, final false
inline void UpdateGroupVisibility(bool  byGrab) ;

/// @brief Method UpdateSize, addr 0x18b0514, size 0xb4, virtual false, abstract: false, final false
inline void UpdateSize() ;

constexpr ::System::Action_2<::UnityW<::VROSC::LoopStationGroup>,bool>* const& __cordl_internal_get_OnGroupRemoved() const;

constexpr ::System::Action_2<::UnityW<::VROSC::LoopStationGroup>,bool>*& __cordl_internal_get_OnGroupRemoved() ;

constexpr ::System::Action* const& __cordl_internal_get_OnGroupSizeChanged() const;

constexpr ::System::Action*& __cordl_internal_get_OnGroupSizeChanged() ;

constexpr ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>* const& __cordl_internal_get_OnLoopAdded() const;

constexpr ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*& __cordl_internal_get_OnLoopAdded() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnLoopAmountChanged() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnLoopAmountChanged() ;

constexpr ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>* const& __cordl_internal_get_OnLoopRemoved() const;

constexpr ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*& __cordl_internal_get_OnLoopRemoved() ;

constexpr ::System::Action_2<::UnityW<::VROSC::LoopStationGroup>,bool>* const& __cordl_internal_get_OnSoloChanged() const;

constexpr ::System::Action_2<::UnityW<::VROSC::LoopStationGroup>,bool>*& __cordl_internal_get_OnSoloChanged() ;

constexpr ::StringW const& __cordl_internal_get__GroupID_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__GroupID_k__BackingField() ;

constexpr ::UnityW<::VROSC::LoopStationGroupHandler> const& __cordl_internal_get__Handler_k__BackingField() const;

constexpr ::UnityW<::VROSC::LoopStationGroupHandler>& __cordl_internal_get__Handler_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>* const& __cordl_internal_get__LoopPlayers_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*& __cordl_internal_get__LoopPlayers_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__RowInAutoArrange_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__RowInAutoArrange_k__BackingField() ;

constexpr ::UnityW<::VROSC::LoopListArranger> const& __cordl_internal_get__arranger() const;

constexpr ::UnityW<::VROSC::LoopListArranger>& __cordl_internal_get__arranger() ;

constexpr ::UnityW<::VROSC::LoopStationGroupMover> const& __cordl_internal_get__autoMover() const;

constexpr ::UnityW<::VROSC::LoopStationGroupMover>& __cordl_internal_get__autoMover() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__dimensions() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__dimensions() ;

constexpr ::UnityW<::VROSC::InteractionDisabler> const& __cordl_internal_get__disabler() const;

constexpr ::UnityW<::VROSC::InteractionDisabler>& __cordl_internal_get__disabler() ;

constexpr ::UnityW<::VROSC::LoopDropzone> const& __cordl_internal_get__dropZone() const;

constexpr ::UnityW<::VROSC::LoopDropzone>& __cordl_internal_get__dropZone() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__footerRect() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__footerRect() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__loopStation() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__loopStation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__loopsParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__loopsParent() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__menuRect() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__menuRect() ;

constexpr ::UnityW<::VROSC::LoopStationGroupUI> const& __cordl_internal_get__ui() const;

constexpr ::UnityW<::VROSC::LoopStationGroupUI>& __cordl_internal_get__ui() ;

constexpr void __cordl_internal_set_OnGroupRemoved(::System::Action_2<::UnityW<::VROSC::LoopStationGroup>,bool>*  value) ;

constexpr void __cordl_internal_set_OnGroupSizeChanged(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnLoopAdded(::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*  value) ;

constexpr void __cordl_internal_set_OnLoopAmountChanged(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_OnLoopRemoved(::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*  value) ;

constexpr void __cordl_internal_set_OnSoloChanged(::System::Action_2<::UnityW<::VROSC::LoopStationGroup>,bool>*  value) ;

constexpr void __cordl_internal_set__GroupID_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Handler_k__BackingField(::UnityW<::VROSC::LoopStationGroupHandler>  value) ;

constexpr void __cordl_internal_set__LoopPlayers_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  value) ;

constexpr void __cordl_internal_set__RowInAutoArrange_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__arranger(::UnityW<::VROSC::LoopListArranger>  value) ;

constexpr void __cordl_internal_set__autoMover(::UnityW<::VROSC::LoopStationGroupMover>  value) ;

constexpr void __cordl_internal_set__dimensions(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__disabler(::UnityW<::VROSC::InteractionDisabler>  value) ;

constexpr void __cordl_internal_set__dropZone(::UnityW<::VROSC::LoopDropzone>  value) ;

constexpr void __cordl_internal_set__footerRect(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value) ;

constexpr void __cordl_internal_set__loopsParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__menuRect(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__ui(::UnityW<::VROSC::LoopStationGroupUI>  value) ;

/// @brief Method .ctor, addr 0x18b5580, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Color getStaticF_DefaultGroupColor() ;

/// @brief Method get_AutoMover, addr 0x18b56a0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopStationGroupMover> get_AutoMover() ;

/// @brief Method get_Dimensions, addr 0x18b55fc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RectTransform> get_Dimensions() ;

/// @brief Method get_GroupID, addr 0x18b561c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_GroupID() ;

/// @brief Method get_Handler, addr 0x18b5634, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopStationGroupHandler> get_Handler() ;

/// @brief Method get_IsEmpty, addr 0x18b5414, size 0x50, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_IsMuted, addr 0x18b5660, size 0x24, virtual false, abstract: false, final false
inline bool get_IsMuted() ;

/// @brief Method get_LoopPlayers, addr 0x18b5624, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>* get_LoopPlayers() ;

/// @brief Method get_Loops, addr 0x18b07b0, size 0x48, virtual false, abstract: false, final false
inline int32_t get_Loops() ;

/// @brief Method get_LoopsCanOnlyBeRearranged, addr 0x18b56c4, size 0x1c, virtual false, abstract: false, final false
inline bool get_LoopsCanOnlyBeRearranged() ;

/// @brief Method get_PlaybackConfig, addr 0x18b525c, size 0x24, virtual false, abstract: false, final false
inline ::VROSC::LoopPlaybackConfigOverride* get_PlaybackConfig() ;

/// @brief Method get_RowInAutoArrange, addr 0x18b5604, size 0x8, virtual false, abstract: false, final false
inline int32_t get_RowInAutoArrange() ;

/// @brief Method get_Volume, addr 0x18b16d4, size 0x24, virtual false, abstract: false, final false
inline float_t get_Volume() ;

static inline void setStaticF_DefaultGroupColor(::UnityEngine::Color  value) ;

/// @brief Method set_GroupID, addr 0x18b5614, size 0x8, virtual false, abstract: false, final false
inline void set_GroupID(::StringW  value) ;

/// @brief Method set_Handler, addr 0x18b563c, size 0x8, virtual false, abstract: false, final false
inline void set_Handler(::VROSC::LoopStationGroupHandler*  value) ;

/// @brief Method set_LoopPlayers, addr 0x18b562c, size 0x8, virtual false, abstract: false, final false
inline void set_LoopPlayers(::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  value) ;

/// @brief Method set_RowInAutoArrange, addr 0x18b560c, size 0x8, virtual false, abstract: false, final false
inline void set_RowInAutoArrange(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationGroup(LoopStationGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationGroup(LoopStationGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{727};

/// @brief Field <RowInAutoArrange>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____RowInAutoArrange_k__BackingField;

/// @brief Field <GroupID>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____GroupID_k__BackingField;

/// @brief Field <LoopPlayers>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  ____LoopPlayers_k__BackingField;

/// @brief Field <Handler>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationGroupHandler>  ____Handler_k__BackingField;

/// @brief Field _dropZone, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopDropzone>  ____dropZone;

/// @brief Field _loopsParent, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____loopsParent;

/// @brief Field _menuRect, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____menuRect;

/// @brief Field _footerRect, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____footerRect;

/// @brief Field _dimensions, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____dimensions;

/// @brief Field _autoMover, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationGroupMover>  ____autoMover;

/// @brief Field _arranger, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopListArranger>  ____arranger;

/// @brief Field _ui, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationGroupUI>  ____ui;

/// @brief Field _disabler, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::VROSC::InteractionDisabler>  ____disabler;

/// @brief Field OnGroupRemoved, offset: 0x88, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::VROSC::LoopStationGroup>,bool>*  ___OnGroupRemoved;

/// @brief Field OnLoopAdded, offset: 0x90, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*  ___OnLoopAdded;

/// @brief Field OnLoopRemoved, offset: 0x98, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*  ___OnLoopRemoved;

/// @brief Field OnLoopAmountChanged, offset: 0xa0, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnLoopAmountChanged;

/// @brief Field OnGroupSizeChanged, offset: 0xa8, size: 0x8, def value: None
 ::System::Action*  ___OnGroupSizeChanged;

/// @brief Field OnSoloChanged, offset: 0xb0, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::VROSC::LoopStationGroup>,bool>*  ___OnSoloChanged;

/// @brief Field _loopStation, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____loopStation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationGroup, ____RowInAutoArrange_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup, ____GroupID_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup, ____LoopPlayers_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup, ____Handler_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup, ____dropZone) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup, ____loopsParent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup, ____menuRect) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup, ____footerRect) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup, ____dimensions) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup, ____autoMover) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup, ____arranger) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup, ____ui) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup, ____disabler) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup, ___OnGroupRemoved) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup, ___OnLoopAdded) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup, ___OnLoopRemoved) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup, ___OnLoopAmountChanged) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup, ___OnGroupSizeChanged) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup, ___OnSoloChanged) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroup, ____loopStation) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationGroup, 0xc0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationGroup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationGroup*, "VROSC", "LoopStationGroup");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationGroup_SetupVariables, "VROSC", "LoopStationGroup/SetupVariables");
