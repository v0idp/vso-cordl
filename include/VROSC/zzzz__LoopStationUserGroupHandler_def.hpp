#pragma once
// IWYU pragma private; include "VROSC/LoopStationUserGroupHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__LoopStationGroupHandler_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopStationUserGroupHandler)
namespace UnityEngine {
class RectTransform;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class LoopPlaybackConfigOverride;
}
namespace VROSC {
class LoopStationBaseGroupHandler;
}
namespace VROSC {
class LoopStationDataController;
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
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UISlideToggle;
}
// Forward declare root types
namespace VROSC {
class LoopStationUserGroupHandler;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationUserGroupHandler);
// Dependencies VROSC.LoopStationGroupHandler
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationUserGroupHandler
class CORDL_TYPE LoopStationUserGroupHandler : public ::VROSC::LoopStationGroupHandler {
public:
// Declarations
/// @brief Field _addGroupButton, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__addGroupButton, put=__cordl_internal_set__addGroupButton)) ::UnityW<::VROSC::UIButton>  _addGroupButton;

/// @brief Field _arrangeGroups, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__arrangeGroups, put=__cordl_internal_set__arrangeGroups)) ::UnityW<::VROSC::UISlideToggle>  _arrangeGroups;

/// @brief Field _autoGroupHeader, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__autoGroupHeader, put=__cordl_internal_set__autoGroupHeader)) ::UnityW<::UnityEngine::RectTransform>  _autoGroupHeader;

/// @brief Field _baseGroupHandler, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseGroupHandler, put=__cordl_internal_set__baseGroupHandler)) ::UnityW<::VROSC::LoopStationBaseGroupHandler>  _baseGroupHandler;

/// @brief Field _groupNameCounter, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__groupNameCounter, put=__cordl_internal_set__groupNameCounter)) int32_t  _groupNameCounter;

/// @brief Field _padding, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__padding, put=__cordl_internal_set__padding)) float_t  _padding;

/// @brief Field _sortArea, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__sortArea, put=__cordl_internal_set__sortArea)) ::UnityW<::UnityEngine::RectTransform>  _sortArea;

/// @brief Method ArrangeChanged, addr 0x18b3304, size 0x18c, virtual false, abstract: false, final false
inline void ArrangeChanged(::VROSC::InputDevice*  device, bool  autoSortActive) ;

/// @brief Method Awake, addr 0x18b2dd0, size 0x220, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateGroup, addr 0x18b363c, size 0x60, virtual true, abstract: false, final false
inline ::UnityW<::VROSC::LoopStationGroup> CreateGroup(::VROSC::LoopStationGroup_SetupVariables  vars) ;

/// @brief Method CreateGroupFromLoad, addr 0x18b27e8, size 0xf4, virtual false, abstract: false, final false
inline void CreateGroupFromLoad(::VROSC::LoopStationDataController*  data, ::VROSC::LoopStationGroup_SetupVariables  vars) ;

/// @brief Method CreateNewUserGroup, addr 0x18b34ec, size 0x150, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopStationGroup> CreateNewUserGroup(::VROSC::LoopPlaybackConfigOverride*  playbackConfig) ;

static inline ::VROSC::LoopStationUserGroupHandler* New_ctor() ;

/// @brief Method OnAddGroupButtonClicked, addr 0x18b3490, size 0x5c, virtual false, abstract: false, final false
inline void OnAddGroupButtonClicked() ;

/// @brief Method OnDestroy, addr 0x18b317c, size 0x110, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x18b328c, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RemoveAllGroups, addr 0x18b3770, size 0xb0, virtual true, abstract: false, final false
inline void RemoveAllGroups() ;

/// @brief Method RemoveGroup, addr 0x18b369c, size 0xd4, virtual true, abstract: false, final false
inline void RemoveGroup(::VROSC::LoopStationGroup*  group, bool  fromReset) ;

/// @brief Method SetAutoGroupingActive, addr 0x18afc78, size 0x2c, virtual false, abstract: false, final false
inline void SetAutoGroupingActive(bool  autoSortUserGroups) ;

/// @brief Method Setup, addr 0x18b2ff0, size 0x110, virtual true, abstract: false, final false
inline void Setup(::VROSC::LoopStation*  loopStation, ::VROSC::LoopStationLoopHandler*  loopHandler) ;

/// @brief Method ShowGroupMenu, addr 0x18b3148, size 0x34, virtual false, abstract: false, final false
inline void ShowGroupMenu(int32_t  loopCount) ;

/// @brief Method SortGroups, addr 0x18b3820, size 0x50, virtual true, abstract: false, final false
inline void SortGroups() ;

/// @brief Method UpdateButtonsActiveState, addr 0x18b3290, size 0x74, virtual false, abstract: false, final false
inline void UpdateButtonsActiveState() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__addGroupButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__addGroupButton() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__arrangeGroups() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__arrangeGroups() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__autoGroupHeader() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__autoGroupHeader() ;

constexpr ::UnityW<::VROSC::LoopStationBaseGroupHandler> const& __cordl_internal_get__baseGroupHandler() const;

constexpr ::UnityW<::VROSC::LoopStationBaseGroupHandler>& __cordl_internal_get__baseGroupHandler() ;

constexpr int32_t const& __cordl_internal_get__groupNameCounter() const;

constexpr int32_t& __cordl_internal_get__groupNameCounter() ;

constexpr float_t const& __cordl_internal_get__padding() const;

constexpr float_t& __cordl_internal_get__padding() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__sortArea() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__sortArea() ;

constexpr void __cordl_internal_set__addGroupButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__arrangeGroups(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__autoGroupHeader(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__baseGroupHandler(::UnityW<::VROSC::LoopStationBaseGroupHandler>  value) ;

constexpr void __cordl_internal_set__groupNameCounter(int32_t  value) ;

constexpr void __cordl_internal_set__padding(float_t  value) ;

constexpr void __cordl_internal_set__sortArea(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x18b3870, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationUserGroupHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationUserGroupHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationUserGroupHandler(LoopStationUserGroupHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationUserGroupHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationUserGroupHandler(LoopStationUserGroupHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{718};

/// @brief Field _baseGroupHandler, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationBaseGroupHandler>  ____baseGroupHandler;

/// @brief Field _sortArea, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____sortArea;

/// @brief Field _padding, offset: 0x78, size: 0x4, def value: None
 float_t  ____padding;

/// @brief Field _autoGroupHeader, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____autoGroupHeader;

/// @brief Field _addGroupButton, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____addGroupButton;

/// @brief Field _arrangeGroups, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____arrangeGroups;

/// @brief Field _groupNameCounter, offset: 0x98, size: 0x4, def value: None
 int32_t  ____groupNameCounter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationUserGroupHandler, ____baseGroupHandler) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationUserGroupHandler, ____sortArea) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationUserGroupHandler, ____padding) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationUserGroupHandler, ____autoGroupHeader) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationUserGroupHandler, ____addGroupButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationUserGroupHandler, ____arrangeGroups) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationUserGroupHandler, ____groupNameCounter) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationUserGroupHandler, 0xa0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationUserGroupHandler);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationUserGroupHandler*, "VROSC", "LoopStationUserGroupHandler");
