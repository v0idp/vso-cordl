#pragma once
// IWYU pragma private; include "VROSC/LoopStationDataModel.hpp"
#include "VROSC/zzzz__ToolDataModel_impl.hpp"
#include "VROSC/zzzz__LoopStationDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "VROSC/zzzz__LoopPlaybackConfigData_def.hpp"
#include "VROSC/zzzz__LoopStationLaunchpadData_def.hpp"
#include "VROSC/zzzz__LoopStationTrackGroup_def.hpp"
#include "VROSC/zzzz__LoopStationTrack_def.hpp"
//  Writing Method size for method: ::VROSC::LoopStationDataModel.get_Key
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::LoopStationDataModel::*)()>(&::VROSC::LoopStationDataModel::get_Key)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18735a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationDataModel*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationDataModel.get_Version
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::LoopStationDataModel::*)()>(&::VROSC::LoopStationDataModel::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18735e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationDataModel*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationDataModel._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationDataModel::*)()>(&::VROSC::LoopStationDataModel::_ctor)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x18735ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::LoopStationDataModel::__cordl_internal_get_FirstRecordingLengthInBars()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FirstRecordingLengthInBars;
}
constexpr float_t const& VROSC::LoopStationDataModel::__cordl_internal_get_FirstRecordingLengthInBars() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FirstRecordingLengthInBars;
}
constexpr void VROSC::LoopStationDataModel::__cordl_internal_set_FirstRecordingLengthInBars(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FirstRecordingLengthInBars = value;
}
constexpr float_t& VROSC::LoopStationDataModel::__cordl_internal_get_FirstRecordingLengthInSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FirstRecordingLengthInSamples;
}
constexpr float_t const& VROSC::LoopStationDataModel::__cordl_internal_get_FirstRecordingLengthInSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FirstRecordingLengthInSamples;
}
constexpr void VROSC::LoopStationDataModel::__cordl_internal_set_FirstRecordingLengthInSamples(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FirstRecordingLengthInSamples = value;
}
constexpr float_t& VROSC::LoopStationDataModel::__cordl_internal_get_FirstRecordingBeatsPerBar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FirstRecordingBeatsPerBar;
}
constexpr float_t const& VROSC::LoopStationDataModel::__cordl_internal_get_FirstRecordingBeatsPerBar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FirstRecordingBeatsPerBar;
}
constexpr void VROSC::LoopStationDataModel::__cordl_internal_set_FirstRecordingBeatsPerBar(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FirstRecordingBeatsPerBar = value;
}
constexpr float_t& VROSC::LoopStationDataModel::__cordl_internal_get_Volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Volume;
}
constexpr float_t const& VROSC::LoopStationDataModel::__cordl_internal_get_Volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Volume;
}
constexpr void VROSC::LoopStationDataModel::__cordl_internal_set_Volume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Volume = value;
}
constexpr bool& VROSC::LoopStationDataModel::__cordl_internal_get_AutoSortUserGroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoSortUserGroups;
}
constexpr bool const& VROSC::LoopStationDataModel::__cordl_internal_get_AutoSortUserGroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoSortUserGroups;
}
constexpr void VROSC::LoopStationDataModel::__cordl_internal_set_AutoSortUserGroups(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoSortUserGroups = value;
}
constexpr ::StringW& VROSC::LoopStationDataModel::__cordl_internal_get_RecordingTargetGroupID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordingTargetGroupID;
}
constexpr ::StringW const& VROSC::LoopStationDataModel::__cordl_internal_get_RecordingTargetGroupID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordingTargetGroupID;
}
constexpr void VROSC::LoopStationDataModel::__cordl_internal_set_RecordingTargetGroupID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RecordingTargetGroupID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::LoopStationDataModel::__cordl_internal_get_RecordButtonIsAttached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordButtonIsAttached;
}
constexpr bool const& VROSC::LoopStationDataModel::__cordl_internal_get_RecordButtonIsAttached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordButtonIsAttached;
}
constexpr void VROSC::LoopStationDataModel::__cordl_internal_set_RecordButtonIsAttached(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RecordButtonIsAttached = value;
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& VROSC::LoopStationDataModel::__cordl_internal_get_RecordButtonPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordButtonPosition;
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& VROSC::LoopStationDataModel::__cordl_internal_get_RecordButtonPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordButtonPosition;
}
constexpr void VROSC::LoopStationDataModel::__cordl_internal_set_RecordButtonPosition(::ArrayW<float_t,::Array<float_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RecordButtonPosition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& VROSC::LoopStationDataModel::__cordl_internal_get_RecordButtonRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordButtonRotation;
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& VROSC::LoopStationDataModel::__cordl_internal_get_RecordButtonRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordButtonRotation;
}
constexpr void VROSC::LoopStationDataModel::__cordl_internal_set_RecordButtonRotation(::ArrayW<float_t,::Array<float_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RecordButtonRotation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& VROSC::LoopStationDataModel::__cordl_internal_get_RecordButtonScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordButtonScale;
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& VROSC::LoopStationDataModel::__cordl_internal_get_RecordButtonScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordButtonScale;
}
constexpr void VROSC::LoopStationDataModel::__cordl_internal_set_RecordButtonScale(::ArrayW<float_t,::Array<float_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RecordButtonScale)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopPlaybackConfigData*& VROSC::LoopStationDataModel::__cordl_internal_get_DefaultPlaybackConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultPlaybackConfig;
}
constexpr ::VROSC::LoopPlaybackConfigData* const& VROSC::LoopStationDataModel::__cordl_internal_get_DefaultPlaybackConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultPlaybackConfig;
}
constexpr void VROSC::LoopStationDataModel::__cordl_internal_set_DefaultPlaybackConfig(::VROSC::LoopPlaybackConfigData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DefaultPlaybackConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::LoopStationTrack*>*& VROSC::LoopStationDataModel::__cordl_internal_get_LoopStationTracks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoopStationTracks;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::LoopStationTrack*>* const& VROSC::LoopStationDataModel::__cordl_internal_get_LoopStationTracks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoopStationTracks;
}
constexpr void VROSC::LoopStationDataModel::__cordl_internal_set_LoopStationTracks(::System::Collections::Generic::List_1<::VROSC::LoopStationTrack*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LoopStationTracks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::LoopStationTrackGroup*>*& VROSC::LoopStationDataModel::__cordl_internal_get_LoopStationTrackGroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoopStationTrackGroups;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::LoopStationTrackGroup*>* const& VROSC::LoopStationDataModel::__cordl_internal_get_LoopStationTrackGroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoopStationTrackGroups;
}
constexpr void VROSC::LoopStationDataModel::__cordl_internal_set_LoopStationTrackGroups(::System::Collections::Generic::List_1<::VROSC::LoopStationTrackGroup*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LoopStationTrackGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::LoopStationLaunchpadData*>*& VROSC::LoopStationDataModel::__cordl_internal_get_LoopStationLaunchPads()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoopStationLaunchPads;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::LoopStationLaunchpadData*>* const& VROSC::LoopStationDataModel::__cordl_internal_get_LoopStationLaunchPads() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoopStationLaunchPads;
}
constexpr void VROSC::LoopStationDataModel::__cordl_internal_set_LoopStationLaunchPads(::System::Collections::Generic::List_1<::VROSC::LoopStationLaunchpadData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LoopStationLaunchPads)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& VROSC::LoopStationDataModel::__cordl_internal_get_RecordButtonSpatialAnchorsUUIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordButtonSpatialAnchorsUUIDs;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& VROSC::LoopStationDataModel::__cordl_internal_get_RecordButtonSpatialAnchorsUUIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordButtonSpatialAnchorsUUIDs;
}
constexpr void VROSC::LoopStationDataModel::__cordl_internal_set_RecordButtonSpatialAnchorsUUIDs(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RecordButtonSpatialAnchorsUUIDs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW VROSC::LoopStationDataModel::get_Key()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationDataModel*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t VROSC::LoopStationDataModel::get_Version()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationDataModel*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::LoopStationDataModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopStationDataModel* VROSC::LoopStationDataModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopStationDataModel*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationDataModel::LoopStationDataModel()   {
}
