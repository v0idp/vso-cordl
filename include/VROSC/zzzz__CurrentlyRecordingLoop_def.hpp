#pragma once
// IWYU pragma private; include "VROSC/CurrentlyRecordingLoop.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CurrentlyRecordingLoop)
namespace System {
class Action;
}
namespace VROSC {
class CurrentlyRecordingLoopOverdubbingAudio;
}
namespace VROSC {
class CurrentlyRecordingLoopVisualization;
}
namespace VROSC {
class CurrentlyRecordingLoop___c__DisplayClass30_0;
}
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class LoopStationRecorder;
}
namespace VROSC {
class LoopStation;
}
namespace VROSC {
class LooperSettings;
}
// Forward declare root types
namespace VROSC {
class CurrentlyRecordingLoop;
}
namespace VROSC {
class CurrentlyRecordingLoop___c__DisplayClass30_0;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::CurrentlyRecordingLoop);
MARK_REF_PTR_T(::VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CurrentlyRecordingLoop/<>c__DisplayClass30_0
class CORDL_TYPE CurrentlyRecordingLoop___c__DisplayClass30_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::CurrentlyRecordingLoop>  __4__this;

/// @brief Field callback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action*  callback;

static inline ::VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0* New_ctor() ;

/// @brief Method <ConcludeRecording>b__0, addr 0x18a6fb8, size 0x38, virtual false, abstract: false, final false
inline void _ConcludeRecording_b__0(::VROSC::LoopPlayer*  loopPlayer) ;

constexpr ::UnityW<::VROSC::CurrentlyRecordingLoop> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::CurrentlyRecordingLoop>& __cordl_internal_get___4__this() ;

constexpr ::System::Action* const& __cordl_internal_get_callback() const;

constexpr ::System::Action*& __cordl_internal_get_callback() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::CurrentlyRecordingLoop>  value) ;

constexpr void __cordl_internal_set_callback(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x18a6c8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurrentlyRecordingLoop___c__DisplayClass30_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurrentlyRecordingLoop___c__DisplayClass30_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CurrentlyRecordingLoop___c__DisplayClass30_0(CurrentlyRecordingLoop___c__DisplayClass30_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurrentlyRecordingLoop___c__DisplayClass30_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurrentlyRecordingLoop___c__DisplayClass30_0(CurrentlyRecordingLoop___c__DisplayClass30_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{694};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::CurrentlyRecordingLoop>  _____4__this;

/// @brief Field callback, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0, ___callback) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CurrentlyRecordingLoop
class CORDL_TYPE CurrentlyRecordingLoop : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass30_0 = ::VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0;

 __declspec(property(get=get_FixedLength, put=set_FixedLength)) int32_t  FixedLength;

 __declspec(property(get=get_IsOverdub, put=set_IsOverdub)) bool  IsOverdub;

 __declspec(property(get=get_LastRecordedLoop, put=set_LastRecordedLoop)) ::UnityW<::VROSC::LoopPlayer>  LastRecordedLoop;

 __declspec(property(get=get_TrackId, put=set_TrackId)) ::StringW  TrackId;

 __declspec(property(get=get_UseAutoLength, put=set_UseAutoLength)) bool  UseAutoLength;

/// @brief Field <FixedLength>k__BackingField, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__FixedLength_k__BackingField, put=__cordl_internal_set__FixedLength_k__BackingField)) int32_t  _FixedLength_k__BackingField;

/// @brief Field <IsOverdub>k__BackingField, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsOverdub_k__BackingField, put=__cordl_internal_set__IsOverdub_k__BackingField)) bool  _IsOverdub_k__BackingField;

/// @brief Field <LastRecordedLoop>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__LastRecordedLoop_k__BackingField, put=__cordl_internal_set__LastRecordedLoop_k__BackingField)) ::UnityW<::VROSC::LoopPlayer>  _LastRecordedLoop_k__BackingField;

/// @brief Field <TrackId>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__TrackId_k__BackingField, put=__cordl_internal_set__TrackId_k__BackingField)) ::StringW  _TrackId_k__BackingField;

/// @brief Field <UseAutoLength>k__BackingField, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__UseAutoLength_k__BackingField, put=__cordl_internal_set__UseAutoLength_k__BackingField)) bool  _UseAutoLength_k__BackingField;

/// @brief Field _loopStation, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopStation, put=__cordl_internal_set__loopStation)) ::UnityW<::VROSC::LoopStation>  _loopStation;

/// @brief Field _looperSettings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__looperSettings, put=__cordl_internal_set__looperSettings)) ::UnityW<::VROSC::LooperSettings>  _looperSettings;

/// @brief Field _overdubbingAudio, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__overdubbingAudio, put=__cordl_internal_set__overdubbingAudio)) ::UnityW<::VROSC::CurrentlyRecordingLoopOverdubbingAudio>  _overdubbingAudio;

/// @brief Field _recorder, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__recorder, put=__cordl_internal_set__recorder)) ::UnityW<::VROSC::LoopStationRecorder>  _recorder;

/// @brief Field _visualization, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__visualization, put=__cordl_internal_set__visualization)) ::UnityW<::VROSC::CurrentlyRecordingLoopVisualization>  _visualization;

/// @brief Method AbortRecording, addr 0x18a6f54, size 0x1c, virtual false, abstract: false, final false
inline void AbortRecording() ;

/// @brief Method ConcludeOverdub, addr 0x18a6aa4, size 0x3c, virtual false, abstract: false, final false
inline void ConcludeOverdub() ;

/// @brief Method ConcludeRecording, addr 0x18a6ae0, size 0x160, virtual false, abstract: false, final false
inline void ConcludeRecording(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, ::System::Action*  callback) ;

/// @brief Method ConcludeRecording, addr 0x18a6c40, size 0x4c, virtual false, abstract: false, final false
inline void ConcludeRecording(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  globalSyncStartOffset, ::System::Action*  callback) ;

static inline ::VROSC::CurrentlyRecordingLoop* New_ctor() ;

/// @brief Method OnStopShared, addr 0x18a6ea0, size 0x1c, virtual false, abstract: false, final false
inline void OnStopShared() ;

/// @brief Method RecordingOfLoopComplete, addr 0x18a6e70, size 0x30, virtual false, abstract: false, final false
inline void RecordingOfLoopComplete() ;

/// @brief Method RemoveLastLoop, addr 0x18a6ebc, size 0x98, virtual false, abstract: false, final false
inline void RemoveLastLoop() ;

/// @brief Method Rerecord, addr 0x18a6f78, size 0x38, virtual false, abstract: false, final false
inline void Rerecord() ;

/// @brief Method SetPlaybackConfigOfNewLoop, addr 0x18a6c94, size 0x9c, virtual false, abstract: false, final false
inline void SetPlaybackConfigOfNewLoop() ;

/// @brief Method SetRecordingLength, addr 0x18a6954, size 0x14, virtual false, abstract: false, final false
inline void SetRecordingLength(bool  usesAutoLength, int32_t  fixedLength) ;

/// @brief Method Setup, addr 0x18a6934, size 0x20, virtual false, abstract: false, final false
inline void Setup(::VROSC::LoopStation*  loopStation) ;

/// @brief Method StartRecording, addr 0x18a6968, size 0x10c, virtual false, abstract: false, final false
inline void StartRecording(::StringW  trackId, bool  isOverdub, int32_t  loopLength, int32_t  globalSyncStartOffset) ;

/// @brief Method TailRecordingComplete, addr 0x18a6d4c, size 0x124, virtual false, abstract: false, final false
inline void TailRecordingComplete(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  loopLength, ::System::Action*  callback) ;

constexpr int32_t const& __cordl_internal_get__FixedLength_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__FixedLength_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsOverdub_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsOverdub_k__BackingField() ;

constexpr ::UnityW<::VROSC::LoopPlayer> const& __cordl_internal_get__LastRecordedLoop_k__BackingField() const;

constexpr ::UnityW<::VROSC::LoopPlayer>& __cordl_internal_get__LastRecordedLoop_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__TrackId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__TrackId_k__BackingField() ;

constexpr bool const& __cordl_internal_get__UseAutoLength_k__BackingField() const;

constexpr bool& __cordl_internal_get__UseAutoLength_k__BackingField() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__loopStation() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__loopStation() ;

constexpr ::UnityW<::VROSC::LooperSettings> const& __cordl_internal_get__looperSettings() const;

constexpr ::UnityW<::VROSC::LooperSettings>& __cordl_internal_get__looperSettings() ;

constexpr ::UnityW<::VROSC::CurrentlyRecordingLoopOverdubbingAudio> const& __cordl_internal_get__overdubbingAudio() const;

constexpr ::UnityW<::VROSC::CurrentlyRecordingLoopOverdubbingAudio>& __cordl_internal_get__overdubbingAudio() ;

constexpr ::UnityW<::VROSC::LoopStationRecorder> const& __cordl_internal_get__recorder() const;

constexpr ::UnityW<::VROSC::LoopStationRecorder>& __cordl_internal_get__recorder() ;

constexpr ::UnityW<::VROSC::CurrentlyRecordingLoopVisualization> const& __cordl_internal_get__visualization() const;

constexpr ::UnityW<::VROSC::CurrentlyRecordingLoopVisualization>& __cordl_internal_get__visualization() ;

constexpr void __cordl_internal_set__FixedLength_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__IsOverdub_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LastRecordedLoop_k__BackingField(::UnityW<::VROSC::LoopPlayer>  value) ;

constexpr void __cordl_internal_set__TrackId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__UseAutoLength_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value) ;

constexpr void __cordl_internal_set__looperSettings(::UnityW<::VROSC::LooperSettings>  value) ;

constexpr void __cordl_internal_set__overdubbingAudio(::UnityW<::VROSC::CurrentlyRecordingLoopOverdubbingAudio>  value) ;

constexpr void __cordl_internal_set__recorder(::UnityW<::VROSC::LoopStationRecorder>  value) ;

constexpr void __cordl_internal_set__visualization(::UnityW<::VROSC::CurrentlyRecordingLoopVisualization>  value) ;

/// @brief Method .ctor, addr 0x18a6fb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FixedLength, addr 0x18a691c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_FixedLength() ;

/// @brief Method get_IsOverdub, addr 0x18a68f8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsOverdub() ;

/// @brief Method get_LastRecordedLoop, addr 0x18a68e4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopPlayer> get_LastRecordedLoop() ;

/// @brief Method get_TrackId, addr 0x18a692c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_TrackId() ;

/// @brief Method get_UseAutoLength, addr 0x18a690c, size 0x8, virtual false, abstract: false, final false
inline bool get_UseAutoLength() ;

/// @brief Method set_FixedLength, addr 0x18a6914, size 0x8, virtual false, abstract: false, final false
inline void set_FixedLength(int32_t  value) ;

/// @brief Method set_IsOverdub, addr 0x18a68ec, size 0xc, virtual false, abstract: false, final false
inline void set_IsOverdub(bool  value) ;

/// @brief Method set_LastRecordedLoop, addr 0x18a68dc, size 0x8, virtual false, abstract: false, final false
inline void set_LastRecordedLoop(::VROSC::LoopPlayer*  value) ;

/// @brief Method set_TrackId, addr 0x18a6924, size 0x8, virtual false, abstract: false, final false
inline void set_TrackId(::StringW  value) ;

/// @brief Method set_UseAutoLength, addr 0x18a6900, size 0xc, virtual false, abstract: false, final false
inline void set_UseAutoLength(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurrentlyRecordingLoop() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurrentlyRecordingLoop", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CurrentlyRecordingLoop(CurrentlyRecordingLoop && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurrentlyRecordingLoop", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurrentlyRecordingLoop(CurrentlyRecordingLoop const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{695};

/// @brief Field _visualization, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::CurrentlyRecordingLoopVisualization>  ____visualization;

/// @brief Field _overdubbingAudio, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::CurrentlyRecordingLoopOverdubbingAudio>  ____overdubbingAudio;

/// @brief Field _looperSettings, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::LooperSettings>  ____looperSettings;

/// @brief Field _loopStation, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____loopStation;

/// @brief Field _recorder, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationRecorder>  ____recorder;

/// @brief Field <LastRecordedLoop>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayer>  ____LastRecordedLoop_k__BackingField;

/// @brief Field <IsOverdub>k__BackingField, offset: 0x50, size: 0x1, def value: None
 bool  ____IsOverdub_k__BackingField;

/// @brief Field <UseAutoLength>k__BackingField, offset: 0x51, size: 0x1, def value: None
 bool  ____UseAutoLength_k__BackingField;

/// @brief Field <FixedLength>k__BackingField, offset: 0x54, size: 0x4, def value: None
 int32_t  ____FixedLength_k__BackingField;

/// @brief Field <TrackId>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____TrackId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CurrentlyRecordingLoop, ____visualization) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::CurrentlyRecordingLoop, ____overdubbingAudio) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::CurrentlyRecordingLoop, ____looperSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::CurrentlyRecordingLoop, ____loopStation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::CurrentlyRecordingLoop, ____recorder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::CurrentlyRecordingLoop, ____LastRecordedLoop_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::CurrentlyRecordingLoop, ____IsOverdub_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::CurrentlyRecordingLoop, ____UseAutoLength_k__BackingField) == 0x51, "Offset mismatch!");

static_assert(offsetof(::VROSC::CurrentlyRecordingLoop, ____FixedLength_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::CurrentlyRecordingLoop, ____TrackId_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CurrentlyRecordingLoop, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::CurrentlyRecordingLoop);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CurrentlyRecordingLoop*, "VROSC", "CurrentlyRecordingLoop");
NEED_NO_BOX(::VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0*, "VROSC", "CurrentlyRecordingLoop/<>c__DisplayClass30_0");
