#pragma once
// IWYU pragma private; include "VROSC/LoopStationGroupCore.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoopStationGroupCore)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class LoopStationBaseGroupHandler;
}
namespace VROSC {
class LoopStationDataController;
}
namespace VROSC {
class LoopStationGroup;
}
namespace VROSC {
class LoopStationLoopHandler;
}
namespace VROSC {
class LoopStationUserGroupHandler;
}
namespace VROSC {
class LoopStation;
}
// Forward declare root types
namespace VROSC {
class LoopStationGroupCore;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationGroupCore);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationGroupCore
class CORDL_TYPE LoopStationGroupCore : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_BaseGroups)) ::UnityW<::VROSC::LoopStationBaseGroupHandler>  BaseGroups;

 __declspec(property(get=get_Groups, put=set_Groups)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*  Groups;

/// @brief Field OnGroupCountChanged, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGroupCountChanged, put=__cordl_internal_set_OnGroupCountChanged)) ::System::Action_1<int32_t>*  OnGroupCountChanged;

/// @brief Field OnGroupCreated, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGroupCreated, put=__cordl_internal_set_OnGroupCreated)) ::System::Action_1<::UnityW<::VROSC::LoopStationGroup>>*  OnGroupCreated;

/// @brief Field OnGroupRemoved, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGroupRemoved, put=__cordl_internal_set_OnGroupRemoved)) ::System::Action_1<::UnityW<::VROSC::LoopStationGroup>>*  OnGroupRemoved;

 __declspec(property(get=get_RecordingTarget)) ::UnityW<::VROSC::LoopStationGroup>  RecordingTarget;

 __declspec(property(get=get_Ungrouped)) ::UnityW<::VROSC::LoopStationGroup>  Ungrouped;

 __declspec(property(get=get_UserGroups)) ::UnityW<::VROSC::LoopStationUserGroupHandler>  UserGroups;

/// @brief Field <Groups>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Groups_k__BackingField, put=__cordl_internal_set__Groups_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*  _Groups_k__BackingField;

/// @brief Field _baseGroups, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseGroups, put=__cordl_internal_set__baseGroups)) ::UnityW<::VROSC::LoopStationBaseGroupHandler>  _baseGroups;

/// @brief Field _recordingTarget, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordingTarget, put=__cordl_internal_set__recordingTarget)) ::UnityW<::VROSC::LoopStationGroup>  _recordingTarget;

/// @brief Field _userGroups, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__userGroups, put=__cordl_internal_set__userGroups)) ::UnityW<::VROSC::LoopStationUserGroupHandler>  _userGroups;

/// @brief Method AddToBaseGroup, addr 0x18b27a8, size 0x18, virtual false, abstract: false, final false
inline void AddToBaseGroup(::VROSC::LoopPlayer*  newPlayer) ;

/// @brief Method AllLoopsLoaded, addr 0x18af29c, size 0x16c, virtual false, abstract: false, final false
inline void AllLoopsLoaded() ;

/// @brief Method Awake, addr 0x18b22cc, size 0x24c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateGroups, addr 0x18afca4, size 0x310, virtual false, abstract: false, final false
inline void CreateGroups(::VROSC::LoopStationDataController*  data) ;

/// @brief Method GetGroupByID, addr 0x18af6e0, size 0xe8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopStationGroup> GetGroupByID(::StringW  groupID, bool  defaultToBaseGroup) ;

/// @brief Method GetRecordingTarget, addr 0x18b2208, size 0x88, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopStationGroup> GetRecordingTarget() ;

/// @brief Method GroupCountChanged, addr 0x18b2b1c, size 0x88, virtual false, abstract: false, final false
inline void GroupCountChanged() ;

/// @brief Method GroupCreated, addr 0x18b2ba4, size 0xec, virtual false, abstract: false, final false
inline void GroupCreated(::VROSC::LoopStationGroup*  group) ;

/// @brief Method GroupRemoved, addr 0x18b2a74, size 0xa8, virtual false, abstract: false, final false
inline void GroupRemoved(::VROSC::LoopStationGroup*  group) ;

static inline ::VROSC::LoopStationGroupCore* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18b2518, size 0x24c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnLoopAmountChanged, addr 0x18b2cf0, size 0x34, virtual false, abstract: false, final false
inline void OnLoopAmountChanged(int32_t  loopAmount) ;

/// @brief Method RemoveAllGroups, addr 0x18ae734, size 0x38, virtual false, abstract: false, final false
inline void RemoveAllGroups() ;

/// @brief Method SetRecordingTarget, addr 0x18b2764, size 0x44, virtual false, abstract: false, final false
inline void SetRecordingTarget(::VROSC::LoopStationGroup*  recordingTarget) ;

/// @brief Method Setup, addr 0x18ae0e4, size 0x154, virtual false, abstract: false, final false
inline void Setup(::VROSC::LoopStation*  loopStation, ::VROSC::LoopStationLoopHandler*  loopHandler) ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnGroupCountChanged() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnGroupCountChanged() ;

constexpr ::System::Action_1<::UnityW<::VROSC::LoopStationGroup>>* const& __cordl_internal_get_OnGroupCreated() const;

constexpr ::System::Action_1<::UnityW<::VROSC::LoopStationGroup>>*& __cordl_internal_get_OnGroupCreated() ;

constexpr ::System::Action_1<::UnityW<::VROSC::LoopStationGroup>>* const& __cordl_internal_get_OnGroupRemoved() const;

constexpr ::System::Action_1<::UnityW<::VROSC::LoopStationGroup>>*& __cordl_internal_get_OnGroupRemoved() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>* const& __cordl_internal_get__Groups_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*& __cordl_internal_get__Groups_k__BackingField() ;

constexpr ::UnityW<::VROSC::LoopStationBaseGroupHandler> const& __cordl_internal_get__baseGroups() const;

constexpr ::UnityW<::VROSC::LoopStationBaseGroupHandler>& __cordl_internal_get__baseGroups() ;

constexpr ::UnityW<::VROSC::LoopStationGroup> const& __cordl_internal_get__recordingTarget() const;

constexpr ::UnityW<::VROSC::LoopStationGroup>& __cordl_internal_get__recordingTarget() ;

constexpr ::UnityW<::VROSC::LoopStationUserGroupHandler> const& __cordl_internal_get__userGroups() const;

constexpr ::UnityW<::VROSC::LoopStationUserGroupHandler>& __cordl_internal_get__userGroups() ;

constexpr void __cordl_internal_set_OnGroupCountChanged(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_OnGroupCreated(::System::Action_1<::UnityW<::VROSC::LoopStationGroup>>*  value) ;

constexpr void __cordl_internal_set_OnGroupRemoved(::System::Action_1<::UnityW<::VROSC::LoopStationGroup>>*  value) ;

constexpr void __cordl_internal_set__Groups_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*  value) ;

constexpr void __cordl_internal_set__baseGroups(::UnityW<::VROSC::LoopStationBaseGroupHandler>  value) ;

constexpr void __cordl_internal_set__recordingTarget(::UnityW<::VROSC::LoopStationGroup>  value) ;

constexpr void __cordl_internal_set__userGroups(::UnityW<::VROSC::LoopStationUserGroupHandler>  value) ;

/// @brief Method .ctor, addr 0x18b2d24, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BaseGroups, addr 0x18b22bc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopStationBaseGroupHandler> get_BaseGroups() ;

/// @brief Method get_Groups, addr 0x18b2290, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>* get_Groups() ;

/// @brief Method get_RecordingTarget, addr 0x18b2204, size 0x4, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopStationGroup> get_RecordingTarget() ;

/// @brief Method get_Ungrouped, addr 0x18b22a0, size 0x1c, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopStationGroup> get_Ungrouped() ;

/// @brief Method get_UserGroups, addr 0x18b22c4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopStationUserGroupHandler> get_UserGroups() ;

/// @brief Method set_Groups, addr 0x18b2298, size 0x8, virtual false, abstract: false, final false
inline void set_Groups(::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationGroupCore() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationGroupCore", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationGroupCore(LoopStationGroupCore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationGroupCore", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationGroupCore(LoopStationGroupCore const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{716};

/// @brief Field <Groups>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*  ____Groups_k__BackingField;

/// @brief Field _baseGroups, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationBaseGroupHandler>  ____baseGroups;

/// @brief Field _userGroups, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationUserGroupHandler>  ____userGroups;

/// @brief Field _recordingTarget, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationGroup>  ____recordingTarget;

/// @brief Field OnGroupCreated, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::LoopStationGroup>>*  ___OnGroupCreated;

/// @brief Field OnGroupRemoved, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::LoopStationGroup>>*  ___OnGroupRemoved;

/// @brief Field OnGroupCountChanged, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnGroupCountChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationGroupCore, ____Groups_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupCore, ____baseGroups) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupCore, ____userGroups) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupCore, ____recordingTarget) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupCore, ___OnGroupCreated) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupCore, ___OnGroupRemoved) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupCore, ___OnGroupCountChanged) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationGroupCore, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationGroupCore);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationGroupCore*, "VROSC", "LoopStationGroupCore");
