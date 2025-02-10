#pragma once
// IWYU pragma private; include "VROSC/ReallyAnalytics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ReallyAnalytics)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace VROSC {
class ReallyAnalytics;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ReallyAnalytics);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ReallyAnalytics
class CORDL_TYPE ReallyAnalytics : public ::System::Object {
public:
// Declarations
/// @brief Field _instrumentsOpenTimes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instrumentsOpenTimes, put=setStaticF__instrumentsOpenTimes)) ::System::Collections::Generic::Dictionary_2<::StringW,float_t>*  _instrumentsOpenTimes;

/// @brief Field _lastEnvironmentEnterTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__lastEnvironmentEnterTime, put=setStaticF__lastEnvironmentEnterTime)) float_t  _lastEnvironmentEnterTime;

/// @brief Field _lastTutorialStepTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__lastTutorialStepTime, put=setStaticF__lastTutorialStepTime)) float_t  _lastTutorialStepTime;

/// @brief Field _tutorialStartTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__tutorialStartTime, put=setStaticF__tutorialStartTime)) float_t  _tutorialStartTime;

/// @brief Method EnterScreen, addr 0x16f39d8, size 0x140, virtual false, abstract: false, final false
static inline void EnterScreen(::StringW  screenId) ;

/// @brief Method EnvironmentEnter, addr 0x16f4688, size 0x1c0, virtual false, abstract: false, final false
static inline void EnvironmentEnter(::StringW  environmentId) ;

/// @brief Method EnvironmentExit, addr 0x16f4848, size 0x21c, virtual false, abstract: false, final false
static inline void EnvironmentExit(::StringW  environmentId) ;

/// @brief Method InstrumentChangePatch, addr 0x16f3ff8, size 0x1b0, virtual false, abstract: false, final false
static inline void InstrumentChangePatch(::StringW  instrumentId, ::StringW  patchId) ;

/// @brief Method InstrumentClose, addr 0x16f3d68, size 0x290, virtual false, abstract: false, final false
static inline void InstrumentClose(::StringW  instrumentId) ;

/// @brief Method InstrumentOpen, addr 0x16f3b18, size 0x250, virtual false, abstract: false, final false
static inline void InstrumentOpen(::StringW  instrumentId) ;

/// @brief Method LoopCreate, addr 0x16f57a8, size 0x214, virtual false, abstract: false, final false
static inline void LoopCreate(::StringW  instrumentId, ::StringW  patchId, int32_t  loopLength) ;

/// @brief Method MainMenuSelection, addr 0x16f385c, size 0x17c, virtual false, abstract: false, final false
static inline void MainMenuSelection(::StringW  optionId) ;

/// @brief Method SongDelete, addr 0x16f4edc, size 0x20c, virtual false, abstract: false, final false
static inline void SongDelete(::StringW  songId, bool  isCloud, bool  isCommunity) ;

/// @brief Method SongDownload, addr 0x16f562c, size 0x17c, virtual false, abstract: false, final false
static inline void SongDownload(::StringW  songId) ;

/// @brief Method SongFavorite, addr 0x16f52cc, size 0x1e4, virtual false, abstract: false, final false
static inline void SongFavorite(::StringW  songId, bool  add) ;

/// @brief Method SongLoad, addr 0x16f4c70, size 0x26c, virtual false, abstract: false, final false
static inline void SongLoad(::StringW  songId, bool  isCloud, bool  isCommunity, bool  isFavorite) ;

/// @brief Method SongPreviewPlay, addr 0x16f54b0, size 0x17c, virtual false, abstract: false, final false
static inline void SongPreviewPlay(::StringW  songId) ;

/// @brief Method SongSave, addr 0x16f4a64, size 0x20c, virtual false, abstract: false, final false
static inline void SongSave(::StringW  songId, bool  isCloud, bool  isCommunity) ;

/// @brief Method SongUpVote, addr 0x16f50e8, size 0x1e4, virtual false, abstract: false, final false
static inline void SongUpVote(::StringW  songId, bool  add) ;

/// @brief Method ToolClose, addr 0x16f43f8, size 0x290, virtual false, abstract: false, final false
static inline void ToolClose(::StringW  toolId) ;

/// @brief Method ToolOpen, addr 0x16f41a8, size 0x250, virtual false, abstract: false, final false
static inline void ToolOpen(::StringW  toolId) ;

/// @brief Method TutorialComplete, addr 0x16f5f8c, size 0x1d8, virtual false, abstract: false, final false
static inline void TutorialComplete(::StringW  tutorialId) ;

/// @brief Method TutorialSkip, addr 0x16f5d5c, size 0x230, virtual false, abstract: false, final false
static inline void TutorialSkip(::StringW  tutorialId, int32_t  skippedStepIndex) ;

/// @brief Method TutorialStart, addr 0x16f59bc, size 0x19c, virtual false, abstract: false, final false
static inline void TutorialStart(::StringW  tutorialId) ;

/// @brief Method TutorialStepComplete, addr 0x16f5b58, size 0x204, virtual false, abstract: false, final false
static inline void TutorialStepComplete(::StringW  tutorialId, int32_t  stepIndex) ;

/// @brief Method TutorialVideoPlay, addr 0x16f6164, size 0x148, virtual false, abstract: false, final false
static inline void TutorialVideoPlay(::StringW  tutorialVideoId) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,float_t>* getStaticF__instrumentsOpenTimes() ;

static inline float_t getStaticF__lastEnvironmentEnterTime() ;

static inline float_t getStaticF__lastTutorialStepTime() ;

static inline float_t getStaticF__tutorialStartTime() ;

static inline void setStaticF__instrumentsOpenTimes(::System::Collections::Generic::Dictionary_2<::StringW,float_t>*  value) ;

static inline void setStaticF__lastEnvironmentEnterTime(float_t  value) ;

static inline void setStaticF__lastTutorialStepTime(float_t  value) ;

static inline void setStaticF__tutorialStartTime(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReallyAnalytics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReallyAnalytics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReallyAnalytics(ReallyAnalytics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReallyAnalytics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReallyAnalytics(ReallyAnalytics const& ) = delete;

/// @brief Field AB_GROUP offset 0xffffffff size 0x8
static constexpr ::ConstString  AB_GROUP{u"ab_group"};

/// @brief Field AB_TEST_ID offset 0xffffffff size 0x8
static constexpr ::ConstString  AB_TEST_ID{u"ab_test_id"};

/// @brief Field CLOUD_SONG offset 0xffffffff size 0x8
static constexpr ::ConstString  CLOUD_SONG{u"Cloud"};

/// @brief Field COMMUNITY_SONG offset 0xffffffff size 0x8
static constexpr ::ConstString  COMMUNITY_SONG{u"Community"};

/// @brief Field ENVIRONMENT_ENTER offset 0xffffffff size 0x8
static constexpr ::ConstString  ENVIRONMENT_ENTER{u"environment_enter"};

/// @brief Field ENVIRONMENT_EXIT offset 0xffffffff size 0x8
static constexpr ::ConstString  ENVIRONMENT_EXIT{u"environment_exit"};

/// @brief Field ENVIRONMENT_ID offset 0xffffffff size 0x8
static constexpr ::ConstString  ENVIRONMENT_ID{u"environment_id"};

/// @brief Field FAVORITE_ADD offset 0xffffffff size 0x8
static constexpr ::ConstString  FAVORITE_ADD{u"add_favorite"};

/// @brief Field INSTRUMENT_CHANGE_PATCH offset 0xffffffff size 0x8
static constexpr ::ConstString  INSTRUMENT_CHANGE_PATCH{u"instrument_change_patch"};

/// @brief Field INSTRUMENT_CHANGE_SAMPLE offset 0xffffffff size 0x8
static constexpr ::ConstString  INSTRUMENT_CHANGE_SAMPLE{u"instrument_change_sample"};

/// @brief Field INSTRUMENT_CLOSE offset 0xffffffff size 0x8
static constexpr ::ConstString  INSTRUMENT_CLOSE{u"instrument_close"};

/// @brief Field INSTRUMENT_ID offset 0xffffffff size 0x8
static constexpr ::ConstString  INSTRUMENT_ID{u"instrument_id"};

/// @brief Field INSTRUMENT_OPEN offset 0xffffffff size 0x8
static constexpr ::ConstString  INSTRUMENT_OPEN{u"instrument_open"};

/// @brief Field IS_FAVORITE offset 0xffffffff size 0x8
static constexpr ::ConstString  IS_FAVORITE{u"is_favorite"};

/// @brief Field LOCAL_SONG offset 0xffffffff size 0x8
static constexpr ::ConstString  LOCAL_SONG{u"Local"};

/// @brief Field LOOP_CREATE offset 0xffffffff size 0x8
static constexpr ::ConstString  LOOP_CREATE{u"loop_create"};

/// @brief Field LOOP_LENGTH offset 0xffffffff size 0x8
static constexpr ::ConstString  LOOP_LENGTH{u"loop_length"};

/// @brief Field MAIN_MENU_OPTION offset 0xffffffff size 0x8
static constexpr ::ConstString  MAIN_MENU_OPTION{u"main_menu_option"};

/// @brief Field MAIN_MENU_SELECTION offset 0xffffffff size 0x8
static constexpr ::ConstString  MAIN_MENU_SELECTION{u"main_menu_selection"};

/// @brief Field PATCH_ID offset 0xffffffff size 0x8
static constexpr ::ConstString  PATCH_ID{u"patch_id"};

/// @brief Field SAMPLE_ID offset 0xffffffff size 0x8
static constexpr ::ConstString  SAMPLE_ID{u"sample_id"};

/// @brief Field SONG_DELETE offset 0xffffffff size 0x8
static constexpr ::ConstString  SONG_DELETE{u"song_delete"};

/// @brief Field SONG_DOWNLOAD offset 0xffffffff size 0x8
static constexpr ::ConstString  SONG_DOWNLOAD{u"song_download"};

/// @brief Field SONG_FAVORITE offset 0xffffffff size 0x8
static constexpr ::ConstString  SONG_FAVORITE{u"song_favorite"};

/// @brief Field SONG_ID offset 0xffffffff size 0x8
static constexpr ::ConstString  SONG_ID{u"song_id"};

/// @brief Field SONG_LOAD offset 0xffffffff size 0x8
static constexpr ::ConstString  SONG_LOAD{u"song_load"};

/// @brief Field SONG_PREVIEW_PLAY offset 0xffffffff size 0x8
static constexpr ::ConstString  SONG_PREVIEW_PLAY{u"song_preview_play"};

/// @brief Field SONG_SAVE offset 0xffffffff size 0x8
static constexpr ::ConstString  SONG_SAVE{u"song_save"};

/// @brief Field SONG_TYPE offset 0xffffffff size 0x8
static constexpr ::ConstString  SONG_TYPE{u"song_type"};

/// @brief Field SONG_UPVOTE offset 0xffffffff size 0x8
static constexpr ::ConstString  SONG_UPVOTE{u"song_upvote"};

/// @brief Field TIME_OPEN offset 0xffffffff size 0x8
static constexpr ::ConstString  TIME_OPEN{u"time_open"};

/// @brief Field TIME_TO_COMPLETE offset 0xffffffff size 0x8
static constexpr ::ConstString  TIME_TO_COMPLETE{u"time_to_complete"};

/// @brief Field TOOL_CLOSE offset 0xffffffff size 0x8
static constexpr ::ConstString  TOOL_CLOSE{u"tool_close"};

/// @brief Field TOOL_ID offset 0xffffffff size 0x8
static constexpr ::ConstString  TOOL_ID{u"tool_id"};

/// @brief Field TOOL_OPEN offset 0xffffffff size 0x8
static constexpr ::ConstString  TOOL_OPEN{u"tool_open"};

/// @brief Field TUTORIAL_SKIPPED_STEP offset 0xffffffff size 0x8
static constexpr ::ConstString  TUTORIAL_SKIPPED_STEP{u"skipped_step"};

/// @brief Field TUTORIAL_VIDEO_ID offset 0xffffffff size 0x8
static constexpr ::ConstString  TUTORIAL_VIDEO_ID{u"tutorial_video_id"};

/// @brief Field TUTORIAL_VIDEO_PLAY offset 0xffffffff size 0x8
static constexpr ::ConstString  TUTORIAL_VIDEO_PLAY{u"tutorial_video_play"};

/// @brief Field UPVOTE_ADD offset 0xffffffff size 0x8
static constexpr ::ConstString  UPVOTE_ADD{u"add_upvote"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{782};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::ReallyAnalytics, 0x10>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ReallyAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ReallyAnalytics*, "VROSC", "ReallyAnalytics");
