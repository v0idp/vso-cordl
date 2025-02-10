#pragma once
// IWYU pragma private; include "VROSC/SessionsSearchBar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SessionsSearchBar)
namespace GlobalNamespace {
class UIInputField;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace VROSC {
struct SessionsSearchHelper_FilteringType;
}
namespace VROSC {
struct SessionsSearchHelper_OrderingType;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UISpinner;
}
// Forward declare root types
namespace VROSC {
class SessionsSearchBar;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SessionsSearchBar);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsSearchBar
class CORDL_TYPE SessionsSearchBar : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnFilteringChanged, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFilteringChanged, put=__cordl_internal_set_OnFilteringChanged)) ::System::Action_1<::VROSC::SessionsSearchHelper_FilteringType>*  OnFilteringChanged;

/// @brief Field OnOrderingChanged, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnOrderingChanged, put=__cordl_internal_set_OnOrderingChanged)) ::System::Action_1<::VROSC::SessionsSearchHelper_OrderingType>*  OnOrderingChanged;

/// @brief Field OnSearchChanged, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSearchChanged, put=__cordl_internal_set_OnSearchChanged)) ::System::Action_1<::StringW>*  OnSearchChanged;

/// @brief Field _clearSearchButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__clearSearchButton, put=__cordl_internal_set__clearSearchButton)) ::UnityW<::VROSC::UIButton>  _clearSearchButton;

/// @brief Field _filteringSpinner, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__filteringSpinner, put=__cordl_internal_set__filteringSpinner)) ::UnityW<::VROSC::UISpinner>  _filteringSpinner;

/// @brief Field _orderingSpinner, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__orderingSpinner, put=__cordl_internal_set__orderingSpinner)) ::UnityW<::VROSC::UISpinner>  _orderingSpinner;

/// @brief Field _searchField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__searchField, put=__cordl_internal_set__searchField)) ::UnityW<::GlobalNamespace::UIInputField>  _searchField;

/// @brief Method Awake, addr 0x176335c, size 0x2e0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearSearchField, addr 0x1764530, size 0x54, virtual false, abstract: false, final false
inline void ClearSearchField() ;

/// @brief Method FilteringSpinnerChanged, addr 0x1764244, size 0xc4, virtual false, abstract: false, final false
inline void FilteringSpinnerChanged(int32_t  index) ;

static inline ::VROSC::SessionsSearchBar* New_ctor() ;

/// @brief Method OnDestroy, addr 0x176363c, size 0x288, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OrderingSpinnerChanged, addr 0x1763fd0, size 0xc4, virtual false, abstract: false, final false
inline void OrderingSpinnerChanged(int32_t  index) ;

/// @brief Method SearchFieldChanged, addr 0x17644c0, size 0x70, virtual false, abstract: false, final false
inline void SearchFieldChanged(::StringW  text) ;

/// @brief Method SetFilteringOptions, addr 0x1763b70, size 0x2ac, virtual false, abstract: false, final false
inline void SetFilteringOptions(::System::Collections::Generic::List_1<::VROSC::SessionsSearchHelper_FilteringType>*  options) ;

/// @brief Method SetOrderingOptions, addr 0x17638c4, size 0x2ac, virtual false, abstract: false, final false
inline void SetOrderingOptions(::System::Collections::Generic::List_1<::VROSC::SessionsSearchHelper_OrderingType>*  options) ;

/// @brief Method SetSearchText, addr 0x176264c, size 0x1c, virtual false, abstract: false, final false
inline void SetSearchText(::StringW  text) ;

/// @brief Method SetSelectedOptions, addr 0x1763e1c, size 0x1b4, virtual false, abstract: false, final false
inline void SetSelectedOptions(::VROSC::SessionsSearchHelper_OrderingType  orderingType, ::VROSC::SessionsSearchHelper_FilteringType  filteringType) ;

constexpr ::System::Action_1<::VROSC::SessionsSearchHelper_FilteringType>* const& __cordl_internal_get_OnFilteringChanged() const;

constexpr ::System::Action_1<::VROSC::SessionsSearchHelper_FilteringType>*& __cordl_internal_get_OnFilteringChanged() ;

constexpr ::System::Action_1<::VROSC::SessionsSearchHelper_OrderingType>* const& __cordl_internal_get_OnOrderingChanged() const;

constexpr ::System::Action_1<::VROSC::SessionsSearchHelper_OrderingType>*& __cordl_internal_get_OnOrderingChanged() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnSearchChanged() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnSearchChanged() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__clearSearchButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__clearSearchButton() ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get__filteringSpinner() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get__filteringSpinner() ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get__orderingSpinner() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get__orderingSpinner() ;

constexpr ::UnityW<::GlobalNamespace::UIInputField> const& __cordl_internal_get__searchField() const;

constexpr ::UnityW<::GlobalNamespace::UIInputField>& __cordl_internal_get__searchField() ;

constexpr void __cordl_internal_set_OnFilteringChanged(::System::Action_1<::VROSC::SessionsSearchHelper_FilteringType>*  value) ;

constexpr void __cordl_internal_set_OnOrderingChanged(::System::Action_1<::VROSC::SessionsSearchHelper_OrderingType>*  value) ;

constexpr void __cordl_internal_set_OnSearchChanged(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__clearSearchButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__filteringSpinner(::UnityW<::VROSC::UISpinner>  value) ;

constexpr void __cordl_internal_set__orderingSpinner(::UnityW<::VROSC::UISpinner>  value) ;

constexpr void __cordl_internal_set__searchField(::UnityW<::GlobalNamespace::UIInputField>  value) ;

/// @brief Method .ctor, addr 0x1764584, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsSearchBar() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsSearchBar", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsSearchBar(SessionsSearchBar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsSearchBar", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsSearchBar(SessionsSearchBar const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1172};

/// @brief Field _orderingSpinner, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  ____orderingSpinner;

/// @brief Field _filteringSpinner, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  ____filteringSpinner;

/// @brief Field _searchField, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UIInputField>  ____searchField;

/// @brief Field _clearSearchButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____clearSearchButton;

/// @brief Field OnOrderingChanged, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::VROSC::SessionsSearchHelper_OrderingType>*  ___OnOrderingChanged;

/// @brief Field OnFilteringChanged, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::VROSC::SessionsSearchHelper_FilteringType>*  ___OnFilteringChanged;

/// @brief Field OnSearchChanged, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnSearchChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsSearchBar, ____orderingSpinner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsSearchBar, ____filteringSpinner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsSearchBar, ____searchField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsSearchBar, ____clearSearchButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsSearchBar, ___OnOrderingChanged) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsSearchBar, ___OnFilteringChanged) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsSearchBar, ___OnSearchChanged) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsSearchBar, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SessionsSearchBar);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsSearchBar*, "VROSC", "SessionsSearchBar");
