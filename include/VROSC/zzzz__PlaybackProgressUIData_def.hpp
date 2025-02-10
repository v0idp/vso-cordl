#pragma once
// IWYU pragma private; include "VROSC/PlaybackProgressUIData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlaybackProgressUIData)
namespace VROSC {
class LoopPlayerPlaybackSettings;
}
namespace VROSC {
class Loop;
}
// Forward declare root types
namespace VROSC {
struct PlaybackProgressUIData;
}
// Write type traits
MARK_VAL_T(::VROSC::PlaybackProgressUIData);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.PlaybackProgressUIData
struct CORDL_TYPE PlaybackProgressUIData {
public:
// Declarations
 __declspec(property(get=get_BeginningProgress)) float_t  BeginningProgress;

 __declspec(property(get=get_CurrentTimingOffset)) int32_t  CurrentTimingOffset;

 __declspec(property(get=get_Fade)) float_t  Fade;

 __declspec(property(get=get_PlayBackProgress)) float_t  PlayBackProgress;

 __declspec(property(get=get_ShowPlayButton)) bool  ShowPlayButton;

 __declspec(property(get=get_WaitingToStart)) bool  WaitingToStart;

/// @brief Method .ctor, addr 0x1742190, size 0x188, virtual false, abstract: false, final false
inline void _ctor(::VROSC::LoopPlayerPlaybackSettings*  settings, ::VROSC::Loop*  loop, int32_t  lastCommandInputSample) ;

/// @brief Method get_BeginningProgress, addr 0x1742178, size 0x8, virtual false, abstract: false, final false
inline float_t get_BeginningProgress() ;

/// @brief Method get_CurrentTimingOffset, addr 0x1742188, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentTimingOffset() ;

/// @brief Method get_Fade, addr 0x1742180, size 0x8, virtual false, abstract: false, final false
inline float_t get_Fade() ;

/// @brief Method get_PlayBackProgress, addr 0x1742170, size 0x8, virtual false, abstract: false, final false
inline float_t get_PlayBackProgress() ;

/// @brief Method get_ShowPlayButton, addr 0x1742160, size 0x8, virtual false, abstract: false, final false
inline bool get_ShowPlayButton() ;

/// @brief Method get_WaitingToStart, addr 0x1742168, size 0x8, virtual false, abstract: false, final false
inline bool get_WaitingToStart() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlaybackProgressUIData() ;

// Ctor Parameters [CppParam { name: "_ShowPlayButton_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_WaitingToStart_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_PlayBackProgress_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_BeginningProgress_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_Fade_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_CurrentTimingOffset_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlaybackProgressUIData(bool  _ShowPlayButton_k__BackingField, bool  _WaitingToStart_k__BackingField, float_t  _PlayBackProgress_k__BackingField, float_t  _BeginningProgress_k__BackingField, float_t  _Fade_k__BackingField, int32_t  _CurrentTimingOffset_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1117};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field <ShowPlayButton>k__BackingField, offset: 0x0, size: 0x1, def value: None
 bool  _ShowPlayButton_k__BackingField;

/// @brief Field <WaitingToStart>k__BackingField, offset: 0x1, size: 0x1, def value: None
 bool  _WaitingToStart_k__BackingField;

/// @brief Field <PlayBackProgress>k__BackingField, offset: 0x4, size: 0x4, def value: None
 float_t  _PlayBackProgress_k__BackingField;

/// @brief Field <BeginningProgress>k__BackingField, offset: 0x8, size: 0x4, def value: None
 float_t  _BeginningProgress_k__BackingField;

/// @brief Field <Fade>k__BackingField, offset: 0xc, size: 0x4, def value: None
 float_t  _Fade_k__BackingField;

/// @brief Field <CurrentTimingOffset>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  _CurrentTimingOffset_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PlaybackProgressUIData, _ShowPlayButton_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlaybackProgressUIData, _WaitingToStart_k__BackingField) == 0x1, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlaybackProgressUIData, _PlayBackProgress_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlaybackProgressUIData, _BeginningProgress_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlaybackProgressUIData, _Fade_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlaybackProgressUIData, _CurrentTimingOffset_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PlaybackProgressUIData, 0x14>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PlaybackProgressUIData, "VROSC", "PlaybackProgressUIData");
