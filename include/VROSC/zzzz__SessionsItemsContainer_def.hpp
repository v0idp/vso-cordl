#pragma once
// IWYU pragma private; include "VROSC/SessionsItemsContainer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__SessionsSearchHelper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SessionsItemsContainer)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace VROSC {
class PaginatedListDataHolder;
}
namespace VROSC {
class PaginatedListItemData;
}
namespace VROSC {
class PaginatedList;
}
namespace VROSC {
class SessionItemData;
}
namespace VROSC {
class SessionUIData;
}
namespace VROSC {
struct SessionsSearchHelper_FilteringField;
}
namespace VROSC {
struct SessionsSearchHelper_OrderingDirection;
}
namespace VROSC {
struct SessionsSearchHelper_OrderingField;
}
// Forward declare root types
namespace VROSC {
class SessionsItemsContainer;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SessionsItemsContainer);
// Dependencies System.TimeSpan, UnityEngine.MonoBehaviour, VROSC.SessionsSearchHelper::OrderingDirection, VROSC.SessionsSearchHelper::OrderingField
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsItemsContainer
class CORDL_TYPE SessionsItemsContainer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_HasSessions)) bool  HasSessions;

/// @brief Field OnDataSelected, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDataSelected, put=__cordl_internal_set_OnDataSelected)) ::System::Action_1<::VROSC::SessionItemData*>*  OnDataSelected;

 __declspec(property(get=get_SessionItems, put=set_SessionItems)) ::System::Collections::Generic::List_1<::VROSC::SessionItemData*>*  SessionItems;

/// @brief Field <SessionItems>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__SessionItems_k__BackingField, put=__cordl_internal_set__SessionItems_k__BackingField)) ::System::Collections::Generic::List_1<::VROSC::SessionItemData*>*  _SessionItems_k__BackingField;

/// @brief Field _currentFilterWords, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentFilterWords, put=__cordl_internal_set__currentFilterWords)) ::System::Collections::Generic::List_1<::StringW>*  _currentFilterWords;

/// @brief Field _currentTimeFilter, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentTimeFilter, put=__cordl_internal_set__currentTimeFilter)) ::System::TimeSpan  _currentTimeFilter;

/// @brief Field _dataList, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataList, put=__cordl_internal_set__dataList)) ::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>*  _dataList;

/// @brief Field _orderingDirection, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__orderingDirection, put=__cordl_internal_set__orderingDirection)) ::VROSC::SessionsSearchHelper_OrderingDirection  _orderingDirection;

/// @brief Field _orderingField, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__orderingField, put=__cordl_internal_set__orderingField)) ::VROSC::SessionsSearchHelper_OrderingField  _orderingField;

/// @brief Field _paginatedList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__paginatedList, put=__cordl_internal_set__paginatedList)) ::UnityW<::VROSC::PaginatedList>  _paginatedList;

 __declspec(property(get=get__selectedData)) ::VROSC::SessionItemData*  _selectedData;

/// @brief Field _selectedDataHolder, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectedDataHolder, put=__cordl_internal_set__selectedDataHolder)) ::VROSC::PaginatedListDataHolder*  _selectedDataHolder;

/// @brief Method AddSession, addr 0x175a5b0, size 0x1cc, virtual false, abstract: false, final false
inline void AddSession(::StringW  id, ::VROSC::SessionUIData*  data, bool  newSave) ;

/// @brief Method Awake, addr 0x175a3dc, size 0xd8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FilterListBy, addr 0x175bc24, size 0x234, virtual false, abstract: false, final false
inline void FilterListBy(::VROSC::SessionsSearchHelper_FilteringField  filteringField, ::System::Object*  value) ;

/// @brief Method HasSession, addr 0x175adb0, size 0x180, virtual false, abstract: false, final false
inline bool HasSession(::StringW  sessionId) ;

/// @brief Method IsSessionFiltered, addr 0x175af30, size 0xb9c, virtual false, abstract: false, final false
inline bool IsSessionFiltered(::VROSC::SessionUIData*  sessionUIData) ;

/// @brief Method ItemSelected, addr 0x175ad78, size 0x38, virtual false, abstract: false, final false
inline void ItemSelected(::VROSC::PaginatedListDataHolder*  dataHolder) ;

static inline ::VROSC::SessionsItemsContainer* New_ctor() ;

/// @brief Method OnDestroy, addr 0x175a4b4, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x175a58c, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OrderDataList, addr 0x175bacc, size 0x150, virtual false, abstract: false, final false
inline void OrderDataList() ;

/// @brief Method OrderListBy, addr 0x175bc1c, size 0x8, virtual false, abstract: false, final false
inline void OrderListBy(::VROSC::SessionsSearchHelper_OrderingField  orderingField, ::VROSC::SessionsSearchHelper_OrderingDirection  orderingDirection) ;

/// @brief Method RemoveSession, addr 0x175aa44, size 0x334, virtual false, abstract: false, final false
inline void RemoveSession(::StringW  sessionId) ;

/// @brief Method SelectItem, addr 0x175be58, size 0x1c, virtual false, abstract: false, final false
inline void SelectItem(::VROSC::PaginatedListItemData*  itemData) ;

/// @brief Method Setup, addr 0x175a594, size 0x1c, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method UpdateList, addr 0x175a77c, size 0x2c8, virtual false, abstract: false, final false
inline void UpdateList() ;

/// @brief Method <OrderDataList>b__29_0, addr 0x175bf84, size 0x13c, virtual false, abstract: false, final false
inline int32_t _OrderDataList_b__29_0(::VROSC::PaginatedListDataHolder*  p1, ::VROSC::PaginatedListDataHolder*  p2) ;

/// @brief Method <OrderDataList>b__29_1, addr 0x175c0c0, size 0x104, virtual false, abstract: false, final false
inline int32_t _OrderDataList_b__29_1(::VROSC::PaginatedListDataHolder*  p1, ::VROSC::PaginatedListDataHolder*  p2) ;

/// @brief Method <OrderDataList>b__29_2, addr 0x175c1c4, size 0x110, virtual false, abstract: false, final false
inline int32_t _OrderDataList_b__29_2(::VROSC::PaginatedListDataHolder*  p1, ::VROSC::PaginatedListDataHolder*  p2) ;

/// @brief Method <OrderDataList>b__29_3, addr 0x175c2d4, size 0x10c, virtual false, abstract: false, final false
inline int32_t _OrderDataList_b__29_3(::VROSC::PaginatedListDataHolder*  p1, ::VROSC::PaginatedListDataHolder*  p2) ;

constexpr ::System::Action_1<::VROSC::SessionItemData*>* const& __cordl_internal_get_OnDataSelected() const;

constexpr ::System::Action_1<::VROSC::SessionItemData*>*& __cordl_internal_get_OnDataSelected() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::SessionItemData*>* const& __cordl_internal_get__SessionItems_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::SessionItemData*>*& __cordl_internal_get__SessionItems_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__currentFilterWords() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__currentFilterWords() ;

constexpr ::System::TimeSpan const& __cordl_internal_get__currentTimeFilter() const;

constexpr ::System::TimeSpan& __cordl_internal_get__currentTimeFilter() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>* const& __cordl_internal_get__dataList() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>*& __cordl_internal_get__dataList() ;

constexpr ::VROSC::SessionsSearchHelper_OrderingDirection const& __cordl_internal_get__orderingDirection() const;

constexpr ::VROSC::SessionsSearchHelper_OrderingDirection& __cordl_internal_get__orderingDirection() ;

constexpr ::VROSC::SessionsSearchHelper_OrderingField const& __cordl_internal_get__orderingField() const;

constexpr ::VROSC::SessionsSearchHelper_OrderingField& __cordl_internal_get__orderingField() ;

constexpr ::UnityW<::VROSC::PaginatedList> const& __cordl_internal_get__paginatedList() const;

constexpr ::UnityW<::VROSC::PaginatedList>& __cordl_internal_get__paginatedList() ;

constexpr ::VROSC::PaginatedListDataHolder* const& __cordl_internal_get__selectedDataHolder() const;

constexpr ::VROSC::PaginatedListDataHolder*& __cordl_internal_get__selectedDataHolder() ;

constexpr void __cordl_internal_set_OnDataSelected(::System::Action_1<::VROSC::SessionItemData*>*  value) ;

constexpr void __cordl_internal_set__SessionItems_k__BackingField(::System::Collections::Generic::List_1<::VROSC::SessionItemData*>*  value) ;

constexpr void __cordl_internal_set__currentFilterWords(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__currentTimeFilter(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set__dataList(::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>*  value) ;

constexpr void __cordl_internal_set__orderingDirection(::VROSC::SessionsSearchHelper_OrderingDirection  value) ;

constexpr void __cordl_internal_set__orderingField(::VROSC::SessionsSearchHelper_OrderingField  value) ;

constexpr void __cordl_internal_set__paginatedList(::UnityW<::VROSC::PaginatedList>  value) ;

constexpr void __cordl_internal_set__selectedDataHolder(::VROSC::PaginatedListDataHolder*  value) ;

/// @brief Method .ctor, addr 0x175be74, size 0x110, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HasSessions, addr 0x175a38c, size 0x50, virtual false, abstract: false, final false
inline bool get_HasSessions() ;

/// @brief Method get_SessionItems, addr 0x175a37c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::VROSC::SessionItemData*>* get_SessionItems() ;

/// @brief Method get__selectedData, addr 0x175a2f8, size 0x84, virtual false, abstract: false, final false
inline ::VROSC::SessionItemData* get__selectedData() ;

/// @brief Method set_SessionItems, addr 0x175a384, size 0x8, virtual false, abstract: false, final false
inline void set_SessionItems(::System::Collections::Generic::List_1<::VROSC::SessionItemData*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsItemsContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsItemsContainer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsItemsContainer(SessionsItemsContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsItemsContainer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsItemsContainer(SessionsItemsContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1166};

/// @brief Field _paginatedList, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::PaginatedList>  ____paginatedList;

/// @brief Field _dataList, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>*  ____dataList;

/// @brief Field _selectedDataHolder, offset: 0x30, size: 0x8, def value: None
 ::VROSC::PaginatedListDataHolder*  ____selectedDataHolder;

/// @brief Field _currentTimeFilter, offset: 0x38, size: 0x8, def value: None
 ::System::TimeSpan  ____currentTimeFilter;

/// @brief Field _currentFilterWords, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____currentFilterWords;

/// @brief Field _orderingField, offset: 0x48, size: 0x4, def value: None
 ::VROSC::SessionsSearchHelper_OrderingField  ____orderingField;

/// @brief Field _orderingDirection, offset: 0x4c, size: 0x4, def value: None
 ::VROSC::SessionsSearchHelper_OrderingDirection  ____orderingDirection;

/// @brief Field <SessionItems>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::SessionItemData*>*  ____SessionItems_k__BackingField;

/// @brief Field OnDataSelected, offset: 0x58, size: 0x8, def value: None
 ::System::Action_1<::VROSC::SessionItemData*>*  ___OnDataSelected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsItemsContainer, ____paginatedList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsItemsContainer, ____dataList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsItemsContainer, ____selectedDataHolder) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsItemsContainer, ____currentTimeFilter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsItemsContainer, ____currentFilterWords) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsItemsContainer, ____orderingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsItemsContainer, ____orderingDirection) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsItemsContainer, ____SessionItems_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsItemsContainer, ___OnDataSelected) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsItemsContainer, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SessionsItemsContainer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsItemsContainer*, "VROSC", "SessionsItemsContainer");
