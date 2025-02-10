#pragma once
// IWYU pragma private; include "VROSC/LoopPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__ILoopGroupListItem_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopPlayer)
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
namespace VROSC {
class InteractionDisabler;
}
namespace VROSC {
class LoopPlaybackConfigOverride;
}
namespace VROSC {
class LoopPlaybackConfig;
}
namespace VROSC {
class LoopPlayerAutoMover;
}
namespace VROSC {
class LoopPlayerMover;
}
namespace VROSC {
class LoopPlayerPlaybackController;
}
namespace VROSC {
class LoopPlayerUI;
}
namespace VROSC {
class LoopPlayer___c__DisplayClass51_0;
}
namespace VROSC {
class LoopStationGroup;
}
namespace VROSC {
class LoopStation;
}
namespace VROSC {
class Loop;
}
namespace VROSC {
struct PlaybackProgressUIData;
}
// Forward declare root types
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class LoopPlayer___c__DisplayClass51_0;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopPlayer);
MARK_REF_PTR_T(::VROSC::LoopPlayer___c__DisplayClass51_0);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlayer/<>c__DisplayClass51_0
class CORDL_TYPE LoopPlayer___c__DisplayClass51_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::LoopPlayer>  __4__this;

/// @brief Field callback, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action*  callback;

/// @brief Field config, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_config, put=__cordl_internal_set_config)) ::VROSC::LoopPlaybackConfig*  config;

/// @brief Field loopStation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_loopStation, put=__cordl_internal_set_loopStation)) ::UnityW<::VROSC::LoopStation>  loopStation;

/// @brief Field playImmediately, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_playImmediately, put=__cordl_internal_set_playImmediately)) bool  playImmediately;

/// @brief Field trackId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_trackId, put=__cordl_internal_set_trackId)) ::StringW  trackId;

static inline ::VROSC::LoopPlayer___c__DisplayClass51_0* New_ctor() ;

/// @brief Method <Setup>b__0, addr 0x18a1220, size 0x100, virtual false, abstract: false, final false
inline void _Setup_b__0() ;

constexpr ::UnityW<::VROSC::LoopPlayer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::LoopPlayer>& __cordl_internal_get___4__this() ;

constexpr ::System::Action* const& __cordl_internal_get_callback() const;

constexpr ::System::Action*& __cordl_internal_get_callback() ;

constexpr ::VROSC::LoopPlaybackConfig* const& __cordl_internal_get_config() const;

constexpr ::VROSC::LoopPlaybackConfig*& __cordl_internal_get_config() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get_loopStation() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get_loopStation() ;

constexpr bool const& __cordl_internal_get_playImmediately() const;

constexpr bool& __cordl_internal_get_playImmediately() ;

constexpr ::StringW const& __cordl_internal_get_trackId() const;

constexpr ::StringW& __cordl_internal_get_trackId() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::LoopPlayer>  value) ;

constexpr void __cordl_internal_set_callback(::System::Action*  value) ;

constexpr void __cordl_internal_set_config(::VROSC::LoopPlaybackConfig*  value) ;

constexpr void __cordl_internal_set_loopStation(::UnityW<::VROSC::LoopStation>  value) ;

constexpr void __cordl_internal_set_playImmediately(bool  value) ;

constexpr void __cordl_internal_set_trackId(::StringW  value) ;

/// @brief Method .ctor, addr 0x18a0344, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlayer___c__DisplayClass51_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayer___c__DisplayClass51_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlayer___c__DisplayClass51_0(LoopPlayer___c__DisplayClass51_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayer___c__DisplayClass51_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlayer___c__DisplayClass51_0(LoopPlayer___c__DisplayClass51_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{669};

/// @brief Field config, offset: 0x10, size: 0x8, def value: None
 ::VROSC::LoopPlaybackConfig*  ___config;

/// @brief Field playImmediately, offset: 0x18, size: 0x1, def value: None
 bool  ___playImmediately;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayer>  _____4__this;

/// @brief Field loopStation, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ___loopStation;

/// @brief Field trackId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___trackId;

/// @brief Field callback, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlayer___c__DisplayClass51_0, ___config) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayer___c__DisplayClass51_0, ___playImmediately) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayer___c__DisplayClass51_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayer___c__DisplayClass51_0, ___loopStation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayer___c__DisplayClass51_0, ___trackId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayer___c__DisplayClass51_0, ___callback) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlayer___c__DisplayClass51_0, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, VROSC.ILoopGroupListItem
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlayer
class CORDL_TYPE LoopPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass51_0 = ::VROSC::LoopPlayer___c__DisplayClass51_0;

 __declspec(property(get=get_AutoMover)) ::UnityW<::VROSC::LoopPlayerAutoMover>  AutoMover;

 __declspec(property(get=get_BelongsToGroup, put=set_BelongsToGroup)) ::UnityW<::VROSC::LoopStationGroup>  BelongsToGroup;

 __declspec(property(get=get_InstrumentName, put=set_InstrumentName)) ::StringW  InstrumentName;

 __declspec(property(get=get_IsGrabbed)) bool  IsGrabbed;

 __declspec(property(get=get_IsMuteActive)) bool  IsMuteActive;

 __declspec(property(get=get_IsPlaying)) bool  IsPlaying;

 __declspec(property(get=get_IsSoloActive)) bool  IsSoloActive;

 __declspec(property(get=get_Loop)) ::VROSC::Loop*  Loop;

 __declspec(property(get=get_LoopStation, put=set_LoopStation)) ::UnityW<::VROSC::LoopStation>  LoopStation;

/// @brief Field OnDelete, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDelete, put=__cordl_internal_set_OnDelete)) ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*  OnDelete;

/// @brief Field OnGrabbed, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGrabbed, put=__cordl_internal_set_OnGrabbed)) ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*  OnGrabbed;

/// @brief Field OnSoloChanged, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSoloChanged, put=__cordl_internal_set_OnSoloChanged)) ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*  OnSoloChanged;

 __declspec(property(get=get_Playback)) ::UnityW<::VROSC::LoopPlayerPlaybackController>  Playback;

 __declspec(property(get=get_PositionInGroup, put=set_PositionInGroup)) int32_t  PositionInGroup;

 __declspec(property(get=get_RectTransform)) ::UnityW<::UnityEngine::RectTransform>  RectTransform;

 __declspec(property(get=get_TrackID, put=set_TrackID)) ::StringW  TrackID;

 __declspec(property(get=get_UI)) ::UnityW<::VROSC::LoopPlayerUI>  UI;

/// @brief Field <BelongsToGroup>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__BelongsToGroup_k__BackingField, put=__cordl_internal_set__BelongsToGroup_k__BackingField)) ::UnityW<::VROSC::LoopStationGroup>  _BelongsToGroup_k__BackingField;

/// @brief Field <InstrumentName>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__InstrumentName_k__BackingField, put=__cordl_internal_set__InstrumentName_k__BackingField)) ::StringW  _InstrumentName_k__BackingField;

/// @brief Field <LoopStation>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__LoopStation_k__BackingField, put=__cordl_internal_set__LoopStation_k__BackingField)) ::UnityW<::VROSC::LoopStation>  _LoopStation_k__BackingField;

/// @brief Field <PositionInGroup>k__BackingField, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__PositionInGroup_k__BackingField, put=__cordl_internal_set__PositionInGroup_k__BackingField)) int32_t  _PositionInGroup_k__BackingField;

/// @brief Field <TrackID>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__TrackID_k__BackingField, put=__cordl_internal_set__TrackID_k__BackingField)) ::StringW  _TrackID_k__BackingField;

/// @brief Field _autoMover, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__autoMover, put=__cordl_internal_set__autoMover)) ::UnityW<::VROSC::LoopPlayerAutoMover>  _autoMover;

/// @brief Field _disabler, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__disabler, put=__cordl_internal_set__disabler)) ::UnityW<::VROSC::InteractionDisabler>  _disabler;

/// @brief Field _mover, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__mover, put=__cordl_internal_set__mover)) ::UnityW<::VROSC::LoopPlayerMover>  _mover;

/// @brief Field _playBack, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__playBack, put=__cordl_internal_set__playBack)) ::UnityW<::VROSC::LoopPlayerPlaybackController>  _playBack;

/// @brief Field _rectTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rectTransform, put=__cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform>  _rectTransform;

/// @brief Field _ui, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__ui, put=__cordl_internal_set__ui)) ::UnityW<::VROSC::LoopPlayerUI>  _ui;

/// @brief Convert operator to "::VROSC::ILoopGroupListItem"
constexpr operator  ::VROSC::ILoopGroupListItem*() noexcept;

/// @brief Method Awake, addr 0x189f608, size 0x488, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DeleteLoop, addr 0x18a0ce4, size 0x24, virtual false, abstract: false, final false
inline void DeleteLoop() ;

/// @brief Method GetPlaybackProgress, addr 0x18a110c, size 0x54, virtual false, abstract: false, final false
inline ::VROSC::PlaybackProgressUIData GetPlaybackProgress() ;

static inline ::VROSC::LoopPlayer* New_ctor() ;

/// @brief Method OnDestroy, addr 0x189fa90, size 0x488, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnVolumeSliderChanged, addr 0x18a102c, size 0x5c, virtual false, abstract: false, final false
inline void OnVolumeSliderChanged(float_t  volume) ;

/// @brief Method Play, addr 0x18a0d50, size 0x40, virtual false, abstract: false, final false
inline void Play(::VROSC::LoopPlaybackConfig*  config, bool  isResuming) ;

/// @brief Method ResumePlay, addr 0x18a0dc4, size 0x20, virtual false, abstract: false, final false
inline void ResumePlay() ;

/// @brief Method SetDisplayName, addr 0x18a1180, size 0x58, virtual false, abstract: false, final false
inline void SetDisplayName(::StringW  displayName) ;

/// @brief Method SetGroup, addr 0x189ff18, size 0x48, virtual false, abstract: false, final false
inline void SetGroup(::VROSC::LoopStationGroup*  loopStationGroup, int32_t  position) ;

/// @brief Method SetInteractableDuringAnimation, addr 0x18a0eec, size 0x28, virtual false, abstract: false, final false
inline void SetInteractableDuringAnimation(bool  interactable) ;

/// @brief Method SetIsMuted, addr 0x18a1088, size 0x34, virtual false, abstract: false, final false
inline void SetIsMuted(bool  isMuted) ;

/// @brief Method SetMutedBySolo, addr 0x18a10e0, size 0x20, virtual false, abstract: false, final false
inline void SetMutedBySolo(bool  isMutedBySolo) ;

/// @brief Method SetPositionInGroup, addr 0x189ff60, size 0x58, virtual true, abstract: false, final true
inline void SetPositionInGroup(int32_t  position) ;

/// @brief Method SetUserPlayLength, addr 0x18a0950, size 0x54, virtual false, abstract: false, final false
inline void SetUserPlayLength(int32_t  playLength) ;

/// @brief Method SetUserSyncOffset, addr 0x18a092c, size 0x24, virtual false, abstract: false, final false
inline void SetUserSyncOffset(int32_t  userOffset) ;

/// @brief Method SetVolume, addr 0x18a0f14, size 0x94, virtual false, abstract: false, final false
inline void SetVolume(float_t  volume) ;

/// @brief Method Setup, addr 0x18a00b4, size 0x290, virtual false, abstract: false, final false
inline void Setup(::VROSC::LoopStation*  loopStation, ::StringW  trackId, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, ::UnityEngine::Color  color, bool  playImmediately, bool  overdub, ::System::Action*  callback) ;

/// @brief Method Stop, addr 0x18a0dfc, size 0x1c, virtual false, abstract: false, final false
inline void Stop(bool  instant) ;

/// @brief Method ToggleMute, addr 0x18a0aec, size 0x54, virtual false, abstract: false, final false
inline void ToggleMute(bool  mute) ;

/// @brief Method TogglePlay, addr 0x18a0a78, size 0x1c, virtual false, abstract: false, final false
inline void TogglePlay(bool  play) ;

/// @brief Method ToggleSolo, addr 0x18a0cbc, size 0x28, virtual false, abstract: false, final false
inline void ToggleSolo(bool  soloOn) ;

/// @brief Method UpdateAudioSourceVolume, addr 0x18a0ed4, size 0x18, virtual false, abstract: false, final false
inline void UpdateAudioSourceVolume() ;

/// @brief Method UpdateLoopPlaybackValues, addr 0x18a0910, size 0x1c, virtual false, abstract: false, final false
inline void UpdateLoopPlaybackValues(double_t  bpm) ;

/// @brief Method UpdatePlayConfig, addr 0x18a0d08, size 0x18, virtual false, abstract: false, final false
inline void UpdatePlayConfig(::VROSC::LoopPlaybackConfigOverride*  playbackConfig) ;

constexpr ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>* const& __cordl_internal_get_OnDelete() const;

constexpr ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*& __cordl_internal_get_OnDelete() ;

constexpr ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>* const& __cordl_internal_get_OnGrabbed() const;

constexpr ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*& __cordl_internal_get_OnGrabbed() ;

constexpr ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>* const& __cordl_internal_get_OnSoloChanged() const;

constexpr ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*& __cordl_internal_get_OnSoloChanged() ;

constexpr ::UnityW<::VROSC::LoopStationGroup> const& __cordl_internal_get__BelongsToGroup_k__BackingField() const;

constexpr ::UnityW<::VROSC::LoopStationGroup>& __cordl_internal_get__BelongsToGroup_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__InstrumentName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__InstrumentName_k__BackingField() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__LoopStation_k__BackingField() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__LoopStation_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__PositionInGroup_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__PositionInGroup_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__TrackID_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__TrackID_k__BackingField() ;

constexpr ::UnityW<::VROSC::LoopPlayerAutoMover> const& __cordl_internal_get__autoMover() const;

constexpr ::UnityW<::VROSC::LoopPlayerAutoMover>& __cordl_internal_get__autoMover() ;

constexpr ::UnityW<::VROSC::InteractionDisabler> const& __cordl_internal_get__disabler() const;

constexpr ::UnityW<::VROSC::InteractionDisabler>& __cordl_internal_get__disabler() ;

constexpr ::UnityW<::VROSC::LoopPlayerMover> const& __cordl_internal_get__mover() const;

constexpr ::UnityW<::VROSC::LoopPlayerMover>& __cordl_internal_get__mover() ;

constexpr ::UnityW<::VROSC::LoopPlayerPlaybackController> const& __cordl_internal_get__playBack() const;

constexpr ::UnityW<::VROSC::LoopPlayerPlaybackController>& __cordl_internal_get__playBack() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform() ;

constexpr ::UnityW<::VROSC::LoopPlayerUI> const& __cordl_internal_get__ui() const;

constexpr ::UnityW<::VROSC::LoopPlayerUI>& __cordl_internal_get__ui() ;

constexpr void __cordl_internal_set_OnDelete(::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*  value) ;

constexpr void __cordl_internal_set_OnGrabbed(::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*  value) ;

constexpr void __cordl_internal_set_OnSoloChanged(::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*  value) ;

constexpr void __cordl_internal_set__BelongsToGroup_k__BackingField(::UnityW<::VROSC::LoopStationGroup>  value) ;

constexpr void __cordl_internal_set__InstrumentName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__LoopStation_k__BackingField(::UnityW<::VROSC::LoopStation>  value) ;

constexpr void __cordl_internal_set__PositionInGroup_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__TrackID_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__autoMover(::UnityW<::VROSC::LoopPlayerAutoMover>  value) ;

constexpr void __cordl_internal_set__disabler(::UnityW<::VROSC::InteractionDisabler>  value) ;

constexpr void __cordl_internal_set__mover(::UnityW<::VROSC::LoopPlayerMover>  value) ;

constexpr void __cordl_internal_set__playBack(::UnityW<::VROSC::LoopPlayerPlaybackController>  value) ;

constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__ui(::UnityW<::VROSC::LoopPlayerUI>  value) ;

/// @brief Method .ctor, addr 0x18a1218, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AutoMover, addr 0x189f560, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopPlayerAutoMover> get_AutoMover() ;

/// @brief Method get_BelongsToGroup, addr 0x189f588, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopStationGroup> get_BelongsToGroup() ;

/// @brief Method get_InstrumentName, addr 0x189f5cc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_InstrumentName() ;

/// @brief Method get_IsGrabbed, addr 0x189f5dc, size 0x1c, virtual false, abstract: false, final false
inline bool get_IsGrabbed() ;

/// @brief Method get_IsMuteActive, addr 0x189f4f4, size 0x2c, virtual false, abstract: false, final false
inline bool get_IsMuteActive() ;

/// @brief Method get_IsPlaying, addr 0x189dedc, size 0x24, virtual false, abstract: false, final false
inline bool get_IsPlaying() ;

/// @brief Method get_IsSoloActive, addr 0x189f4ac, size 0x2c, virtual false, abstract: false, final false
inline bool get_IsSoloActive() ;

/// @brief Method get_Loop, addr 0x189f5a8, size 0x24, virtual false, abstract: false, final false
inline ::VROSC::Loop* get_Loop() ;

/// @brief Method get_LoopStation, addr 0x189f578, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopStation> get_LoopStation() ;

/// @brief Method get_Playback, addr 0x189f570, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopPlayerPlaybackController> get_Playback() ;

/// @brief Method get_PositionInGroup, addr 0x189f598, size 0x8, virtual true, abstract: false, final true
inline int32_t get_PositionInGroup() ;

/// @brief Method get_RectTransform, addr 0x189f558, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::RectTransform> get_RectTransform() ;

/// @brief Method get_TrackID, addr 0x189f5f8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_TrackID() ;

/// @brief Method get_UI, addr 0x189f568, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopPlayerUI> get_UI() ;

/// @brief Convert to "::VROSC::ILoopGroupListItem"
constexpr ::VROSC::ILoopGroupListItem* i___VROSC__ILoopGroupListItem() noexcept;

/// @brief Method set_BelongsToGroup, addr 0x189f590, size 0x8, virtual false, abstract: false, final false
inline void set_BelongsToGroup(::VROSC::LoopStationGroup*  value) ;

/// @brief Method set_InstrumentName, addr 0x189f5d4, size 0x8, virtual false, abstract: false, final false
inline void set_InstrumentName(::StringW  value) ;

/// @brief Method set_LoopStation, addr 0x189f580, size 0x8, virtual false, abstract: false, final false
inline void set_LoopStation(::VROSC::LoopStation*  value) ;

/// @brief Method set_PositionInGroup, addr 0x189f5a0, size 0x8, virtual false, abstract: false, final false
inline void set_PositionInGroup(int32_t  value) ;

/// @brief Method set_TrackID, addr 0x189f600, size 0x8, virtual false, abstract: false, final false
inline void set_TrackID(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlayer(LoopPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlayer(LoopPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{670};

/// @brief Field _rectTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____rectTransform;

/// @brief Field _ui, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayerUI>  ____ui;

/// @brief Field _disabler, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::InteractionDisabler>  ____disabler;

/// @brief Field _playBack, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayerPlaybackController>  ____playBack;

/// @brief Field _mover, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayerMover>  ____mover;

/// @brief Field _autoMover, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayerAutoMover>  ____autoMover;

/// @brief Field <LoopStation>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____LoopStation_k__BackingField;

/// @brief Field OnDelete, offset: 0x58, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*  ___OnDelete;

/// @brief Field OnSoloChanged, offset: 0x60, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*  ___OnSoloChanged;

/// @brief Field OnGrabbed, offset: 0x68, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*  ___OnGrabbed;

/// @brief Field <BelongsToGroup>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationGroup>  ____BelongsToGroup_k__BackingField;

/// @brief Field <PositionInGroup>k__BackingField, offset: 0x78, size: 0x4, def value: None
 int32_t  ____PositionInGroup_k__BackingField;

/// @brief Field <InstrumentName>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::StringW  ____InstrumentName_k__BackingField;

/// @brief Field <TrackID>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::StringW  ____TrackID_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlayer, ____rectTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayer, ____ui) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayer, ____disabler) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayer, ____playBack) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayer, ____mover) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayer, ____autoMover) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayer, ____LoopStation_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayer, ___OnDelete) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayer, ___OnSoloChanged) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayer, ___OnGrabbed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayer, ____BelongsToGroup_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayer, ____PositionInGroup_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayer, ____InstrumentName_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayer, ____TrackID_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlayer, 0x90>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopPlayer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayer*, "VROSC", "LoopPlayer");
NEED_NO_BOX(::VROSC::LoopPlayer___c__DisplayClass51_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayer___c__DisplayClass51_0*, "VROSC", "LoopPlayer/<>c__DisplayClass51_0");
