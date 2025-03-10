#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneManager)
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
class OVRSceneAnchor;
}
namespace GlobalNamespace {
class OVRSceneManager_Classification;
}
namespace GlobalNamespace {
class OVRSceneManager_Development;
}
namespace GlobalNamespace {
struct OVRSceneManager_LogForwarder;
}
namespace GlobalNamespace {
class OVRSceneManager_RoomLayoutInformation;
}
namespace GlobalNamespace {
struct OVRSceneManager__OnApplicationPause_d__35;
}
namespace GlobalNamespace {
struct OVRSceneManager__QueryForExistingAnchorsTransform_d__36;
}
namespace GlobalNamespace {
class OVRSceneManager___c__DisplayClass48_0;
}
namespace GlobalNamespace {
class OVRSceneManager___c__DisplayClass51_0;
}
namespace GlobalNamespace {
class OVRScenePlane;
}
namespace GlobalNamespace {
class OVRScenePrefabOverride;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
struct Guid;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSceneManager;
}
namespace GlobalNamespace {
class OVRSceneManager_Classification;
}
namespace GlobalNamespace {
class OVRSceneManager_Development;
}
namespace GlobalNamespace {
class OVRSceneManager_RoomLayoutInformation;
}
namespace GlobalNamespace {
class OVRSceneManager___c__DisplayClass48_0;
}
namespace GlobalNamespace {
class OVRSceneManager___c__DisplayClass51_0;
}
namespace GlobalNamespace {
struct OVRSceneManager_LogForwarder;
}
namespace GlobalNamespace {
struct OVRSceneManager__OnApplicationPause_d__35;
}
namespace GlobalNamespace {
struct OVRSceneManager__QueryForExistingAnchorsTransform_d__36;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneManager);
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneManager_Classification);
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneManager_Development);
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneManager_RoomLayoutInformation);
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneManager___c__DisplayClass48_0);
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0);
MARK_VAL_T(::GlobalNamespace::OVRSceneManager_LogForwarder);
MARK_VAL_T(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35);
MARK_VAL_T(::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneManager/Classification
class CORDL_TYPE OVRSceneManager_Classification : public ::System::Object {
public:
// Declarations
/// @brief Field <List>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__List_k__BackingField, put=setStaticF__List_k__BackingField)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  _List_k__BackingField;

static inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* getStaticF__List_k__BackingField() ;

/// @brief Method get_List, addr 0x2914ae4, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_List() ;

static inline void setStaticF__List_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager_Classification() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager_Classification", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSceneManager_Classification(OVRSceneManager_Classification && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager_Classification", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSceneManager_Classification(OVRSceneManager_Classification const& ) = delete;

/// @brief Field Bed offset 0xffffffff size 0x8
static constexpr ::ConstString  Bed{u"BED"};

/// @brief Field Ceiling offset 0xffffffff size 0x8
static constexpr ::ConstString  Ceiling{u"CEILING"};

/// @brief Field Couch offset 0xffffffff size 0x8
static constexpr ::ConstString  Couch{u"COUCH"};

/// @brief Field Desk offset 0xffffffff size 0x8
static constexpr ::ConstString  Desk{u"DESK"};

/// @brief Field DoorFrame offset 0xffffffff size 0x8
static constexpr ::ConstString  DoorFrame{u"DOOR_FRAME"};

/// @brief Field Floor offset 0xffffffff size 0x8
static constexpr ::ConstString  Floor{u"FLOOR"};

/// @brief Field GlobalMesh offset 0xffffffff size 0x8
static constexpr ::ConstString  GlobalMesh{u"GLOBAL_MESH"};

/// @brief Field InvisibleWallFace offset 0xffffffff size 0x8
static constexpr ::ConstString  InvisibleWallFace{u"INVISIBLE_WALL_FACE"};

/// @brief Field Lamp offset 0xffffffff size 0x8
static constexpr ::ConstString  Lamp{u"LAMP"};

/// @brief Field Other offset 0xffffffff size 0x8
static constexpr ::ConstString  Other{u"OTHER"};

/// @brief Field Plant offset 0xffffffff size 0x8
static constexpr ::ConstString  Plant{u"PLANT"};

/// @brief Field Screen offset 0xffffffff size 0x8
static constexpr ::ConstString  Screen{u"SCREEN"};

/// @brief Field Storage offset 0xffffffff size 0x8
static constexpr ::ConstString  Storage{u"STORAGE"};

/// @brief Field Table offset 0xffffffff size 0x8
static constexpr ::ConstString  Table{u"TABLE"};

/// @brief Field WallArt offset 0xffffffff size 0x8
static constexpr ::ConstString  WallArt{u"WALL_ART"};

/// @brief Field WallFace offset 0xffffffff size 0x8
static constexpr ::ConstString  WallFace{u"WALL_FACE"};

/// @brief Field WindowFrame offset 0xffffffff size 0x8
static constexpr ::ConstString  WindowFrame{u"WINDOW_FRAME"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6508};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager_Classification, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneManager/RoomLayoutInformation
class CORDL_TYPE OVRSceneManager_RoomLayoutInformation : public ::System::Object {
public:
// Declarations
/// @brief Field Ceiling, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Ceiling, put=__cordl_internal_set_Ceiling)) ::UnityW<::GlobalNamespace::OVRScenePlane>  Ceiling;

/// @brief Field Floor, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Floor, put=__cordl_internal_set_Floor)) ::UnityW<::GlobalNamespace::OVRScenePlane>  Floor;

/// @brief Field Walls, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Walls, put=__cordl_internal_set_Walls)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*  Walls;

static inline ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::OVRScenePlane> const& __cordl_internal_get_Ceiling() const;

constexpr ::UnityW<::GlobalNamespace::OVRScenePlane>& __cordl_internal_get_Ceiling() ;

constexpr ::UnityW<::GlobalNamespace::OVRScenePlane> const& __cordl_internal_get_Floor() const;

constexpr ::UnityW<::GlobalNamespace::OVRScenePlane>& __cordl_internal_get_Floor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* const& __cordl_internal_get_Walls() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*& __cordl_internal_get_Walls() ;

constexpr void __cordl_internal_set_Ceiling(::UnityW<::GlobalNamespace::OVRScenePlane>  value) ;

constexpr void __cordl_internal_set_Floor(::UnityW<::GlobalNamespace::OVRScenePlane>  value) ;

constexpr void __cordl_internal_set_Walls(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*  value) ;

/// @brief Method .ctor, addr 0x2913e04, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager_RoomLayoutInformation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager_RoomLayoutInformation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSceneManager_RoomLayoutInformation(OVRSceneManager_RoomLayoutInformation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager_RoomLayoutInformation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSceneManager_RoomLayoutInformation(OVRSceneManager_RoomLayoutInformation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6509};

/// @brief Field Floor, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRScenePlane>  ___Floor;

/// @brief Field Ceiling, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRScenePlane>  ___Ceiling;

/// @brief Field Walls, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*  ___Walls;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager_RoomLayoutInformation, ___Floor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager_RoomLayoutInformation, ___Ceiling) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager_RoomLayoutInformation, ___Walls) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager_RoomLayoutInformation, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/LogForwarder
#pragma pack(push, 0)
struct CORDL_TYPE OVRSceneManager_LogForwarder {
public:
// Declarations
/// @brief Method Log, addr 0x2911ef8, size 0xbc, virtual false, abstract: false, final false
inline void Log(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject) ;

/// @brief Method LogError, addr 0x291055c, size 0xbc, virtual false, abstract: false, final false
inline void LogError(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject) ;

/// @brief Method LogWarning, addr 0x29114cc, size 0xbc, virtual false, abstract: false, final false
inline void LogWarning(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager_LogForwarder() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6510};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager_LogForwarder, 0x1>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneManager/Development
class CORDL_TYPE OVRSceneManager_Development : public ::System::Object {
public:
// Declarations
/// @brief Method Log, addr 0x2914e14, size 0xbc, virtual false, abstract: false, final false
static inline void Log(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject) ;

/// @brief Method LogError, addr 0x2914f8c, size 0xbc, virtual false, abstract: false, final false
static inline void LogError(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject) ;

/// @brief Method LogWarning, addr 0x2914ed0, size 0xbc, virtual false, abstract: false, final false
static inline void LogWarning(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager_Development() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager_Development", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSceneManager_Development(OVRSceneManager_Development && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager_Development", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSceneManager_Development(OVRSceneManager_Development const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6511};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager_Development, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVRTask`1<TResult>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneManager/<>c__DisplayClass48_0
class CORDL_TYPE OVRSceneManager___c__DisplayClass48_0 : public ::System::Object {
public:
// Declarations
/// @brief Field requestedAnchorClassifications, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestedAnchorClassifications, put=__cordl_internal_set_requestedAnchorClassifications)) ::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications;

/// @brief Field task, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_task, put=__cordl_internal_set_task)) ::GlobalNamespace::OVRTask_1<bool>  task;

static inline ::GlobalNamespace::OVRSceneManager___c__DisplayClass48_0* New_ctor() ;

/// @brief Method <DoesRoomSetupExist>b__0, addr 0x2915048, size 0x18, virtual false, abstract: false, final false
inline void _DoesRoomSetupExist_b__0(bool  result, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* const& __cordl_internal_get_requestedAnchorClassifications() const;

constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& __cordl_internal_get_requestedAnchorClassifications() ;

constexpr ::GlobalNamespace::OVRTask_1<bool> const& __cordl_internal_get_task() const;

constexpr ::GlobalNamespace::OVRTask_1<bool>& __cordl_internal_get_task() ;

constexpr void __cordl_internal_set_requestedAnchorClassifications(::System::Collections::Generic::IEnumerable_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_task(::GlobalNamespace::OVRTask_1<bool>  value) ;

/// @brief Method .ctor, addr 0x2912ab8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager___c__DisplayClass48_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager___c__DisplayClass48_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSceneManager___c__DisplayClass48_0(OVRSceneManager___c__DisplayClass48_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager___c__DisplayClass48_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSceneManager___c__DisplayClass48_0(OVRSceneManager___c__DisplayClass48_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6512};

/// @brief Field requestedAnchorClassifications, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::StringW>*  ___requestedAnchorClassifications;

/// @brief Field task, offset: 0x18, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1<bool>  ___task;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager___c__DisplayClass48_0, ___requestedAnchorClassifications) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager___c__DisplayClass48_0, ___task) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager___c__DisplayClass48_0, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVRTask`1<TResult>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneManager/<>c__DisplayClass51_0
class CORDL_TYPE OVRSceneManager___c__DisplayClass51_0 : public ::System::Object {
public:
// Declarations
/// @brief Field requestedAnchorClassifications, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestedAnchorClassifications, put=__cordl_internal_set_requestedAnchorClassifications)) ::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications;

/// @brief Field roomAnchors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomAnchors, put=__cordl_internal_set_roomAnchors)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  roomAnchors;

/// @brief Field task, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_task, put=__cordl_internal_set_task)) ::GlobalNamespace::OVRTask_1<bool>  task;

static inline ::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0* New_ctor() ;

/// @brief Method <CheckClassificationsInRooms>b__0, addr 0x2915060, size 0x14, virtual false, abstract: false, final false
inline void _CheckClassificationsInRooms_b__0(bool  result) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* const& __cordl_internal_get_requestedAnchorClassifications() const;

constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& __cordl_internal_get_requestedAnchorClassifications() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* const& __cordl_internal_get_roomAnchors() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*& __cordl_internal_get_roomAnchors() ;

constexpr ::GlobalNamespace::OVRTask_1<bool> const& __cordl_internal_get_task() const;

constexpr ::GlobalNamespace::OVRTask_1<bool>& __cordl_internal_get_task() ;

constexpr void __cordl_internal_set_requestedAnchorClassifications(::System::Collections::Generic::IEnumerable_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_roomAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  value) ;

constexpr void __cordl_internal_set_task(::GlobalNamespace::OVRTask_1<bool>  value) ;

/// @brief Method .ctor, addr 0x2913090, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager___c__DisplayClass51_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager___c__DisplayClass51_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSceneManager___c__DisplayClass51_0(OVRSceneManager___c__DisplayClass51_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager___c__DisplayClass51_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSceneManager___c__DisplayClass51_0(OVRSceneManager___c__DisplayClass51_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6513};

/// @brief Field requestedAnchorClassifications, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::StringW>*  ___requestedAnchorClassifications;

/// @brief Field task, offset: 0x18, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1<bool>  ___task;

/// @brief Field roomAnchors, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  ___roomAnchors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0, ___requestedAnchorClassifications) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0, ___task) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0, ___roomAnchors) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVRAnchor, OVRObjectPool::ListScope`1<T>, OVRTask`1::Awaiter<TResult>, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/<OnApplicationPause>d__35
struct CORDL_TYPE OVRSceneManager__OnApplicationPause_d__35 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2915074, size 0x648, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x29156bc, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager__OnApplicationPause_d__35() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "isPaused", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::OVRSceneManager>", modifiers: "", def_value: None }, CppParam { name: "_anchors_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: None }]
constexpr OVRSceneManager__OnApplicationPause_d__35(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, bool  isPaused, ::UnityW<::GlobalNamespace::OVRSceneManager>  __4__this, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _anchors_5__2, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap2, ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6514};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field isPaused, offset: 0x28, size: 0x1, def value: None
 bool  isPaused;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRSceneManager>  __4__this;

/// @brief Field <anchors>5__2, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _anchors_5__2;

/// @brief Field <>7__wrap2, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap2;

/// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35, isPaused) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35, _anchors_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35, __7__wrap2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVRAnchor, OVRObjectPool::ListScope`1<T>, OVRTask`1::Awaiter<TResult>, System.Guid, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/<QueryForExistingAnchorsTransform>d__36
struct CORDL_TYPE OVRSceneManager__QueryForExistingAnchorsTransform_d__36 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x29156c8, size 0x65c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x2915d24, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager__QueryForExistingAnchorsTransform_d__36() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::System::Guid>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: None }]
constexpr OVRSceneManager__QueryForExistingAnchorsTransform_d__36(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap1, ::GlobalNamespace::OVRObjectPool_ListScope_1<::System::Guid>  __7__wrap2, ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6515};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>7__wrap1, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::System::Guid>  __7__wrap2;

/// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36, __7__wrap1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36, __7__wrap2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneManager
class CORDL_TYPE OVRSceneManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Classification = ::GlobalNamespace::OVRSceneManager_Classification;

using Development = ::GlobalNamespace::OVRSceneManager_Development;

using LogForwarder = ::GlobalNamespace::OVRSceneManager_LogForwarder;

using RoomLayoutInformation = ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation;

using _OnApplicationPause_d__35 = ::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35;

using _QueryForExistingAnchorsTransform_d__36 = ::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36;

using __c__DisplayClass48_0 = ::GlobalNamespace::OVRSceneManager___c__DisplayClass48_0;

using __c__DisplayClass51_0 = ::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0;

/// @brief Field ActiveRoomsOnly, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_ActiveRoomsOnly, put=__cordl_internal_set_ActiveRoomsOnly)) bool  ActiveRoomsOnly;

 __declspec(property(get=get_InitialAnchorParent, put=set_InitialAnchorParent)) ::UnityW<::UnityEngine::Transform>  InitialAnchorParent;

/// @brief Field MaxSceneAnchorUpdatesPerFrame, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxSceneAnchorUpdatesPerFrame, put=__cordl_internal_set_MaxSceneAnchorUpdatesPerFrame)) int32_t  MaxSceneAnchorUpdatesPerFrame;

/// @brief Field NewSceneModelAvailable, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_NewSceneModelAvailable, put=__cordl_internal_set_NewSceneModelAvailable)) ::System::Action*  NewSceneModelAvailable;

/// @brief Field NoSceneModelToLoad, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_NoSceneModelToLoad, put=__cordl_internal_set_NoSceneModelToLoad)) ::System::Action*  NoSceneModelToLoad;

/// @brief Field PlanePrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlanePrefab, put=__cordl_internal_set_PlanePrefab)) ::UnityW<::GlobalNamespace::OVRSceneAnchor>  PlanePrefab;

/// @brief Field PrefabOverrides, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PrefabOverrides, put=__cordl_internal_set_PrefabOverrides)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*  PrefabOverrides;

/// @brief Field RoomLayout, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoomLayout, put=__cordl_internal_set_RoomLayout)) ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*  RoomLayout;

/// @brief Field SceneCaptureReturnedWithoutError, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_SceneCaptureReturnedWithoutError, put=__cordl_internal_set_SceneCaptureReturnedWithoutError)) ::System::Action*  SceneCaptureReturnedWithoutError;

/// @brief Field SceneModelLoadedSuccessfully, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_SceneModelLoadedSuccessfully, put=__cordl_internal_set_SceneModelLoadedSuccessfully)) ::System::Action*  SceneModelLoadedSuccessfully;

/// @brief Field UnexpectedErrorWithSceneCapture, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_UnexpectedErrorWithSceneCapture, put=__cordl_internal_set_UnexpectedErrorWithSceneCapture)) ::System::Action*  UnexpectedErrorWithSceneCapture;

 __declspec(property(get=get_Verbose)) ::System::Nullable_1<::GlobalNamespace::OVRSceneManager_LogForwarder>  Verbose;

/// @brief Field VerboseLogging, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_VerboseLogging, put=__cordl_internal_set_VerboseLogging)) bool  VerboseLogging;

/// @brief Field VolumePrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_VolumePrefab, put=__cordl_internal_set_VolumePrefab)) ::UnityW<::GlobalNamespace::OVRSceneAnchor>  VolumePrefab;

/// @brief Field _cameraRig, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraRig, put=__cordl_internal_set__cameraRig)) ::UnityW<::GlobalNamespace::OVRCameraRig>  _cameraRig;

/// @brief Field _floorAnchors, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__floorAnchors, put=__cordl_internal_set__floorAnchors)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _floorAnchors;

/// @brief Field _hasLoadedScene, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasLoadedScene, put=__cordl_internal_set__hasLoadedScene)) bool  _hasLoadedScene;

/// @brief Field _initialAnchorParent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__initialAnchorParent, put=__cordl_internal_set__initialAnchorParent)) ::UnityW<::UnityEngine::Transform>  _initialAnchorParent;

/// @brief Field _onAnchorsFetchCompleted, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__onAnchorsFetchCompleted, put=__cordl_internal_set__onAnchorsFetchCompleted)) ::System::Action_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>*  _onAnchorsFetchCompleted;

/// @brief Field _onFloorAnchorLocalizationCompleted, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__onFloorAnchorLocalizationCompleted, put=__cordl_internal_set__onFloorAnchorLocalizationCompleted)) ::System::Action_2<bool,::GlobalNamespace::OVRAnchor>*  _onFloorAnchorLocalizationCompleted;

/// @brief Field _onFloorAnchorsFetchCompleted, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__onFloorAnchorsFetchCompleted, put=__cordl_internal_set__onFloorAnchorsFetchCompleted)) ::System::Action_1<bool>*  _onFloorAnchorsFetchCompleted;

/// @brief Field _pendingLocatable, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__pendingLocatable, put=__cordl_internal_set__pendingLocatable)) ::System::Collections::Generic::HashSet_1<::System::Guid>*  _pendingLocatable;

/// @brief Field _roomAndFloorPairs, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__roomAndFloorPairs, put=__cordl_internal_set__roomAndFloorPairs)) ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRAnchor>*  _roomAndFloorPairs;

/// @brief Field _roomCounter, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__roomCounter, put=__cordl_internal_set__roomCounter)) int32_t  _roomCounter;

/// @brief Field _roomLayoutAnchors, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__roomLayoutAnchors, put=__cordl_internal_set__roomLayoutAnchors)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _roomLayoutAnchors;

/// @brief Field _sceneAnchorUpdateIndex, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__sceneAnchorUpdateIndex, put=__cordl_internal_set__sceneAnchorUpdateIndex)) int32_t  _sceneAnchorUpdateIndex;

/// @brief Field _sceneCaptureRequestId, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__sceneCaptureRequestId, put=__cordl_internal_set__sceneCaptureRequestId)) uint64_t  _sceneCaptureRequestId;

/// @brief Method Awake, addr 0x2910350, size 0x20c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckClassificationsInRooms, addr 0x2912bec, size 0x4a4, virtual false, abstract: false, final false
static inline void CheckClassificationsInRooms(bool  success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  rooms, ::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications, ::GlobalNamespace::OVRTask_1<bool>  task) ;

/// @brief Method CheckIfAnchorsContainClassifications, addr 0x2913098, size 0x4d4, virtual false, abstract: false, final false
static inline void CheckIfAnchorsContainClassifications(bool  success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  roomAnchors, ::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications, ::GlobalNamespace::OVRTask_1<bool>  task) ;

/// @brief Method CheckIfClassificationsAreValid, addr 0x2912444, size 0x408, virtual false, abstract: false, final false
static inline void CheckIfClassificationsAreValid(::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications) ;

/// @brief Method CollectLabelsFromAnchors, addr 0x291356c, size 0x180, virtual false, abstract: false, final false
static inline void CollectLabelsFromAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors, ::System::Collections::Generic::List_1<::StringW>*  labels) ;

/// @brief Method DestroyExistingAnchors, addr 0x2910880, size 0x1e0, virtual false, abstract: false, final false
inline void DestroyExistingAnchors() ;

/// @brief Method DoesRoomSetupExist, addr 0x291284c, size 0x26c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<bool> DoesRoomSetupExist(::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications) ;

/// @brief Method GetRoomLayoutInformation, addr 0x291218c, size 0x144, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation* GetRoomLayoutInformation() ;

/// @brief Method GetUuidsToQuery, addr 0x2912ac0, size 0x12c, virtual false, abstract: false, final false
static inline void GetUuidsToQuery(::GlobalNamespace::OVRAnchor  anchor, ::System::Collections::Generic::HashSet_1<::System::Guid>*  uuidsToQuery) ;

/// @brief Method InstantiateActiveRooms, addr 0x2910be8, size 0x4c0, virtual false, abstract: false, final false
inline void InstantiateActiveRooms(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  roomLayoutAnchors) ;

/// @brief Method InstantiateSceneAnchor, addr 0x2914444, size 0x55c, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::OVRSceneAnchor> InstantiateSceneAnchor(::GlobalNamespace::OVRAnchor  anchor, ::GlobalNamespace::OVRSceneAnchor*  prefab) ;

/// @brief Method InstantiateSceneRooms, addr 0x29110a8, size 0x424, virtual false, abstract: false, final false
inline void InstantiateSceneRooms(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  roomLayoutAnchors) ;

/// @brief Method LoadSceneModel, addr 0x2910748, size 0x138, virtual false, abstract: false, final false
inline bool LoadSceneModel() ;

/// @brief Method LocateUserInRoom, addr 0x29118dc, size 0x47c, virtual false, abstract: false, final false
inline void LocateUserInRoom(::GlobalNamespace::OVRAnchor  anchor) ;

static inline ::GlobalNamespace::OVRSceneManager* New_ctor() ;

/// @brief Method OVRManager_SceneCaptureComplete, addr 0x291432c, size 0x118, virtual false, abstract: false, final false
inline void OVRManager_SceneCaptureComplete(uint64_t  requestId, bool  result) ;

/// @brief Method OnAnchorsFetchCompleted, addr 0x2910a60, size 0x188, virtual false, abstract: false, final false
inline void OnAnchorsFetchCompleted(bool  success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  roomLayoutAnchors) ;

/// @brief Method OnApplicationPause, addr 0x2910618, size 0xa8, virtual false, abstract: false, final false
inline void OnApplicationPause(bool  isPaused) ;

/// @brief Method OnDisable, addr 0x2914104, size 0x228, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x2913e80, size 0x284, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnFloorAnchorLocalizationCompleted, addr 0x2911d58, size 0xf8, virtual false, abstract: false, final false
inline void OnFloorAnchorLocalizationCompleted(bool  success, ::GlobalNamespace::OVRAnchor  anchor) ;

/// @brief Method OnFloorAnchorsFetchCompleted, addr 0x2911588, size 0x354, virtual false, abstract: false, final false
inline void OnFloorAnchorsFetchCompleted(bool  success) ;

/// @brief Method OnSceneRoomLoadCompleted, addr 0x29120c4, size 0xc8, virtual false, abstract: false, final false
inline void OnSceneRoomLoadCompleted() ;

/// @brief Method OnTrackingSpaceChanged, addr 0x29136ec, size 0x4, virtual false, abstract: false, final false
static inline void OnTrackingSpaceChanged(::UnityEngine::Transform*  trackingSpace) ;

/// @brief Method PointInPolygon2D, addr 0x2911e50, size 0xa8, virtual false, abstract: false, final false
static inline bool PointInPolygon2D(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  boundaryVertices, ::UnityEngine::Vector2  target) ;

/// @brief Method QueryForExistingAnchorsTransform, addr 0x29106c0, size 0x88, virtual false, abstract: false, final false
inline void QueryForExistingAnchorsTransform() ;

/// @brief Method RequestSceneCapture, addr 0x29122d0, size 0x48, virtual false, abstract: false, final false
inline bool RequestSceneCapture() ;

/// @brief Method RequestSceneCapture, addr 0x2912318, size 0x98, virtual false, abstract: false, final false
inline bool RequestSceneCapture(::StringW  requestString) ;

/// @brief Method RequestSceneCapture, addr 0x29123b0, size 0x94, virtual false, abstract: false, final false
inline bool RequestSceneCapture(::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications) ;

/// @brief Method Update, addr 0x2913930, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAllSceneAnchors, addr 0x29136f0, size 0x240, virtual false, abstract: false, final false
static inline void UpdateAllSceneAnchors() ;

/// @brief Method UpdateSomeSceneAnchors, addr 0x2913934, size 0x130, virtual false, abstract: false, final false
inline void UpdateSomeSceneAnchors() ;

constexpr bool const& __cordl_internal_get_ActiveRoomsOnly() const;

constexpr bool& __cordl_internal_get_ActiveRoomsOnly() ;

constexpr int32_t const& __cordl_internal_get_MaxSceneAnchorUpdatesPerFrame() const;

constexpr int32_t& __cordl_internal_get_MaxSceneAnchorUpdatesPerFrame() ;

constexpr ::System::Action* const& __cordl_internal_get_NewSceneModelAvailable() const;

constexpr ::System::Action*& __cordl_internal_get_NewSceneModelAvailable() ;

constexpr ::System::Action* const& __cordl_internal_get_NoSceneModelToLoad() const;

constexpr ::System::Action*& __cordl_internal_get_NoSceneModelToLoad() ;

constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& __cordl_internal_get_PlanePrefab() const;

constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& __cordl_internal_get_PlanePrefab() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>* const& __cordl_internal_get_PrefabOverrides() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*& __cordl_internal_get_PrefabOverrides() ;

constexpr ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation* const& __cordl_internal_get_RoomLayout() const;

constexpr ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*& __cordl_internal_get_RoomLayout() ;

constexpr ::System::Action* const& __cordl_internal_get_SceneCaptureReturnedWithoutError() const;

constexpr ::System::Action*& __cordl_internal_get_SceneCaptureReturnedWithoutError() ;

constexpr ::System::Action* const& __cordl_internal_get_SceneModelLoadedSuccessfully() const;

constexpr ::System::Action*& __cordl_internal_get_SceneModelLoadedSuccessfully() ;

constexpr ::System::Action* const& __cordl_internal_get_UnexpectedErrorWithSceneCapture() const;

constexpr ::System::Action*& __cordl_internal_get_UnexpectedErrorWithSceneCapture() ;

constexpr bool const& __cordl_internal_get_VerboseLogging() const;

constexpr bool& __cordl_internal_get_VerboseLogging() ;

constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& __cordl_internal_get_VolumePrefab() const;

constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& __cordl_internal_get_VolumePrefab() ;

constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get__cameraRig() const;

constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get__cameraRig() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* const& __cordl_internal_get__floorAnchors() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*& __cordl_internal_get__floorAnchors() ;

constexpr bool const& __cordl_internal_get__hasLoadedScene() const;

constexpr bool& __cordl_internal_get__hasLoadedScene() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__initialAnchorParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__initialAnchorParent() ;

constexpr ::System::Action_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>* const& __cordl_internal_get__onAnchorsFetchCompleted() const;

constexpr ::System::Action_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>*& __cordl_internal_get__onAnchorsFetchCompleted() ;

constexpr ::System::Action_2<bool,::GlobalNamespace::OVRAnchor>* const& __cordl_internal_get__onFloorAnchorLocalizationCompleted() const;

constexpr ::System::Action_2<bool,::GlobalNamespace::OVRAnchor>*& __cordl_internal_get__onFloorAnchorLocalizationCompleted() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get__onFloorAnchorsFetchCompleted() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get__onFloorAnchorsFetchCompleted() ;

constexpr ::System::Collections::Generic::HashSet_1<::System::Guid>* const& __cordl_internal_get__pendingLocatable() const;

constexpr ::System::Collections::Generic::HashSet_1<::System::Guid>*& __cordl_internal_get__pendingLocatable() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRAnchor>* const& __cordl_internal_get__roomAndFloorPairs() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRAnchor>*& __cordl_internal_get__roomAndFloorPairs() ;

constexpr int32_t const& __cordl_internal_get__roomCounter() const;

constexpr int32_t& __cordl_internal_get__roomCounter() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* const& __cordl_internal_get__roomLayoutAnchors() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*& __cordl_internal_get__roomLayoutAnchors() ;

constexpr int32_t const& __cordl_internal_get__sceneAnchorUpdateIndex() const;

constexpr int32_t& __cordl_internal_get__sceneAnchorUpdateIndex() ;

constexpr uint64_t const& __cordl_internal_get__sceneCaptureRequestId() const;

constexpr uint64_t& __cordl_internal_get__sceneCaptureRequestId() ;

constexpr void __cordl_internal_set_ActiveRoomsOnly(bool  value) ;

constexpr void __cordl_internal_set_MaxSceneAnchorUpdatesPerFrame(int32_t  value) ;

constexpr void __cordl_internal_set_NewSceneModelAvailable(::System::Action*  value) ;

constexpr void __cordl_internal_set_NoSceneModelToLoad(::System::Action*  value) ;

constexpr void __cordl_internal_set_PlanePrefab(::UnityW<::GlobalNamespace::OVRSceneAnchor>  value) ;

constexpr void __cordl_internal_set_PrefabOverrides(::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*  value) ;

constexpr void __cordl_internal_set_RoomLayout(::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*  value) ;

constexpr void __cordl_internal_set_SceneCaptureReturnedWithoutError(::System::Action*  value) ;

constexpr void __cordl_internal_set_SceneModelLoadedSuccessfully(::System::Action*  value) ;

constexpr void __cordl_internal_set_UnexpectedErrorWithSceneCapture(::System::Action*  value) ;

constexpr void __cordl_internal_set_VerboseLogging(bool  value) ;

constexpr void __cordl_internal_set_VolumePrefab(::UnityW<::GlobalNamespace::OVRSceneAnchor>  value) ;

constexpr void __cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig>  value) ;

constexpr void __cordl_internal_set__floorAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  value) ;

constexpr void __cordl_internal_set__hasLoadedScene(bool  value) ;

constexpr void __cordl_internal_set__initialAnchorParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__onAnchorsFetchCompleted(::System::Action_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>*  value) ;

constexpr void __cordl_internal_set__onFloorAnchorLocalizationCompleted(::System::Action_2<bool,::GlobalNamespace::OVRAnchor>*  value) ;

constexpr void __cordl_internal_set__onFloorAnchorsFetchCompleted(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set__pendingLocatable(::System::Collections::Generic::HashSet_1<::System::Guid>*  value) ;

constexpr void __cordl_internal_set__roomAndFloorPairs(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRAnchor>*  value) ;

constexpr void __cordl_internal_set__roomCounter(int32_t  value) ;

constexpr void __cordl_internal_set__roomLayoutAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  value) ;

constexpr void __cordl_internal_set__sceneAnchorUpdateIndex(int32_t  value) ;

constexpr void __cordl_internal_set__sceneCaptureRequestId(uint64_t  value) ;

/// @brief Method .ctor, addr 0x29149a0, size 0x144, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InitialAnchorParent, addr 0x29102d8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_InitialAnchorParent() ;

/// @brief Method get_Verbose, addr 0x29102e8, size 0x68, virtual false, abstract: false, final false
inline ::System::Nullable_1<::GlobalNamespace::OVRSceneManager_LogForwarder> get_Verbose() ;

/// @brief Method set_InitialAnchorParent, addr 0x29102e0, size 0x8, virtual false, abstract: false, final false
inline void set_InitialAnchorParent(::UnityEngine::Transform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSceneManager(OVRSceneManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSceneManager(OVRSceneManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6516};

/// @brief Field PlanePrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRSceneAnchor>  ___PlanePrefab;

/// @brief Field VolumePrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRSceneAnchor>  ___VolumePrefab;

/// @brief Field PrefabOverrides, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*  ___PrefabOverrides;

/// @brief Field ActiveRoomsOnly, offset: 0x38, size: 0x1, def value: None
 bool  ___ActiveRoomsOnly;

/// @brief Field VerboseLogging, offset: 0x39, size: 0x1, def value: None
 bool  ___VerboseLogging;

/// @brief Field MaxSceneAnchorUpdatesPerFrame, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___MaxSceneAnchorUpdatesPerFrame;

/// @brief Field _initialAnchorParent, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____initialAnchorParent;

/// @brief Field SceneModelLoadedSuccessfully, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  ___SceneModelLoadedSuccessfully;

/// @brief Field NoSceneModelToLoad, offset: 0x50, size: 0x8, def value: None
 ::System::Action*  ___NoSceneModelToLoad;

/// @brief Field SceneCaptureReturnedWithoutError, offset: 0x58, size: 0x8, def value: None
 ::System::Action*  ___SceneCaptureReturnedWithoutError;

/// @brief Field UnexpectedErrorWithSceneCapture, offset: 0x60, size: 0x8, def value: None
 ::System::Action*  ___UnexpectedErrorWithSceneCapture;

/// @brief Field NewSceneModelAvailable, offset: 0x68, size: 0x8, def value: None
 ::System::Action*  ___NewSceneModelAvailable;

/// @brief Field RoomLayout, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*  ___RoomLayout;

/// @brief Field _sceneCaptureRequestId, offset: 0x78, size: 0x8, def value: None
 uint64_t  ____sceneCaptureRequestId;

/// @brief Field _cameraRig, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRCameraRig>  ____cameraRig;

/// @brief Field _sceneAnchorUpdateIndex, offset: 0x88, size: 0x4, def value: None
 int32_t  ____sceneAnchorUpdateIndex;

/// @brief Field _roomCounter, offset: 0x8c, size: 0x4, def value: None
 int32_t  ____roomCounter;

/// @brief Field _onAnchorsFetchCompleted, offset: 0x90, size: 0x8, def value: None
 ::System::Action_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>*  ____onAnchorsFetchCompleted;

/// @brief Field _hasLoadedScene, offset: 0x98, size: 0x1, def value: None
 bool  ____hasLoadedScene;

/// @brief Field _onFloorAnchorsFetchCompleted, offset: 0xa0, size: 0x8, def value: None
 ::System::Action_1<bool>*  ____onFloorAnchorsFetchCompleted;

/// @brief Field _onFloorAnchorLocalizationCompleted, offset: 0xa8, size: 0x8, def value: None
 ::System::Action_2<bool,::GlobalNamespace::OVRAnchor>*  ____onFloorAnchorLocalizationCompleted;

/// @brief Field _floorAnchors, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  ____floorAnchors;

/// @brief Field _pendingLocatable, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::System::Guid>*  ____pendingLocatable;

/// @brief Field _roomAndFloorPairs, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRAnchor>*  ____roomAndFloorPairs;

/// @brief Field _roomLayoutAnchors, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  ____roomLayoutAnchors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___PlanePrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___VolumePrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___PrefabOverrides) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___ActiveRoomsOnly) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___VerboseLogging) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___MaxSceneAnchorUpdatesPerFrame) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____initialAnchorParent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___SceneModelLoadedSuccessfully) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___NoSceneModelToLoad) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___SceneCaptureReturnedWithoutError) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___UnexpectedErrorWithSceneCapture) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___NewSceneModelAvailable) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___RoomLayout) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____sceneCaptureRequestId) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____cameraRig) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____sceneAnchorUpdateIndex) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____roomCounter) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____onAnchorsFetchCompleted) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____hasLoadedScene) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____onFloorAnchorsFetchCompleted) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____onFloorAnchorLocalizationCompleted) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____floorAnchors) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____pendingLocatable) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____roomAndFloorPairs) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____roomLayoutAnchors) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager, 0xd0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSceneManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager*, "", "OVRSceneManager");
NEED_NO_BOX(::GlobalNamespace::OVRSceneManager_Classification);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager_Classification*, "", "OVRSceneManager/Classification");
NEED_NO_BOX(::GlobalNamespace::OVRSceneManager_Development);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager_Development*, "", "OVRSceneManager/Development");
NEED_NO_BOX(::GlobalNamespace::OVRSceneManager_RoomLayoutInformation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*, "", "OVRSceneManager/RoomLayoutInformation");
NEED_NO_BOX(::GlobalNamespace::OVRSceneManager___c__DisplayClass48_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager___c__DisplayClass48_0*, "", "OVRSceneManager/<>c__DisplayClass48_0");
NEED_NO_BOX(::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0*, "", "OVRSceneManager/<>c__DisplayClass51_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager_LogForwarder, "", "OVRSceneManager/LogForwarder");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__35, "", "OVRSceneManager/<OnApplicationPause>d__35");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__36, "", "OVRSceneManager/<QueryForExistingAnchorsTransform>d__36");
