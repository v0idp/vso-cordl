#pragma once
// IWYU pragma private; include "VROSC/LoopStationRecordingButtonPlayback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LoopStationRecordingButtonPlayback)
namespace VROSC {
class LoopPlaybackConfig;
}
namespace VROSC {
class LoopPlaybackSettingsUI;
}
// Forward declare root types
namespace VROSC {
class LoopStationRecordingButtonPlayback;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationRecordingButtonPlayback);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationRecordingButtonPlayback
class CORDL_TYPE LoopStationRecordingButtonPlayback : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_PlaybackConfig, put=set_PlaybackConfig)) ::VROSC::LoopPlaybackConfig*  PlaybackConfig;

/// @brief Field <PlaybackConfig>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlaybackConfig_k__BackingField, put=__cordl_internal_set__PlaybackConfig_k__BackingField)) ::VROSC::LoopPlaybackConfig*  _PlaybackConfig_k__BackingField;

/// @brief Field _playbackSettingsUI, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__playbackSettingsUI, put=__cordl_internal_set__playbackSettingsUI)) ::UnityW<::VROSC::LoopPlaybackSettingsUI>  _playbackSettingsUI;

/// @brief Method ConfigChanged, addr 0x18ac0dc, size 0x6c, virtual false, abstract: false, final false
inline void ConfigChanged() ;

/// @brief Method CreateNewConfig, addr 0x18abecc, size 0x144, virtual false, abstract: false, final false
inline void CreateNewConfig() ;

static inline ::VROSC::LoopStationRecordingButtonPlayback* New_ctor() ;

/// @brief Method Reset, addr 0x18ac010, size 0xcc, virtual false, abstract: false, final false
inline void Reset(::VROSC::LoopPlaybackConfig*  loopPlaybackConfig) ;

/// @brief Method Setup, addr 0x18abec8, size 0x4, virtual false, abstract: false, final false
inline void Setup() ;

constexpr ::VROSC::LoopPlaybackConfig* const& __cordl_internal_get__PlaybackConfig_k__BackingField() const;

constexpr ::VROSC::LoopPlaybackConfig*& __cordl_internal_get__PlaybackConfig_k__BackingField() ;

constexpr ::UnityW<::VROSC::LoopPlaybackSettingsUI> const& __cordl_internal_get__playbackSettingsUI() const;

constexpr ::UnityW<::VROSC::LoopPlaybackSettingsUI>& __cordl_internal_get__playbackSettingsUI() ;

constexpr void __cordl_internal_set__PlaybackConfig_k__BackingField(::VROSC::LoopPlaybackConfig*  value) ;

constexpr void __cordl_internal_set__playbackSettingsUI(::UnityW<::VROSC::LoopPlaybackSettingsUI>  value) ;

/// @brief Method .ctor, addr 0x18ac148, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PlaybackConfig, addr 0x18abec0, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LoopPlaybackConfig* get_PlaybackConfig() ;

/// @brief Method set_PlaybackConfig, addr 0x18abeb8, size 0x8, virtual false, abstract: false, final false
inline void set_PlaybackConfig(::VROSC::LoopPlaybackConfig*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationRecordingButtonPlayback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationRecordingButtonPlayback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationRecordingButtonPlayback(LoopStationRecordingButtonPlayback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationRecordingButtonPlayback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationRecordingButtonPlayback(LoopStationRecordingButtonPlayback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{707};

/// @brief Field _playbackSettingsUI, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlaybackSettingsUI>  ____playbackSettingsUI;

/// @brief Field <PlaybackConfig>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::VROSC::LoopPlaybackConfig*  ____PlaybackConfig_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationRecordingButtonPlayback, ____playbackSettingsUI) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingButtonPlayback, ____PlaybackConfig_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationRecordingButtonPlayback, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationRecordingButtonPlayback);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationRecordingButtonPlayback*, "VROSC", "LoopStationRecordingButtonPlayback");
