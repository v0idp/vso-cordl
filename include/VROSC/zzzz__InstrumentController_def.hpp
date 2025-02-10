#pragma once
// IWYU pragma private; include "VROSC/InstrumentController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__IAnchoredObject_def.hpp"
#include "VROSC/zzzz__WidgetController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InstrumentController)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
struct HandType;
}
namespace VROSC {
class InfoPanel;
}
namespace VROSC {
class InstrumentControlPanelUI;
}
namespace VROSC {
class InstrumentDataController;
}
namespace VROSC {
class InstrumentFrameController;
}
namespace VROSC {
class InstrumentSettings;
}
namespace VROSC {
class InstrumentVolumeController;
}
namespace VROSC {
class PatchSettings;
}
namespace VROSC {
class TransformMover;
}
namespace VROSC {
class UserDataControllers;
}
namespace VROSC {
struct WidgetSettings_Identifier;
}
// Forward declare root types
namespace VROSC {
class InstrumentController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InstrumentController);
// Dependencies UnityEngine.Vector3, VROSC.IAnchoredObject, VROSC.WidgetController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InstrumentController
class CORDL_TYPE InstrumentController : public ::VROSC::WidgetController {
public:
// Declarations
 __declspec(property(get=get_CurrentChannel)) int32_t  CurrentChannel;

 __declspec(property(get=get_CurrentPatchSettings)) ::VROSC::PatchSettings*  CurrentPatchSettings;

 __declspec(property(get=get_InstrumentSettings)) ::UnityW<::VROSC::InstrumentSettings>  InstrumentSettings;

/// @brief Field OnPlayNote, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayNote, put=__cordl_internal_set_OnPlayNote)) ::System::Action_2<::VROSC::HandType,::System::Object*>*  OnPlayNote;

/// @brief Field OnStopNote, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStopNote, put=__cordl_internal_set_OnStopNote)) ::System::Action_2<::VROSC::HandType,::System::Object*>*  OnStopNote;

/// @brief Field OnUseExternalChanged, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnUseExternalChanged, put=__cordl_internal_set_OnUseExternalChanged)) ::System::Action_1<bool>*  OnUseExternalChanged;

 __declspec(property(get=get_Quantize)) bool  Quantize;

 __declspec(property(get=get_QuantizeBeatDivision)) int32_t  QuantizeBeatDivision;

 __declspec(property(get=get_QuantizeTolerance)) float_t  QuantizeTolerance;

 __declspec(property(get=get_UsingExternal)) bool  UsingExternal;

 __declspec(property(get=get_VolumeController)) ::UnityW<::VROSC::InstrumentVolumeController>  VolumeController;

/// @brief Field _controlPanelUI, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__controlPanelUI, put=__cordl_internal_set__controlPanelUI)) ::UnityW<::VROSC::InstrumentControlPanelUI>  _controlPanelUI;

/// @brief Field _dataController, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataController, put=__cordl_internal_set__dataController)) ::VROSC::InstrumentDataController*  _dataController;

/// @brief Field _frameController, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__frameController, put=__cordl_internal_set__frameController)) ::UnityW<::VROSC::InstrumentFrameController>  _frameController;

/// @brief Field _infoPanel, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__infoPanel, put=__cordl_internal_set__infoPanel)) ::UnityW<::VROSC::InfoPanel>  _infoPanel;

/// @brief Field _spawnOriginalPosition, offset 0x98, size 0xc 
 __declspec(property(get=__cordl_internal_get__spawnOriginalPosition, put=__cordl_internal_set__spawnOriginalPosition)) ::UnityEngine::Vector3  _spawnOriginalPosition;

/// @brief Field _spawnPointSet, offset 0xa4, size 0x1 
 __declspec(property(get=__cordl_internal_get__spawnPointSet, put=__cordl_internal_set__spawnPointSet)) bool  _spawnPointSet;

/// @brief Field _spawnPosition, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__spawnPosition, put=__cordl_internal_set__spawnPosition)) ::UnityW<::UnityEngine::Transform>  _spawnPosition;

/// @brief Field _volumeController, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__volumeController, put=__cordl_internal_set__volumeController)) ::UnityW<::VROSC::InstrumentVolumeController>  _volumeController;

/// @brief Convert operator to "::VROSC::IAnchoredObject"
constexpr operator  ::VROSC::IAnchoredObject*() noexcept;

/// @brief Method AddSpatialAnchorToData, addr 0x170df4c, size 0x1c, virtual true, abstract: false, final true
inline void AddSpatialAnchorToData(::StringW  anchorUuid) ;

/// @brief Method GetTransformMover, addr 0x170df84, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::TransformMover> GetTransformMover() ;

static inline ::VROSC::InstrumentController* New_ctor() ;

/// @brief Method OnDestroy, addr 0x170d898, size 0x170, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PlayNote, addr 0x170e018, size 0x134, virtual true, abstract: false, final false
inline void PlayNote(int32_t  note, float_t  velocity, ::System::Object*  source, double_t  predictedDspTime, ::VROSC::HandType  handType, float_t  pitch, float_t  volume) ;

/// @brief Method RemoveSpatialAnchorFromData, addr 0x170df68, size 0x1c, virtual true, abstract: false, final true
inline void RemoveSpatialAnchorFromData(::StringW  anchorUuid) ;

/// @brief Method SetActivationPositions, addr 0x170d790, size 0x104, virtual true, abstract: false, final false
inline void SetActivationPositions(::UnityEngine::Vector3  pressPos, bool  active) ;

/// @brief Method SetInstrumentFrameActive, addr 0x170e5d0, size 0x58, virtual false, abstract: false, final false
inline void SetInstrumentFrameActive(bool  frameActive) ;

/// @brief Method SetParameter, addr 0x170e264, size 0xc8, virtual true, abstract: false, final false
inline void SetParameter(::VROSC::WidgetSettings_Identifier  instrumentId, float_t  parameterValue, int32_t  parameterId, ::VROSC::HandType  handType) ;

/// @brief Method SetQuantize, addr 0x170e560, size 0x28, virtual false, abstract: false, final false
inline void SetQuantize(bool  quantize) ;

/// @brief Method SetQuantizeBeatDivision, addr 0x170e5ac, size 0x24, virtual false, abstract: false, final false
inline void SetQuantizeBeatDivision(int32_t  division) ;

/// @brief Method SetQuantizeTolerance, addr 0x170e588, size 0x24, virtual false, abstract: false, final false
inline void SetQuantizeTolerance(float_t  tolerance) ;

/// @brief Method SetSound, addr 0x170e628, size 0xbc, virtual true, abstract: false, final false
inline void SetSound(int32_t  index) ;

/// @brief Method SetVolume, addr 0x170e32c, size 0x94, virtual true, abstract: false, final false
inline void SetVolume(float_t  volume) ;

/// @brief Method Setup, addr 0x170d5f8, size 0x198, virtual true, abstract: false, final false
inline void Setup() ;

/// @brief Method StopNote, addr 0x170e168, size 0xfc, virtual true, abstract: false, final false
inline void StopNote(int32_t  note, ::System::Object*  source, ::VROSC::HandType  handType) ;

/// @brief Method SynthesizerSourceChanged, addr 0x170e3c4, size 0x3c, virtual true, abstract: false, final false
inline void SynthesizerSourceChanged(bool  useExternal) ;

/// @brief Method Toggle, addr 0x170df8c, size 0x70, virtual true, abstract: false, final false
inline void Toggle() ;

/// @brief Method TransformChanged, addr 0x170e400, size 0x15c, virtual true, abstract: false, final false
inline void TransformChanged(::VROSC::TransformMover*  mover) ;

/// @brief Method UpdateOutput, addr 0x170e3c0, size 0x4, virtual true, abstract: false, final false
inline void UpdateOutput() ;

/// @brief Method UserDataLoaded, addr 0x170dbc0, size 0x388, virtual true, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  user) ;

/// @brief Method <UserDataLoaded>b__30_0, addr 0x170e748, size 0x158, virtual false, abstract: false, final false
inline void _UserDataLoaded_b__30_0(bool  success, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method <UserDataLoaded>b__30_1, addr 0x170e8a0, size 0xc8, virtual false, abstract: false, final false
inline void _UserDataLoaded_b__30_1(::VROSC::Error  error) ;

constexpr ::System::Action_2<::VROSC::HandType,::System::Object*>* const& __cordl_internal_get_OnPlayNote() const;

constexpr ::System::Action_2<::VROSC::HandType,::System::Object*>*& __cordl_internal_get_OnPlayNote() ;

constexpr ::System::Action_2<::VROSC::HandType,::System::Object*>* const& __cordl_internal_get_OnStopNote() const;

constexpr ::System::Action_2<::VROSC::HandType,::System::Object*>*& __cordl_internal_get_OnStopNote() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnUseExternalChanged() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnUseExternalChanged() ;

constexpr ::UnityW<::VROSC::InstrumentControlPanelUI> const& __cordl_internal_get__controlPanelUI() const;

constexpr ::UnityW<::VROSC::InstrumentControlPanelUI>& __cordl_internal_get__controlPanelUI() ;

constexpr ::VROSC::InstrumentDataController* const& __cordl_internal_get__dataController() const;

constexpr ::VROSC::InstrumentDataController*& __cordl_internal_get__dataController() ;

constexpr ::UnityW<::VROSC::InstrumentFrameController> const& __cordl_internal_get__frameController() const;

constexpr ::UnityW<::VROSC::InstrumentFrameController>& __cordl_internal_get__frameController() ;

constexpr ::UnityW<::VROSC::InfoPanel> const& __cordl_internal_get__infoPanel() const;

constexpr ::UnityW<::VROSC::InfoPanel>& __cordl_internal_get__infoPanel() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__spawnOriginalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__spawnOriginalPosition() ;

constexpr bool const& __cordl_internal_get__spawnPointSet() const;

constexpr bool& __cordl_internal_get__spawnPointSet() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__spawnPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__spawnPosition() ;

constexpr ::UnityW<::VROSC::InstrumentVolumeController> const& __cordl_internal_get__volumeController() const;

constexpr ::UnityW<::VROSC::InstrumentVolumeController>& __cordl_internal_get__volumeController() ;

constexpr void __cordl_internal_set_OnPlayNote(::System::Action_2<::VROSC::HandType,::System::Object*>*  value) ;

constexpr void __cordl_internal_set_OnStopNote(::System::Action_2<::VROSC::HandType,::System::Object*>*  value) ;

constexpr void __cordl_internal_set_OnUseExternalChanged(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set__controlPanelUI(::UnityW<::VROSC::InstrumentControlPanelUI>  value) ;

constexpr void __cordl_internal_set__dataController(::VROSC::InstrumentDataController*  value) ;

constexpr void __cordl_internal_set__frameController(::UnityW<::VROSC::InstrumentFrameController>  value) ;

constexpr void __cordl_internal_set__infoPanel(::UnityW<::VROSC::InfoPanel>  value) ;

constexpr void __cordl_internal_set__spawnOriginalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__spawnPointSet(bool  value) ;

constexpr void __cordl_internal_set__spawnPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__volumeController(::UnityW<::VROSC::InstrumentVolumeController>  value) ;

/// @brief Method .ctor, addr 0x170e6e4, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentChannel, addr 0x170d514, size 0x1c, virtual true, abstract: false, final false
inline int32_t get_CurrentChannel() ;

/// @brief Method get_CurrentPatchSettings, addr 0x170d50c, size 0x8, virtual true, abstract: false, final false
inline ::VROSC::PatchSettings* get_CurrentPatchSettings() ;

/// @brief Method get_InstrumentSettings, addr 0x170d48c, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::InstrumentSettings> get_InstrumentSettings() ;

/// @brief Method get_Quantize, addr 0x170d58c, size 0x24, virtual false, abstract: false, final false
inline bool get_Quantize() ;

/// @brief Method get_QuantizeBeatDivision, addr 0x170d5d4, size 0x24, virtual false, abstract: false, final false
inline int32_t get_QuantizeBeatDivision() ;

/// @brief Method get_QuantizeTolerance, addr 0x170d5b0, size 0x24, virtual false, abstract: false, final false
inline float_t get_QuantizeTolerance() ;

/// @brief Method get_UsingExternal, addr 0x170d530, size 0x5c, virtual false, abstract: false, final false
inline bool get_UsingExternal() ;

/// @brief Method get_VolumeController, addr 0x170d504, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::InstrumentVolumeController> get_VolumeController() ;

/// @brief Convert to "::VROSC::IAnchoredObject"
constexpr ::VROSC::IAnchoredObject* i___VROSC__IAnchoredObject() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstrumentController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstrumentController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstrumentController(InstrumentController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstrumentController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstrumentController(InstrumentController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{877};

/// @brief Field _controlPanelUI, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::VROSC::InstrumentControlPanelUI>  ____controlPanelUI;

/// @brief Field _infoPanel, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::InfoPanel>  ____infoPanel;

/// @brief Field _spawnPosition, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____spawnPosition;

/// @brief Field _frameController, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::VROSC::InstrumentFrameController>  ____frameController;

/// @brief Field _volumeController, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::VROSC::InstrumentVolumeController>  ____volumeController;

/// @brief Field _spawnOriginalPosition, offset: 0x98, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____spawnOriginalPosition;

/// @brief Field _spawnPointSet, offset: 0xa4, size: 0x1, def value: None
 bool  ____spawnPointSet;

/// @brief Field _dataController, offset: 0xa8, size: 0x8, def value: None
 ::VROSC::InstrumentDataController*  ____dataController;

/// @brief Field OnUseExternalChanged, offset: 0xb0, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnUseExternalChanged;

/// @brief Field OnPlayNote, offset: 0xb8, size: 0x8, def value: None
 ::System::Action_2<::VROSC::HandType,::System::Object*>*  ___OnPlayNote;

/// @brief Field OnStopNote, offset: 0xc0, size: 0x8, def value: None
 ::System::Action_2<::VROSC::HandType,::System::Object*>*  ___OnStopNote;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InstrumentController, ____controlPanelUI) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentController, ____infoPanel) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentController, ____spawnPosition) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentController, ____frameController) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentController, ____volumeController) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentController, ____spawnOriginalPosition) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentController, ____spawnPointSet) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentController, ____dataController) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentController, ___OnUseExternalChanged) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentController, ___OnPlayNote) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentController, ___OnStopNote) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InstrumentController, 0xc8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InstrumentController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentController*, "VROSC", "InstrumentController");
