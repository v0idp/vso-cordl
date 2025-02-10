#pragma once
// IWYU pragma private; include "VROSC/FBDebug/UserDataDebugPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UserDataDebugPanel)
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
namespace VROSC {
class CloudSessionsDataController;
}
namespace VROSC {
class CommunitySessionsDataController;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class UserFavoritesDataController;
}
namespace VROSC {
class UserPreferencesDataController;
}
// Forward declare root types
namespace VROSC::FBDebug {
class UserDataDebugPanel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::FBDebug::UserDataDebugPanel);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC::FBDebug {
// Is value type: false
// CS Name: VROSC.FBDebug.UserDataDebugPanel
class CORDL_TYPE UserDataDebugPanel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _alwaysHoldMallets, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__alwaysHoldMallets, put=__cordl_internal_set__alwaysHoldMallets)) bool  _alwaysHoldMallets;

/// @brief Field _cloudSessionsDataController, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__cloudSessionsDataController, put=__cordl_internal_set__cloudSessionsDataController)) ::VROSC::CloudSessionsDataController*  _cloudSessionsDataController;

/// @brief Field _communitySessionsDataController, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__communitySessionsDataController, put=__cordl_internal_set__communitySessionsDataController)) ::VROSC::CommunitySessionsDataController*  _communitySessionsDataController;

/// @brief Field _data, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__data, put=setStaticF__data)) ::StringW  _data;

/// @brief Field _dataText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataText, put=__cordl_internal_set__dataText)) ::UnityW<::TMPro::TextMeshProUGUI>  _dataText;

/// @brief Field _deleteDataButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__deleteDataButton, put=__cordl_internal_set__deleteDataButton)) ::UnityW<::UnityEngine::UI::Button>  _deleteDataButton;

/// @brief Field _getNewDataButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__getNewDataButton, put=__cordl_internal_set__getNewDataButton)) ::UnityW<::UnityEngine::UI::Button>  _getNewDataButton;

/// @brief Field _malletAngle, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__malletAngle, put=__cordl_internal_set__malletAngle)) float_t  _malletAngle;

/// @brief Field _malletLength, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__malletLength, put=__cordl_internal_set__malletLength)) float_t  _malletLength;

/// @brief Field _sessionId, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__sessionId, put=__cordl_internal_set__sessionId)) ::StringW  _sessionId;

/// @brief Field _userFavoritesDataController, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__userFavoritesDataController, put=__cordl_internal_set__userFavoritesDataController)) ::VROSC::UserFavoritesDataController*  _userFavoritesDataController;

/// @brief Field _userPreferencesDataController, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__userPreferencesDataController, put=__cordl_internal_set__userPreferencesDataController)) ::VROSC::UserPreferencesDataController*  _userPreferencesDataController;

/// @brief Field _writeDataButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__writeDataButton, put=__cordl_internal_set__writeDataButton)) ::UnityW<::UnityEngine::UI::Button>  _writeDataButton;

/// @brief Method Awake, addr 0x17df33c, size 0x220, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DeleteDataButtonPressed, addr 0x17dfaa8, size 0x188, virtual false, abstract: false, final false
inline void DeleteDataButtonPressed() ;

/// @brief Method GetNewDataButtonPressed, addr 0x17df74c, size 0xfc, virtual false, abstract: false, final false
inline void GetNewDataButtonPressed() ;

/// @brief Method LoadFavoritesFailure, addr 0x17e0118, size 0xa4, virtual false, abstract: false, final false
inline void LoadFavoritesFailure(::VROSC::Error  error) ;

/// @brief Method LoadFavoritesSuccess, addr 0x17e00a4, size 0x74, virtual false, abstract: false, final false
inline void LoadFavoritesSuccess() ;

/// @brief Method LoadPreferencesFailure, addr 0x17e0000, size 0xa4, virtual false, abstract: false, final false
inline void LoadPreferencesFailure(::VROSC::Error  error) ;

/// @brief Method LoadPreferencesSuccess, addr 0x17dff8c, size 0x74, virtual false, abstract: false, final false
inline void LoadPreferencesSuccess() ;

/// @brief Method LoadSessionsFailure, addr 0x17dfdb4, size 0xa4, virtual false, abstract: false, final false
inline void LoadSessionsFailure(::VROSC::Error  error) ;

/// @brief Method LoadSessionsSuccess, addr 0x17dfc30, size 0x68, virtual false, abstract: false, final false
inline void LoadSessionsSuccess() ;

static inline ::VROSC::FBDebug::UserDataDebugPanel* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17df55c, size 0x138, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnValidate, addr 0x17df70c, size 0x40, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PrintData, addr 0x17dfc98, size 0x11c, virtual false, abstract: false, final false
static inline void PrintData(::StringW  data, bool  clear) ;

/// @brief Method RemoveSessionFailure, addr 0x17dfec0, size 0xcc, virtual false, abstract: false, final false
inline void RemoveSessionFailure(::VROSC::Error  error) ;

/// @brief Method RemoveSessionSuccess, addr 0x17dfe58, size 0x68, virtual false, abstract: false, final false
inline void RemoveSessionSuccess() ;

/// @brief Method SaveFavoritesFailure, addr 0x17e048c, size 0xcc, virtual false, abstract: false, final false
inline void SaveFavoritesFailure(::VROSC::Error  error) ;

/// @brief Method SaveFavoritesSuccess, addr 0x17e0424, size 0x68, virtual false, abstract: false, final false
inline void SaveFavoritesSuccess() ;

/// @brief Method SaveMalletsPreferencesFailure, addr 0x17e0358, size 0xcc, virtual false, abstract: false, final false
inline void SaveMalletsPreferencesFailure(::VROSC::Error  error) ;

/// @brief Method SaveMalletsPreferencesSuccess, addr 0x17e02f0, size 0x68, virtual false, abstract: false, final false
inline void SaveMalletsPreferencesSuccess() ;

/// @brief Method SaveSessionsFailure, addr 0x17e0224, size 0xcc, virtual false, abstract: false, final false
inline void SaveSessionsFailure(::VROSC::Error  error) ;

/// @brief Method SaveSessionsSuccess, addr 0x17e01bc, size 0x68, virtual false, abstract: false, final false
inline void SaveSessionsSuccess() ;

/// @brief Method Update, addr 0x17df694, size 0x78, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method WriteDataButtonPressed, addr 0x17df848, size 0x260, virtual false, abstract: false, final false
inline void WriteDataButtonPressed() ;

constexpr bool const& __cordl_internal_get__alwaysHoldMallets() const;

constexpr bool& __cordl_internal_get__alwaysHoldMallets() ;

constexpr ::VROSC::CloudSessionsDataController* const& __cordl_internal_get__cloudSessionsDataController() const;

constexpr ::VROSC::CloudSessionsDataController*& __cordl_internal_get__cloudSessionsDataController() ;

constexpr ::VROSC::CommunitySessionsDataController* const& __cordl_internal_get__communitySessionsDataController() const;

constexpr ::VROSC::CommunitySessionsDataController*& __cordl_internal_get__communitySessionsDataController() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__dataText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__dataText() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__deleteDataButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__deleteDataButton() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__getNewDataButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__getNewDataButton() ;

constexpr float_t const& __cordl_internal_get__malletAngle() const;

constexpr float_t& __cordl_internal_get__malletAngle() ;

constexpr float_t const& __cordl_internal_get__malletLength() const;

constexpr float_t& __cordl_internal_get__malletLength() ;

constexpr ::StringW const& __cordl_internal_get__sessionId() const;

constexpr ::StringW& __cordl_internal_get__sessionId() ;

constexpr ::VROSC::UserFavoritesDataController* const& __cordl_internal_get__userFavoritesDataController() const;

constexpr ::VROSC::UserFavoritesDataController*& __cordl_internal_get__userFavoritesDataController() ;

constexpr ::VROSC::UserPreferencesDataController* const& __cordl_internal_get__userPreferencesDataController() const;

constexpr ::VROSC::UserPreferencesDataController*& __cordl_internal_get__userPreferencesDataController() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__writeDataButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__writeDataButton() ;

constexpr void __cordl_internal_set__alwaysHoldMallets(bool  value) ;

constexpr void __cordl_internal_set__cloudSessionsDataController(::VROSC::CloudSessionsDataController*  value) ;

constexpr void __cordl_internal_set__communitySessionsDataController(::VROSC::CommunitySessionsDataController*  value) ;

constexpr void __cordl_internal_set__dataText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set__deleteDataButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__getNewDataButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__malletAngle(float_t  value) ;

constexpr void __cordl_internal_set__malletLength(float_t  value) ;

constexpr void __cordl_internal_set__sessionId(::StringW  value) ;

constexpr void __cordl_internal_set__userFavoritesDataController(::VROSC::UserFavoritesDataController*  value) ;

constexpr void __cordl_internal_set__userPreferencesDataController(::VROSC::UserPreferencesDataController*  value) ;

constexpr void __cordl_internal_set__writeDataButton(::UnityW<::UnityEngine::UI::Button>  value) ;

/// @brief Method .ctor, addr 0x17e0558, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF__data() ;

static inline void setStaticF__data(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataDebugPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataDebugPanel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataDebugPanel(UserDataDebugPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataDebugPanel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataDebugPanel(UserDataDebugPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1591};

/// @brief Field _getNewDataButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____getNewDataButton;

/// @brief Field _writeDataButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____writeDataButton;

/// @brief Field _deleteDataButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____deleteDataButton;

/// @brief Field _dataText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____dataText;

/// @brief Field _sessionId, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____sessionId;

/// @brief Field _alwaysHoldMallets, offset: 0x48, size: 0x1, def value: None
 bool  ____alwaysHoldMallets;

/// @brief Field _malletAngle, offset: 0x4c, size: 0x4, def value: None
 float_t  ____malletAngle;

/// @brief Field _malletLength, offset: 0x50, size: 0x4, def value: None
 float_t  ____malletLength;

/// @brief Field _communitySessionsDataController, offset: 0x58, size: 0x8, def value: None
 ::VROSC::CommunitySessionsDataController*  ____communitySessionsDataController;

/// @brief Field _cloudSessionsDataController, offset: 0x60, size: 0x8, def value: None
 ::VROSC::CloudSessionsDataController*  ____cloudSessionsDataController;

/// @brief Field _userPreferencesDataController, offset: 0x68, size: 0x8, def value: None
 ::VROSC::UserPreferencesDataController*  ____userPreferencesDataController;

/// @brief Field _userFavoritesDataController, offset: 0x70, size: 0x8, def value: None
 ::VROSC::UserFavoritesDataController*  ____userFavoritesDataController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FBDebug::UserDataDebugPanel, ____getNewDataButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FBDebug::UserDataDebugPanel, ____writeDataButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FBDebug::UserDataDebugPanel, ____deleteDataButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::FBDebug::UserDataDebugPanel, ____dataText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::FBDebug::UserDataDebugPanel, ____sessionId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::FBDebug::UserDataDebugPanel, ____alwaysHoldMallets) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::FBDebug::UserDataDebugPanel, ____malletAngle) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::FBDebug::UserDataDebugPanel, ____malletLength) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::FBDebug::UserDataDebugPanel, ____communitySessionsDataController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::FBDebug::UserDataDebugPanel, ____cloudSessionsDataController) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::FBDebug::UserDataDebugPanel, ____userPreferencesDataController) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::FBDebug::UserDataDebugPanel, ____userFavoritesDataController) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FBDebug::UserDataDebugPanel, 0x78>, "Size mismatch!");

} // namespace end def VROSC::FBDebug
NEED_NO_BOX(::VROSC::FBDebug::UserDataDebugPanel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FBDebug::UserDataDebugPanel*, "VROSC.FBDebug", "UserDataDebugPanel");
