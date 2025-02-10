#pragma once
// IWYU pragma private; include "VROSC/MicrophoneDataController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__ToolDataController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MicrophoneDataController)
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
struct Error;
}
namespace VROSC {
class MicrophoneDataController___c__DisplayClass38_0;
}
namespace VROSC {
class MicrophoneDataModel;
}
namespace VROSC {
class MicrophoneSettings;
}
namespace VROSC {
class TransformDataController;
}
namespace VROSC {
class WidgetSettings;
}
// Forward declare root types
namespace VROSC {
class MicrophoneDataController;
}
namespace VROSC {
class MicrophoneDataController___c__DisplayClass38_0;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MicrophoneDataController);
MARK_REF_PTR_T(::VROSC::MicrophoneDataController___c__DisplayClass38_0);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MicrophoneDataController/<>c__DisplayClass38_0
class CORDL_TYPE MicrophoneDataController___c__DisplayClass38_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::MicrophoneDataController*  __4__this;

/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

static inline ::VROSC::MicrophoneDataController___c__DisplayClass38_0* New_ctor() ;

/// @brief Method <LoadData>b__0, addr 0x18745f0, size 0x110, virtual false, abstract: false, final false
inline void _LoadData_b__0(::StringW  data) ;

constexpr ::VROSC::MicrophoneDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::MicrophoneDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set___4__this(::VROSC::MicrophoneDataController*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x1874420, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicrophoneDataController___c__DisplayClass38_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicrophoneDataController___c__DisplayClass38_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicrophoneDataController___c__DisplayClass38_0(MicrophoneDataController___c__DisplayClass38_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicrophoneDataController___c__DisplayClass38_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicrophoneDataController___c__DisplayClass38_0(MicrophoneDataController___c__DisplayClass38_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{537};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::MicrophoneDataController*  _____4__this;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MicrophoneDataController___c__DisplayClass38_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDataController___c__DisplayClass38_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MicrophoneDataController___c__DisplayClass38_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.ToolDataController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MicrophoneDataController
class CORDL_TYPE MicrophoneDataController : public ::VROSC::ToolDataController {
public:
// Declarations
using __c__DisplayClass38_0 = ::VROSC::MicrophoneDataController___c__DisplayClass38_0;

 __declspec(property(get=get_DataModel)) ::VROSC::MicrophoneDataModel*  DataModel;

 __declspec(property(get=get_HasBeenOpened, put=set_HasBeenOpened)) bool  HasBeenOpened;

 __declspec(property(get=get_IsOpen, put=set_IsOpen)) bool  IsOpen;

 __declspec(property(get=get_MaxReverb)) float_t  MaxReverb;

 __declspec(property(get=get_MaxVolume)) float_t  MaxVolume;

 __declspec(property(get=get_MicrophoneIsAttached, put=set_MicrophoneIsAttached)) bool  MicrophoneIsAttached;

 __declspec(property(get=get_MicrophonePosition)) ::UnityEngine::Vector3  MicrophonePosition;

 __declspec(property(get=get_MicrophoneRotation)) ::UnityEngine::Quaternion  MicrophoneRotation;

 __declspec(property(get=get_MicrophoneScale)) ::UnityEngine::Vector3  MicrophoneScale;

/// @brief Field OnDataLoaded, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDataLoaded, put=setStaticF_OnDataLoaded)) ::System::Action_1<::VROSC::MicrophoneDataController*>*  OnDataLoaded;

 __declspec(property(get=get_PreampReverb, put=set_PreampReverb)) float_t  PreampReverb;

 __declspec(property(get=get_PreampVolume, put=set_PreampVolume)) float_t  PreampVolume;

 __declspec(property(get=get_TransformData)) ::VROSC::TransformDataController*  TransformData;

 __declspec(property(get=get_UseProximity, put=set_UseProximity)) bool  UseProximity;

/// @brief Field _microphoneDefaultSettings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__microphoneDefaultSettings, put=__cordl_internal_set__microphoneDefaultSettings)) ::UnityW<::VROSC::MicrophoneSettings>  _microphoneDefaultSettings;

/// @brief Field _transformData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformData, put=__cordl_internal_set__transformData)) ::VROSC::TransformDataController*  _transformData;

/// @brief Method AddMicrophoneSpatialAnchor, addr 0x1874444, size 0xf8, virtual false, abstract: false, final false
inline void AddMicrophoneSpatialAnchor(::StringW  uuid) ;

/// @brief Method ApplyDefaults, addr 0x1873e24, size 0x164, virtual true, abstract: false, final false
inline void ApplyDefaults(::VROSC::WidgetSettings*  widgetDefaultSettings) ;

/// @brief Method GetMicrophoneSpatialAnchors, addr 0x1874428, size 0x1c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* GetMicrophoneSpatialAnchors() ;

/// @brief Method LoadData, addr 0x1874304, size 0x11c, virtual true, abstract: false, final false
inline void LoadData(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

static inline ::VROSC::MicrophoneDataController* New_ctor() ;

/// @brief Method RemoveMicrophoneSpatialAnchor, addr 0x187453c, size 0xb4, virtual false, abstract: false, final false
inline void RemoveMicrophoneSpatialAnchor(::StringW  uuid) ;

/// @brief Method SetMicrophoneTransformData, addr 0x18740e0, size 0x198, virtual false, abstract: false, final false
inline void SetMicrophoneTransformData(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale) ;

constexpr ::UnityW<::VROSC::MicrophoneSettings> const& __cordl_internal_get__microphoneDefaultSettings() const;

constexpr ::UnityW<::VROSC::MicrophoneSettings>& __cordl_internal_get__microphoneDefaultSettings() ;

constexpr ::VROSC::TransformDataController* const& __cordl_internal_get__transformData() const;

constexpr ::VROSC::TransformDataController*& __cordl_internal_get__transformData() ;

constexpr void __cordl_internal_set__microphoneDefaultSettings(::UnityW<::VROSC::MicrophoneSettings>  value) ;

constexpr void __cordl_internal_set__transformData(::VROSC::TransformDataController*  value) ;

/// @brief Method .ctor, addr 0x187393c, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::VROSC::MicrophoneDataController*>* getStaticF_OnDataLoaded() ;

/// @brief Method get_DataModel, addr 0x18738bc, size 0x78, virtual false, abstract: false, final false
inline ::VROSC::MicrophoneDataModel* get_DataModel() ;

/// @brief Method get_HasBeenOpened, addr 0x1873bfc, size 0x1c, virtual true, abstract: false, final false
inline bool get_HasBeenOpened() ;

/// @brief Method get_IsOpen, addr 0x1873b98, size 0x24, virtual true, abstract: false, final false
inline bool get_IsOpen() ;

/// @brief Method get_MaxReverb, addr 0x18742cc, size 0x1c, virtual false, abstract: false, final false
inline float_t get_MaxReverb() ;

/// @brief Method get_MaxVolume, addr 0x18742b0, size 0x1c, virtual false, abstract: false, final false
inline float_t get_MaxVolume() ;

/// @brief Method get_MicrophoneIsAttached, addr 0x1873b44, size 0x1c, virtual false, abstract: false, final false
inline bool get_MicrophoneIsAttached() ;

/// @brief Method get_MicrophonePosition, addr 0x1873c50, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_MicrophonePosition() ;

/// @brief Method get_MicrophoneRotation, addr 0x1873cdc, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_MicrophoneRotation() ;

/// @brief Method get_MicrophoneScale, addr 0x1873d98, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_MicrophoneScale() ;

/// @brief Method get_PreampReverb, addr 0x1874294, size 0x1c, virtual false, abstract: false, final false
inline float_t get_PreampReverb() ;

/// @brief Method get_PreampVolume, addr 0x1874278, size 0x1c, virtual false, abstract: false, final false
inline float_t get_PreampVolume() ;

/// @brief Method get_TransformData, addr 0x1873934, size 0x8, virtual true, abstract: false, final false
inline ::VROSC::TransformDataController* get_TransformData() ;

/// @brief Method get_UseProximity, addr 0x18742e8, size 0x1c, virtual false, abstract: false, final false
inline bool get_UseProximity() ;

static inline void setStaticF_OnDataLoaded(::System::Action_1<::VROSC::MicrophoneDataController*>*  value) ;

/// @brief Method set_HasBeenOpened, addr 0x1873c18, size 0x38, virtual true, abstract: false, final false
inline void set_HasBeenOpened(bool  value) ;

/// @brief Method set_IsOpen, addr 0x1873bbc, size 0x40, virtual true, abstract: false, final false
inline void set_IsOpen(bool  value) ;

/// @brief Method set_MicrophoneIsAttached, addr 0x1873b60, size 0x38, virtual false, abstract: false, final false
inline void set_MicrophoneIsAttached(bool  value) ;

/// @brief Method set_PreampReverb, addr 0x1874074, size 0x34, virtual false, abstract: false, final false
inline void set_PreampReverb(float_t  value) ;

/// @brief Method set_PreampVolume, addr 0x1874040, size 0x34, virtual false, abstract: false, final false
inline void set_PreampVolume(float_t  value) ;

/// @brief Method set_UseProximity, addr 0x18740a8, size 0x38, virtual false, abstract: false, final false
inline void set_UseProximity(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicrophoneDataController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicrophoneDataController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicrophoneDataController(MicrophoneDataController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicrophoneDataController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicrophoneDataController(MicrophoneDataController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{538};

/// @brief Field _transformData, offset: 0x28, size: 0x8, def value: None
 ::VROSC::TransformDataController*  ____transformData;

/// @brief Field _microphoneDefaultSettings, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::MicrophoneSettings>  ____microphoneDefaultSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MicrophoneDataController, ____transformData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDataController, ____microphoneDefaultSettings) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MicrophoneDataController, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MicrophoneDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MicrophoneDataController*, "VROSC", "MicrophoneDataController");
NEED_NO_BOX(::VROSC::MicrophoneDataController___c__DisplayClass38_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MicrophoneDataController___c__DisplayClass38_0*, "VROSC", "MicrophoneDataController/<>c__DisplayClass38_0");
