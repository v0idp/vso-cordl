#pragma once
// IWYU pragma private; include "VROSC/WidgetController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WidgetController)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class TimelineInstrumentActivation;
}
namespace VROSC {
class TransformMover;
}
namespace VROSC {
class UserDataControllers;
}
namespace VROSC {
class WidgetController_WidgetPositionalData;
}
namespace VROSC {
struct WidgetSettings_Identifier;
}
namespace VROSC {
class WidgetSettings;
}
// Forward declare root types
namespace VROSC {
class WidgetController;
}
namespace VROSC {
class WidgetController_WidgetPositionalData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::WidgetController);
MARK_REF_PTR_T(::VROSC::WidgetController_WidgetPositionalData);
// Dependencies System.Object, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.WidgetController/WidgetPositionalData
class CORDL_TYPE WidgetController_WidgetPositionalData : public ::System::Object {
public:
// Declarations
/// @brief Field Center, offset 0x1c, size 0xc 
 __declspec(property(get=__cordl_internal_get_Center, put=__cordl_internal_set_Center)) ::UnityEngine::Vector3  Center;

/// @brief Field Size, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_Size, put=__cordl_internal_set_Size)) ::UnityEngine::Vector3  Size;

/// @brief Field SpawnPoint, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_SpawnPoint, put=__cordl_internal_set_SpawnPoint)) ::UnityEngine::Vector3  SpawnPoint;

/// @brief Method IsPointInside, addr 0x17102b4, size 0x6c, virtual false, abstract: false, final false
inline bool IsPointInside(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  worldPosition) ;

static inline ::VROSC::WidgetController_WidgetPositionalData* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Center() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Center() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Size() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Size() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_SpawnPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_SpawnPoint() ;

constexpr void __cordl_internal_set_Center(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Size(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_SpawnPoint(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x1710320, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WidgetController_WidgetPositionalData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WidgetController_WidgetPositionalData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WidgetController_WidgetPositionalData(WidgetController_WidgetPositionalData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WidgetController_WidgetPositionalData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WidgetController_WidgetPositionalData(WidgetController_WidgetPositionalData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{881};

/// @brief Field Size, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Size;

/// @brief Field Center, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Center;

/// @brief Field SpawnPoint, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___SpawnPoint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::WidgetController_WidgetPositionalData, ___Size) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::WidgetController_WidgetPositionalData, ___Center) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::WidgetController_WidgetPositionalData, ___SpawnPoint) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::WidgetController_WidgetPositionalData, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.WidgetController
class CORDL_TYPE WidgetController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using WidgetPositionalData = ::VROSC::WidgetController_WidgetPositionalData;

 __declspec(property(get=get_DefaultSettings)) ::UnityW<::VROSC::WidgetSettings>  DefaultSettings;

 __declspec(property(get=get_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=get_InitalLocalScale, put=set_InitalLocalScale)) ::UnityEngine::Vector3  InitalLocalScale;

 __declspec(property(get=get_IsActive, put=set_IsActive)) bool  IsActive;

/// @brief Field OnToggled, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnToggled, put=__cordl_internal_set_OnToggled)) ::System::Action_1<bool>*  OnToggled;

/// @brief Field OnWidgetActivationChange, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnWidgetActivationChange, put=setStaticF_OnWidgetActivationChange)) ::System::Action_2<::UnityW<::VROSC::WidgetSettings>,bool>*  OnWidgetActivationChange;

 __declspec(property(get=get_PositionalData)) ::VROSC::WidgetController_WidgetPositionalData*  PositionalData;

 __declspec(property(get=get_SpawnHeightModifier)) float_t  SpawnHeightModifier;

 __declspec(property(get=get_TransformMover)) ::UnityW<::VROSC::TransformMover>  TransformMover;

 __declspec(property(get=get_UserHasOpened, put=set_UserHasOpened)) bool  UserHasOpened;

 __declspec(property(get=get_UserMoverScale, put=set_UserMoverScale)) ::UnityEngine::Vector3  UserMoverScale;

/// @brief Field <InitalLocalScale>k__BackingField, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get__InitalLocalScale_k__BackingField, put=__cordl_internal_set__InitalLocalScale_k__BackingField)) ::UnityEngine::Vector3  _InitalLocalScale_k__BackingField;

/// @brief Field <IsActive>k__BackingField, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsActive_k__BackingField, put=__cordl_internal_set__IsActive_k__BackingField)) bool  _IsActive_k__BackingField;

/// @brief Field <UserHasOpened>k__BackingField, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get__UserHasOpened_k__BackingField, put=__cordl_internal_set__UserHasOpened_k__BackingField)) bool  _UserHasOpened_k__BackingField;

/// @brief Field <UserMoverScale>k__BackingField, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get__UserMoverScale_k__BackingField, put=__cordl_internal_set__UserMoverScale_k__BackingField)) ::UnityEngine::Vector3  _UserMoverScale_k__BackingField;

 __declspec(property(get=get_ID)) ::VROSC::WidgetSettings_Identifier  _cordl_ID;

/// @brief Field _positionalData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__positionalData, put=__cordl_internal_set__positionalData)) ::VROSC::WidgetController_WidgetPositionalData*  _positionalData;

/// @brief Field _timelineActivation, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__timelineActivation, put=__cordl_internal_set__timelineActivation)) ::UnityW<::VROSC::TimelineInstrumentActivation>  _timelineActivation;

/// @brief Field _toggleObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggleObject, put=__cordl_internal_set__toggleObject)) ::UnityW<::UnityEngine::GameObject>  _toggleObject;

/// @brief Field _transformMover, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformMover, put=__cordl_internal_set__transformMover)) ::UnityW<::VROSC::TransformMover>  _transformMover;

/// @brief Field _widgetSettings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__widgetSettings, put=__cordl_internal_set__widgetSettings)) ::UnityW<::VROSC::WidgetSettings>  _widgetSettings;

/// @brief Method Awake, addr 0x170fcb0, size 0x218, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::WidgetController* New_ctor() ;

/// @brief Method OnApplicationQuit, addr 0x170fec8, size 0x30, virtual false, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method OnDestroy, addr 0x170da08, size 0x1b8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmosSelected, addr 0x17101fc, size 0xb8, virtual true, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method SendToAnalytics, addr 0x170fef8, size 0x1b0, virtual false, abstract: false, final false
inline void SendToAnalytics(::VROSC::WidgetSettings_Identifier  id, bool  isActive) ;

/// @brief Method SetActivationPositions, addr 0x170d894, size 0x4, virtual true, abstract: false, final false
inline void SetActivationPositions(::UnityEngine::Vector3  pressPos, bool  active) ;

/// @brief Method SetActive, addr 0x17100a8, size 0x154, virtual true, abstract: false, final false
inline void SetActive(bool  shouldBeActive, bool  forceImmediate) ;

/// @brief Method Toggle, addr 0x170dffc, size 0x1c, virtual true, abstract: false, final false
inline void Toggle() ;

/// @brief Method TransformChanged, addr 0x170e55c, size 0x4, virtual true, abstract: false, final false
inline void TransformChanged(::VROSC::TransformMover*  mover) ;

/// @brief Method UserDataLoaded, addr 0x170df48, size 0x4, virtual true, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  user) ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnToggled() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnToggled() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__InitalLocalScale_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__InitalLocalScale_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsActive_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsActive_k__BackingField() ;

constexpr bool const& __cordl_internal_get__UserHasOpened_k__BackingField() const;

constexpr bool& __cordl_internal_get__UserHasOpened_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__UserMoverScale_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__UserMoverScale_k__BackingField() ;

constexpr ::VROSC::WidgetController_WidgetPositionalData* const& __cordl_internal_get__positionalData() const;

constexpr ::VROSC::WidgetController_WidgetPositionalData*& __cordl_internal_get__positionalData() ;

constexpr ::UnityW<::VROSC::TimelineInstrumentActivation> const& __cordl_internal_get__timelineActivation() const;

constexpr ::UnityW<::VROSC::TimelineInstrumentActivation>& __cordl_internal_get__timelineActivation() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__toggleObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__toggleObject() ;

constexpr ::UnityW<::VROSC::TransformMover> const& __cordl_internal_get__transformMover() const;

constexpr ::UnityW<::VROSC::TransformMover>& __cordl_internal_get__transformMover() ;

constexpr ::UnityW<::VROSC::WidgetSettings> const& __cordl_internal_get__widgetSettings() const;

constexpr ::UnityW<::VROSC::WidgetSettings>& __cordl_internal_get__widgetSettings() ;

constexpr void __cordl_internal_set_OnToggled(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set__InitalLocalScale_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__IsActive_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__UserHasOpened_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__UserMoverScale_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__positionalData(::VROSC::WidgetController_WidgetPositionalData*  value) ;

constexpr void __cordl_internal_set__timelineActivation(::UnityW<::VROSC::TimelineInstrumentActivation>  value) ;

constexpr void __cordl_internal_set__toggleObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__transformMover(::UnityW<::VROSC::TransformMover>  value) ;

constexpr void __cordl_internal_set__widgetSettings(::UnityW<::VROSC::WidgetSettings>  value) ;

/// @brief Method .ctor, addr 0x170e6e8, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_2<::UnityW<::VROSC::WidgetSettings>,bool>* getStaticF_OnWidgetActivationChange() ;

/// @brief Method get_DefaultSettings, addr 0x170fc10, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::WidgetSettings> get_DefaultSettings() ;

/// @brief Method get_DisplayName, addr 0x170fc18, size 0x1c, virtual false, abstract: false, final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_ID, addr 0x170e14c, size 0x1c, virtual false, abstract: false, final false
inline ::VROSC::WidgetSettings_Identifier get_ID() ;

/// @brief Method get_InitalLocalScale, addr 0x170fc8c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_InitalLocalScale() ;

/// @brief Method get_IsActive, addr 0x170fc40, size 0x8, virtual false, abstract: false, final false
inline bool get_IsActive() ;

/// @brief Method get_PositionalData, addr 0x170fc08, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::WidgetController_WidgetPositionalData* get_PositionalData() ;

/// @brief Method get_SpawnHeightModifier, addr 0x170fc64, size 0x1c, virtual false, abstract: false, final false
inline float_t get_SpawnHeightModifier() ;

/// @brief Method get_TransformMover, addr 0x170fc5c, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::VROSC::TransformMover> get_TransformMover() ;

/// @brief Method get_UserHasOpened, addr 0x170fc54, size 0x8, virtual false, abstract: false, final false
inline bool get_UserHasOpened() ;

/// @brief Method get_UserMoverScale, addr 0x170fca4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_UserMoverScale() ;

static inline void setStaticF_OnWidgetActivationChange(::System::Action_2<::UnityW<::VROSC::WidgetSettings>,bool>*  value) ;

/// @brief Method set_InitalLocalScale, addr 0x170fc80, size 0xc, virtual false, abstract: false, final false
inline void set_InitalLocalScale(::UnityEngine::Vector3  value) ;

/// @brief Method set_IsActive, addr 0x170fc34, size 0xc, virtual false, abstract: false, final false
inline void set_IsActive(bool  value) ;

/// @brief Method set_UserHasOpened, addr 0x170fc48, size 0xc, virtual false, abstract: false, final false
inline void set_UserHasOpened(bool  value) ;

/// @brief Method set_UserMoverScale, addr 0x170fc98, size 0xc, virtual false, abstract: false, final false
inline void set_UserMoverScale(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WidgetController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WidgetController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WidgetController(WidgetController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WidgetController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WidgetController(WidgetController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{882};

/// @brief Field _widgetSettings, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::WidgetSettings>  ____widgetSettings;

/// @brief Field _toggleObject, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____toggleObject;

/// @brief Field _timelineActivation, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::TimelineInstrumentActivation>  ____timelineActivation;

/// @brief Field _positionalData, offset: 0x38, size: 0x8, def value: None
 ::VROSC::WidgetController_WidgetPositionalData*  ____positionalData;

/// @brief Field _transformMover, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::TransformMover>  ____transformMover;

/// @brief Field <IsActive>k__BackingField, offset: 0x48, size: 0x1, def value: None
 bool  ____IsActive_k__BackingField;

/// @brief Field <UserHasOpened>k__BackingField, offset: 0x49, size: 0x1, def value: None
 bool  ____UserHasOpened_k__BackingField;

/// @brief Field <InitalLocalScale>k__BackingField, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____InitalLocalScale_k__BackingField;

/// @brief Field <UserMoverScale>k__BackingField, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____UserMoverScale_k__BackingField;

/// @brief Field OnToggled, offset: 0x68, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnToggled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::WidgetController, ____widgetSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::WidgetController, ____toggleObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::WidgetController, ____timelineActivation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::WidgetController, ____positionalData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::WidgetController, ____transformMover) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::WidgetController, ____IsActive_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::WidgetController, ____UserHasOpened_k__BackingField) == 0x49, "Offset mismatch!");

static_assert(offsetof(::VROSC::WidgetController, ____InitalLocalScale_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::WidgetController, ____UserMoverScale_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::WidgetController, ___OnToggled) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::WidgetController, 0x70>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::WidgetController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::WidgetController*, "VROSC", "WidgetController");
NEED_NO_BOX(::VROSC::WidgetController_WidgetPositionalData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::WidgetController_WidgetPositionalData*, "VROSC", "WidgetController/WidgetPositionalData");
