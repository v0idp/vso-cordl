#pragma once
// IWYU pragma private; include "VROSC/LoopStationTrack.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "VROSC/zzzz__LoopStationTrack_def.hpp"
#include "AudioHelm/zzzz__HelmPatchFormat_def.hpp"
#include "VROSC/Utils/zzzz__KeyedValue_def.hpp"
#include "VROSC/zzzz__LoopPlaybackConfigData_def.hpp"
#include "VROSC/zzzz__LoopPlaybackTimingData_def.hpp"
//  Writing Method size for method: ::VROSC::LoopStationTrack._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationTrack::*)()>(&::VROSC::LoopStationTrack::_ctor)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x1872c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationTrack*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationTrack._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationTrack::*)(::VROSC::LoopStationTrack*, ::StringW, int32_t)>(&::VROSC::LoopStationTrack::_ctor)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x1872e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationTrack*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationTrack*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::LoopStationTrack::__cordl_internal_get_TrackId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackId;
}
constexpr ::StringW const& VROSC::LoopStationTrack::__cordl_internal_get_TrackId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackId;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_TrackId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TrackId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::LoopStationTrack::__cordl_internal_get_TrackNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackNumber;
}
constexpr int32_t const& VROSC::LoopStationTrack::__cordl_internal_get_TrackNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackNumber;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_TrackNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrackNumber = value;
}
constexpr ::StringW& VROSC::LoopStationTrack::__cordl_internal_get_InstrumentName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstrumentName;
}
constexpr ::StringW const& VROSC::LoopStationTrack::__cordl_internal_get_InstrumentName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstrumentName;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_InstrumentName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InstrumentName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::LoopStationTrack::__cordl_internal_get_PatchName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PatchName;
}
constexpr ::StringW const& VROSC::LoopStationTrack::__cordl_internal_get_PatchName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PatchName;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_PatchName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PatchName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::LoopStationTrack::__cordl_internal_get_Volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Volume;
}
constexpr float_t const& VROSC::LoopStationTrack::__cordl_internal_get_Volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Volume;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_Volume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Volume = value;
}
constexpr float_t& VROSC::LoopStationTrack::__cordl_internal_get_NormalizeMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NormalizeMultiplier;
}
constexpr float_t const& VROSC::LoopStationTrack::__cordl_internal_get_NormalizeMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NormalizeMultiplier;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_NormalizeMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NormalizeMultiplier = value;
}
constexpr bool& VROSC::LoopStationTrack::__cordl_internal_get_IsMuted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsMuted;
}
constexpr bool const& VROSC::LoopStationTrack::__cordl_internal_get_IsMuted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsMuted;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_IsMuted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsMuted = value;
}
constexpr ::StringW& VROSC::LoopStationTrack::__cordl_internal_get_BelongsToGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BelongsToGroup;
}
constexpr ::StringW const& VROSC::LoopStationTrack::__cordl_internal_get_BelongsToGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BelongsToGroup;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_BelongsToGroup(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___BelongsToGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::LoopStationTrack::__cordl_internal_get_PositionInGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionInGroup;
}
constexpr int32_t const& VROSC::LoopStationTrack::__cordl_internal_get_PositionInGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionInGroup;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_PositionInGroup(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PositionInGroup = value;
}
constexpr ::StringW& VROSC::LoopStationTrack::__cordl_internal_get_DisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr ::StringW const& VROSC::LoopStationTrack::__cordl_internal_get_DisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_DisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DisplayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::LoopStationTrack::__cordl_internal_get_GlobalSyncStartOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalSyncStartOffset;
}
constexpr int32_t const& VROSC::LoopStationTrack::__cordl_internal_get_GlobalSyncStartOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalSyncStartOffset;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_GlobalSyncStartOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GlobalSyncStartOffset = value;
}
constexpr int32_t& VROSC::LoopStationTrack::__cordl_internal_get_LoopLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoopLength;
}
constexpr int32_t const& VROSC::LoopStationTrack::__cordl_internal_get_LoopLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoopLength;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_LoopLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LoopLength = value;
}
constexpr double_t& VROSC::LoopStationTrack::__cordl_internal_get_RecordedBPM()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordedBPM;
}
constexpr double_t const& VROSC::LoopStationTrack::__cordl_internal_get_RecordedBPM() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordedBPM;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_RecordedBPM(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RecordedBPM = value;
}
constexpr int32_t& VROSC::LoopStationTrack::__cordl_internal_get_BeatsPerBar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BeatsPerBar;
}
constexpr int32_t const& VROSC::LoopStationTrack::__cordl_internal_get_BeatsPerBar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BeatsPerBar;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_BeatsPerBar(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BeatsPerBar = value;
}
constexpr ::VROSC::LoopPlaybackConfigData*& VROSC::LoopStationTrack::__cordl_internal_get_PlaybackConfigData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlaybackConfigData;
}
constexpr ::VROSC::LoopPlaybackConfigData* const& VROSC::LoopStationTrack::__cordl_internal_get_PlaybackConfigData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlaybackConfigData;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_PlaybackConfigData(::VROSC::LoopPlaybackConfigData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PlaybackConfigData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopPlaybackConfigData*& VROSC::LoopStationTrack::__cordl_internal_get_StartConfigData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartConfigData;
}
constexpr ::VROSC::LoopPlaybackConfigData* const& VROSC::LoopStationTrack::__cordl_internal_get_StartConfigData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartConfigData;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_StartConfigData(::VROSC::LoopPlaybackConfigData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___StartConfigData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopPlaybackTimingData*& VROSC::LoopStationTrack::__cordl_internal_get_LastPlaybackData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastPlaybackData;
}
constexpr ::VROSC::LoopPlaybackTimingData* const& VROSC::LoopStationTrack::__cordl_internal_get_LastPlaybackData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastPlaybackData;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_LastPlaybackData(::VROSC::LoopPlaybackTimingData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LastPlaybackData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::LoopStationTrack::__cordl_internal_get_IsPlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsPlaying;
}
constexpr bool const& VROSC::LoopStationTrack::__cordl_internal_get_IsPlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsPlaying;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_IsPlaying(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsPlaying = value;
}
constexpr ::UnityEngine::Color& VROSC::LoopStationTrack::__cordl_internal_get_Color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Color;
}
constexpr ::UnityEngine::Color const& VROSC::LoopStationTrack::__cordl_internal_get_Color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Color;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_Color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Color = value;
}
constexpr ::VROSC::Utils::KeyedValue*& VROSC::LoopStationTrack::__cordl_internal_get_VolumeKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VolumeKeys;
}
constexpr ::VROSC::Utils::KeyedValue* const& VROSC::LoopStationTrack::__cordl_internal_get_VolumeKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VolumeKeys;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_VolumeKeys(::VROSC::Utils::KeyedValue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___VolumeKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::VROSC::Utils::KeyedValue*,::Array<::VROSC::Utils::KeyedValue*>*>& VROSC::LoopStationTrack::__cordl_internal_get_PanKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PanKeys;
}
constexpr ::ArrayW<::VROSC::Utils::KeyedValue*,::Array<::VROSC::Utils::KeyedValue*>*> const& VROSC::LoopStationTrack::__cordl_internal_get_PanKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PanKeys;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_PanKeys(::ArrayW<::VROSC::Utils::KeyedValue*,::Array<::VROSC::Utils::KeyedValue*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PanKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::LoopStationTrack::__cordl_internal_get_PlayLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayLength;
}
constexpr int32_t const& VROSC::LoopStationTrack::__cordl_internal_get_PlayLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayLength;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_PlayLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayLength = value;
}
constexpr int32_t& VROSC::LoopStationTrack::__cordl_internal_get_UserSyncOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserSyncOffset;
}
constexpr int32_t const& VROSC::LoopStationTrack::__cordl_internal_get_UserSyncOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserSyncOffset;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_UserSyncOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UserSyncOffset = value;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& VROSC::LoopStationTrack::__cordl_internal_get_InstrumentEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstrumentEvents;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& VROSC::LoopStationTrack::__cordl_internal_get_InstrumentEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstrumentEvents;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_InstrumentEvents(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InstrumentEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::AudioHelm::HelmPatchFormat*& VROSC::LoopStationTrack::__cordl_internal_get_Patch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Patch;
}
constexpr ::AudioHelm::HelmPatchFormat* const& VROSC::LoopStationTrack::__cordl_internal_get_Patch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Patch;
}
constexpr void VROSC::LoopStationTrack::__cordl_internal_set_Patch(::AudioHelm::HelmPatchFormat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Patch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::LoopStationTrack::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationTrack*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationTrack::_ctor(::VROSC::LoopStationTrack*  other, ::StringW  id, int32_t  trackNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationTrack*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationTrack*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other, id, trackNumber);
}
inline ::VROSC::LoopStationTrack* VROSC::LoopStationTrack::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopStationTrack*>());
}
inline ::VROSC::LoopStationTrack* VROSC::LoopStationTrack::New_ctor(::VROSC::LoopStationTrack*  other, ::StringW  id, int32_t  trackNumber)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopStationTrack*>(other, id, trackNumber));
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationTrack::LoopStationTrack()   {
}
