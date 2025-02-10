#pragma once
// IWYU pragma private; include "VROSC/LoopStationTrackGroup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "VROSC/zzzz__LoopStationTrackGroup_def.hpp"
#include "VROSC/zzzz__LoopPlaybackConfigData_def.hpp"
#include "VROSC/zzzz__LoopPlaybackConfigOverrideFlags_def.hpp"
#include "VROSC/zzzz__TransformDataModel_def.hpp"
//  Writing Method size for method: ::VROSC::LoopStationTrackGroup._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationTrackGroup::*)()>(&::VROSC::LoopStationTrackGroup::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x187321c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationTrackGroup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::LoopStationTrackGroup::__cordl_internal_get_GroupId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupId;
}
constexpr ::StringW const& VROSC::LoopStationTrackGroup::__cordl_internal_get_GroupId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupId;
}
constexpr void VROSC::LoopStationTrackGroup::__cordl_internal_set_GroupId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___GroupId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::LoopStationTrackGroup::__cordl_internal_get_GroupName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupName;
}
constexpr ::StringW const& VROSC::LoopStationTrackGroup::__cordl_internal_get_GroupName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupName;
}
constexpr void VROSC::LoopStationTrackGroup::__cordl_internal_set_GroupName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___GroupName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::LoopStationTrackGroup::__cordl_internal_get_GroupVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupVolume;
}
constexpr float_t const& VROSC::LoopStationTrackGroup::__cordl_internal_get_GroupVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupVolume;
}
constexpr void VROSC::LoopStationTrackGroup::__cordl_internal_set_GroupVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GroupVolume = value;
}
constexpr bool& VROSC::LoopStationTrackGroup::__cordl_internal_get_IsUserGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsUserGroup;
}
constexpr bool const& VROSC::LoopStationTrackGroup::__cordl_internal_get_IsUserGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsUserGroup;
}
constexpr void VROSC::LoopStationTrackGroup::__cordl_internal_set_IsUserGroup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsUserGroup = value;
}
constexpr bool& VROSC::LoopStationTrackGroup::__cordl_internal_get_MergeKeepsLoops()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MergeKeepsLoops;
}
constexpr bool const& VROSC::LoopStationTrackGroup::__cordl_internal_get_MergeKeepsLoops() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MergeKeepsLoops;
}
constexpr void VROSC::LoopStationTrackGroup::__cordl_internal_set_MergeKeepsLoops(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MergeKeepsLoops = value;
}
constexpr ::VROSC::TransformDataModel*& VROSC::LoopStationTrackGroup::__cordl_internal_get_TransformData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformData;
}
constexpr ::VROSC::TransformDataModel* const& VROSC::LoopStationTrackGroup::__cordl_internal_get_TransformData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformData;
}
constexpr void VROSC::LoopStationTrackGroup::__cordl_internal_set_TransformData(::VROSC::TransformDataModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TransformData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::LoopStationTrackGroup::__cordl_internal_get_GroupMuted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupMuted;
}
constexpr bool const& VROSC::LoopStationTrackGroup::__cordl_internal_get_GroupMuted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupMuted;
}
constexpr void VROSC::LoopStationTrackGroup::__cordl_internal_set_GroupMuted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GroupMuted = value;
}
constexpr ::VROSC::LoopPlaybackConfigData*& VROSC::LoopStationTrackGroup::__cordl_internal_get_PlaybackConfigData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlaybackConfigData;
}
constexpr ::VROSC::LoopPlaybackConfigData* const& VROSC::LoopStationTrackGroup::__cordl_internal_get_PlaybackConfigData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlaybackConfigData;
}
constexpr void VROSC::LoopStationTrackGroup::__cordl_internal_set_PlaybackConfigData(::VROSC::LoopPlaybackConfigData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PlaybackConfigData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopPlaybackConfigOverrideFlags*& VROSC::LoopStationTrackGroup::__cordl_internal_get_PlaybackOverrideFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlaybackOverrideFlags;
}
constexpr ::VROSC::LoopPlaybackConfigOverrideFlags* const& VROSC::LoopStationTrackGroup::__cordl_internal_get_PlaybackOverrideFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlaybackOverrideFlags;
}
constexpr void VROSC::LoopStationTrackGroup::__cordl_internal_set_PlaybackOverrideFlags(::VROSC::LoopPlaybackConfigOverrideFlags*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PlaybackOverrideFlags)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& VROSC::LoopStationTrackGroup::__cordl_internal_get_Color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Color;
}
constexpr ::UnityEngine::Color const& VROSC::LoopStationTrackGroup::__cordl_internal_get_Color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Color;
}
constexpr void VROSC::LoopStationTrackGroup::__cordl_internal_set_Color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Color = value;
}
inline void VROSC::LoopStationTrackGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationTrackGroup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopStationTrackGroup* VROSC::LoopStationTrackGroup::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopStationTrackGroup*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationTrackGroup::LoopStationTrackGroup()   {
}
