#pragma once
// IWYU pragma private; include "VROSC/PaginatedList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PaginatedList)
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
class PaginatedListDataHolder;
}
namespace VROSC {
class PaginatedListItemData;
}
namespace VROSC {
class PaginatedListItemUI;
}
namespace VROSC {
class PaginatedListPageButton;
}
// Forward declare root types
namespace VROSC {
class PaginatedList;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PaginatedList);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PaginatedList
class CORDL_TYPE PaginatedList : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnItemSelected, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemSelected, put=__cordl_internal_set_OnItemSelected)) ::System::Action_1<::VROSC::PaginatedListDataHolder*>*  OnItemSelected;

 __declspec(property(get=get_Pages, put=set_Pages)) int32_t  Pages;

/// @brief Field <Pages>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__Pages_k__BackingField, put=__cordl_internal_set__Pages_k__BackingField)) int32_t  _Pages_k__BackingField;

/// @brief Field _currentPage, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentPage, put=__cordl_internal_set__currentPage)) int32_t  _currentPage;

/// @brief Field _dataList, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataList, put=__cordl_internal_set__dataList)) ::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>*  _dataList;

/// @brief Field _isSetup, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__isSetup, put=__cordl_internal_set__isSetup)) bool  _isSetup;

/// @brief Field _itemCount, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__itemCount, put=__cordl_internal_set__itemCount)) int32_t  _itemCount;

/// @brief Field _listItemParent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__listItemParent, put=__cordl_internal_set__listItemParent)) ::UnityW<::UnityEngine::Transform>  _listItemParent;

/// @brief Field _listItemPrefab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__listItemPrefab, put=__cordl_internal_set__listItemPrefab)) ::UnityW<::VROSC::PaginatedListItemUI>  _listItemPrefab;

/// @brief Field _pageButtonCount, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__pageButtonCount, put=__cordl_internal_set__pageButtonCount)) int32_t  _pageButtonCount;

/// @brief Field _pageButtonPrefab, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__pageButtonPrefab, put=__cordl_internal_set__pageButtonPrefab)) ::UnityW<::VROSC::PaginatedListPageButton>  _pageButtonPrefab;

/// @brief Field _pageButtons, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__pageButtons, put=__cordl_internal_set__pageButtons)) ::ArrayW<::UnityW<::VROSC::PaginatedListPageButton>,::Array<::UnityW<::VROSC::PaginatedListPageButton>>*>  _pageButtons;

/// @brief Field _pageButtonsParent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__pageButtonsParent, put=__cordl_internal_set__pageButtonsParent)) ::UnityW<::UnityEngine::Transform>  _pageButtonsParent;

/// @brief Field _selectedDataHolder, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectedDataHolder, put=__cordl_internal_set__selectedDataHolder)) ::VROSC::PaginatedListDataHolder*  _selectedDataHolder;

/// @brief Field _uiItems, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__uiItems, put=__cordl_internal_set__uiItems)) ::ArrayW<::UnityW<::VROSC::PaginatedListItemUI>,::Array<::UnityW<::VROSC::PaginatedListItemUI>>*>  _uiItems;

/// @brief Method ItemSelected, addr 0x174a828, size 0xb8, virtual false, abstract: false, final false
inline void ItemSelected(::VROSC::PaginatedListDataHolder*  dataHolder) ;

static inline ::VROSC::PaginatedList* New_ctor() ;

/// @brief Method OnDestroy, addr 0x174a4ac, size 0x268, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SelectItem, addr 0x174a8e0, size 0x178, virtual false, abstract: false, final false
inline void SelectItem(::VROSC::PaginatedListItemData*  data) ;

/// @brief Method Setup, addr 0x174a0ac, size 0x400, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method ShowItemsOnCurrentPage, addr 0x174aae4, size 0x14c, virtual false, abstract: false, final false
inline void ShowItemsOnCurrentPage() ;

/// @brief Method ShowPage, addr 0x174a7e8, size 0x40, virtual false, abstract: false, final false
inline void ShowPage(int32_t  page) ;

/// @brief Method UnselectAll, addr 0x174aa58, size 0x60, virtual false, abstract: false, final false
inline void UnselectAll() ;

/// @brief Method UpdateData, addr 0x174a714, size 0xd4, virtual false, abstract: false, final false
inline void UpdateData(::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>*  dataList, ::VROSC::PaginatedListDataHolder*  selected) ;

/// @brief Method UpdatePageButtons, addr 0x174ac30, size 0x23c, virtual false, abstract: false, final false
inline void UpdatePageButtons() ;

constexpr ::System::Action_1<::VROSC::PaginatedListDataHolder*>* const& __cordl_internal_get_OnItemSelected() const;

constexpr ::System::Action_1<::VROSC::PaginatedListDataHolder*>*& __cordl_internal_get_OnItemSelected() ;

constexpr int32_t const& __cordl_internal_get__Pages_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Pages_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__currentPage() const;

constexpr int32_t& __cordl_internal_get__currentPage() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>* const& __cordl_internal_get__dataList() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>*& __cordl_internal_get__dataList() ;

constexpr bool const& __cordl_internal_get__isSetup() const;

constexpr bool& __cordl_internal_get__isSetup() ;

constexpr int32_t const& __cordl_internal_get__itemCount() const;

constexpr int32_t& __cordl_internal_get__itemCount() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__listItemParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__listItemParent() ;

constexpr ::UnityW<::VROSC::PaginatedListItemUI> const& __cordl_internal_get__listItemPrefab() const;

constexpr ::UnityW<::VROSC::PaginatedListItemUI>& __cordl_internal_get__listItemPrefab() ;

constexpr int32_t const& __cordl_internal_get__pageButtonCount() const;

constexpr int32_t& __cordl_internal_get__pageButtonCount() ;

constexpr ::UnityW<::VROSC::PaginatedListPageButton> const& __cordl_internal_get__pageButtonPrefab() const;

constexpr ::UnityW<::VROSC::PaginatedListPageButton>& __cordl_internal_get__pageButtonPrefab() ;

constexpr ::ArrayW<::UnityW<::VROSC::PaginatedListPageButton>,::Array<::UnityW<::VROSC::PaginatedListPageButton>>*> const& __cordl_internal_get__pageButtons() const;

constexpr ::ArrayW<::UnityW<::VROSC::PaginatedListPageButton>,::Array<::UnityW<::VROSC::PaginatedListPageButton>>*>& __cordl_internal_get__pageButtons() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__pageButtonsParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__pageButtonsParent() ;

constexpr ::VROSC::PaginatedListDataHolder* const& __cordl_internal_get__selectedDataHolder() const;

constexpr ::VROSC::PaginatedListDataHolder*& __cordl_internal_get__selectedDataHolder() ;

constexpr ::ArrayW<::UnityW<::VROSC::PaginatedListItemUI>,::Array<::UnityW<::VROSC::PaginatedListItemUI>>*> const& __cordl_internal_get__uiItems() const;

constexpr ::ArrayW<::UnityW<::VROSC::PaginatedListItemUI>,::Array<::UnityW<::VROSC::PaginatedListItemUI>>*>& __cordl_internal_get__uiItems() ;

constexpr void __cordl_internal_set_OnItemSelected(::System::Action_1<::VROSC::PaginatedListDataHolder*>*  value) ;

constexpr void __cordl_internal_set__Pages_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__currentPage(int32_t  value) ;

constexpr void __cordl_internal_set__dataList(::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>*  value) ;

constexpr void __cordl_internal_set__isSetup(bool  value) ;

constexpr void __cordl_internal_set__itemCount(int32_t  value) ;

constexpr void __cordl_internal_set__listItemParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__listItemPrefab(::UnityW<::VROSC::PaginatedListItemUI>  value) ;

constexpr void __cordl_internal_set__pageButtonCount(int32_t  value) ;

constexpr void __cordl_internal_set__pageButtonPrefab(::UnityW<::VROSC::PaginatedListPageButton>  value) ;

constexpr void __cordl_internal_set__pageButtons(::ArrayW<::UnityW<::VROSC::PaginatedListPageButton>,::Array<::UnityW<::VROSC::PaginatedListPageButton>>*>  value) ;

constexpr void __cordl_internal_set__pageButtonsParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__selectedDataHolder(::VROSC::PaginatedListDataHolder*  value) ;

constexpr void __cordl_internal_set__uiItems(::ArrayW<::UnityW<::VROSC::PaginatedListItemUI>,::Array<::UnityW<::VROSC::PaginatedListItemUI>>*>  value) ;

/// @brief Method .ctor, addr 0x174af1c, size 0xd4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Pages, addr 0x174a0a4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Pages() ;

/// @brief Method set_Pages, addr 0x174a09c, size 0x8, virtual false, abstract: false, final false
inline void set_Pages(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PaginatedList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PaginatedList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PaginatedList(PaginatedList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PaginatedList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PaginatedList(PaginatedList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1137};

/// @brief Field <Pages>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____Pages_k__BackingField;

/// @brief Field _itemCount, offset: 0x24, size: 0x4, def value: None
 int32_t  ____itemCount;

/// @brief Field _listItemParent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____listItemParent;

/// @brief Field _listItemPrefab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::PaginatedListItemUI>  ____listItemPrefab;

/// @brief Field _pageButtonCount, offset: 0x38, size: 0x4, def value: None
 int32_t  ____pageButtonCount;

/// @brief Field _pageButtonsParent, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____pageButtonsParent;

/// @brief Field _pageButtonPrefab, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::PaginatedListPageButton>  ____pageButtonPrefab;

/// @brief Field _isSetup, offset: 0x50, size: 0x1, def value: None
 bool  ____isSetup;

/// @brief Field _selectedDataHolder, offset: 0x58, size: 0x8, def value: None
 ::VROSC::PaginatedListDataHolder*  ____selectedDataHolder;

/// @brief Field _uiItems, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::PaginatedListItemUI>,::Array<::UnityW<::VROSC::PaginatedListItemUI>>*>  ____uiItems;

/// @brief Field _pageButtons, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::PaginatedListPageButton>,::Array<::UnityW<::VROSC::PaginatedListPageButton>>*>  ____pageButtons;

/// @brief Field _dataList, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>*  ____dataList;

/// @brief Field _currentPage, offset: 0x78, size: 0x4, def value: None
 int32_t  ____currentPage;

/// @brief Field OnItemSelected, offset: 0x80, size: 0x8, def value: None
 ::System::Action_1<::VROSC::PaginatedListDataHolder*>*  ___OnItemSelected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PaginatedList, ____Pages_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaginatedList, ____itemCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaginatedList, ____listItemParent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaginatedList, ____listItemPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaginatedList, ____pageButtonCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaginatedList, ____pageButtonsParent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaginatedList, ____pageButtonPrefab) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaginatedList, ____isSetup) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaginatedList, ____selectedDataHolder) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaginatedList, ____uiItems) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaginatedList, ____pageButtons) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaginatedList, ____dataList) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaginatedList, ____currentPage) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaginatedList, ___OnItemSelected) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PaginatedList, 0x88>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PaginatedList);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PaginatedList*, "VROSC", "PaginatedList");
