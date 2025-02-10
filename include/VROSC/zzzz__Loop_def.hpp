#pragma once
// IWYU pragma private; include "VROSC/Loop.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Loop)
namespace VROSC::Utils {
class KeyedValue;
}
namespace VROSC {
class LoopData;
}
namespace VROSC {
struct LoopPlaybackTiming;
}
namespace VROSC {
struct Loop_LoopPhase;
}
// Forward declare root types
namespace VROSC {
struct Loop_LoopPhase;
}
namespace VROSC {
class Loop;
}
// Write type traits
MARK_VAL_T(::VROSC::Loop_LoopPhase);
MARK_REF_PTR_T(::VROSC::Loop);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.Loop/LoopPhase
struct CORDL_TYPE Loop_LoopPhase {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Loop_LoopPhase_Unwrapped
enum struct __Loop_LoopPhase_Unwrapped : int32_t {
__E_NoTail = static_cast<int32_t>(0x0),
__E_AddTail = static_cast<int32_t>(0x1),
__E_TailOnly = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Loop_LoopPhase_Unwrapped () const noexcept {
return static_cast<__Loop_LoopPhase_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Loop_LoopPhase() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Loop_LoopPhase(int32_t  value__) noexcept;

/// @brief Field AddTail value: I32(1)
static ::VROSC::Loop_LoopPhase const AddTail;

/// @brief Field NoTail value: I32(0)
static ::VROSC::Loop_LoopPhase const NoTail;

/// @brief Field TailOnly value: I32(2)
static ::VROSC::Loop_LoopPhase const TailOnly;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{636};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Loop_LoopPhase, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Loop_LoopPhase, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Loop
class CORDL_TYPE Loop : public ::System::Object {
public:
// Declarations
using LoopPhase = ::VROSC::Loop_LoopPhase;

 __declspec(property(get=get_BeatsPerBar, put=set_BeatsPerBar)) int32_t  BeatsPerBar;

 __declspec(property(get=get_GlobalSyncStartOffsetSpeedAdjusted, put=set_GlobalSyncStartOffsetSpeedAdjusted)) int32_t  GlobalSyncStartOffsetSpeedAdjusted;

 __declspec(property(get=get_LengthInBeats)) float_t  LengthInBeats;

 __declspec(property(get=get_LoopingLengthRaw, put=set_LoopingLengthRaw)) int32_t  LoopingLengthRaw;

 __declspec(property(get=get_Overdub, put=set_Overdub)) bool  Overdub;

 __declspec(property(get=get_PlaybackLengthRaw, put=set_PlaybackLengthRaw)) int32_t  PlaybackLengthRaw;

 __declspec(property(get=get_PlaybackLengthSpeedAdjusted, put=set_PlaybackLengthSpeedAdjusted)) int32_t  PlaybackLengthSpeedAdjusted;

 __declspec(property(get=get_SyncStartOffsetNormalized)) float_t  SyncStartOffsetNormalized;

 __declspec(property(get=get_TailLengthRaw, put=set_TailLengthRaw)) int32_t  TailLengthRaw;

 __declspec(property(get=get_TailLengthSpeedAdjusted, put=set_TailLengthSpeedAdjusted)) int32_t  TailLengthSpeedAdjusted;

 __declspec(property(get=get_TimeStretchFactor, put=set_TimeStretchFactor)) float_t  TimeStretchFactor;

 __declspec(property(get=get_TrackId, put=set_TrackId)) ::StringW  TrackId;

/// @brief Field <BeatsPerBar>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__BeatsPerBar_k__BackingField, put=__cordl_internal_set__BeatsPerBar_k__BackingField)) int32_t  _BeatsPerBar_k__BackingField;

/// @brief Field <GlobalSyncStartOffsetSpeedAdjusted>k__BackingField, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__GlobalSyncStartOffsetSpeedAdjusted_k__BackingField, put=__cordl_internal_set__GlobalSyncStartOffsetSpeedAdjusted_k__BackingField)) int32_t  _GlobalSyncStartOffsetSpeedAdjusted_k__BackingField;

/// @brief Field <LoopingLengthRaw>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__LoopingLengthRaw_k__BackingField, put=__cordl_internal_set__LoopingLengthRaw_k__BackingField)) int32_t  _LoopingLengthRaw_k__BackingField;

/// @brief Field <Overdub>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__Overdub_k__BackingField, put=__cordl_internal_set__Overdub_k__BackingField)) bool  _Overdub_k__BackingField;

/// @brief Field <PlaybackLengthRaw>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__PlaybackLengthRaw_k__BackingField, put=__cordl_internal_set__PlaybackLengthRaw_k__BackingField)) int32_t  _PlaybackLengthRaw_k__BackingField;

/// @brief Field <PlaybackLengthSpeedAdjusted>k__BackingField, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__PlaybackLengthSpeedAdjusted_k__BackingField, put=__cordl_internal_set__PlaybackLengthSpeedAdjusted_k__BackingField)) int32_t  _PlaybackLengthSpeedAdjusted_k__BackingField;

/// @brief Field <TailLengthRaw>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__TailLengthRaw_k__BackingField, put=__cordl_internal_set__TailLengthRaw_k__BackingField)) int32_t  _TailLengthRaw_k__BackingField;

/// @brief Field <TailLengthSpeedAdjusted>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__TailLengthSpeedAdjusted_k__BackingField, put=__cordl_internal_set__TailLengthSpeedAdjusted_k__BackingField)) int32_t  _TailLengthSpeedAdjusted_k__BackingField;

/// @brief Field <TimeStretchFactor>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__TimeStretchFactor_k__BackingField, put=__cordl_internal_set__TimeStretchFactor_k__BackingField)) float_t  _TimeStretchFactor_k__BackingField;

/// @brief Field <TrackId>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__TrackId_k__BackingField, put=__cordl_internal_set__TrackId_k__BackingField)) ::StringW  _TrackId_k__BackingField;

/// @brief Field _loopData, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopData, put=__cordl_internal_set__loopData)) ::VROSC::LoopData*  _loopData;

/// @brief Field _recordedGlobalOffset, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__recordedGlobalOffset, put=__cordl_internal_set__recordedGlobalOffset)) int32_t  _recordedGlobalOffset;

/// @brief Field _userOffset, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__userOffset, put=__cordl_internal_set__userOffset)) int32_t  _userOffset;

/// @brief Method GetAudio, addr 0x189162c, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> GetAudio() ;

/// @brief Method GetAudioFromData, addr 0x1891d8c, size 0x6c, virtual false, abstract: false, final false
inline void GetAudioFromData() ;

/// @brief Method GetAudioFromReadSample, addr 0x1891664, size 0x48, virtual false, abstract: false, final false
inline float_t GetAudioFromReadSample(int32_t  sample, ::VROSC::Loop_LoopPhase  loopPhase, int32_t  channel, float_t  timeStretchFactor) ;

/// @brief Method GetLastLoopPlaybackData, addr 0x1891fec, size 0x6c, virtual false, abstract: false, final false
inline ::VROSC::LoopPlaybackTiming GetLastLoopPlaybackData() ;

/// @brief Method GetLoopRecordedBPM, addr 0x1892058, size 0x64, virtual false, abstract: false, final false
inline double_t GetLoopRecordedBPM() ;

/// @brief Method GetNextLoopStartAfterSample, addr 0x18916ac, size 0x90, virtual false, abstract: false, final false
inline int32_t GetNextLoopStartAfterSample(int32_t  sample) ;

/// @brief Method GetPanKeys, addr 0x1891a04, size 0x64, virtual false, abstract: false, final false
inline ::ArrayW<::VROSC::Utils::KeyedValue*,::Array<::VROSC::Utils::KeyedValue*>*> GetPanKeys() ;

/// @brief Method GetReadIndexAtSample, addr 0x1891edc, size 0x94, virtual false, abstract: false, final false
inline int32_t GetReadIndexAtSample(int32_t  atSample, int32_t  offset) ;

/// @brief Method GetRecordedGlobalOffset, addr 0x1891804, size 0x8, virtual false, abstract: false, final false
inline int32_t GetRecordedGlobalOffset() ;

/// @brief Method GetTailAudio, addr 0x1891648, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> GetTailAudio() ;

/// @brief Method GetUserSyncOffset, addr 0x189188c, size 0x64, virtual false, abstract: false, final false
inline int32_t GetUserSyncOffset() ;

/// @brief Method GetValuesFromData, addr 0x1891df8, size 0xe4, virtual false, abstract: false, final false
inline void GetValuesFromData() ;

/// @brief Method GetVolumeKeys, addr 0x1891ae8, size 0x64, virtual false, abstract: false, final false
inline ::VROSC::Utils::KeyedValue* GetVolumeKeys() ;

static inline ::VROSC::Loop* New_ctor(::StringW  trackId) ;

/// @brief Method SetAudio, addr 0x1891b4c, size 0x240, virtual false, abstract: false, final false
inline void SetAudio(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audio, int32_t  loopLength, bool  overdub) ;

/// @brief Method SetLastLoopPlaybackData, addr 0x1891f70, size 0x7c, virtual false, abstract: false, final false
inline void SetLastLoopPlaybackData(::VROSC::LoopPlaybackTiming  timing) ;

/// @brief Method SetPanKeys, addr 0x1891970, size 0x94, virtual false, abstract: false, final false
inline void SetPanKeys(::ArrayW<float_t,::Array<float_t>*>  firstKeys, ::ArrayW<float_t,::Array<float_t>*>  secondKeys) ;

/// @brief Method SetPlayLength, addr 0x18918f0, size 0x80, virtual false, abstract: false, final false
inline void SetPlayLength(int32_t  playLength) ;

/// @brief Method SetRecordedGlobalOffset, addr 0x189173c, size 0x8, virtual false, abstract: false, final false
inline void SetRecordedGlobalOffset(int32_t  offset) ;

/// @brief Method SetUserSyncOffset, addr 0x189180c, size 0x80, virtual false, abstract: false, final false
inline void SetUserSyncOffset(int32_t  syncOffset) ;

/// @brief Method SetVolumeKeys, addr 0x1891a68, size 0x80, virtual false, abstract: false, final false
inline void SetVolumeKeys(::ArrayW<float_t,::Array<float_t>*>  volumeKeys) ;

/// @brief Method UpdateLoopPlaybackValues, addr 0x1891744, size 0xc0, virtual false, abstract: false, final false
inline void UpdateLoopPlaybackValues() ;

constexpr int32_t const& __cordl_internal_get__BeatsPerBar_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__BeatsPerBar_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__GlobalSyncStartOffsetSpeedAdjusted_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__GlobalSyncStartOffsetSpeedAdjusted_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__LoopingLengthRaw_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__LoopingLengthRaw_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Overdub_k__BackingField() const;

constexpr bool& __cordl_internal_get__Overdub_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__PlaybackLengthRaw_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__PlaybackLengthRaw_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__PlaybackLengthSpeedAdjusted_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__PlaybackLengthSpeedAdjusted_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__TailLengthRaw_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__TailLengthRaw_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__TailLengthSpeedAdjusted_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__TailLengthSpeedAdjusted_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__TimeStretchFactor_k__BackingField() const;

constexpr float_t& __cordl_internal_get__TimeStretchFactor_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__TrackId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__TrackId_k__BackingField() ;

constexpr ::VROSC::LoopData* const& __cordl_internal_get__loopData() const;

constexpr ::VROSC::LoopData*& __cordl_internal_get__loopData() ;

constexpr int32_t const& __cordl_internal_get__recordedGlobalOffset() const;

constexpr int32_t& __cordl_internal_get__recordedGlobalOffset() ;

constexpr int32_t const& __cordl_internal_get__userOffset() const;

constexpr int32_t& __cordl_internal_get__userOffset() ;

constexpr void __cordl_internal_set__BeatsPerBar_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__GlobalSyncStartOffsetSpeedAdjusted_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__LoopingLengthRaw_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Overdub_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__PlaybackLengthRaw_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__PlaybackLengthSpeedAdjusted_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__TailLengthRaw_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__TailLengthSpeedAdjusted_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__TimeStretchFactor_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__TrackId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__loopData(::VROSC::LoopData*  value) ;

constexpr void __cordl_internal_set__recordedGlobalOffset(int32_t  value) ;

constexpr void __cordl_internal_set__userOffset(int32_t  value) ;

/// @brief Method .ctor, addr 0x18915fc, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  trackId) ;

/// @brief Method get_BeatsPerBar, addr 0x1891514, size 0x8, virtual false, abstract: false, final false
inline int32_t get_BeatsPerBar() ;

/// @brief Method get_GlobalSyncStartOffsetSpeedAdjusted, addr 0x1891554, size 0x8, virtual false, abstract: false, final false
inline int32_t get_GlobalSyncStartOffsetSpeedAdjusted() ;

/// @brief Method get_LengthInBeats, addr 0x1891564, size 0x68, virtual false, abstract: false, final false
inline float_t get_LengthInBeats() ;

/// @brief Method get_LoopingLengthRaw, addr 0x18914e4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_LoopingLengthRaw() ;

/// @brief Method get_Overdub, addr 0x18915e8, size 0x8, virtual false, abstract: false, final false
inline bool get_Overdub() ;

/// @brief Method get_PlaybackLengthRaw, addr 0x18914f4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PlaybackLengthRaw() ;

/// @brief Method get_PlaybackLengthSpeedAdjusted, addr 0x1891534, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PlaybackLengthSpeedAdjusted() ;

/// @brief Method get_SyncStartOffsetNormalized, addr 0x18915cc, size 0x1c, virtual false, abstract: false, final false
inline float_t get_SyncStartOffsetNormalized() ;

/// @brief Method get_TailLengthRaw, addr 0x1891504, size 0x8, virtual false, abstract: false, final false
inline int32_t get_TailLengthRaw() ;

/// @brief Method get_TailLengthSpeedAdjusted, addr 0x1891544, size 0x8, virtual false, abstract: false, final false
inline int32_t get_TailLengthSpeedAdjusted() ;

/// @brief Method get_TimeStretchFactor, addr 0x1891524, size 0x8, virtual false, abstract: false, final false
inline float_t get_TimeStretchFactor() ;

/// @brief Method get_TrackId, addr 0x18914d4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_TrackId() ;

/// @brief Method set_BeatsPerBar, addr 0x189151c, size 0x8, virtual false, abstract: false, final false
inline void set_BeatsPerBar(int32_t  value) ;

/// @brief Method set_GlobalSyncStartOffsetSpeedAdjusted, addr 0x189155c, size 0x8, virtual false, abstract: false, final false
inline void set_GlobalSyncStartOffsetSpeedAdjusted(int32_t  value) ;

/// @brief Method set_LoopingLengthRaw, addr 0x18914ec, size 0x8, virtual false, abstract: false, final false
inline void set_LoopingLengthRaw(int32_t  value) ;

/// @brief Method set_Overdub, addr 0x18915f0, size 0xc, virtual false, abstract: false, final false
inline void set_Overdub(bool  value) ;

/// @brief Method set_PlaybackLengthRaw, addr 0x18914fc, size 0x8, virtual false, abstract: false, final false
inline void set_PlaybackLengthRaw(int32_t  value) ;

/// @brief Method set_PlaybackLengthSpeedAdjusted, addr 0x189153c, size 0x8, virtual false, abstract: false, final false
inline void set_PlaybackLengthSpeedAdjusted(int32_t  value) ;

/// @brief Method set_TailLengthRaw, addr 0x189150c, size 0x8, virtual false, abstract: false, final false
inline void set_TailLengthRaw(int32_t  value) ;

/// @brief Method set_TailLengthSpeedAdjusted, addr 0x189154c, size 0x8, virtual false, abstract: false, final false
inline void set_TailLengthSpeedAdjusted(int32_t  value) ;

/// @brief Method set_TimeStretchFactor, addr 0x189152c, size 0x8, virtual false, abstract: false, final false
inline void set_TimeStretchFactor(float_t  value) ;

/// @brief Method set_TrackId, addr 0x18914dc, size 0x8, virtual false, abstract: false, final false
inline void set_TrackId(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Loop() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Loop", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Loop(Loop && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Loop", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Loop(Loop const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{637};

/// @brief Field <TrackId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____TrackId_k__BackingField;

/// @brief Field <LoopingLengthRaw>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____LoopingLengthRaw_k__BackingField;

/// @brief Field <PlaybackLengthRaw>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____PlaybackLengthRaw_k__BackingField;

/// @brief Field <TailLengthRaw>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____TailLengthRaw_k__BackingField;

/// @brief Field <BeatsPerBar>k__BackingField, offset: 0x24, size: 0x4, def value: None
 int32_t  ____BeatsPerBar_k__BackingField;

/// @brief Field <TimeStretchFactor>k__BackingField, offset: 0x28, size: 0x4, def value: None
 float_t  ____TimeStretchFactor_k__BackingField;

/// @brief Field <PlaybackLengthSpeedAdjusted>k__BackingField, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____PlaybackLengthSpeedAdjusted_k__BackingField;

/// @brief Field <TailLengthSpeedAdjusted>k__BackingField, offset: 0x30, size: 0x4, def value: None
 int32_t  ____TailLengthSpeedAdjusted_k__BackingField;

/// @brief Field <GlobalSyncStartOffsetSpeedAdjusted>k__BackingField, offset: 0x34, size: 0x4, def value: None
 int32_t  ____GlobalSyncStartOffsetSpeedAdjusted_k__BackingField;

/// @brief Field _recordedGlobalOffset, offset: 0x38, size: 0x4, def value: None
 int32_t  ____recordedGlobalOffset;

/// @brief Field _userOffset, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____userOffset;

/// @brief Field <Overdub>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____Overdub_k__BackingField;

/// @brief Field _loopData, offset: 0x48, size: 0x8, def value: None
 ::VROSC::LoopData*  ____loopData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Loop, ____TrackId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::Loop, ____LoopingLengthRaw_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::Loop, ____PlaybackLengthRaw_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::Loop, ____TailLengthRaw_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::Loop, ____BeatsPerBar_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::Loop, ____TimeStretchFactor_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::Loop, ____PlaybackLengthSpeedAdjusted_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::Loop, ____TailLengthSpeedAdjusted_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::Loop, ____GlobalSyncStartOffsetSpeedAdjusted_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::Loop, ____recordedGlobalOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::Loop, ____userOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::Loop, ____Overdub_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::Loop, ____loopData) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Loop, 0x50>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Loop_LoopPhase, "VROSC", "Loop/LoopPhase");
NEED_NO_BOX(::VROSC::Loop);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Loop*, "VROSC", "Loop");
