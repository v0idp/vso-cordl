#pragma once
// IWYU pragma private; include "VROSC/LoopStationTrackGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LoopStationTrackGroup)
namespace VROSC {
class LoopPlaybackConfigData;
}
namespace VROSC {
class LoopPlaybackConfigOverrideFlags;
}
namespace VROSC {
class TransformDataModel;
}
// Forward declare root types
namespace VROSC {
class LoopStationTrackGroup;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationTrackGroup);
// Dependencies System.Object, UnityEngine.Color
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationTrackGroup
class CORDL_TYPE LoopStationTrackGroup : public ::System::Object {
public:
// Declarations
/// @brief Field Color, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_Color, put=__cordl_internal_set_Color)) ::UnityEngine::Color  Color;

/// @brief Field GroupId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_GroupId, put=__cordl_internal_set_GroupId)) ::StringW  GroupId;

/// @brief Field GroupMuted, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_GroupMuted, put=__cordl_internal_set_GroupMuted)) bool  GroupMuted;

/// @brief Field GroupName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_GroupName, put=__cordl_internal_set_GroupName)) ::StringW  GroupName;

/// @brief Field GroupVolume, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_GroupVolume, put=__cordl_internal_set_GroupVolume)) float_t  GroupVolume;

/// @brief Field IsUserGroup, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsUserGroup, put=__cordl_internal_set_IsUserGroup)) bool  IsUserGroup;

/// @brief Field MergeKeepsLoops, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_MergeKeepsLoops, put=__cordl_internal_set_MergeKeepsLoops)) bool  MergeKeepsLoops;

/// @brief Field PlaybackConfigData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlaybackConfigData, put=__cordl_internal_set_PlaybackConfigData)) ::VROSC::LoopPlaybackConfigData*  PlaybackConfigData;

/// @brief Field PlaybackOverrideFlags, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlaybackOverrideFlags, put=__cordl_internal_set_PlaybackOverrideFlags)) ::VROSC::LoopPlaybackConfigOverrideFlags*  PlaybackOverrideFlags;

/// @brief Field TransformData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TransformData, put=__cordl_internal_set_TransformData)) ::VROSC::TransformDataModel*  TransformData;

static inline ::VROSC::LoopStationTrackGroup* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_Color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_Color() ;

constexpr ::StringW const& __cordl_internal_get_GroupId() const;

constexpr ::StringW& __cordl_internal_get_GroupId() ;

constexpr bool const& __cordl_internal_get_GroupMuted() const;

constexpr bool& __cordl_internal_get_GroupMuted() ;

constexpr ::StringW const& __cordl_internal_get_GroupName() const;

constexpr ::StringW& __cordl_internal_get_GroupName() ;

constexpr float_t const& __cordl_internal_get_GroupVolume() const;

constexpr float_t& __cordl_internal_get_GroupVolume() ;

constexpr bool const& __cordl_internal_get_IsUserGroup() const;

constexpr bool& __cordl_internal_get_IsUserGroup() ;

constexpr bool const& __cordl_internal_get_MergeKeepsLoops() const;

constexpr bool& __cordl_internal_get_MergeKeepsLoops() ;

constexpr ::VROSC::LoopPlaybackConfigData* const& __cordl_internal_get_PlaybackConfigData() const;

constexpr ::VROSC::LoopPlaybackConfigData*& __cordl_internal_get_PlaybackConfigData() ;

constexpr ::VROSC::LoopPlaybackConfigOverrideFlags* const& __cordl_internal_get_PlaybackOverrideFlags() const;

constexpr ::VROSC::LoopPlaybackConfigOverrideFlags*& __cordl_internal_get_PlaybackOverrideFlags() ;

constexpr ::VROSC::TransformDataModel* const& __cordl_internal_get_TransformData() const;

constexpr ::VROSC::TransformDataModel*& __cordl_internal_get_TransformData() ;

constexpr void __cordl_internal_set_Color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_GroupId(::StringW  value) ;

constexpr void __cordl_internal_set_GroupMuted(bool  value) ;

constexpr void __cordl_internal_set_GroupName(::StringW  value) ;

constexpr void __cordl_internal_set_GroupVolume(float_t  value) ;

constexpr void __cordl_internal_set_IsUserGroup(bool  value) ;

constexpr void __cordl_internal_set_MergeKeepsLoops(bool  value) ;

constexpr void __cordl_internal_set_PlaybackConfigData(::VROSC::LoopPlaybackConfigData*  value) ;

constexpr void __cordl_internal_set_PlaybackOverrideFlags(::VROSC::LoopPlaybackConfigOverrideFlags*  value) ;

constexpr void __cordl_internal_set_TransformData(::VROSC::TransformDataModel*  value) ;

/// @brief Method .ctor, addr 0x187321c, size 0xfc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationTrackGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationTrackGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationTrackGroup(LoopStationTrackGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationTrackGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationTrackGroup(LoopStationTrackGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{533};

/// @brief Field GroupId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___GroupId;

/// @brief Field GroupName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___GroupName;

/// @brief Field GroupVolume, offset: 0x20, size: 0x4, def value: None
 float_t  ___GroupVolume;

/// @brief Field IsUserGroup, offset: 0x24, size: 0x1, def value: None
 bool  ___IsUserGroup;

/// @brief Field MergeKeepsLoops, offset: 0x25, size: 0x1, def value: None
 bool  ___MergeKeepsLoops;

/// @brief Field TransformData, offset: 0x28, size: 0x8, def value: None
 ::VROSC::TransformDataModel*  ___TransformData;

/// @brief Field GroupMuted, offset: 0x30, size: 0x1, def value: None
 bool  ___GroupMuted;

/// @brief Field PlaybackConfigData, offset: 0x38, size: 0x8, def value: None
 ::VROSC::LoopPlaybackConfigData*  ___PlaybackConfigData;

/// @brief Field PlaybackOverrideFlags, offset: 0x40, size: 0x8, def value: None
 ::VROSC::LoopPlaybackConfigOverrideFlags*  ___PlaybackOverrideFlags;

/// @brief Field Color, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Color  ___Color;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationTrackGroup, ___GroupId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrackGroup, ___GroupName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrackGroup, ___GroupVolume) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrackGroup, ___IsUserGroup) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrackGroup, ___MergeKeepsLoops) == 0x25, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrackGroup, ___TransformData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrackGroup, ___GroupMuted) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrackGroup, ___PlaybackConfigData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrackGroup, ___PlaybackOverrideFlags) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationTrackGroup, ___Color) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationTrackGroup, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationTrackGroup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationTrackGroup*, "VROSC", "LoopStationTrackGroup");
