#pragma once
// IWYU pragma private; include "VROSC/SessionsPanelUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__SessionsSearchHelper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SessionsPanelUI)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class SessionItemData;
}
namespace VROSC {
class SessionUIData;
}
namespace VROSC {
class SessionsItemsContainer;
}
namespace VROSC {
class SessionsLibraryPreviewPlayer;
}
namespace VROSC {
class SessionsSearchBar;
}
namespace VROSC {
struct SessionsSearchHelper_FilteringType;
}
namespace VROSC {
struct SessionsSearchHelper_OrderingType;
}
// Forward declare root types
namespace VROSC {
class SessionsPanelUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SessionsPanelUI);
// Dependencies UnityEngine.MonoBehaviour, VROSC.SessionsSearchHelper::FilteringType, VROSC.SessionsSearchHelper::OrderingType
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsPanelUI
class CORDL_TYPE SessionsPanelUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnSessionSelected, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSessionSelected, put=__cordl_internal_set_OnSessionSelected)) ::System::Action_1<::VROSC::SessionItemData*>*  OnSessionSelected;

/// @brief Field _currentFiltering, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentFiltering, put=__cordl_internal_set__currentFiltering)) ::VROSC::SessionsSearchHelper_FilteringType  _currentFiltering;

/// @brief Field _currentOrdering, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentOrdering, put=__cordl_internal_set__currentOrdering)) ::VROSC::SessionsSearchHelper_OrderingType  _currentOrdering;

/// @brief Field _currentSearchText, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentSearchText, put=__cordl_internal_set__currentSearchText)) ::StringW  _currentSearchText;

/// @brief Field _defaultFiltering, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__defaultFiltering, put=__cordl_internal_set__defaultFiltering)) ::VROSC::SessionsSearchHelper_FilteringType  _defaultFiltering;

/// @brief Field _defaultOrdering, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__defaultOrdering, put=__cordl_internal_set__defaultOrdering)) ::VROSC::SessionsSearchHelper_OrderingType  _defaultOrdering;

/// @brief Field _disabledMessage, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__disabledMessage, put=__cordl_internal_set__disabledMessage)) ::StringW  _disabledMessage;

/// @brief Field _errorText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__errorText, put=__cordl_internal_set__errorText)) ::UnityW<::TMPro::TextMeshPro>  _errorText;

/// @brief Field _filteringOptions, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__filteringOptions, put=__cordl_internal_set__filteringOptions)) ::System::Collections::Generic::List_1<::VROSC::SessionsSearchHelper_FilteringType>*  _filteringOptions;

/// @brief Field _isEnabled, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__isEnabled, put=__cordl_internal_set__isEnabled)) bool  _isEnabled;

/// @brief Field _listView, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__listView, put=__cordl_internal_set__listView)) ::UnityW<::UnityEngine::GameObject>  _listView;

/// @brief Field _loadingMessage, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadingMessage, put=__cordl_internal_set__loadingMessage)) ::StringW  _loadingMessage;

/// @brief Field _messageText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__messageText, put=__cordl_internal_set__messageText)) ::UnityW<::TMPro::TextMeshPro>  _messageText;

/// @brief Field _noSessionsMessage, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__noSessionsMessage, put=__cordl_internal_set__noSessionsMessage)) ::StringW  _noSessionsMessage;

/// @brief Field _orderingOptions, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__orderingOptions, put=__cordl_internal_set__orderingOptions)) ::System::Collections::Generic::List_1<::VROSC::SessionsSearchHelper_OrderingType>*  _orderingOptions;

/// @brief Field _previewPlayer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__previewPlayer, put=__cordl_internal_set__previewPlayer)) ::UnityW<::VROSC::SessionsLibraryPreviewPlayer>  _previewPlayer;

/// @brief Field _searchBar, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__searchBar, put=__cordl_internal_set__searchBar)) ::UnityW<::VROSC::SessionsSearchBar>  _searchBar;

/// @brief Field _sessionsItemsContainer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__sessionsItemsContainer, put=__cordl_internal_set__sessionsItemsContainer)) ::UnityW<::VROSC::SessionsItemsContainer>  _sessionsItemsContainer;

/// @brief Method AddSession, addr 0x174e4b0, size 0x20, virtual false, abstract: false, final false
inline void AddSession(::StringW  sessionId, ::VROSC::SessionUIData*  sessionUIData, bool  isNewSave) ;

/// @brief Method AddSessionList, addr 0x174bbd4, size 0x21c, virtual false, abstract: false, final false
inline void AddSessionList(::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*  sessionsUIDatas, bool  clear) ;

/// @brief Method Awake, addr 0x174b464, size 0x11c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Clear, addr 0x174e880, size 0x94, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ClearErrorMessage, addr 0x174e984, size 0x48, virtual false, abstract: false, final false
inline void ClearErrorMessage() ;

/// @brief Method FilterBy, addr 0x174e68c, size 0xec, virtual false, abstract: false, final false
inline void FilterBy(::VROSC::SessionsSearchHelper_FilteringType  filteringType) ;

/// @brief Method HasSession, addr 0x174e4d0, size 0x1c, virtual false, abstract: false, final false
inline bool HasSession(::StringW  sessionId) ;

static inline ::VROSC::SessionsPanelUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x174e334, size 0x178, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x174bee0, size 0xec, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x174b598, size 0xe8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OrderBy, addr 0x174e5e0, size 0xac, virtual false, abstract: false, final false
inline void OrderBy(::VROSC::SessionsSearchHelper_OrderingType  orderingType) ;

/// @brief Method Refresh, addr 0x174e4ac, size 0x4, virtual true, abstract: false, final false
inline void Refresh() ;

/// @brief Method RemoveSession, addr 0x174e4ec, size 0x94, virtual false, abstract: false, final false
inline void RemoveSession(::StringW  sessionId) ;

/// @brief Method SearchBy, addr 0x174e778, size 0x88, virtual false, abstract: false, final false
inline void SearchBy(::StringW  text) ;

/// @brief Method SelectSession, addr 0x174e800, size 0x1c, virtual false, abstract: false, final false
inline void SelectSession(::VROSC::SessionItemData*  sessionItemData) ;

/// @brief Method SessionSelected, addr 0x174e9cc, size 0x4c, virtual false, abstract: false, final false
inline void SessionSelected(::VROSC::SessionItemData*  item) ;

/// @brief Method SetEnabled, addr 0x174e81c, size 0x64, virtual false, abstract: false, final false
inline void SetEnabled(bool  enabled) ;

/// @brief Method Setup, addr 0x174e318, size 0x1c, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method ShowError, addr 0x174e914, size 0x70, virtual false, abstract: false, final false
inline void ShowError(::VROSC::Error  error) ;

/// @brief Method UpdateErrorMessage, addr 0x174c16c, size 0xc8, virtual false, abstract: false, final false
inline void UpdateErrorMessage(::StringW  errorMessage) ;

/// @brief Method UpdateMessage, addr 0x174b934, size 0xc8, virtual false, abstract: false, final false
inline void UpdateMessage(::StringW  message) ;

/// @brief Method UpdateSearchBar, addr 0x174e580, size 0x60, virtual false, abstract: false, final false
inline void UpdateSearchBar() ;

/// @brief Method UserLoggedOut, addr 0x174ea18, size 0x7c, virtual true, abstract: false, final false
inline void UserLoggedOut() ;

constexpr ::System::Action_1<::VROSC::SessionItemData*>* const& __cordl_internal_get_OnSessionSelected() const;

constexpr ::System::Action_1<::VROSC::SessionItemData*>*& __cordl_internal_get_OnSessionSelected() ;

constexpr ::VROSC::SessionsSearchHelper_FilteringType const& __cordl_internal_get__currentFiltering() const;

constexpr ::VROSC::SessionsSearchHelper_FilteringType& __cordl_internal_get__currentFiltering() ;

constexpr ::VROSC::SessionsSearchHelper_OrderingType const& __cordl_internal_get__currentOrdering() const;

constexpr ::VROSC::SessionsSearchHelper_OrderingType& __cordl_internal_get__currentOrdering() ;

constexpr ::StringW const& __cordl_internal_get__currentSearchText() const;

constexpr ::StringW& __cordl_internal_get__currentSearchText() ;

constexpr ::VROSC::SessionsSearchHelper_FilteringType const& __cordl_internal_get__defaultFiltering() const;

constexpr ::VROSC::SessionsSearchHelper_FilteringType& __cordl_internal_get__defaultFiltering() ;

constexpr ::VROSC::SessionsSearchHelper_OrderingType const& __cordl_internal_get__defaultOrdering() const;

constexpr ::VROSC::SessionsSearchHelper_OrderingType& __cordl_internal_get__defaultOrdering() ;

constexpr ::StringW const& __cordl_internal_get__disabledMessage() const;

constexpr ::StringW& __cordl_internal_get__disabledMessage() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__errorText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__errorText() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::SessionsSearchHelper_FilteringType>* const& __cordl_internal_get__filteringOptions() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::SessionsSearchHelper_FilteringType>*& __cordl_internal_get__filteringOptions() ;

constexpr bool const& __cordl_internal_get__isEnabled() const;

constexpr bool& __cordl_internal_get__isEnabled() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__listView() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__listView() ;

constexpr ::StringW const& __cordl_internal_get__loadingMessage() const;

constexpr ::StringW& __cordl_internal_get__loadingMessage() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__messageText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__messageText() ;

constexpr ::StringW const& __cordl_internal_get__noSessionsMessage() const;

constexpr ::StringW& __cordl_internal_get__noSessionsMessage() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::SessionsSearchHelper_OrderingType>* const& __cordl_internal_get__orderingOptions() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::SessionsSearchHelper_OrderingType>*& __cordl_internal_get__orderingOptions() ;

constexpr ::UnityW<::VROSC::SessionsLibraryPreviewPlayer> const& __cordl_internal_get__previewPlayer() const;

constexpr ::UnityW<::VROSC::SessionsLibraryPreviewPlayer>& __cordl_internal_get__previewPlayer() ;

constexpr ::UnityW<::VROSC::SessionsSearchBar> const& __cordl_internal_get__searchBar() const;

constexpr ::UnityW<::VROSC::SessionsSearchBar>& __cordl_internal_get__searchBar() ;

constexpr ::UnityW<::VROSC::SessionsItemsContainer> const& __cordl_internal_get__sessionsItemsContainer() const;

constexpr ::UnityW<::VROSC::SessionsItemsContainer>& __cordl_internal_get__sessionsItemsContainer() ;

constexpr void __cordl_internal_set_OnSessionSelected(::System::Action_1<::VROSC::SessionItemData*>*  value) ;

constexpr void __cordl_internal_set__currentFiltering(::VROSC::SessionsSearchHelper_FilteringType  value) ;

constexpr void __cordl_internal_set__currentOrdering(::VROSC::SessionsSearchHelper_OrderingType  value) ;

constexpr void __cordl_internal_set__currentSearchText(::StringW  value) ;

constexpr void __cordl_internal_set__defaultFiltering(::VROSC::SessionsSearchHelper_FilteringType  value) ;

constexpr void __cordl_internal_set__defaultOrdering(::VROSC::SessionsSearchHelper_OrderingType  value) ;

constexpr void __cordl_internal_set__disabledMessage(::StringW  value) ;

constexpr void __cordl_internal_set__errorText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__filteringOptions(::System::Collections::Generic::List_1<::VROSC::SessionsSearchHelper_FilteringType>*  value) ;

constexpr void __cordl_internal_set__isEnabled(bool  value) ;

constexpr void __cordl_internal_set__listView(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__loadingMessage(::StringW  value) ;

constexpr void __cordl_internal_set__messageText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__noSessionsMessage(::StringW  value) ;

constexpr void __cordl_internal_set__orderingOptions(::System::Collections::Generic::List_1<::VROSC::SessionsSearchHelper_OrderingType>*  value) ;

constexpr void __cordl_internal_set__previewPlayer(::UnityW<::VROSC::SessionsLibraryPreviewPlayer>  value) ;

constexpr void __cordl_internal_set__searchBar(::UnityW<::VROSC::SessionsSearchBar>  value) ;

constexpr void __cordl_internal_set__sessionsItemsContainer(::UnityW<::VROSC::SessionsItemsContainer>  value) ;

/// @brief Method .ctor, addr 0x174c498, size 0xe8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsPanelUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsPanelUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsPanelUI(SessionsPanelUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsPanelUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsPanelUI(SessionsPanelUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1146};

/// @brief Field _sessionsItemsContainer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::SessionsItemsContainer>  ____sessionsItemsContainer;

/// @brief Field _messageText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____messageText;

/// @brief Field _errorText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____errorText;

/// @brief Field _previewPlayer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::SessionsLibraryPreviewPlayer>  ____previewPlayer;

/// @brief Field _listView, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____listView;

/// @brief Field _searchBar, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::SessionsSearchBar>  ____searchBar;

/// @brief Field _noSessionsMessage, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____noSessionsMessage;

/// @brief Field _disabledMessage, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____disabledMessage;

/// @brief Field _loadingMessage, offset: 0x60, size: 0x8, def value: None
 ::StringW  ____loadingMessage;

/// @brief Field _orderingOptions, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::SessionsSearchHelper_OrderingType>*  ____orderingOptions;

/// @brief Field _filteringOptions, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::SessionsSearchHelper_FilteringType>*  ____filteringOptions;

/// @brief Field _defaultOrdering, offset: 0x78, size: 0x4, def value: None
 ::VROSC::SessionsSearchHelper_OrderingType  ____defaultOrdering;

/// @brief Field _defaultFiltering, offset: 0x7c, size: 0x4, def value: None
 ::VROSC::SessionsSearchHelper_FilteringType  ____defaultFiltering;

/// @brief Field OnSessionSelected, offset: 0x80, size: 0x8, def value: None
 ::System::Action_1<::VROSC::SessionItemData*>*  ___OnSessionSelected;

/// @brief Field _currentOrdering, offset: 0x88, size: 0x4, def value: None
 ::VROSC::SessionsSearchHelper_OrderingType  ____currentOrdering;

/// @brief Field _currentFiltering, offset: 0x8c, size: 0x4, def value: None
 ::VROSC::SessionsSearchHelper_FilteringType  ____currentFiltering;

/// @brief Field _currentSearchText, offset: 0x90, size: 0x8, def value: None
 ::StringW  ____currentSearchText;

/// @brief Field _isEnabled, offset: 0x98, size: 0x1, def value: None
 bool  ____isEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsPanelUI, ____sessionsItemsContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsPanelUI, ____messageText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsPanelUI, ____errorText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsPanelUI, ____previewPlayer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsPanelUI, ____listView) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsPanelUI, ____searchBar) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsPanelUI, ____noSessionsMessage) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsPanelUI, ____disabledMessage) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsPanelUI, ____loadingMessage) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsPanelUI, ____orderingOptions) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsPanelUI, ____filteringOptions) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsPanelUI, ____defaultOrdering) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsPanelUI, ____defaultFiltering) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsPanelUI, ___OnSessionSelected) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsPanelUI, ____currentOrdering) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsPanelUI, ____currentFiltering) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsPanelUI, ____currentSearchText) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsPanelUI, ____isEnabled) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsPanelUI, 0xa0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SessionsPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsPanelUI*, "VROSC", "SessionsPanelUI");
