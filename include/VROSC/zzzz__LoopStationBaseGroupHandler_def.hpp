#pragma once
// IWYU pragma private; include "VROSC/LoopStationBaseGroupHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__LoopStationGroupHandler_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LoopStationBaseGroupHandler)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class RectTransform;
}
namespace VROSC {
class LoopPlayer;
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
class LoopStationBaseGroupHandler;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationBaseGroupHandler);
// Dependencies VROSC.LoopStationGroupHandler
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationBaseGroupHandler
class CORDL_TYPE LoopStationBaseGroupHandler : public ::VROSC::LoopStationGroupHandler {
public:
// Declarations
 __declspec(property(get=get_BaseGroup, put=set_BaseGroup)) ::UnityW<::VROSC::LoopStationGroup>  BaseGroup;

/// @brief Field <BaseGroup>k__BackingField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__BaseGroup_k__BackingField, put=__cordl_internal_set__BaseGroup_k__BackingField)) ::UnityW<::VROSC::LoopStationGroup>  _BaseGroup_k__BackingField;

/// @brief Field _arrangedGroups, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__arrangedGroups, put=__cordl_internal_set__arrangedGroups)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*  _arrangedGroups;

/// @brief Field _autoGroupHeader, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__autoGroupHeader, put=__cordl_internal_set__autoGroupHeader)) ::UnityW<::UnityEngine::RectTransform>  _autoGroupHeader;

/// @brief Method AddToBaseGroup, addr 0x18b0c54, size 0x1c, virtual false, abstract: false, final false
inline void AddToBaseGroup(::VROSC::LoopPlayer*  newPlayer) ;

/// @brief Method AllGroupsLoaded, addr 0x18b1bf8, size 0xfc, virtual false, abstract: false, final false
inline void AllGroupsLoaded() ;

/// @brief Method AutoSort, addr 0x18b0ea4, size 0x1b8, virtual false, abstract: false, final false
inline void AutoSort(::VROSC::LoopPlayer*  newPlayer) ;

/// @brief Method CreateGroupFromLoad, addr 0x18b0d08, size 0x94, virtual false, abstract: false, final false
inline void CreateGroupFromLoad(::VROSC::LoopStationGroup_SetupVariables  vars) ;

/// @brief Method CreateNewInstrumentGroup, addr 0x18b15a4, size 0x130, virtual false, abstract: false, final false
inline void CreateNewInstrumentGroup(::StringW  instrument, ::ArrayW<::VROSC::LoopPlayer*,::Array<::VROSC::LoopPlayer*>*>  matchingLoops, ::VROSC::LoopPlayer*  newPlayer) ;

/// @brief Method FindGroupByInstrument, addr 0x18b105c, size 0x168, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopStationGroup> FindGroupByInstrument(::StringW  instrument) ;

/// @brief Method FindMatchingLoopsInBaseGroup, addr 0x18b12fc, size 0x2a8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::VROSC::LoopPlayer>,::Array<::UnityW<::VROSC::LoopPlayer>>*> FindMatchingLoopsInBaseGroup(::VROSC::LoopPlayer*  newPlayer, ::StringW  instrument) ;

static inline ::VROSC::LoopStationBaseGroupHandler* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18b0b44, size 0x110, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RemoveAllGroups, addr 0x18b0dc0, size 0xe4, virtual true, abstract: false, final false
inline void RemoveAllGroups() ;

/// @brief Method RemoveGroup, addr 0x18b19a0, size 0x40, virtual true, abstract: false, final false
inline void RemoveGroup(::VROSC::LoopStationGroup*  group, bool  fromReset) ;

/// @brief Method Setup, addr 0x18b0808, size 0x1c8, virtual true, abstract: false, final false
inline void Setup(::VROSC::LoopStation*  loopStation, ::VROSC::LoopStationLoopHandler*  loopHandler) ;

/// @brief Method SortGroups, addr 0x18b1cf4, size 0x2a8, virtual true, abstract: false, final false
inline void SortGroups() ;

constexpr ::UnityW<::VROSC::LoopStationGroup> const& __cordl_internal_get__BaseGroup_k__BackingField() const;

constexpr ::UnityW<::VROSC::LoopStationGroup>& __cordl_internal_get__BaseGroup_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>* const& __cordl_internal_get__arrangedGroups() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*& __cordl_internal_get__arrangedGroups() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__autoGroupHeader() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__autoGroupHeader() ;

constexpr void __cordl_internal_set__BaseGroup_k__BackingField(::UnityW<::VROSC::LoopStationGroup>  value) ;

constexpr void __cordl_internal_set__arrangedGroups(::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*  value) ;

constexpr void __cordl_internal_set__autoGroupHeader(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x18b2110, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BaseGroup, addr 0x18b07f8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopStationGroup> get_BaseGroup() ;

/// @brief Method set_BaseGroup, addr 0x18b0800, size 0x8, virtual false, abstract: false, final false
inline void set_BaseGroup(::VROSC::LoopStationGroup*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationBaseGroupHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationBaseGroupHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationBaseGroupHandler(LoopStationBaseGroupHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationBaseGroupHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationBaseGroupHandler(LoopStationBaseGroupHandler const& ) = delete;

/// @brief Field BaseID offset 0xffffffff size 0x8
static constexpr ::ConstString  BaseID{u"Ungrouped"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{715};

/// @brief Field _arrangedGroups, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*  ____arrangedGroups;

/// @brief Field _autoGroupHeader, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____autoGroupHeader;

/// @brief Field <BaseGroup>k__BackingField, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationGroup>  ____BaseGroup_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationBaseGroupHandler, ____arrangedGroups) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationBaseGroupHandler, ____autoGroupHeader) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationBaseGroupHandler, ____BaseGroup_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationBaseGroupHandler, 0x80>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationBaseGroupHandler);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationBaseGroupHandler*, "VROSC", "LoopStationBaseGroupHandler");
