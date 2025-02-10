#pragma once
// IWYU pragma private; include "VROSC/SessionsLibraryUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionsLibraryUI)
namespace System {
class Action;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC::UI {
class TabButton;
}
namespace VROSC::UI {
class TabController;
}
namespace VROSC {
class CommunitySessionsPanelUI;
}
namespace VROSC {
class ConfirmationUIPopup_Data;
}
namespace VROSC {
class ConfirmationUIPopup;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class ExportSessionUIPopup;
}
namespace VROSC {
class FavoritesSessionsPanelUI;
}
namespace VROSC {
class LoadSessionUIPopup;
}
namespace VROSC {
struct LoginUIPopup_Panel;
}
namespace VROSC {
class LoginUIPopup;
}
namespace VROSC {
class MySessionsPanelUI;
}
namespace VROSC {
class MySharedSessionsPanelUI;
}
namespace VROSC {
class PreviewOptionsUI;
}
namespace VROSC {
class SaveSessionUIPopup;
}
namespace VROSC {
class SessionInfoPopup;
}
namespace VROSC {
class SessionItemData;
}
namespace VROSC {
class SessionSaveData;
}
namespace VROSC {
struct SessionsLibraryUI_State;
}
namespace VROSC {
class SessionsLibraryUI___c__DisplayClass62_0;
}
namespace VROSC {
class SessionsPanelUI;
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
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UserProfilePopup;
}
// Forward declare root types
namespace VROSC {
struct SessionsLibraryUI_State;
}
namespace VROSC {
class SessionsLibraryUI;
}
namespace VROSC {
class SessionsLibraryUI___c__DisplayClass62_0;
}
// Write type traits
MARK_VAL_T(::VROSC::SessionsLibraryUI_State);
MARK_REF_PTR_T(::VROSC::SessionsLibraryUI);
MARK_REF_PTR_T(::VROSC::SessionsLibraryUI___c__DisplayClass62_0);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SessionsLibraryUI/State
struct CORDL_TYPE SessionsLibraryUI_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SessionsLibraryUI_State_Unwrapped
enum struct __SessionsLibraryUI_State_Unwrapped : int32_t {
__E_Main = static_cast<int32_t>(0x0),
__E_Saving = static_cast<int32_t>(0x1),
__E_Loading = static_cast<int32_t>(0x2),
__E_Confirmation = static_cast<int32_t>(0x3),
__E_WaitingForValidation = static_cast<int32_t>(0x4),
__E_LoggingIn = static_cast<int32_t>(0x5),
__E_Exporting = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SessionsLibraryUI_State_Unwrapped () const noexcept {
return static_cast<__SessionsLibraryUI_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SessionsLibraryUI_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SessionsLibraryUI_State(int32_t  value__) noexcept;

/// @brief Field Confirmation value: I32(3)
static ::VROSC::SessionsLibraryUI_State const Confirmation;

/// @brief Field Exporting value: I32(6)
static ::VROSC::SessionsLibraryUI_State const Exporting;

/// @brief Field Loading value: I32(2)
static ::VROSC::SessionsLibraryUI_State const Loading;

/// @brief Field LoggingIn value: I32(5)
static ::VROSC::SessionsLibraryUI_State const LoggingIn;

/// @brief Field Main value: I32(0)
static ::VROSC::SessionsLibraryUI_State const Main;

/// @brief Field Saving value: I32(1)
static ::VROSC::SessionsLibraryUI_State const Saving;

/// @brief Field WaitingForValidation value: I32(4)
static ::VROSC::SessionsLibraryUI_State const WaitingForValidation;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1169};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsLibraryUI_State, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsLibraryUI_State, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsLibraryUI/<>c__DisplayClass62_0
class CORDL_TYPE SessionsLibraryUI___c__DisplayClass62_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::SessionsLibraryUI>  __4__this;

/// @brief Field sessionSaveData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionSaveData, put=__cordl_internal_set_sessionSaveData)) ::VROSC::SessionSaveData*  sessionSaveData;

static inline ::VROSC::SessionsLibraryUI___c__DisplayClass62_0* New_ctor() ;

/// @brief Method <SaveSession>b__0, addr 0x1763314, size 0x24, virtual false, abstract: false, final false
inline void _SaveSession_b__0() ;

/// @brief Method <SaveSession>b__1, addr 0x1763338, size 0x24, virtual false, abstract: false, final false
inline void _SaveSession_b__1(::VROSC::Error  error) ;

constexpr ::UnityW<::VROSC::SessionsLibraryUI> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::SessionsLibraryUI>& __cordl_internal_get___4__this() ;

constexpr ::VROSC::SessionSaveData* const& __cordl_internal_get_sessionSaveData() const;

constexpr ::VROSC::SessionSaveData*& __cordl_internal_get_sessionSaveData() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::SessionsLibraryUI>  value) ;

constexpr void __cordl_internal_set_sessionSaveData(::VROSC::SessionSaveData*  value) ;

/// @brief Method .ctor, addr 0x1760d54, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsLibraryUI___c__DisplayClass62_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsLibraryUI___c__DisplayClass62_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsLibraryUI___c__DisplayClass62_0(SessionsLibraryUI___c__DisplayClass62_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsLibraryUI___c__DisplayClass62_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsLibraryUI___c__DisplayClass62_0(SessionsLibraryUI___c__DisplayClass62_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1170};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::SessionsLibraryUI>  _____4__this;

/// @brief Field sessionSaveData, offset: 0x18, size: 0x8, def value: None
 ::VROSC::SessionSaveData*  ___sessionSaveData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsLibraryUI___c__DisplayClass62_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI___c__DisplayClass62_0, ___sessionSaveData) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsLibraryUI___c__DisplayClass62_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, VROSC.SessionsLibraryUI::State
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsLibraryUI
class CORDL_TYPE SessionsLibraryUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::VROSC::SessionsLibraryUI_State;

using __c__DisplayClass62_0 = ::VROSC::SessionsLibraryUI___c__DisplayClass62_0;

/// @brief Field OnLoadConfirmed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnLoadConfirmed, put=setStaticF_OnLoadConfirmed)) ::System::Action*  OnLoadConfirmed;

/// @brief Field OnNewConfirmed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnNewConfirmed, put=setStaticF_OnNewConfirmed)) ::System::Action*  OnNewConfirmed;

/// @brief Field OnSaveConfirmed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSaveConfirmed, put=setStaticF_OnSaveConfirmed)) ::System::Action*  OnSaveConfirmed;

/// @brief Field _allowOnline, offset 0x104, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowOnline, put=__cordl_internal_set__allowOnline)) bool  _allowOnline;

/// @brief Field _closeButton, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeButton, put=__cordl_internal_set__closeButton)) ::UnityW<::VROSC::UIButton>  _closeButton;

/// @brief Field _communitySessionsPanelUI, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__communitySessionsPanelUI, put=__cordl_internal_set__communitySessionsPanelUI)) ::UnityW<::VROSC::CommunitySessionsPanelUI>  _communitySessionsPanelUI;

/// @brief Field _confirmationUIPopup, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__confirmationUIPopup, put=__cordl_internal_set__confirmationUIPopup)) ::UnityW<::VROSC::ConfirmationUIPopup>  _confirmationUIPopup;

/// @brief Field _currentSessionsPanel, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentSessionsPanel, put=__cordl_internal_set__currentSessionsPanel)) ::UnityW<::VROSC::SessionsPanelUI>  _currentSessionsPanel;

/// @brief Field _currentState, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentState, put=__cordl_internal_set__currentState)) ::VROSC::SessionsLibraryUI_State  _currentState;

/// @brief Field _deleteSessionButton, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__deleteSessionButton, put=__cordl_internal_set__deleteSessionButton)) ::UnityW<::VROSC::UIButton>  _deleteSessionButton;

/// @brief Field _deleteSessionConfirmationData, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__deleteSessionConfirmationData, put=__cordl_internal_set__deleteSessionConfirmationData)) ::VROSC::ConfirmationUIPopup_Data*  _deleteSessionConfirmationData;

/// @brief Field _exportSessionButton, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__exportSessionButton, put=__cordl_internal_set__exportSessionButton)) ::UnityW<::VROSC::UIButton>  _exportSessionButton;

/// @brief Field _exportSessionUIPopup, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__exportSessionUIPopup, put=__cordl_internal_set__exportSessionUIPopup)) ::UnityW<::VROSC::ExportSessionUIPopup>  _exportSessionUIPopup;

/// @brief Field _favoritesSessionsPanelUI, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__favoritesSessionsPanelUI, put=__cordl_internal_set__favoritesSessionsPanelUI)) ::UnityW<::VROSC::FavoritesSessionsPanelUI>  _favoritesSessionsPanelUI;

/// @brief Field _loadSessionButton, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadSessionButton, put=__cordl_internal_set__loadSessionButton)) ::UnityW<::VROSC::UIButton>  _loadSessionButton;

/// @brief Field _loadSessionConfirmationData, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadSessionConfirmationData, put=__cordl_internal_set__loadSessionConfirmationData)) ::VROSC::ConfirmationUIPopup_Data*  _loadSessionConfirmationData;

/// @brief Field _loadSessionUIPopup, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadSessionUIPopup, put=__cordl_internal_set__loadSessionUIPopup)) ::UnityW<::VROSC::LoadSessionUIPopup>  _loadSessionUIPopup;

/// @brief Field _loginPopupUI, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__loginPopupUI, put=__cordl_internal_set__loginPopupUI)) ::UnityW<::VROSC::LoginUIPopup>  _loginPopupUI;

/// @brief Field _mainWindow, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__mainWindow, put=__cordl_internal_set__mainWindow)) ::UnityW<::UnityEngine::GameObject>  _mainWindow;

/// @brief Field _mySessionsPanelUI, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__mySessionsPanelUI, put=__cordl_internal_set__mySessionsPanelUI)) ::UnityW<::VROSC::MySessionsPanelUI>  _mySessionsPanelUI;

/// @brief Field _mySharedSessionsPanelUI, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__mySharedSessionsPanelUI, put=__cordl_internal_set__mySharedSessionsPanelUI)) ::UnityW<::VROSC::MySharedSessionsPanelUI>  _mySharedSessionsPanelUI;

/// @brief Field _newSessionButton, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__newSessionButton, put=__cordl_internal_set__newSessionButton)) ::UnityW<::VROSC::UIButton>  _newSessionButton;

/// @brief Field _newSessionConfirmationData, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__newSessionConfirmationData, put=__cordl_internal_set__newSessionConfirmationData)) ::VROSC::ConfirmationUIPopup_Data*  _newSessionConfirmationData;

/// @brief Field _previewOptionsUI, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__previewOptionsUI, put=__cordl_internal_set__previewOptionsUI)) ::UnityW<::VROSC::PreviewOptionsUI>  _previewOptionsUI;

/// @brief Field _profileButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__profileButton, put=__cordl_internal_set__profileButton)) ::UnityW<::VROSC::UIButton>  _profileButton;

/// @brief Field _saveSessionButton, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__saveSessionButton, put=__cordl_internal_set__saveSessionButton)) ::UnityW<::VROSC::UIButton>  _saveSessionButton;

/// @brief Field _saveSessionUIPopup, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__saveSessionUIPopup, put=__cordl_internal_set__saveSessionUIPopup)) ::UnityW<::VROSC::SaveSessionUIPopup>  _saveSessionUIPopup;

/// @brief Field _searchBar, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__searchBar, put=__cordl_internal_set__searchBar)) ::UnityW<::VROSC::SessionsSearchBar>  _searchBar;

/// @brief Field _selectedItemData, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectedItemData, put=__cordl_internal_set__selectedItemData)) ::VROSC::SessionItemData*  _selectedItemData;

/// @brief Field _sessionInfoPopup, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__sessionInfoPopup, put=__cordl_internal_set__sessionInfoPopup)) ::UnityW<::VROSC::SessionInfoPopup>  _sessionInfoPopup;

/// @brief Field _tabController, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__tabController, put=__cordl_internal_set__tabController)) ::UnityW<::VROSC::UI::TabController>  _tabController;

/// @brief Field _updateContinueButton, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__updateContinueButton, put=__cordl_internal_set__updateContinueButton)) ::UnityW<::VROSC::UIButton>  _updateContinueButton;

/// @brief Field _updateNoticeWindow, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__updateNoticeWindow, put=__cordl_internal_set__updateNoticeWindow)) ::UnityW<::UnityEngine::GameObject>  _updateNoticeWindow;

/// @brief Field _userProfilePopup, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__userProfilePopup, put=__cordl_internal_set__userProfilePopup)) ::UnityW<::VROSC::UserProfilePopup>  _userProfilePopup;

/// @brief Field _waitingForDataValidationPopup, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__waitingForDataValidationPopup, put=__cordl_internal_set__waitingForDataValidationPopup)) ::UnityW<::UnityEngine::GameObject>  _waitingForDataValidationPopup;

/// @brief Method Awake, addr 0x175ce10, size 0xc18, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CloseButtonPressed, addr 0x175fb7c, size 0x24, virtual false, abstract: false, final false
inline void CloseButtonPressed() ;

/// @brief Method CloseLoginPopup, addr 0x175f888, size 0x1c, virtual false, abstract: false, final false
inline void CloseLoginPopup() ;

/// @brief Method ClosedExportSessionPopup, addr 0x17626e0, size 0x1c, virtual false, abstract: false, final false
inline void ClosedExportSessionPopup() ;

/// @brief Method ClosedLoadSessionPopup, addr 0x17626d8, size 0x8, virtual false, abstract: false, final false
inline void ClosedLoadSessionPopup() ;

/// @brief Method ContinueWithoutUpdating, addr 0x175e284, size 0x70, virtual false, abstract: false, final false
inline void ContinueWithoutUpdating() ;

/// @brief Method DeleteSessionButtonPressed, addr 0x1760500, size 0xc0, virtual false, abstract: false, final false
inline void DeleteSessionButtonPressed() ;

/// @brief Method DeleteSessionFailed, addr 0x176243c, size 0x210, virtual false, abstract: false, final false
inline void DeleteSessionFailed(::StringW  sessionId, ::VROSC::Error  error) ;

/// @brief Method DeleteSessionSucceeded, addr 0x1762204, size 0x238, virtual false, abstract: false, final false
inline void DeleteSessionSucceeded(::StringW  sessionId) ;

/// @brief Method DeselectItem, addr 0x175f844, size 0x44, virtual false, abstract: false, final false
inline void DeselectItem() ;

/// @brief Method DownloadSessionProgressed, addr 0x17621e8, size 0x1c, virtual false, abstract: false, final false
inline void DownloadSessionProgressed(::StringW  sessionId, float_t  progress) ;

/// @brief Method ExportSessionButtonPressed, addr 0x1760070, size 0x174, virtual false, abstract: false, final false
inline void ExportSessionButtonPressed() ;

/// @brief Method FilterWith, addr 0x1757928, size 0x24, virtual false, abstract: false, final false
inline void FilterWith(::StringW  filter) ;

/// @brief Method FilteringChanged, addr 0x175fa08, size 0x1c, virtual false, abstract: false, final false
inline void FilteringChanged(::VROSC::SessionsSearchHelper_FilteringType  filteringType) ;

/// @brief Method ForceUpdateDataLoaded, addr 0x175dcc4, size 0xbc, virtual false, abstract: false, final false
inline void ForceUpdateDataLoaded() ;

/// @brief Method ItemSelected, addr 0x175fa40, size 0x88, virtual false, abstract: false, final false
inline void ItemSelected(::VROSC::SessionItemData*  itemData) ;

/// @brief Method LoadSessionButtonPressed, addr 0x1760440, size 0xc0, virtual false, abstract: false, final false
inline void LoadSessionButtonPressed() ;

/// @brief Method LoadSessionFailed, addr 0x1761e88, size 0x344, virtual false, abstract: false, final false
inline void LoadSessionFailed(::StringW  sessionId, bool  isDefaultSession, ::VROSC::Error  error) ;

/// @brief Method LoadSessionProgressed, addr 0x17621cc, size 0x1c, virtual false, abstract: false, final false
inline void LoadSessionProgressed(::StringW  sessionId, float_t  progress) ;

/// @brief Method LoadSessionSucceeded, addr 0x17618bc, size 0x370, virtual false, abstract: false, final false
inline void LoadSessionSucceeded(::StringW  sessionId, bool  isDefaultSession) ;

/// @brief Method LoginPopupClosed, addr 0x1762668, size 0x70, virtual false, abstract: false, final false
inline void LoginPopupClosed() ;

/// @brief Method NewSessionButtonPressed, addr 0x175fba0, size 0xc0, virtual false, abstract: false, final false
inline void NewSessionButtonPressed() ;

static inline ::VROSC::SessionsLibraryUI* New_ctor() ;

/// @brief Method OnApplicationQuit, addr 0x1762808, size 0x24, virtual false, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method OnDestroy, addr 0x175ed44, size 0x94c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x175ea5c, size 0x2e8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x175da28, size 0x29c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OpenLoginPopup, addr 0x175f8a4, size 0xe4, virtual false, abstract: false, final false
inline void OpenLoginPopup(::VROSC::LoginUIPopup_Panel  panel) ;

/// @brief Method OpenMainWindow, addr 0x175dd80, size 0x4cc, virtual false, abstract: false, final false
inline void OpenMainWindow(bool  allowOnline) ;

/// @brief Method OpenUpdateNoticeWindow, addr 0x175e24c, size 0x38, virtual false, abstract: false, final false
inline void OpenUpdateNoticeWindow() ;

/// @brief Method OrderingChanged, addr 0x175f9ec, size 0x1c, virtual false, abstract: false, final false
inline void OrderingChanged(::VROSC::SessionsSearchHelper_OrderingType  orderingType) ;

/// @brief Method ProfileButtonPressed, addr 0x175fac8, size 0xb4, virtual false, abstract: false, final false
inline void ProfileButtonPressed() ;

/// @brief Method Refresh, addr 0x175f988, size 0x64, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method SaveSession, addr 0x17605c0, size 0x794, virtual false, abstract: false, final false
inline void SaveSession(::VROSC::SessionSaveData*  sessionSaveData, bool  isValidated) ;

/// @brief Method SaveSessionButtonPressed, addr 0x175fe38, size 0x1c, virtual false, abstract: false, final false
inline void SaveSessionButtonPressed() ;

/// @brief Method SaveSessionCanceled, addr 0x1760ed0, size 0x8, virtual false, abstract: false, final false
inline void SaveSessionCanceled() ;

/// @brief Method SaveSessionFailed, addr 0x1761344, size 0x504, virtual false, abstract: false, final false
inline void SaveSessionFailed(::StringW  sessionId, ::VROSC::Error  error) ;

/// @brief Method SaveSessionPreviewProgressed, addr 0x1761848, size 0x20, virtual false, abstract: false, final false
inline void SaveSessionPreviewProgressed(::StringW  sessionId, bool  isSaving, float_t  progress) ;

/// @brief Method SaveSessionProgressed, addr 0x1761868, size 0x1c, virtual false, abstract: false, final false
inline void SaveSessionProgressed(::StringW  sessionId, float_t  progress) ;

/// @brief Method SaveSessionSucceeded, addr 0x1760ed8, size 0x46c, virtual false, abstract: false, final false
inline void SaveSessionSucceeded(::StringW  sessionId) ;

/// @brief Method SearchChanged, addr 0x175fa24, size 0x1c, virtual false, abstract: false, final false
inline void SearchChanged(::StringW  text) ;

/// @brief Method SessionDataUpdateFailed, addr 0x1760e44, size 0x38, virtual false, abstract: false, final false
inline void SessionDataUpdateFailed(::StringW  sessionId, ::VROSC::Error  error) ;

/// @brief Method SessionDataUpdateSucceeded, addr 0x1760d64, size 0xe0, virtual false, abstract: false, final false
inline void SessionDataUpdateSucceeded(::StringW  sessionId) ;

/// @brief Method SessionPreviewLoadFailed, addr 0x1760e98, size 0x38, virtual false, abstract: false, final false
inline void SessionPreviewLoadFailed(::StringW  sessionId, ::VROSC::Error  error) ;

/// @brief Method SessionPreviewLoadSucceded, addr 0x1760e7c, size 0x1c, virtual false, abstract: false, final false
inline void SessionPreviewLoadSucceded(::StringW  sessionId, ::UnityEngine::AudioClip*  audioClip, float_t  previewNormalizeMultiplier) ;

/// @brief Method SessionsValidated, addr 0x1760d5c, size 0x8, virtual false, abstract: false, final false
inline void SessionsValidated() ;

/// @brief Method SetButtonsActive, addr 0x175f690, size 0xcc, virtual false, abstract: false, final false
inline void SetButtonsActive(bool  active) ;

/// @brief Method SetInConfirmationState, addr 0x175fc60, size 0x1d8, virtual false, abstract: false, final false
inline void SetInConfirmationState(bool  isInConfirmationState, ::VROSC::ConfirmationUIPopup_Data*  data, ::System::Action*  confirmCallback, ::System::Action*  cancelCallback) ;

/// @brief Method SetInExportingState, addr 0x17601e4, size 0x25c, virtual false, abstract: false, final false
inline void SetInExportingState(bool  isInExportingState) ;

/// @brief Method SetInLoadingState, addr 0x1761c2c, size 0x25c, virtual false, abstract: false, final false
inline void SetInLoadingState(bool  isInLoadingState) ;

/// @brief Method SetInSavingState, addr 0x175fe54, size 0x21c, virtual false, abstract: false, final false
inline void SetInSavingState(bool  isInSavingState) ;

/// @brief Method SetIsWaitingForValidationState, addr 0x175e2f4, size 0x1b0, virtual false, abstract: false, final false
inline void SetIsWaitingForValidationState(bool  isWaiting) ;

/// @brief Method SetSelectedSessionButtonsActive, addr 0x175f75c, size 0xe8, virtual false, abstract: false, final false
inline void SetSelectedSessionButtonsActive(bool  active) ;

/// @brief Method ShowChangeEmailPopup, addr 0x175918c, size 0x8, virtual false, abstract: false, final false
inline void ShowChangeEmailPopup() ;

/// @brief Method ShowChangePasswordPopup, addr 0x17591b0, size 0x8, virtual false, abstract: false, final false
inline void ShowChangePasswordPopup() ;

/// @brief Method TabChanged, addr 0x175e4a4, size 0x5b8, virtual false, abstract: false, final false
inline void TabChanged(::VROSC::UI::TabButton*  tabButton) ;

/// @brief Method UpdateTemplateSessionItem, addr 0x1757fc4, size 0x20, virtual false, abstract: false, final false
inline void UpdateTemplateSessionItem(::StringW  sessionId) ;

/// @brief Method UploadSessionPreviewProgressed, addr 0x17618a0, size 0x1c, virtual false, abstract: false, final false
inline void UploadSessionPreviewProgressed(::StringW  sessionId, float_t  progress) ;

/// @brief Method UploadSessionProgressed, addr 0x1761884, size 0x1c, virtual false, abstract: false, final false
inline void UploadSessionProgressed(::StringW  sessionId, float_t  progress) ;

/// @brief Method UserLoggedIn, addr 0x17626fc, size 0x3c, virtual false, abstract: false, final false
inline void UserLoggedIn(::StringW  email, bool  isVerified) ;

/// @brief Method UserLoggedOut, addr 0x1762738, size 0xd0, virtual false, abstract: false, final false
inline void UserLoggedOut() ;

/// @brief Method <DeleteSessionButtonPressed>b__61_0, addr 0x1763088, size 0x248, virtual false, abstract: false, final false
inline void _DeleteSessionButtonPressed_b__61_0() ;

/// @brief Method <DeleteSessionButtonPressed>b__61_1, addr 0x17632d0, size 0x44, virtual false, abstract: false, final false
inline void _DeleteSessionButtonPressed_b__61_1() ;

/// @brief Method <LoadSessionButtonPressed>b__60_0, addr 0x1762c5c, size 0x3e8, virtual false, abstract: false, final false
inline void _LoadSessionButtonPressed_b__60_0() ;

/// @brief Method <LoadSessionButtonPressed>b__60_1, addr 0x1763044, size 0x44, virtual false, abstract: false, final false
inline void _LoadSessionButtonPressed_b__60_1() ;

/// @brief Method <NewSessionButtonPressed>b__57_0, addr 0x176283c, size 0x3dc, virtual false, abstract: false, final false
inline void _NewSessionButtonPressed_b__57_0() ;

/// @brief Method <NewSessionButtonPressed>b__57_1, addr 0x1762c18, size 0x44, virtual false, abstract: false, final false
inline void _NewSessionButtonPressed_b__57_1() ;

constexpr bool const& __cordl_internal_get__allowOnline() const;

constexpr bool& __cordl_internal_get__allowOnline() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__closeButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__closeButton() ;

constexpr ::UnityW<::VROSC::CommunitySessionsPanelUI> const& __cordl_internal_get__communitySessionsPanelUI() const;

constexpr ::UnityW<::VROSC::CommunitySessionsPanelUI>& __cordl_internal_get__communitySessionsPanelUI() ;

constexpr ::UnityW<::VROSC::ConfirmationUIPopup> const& __cordl_internal_get__confirmationUIPopup() const;

constexpr ::UnityW<::VROSC::ConfirmationUIPopup>& __cordl_internal_get__confirmationUIPopup() ;

constexpr ::UnityW<::VROSC::SessionsPanelUI> const& __cordl_internal_get__currentSessionsPanel() const;

constexpr ::UnityW<::VROSC::SessionsPanelUI>& __cordl_internal_get__currentSessionsPanel() ;

constexpr ::VROSC::SessionsLibraryUI_State const& __cordl_internal_get__currentState() const;

constexpr ::VROSC::SessionsLibraryUI_State& __cordl_internal_get__currentState() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__deleteSessionButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__deleteSessionButton() ;

constexpr ::VROSC::ConfirmationUIPopup_Data* const& __cordl_internal_get__deleteSessionConfirmationData() const;

constexpr ::VROSC::ConfirmationUIPopup_Data*& __cordl_internal_get__deleteSessionConfirmationData() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__exportSessionButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__exportSessionButton() ;

constexpr ::UnityW<::VROSC::ExportSessionUIPopup> const& __cordl_internal_get__exportSessionUIPopup() const;

constexpr ::UnityW<::VROSC::ExportSessionUIPopup>& __cordl_internal_get__exportSessionUIPopup() ;

constexpr ::UnityW<::VROSC::FavoritesSessionsPanelUI> const& __cordl_internal_get__favoritesSessionsPanelUI() const;

constexpr ::UnityW<::VROSC::FavoritesSessionsPanelUI>& __cordl_internal_get__favoritesSessionsPanelUI() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__loadSessionButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__loadSessionButton() ;

constexpr ::VROSC::ConfirmationUIPopup_Data* const& __cordl_internal_get__loadSessionConfirmationData() const;

constexpr ::VROSC::ConfirmationUIPopup_Data*& __cordl_internal_get__loadSessionConfirmationData() ;

constexpr ::UnityW<::VROSC::LoadSessionUIPopup> const& __cordl_internal_get__loadSessionUIPopup() const;

constexpr ::UnityW<::VROSC::LoadSessionUIPopup>& __cordl_internal_get__loadSessionUIPopup() ;

constexpr ::UnityW<::VROSC::LoginUIPopup> const& __cordl_internal_get__loginPopupUI() const;

constexpr ::UnityW<::VROSC::LoginUIPopup>& __cordl_internal_get__loginPopupUI() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__mainWindow() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__mainWindow() ;

constexpr ::UnityW<::VROSC::MySessionsPanelUI> const& __cordl_internal_get__mySessionsPanelUI() const;

constexpr ::UnityW<::VROSC::MySessionsPanelUI>& __cordl_internal_get__mySessionsPanelUI() ;

constexpr ::UnityW<::VROSC::MySharedSessionsPanelUI> const& __cordl_internal_get__mySharedSessionsPanelUI() const;

constexpr ::UnityW<::VROSC::MySharedSessionsPanelUI>& __cordl_internal_get__mySharedSessionsPanelUI() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__newSessionButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__newSessionButton() ;

constexpr ::VROSC::ConfirmationUIPopup_Data* const& __cordl_internal_get__newSessionConfirmationData() const;

constexpr ::VROSC::ConfirmationUIPopup_Data*& __cordl_internal_get__newSessionConfirmationData() ;

constexpr ::UnityW<::VROSC::PreviewOptionsUI> const& __cordl_internal_get__previewOptionsUI() const;

constexpr ::UnityW<::VROSC::PreviewOptionsUI>& __cordl_internal_get__previewOptionsUI() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__profileButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__profileButton() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__saveSessionButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__saveSessionButton() ;

constexpr ::UnityW<::VROSC::SaveSessionUIPopup> const& __cordl_internal_get__saveSessionUIPopup() const;

constexpr ::UnityW<::VROSC::SaveSessionUIPopup>& __cordl_internal_get__saveSessionUIPopup() ;

constexpr ::UnityW<::VROSC::SessionsSearchBar> const& __cordl_internal_get__searchBar() const;

constexpr ::UnityW<::VROSC::SessionsSearchBar>& __cordl_internal_get__searchBar() ;

constexpr ::VROSC::SessionItemData* const& __cordl_internal_get__selectedItemData() const;

constexpr ::VROSC::SessionItemData*& __cordl_internal_get__selectedItemData() ;

constexpr ::UnityW<::VROSC::SessionInfoPopup> const& __cordl_internal_get__sessionInfoPopup() const;

constexpr ::UnityW<::VROSC::SessionInfoPopup>& __cordl_internal_get__sessionInfoPopup() ;

constexpr ::UnityW<::VROSC::UI::TabController> const& __cordl_internal_get__tabController() const;

constexpr ::UnityW<::VROSC::UI::TabController>& __cordl_internal_get__tabController() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__updateContinueButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__updateContinueButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__updateNoticeWindow() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__updateNoticeWindow() ;

constexpr ::UnityW<::VROSC::UserProfilePopup> const& __cordl_internal_get__userProfilePopup() const;

constexpr ::UnityW<::VROSC::UserProfilePopup>& __cordl_internal_get__userProfilePopup() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__waitingForDataValidationPopup() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__waitingForDataValidationPopup() ;

constexpr void __cordl_internal_set__allowOnline(bool  value) ;

constexpr void __cordl_internal_set__closeButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__communitySessionsPanelUI(::UnityW<::VROSC::CommunitySessionsPanelUI>  value) ;

constexpr void __cordl_internal_set__confirmationUIPopup(::UnityW<::VROSC::ConfirmationUIPopup>  value) ;

constexpr void __cordl_internal_set__currentSessionsPanel(::UnityW<::VROSC::SessionsPanelUI>  value) ;

constexpr void __cordl_internal_set__currentState(::VROSC::SessionsLibraryUI_State  value) ;

constexpr void __cordl_internal_set__deleteSessionButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__deleteSessionConfirmationData(::VROSC::ConfirmationUIPopup_Data*  value) ;

constexpr void __cordl_internal_set__exportSessionButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__exportSessionUIPopup(::UnityW<::VROSC::ExportSessionUIPopup>  value) ;

constexpr void __cordl_internal_set__favoritesSessionsPanelUI(::UnityW<::VROSC::FavoritesSessionsPanelUI>  value) ;

constexpr void __cordl_internal_set__loadSessionButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__loadSessionConfirmationData(::VROSC::ConfirmationUIPopup_Data*  value) ;

constexpr void __cordl_internal_set__loadSessionUIPopup(::UnityW<::VROSC::LoadSessionUIPopup>  value) ;

constexpr void __cordl_internal_set__loginPopupUI(::UnityW<::VROSC::LoginUIPopup>  value) ;

constexpr void __cordl_internal_set__mainWindow(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__mySessionsPanelUI(::UnityW<::VROSC::MySessionsPanelUI>  value) ;

constexpr void __cordl_internal_set__mySharedSessionsPanelUI(::UnityW<::VROSC::MySharedSessionsPanelUI>  value) ;

constexpr void __cordl_internal_set__newSessionButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__newSessionConfirmationData(::VROSC::ConfirmationUIPopup_Data*  value) ;

constexpr void __cordl_internal_set__previewOptionsUI(::UnityW<::VROSC::PreviewOptionsUI>  value) ;

constexpr void __cordl_internal_set__profileButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__saveSessionButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__saveSessionUIPopup(::UnityW<::VROSC::SaveSessionUIPopup>  value) ;

constexpr void __cordl_internal_set__searchBar(::UnityW<::VROSC::SessionsSearchBar>  value) ;

constexpr void __cordl_internal_set__selectedItemData(::VROSC::SessionItemData*  value) ;

constexpr void __cordl_internal_set__sessionInfoPopup(::UnityW<::VROSC::SessionInfoPopup>  value) ;

constexpr void __cordl_internal_set__tabController(::UnityW<::VROSC::UI::TabController>  value) ;

constexpr void __cordl_internal_set__updateContinueButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__updateNoticeWindow(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__userProfilePopup(::UnityW<::VROSC::UserProfilePopup>  value) ;

constexpr void __cordl_internal_set__waitingForDataValidationPopup(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x176282c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action* getStaticF_OnLoadConfirmed() ;

static inline ::System::Action* getStaticF_OnNewConfirmed() ;

static inline ::System::Action* getStaticF_OnSaveConfirmed() ;

static inline void setStaticF_OnLoadConfirmed(::System::Action*  value) ;

static inline void setStaticF_OnNewConfirmed(::System::Action*  value) ;

static inline void setStaticF_OnSaveConfirmed(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsLibraryUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsLibraryUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsLibraryUI(SessionsLibraryUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsLibraryUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsLibraryUI(SessionsLibraryUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1171};

/// @brief Field _loginPopupUI, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::LoginUIPopup>  ____loginPopupUI;

/// @brief Field _mySessionsPanelUI, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::MySessionsPanelUI>  ____mySessionsPanelUI;

/// @brief Field _mySharedSessionsPanelUI, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::MySharedSessionsPanelUI>  ____mySharedSessionsPanelUI;

/// @brief Field _communitySessionsPanelUI, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::CommunitySessionsPanelUI>  ____communitySessionsPanelUI;

/// @brief Field _favoritesSessionsPanelUI, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::FavoritesSessionsPanelUI>  ____favoritesSessionsPanelUI;

/// @brief Field _tabController, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::TabController>  ____tabController;

/// @brief Field _profileButton, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____profileButton;

/// @brief Field _closeButton, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____closeButton;

/// @brief Field _newSessionButton, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____newSessionButton;

/// @brief Field _saveSessionButton, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____saveSessionButton;

/// @brief Field _exportSessionButton, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____exportSessionButton;

/// @brief Field _loadSessionButton, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____loadSessionButton;

/// @brief Field _deleteSessionButton, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____deleteSessionButton;

/// @brief Field _confirmationUIPopup, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::VROSC::ConfirmationUIPopup>  ____confirmationUIPopup;

/// @brief Field _saveSessionUIPopup, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::VROSC::SaveSessionUIPopup>  ____saveSessionUIPopup;

/// @brief Field _loadSessionUIPopup, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::VROSC::LoadSessionUIPopup>  ____loadSessionUIPopup;

/// @brief Field _exportSessionUIPopup, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::VROSC::ExportSessionUIPopup>  ____exportSessionUIPopup;

/// @brief Field _waitingForDataValidationPopup, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____waitingForDataValidationPopup;

/// @brief Field _userProfilePopup, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::VROSC::UserProfilePopup>  ____userProfilePopup;

/// @brief Field _sessionInfoPopup, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::VROSC::SessionInfoPopup>  ____sessionInfoPopup;

/// @brief Field _searchBar, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::VROSC::SessionsSearchBar>  ____searchBar;

/// @brief Field _newSessionConfirmationData, offset: 0xc8, size: 0x8, def value: None
 ::VROSC::ConfirmationUIPopup_Data*  ____newSessionConfirmationData;

/// @brief Field _loadSessionConfirmationData, offset: 0xd0, size: 0x8, def value: None
 ::VROSC::ConfirmationUIPopup_Data*  ____loadSessionConfirmationData;

/// @brief Field _deleteSessionConfirmationData, offset: 0xd8, size: 0x8, def value: None
 ::VROSC::ConfirmationUIPopup_Data*  ____deleteSessionConfirmationData;

/// @brief Field _previewOptionsUI, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::VROSC::PreviewOptionsUI>  ____previewOptionsUI;

/// @brief Field _updateNoticeWindow, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____updateNoticeWindow;

/// @brief Field _mainWindow, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____mainWindow;

/// @brief Field _updateContinueButton, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____updateContinueButton;

/// @brief Field _currentState, offset: 0x100, size: 0x4, def value: None
 ::VROSC::SessionsLibraryUI_State  ____currentState;

/// @brief Field _allowOnline, offset: 0x104, size: 0x1, def value: None
 bool  ____allowOnline;

/// @brief Field _currentSessionsPanel, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::VROSC::SessionsPanelUI>  ____currentSessionsPanel;

/// @brief Field _selectedItemData, offset: 0x110, size: 0x8, def value: None
 ::VROSC::SessionItemData*  ____selectedItemData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsLibraryUI, ____loginPopupUI) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____mySessionsPanelUI) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____mySharedSessionsPanelUI) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____communitySessionsPanelUI) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____favoritesSessionsPanelUI) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____tabController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____profileButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____closeButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____newSessionButton) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____saveSessionButton) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____exportSessionButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____loadSessionButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____deleteSessionButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____confirmationUIPopup) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____saveSessionUIPopup) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____loadSessionUIPopup) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____exportSessionUIPopup) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____waitingForDataValidationPopup) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____userProfilePopup) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____sessionInfoPopup) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____searchBar) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____newSessionConfirmationData) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____loadSessionConfirmationData) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____deleteSessionConfirmationData) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____previewOptionsUI) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____updateNoticeWindow) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____mainWindow) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____updateContinueButton) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____currentState) == 0x100, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____allowOnline) == 0x104, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____currentSessionsPanel) == 0x108, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryUI, ____selectedItemData) == 0x110, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsLibraryUI, 0x118>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsLibraryUI_State, "VROSC", "SessionsLibraryUI/State");
NEED_NO_BOX(::VROSC::SessionsLibraryUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsLibraryUI*, "VROSC", "SessionsLibraryUI");
NEED_NO_BOX(::VROSC::SessionsLibraryUI___c__DisplayClass62_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsLibraryUI___c__DisplayClass62_0*, "VROSC", "SessionsLibraryUI/<>c__DisplayClass62_0");
