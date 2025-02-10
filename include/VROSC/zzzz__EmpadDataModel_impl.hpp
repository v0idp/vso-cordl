#pragma once
// IWYU pragma private; include "VROSC/EmpadDataModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__EmpadDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "VROSC/zzzz__TransformDataModel_def.hpp"
//  Writing Method size for method: ::VROSC::EmpadDataModel.Upgrade
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EmpadDataModel::*)(int32_t)>(&::VROSC::EmpadDataModel::Upgrade)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1840dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmpadDataModel*>::get(),
                        "Upgrade",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EmpadDataModel._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EmpadDataModel::*)()>(&::VROSC::EmpadDataModel::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1840e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmpadDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::EmpadDataModel::__cordl_internal_get_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr int32_t const& VROSC::EmpadDataModel::__cordl_internal_get_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr void VROSC::EmpadDataModel::__cordl_internal_set_Id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Id = value;
}
constexpr int32_t& VROSC::EmpadDataModel::__cordl_internal_get_GroupId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupId;
}
constexpr int32_t const& VROSC::EmpadDataModel::__cordl_internal_get_GroupId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupId;
}
constexpr void VROSC::EmpadDataModel::__cordl_internal_set_GroupId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GroupId = value;
}
constexpr int32_t& VROSC::EmpadDataModel::__cordl_internal_get_SampleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SampleId;
}
constexpr int32_t const& VROSC::EmpadDataModel::__cordl_internal_get_SampleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SampleId;
}
constexpr void VROSC::EmpadDataModel::__cordl_internal_set_SampleId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SampleId = value;
}
constexpr int32_t& VROSC::EmpadDataModel::__cordl_internal_get_SelectedIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedIndex;
}
constexpr int32_t const& VROSC::EmpadDataModel::__cordl_internal_get_SelectedIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedIndex;
}
constexpr void VROSC::EmpadDataModel::__cordl_internal_set_SelectedIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SelectedIndex = value;
}
constexpr int32_t& VROSC::EmpadDataModel::__cordl_internal_get_MidiNote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MidiNote;
}
constexpr int32_t const& VROSC::EmpadDataModel::__cordl_internal_get_MidiNote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MidiNote;
}
constexpr void VROSC::EmpadDataModel::__cordl_internal_set_MidiNote(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MidiNote = value;
}
constexpr bool& VROSC::EmpadDataModel::__cordl_internal_get_IsPressureSensitive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsPressureSensitive;
}
constexpr bool const& VROSC::EmpadDataModel::__cordl_internal_get_IsPressureSensitive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsPressureSensitive;
}
constexpr void VROSC::EmpadDataModel::__cordl_internal_set_IsPressureSensitive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsPressureSensitive = value;
}
constexpr bool& VROSC::EmpadDataModel::__cordl_internal_get_IsSpawner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsSpawner;
}
constexpr bool const& VROSC::EmpadDataModel::__cordl_internal_get_IsSpawner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsSpawner;
}
constexpr void VROSC::EmpadDataModel::__cordl_internal_set_IsSpawner(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsSpawner = value;
}
constexpr float_t& VROSC::EmpadDataModel::__cordl_internal_get_Volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Volume;
}
constexpr float_t const& VROSC::EmpadDataModel::__cordl_internal_get_Volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Volume;
}
constexpr void VROSC::EmpadDataModel::__cordl_internal_set_Volume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Volume = value;
}
constexpr int32_t& VROSC::EmpadDataModel::__cordl_internal_get_Pitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pitch;
}
constexpr int32_t const& VROSC::EmpadDataModel::__cordl_internal_get_Pitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pitch;
}
constexpr void VROSC::EmpadDataModel::__cordl_internal_set_Pitch(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Pitch = value;
}
constexpr float_t& VROSC::EmpadDataModel::__cordl_internal_get_Size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Size;
}
constexpr float_t const& VROSC::EmpadDataModel::__cordl_internal_get_Size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Size;
}
constexpr void VROSC::EmpadDataModel::__cordl_internal_set_Size(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Size = value;
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& VROSC::EmpadDataModel::__cordl_internal_get_Position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Position;
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& VROSC::EmpadDataModel::__cordl_internal_get_Position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Position;
}
constexpr void VROSC::EmpadDataModel::__cordl_internal_set_Position(::ArrayW<float_t,::Array<float_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Position)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& VROSC::EmpadDataModel::__cordl_internal_get_Rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Rotation;
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& VROSC::EmpadDataModel::__cordl_internal_get_Rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Rotation;
}
constexpr void VROSC::EmpadDataModel::__cordl_internal_set_Rotation(::ArrayW<float_t,::Array<float_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Rotation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::TransformDataModel*& VROSC::EmpadDataModel::__cordl_internal_get_TransformData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformData;
}
constexpr ::VROSC::TransformDataModel* const& VROSC::EmpadDataModel::__cordl_internal_get_TransformData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformData;
}
constexpr void VROSC::EmpadDataModel::__cordl_internal_set_TransformData(::VROSC::TransformDataModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TransformData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& VROSC::EmpadDataModel::__cordl_internal_get_SpatialAnchorsUUIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpatialAnchorsUUIDs;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& VROSC::EmpadDataModel::__cordl_internal_get_SpatialAnchorsUUIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpatialAnchorsUUIDs;
}
constexpr void VROSC::EmpadDataModel::__cordl_internal_set_SpatialAnchorsUUIDs(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SpatialAnchorsUUIDs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::EmpadDataModel::Upgrade(int32_t  savedVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmpadDataModel*>::get(),
                        "Upgrade",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, savedVersion);
}
inline void VROSC::EmpadDataModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmpadDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::EmpadDataModel* VROSC::EmpadDataModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::EmpadDataModel*>());
}
// Ctor Parameters []
constexpr ::VROSC::EmpadDataModel::EmpadDataModel()   {
}
