#pragma once
// IWYU pragma private; include "VROSC/SessionSettingsDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__BaseDataModel_def.hpp"
#include "VROSC/zzzz__Note_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SessionSettingsDataModel)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class EnvironmentSettingsData;
}
namespace VROSC {
class ScalePreset;
}
// Forward declare root types
namespace VROSC {
class SessionSettingsDataModel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SessionSettingsDataModel);
// Dependencies VROSC.BaseDataModel, VROSC.Note
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionSettingsDataModel
class CORDL_TYPE SessionSettingsDataModel : public ::VROSC::BaseDataModel {
public:
// Declarations
/// @brief Field AutoconnectExternalSynthesizer, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoconnectExternalSynthesizer, put=__cordl_internal_set_AutoconnectExternalSynthesizer)) bool  AutoconnectExternalSynthesizer;

/// @brief Field BeatsPerBar, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_BeatsPerBar, put=__cordl_internal_set_BeatsPerBar)) int32_t  BeatsPerBar;

/// @brief Field EnvironmentSettingsData, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_EnvironmentSettingsData, put=__cordl_internal_set_EnvironmentSettingsData)) ::System::Collections::Generic::List_1<::VROSC::EnvironmentSettingsData*>*  EnvironmentSettingsData;

/// @brief Field ExternalSynthesizerClientName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ExternalSynthesizerClientName, put=__cordl_internal_set_ExternalSynthesizerClientName)) ::StringW  ExternalSynthesizerClientName;

/// @brief Field ExternalSynthesizerManualIpAddress, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ExternalSynthesizerManualIpAddress, put=__cordl_internal_set_ExternalSynthesizerManualIpAddress)) ::StringW  ExternalSynthesizerManualIpAddress;

/// @brief Field InternalBeatLengthInSamples, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_InternalBeatLengthInSamples, put=__cordl_internal_set_InternalBeatLengthInSamples)) int32_t  InternalBeatLengthInSamples;

 __declspec(property(get=get_Key)) ::StringW  Key;

/// @brief Field ScalePresets, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScalePresets, put=__cordl_internal_set_ScalePresets)) ::System::Collections::Generic::List_1<::VROSC::ScalePreset*>*  ScalePresets;

/// @brief Field SelectedEnvironment, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_SelectedEnvironment, put=__cordl_internal_set_SelectedEnvironment)) ::StringW  SelectedEnvironment;

/// @brief Field SelectedScalePresetIndex, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_SelectedScalePresetIndex, put=__cordl_internal_set_SelectedScalePresetIndex)) int32_t  SelectedScalePresetIndex;

/// @brief Field SelectedStartNote, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_SelectedStartNote, put=__cordl_internal_set_SelectedStartNote)) ::VROSC::Note  SelectedStartNote;

/// @brief Field SyncIsInternal, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_SyncIsInternal, put=__cordl_internal_set_SyncIsInternal)) bool  SyncIsInternal;

/// @brief Field UseExternalSynthesizer, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseExternalSynthesizer, put=__cordl_internal_set_UseExternalSynthesizer)) bool  UseExternalSynthesizer;

 __declspec(property(get=get_Version)) int32_t  Version;

static inline ::VROSC::SessionSettingsDataModel* New_ctor() ;

constexpr bool const& __cordl_internal_get_AutoconnectExternalSynthesizer() const;

constexpr bool& __cordl_internal_get_AutoconnectExternalSynthesizer() ;

constexpr int32_t const& __cordl_internal_get_BeatsPerBar() const;

constexpr int32_t& __cordl_internal_get_BeatsPerBar() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::EnvironmentSettingsData*>* const& __cordl_internal_get_EnvironmentSettingsData() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::EnvironmentSettingsData*>*& __cordl_internal_get_EnvironmentSettingsData() ;

constexpr ::StringW const& __cordl_internal_get_ExternalSynthesizerClientName() const;

constexpr ::StringW& __cordl_internal_get_ExternalSynthesizerClientName() ;

constexpr ::StringW const& __cordl_internal_get_ExternalSynthesizerManualIpAddress() const;

constexpr ::StringW& __cordl_internal_get_ExternalSynthesizerManualIpAddress() ;

constexpr int32_t const& __cordl_internal_get_InternalBeatLengthInSamples() const;

constexpr int32_t& __cordl_internal_get_InternalBeatLengthInSamples() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::ScalePreset*>* const& __cordl_internal_get_ScalePresets() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::ScalePreset*>*& __cordl_internal_get_ScalePresets() ;

constexpr ::StringW const& __cordl_internal_get_SelectedEnvironment() const;

constexpr ::StringW& __cordl_internal_get_SelectedEnvironment() ;

constexpr int32_t const& __cordl_internal_get_SelectedScalePresetIndex() const;

constexpr int32_t& __cordl_internal_get_SelectedScalePresetIndex() ;

constexpr ::VROSC::Note const& __cordl_internal_get_SelectedStartNote() const;

constexpr ::VROSC::Note& __cordl_internal_get_SelectedStartNote() ;

constexpr bool const& __cordl_internal_get_SyncIsInternal() const;

constexpr bool& __cordl_internal_get_SyncIsInternal() ;

constexpr bool const& __cordl_internal_get_UseExternalSynthesizer() const;

constexpr bool& __cordl_internal_get_UseExternalSynthesizer() ;

constexpr void __cordl_internal_set_AutoconnectExternalSynthesizer(bool  value) ;

constexpr void __cordl_internal_set_BeatsPerBar(int32_t  value) ;

constexpr void __cordl_internal_set_EnvironmentSettingsData(::System::Collections::Generic::List_1<::VROSC::EnvironmentSettingsData*>*  value) ;

constexpr void __cordl_internal_set_ExternalSynthesizerClientName(::StringW  value) ;

constexpr void __cordl_internal_set_ExternalSynthesizerManualIpAddress(::StringW  value) ;

constexpr void __cordl_internal_set_InternalBeatLengthInSamples(int32_t  value) ;

constexpr void __cordl_internal_set_ScalePresets(::System::Collections::Generic::List_1<::VROSC::ScalePreset*>*  value) ;

constexpr void __cordl_internal_set_SelectedEnvironment(::StringW  value) ;

constexpr void __cordl_internal_set_SelectedScalePresetIndex(int32_t  value) ;

constexpr void __cordl_internal_set_SelectedStartNote(::VROSC::Note  value) ;

constexpr void __cordl_internal_set_SyncIsInternal(bool  value) ;

constexpr void __cordl_internal_set_UseExternalSynthesizer(bool  value) ;

/// @brief Method .ctor, addr 0x1866b70, size 0x128, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Key, addr 0x18694dc, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Key() ;

/// @brief Method get_Version, addr 0x186951c, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Version() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionSettingsDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionSettingsDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionSettingsDataModel(SessionSettingsDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionSettingsDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionSettingsDataModel(SessionSettingsDataModel const& ) = delete;

/// @brief Field DefaultExternalSynthesizerClientName offset 0xffffffff size 0x8
static constexpr ::ConstString  DefaultExternalSynthesizerClientName{u"Virtuoso"};

/// @brief Field DefaultExternalSynthesizerManualIpAddress offset 0xffffffff size 0x8
static constexpr ::ConstString  DefaultExternalSynthesizerManualIpAddress{u"127.0.0.1"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{510};

/// @brief Field UseExternalSynthesizer, offset: 0x18, size: 0x1, def value: None
 bool  ___UseExternalSynthesizer;

/// @brief Field AutoconnectExternalSynthesizer, offset: 0x19, size: 0x1, def value: None
 bool  ___AutoconnectExternalSynthesizer;

/// @brief Field ExternalSynthesizerClientName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___ExternalSynthesizerClientName;

/// @brief Field ExternalSynthesizerManualIpAddress, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___ExternalSynthesizerManualIpAddress;

/// @brief Field SyncIsInternal, offset: 0x30, size: 0x1, def value: None
 bool  ___SyncIsInternal;

/// @brief Field InternalBeatLengthInSamples, offset: 0x34, size: 0x4, def value: None
 int32_t  ___InternalBeatLengthInSamples;

/// @brief Field BeatsPerBar, offset: 0x38, size: 0x4, def value: None
 int32_t  ___BeatsPerBar;

/// @brief Field SelectedScalePresetIndex, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___SelectedScalePresetIndex;

/// @brief Field SelectedStartNote, offset: 0x40, size: 0x4, def value: None
 ::VROSC::Note  ___SelectedStartNote;

/// @brief Field ScalePresets, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::ScalePreset*>*  ___ScalePresets;

/// @brief Field SelectedEnvironment, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___SelectedEnvironment;

/// @brief Field EnvironmentSettingsData, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::EnvironmentSettingsData*>*  ___EnvironmentSettingsData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionSettingsDataModel, ___UseExternalSynthesizer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionSettingsDataModel, ___AutoconnectExternalSynthesizer) == 0x19, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionSettingsDataModel, ___ExternalSynthesizerClientName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionSettingsDataModel, ___ExternalSynthesizerManualIpAddress) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionSettingsDataModel, ___SyncIsInternal) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionSettingsDataModel, ___InternalBeatLengthInSamples) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionSettingsDataModel, ___BeatsPerBar) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionSettingsDataModel, ___SelectedScalePresetIndex) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionSettingsDataModel, ___SelectedStartNote) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionSettingsDataModel, ___ScalePresets) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionSettingsDataModel, ___SelectedEnvironment) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionSettingsDataModel, ___EnvironmentSettingsData) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionSettingsDataModel, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SessionSettingsDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionSettingsDataModel*, "VROSC", "SessionSettingsDataModel");
