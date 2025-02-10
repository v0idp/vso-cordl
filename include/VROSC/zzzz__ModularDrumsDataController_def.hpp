#pragma once
// IWYU pragma private; include "VROSC/ModularDrumsDataController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__InstrumentDataController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ModularDrumsDataController)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class EmpadDataModel;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class ModularDrumsDataController___c__DisplayClass33_0;
}
namespace VROSC {
class ModularDrumsDataModel;
}
namespace VROSC {
class TransformDataController;
}
namespace VROSC {
class WidgetSettings;
}
// Forward declare root types
namespace VROSC {
class ModularDrumsDataController;
}
namespace VROSC {
class ModularDrumsDataController___c__DisplayClass33_0;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ModularDrumsDataController);
MARK_REF_PTR_T(::VROSC::ModularDrumsDataController___c__DisplayClass33_0);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ModularDrumsDataController/<>c__DisplayClass33_0
class CORDL_TYPE ModularDrumsDataController___c__DisplayClass33_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::ModularDrumsDataController*  __4__this;

/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

static inline ::VROSC::ModularDrumsDataController___c__DisplayClass33_0* New_ctor() ;

/// @brief Method <LoadData>b__0, addr 0x1840a34, size 0x388, virtual false, abstract: false, final false
inline void _LoadData_b__0(::StringW  data) ;

constexpr ::VROSC::ModularDrumsDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::ModularDrumsDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set___4__this(::VROSC::ModularDrumsDataController*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x1840a2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModularDrumsDataController___c__DisplayClass33_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModularDrumsDataController___c__DisplayClass33_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ModularDrumsDataController___c__DisplayClass33_0(ModularDrumsDataController___c__DisplayClass33_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModularDrumsDataController___c__DisplayClass33_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModularDrumsDataController___c__DisplayClass33_0(ModularDrumsDataController___c__DisplayClass33_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{393};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::ModularDrumsDataController*  _____4__this;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ModularDrumsDataController___c__DisplayClass33_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ModularDrumsDataController___c__DisplayClass33_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ModularDrumsDataController___c__DisplayClass33_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.InstrumentDataController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ModularDrumsDataController
class CORDL_TYPE ModularDrumsDataController : public ::VROSC::InstrumentDataController {
public:
// Declarations
using __c__DisplayClass33_0 = ::VROSC::ModularDrumsDataController___c__DisplayClass33_0;

 __declspec(property(get=get_Compression, put=set_Compression)) float_t  Compression;

 __declspec(property(get=get_DataModel)) ::VROSC::ModularDrumsDataModel*  DataModel;

 __declspec(property(get=get_DryVolume, put=set_DryVolume)) float_t  DryVolume;

 __declspec(property(get=get_FrameIsActive, put=set_FrameIsActive)) bool  FrameIsActive;

 __declspec(property(get=get_HasBeenOpened, put=set_HasBeenOpened)) bool  HasBeenOpened;

/// @brief Field OnDataLoaded, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDataLoaded, put=setStaticF_OnDataLoaded)) ::System::Action_1<::VROSC::ModularDrumsDataController*>*  OnDataLoaded;

 __declspec(property(get=get_Quantize, put=set_Quantize)) bool  Quantize;

 __declspec(property(get=get_QuantizeBeatDivision, put=set_QuantizeBeatDivision)) int32_t  QuantizeBeatDivision;

 __declspec(property(get=get_QuantizeTolerance, put=set_QuantizeTolerance)) float_t  QuantizeTolerance;

 __declspec(property(get=get_ReverbAmount, put=set_ReverbAmount)) float_t  ReverbAmount;

 __declspec(property(get=get_ReverbLength, put=set_ReverbLength)) float_t  ReverbLength;

 __declspec(property(get=get_TransformData)) ::VROSC::TransformDataController*  TransformData;

 __declspec(property(get=get_Volume, put=set_Volume)) float_t  Volume;

/// @brief Field _nextInstanceId, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__nextInstanceId, put=__cordl_internal_set__nextInstanceId)) int32_t  _nextInstanceId;

/// @brief Field _transformData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformData, put=__cordl_internal_set__transformData)) ::VROSC::TransformDataController*  _transformData;

/// @brief Method AddDrumpadSpatialAnchor, addr 0x1840840, size 0x118, virtual false, abstract: false, final false
inline void AddDrumpadSpatialAnchor(int32_t  instanceId, ::StringW  uuid) ;

/// @brief Method ApplyDefaults, addr 0x183e874, size 0x118, virtual true, abstract: false, final false
inline void ApplyDefaults(::VROSC::WidgetSettings*  widgetDefaultSettings) ;

/// @brief Method CreateEmpad, addr 0x183ee64, size 0x19c, virtual false, abstract: false, final false
inline int32_t CreateEmpad(int32_t  groupId) ;

/// @brief Method CreateEmpad, addr 0x183f000, size 0x124, virtual false, abstract: false, final false
inline int32_t CreateEmpad(::VROSC::EmpadDataModel*  otherEmpad) ;

/// @brief Method GetDrumpadSpatialAnchors, addr 0x1840798, size 0xa8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* GetDrumpadSpatialAnchors(int32_t  instanceId) ;

/// @brief Method GetEmpadData, addr 0x183ec08, size 0x58, virtual false, abstract: false, final false
inline ::VROSC::EmpadDataModel* GetEmpadData(int32_t  instanceId) ;

/// @brief Method GetEmpadData, addr 0x183ec60, size 0x204, virtual false, abstract: false, final false
inline ::VROSC::EmpadDataModel* GetEmpadData(int32_t  instanceId, ::StringW  functionName) ;

/// @brief Method GetEmpadDisplayName, addr 0x183fc20, size 0x2fc, virtual false, abstract: false, final false
inline ::StringW GetEmpadDisplayName(int32_t  instanceId) ;

/// @brief Method GetEmpadGroupId, addr 0x183f66c, size 0x64, virtual false, abstract: false, final false
inline int32_t GetEmpadGroupId(int32_t  instanceId) ;

/// @brief Method GetEmpadNote, addr 0x183ff1c, size 0x64, virtual false, abstract: false, final false
inline int32_t GetEmpadNote(int32_t  instanceId) ;

/// @brief Method GetEmpadPitch, addr 0x1840058, size 0x64, virtual false, abstract: false, final false
inline int32_t GetEmpadPitch(int32_t  instanceId) ;

/// @brief Method GetEmpadPosition, addr 0x1840138, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetEmpadPosition(int32_t  instanceId) ;

/// @brief Method GetEmpadRotation, addr 0x18401e8, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetEmpadRotation(int32_t  instanceId) ;

/// @brief Method GetEmpadSampleId, addr 0x183f6d0, size 0x64, virtual false, abstract: false, final false
inline int32_t GetEmpadSampleId(int32_t  instanceId) ;

/// @brief Method GetEmpadSelectedSampleIndex, addr 0x183f734, size 0x214, virtual false, abstract: false, final false
inline int32_t GetEmpadSelectedSampleIndex(int32_t  instanceId) ;

/// @brief Method GetEmpadSize, addr 0x18400bc, size 0x7c, virtual false, abstract: false, final false
inline float_t GetEmpadSize(int32_t  instanceId) ;

/// @brief Method GetEmpadVolume, addr 0x183ffec, size 0x6c, virtual false, abstract: false, final false
inline float_t GetEmpadVolume(int32_t  instanceId) ;

/// @brief Method GetFixedEmpadId, addr 0x183f468, size 0x204, virtual false, abstract: false, final false
inline int32_t GetFixedEmpadId(int32_t  groupId) ;

/// @brief Method GetGroupEmpads, addr 0x183f230, size 0x238, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int32_t>* GetGroupEmpads(int32_t  groupId) ;

/// @brief Method IsEmpadPinned, addr 0x1840298, size 0x78, virtual false, abstract: false, final false
inline bool IsEmpadPinned(int32_t  instanceId) ;

/// @brief Method IsEmpadPressureSensitive, addr 0x183ff80, size 0x6c, virtual false, abstract: false, final false
inline bool IsEmpadPressureSensitive(int32_t  instanceId) ;

/// @brief Method LoadData, addr 0x183e98c, size 0x11c, virtual true, abstract: false, final false
inline void LoadData(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

static inline ::VROSC::ModularDrumsDataController* New_ctor() ;

/// @brief Method RemoveDrumpadSpatialAnchor, addr 0x1840958, size 0xd4, virtual false, abstract: false, final false
inline void RemoveDrumpadSpatialAnchor(int32_t  instanceId, ::StringW  uuid) ;

/// @brief Method RemoveEmpad, addr 0x183f124, size 0x10c, virtual false, abstract: false, final false
inline void RemoveEmpad(int32_t  empadId) ;

/// @brief Method SetEmpadNote, addr 0x183fba0, size 0x80, virtual false, abstract: false, final false
inline void SetEmpadNote(int32_t  instanceId, int32_t  note) ;

/// @brief Method SetEmpadPinned, addr 0x18406a4, size 0x8c, virtual false, abstract: false, final false
inline void SetEmpadPinned(int32_t  instanceId, bool  pinned) ;

/// @brief Method SetEmpadPosition, addr 0x184053c, size 0xb0, virtual false, abstract: false, final false
inline void SetEmpadPosition(int32_t  instanceId, ::UnityEngine::Vector3  position) ;

/// @brief Method SetEmpadRotation, addr 0x18405ec, size 0xb8, virtual false, abstract: false, final false
inline void SetEmpadRotation(int32_t  instanceId, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method SetEmpadSample, addr 0x183f948, size 0x258, virtual false, abstract: false, final false
inline void SetEmpadSample(int32_t  instanceId, int32_t  sampleIndex) ;

/// @brief Method SetEmpadSize, addr 0x184049c, size 0xa0, virtual false, abstract: false, final false
inline void SetEmpadSize(int32_t  instanceId, float_t  size) ;

/// @brief Method SetIsPressureSensitive, addr 0x1840310, size 0x84, virtual false, abstract: false, final false
inline void SetIsPressureSensitive(int32_t  instanceId, bool  isPressureSensitive) ;

/// @brief Method SetPitch, addr 0x184041c, size 0x80, virtual false, abstract: false, final false
inline void SetPitch(int32_t  instanceId, int32_t  pitch) ;

/// @brief Method SetVolume, addr 0x1840394, size 0x88, virtual false, abstract: false, final false
inline void SetVolume(int32_t  instanceId, float_t  volume) ;

/// @brief Method UpgradeSaveVersion, addr 0x183eaa8, size 0x160, virtual false, abstract: false, final false
inline void UpgradeSaveVersion(int32_t  savedVersion) ;

constexpr int32_t const& __cordl_internal_get__nextInstanceId() const;

constexpr int32_t& __cordl_internal_get__nextInstanceId() ;

constexpr ::VROSC::TransformDataController* const& __cordl_internal_get__transformData() const;

constexpr ::VROSC::TransformDataController*& __cordl_internal_get__transformData() ;

constexpr void __cordl_internal_set__nextInstanceId(int32_t  value) ;

constexpr void __cordl_internal_set__transformData(::VROSC::TransformDataController*  value) ;

/// @brief Method .ctor, addr 0x183e494, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::VROSC::ModularDrumsDataController*>* getStaticF_OnDataLoaded() ;

/// @brief Method get_Compression, addr 0x183e7b8, size 0x1c, virtual false, abstract: false, final false
inline float_t get_Compression() ;

/// @brief Method get_DataModel, addr 0x183e414, size 0x78, virtual false, abstract: false, final false
inline ::VROSC::ModularDrumsDataModel* get_DataModel() ;

/// @brief Method get_DryVolume, addr 0x183e75c, size 0x1c, virtual false, abstract: false, final false
inline float_t get_DryVolume() ;

/// @brief Method get_FrameIsActive, addr 0x1840730, size 0x8, virtual true, abstract: false, final false
inline bool get_FrameIsActive() ;

/// @brief Method get_HasBeenOpened, addr 0x183e814, size 0x1c, virtual true, abstract: false, final false
inline bool get_HasBeenOpened() ;

/// @brief Method get_Quantize, addr 0x183e58c, size 0x1c, virtual true, abstract: false, final false
inline bool get_Quantize() ;

/// @brief Method get_QuantizeBeatDivision, addr 0x183e648, size 0x1c, virtual true, abstract: false, final false
inline int32_t get_QuantizeBeatDivision() ;

/// @brief Method get_QuantizeTolerance, addr 0x183e5ec, size 0x1c, virtual true, abstract: false, final false
inline float_t get_QuantizeTolerance() ;

/// @brief Method get_ReverbAmount, addr 0x183e6a4, size 0x1c, virtual false, abstract: false, final false
inline float_t get_ReverbAmount() ;

/// @brief Method get_ReverbLength, addr 0x183e700, size 0x1c, virtual false, abstract: false, final false
inline float_t get_ReverbLength() ;

/// @brief Method get_TransformData, addr 0x183e48c, size 0x8, virtual true, abstract: false, final false
inline ::VROSC::TransformDataController* get_TransformData() ;

/// @brief Method get_Volume, addr 0x184073c, size 0x1c, virtual true, abstract: false, final false
inline float_t get_Volume() ;

static inline void setStaticF_OnDataLoaded(::System::Action_1<::VROSC::ModularDrumsDataController*>*  value) ;

/// @brief Method set_Compression, addr 0x183e7d4, size 0x40, virtual false, abstract: false, final false
inline void set_Compression(float_t  value) ;

/// @brief Method set_DryVolume, addr 0x183e778, size 0x40, virtual false, abstract: false, final false
inline void set_DryVolume(float_t  value) ;

/// @brief Method set_FrameIsActive, addr 0x1840738, size 0x4, virtual true, abstract: false, final false
inline void set_FrameIsActive(bool  value) ;

/// @brief Method set_HasBeenOpened, addr 0x183e830, size 0x44, virtual true, abstract: false, final false
inline void set_HasBeenOpened(bool  value) ;

/// @brief Method set_Quantize, addr 0x183e5a8, size 0x44, virtual true, abstract: false, final false
inline void set_Quantize(bool  value) ;

/// @brief Method set_QuantizeBeatDivision, addr 0x183e664, size 0x40, virtual true, abstract: false, final false
inline void set_QuantizeBeatDivision(int32_t  value) ;

/// @brief Method set_QuantizeTolerance, addr 0x183e608, size 0x40, virtual true, abstract: false, final false
inline void set_QuantizeTolerance(float_t  value) ;

/// @brief Method set_ReverbAmount, addr 0x183e6c0, size 0x40, virtual false, abstract: false, final false
inline void set_ReverbAmount(float_t  value) ;

/// @brief Method set_ReverbLength, addr 0x183e71c, size 0x40, virtual false, abstract: false, final false
inline void set_ReverbLength(float_t  value) ;

/// @brief Method set_Volume, addr 0x1840758, size 0x40, virtual true, abstract: false, final false
inline void set_Volume(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModularDrumsDataController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModularDrumsDataController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ModularDrumsDataController(ModularDrumsDataController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModularDrumsDataController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModularDrumsDataController(ModularDrumsDataController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{394};

/// @brief Field _transformData, offset: 0x28, size: 0x8, def value: None
 ::VROSC::TransformDataController*  ____transformData;

/// @brief Field _nextInstanceId, offset: 0x30, size: 0x4, def value: None
 int32_t  ____nextInstanceId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ModularDrumsDataController, ____transformData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ModularDrumsDataController, ____nextInstanceId) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ModularDrumsDataController, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ModularDrumsDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ModularDrumsDataController*, "VROSC", "ModularDrumsDataController");
NEED_NO_BOX(::VROSC::ModularDrumsDataController___c__DisplayClass33_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ModularDrumsDataController___c__DisplayClass33_0*, "VROSC", "ModularDrumsDataController/<>c__DisplayClass33_0");
