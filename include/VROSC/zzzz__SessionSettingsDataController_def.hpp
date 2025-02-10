#pragma once
// IWYU pragma private; include "VROSC/SessionSettingsDataController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__BaseDataController_def.hpp"
#include "VROSC/zzzz__Scale_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionSettingsDataController)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
struct Note;
}
namespace VROSC {
class ScalePreset;
}
namespace VROSC {
class ScalePresets;
}
namespace VROSC {
struct Scale;
}
namespace VROSC {
class SessionSettingsDataController___c__DisplayClass52_0;
}
namespace VROSC {
class SessionSettingsDataController___c__DisplayClass53_0;
}
namespace VROSC {
class SessionSettingsDataModel;
}
namespace VROSC {
class SettingsDataDefaults;
}
// Forward declare root types
namespace VROSC {
class SessionSettingsDataController;
}
namespace VROSC {
class SessionSettingsDataController___c__DisplayClass52_0;
}
namespace VROSC {
class SessionSettingsDataController___c__DisplayClass53_0;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SessionSettingsDataController);
MARK_REF_PTR_T(::VROSC::SessionSettingsDataController___c__DisplayClass52_0);
MARK_REF_PTR_T(::VROSC::SessionSettingsDataController___c__DisplayClass53_0);
// Dependencies System.Object, VROSC.Scale
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionSettingsDataController/<>c__DisplayClass52_0
class CORDL_TYPE SessionSettingsDataController___c__DisplayClass52_0 : public ::System::Object {
public:
// Declarations
/// @brief Field scale, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) ::VROSC::Scale  scale;

static inline ::VROSC::SessionSettingsDataController___c__DisplayClass52_0* New_ctor() ;

/// @brief Method <GetSelectedScaleNoteAt>b__0, addr 0x18694bc, size 0x10, virtual false, abstract: false, final false
inline bool _GetSelectedScaleNoteAt_b__0(::VROSC::Scale  value) ;

constexpr ::VROSC::Scale const& __cordl_internal_get_scale() const;

constexpr ::VROSC::Scale& __cordl_internal_get_scale() ;

constexpr void __cordl_internal_set_scale(::VROSC::Scale  value) ;

/// @brief Method .ctor, addr 0x1868ea4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionSettingsDataController___c__DisplayClass52_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionSettingsDataController___c__DisplayClass52_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionSettingsDataController___c__DisplayClass52_0(SessionSettingsDataController___c__DisplayClass52_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionSettingsDataController___c__DisplayClass52_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionSettingsDataController___c__DisplayClass52_0(SessionSettingsDataController___c__DisplayClass52_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{507};

/// @brief Field scale, offset: 0x10, size: 0x4, def value: None
 ::VROSC::Scale  ___scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionSettingsDataController___c__DisplayClass52_0, ___scale) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionSettingsDataController___c__DisplayClass52_0, 0x18>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object, VROSC.Scale
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionSettingsDataController/<>c__DisplayClass53_0
class CORDL_TYPE SessionSettingsDataController___c__DisplayClass53_0 : public ::System::Object {
public:
// Declarations
/// @brief Field scale, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) ::VROSC::Scale  scale;

static inline ::VROSC::SessionSettingsDataController___c__DisplayClass53_0* New_ctor() ;

/// @brief Method <FilterSelectedScale>b__0, addr 0x18694cc, size 0x10, virtual false, abstract: false, final false
inline bool _FilterSelectedScale_b__0(::VROSC::Scale  value) ;

constexpr ::VROSC::Scale const& __cordl_internal_get_scale() const;

constexpr ::VROSC::Scale& __cordl_internal_get_scale() ;

constexpr void __cordl_internal_set_scale(::VROSC::Scale  value) ;

/// @brief Method .ctor, addr 0x18690f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionSettingsDataController___c__DisplayClass53_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionSettingsDataController___c__DisplayClass53_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionSettingsDataController___c__DisplayClass53_0(SessionSettingsDataController___c__DisplayClass53_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionSettingsDataController___c__DisplayClass53_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionSettingsDataController___c__DisplayClass53_0(SessionSettingsDataController___c__DisplayClass53_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{508};

/// @brief Field scale, offset: 0x10, size: 0x4, def value: None
 ::VROSC::Scale  ___scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionSettingsDataController___c__DisplayClass53_0, ___scale) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionSettingsDataController___c__DisplayClass53_0, 0x18>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.BaseDataController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionSettingsDataController
class CORDL_TYPE SessionSettingsDataController : public ::VROSC::BaseDataController {
public:
// Declarations
using __c__DisplayClass52_0 = ::VROSC::SessionSettingsDataController___c__DisplayClass52_0;

using __c__DisplayClass53_0 = ::VROSC::SessionSettingsDataController___c__DisplayClass53_0;

 __declspec(property(get=get_AutoconnectExternalSynthesizer, put=set_AutoconnectExternalSynthesizer)) bool  AutoconnectExternalSynthesizer;

 __declspec(property(get=get_BeatLength, put=set_BeatLength)) int32_t  BeatLength;

 __declspec(property(get=get_BeatsPerBar, put=set_BeatsPerBar)) int32_t  BeatsPerBar;

 __declspec(property(get=get_DataModel)) ::VROSC::SessionSettingsDataModel*  DataModel;

 __declspec(property(get=get_ExternalSynthesizerClientName, put=set_ExternalSynthesizerClientName)) ::StringW  ExternalSynthesizerClientName;

 __declspec(property(get=get_ExternalSynthesizerManualIpAddress, put=set_ExternalSynthesizerManualIpAddress)) ::StringW  ExternalSynthesizerManualIpAddress;

/// @brief Field OnDataLoaded, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDataLoaded, put=__cordl_internal_set_OnDataLoaded)) ::System::Action_1<::VROSC::SessionSettingsDataController*>*  OnDataLoaded;

/// @brief Field OnDataSaved, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDataSaved, put=__cordl_internal_set_OnDataSaved)) ::System::Action_1<::VROSC::SessionSettingsDataController*>*  OnDataSaved;

 __declspec(property(get=get_SelectedEnvironment, put=set_SelectedEnvironment)) ::StringW  SelectedEnvironment;

 __declspec(property(get=get_SelectedScalePresetIndex, put=set_SelectedScalePresetIndex)) int32_t  SelectedScalePresetIndex;

 __declspec(property(get=get_SelectedStartNote, put=set_SelectedStartNote)) ::VROSC::Note  SelectedStartNote;

 __declspec(property(get=get_SyncIsManualBPM, put=set_SyncIsManualBPM)) bool  SyncIsManualBPM;

 __declspec(property(get=get_UseExternalSynthesizer, put=set_UseExternalSynthesizer)) bool  UseExternalSynthesizer;

/// @brief Field _settingsDefaults, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsDefaults, put=__cordl_internal_set__settingsDefaults)) ::UnityW<::VROSC::SettingsDataDefaults>  _settingsDefaults;

/// @brief Method ApplyDefaults, addr 0x1866c98, size 0x240, virtual false, abstract: false, final false
inline void ApplyDefaults(::VROSC::SettingsDataDefaults*  settingsDefaults) ;

/// @brief Method FilterSelectedScale, addr 0x1868eac, size 0x248, virtual false, abstract: false, final false
inline ::VROSC::Scale FilterSelectedScale(::ArrayW<bool,::Array<bool>*>  toggledNotes) ;

/// @brief Method GetEnvironmentAccentColor, addr 0x18682e0, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetEnvironmentAccentColor(::StringW  environmentId) ;

/// @brief Method GetEnvironmentActiveColor, addr 0x1867ea8, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetEnvironmentActiveColor(::StringW  environmentId) ;

/// @brief Method GetEnvironmentEffectsAmount, addr 0x18676e0, size 0x194, virtual false, abstract: false, final false
inline float_t GetEnvironmentEffectsAmount(::StringW  environmentId) ;

/// @brief Method GetEnvironmentInstrumentColor, addr 0x1868718, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetEnvironmentInstrumentColor(::StringW  environmentId) ;

/// @brief Method GetEnvironmentPrimaryColor, addr 0x1867a70, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetEnvironmentPrimaryColor(::StringW  environmentId) ;

/// @brief Method GetRandomScale, addr 0x1868bc0, size 0xa0, virtual false, abstract: false, final false
inline ::VROSC::Scale GetRandomScale() ;

/// @brief Method GetSelectedScaleNoteAt, addr 0x1868c60, size 0x244, virtual false, abstract: false, final false
inline ::VROSC::Note GetSelectedScaleNoteAt(int32_t  index) ;

/// @brief Method GetSelectedScalePreset, addr 0x1868b50, size 0x70, virtual false, abstract: false, final false
inline ::VROSC::ScalePreset* GetSelectedScalePreset() ;

/// @brief Method LoadData, addr 0x18672e0, size 0xe4, virtual true, abstract: false, final false
inline void LoadData(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

static inline ::VROSC::SessionSettingsDataController* New_ctor() ;

/// @brief Method RandomizeScale, addr 0x18690fc, size 0xa0, virtual false, abstract: false, final false
inline void RandomizeScale() ;

/// @brief Method SaveData, addr 0x18673c4, size 0x28, virtual true, abstract: false, final false
inline void SaveData(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SetEnvironmentAccentColor, addr 0x1868504, size 0x214, virtual false, abstract: false, final false
inline void SetEnvironmentAccentColor(::StringW  environmentId, ::UnityEngine::Color  color) ;

/// @brief Method SetEnvironmentActiveColor, addr 0x18680cc, size 0x214, virtual false, abstract: false, final false
inline void SetEnvironmentActiveColor(::StringW  environmentId, ::UnityEngine::Color  color) ;

/// @brief Method SetEnvironmentEffectsAmount, addr 0x1867874, size 0x1fc, virtual false, abstract: false, final false
inline void SetEnvironmentEffectsAmount(::StringW  environmentId, float_t  amount) ;

/// @brief Method SetEnvironmentInstrumentColor, addr 0x186893c, size 0x214, virtual false, abstract: false, final false
inline void SetEnvironmentInstrumentColor(::StringW  environmentId, ::UnityEngine::Color  color) ;

/// @brief Method SetEnvironmentPrimaryColor, addr 0x1867c94, size 0x214, virtual false, abstract: false, final false
inline void SetEnvironmentPrimaryColor(::StringW  environmentId, ::UnityEngine::Color  color) ;

/// @brief Method SetScalePresets, addr 0x1866ed8, size 0x3d0, virtual false, abstract: false, final false
inline void SetScalePresets(::VROSC::ScalePresets*  scalePresets) ;

/// @brief Method <LoadData>b__7_0, addr 0x186919c, size 0x320, virtual false, abstract: false, final false
inline void _LoadData_b__7_0(::StringW  data) ;

constexpr ::System::Action_1<::VROSC::SessionSettingsDataController*>* const& __cordl_internal_get_OnDataLoaded() const;

constexpr ::System::Action_1<::VROSC::SessionSettingsDataController*>*& __cordl_internal_get_OnDataLoaded() ;

constexpr ::System::Action_1<::VROSC::SessionSettingsDataController*>* const& __cordl_internal_get_OnDataSaved() const;

constexpr ::System::Action_1<::VROSC::SessionSettingsDataController*>*& __cordl_internal_get_OnDataSaved() ;

constexpr ::UnityW<::VROSC::SettingsDataDefaults> const& __cordl_internal_get__settingsDefaults() const;

constexpr ::UnityW<::VROSC::SettingsDataDefaults>& __cordl_internal_get__settingsDefaults() ;

constexpr void __cordl_internal_set_OnDataLoaded(::System::Action_1<::VROSC::SessionSettingsDataController*>*  value) ;

constexpr void __cordl_internal_set_OnDataSaved(::System::Action_1<::VROSC::SessionSettingsDataController*>*  value) ;

constexpr void __cordl_internal_set__settingsDefaults(::UnityW<::VROSC::SettingsDataDefaults>  value) ;

/// @brief Method .ctor, addr 0x1866b10, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AutoconnectExternalSynthesizer, addr 0x1867408, size 0x1c, virtual false, abstract: false, final false
inline bool get_AutoconnectExternalSynthesizer() ;

/// @brief Method get_BeatLength, addr 0x1867550, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_BeatLength() ;

/// @brief Method get_BeatsPerBar, addr 0x18675a0, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_BeatsPerBar() ;

/// @brief Method get_DataModel, addr 0x1866a98, size 0x78, virtual false, abstract: false, final false
inline ::VROSC::SessionSettingsDataModel* get_DataModel() ;

/// @brief Method get_ExternalSynthesizerClientName, addr 0x186745c, size 0x1c, virtual false, abstract: false, final false
inline ::StringW get_ExternalSynthesizerClientName() ;

/// @brief Method get_ExternalSynthesizerManualIpAddress, addr 0x18674ac, size 0x1c, virtual false, abstract: false, final false
inline ::StringW get_ExternalSynthesizerManualIpAddress() ;

/// @brief Method get_SelectedEnvironment, addr 0x1867690, size 0x1c, virtual false, abstract: false, final false
inline ::StringW get_SelectedEnvironment() ;

/// @brief Method get_SelectedScalePresetIndex, addr 0x18675f0, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_SelectedScalePresetIndex() ;

/// @brief Method get_SelectedStartNote, addr 0x1867640, size 0x1c, virtual false, abstract: false, final false
inline ::VROSC::Note get_SelectedStartNote() ;

/// @brief Method get_SyncIsManualBPM, addr 0x18674fc, size 0x1c, virtual false, abstract: false, final false
inline bool get_SyncIsManualBPM() ;

/// @brief Method get_UseExternalSynthesizer, addr 0x18673ec, size 0x1c, virtual false, abstract: false, final false
inline bool get_UseExternalSynthesizer() ;

/// @brief Method set_AutoconnectExternalSynthesizer, addr 0x1867424, size 0x38, virtual false, abstract: false, final false
inline void set_AutoconnectExternalSynthesizer(bool  value) ;

/// @brief Method set_BeatLength, addr 0x186756c, size 0x34, virtual false, abstract: false, final false
inline void set_BeatLength(int32_t  value) ;

/// @brief Method set_BeatsPerBar, addr 0x18675bc, size 0x34, virtual false, abstract: false, final false
inline void set_BeatsPerBar(int32_t  value) ;

/// @brief Method set_ExternalSynthesizerClientName, addr 0x1867478, size 0x34, virtual false, abstract: false, final false
inline void set_ExternalSynthesizerClientName(::StringW  value) ;

/// @brief Method set_ExternalSynthesizerManualIpAddress, addr 0x18674c8, size 0x34, virtual false, abstract: false, final false
inline void set_ExternalSynthesizerManualIpAddress(::StringW  value) ;

/// @brief Method set_SelectedEnvironment, addr 0x18676ac, size 0x34, virtual false, abstract: false, final false
inline void set_SelectedEnvironment(::StringW  value) ;

/// @brief Method set_SelectedScalePresetIndex, addr 0x186760c, size 0x34, virtual false, abstract: false, final false
inline void set_SelectedScalePresetIndex(int32_t  value) ;

/// @brief Method set_SelectedStartNote, addr 0x186765c, size 0x34, virtual false, abstract: false, final false
inline void set_SelectedStartNote(::VROSC::Note  value) ;

/// @brief Method set_SyncIsManualBPM, addr 0x1867518, size 0x38, virtual false, abstract: false, final false
inline void set_SyncIsManualBPM(bool  value) ;

/// @brief Method set_UseExternalSynthesizer, addr 0x18672a8, size 0x38, virtual false, abstract: false, final false
inline void set_UseExternalSynthesizer(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionSettingsDataController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionSettingsDataController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionSettingsDataController(SessionSettingsDataController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionSettingsDataController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionSettingsDataController(SessionSettingsDataController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{509};

/// @brief Field _settingsDefaults, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::SettingsDataDefaults>  ____settingsDefaults;

/// @brief Field OnDataLoaded, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::VROSC::SessionSettingsDataController*>*  ___OnDataLoaded;

/// @brief Field OnDataSaved, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::VROSC::SessionSettingsDataController*>*  ___OnDataSaved;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionSettingsDataController, ____settingsDefaults) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionSettingsDataController, ___OnDataLoaded) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionSettingsDataController, ___OnDataSaved) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionSettingsDataController, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SessionSettingsDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionSettingsDataController*, "VROSC", "SessionSettingsDataController");
NEED_NO_BOX(::VROSC::SessionSettingsDataController___c__DisplayClass52_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionSettingsDataController___c__DisplayClass52_0*, "VROSC", "SessionSettingsDataController/<>c__DisplayClass52_0");
NEED_NO_BOX(::VROSC::SessionSettingsDataController___c__DisplayClass53_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionSettingsDataController___c__DisplayClass53_0*, "VROSC", "SessionSettingsDataController/<>c__DisplayClass53_0");
