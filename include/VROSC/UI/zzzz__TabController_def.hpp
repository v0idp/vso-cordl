#pragma once
// IWYU pragma private; include "VROSC/UI/TabController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TabController)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace VROSC::UI {
class TabButton;
}
// Forward declare root types
namespace VROSC::UI {
class TabController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::TabController);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.TabController
class CORDL_TYPE TabController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnTabChanged, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTabChanged, put=__cordl_internal_set_OnTabChanged)) ::System::Action_1<::UnityW<::VROSC::UI::TabButton>>*  OnTabChanged;

 __declspec(property(get=get_SelectedTab)) ::UnityW<::VROSC::UI::TabButton>  SelectedTab;

/// @brief Field _areTabsEnabled, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__areTabsEnabled, put=__cordl_internal_set__areTabsEnabled)) bool  _areTabsEnabled;

/// @brief Field _currentTab, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentTab, put=__cordl_internal_set__currentTab)) int32_t  _currentTab;

/// @brief Field _mobileTabs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__mobileTabs, put=__cordl_internal_set__mobileTabs)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::TabButton>>*  _mobileTabs;

/// @brief Field _pcTabs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__pcTabs, put=__cordl_internal_set__pcTabs)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::TabButton>>*  _pcTabs;

/// @brief Field _tabs, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__tabs, put=__cordl_internal_set__tabs)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::TabButton>>*  _tabs;

/// @brief Method Awake, addr 0x17e31e4, size 0x34c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method EnableTabs, addr 0x17e36f8, size 0x14c, virtual false, abstract: false, final false
inline void EnableTabs(bool  enable) ;

static inline ::VROSC::UI::TabController* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17e3530, size 0x148, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x17e3678, size 0x80, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method TabActivated, addr 0x17e3844, size 0x204, virtual false, abstract: false, final false
inline void TabActivated(::VROSC::UI::TabButton*  sender) ;

constexpr ::System::Action_1<::UnityW<::VROSC::UI::TabButton>>* const& __cordl_internal_get_OnTabChanged() const;

constexpr ::System::Action_1<::UnityW<::VROSC::UI::TabButton>>*& __cordl_internal_get_OnTabChanged() ;

constexpr bool const& __cordl_internal_get__areTabsEnabled() const;

constexpr bool& __cordl_internal_get__areTabsEnabled() ;

constexpr int32_t const& __cordl_internal_get__currentTab() const;

constexpr int32_t& __cordl_internal_get__currentTab() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::TabButton>>* const& __cordl_internal_get__mobileTabs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::TabButton>>*& __cordl_internal_get__mobileTabs() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::TabButton>>* const& __cordl_internal_get__pcTabs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::TabButton>>*& __cordl_internal_get__pcTabs() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::TabButton>>* const& __cordl_internal_get__tabs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::TabButton>>*& __cordl_internal_get__tabs() ;

constexpr void __cordl_internal_set_OnTabChanged(::System::Action_1<::UnityW<::VROSC::UI::TabButton>>*  value) ;

constexpr void __cordl_internal_set__areTabsEnabled(bool  value) ;

constexpr void __cordl_internal_set__currentTab(int32_t  value) ;

constexpr void __cordl_internal_set__mobileTabs(::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::TabButton>>*  value) ;

constexpr void __cordl_internal_set__pcTabs(::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::TabButton>>*  value) ;

constexpr void __cordl_internal_set__tabs(::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::TabButton>>*  value) ;

/// @brief Method .ctor, addr 0x17e3a48, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SelectedTab, addr 0x17e3168, size 0x7c, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UI::TabButton> get_SelectedTab() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TabController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TabController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TabController(TabController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TabController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TabController(TabController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1599};

/// @brief Field _pcTabs, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::TabButton>>*  ____pcTabs;

/// @brief Field _mobileTabs, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::TabButton>>*  ____mobileTabs;

/// @brief Field _tabs, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::TabButton>>*  ____tabs;

/// @brief Field _currentTab, offset: 0x38, size: 0x4, def value: None
 int32_t  ____currentTab;

/// @brief Field _areTabsEnabled, offset: 0x3c, size: 0x1, def value: None
 bool  ____areTabsEnabled;

/// @brief Field OnTabChanged, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::UI::TabButton>>*  ___OnTabChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::TabController, ____pcTabs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::TabController, ____mobileTabs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::TabController, ____tabs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::TabController, ____currentTab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::TabController, ____areTabsEnabled) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::TabController, ___OnTabChanged) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::TabController, 0x48>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::TabController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::TabController*, "VROSC.UI", "TabController");
