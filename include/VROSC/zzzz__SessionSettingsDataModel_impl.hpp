#pragma once
// IWYU pragma private; include "VROSC/SessionSettingsDataModel.hpp"
#include "VROSC/zzzz__BaseDataModel_impl.hpp"
#include "VROSC/zzzz__Note_impl.hpp"
#include "VROSC/zzzz__SessionSettingsDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "VROSC/zzzz__EnvironmentSettingsData_def.hpp"
#include "VROSC/zzzz__ScalePreset_def.hpp"
//  Writing Method size for method: ::VROSC::SessionSettingsDataModel.get_Key
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::SessionSettingsDataModel::*)()>(&::VROSC::SessionSettingsDataModel::get_Key)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18694dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionSettingsDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionSettingsDataModel*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionSettingsDataModel.get_Version
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::SessionSettingsDataModel::*)()>(&::VROSC::SessionSettingsDataModel::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x186951c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionSettingsDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionSettingsDataModel*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionSettingsDataModel._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionSettingsDataModel::*)()>(&::VROSC::SessionSettingsDataModel::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1866b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionSettingsDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& VROSC::SessionSettingsDataModel::__cordl_internal_get_UseExternalSynthesizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseExternalSynthesizer;
}
constexpr bool const& VROSC::SessionSettingsDataModel::__cordl_internal_get_UseExternalSynthesizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseExternalSynthesizer;
}
constexpr void VROSC::SessionSettingsDataModel::__cordl_internal_set_UseExternalSynthesizer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseExternalSynthesizer = value;
}
constexpr bool& VROSC::SessionSettingsDataModel::__cordl_internal_get_AutoconnectExternalSynthesizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoconnectExternalSynthesizer;
}
constexpr bool const& VROSC::SessionSettingsDataModel::__cordl_internal_get_AutoconnectExternalSynthesizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoconnectExternalSynthesizer;
}
constexpr void VROSC::SessionSettingsDataModel::__cordl_internal_set_AutoconnectExternalSynthesizer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoconnectExternalSynthesizer = value;
}
constexpr ::StringW& VROSC::SessionSettingsDataModel::__cordl_internal_get_ExternalSynthesizerClientName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalSynthesizerClientName;
}
constexpr ::StringW const& VROSC::SessionSettingsDataModel::__cordl_internal_get_ExternalSynthesizerClientName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalSynthesizerClientName;
}
constexpr void VROSC::SessionSettingsDataModel::__cordl_internal_set_ExternalSynthesizerClientName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ExternalSynthesizerClientName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::SessionSettingsDataModel::__cordl_internal_get_ExternalSynthesizerManualIpAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalSynthesizerManualIpAddress;
}
constexpr ::StringW const& VROSC::SessionSettingsDataModel::__cordl_internal_get_ExternalSynthesizerManualIpAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalSynthesizerManualIpAddress;
}
constexpr void VROSC::SessionSettingsDataModel::__cordl_internal_set_ExternalSynthesizerManualIpAddress(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ExternalSynthesizerManualIpAddress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::SessionSettingsDataModel::__cordl_internal_get_SyncIsInternal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SyncIsInternal;
}
constexpr bool const& VROSC::SessionSettingsDataModel::__cordl_internal_get_SyncIsInternal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SyncIsInternal;
}
constexpr void VROSC::SessionSettingsDataModel::__cordl_internal_set_SyncIsInternal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SyncIsInternal = value;
}
constexpr int32_t& VROSC::SessionSettingsDataModel::__cordl_internal_get_InternalBeatLengthInSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InternalBeatLengthInSamples;
}
constexpr int32_t const& VROSC::SessionSettingsDataModel::__cordl_internal_get_InternalBeatLengthInSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InternalBeatLengthInSamples;
}
constexpr void VROSC::SessionSettingsDataModel::__cordl_internal_set_InternalBeatLengthInSamples(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InternalBeatLengthInSamples = value;
}
constexpr int32_t& VROSC::SessionSettingsDataModel::__cordl_internal_get_BeatsPerBar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BeatsPerBar;
}
constexpr int32_t const& VROSC::SessionSettingsDataModel::__cordl_internal_get_BeatsPerBar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BeatsPerBar;
}
constexpr void VROSC::SessionSettingsDataModel::__cordl_internal_set_BeatsPerBar(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BeatsPerBar = value;
}
constexpr int32_t& VROSC::SessionSettingsDataModel::__cordl_internal_get_SelectedScalePresetIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedScalePresetIndex;
}
constexpr int32_t const& VROSC::SessionSettingsDataModel::__cordl_internal_get_SelectedScalePresetIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedScalePresetIndex;
}
constexpr void VROSC::SessionSettingsDataModel::__cordl_internal_set_SelectedScalePresetIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SelectedScalePresetIndex = value;
}
constexpr ::VROSC::Note& VROSC::SessionSettingsDataModel::__cordl_internal_get_SelectedStartNote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedStartNote;
}
constexpr ::VROSC::Note const& VROSC::SessionSettingsDataModel::__cordl_internal_get_SelectedStartNote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedStartNote;
}
constexpr void VROSC::SessionSettingsDataModel::__cordl_internal_set_SelectedStartNote(::VROSC::Note  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SelectedStartNote = value;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::ScalePreset*>*& VROSC::SessionSettingsDataModel::__cordl_internal_get_ScalePresets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScalePresets;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::ScalePreset*>* const& VROSC::SessionSettingsDataModel::__cordl_internal_get_ScalePresets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScalePresets;
}
constexpr void VROSC::SessionSettingsDataModel::__cordl_internal_set_ScalePresets(::System::Collections::Generic::List_1<::VROSC::ScalePreset*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ScalePresets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::SessionSettingsDataModel::__cordl_internal_get_SelectedEnvironment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedEnvironment;
}
constexpr ::StringW const& VROSC::SessionSettingsDataModel::__cordl_internal_get_SelectedEnvironment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedEnvironment;
}
constexpr void VROSC::SessionSettingsDataModel::__cordl_internal_set_SelectedEnvironment(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SelectedEnvironment)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::EnvironmentSettingsData*>*& VROSC::SessionSettingsDataModel::__cordl_internal_get_EnvironmentSettingsData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnvironmentSettingsData;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::EnvironmentSettingsData*>* const& VROSC::SessionSettingsDataModel::__cordl_internal_get_EnvironmentSettingsData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnvironmentSettingsData;
}
constexpr void VROSC::SessionSettingsDataModel::__cordl_internal_set_EnvironmentSettingsData(::System::Collections::Generic::List_1<::VROSC::EnvironmentSettingsData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___EnvironmentSettingsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW VROSC::SessionSettingsDataModel::get_Key()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionSettingsDataModel*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t VROSC::SessionSettingsDataModel::get_Version()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionSettingsDataModel*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::SessionSettingsDataModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionSettingsDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SessionSettingsDataModel* VROSC::SessionSettingsDataModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SessionSettingsDataModel*>());
}
// Ctor Parameters []
constexpr ::VROSC::SessionSettingsDataModel::SessionSettingsDataModel()   {
}
