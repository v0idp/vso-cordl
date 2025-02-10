#pragma once
// IWYU pragma private; include "VROSC/LoopStationTrack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopStationTrack)
namespace AudioHelm {
class HelmPatchFormat;
}
namespace VROSC::Utils {
class KeyedValue;
}
namespace VROSC {
class LoopPlaybackConfigData;
}
namespace VROSC {
class LoopPlaybackTimingData;
}
// Forward declare root types
namespace VROSC {
class LoopStationTrack;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationTrack);
// Dependencies System.Object, UnityEngine.Color
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationTrack
class CORDL_TYPE LoopStationTrack : public ::System::Object {
public:
// Declarations
/// @brief Field BeatsPerBar, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_BeatsPerBar, put=__cordl_internal_set_BeatsPerBar)) int32_t  BeatsPerBar;

/// @brief Field BelongsToGroup, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_BelongsToGroup, put=__cordl_internal_set_BelongsToGroup)) ::StringW  BelongsToGroup;

/// @brief Field Color, offset 0x8c, size 0x10 
 __declspec(property(get=__cordl_internal_get_Color, put=__cordl_internal_set_Color)) ::UnityEngine::Color  Color;

/// @brief Field DisplayName, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayName, put=__cordl_internal_set_DisplayName)) ::StringW  DisplayName;

/// @brief Field GlobalSyncStartOffset, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_GlobalSyncStartOffset, put=__cordl_internal_set_GlobalSyncStartOffset)) int32_t  GlobalSyncStartOffset;

/// @brief Field InstrumentEvents, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_InstrumentEvents, put=__cordl_internal_set_InstrumentEvents)) ::ArrayW<uint8_t,::Array<uint8_t>*>  InstrumentEvents;

/// @brief Field InstrumentName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_InstrumentName, put=__cordl_internal_set_InstrumentName)) ::StringW  InstrumentName;

/// @brief Field IsMuted, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsMuted, put=__cordl_internal_set_IsMuted)) bool  IsMuted;

/// @brief Field IsPlaying, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsPlaying, put=__cordl_internal_set_IsPlaying)) bool  IsPlaying;

/// @brief Field LastPlaybackData, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_LastPlaybackData, put=__cordl_internal_set_LastPlaybackData)) ::VROSC::LoopPlaybackTimingData*  LastPlaybackData;

/// @brief Field LoopLength, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_LoopLength, put=__cordl_internal_set_LoopLength)) int32_t  LoopLength;

/// @brief Field NormalizeMultiplier, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_NormalizeMultiplier, put=__cordl_internal_set_NormalizeMultiplier)) float_t  NormalizeMultiplier;

/// @brief Field PanKeys, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_PanKeys, put=__cordl_internal_set_PanKeys)) ::ArrayW<::VROSC::Utils::KeyedValue*,::Array<::VROSC::Utils::KeyedValue*>*>  PanKeys;

/// @brief Field Patch, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_Patch, put=__cordl_internal_set_Patch)) ::AudioHelm::HelmPatchFormat*  Patch;

/// @brief Field PatchName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PatchName, put=__cordl_internal_set_PatchName)) ::StringW  PatchName;

/// @brief Field PlayLength, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_PlayLength, put=__cordl_internal_set_PlayLength)) int32_t  PlayLength;

/// @brief Field PlaybackConfigData, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlaybackConfigData, put=__cordl_internal_set_PlaybackConfigData)) ::VROSC::LoopPlaybackConfigData*  PlaybackConfigData;

/// @brief Field PositionInGroup, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_PositionInGroup, put=__cordl_internal_set_PositionInGroup)) int32_t  PositionInGroup;

/// @brief Field RecordedBPM, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_RecordedBPM, put=__cordl_internal_set_RecordedBPM)) double_t  RecordedBPM;

/// @brief Field StartConfigData, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_StartConfigData, put=__cordl_internal_set_StartConfigData)) ::VROSC::LoopPlaybackConfigData*  StartConfigData;

/// @brief Field TrackId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_TrackId, put=__cordl_internal_set_TrackId)) ::StringW  TrackId;

/// @brief Field TrackNumber, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_TrackNumber, put=__cordl_internal_set_TrackNumber)) int32_t  TrackNumber;

/// @brief Field UserSyncOffset, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_UserSyncOffset, put=__cordl_internal_set_UserSyncOffset)) int32_t  UserSyncOffset;

/// @brief Field Volume, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_Volume, put=__cordl_internal_set_Volume)) float_t  Volume;

/// @brief Field VolumeKeys, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_VolumeKeys, put=__cordl_internal_set_VolumeKeys)) ::VROSC::Utils::KeyedValue*  VolumeKeys;

static inline ::VROSC::LoopStationTrack* New_ctor() ;

static inline ::VROSC::LoopStationTrack* New_ctor(::VROSC::LoopStationTrack*  other, ::StringW  id, int32_t  trackNumber) ;

constexpr int32_t const& __cordl_internal_get_BeatsPerBar() const;

constexpr int32_t& __cordl_internal_get_BeatsPerBar() ;

constexpr ::StringW const& __cordl_internal_get_BelongsToGroup() const;

constexpr ::StringW& __cordl_internal_get_BelongsToGroup() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_Color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_Color() ;

constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_DisplayName() ;

constexpr int32_t const& __cordl_internal_get_GlobalSyncStartOffset() const;

constexpr int32_t& __cordl_internal_get_GlobalSyncStartOffset() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_InstrumentEvents() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_InstrumentEvents() ;

constexpr ::StringW const& __cordl_internal_get_InstrumentName() const;

constexpr ::StringW& __cordl_internal_get_InstrumentName() ;

constexpr bool const& __cordl_internal_get_IsMuted() const;

constexpr bool& __cordl_internal_get_IsMuted() ;

constexpr bool const& __cordl_internal_get_IsPlaying() const;

constexpr bool& __cordl_internal_get_IsPlaying() ;

constexpr ::VROSC::LoopPlaybackTimingData* const& __cordl_internal_get_LastPlaybackData() const;

constexpr ::VROSC::LoopPlaybackTimingData*& __cordl_internal_get_LastPlaybackData() ;

constexpr int32_t const& __cordl_internal_get_LoopLength() const;

constexpr int32_t& __cordl_internal_get_LoopLength() ;

constexpr float_t const& __cordl_internal_get_NormalizeMultiplier() const;

constexpr float_t& __cordl_internal_get_NormalizeMultiplier() ;

constexpr ::ArrayW<::VROSC::Utils::KeyedValue*,::Array<::VROSC::Utils::KeyedValue*>*> const& __cordl_internal_get_PanKeys() const;

constexpr ::ArrayW<::VROSC::Utils::KeyedValue*,::Array<::VROSC::Utils::KeyedValue*>*>& __cordl_internal_get_PanKeys() ;

constexpr ::AudioHelm::HelmPatchFormat* const& __cordl_internal_get_Patch() const;

constexpr ::AudioHelm::HelmPatchFormat*& __cordl_internal_get_Patch() ;

constexpr ::StringW const& __cordl_internal_get_PatchName() const;

constexpr ::StringW& __cordl_internal_get_PatchName() ;

constexpr int32_t const& __cordl_internal_get_PlayLength() const;

constexpr int32_t& __cordl_internal_get_PlayLength() ;

constexpr ::VROSC::LoopPlaybackConfigData* const& __cordl_internal_get_PlaybackConfigData() const;

constexpr ::VROSC::LoopPlaybackConfigData*& __cordl_internal_get_PlaybackConfigData() ;

constexpr int32_t const& __cordl_internal_get_PositionInGroup() const;

constexpr int32_t& __cordl_internal_get_PositionInGroup() ;

constexpr double_t const& __cordl_internal_get_RecordedBPM() const;

constexpr double_t& __cordl_internal_get_RecordedBPM() ;

constexpr ::VROSC::LoopPlaybackConfigData* const& __cordl_internal_get_StartConfigData() const;

constexpr ::VROSC::LoopPlaybackConfigData*& __cordl_internal_get_StartConfigData() ;

constexpr ::StringW const& __cordl_internal_get_TrackId() const;

constexpr ::StringW& __cordl_internal_get_TrackId() ;

constexpr int32_t const& __cordl_internal_get_TrackNumber() const;

constexpr int32_t& __cordl_internal_get_TrackNumber() ;

constexpr int32_t const& __cordl_internal_get_UserSyncOffset() const;

constexpr int32_t& __cordl_internal_get_UserSyncOffset() ;

constexpr float_t const& __cordl_internal_get_Volume() const;

constexpr float_t& __cordl_internal_get_Volume() ;

constexpr ::VROSC::Utils::KeyedValue* const& __cordl_internal_get_VolumeKeys() const;

constexpr ::VROSC::Utils::KeyedValue*& __cordl_internal_get_VolumeKeys() ;

constexpr void __cordl_internal_set_BeatsPerBar(int32_t  value) ;

constexpr void __cordl_internal_set_BelongsToGroup(::StringW  value) ;

constexpr void __cordl_internal_set_Color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_DisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_GlobalSyncStartOffset(int32_t  value) ;

constexpr void __cordl_internal_set_InstrumentEvents(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_InstrumentName(::StringW  value) ;

constexpr void __cordl_internal_set_IsMuted(bool  value) ;

constexpr void __cordl_internal_set_IsPlaying(bool  value) ;

constexpr void __cordl_internal_set_LastPlaybackData(::VROSC::LoopPlaybackTimingData*  value) ;

constexpr void __cordl_internal_set_LoopLength(int32_t  value) ;

constexpr void __cordl_internal_set_NormalizeMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_PanKeys(::ArrayW<::VROSC::Utils::KeyedValue*,::Array<::VROSC::Utils::KeyedValue*>*>  value) ;

constexpr void __cordl_internal_set_Patch(::AudioHelm::HelmPatchFormat*  value) ;

constexpr void __cordl_internal_set_PatchName(::StringW  value) ;

constexpr void __cordl_internal_set_PlayLength(int32_t  value) ;

constexpr void __cordl_internal_set_PlaybackConfigData(::VROSC::LoopPlaybackConfigData*  value) ;

constexpr void __cordl_internal_set_PositionInGroup(int32_t  value) ;

constexpr void __cordl_internal_set_RecordedBPM(double_t  value) ;

constexpr void __cordl_internal_set_StartConfigData(::VROSC::LoopPlaybackConfigData*  value) ;

constexpr void __cordl_internal_set_TrackId(::StringW  value) ;

constexpr void __cordl_internal_set_TrackNumber(int32_t  value) ;

constexpr void __cordl_internal_set_UserSyncOffset(int32_t  value) ;

constexpr void __cordl_internal_set_Volume(float_t  value) ;

constexpr void __cordl_internal_set_VolumeKeys(::VROSC::Utils::KeyedValue*  value) ;

/// @brief Method .ctor, addr 0x1872c90, size 0x1cc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1872e5c, size 0x3c0, virtual false, abstract: false, final false
inline void _ctor(::VROSC::LoopStationTrack*  other, ::StringW  id, int32_t  trackNumber) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationTrack() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationTrack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationTrack(LoopStationTrack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationTrack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationTrack(LoopStationTrack const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{532};

/// @brief Field TrackId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___TrackId;

/// @brief Field TrackNumber, offset: 0x18, size: 0x4, def value: None
 int32_t  ___TrackNumber;

/// @brief Field InstrumentName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___InstrumentName;

/// @brief Field PatchName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___PatchName;

/// @brief Field Volume, offset: 0x30, size: 0x4, def value: None
 float_t  ___Volume;

/// @brief Field NormalizeMultiplier, offset: 0x34, size: 0x4, def value: None
 float_t  ___NormalizeMultiplier;

/// @brief Field IsMuted, offset: 0x38, size: 0x1, def value: None
 bool  ___IsMuted;

/// @brief Field BelongsToGroup, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___BelongsToGroup;

/// @brief Field PositionInGroup, offset: 0x48, size: 0x4, def value: None
 int32_t  ___PositionInGroup;

/// @brief Field DisplayName, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___DisplayName;

/// @brief Field GlobalSyncStartOffset, offset: 0x58, size: 0x4, def value: None
 int32_t  ___GlobalSyncStartOffset;

/// @brief Field LoopLength, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___LoopLength;

/// @brief Field RecordedBPM, offset: 0x60, size: 0x8, def value: None
 double_t  ___RecordedBPM;

/// @brief Field BeatsPerBar, offset: 0x68, size: 0x4, def value: None
 int32_t  ___BeatsPerBar;

/// @brief Field PlaybackConfigData, offset: 0x70, size: 0x8, def value: None
 ::VROSC::LoopPlaybackConfigData*  ___PlaybackConfigData;

/// @brief Field StartConfigData, offset: 0x78, size: 0x8, def value: None
 ::VROSC::LoopPlaybackConfigData*  ___StartConfigData;

/// @brief Field LastPlaybackData, offset: 0x80, size: 0x8, def value: None
 ::VROSC::LoopPlaybackTimingData*  ___LastPlaybackData;

/// @brief Field IsPlaying, offset: 0x88, size: 0x1, def value: None
 bool  ___IsPlaying;

/// @brief Field Color, offset: 0x8c, size: 0x10, def value: None
 ::UnityEngine::Color  ___Color;

/// @brief Field VolumeKeys, offset: 0xa0, size: 0x8, def value: None
 ::VROSC::Utils::KeyedValue*  ___VolumeKeys;

/// @brief Field PanKeys, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::VROSC::Utils::KeyedValue*,::Array<::VROSC::Utils::KeyedValue*>*>  ___PanKeys;

/// @brief Field PlayLength, offset: 0xb0, size: 0x4, def value: None
 int32_t  ___PlayLength;

/// @brief Field UserSyncOffset, offset: 0xb4, size: 0x4, def value: None
 int32_t  ___UserSyncOffset;

/// @brief Field InstrumentEvents, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___InstrumentEvents;

/// @brief Field Patch, offset: 0xc0, size: 0x8, def value: None
 ::AudioHelm::HelmPatchFormat*  ___Patch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationTrack, ___TrackId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___TrackNumber) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___InstrumentName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___PatchName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___Volume) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___NormalizeMultiplier) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___IsMuted) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___BelongsToGroup) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___PositionInGroup) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___DisplayName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___GlobalSyncStartOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___LoopLength) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___RecordedBPM) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___BeatsPerBar) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___PlaybackConfigData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___StartConfigData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___LastPlaybackData) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___IsPlaying) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___Color) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___VolumeKeys) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___PanKeys) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___PlayLength) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___UserSyncOffset) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___InstrumentEvents) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrack, ___Patch) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationTrack, 0xc8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationTrack);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationTrack*, "VROSC", "LoopStationTrack");
