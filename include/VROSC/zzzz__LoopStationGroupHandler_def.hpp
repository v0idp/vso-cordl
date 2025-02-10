#pragma once
// IWYU pragma private; include "VROSC/LoopStationGroupHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LoopStationGroupHandler)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class GroupArranger;
}
namespace VROSC {
struct LoopStationGroup_SetupVariables;
}
namespace VROSC {
class LoopStationGroup;
}
namespace VROSC {
class LoopStationLoopHandler;
}
namespace VROSC {
class LoopStation;
}
// Forward declare root types
namespace VROSC {
class LoopStationGroupHandler;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationGroupHandler);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationGroupHandler
class CORDL_TYPE LoopStationGroupHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Groups)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*  Groups;

/// @brief Field OnGroupCreated, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGroupCreated, put=__cordl_internal_set_OnGroupCreated)) ::System::Action_1<::UnityW<::VROSC::LoopStationGroup>>*  OnGroupCreated;

/// @brief Field OnGroupRemoved, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGroupRemoved, put=__cordl_internal_set_OnGroupRemoved)) ::System::Action_1<::UnityW<::VROSC::LoopStationGroup>>*  OnGroupRemoved;

/// @brief Field _arranger, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__arranger, put=__cordl_internal_set__arranger)) ::UnityW<::VROSC::GroupArranger>  _arranger;

/// @brief Field _autoSorted, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__autoSorted, put=__cordl_internal_set__autoSorted)) bool  _autoSorted;

/// @brief Field _groupParent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__groupParent, put=__cordl_internal_set__groupParent)) ::UnityW<::UnityEngine::Transform>  _groupParent;

/// @brief Field _groupPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__groupPrefab, put=__cordl_internal_set__groupPrefab)) ::UnityW<::VROSC::LoopStationGroup>  _groupPrefab;

/// @brief Field _groups, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__groups, put=__cordl_internal_set__groups)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*  _groups;

/// @brief Field _loopHandler, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopHandler, put=__cordl_internal_set__loopHandler)) ::UnityW<::VROSC::LoopStationLoopHandler>  _loopHandler;

/// @brief Field _loopStation, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopStation, put=__cordl_internal_set__loopStation)) ::UnityW<::VROSC::LoopStation>  _loopStation;

/// @brief Field _needsSorting, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__needsSorting, put=__cordl_internal_set__needsSorting)) bool  _needsSorting;

/// @brief Method CreateGroup, addr 0x18b16f8, size 0x2a8, virtual true, abstract: false, final false
inline ::UnityW<::VROSC::LoopStationGroup> CreateGroup(::VROSC::LoopStationGroup_SetupVariables  vars) ;

/// @brief Method GetGroupByID, addr 0x18b28dc, size 0x198, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopStationGroup> GetGroupByID(::StringW  groupID) ;

/// @brief Method LateUpdate, addr 0x18b2db4, size 0x1c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::VROSC::LoopStationGroupHandler* New_ctor() ;

/// @brief Method OnLoopCountChanged, addr 0x18b2da8, size 0xc, virtual false, abstract: false, final false
inline void OnLoopCountChanged() ;

/// @brief Method RemoveAllGroups, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void RemoveAllGroups() ;

/// @brief Method RemoveGroup, addr 0x18b19e0, size 0x218, virtual true, abstract: false, final false
inline void RemoveGroup(::VROSC::LoopStationGroup*  group, bool  fromReset) ;

/// @brief Method Setup, addr 0x18b09d0, size 0x4c, virtual true, abstract: false, final false
inline void Setup(::VROSC::LoopStation*  loopStation, ::VROSC::LoopStationLoopHandler*  loopHandler) ;

/// @brief Method SortGroups, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SortGroups() ;

constexpr ::System::Action_1<::UnityW<::VROSC::LoopStationGroup>>* const& __cordl_internal_get_OnGroupCreated() const;

constexpr ::System::Action_1<::UnityW<::VROSC::LoopStationGroup>>*& __cordl_internal_get_OnGroupCreated() ;

constexpr ::System::Action_1<::UnityW<::VROSC::LoopStationGroup>>* const& __cordl_internal_get_OnGroupRemoved() const;

constexpr ::System::Action_1<::UnityW<::VROSC::LoopStationGroup>>*& __cordl_internal_get_OnGroupRemoved() ;

constexpr ::UnityW<::VROSC::GroupArranger> const& __cordl_internal_get__arranger() const;

constexpr ::UnityW<::VROSC::GroupArranger>& __cordl_internal_get__arranger() ;

constexpr bool const& __cordl_internal_get__autoSorted() const;

constexpr bool& __cordl_internal_get__autoSorted() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__groupParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__groupParent() ;

constexpr ::UnityW<::VROSC::LoopStationGroup> const& __cordl_internal_get__groupPrefab() const;

constexpr ::UnityW<::VROSC::LoopStationGroup>& __cordl_internal_get__groupPrefab() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>* const& __cordl_internal_get__groups() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*& __cordl_internal_get__groups() ;

constexpr ::UnityW<::VROSC::LoopStationLoopHandler> const& __cordl_internal_get__loopHandler() const;

constexpr ::UnityW<::VROSC::LoopStationLoopHandler>& __cordl_internal_get__loopHandler() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__loopStation() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__loopStation() ;

constexpr bool const& __cordl_internal_get__needsSorting() const;

constexpr bool& __cordl_internal_get__needsSorting() ;

constexpr void __cordl_internal_set_OnGroupCreated(::System::Action_1<::UnityW<::VROSC::LoopStationGroup>>*  value) ;

constexpr void __cordl_internal_set_OnGroupRemoved(::System::Action_1<::UnityW<::VROSC::LoopStationGroup>>*  value) ;

constexpr void __cordl_internal_set__arranger(::UnityW<::VROSC::GroupArranger>  value) ;

constexpr void __cordl_internal_set__autoSorted(bool  value) ;

constexpr void __cordl_internal_set__groupParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__groupPrefab(::UnityW<::VROSC::LoopStationGroup>  value) ;

constexpr void __cordl_internal_set__groups(::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*  value) ;

constexpr void __cordl_internal_set__loopHandler(::UnityW<::VROSC::LoopStationLoopHandler>  value) ;

constexpr void __cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value) ;

constexpr void __cordl_internal_set__needsSorting(bool  value) ;

/// @brief Method .ctor, addr 0x18b2188, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Groups, addr 0x18b2da0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>* get_Groups() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationGroupHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationGroupHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationGroupHandler(LoopStationGroupHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationGroupHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationGroupHandler(LoopStationGroupHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{717};

/// @brief Field _groups, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*  ____groups;

/// @brief Field _groupPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationGroup>  ____groupPrefab;

/// @brief Field _groupParent, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____groupParent;

/// @brief Field _arranger, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::GroupArranger>  ____arranger;

/// @brief Field _autoSorted, offset: 0x40, size: 0x1, def value: None
 bool  ____autoSorted;

/// @brief Field _needsSorting, offset: 0x41, size: 0x1, def value: None
 bool  ____needsSorting;

/// @brief Field _loopStation, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____loopStation;

/// @brief Field _loopHandler, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationLoopHandler>  ____loopHandler;

/// @brief Field OnGroupCreated, offset: 0x58, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::LoopStationGroup>>*  ___OnGroupCreated;

/// @brief Field OnGroupRemoved, offset: 0x60, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::LoopStationGroup>>*  ___OnGroupRemoved;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationGroupHandler, ____groups) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupHandler, ____groupPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupHandler, ____groupParent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupHandler, ____arranger) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupHandler, ____autoSorted) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupHandler, ____needsSorting) == 0x41, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupHandler, ____loopStation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupHandler, ____loopHandler) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupHandler, ___OnGroupCreated) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupHandler, ___OnGroupRemoved) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationGroupHandler, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationGroupHandler);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationGroupHandler*, "VROSC", "LoopStationGroupHandler");
