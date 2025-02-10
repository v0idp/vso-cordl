#pragma once
// IWYU pragma private; include "VROSC/LoopStationDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__ToolDataModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopStationDataModel)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class LoopPlaybackConfigData;
}
namespace VROSC {
class LoopStationLaunchpadData;
}
namespace VROSC {
class LoopStationTrackGroup;
}
namespace VROSC {
class LoopStationTrack;
}
// Forward declare root types
namespace VROSC {
class LoopStationDataModel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationDataModel);
// Dependencies VROSC.ToolDataModel
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationDataModel
class CORDL_TYPE LoopStationDataModel : public ::VROSC::ToolDataModel {
public:
// Declarations
/// @brief Field AutoSortUserGroups, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoSortUserGroups, put=__cordl_internal_set_AutoSortUserGroups)) bool  AutoSortUserGroups;

/// @brief Field DefaultPlaybackConfig, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_DefaultPlaybackConfig, put=__cordl_internal_set_DefaultPlaybackConfig)) ::VROSC::LoopPlaybackConfigData*  DefaultPlaybackConfig;

/// @brief Field FirstRecordingBeatsPerBar, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_FirstRecordingBeatsPerBar, put=__cordl_internal_set_FirstRecordingBeatsPerBar)) float_t  FirstRecordingBeatsPerBar;

/// @brief Field FirstRecordingLengthInBars, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_FirstRecordingLengthInBars, put=__cordl_internal_set_FirstRecordingLengthInBars)) float_t  FirstRecordingLengthInBars;

/// @brief Field FirstRecordingLengthInSamples, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_FirstRecordingLengthInSamples, put=__cordl_internal_set_FirstRecordingLengthInSamples)) float_t  FirstRecordingLengthInSamples;

 __declspec(property(get=get_Key)) ::StringW  Key;

/// @brief Field LoopStationLaunchPads, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_LoopStationLaunchPads, put=__cordl_internal_set_LoopStationLaunchPads)) ::System::Collections::Generic::List_1<::VROSC::LoopStationLaunchpadData*>*  LoopStationLaunchPads;

/// @brief Field LoopStationTrackGroups, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_LoopStationTrackGroups, put=__cordl_internal_set_LoopStationTrackGroups)) ::System::Collections::Generic::List_1<::VROSC::LoopStationTrackGroup*>*  LoopStationTrackGroups;

/// @brief Field LoopStationTracks, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_LoopStationTracks, put=__cordl_internal_set_LoopStationTracks)) ::System::Collections::Generic::List_1<::VROSC::LoopStationTrack*>*  LoopStationTracks;

/// @brief Field RecordButtonIsAttached, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_RecordButtonIsAttached, put=__cordl_internal_set_RecordButtonIsAttached)) bool  RecordButtonIsAttached;

/// @brief Field RecordButtonPosition, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_RecordButtonPosition, put=__cordl_internal_set_RecordButtonPosition)) ::ArrayW<float_t,::Array<float_t>*>  RecordButtonPosition;

/// @brief Field RecordButtonRotation, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_RecordButtonRotation, put=__cordl_internal_set_RecordButtonRotation)) ::ArrayW<float_t,::Array<float_t>*>  RecordButtonRotation;

/// @brief Field RecordButtonScale, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_RecordButtonScale, put=__cordl_internal_set_RecordButtonScale)) ::ArrayW<float_t,::Array<float_t>*>  RecordButtonScale;

/// @brief Field RecordButtonSpatialAnchorsUUIDs, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_RecordButtonSpatialAnchorsUUIDs, put=__cordl_internal_set_RecordButtonSpatialAnchorsUUIDs)) ::System::Collections::Generic::List_1<::StringW>*  RecordButtonSpatialAnchorsUUIDs;

/// @brief Field RecordingTargetGroupID, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_RecordingTargetGroupID, put=__cordl_internal_set_RecordingTargetGroupID)) ::StringW  RecordingTargetGroupID;

 __declspec(property(get=get_Version)) int32_t  Version;

/// @brief Field Volume, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Volume, put=__cordl_internal_set_Volume)) float_t  Volume;

static inline ::VROSC::LoopStationDataModel* New_ctor() ;

constexpr bool const& __cordl_internal_get_AutoSortUserGroups() const;

constexpr bool& __cordl_internal_get_AutoSortUserGroups() ;

constexpr ::VROSC::LoopPlaybackConfigData* const& __cordl_internal_get_DefaultPlaybackConfig() const;

constexpr ::VROSC::LoopPlaybackConfigData*& __cordl_internal_get_DefaultPlaybackConfig() ;

constexpr float_t const& __cordl_internal_get_FirstRecordingBeatsPerBar() const;

constexpr float_t& __cordl_internal_get_FirstRecordingBeatsPerBar() ;

constexpr float_t const& __cordl_internal_get_FirstRecordingLengthInBars() const;

constexpr float_t& __cordl_internal_get_FirstRecordingLengthInBars() ;

constexpr float_t const& __cordl_internal_get_FirstRecordingLengthInSamples() const;

constexpr float_t& __cordl_internal_get_FirstRecordingLengthInSamples() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::LoopStationLaunchpadData*>* const& __cordl_internal_get_LoopStationLaunchPads() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::LoopStationLaunchpadData*>*& __cordl_internal_get_LoopStationLaunchPads() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::LoopStationTrackGroup*>* const& __cordl_internal_get_LoopStationTrackGroups() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::LoopStationTrackGroup*>*& __cordl_internal_get_LoopStationTrackGroups() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::LoopStationTrack*>* const& __cordl_internal_get_LoopStationTracks() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::LoopStationTrack*>*& __cordl_internal_get_LoopStationTracks() ;

constexpr bool const& __cordl_internal_get_RecordButtonIsAttached() const;

constexpr bool& __cordl_internal_get_RecordButtonIsAttached() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_RecordButtonPosition() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_RecordButtonPosition() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_RecordButtonRotation() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_RecordButtonRotation() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_RecordButtonScale() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_RecordButtonScale() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_RecordButtonSpatialAnchorsUUIDs() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_RecordButtonSpatialAnchorsUUIDs() ;

constexpr ::StringW const& __cordl_internal_get_RecordingTargetGroupID() const;

constexpr ::StringW& __cordl_internal_get_RecordingTargetGroupID() ;

constexpr float_t const& __cordl_internal_get_Volume() const;

constexpr float_t& __cordl_internal_get_Volume() ;

constexpr void __cordl_internal_set_AutoSortUserGroups(bool  value) ;

constexpr void __cordl_internal_set_DefaultPlaybackConfig(::VROSC::LoopPlaybackConfigData*  value) ;

constexpr void __cordl_internal_set_FirstRecordingBeatsPerBar(float_t  value) ;

constexpr void __cordl_internal_set_FirstRecordingLengthInBars(float_t  value) ;

constexpr void __cordl_internal_set_FirstRecordingLengthInSamples(float_t  value) ;

constexpr void __cordl_internal_set_LoopStationLaunchPads(::System::Collections::Generic::List_1<::VROSC::LoopStationLaunchpadData*>*  value) ;

constexpr void __cordl_internal_set_LoopStationTrackGroups(::System::Collections::Generic::List_1<::VROSC::LoopStationTrackGroup*>*  value) ;

constexpr void __cordl_internal_set_LoopStationTracks(::System::Collections::Generic::List_1<::VROSC::LoopStationTrack*>*  value) ;

constexpr void __cordl_internal_set_RecordButtonIsAttached(bool  value) ;

constexpr void __cordl_internal_set_RecordButtonPosition(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set_RecordButtonRotation(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set_RecordButtonScale(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set_RecordButtonSpatialAnchorsUUIDs(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_RecordingTargetGroupID(::StringW  value) ;

constexpr void __cordl_internal_set_Volume(float_t  value) ;

/// @brief Method .ctor, addr 0x18735ec, size 0x20c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Key, addr 0x18735a4, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Key() ;

/// @brief Method get_Version, addr 0x18735e4, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Version() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationDataModel(LoopStationDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationDataModel(LoopStationDataModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{535};

/// @brief Field FirstRecordingLengthInBars, offset: 0x30, size: 0x4, def value: None
 float_t  ___FirstRecordingLengthInBars;

/// @brief Field FirstRecordingLengthInSamples, offset: 0x34, size: 0x4, def value: None
 float_t  ___FirstRecordingLengthInSamples;

/// @brief Field FirstRecordingBeatsPerBar, offset: 0x38, size: 0x4, def value: None
 float_t  ___FirstRecordingBeatsPerBar;

/// @brief Field Volume, offset: 0x3c, size: 0x4, def value: None
 float_t  ___Volume;

/// @brief Field AutoSortUserGroups, offset: 0x40, size: 0x1, def value: None
 bool  ___AutoSortUserGroups;

/// @brief Field RecordingTargetGroupID, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___RecordingTargetGroupID;

/// @brief Field RecordButtonIsAttached, offset: 0x50, size: 0x1, def value: None
 bool  ___RecordButtonIsAttached;

/// @brief Field RecordButtonPosition, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___RecordButtonPosition;

/// @brief Field RecordButtonRotation, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___RecordButtonRotation;

/// @brief Field RecordButtonScale, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___RecordButtonScale;

/// @brief Field DefaultPlaybackConfig, offset: 0x70, size: 0x8, def value: None
 ::VROSC::LoopPlaybackConfigData*  ___DefaultPlaybackConfig;

/// @brief Field LoopStationTracks, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::LoopStationTrack*>*  ___LoopStationTracks;

/// @brief Field LoopStationTrackGroups, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::LoopStationTrackGroup*>*  ___LoopStationTrackGroups;

/// @brief Field LoopStationLaunchPads, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::LoopStationLaunchpadData*>*  ___LoopStationLaunchPads;

/// @brief Field RecordButtonSpatialAnchorsUUIDs, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___RecordButtonSpatialAnchorsUUIDs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationDataModel, ___FirstRecordingLengthInBars) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataModel, ___FirstRecordingLengthInSamples) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataModel, ___FirstRecordingBeatsPerBar) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataModel, ___Volume) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataModel, ___AutoSortUserGroups) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataModel, ___RecordingTargetGroupID) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataModel, ___RecordButtonIsAttached) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataModel, ___RecordButtonPosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataModel, ___RecordButtonRotation) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataModel, ___RecordButtonScale) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataModel, ___DefaultPlaybackConfig) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataModel, ___LoopStationTracks) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataModel, ___LoopStationTrackGroups) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataModel, ___LoopStationLaunchPads) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataModel, ___RecordButtonSpatialAnchorsUUIDs) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationDataModel, 0x98>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationDataModel*, "VROSC", "LoopStationDataModel");
