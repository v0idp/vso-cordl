#pragma once
// IWYU pragma private; include "VROSC/PaginatedListItemUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PaginatedListItemUI)
namespace System {
template<typename T>
class Action_1;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class PaginatedListDataHolder;
}
namespace VROSC {
class PaginatedList;
}
namespace VROSC {
class UIToggle;
}
// Forward declare root types
namespace VROSC {
class PaginatedListItemUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PaginatedListItemUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PaginatedListItemUI
class CORDL_TYPE PaginatedListItemUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_DataHolder, put=set_DataHolder)) ::VROSC::PaginatedListDataHolder*  DataHolder;

/// @brief Field OnItemSelected, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemSelected, put=__cordl_internal_set_OnItemSelected)) ::System::Action_1<::VROSC::PaginatedListDataHolder*>*  OnItemSelected;

/// @brief Field <DataHolder>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__DataHolder_k__BackingField, put=__cordl_internal_set__DataHolder_k__BackingField)) ::VROSC::PaginatedListDataHolder*  _DataHolder_k__BackingField;

/// @brief Field _button, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__button, put=__cordl_internal_set__button)) ::UnityW<::VROSC::UIToggle>  _button;

/// @brief Field _paginatedList, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__paginatedList, put=__cordl_internal_set__paginatedList)) ::UnityW<::VROSC::PaginatedList>  _paginatedList;

/// @brief Field _selected, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__selected, put=__cordl_internal_set__selected)) bool  _selected;

/// @brief Method Awake, addr 0x174b054, size 0xc8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::PaginatedListItemUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x174b11c, size 0xc8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetActive, addr 0x174ae6c, size 0x28, virtual false, abstract: false, final false
inline void SetActive(bool  active) ;

/// @brief Method SetIsSelected, addr 0x174aab8, size 0x2c, virtual false, abstract: false, final false
inline void SetIsSelected(bool  selected) ;

/// @brief Method SetNewData, addr 0x174b1ec, size 0x8, virtual true, abstract: false, final false
inline void SetNewData(::VROSC::PaginatedListDataHolder*  dataholder) ;

/// @brief Method SetSelected, addr 0x174b1f4, size 0x54, virtual true, abstract: false, final false
inline void SetSelected(::VROSC::InputDevice*  inputDevice, bool  shouldBeSelected) ;

/// @brief Method Setup, addr 0x174b1e4, size 0x8, virtual true, abstract: false, final false
inline void Setup(::VROSC::PaginatedList*  paginatedList) ;

constexpr ::System::Action_1<::VROSC::PaginatedListDataHolder*>* const& __cordl_internal_get_OnItemSelected() const;

constexpr ::System::Action_1<::VROSC::PaginatedListDataHolder*>*& __cordl_internal_get_OnItemSelected() ;

constexpr ::VROSC::PaginatedListDataHolder* const& __cordl_internal_get__DataHolder_k__BackingField() const;

constexpr ::VROSC::PaginatedListDataHolder*& __cordl_internal_get__DataHolder_k__BackingField() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__button() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__button() ;

constexpr ::UnityW<::VROSC::PaginatedList> const& __cordl_internal_get__paginatedList() const;

constexpr ::UnityW<::VROSC::PaginatedList>& __cordl_internal_get__paginatedList() ;

constexpr bool const& __cordl_internal_get__selected() const;

constexpr bool& __cordl_internal_get__selected() ;

constexpr void __cordl_internal_set_OnItemSelected(::System::Action_1<::VROSC::PaginatedListDataHolder*>*  value) ;

constexpr void __cordl_internal_set__DataHolder_k__BackingField(::VROSC::PaginatedListDataHolder*  value) ;

constexpr void __cordl_internal_set__button(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__paginatedList(::UnityW<::VROSC::PaginatedList>  value) ;

constexpr void __cordl_internal_set__selected(bool  value) ;

/// @brief Method .ctor, addr 0x174b248, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DataHolder, addr 0x174b04c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::PaginatedListDataHolder* get_DataHolder() ;

/// @brief Method set_DataHolder, addr 0x174b044, size 0x8, virtual false, abstract: false, final false
inline void set_DataHolder(::VROSC::PaginatedListDataHolder*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PaginatedListItemUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PaginatedListItemUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PaginatedListItemUI(PaginatedListItemUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PaginatedListItemUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PaginatedListItemUI(PaginatedListItemUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1140};

/// @brief Field _button, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____button;

/// @brief Field <DataHolder>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::VROSC::PaginatedListDataHolder*  ____DataHolder_k__BackingField;

/// @brief Field _paginatedList, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::PaginatedList>  ____paginatedList;

/// @brief Field _selected, offset: 0x38, size: 0x1, def value: None
 bool  ____selected;

/// @brief Field OnItemSelected, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::VROSC::PaginatedListDataHolder*>*  ___OnItemSelected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PaginatedListItemUI, ____button) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaginatedListItemUI, ____DataHolder_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaginatedListItemUI, ____paginatedList) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaginatedListItemUI, ____selected) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaginatedListItemUI, ___OnItemSelected) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PaginatedListItemUI, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PaginatedListItemUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PaginatedListItemUI*, "VROSC", "PaginatedListItemUI");
