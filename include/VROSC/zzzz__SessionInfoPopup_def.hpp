#pragma once
// IWYU pragma private; include "VROSC/SessionInfoPopup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SessionInfoPopup)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class SessionUIData;
}
namespace VROSC {
class SessionsLibraryUI;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UIDataButton;
}
namespace VROSC {
class UIToggle;
}
// Forward declare root types
namespace VROSC {
class SessionInfoPopup;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SessionInfoPopup);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionInfoPopup
class CORDL_TYPE SessionInfoPopup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _contributorButtonPrefab, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__contributorButtonPrefab, put=__cordl_internal_set__contributorButtonPrefab)) ::UnityW<::VROSC::UIDataButton>  _contributorButtonPrefab;

/// @brief Field _contributorButtons, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__contributorButtons, put=__cordl_internal_set__contributorButtons)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::UIDataButton>>*  _contributorButtons;

/// @brief Field _contributorsList, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__contributorsList, put=__cordl_internal_set__contributorsList)) ::UnityW<::UnityEngine::Transform>  _contributorsList;

/// @brief Field _favoriteButton, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__favoriteButton, put=__cordl_internal_set__favoriteButton)) ::UnityW<::VROSC::UIToggle>  _favoriteButton;

/// @brief Field _maxContributors, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxContributors, put=__cordl_internal_set__maxContributors)) int32_t  _maxContributors;

/// @brief Field _maxTags, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxTags, put=__cordl_internal_set__maxTags)) int32_t  _maxTags;

/// @brief Field _sessionUIData, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__sessionUIData, put=__cordl_internal_set__sessionUIData)) ::VROSC::SessionUIData*  _sessionUIData;

/// @brief Field _sessionsLibraryUI, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__sessionsLibraryUI, put=__cordl_internal_set__sessionsLibraryUI)) ::UnityW<::VROSC::SessionsLibraryUI>  _sessionsLibraryUI;

/// @brief Field _setAsTemplateButton, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__setAsTemplateButton, put=__cordl_internal_set__setAsTemplateButton)) ::UnityW<::VROSC::UIButton>  _setAsTemplateButton;

/// @brief Field _setAsTemplateErrorText, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__setAsTemplateErrorText, put=__cordl_internal_set__setAsTemplateErrorText)) ::UnityW<::TMPro::TextMeshPro>  _setAsTemplateErrorText;

/// @brief Field _songDescriptionText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__songDescriptionText, put=__cordl_internal_set__songDescriptionText)) ::UnityW<::TMPro::TextMeshPro>  _songDescriptionText;

/// @brief Field _songDownloadsText, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__songDownloadsText, put=__cordl_internal_set__songDownloadsText)) ::UnityW<::TMPro::TextMeshPro>  _songDownloadsText;

/// @brief Field _songNameText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__songNameText, put=__cordl_internal_set__songNameText)) ::UnityW<::TMPro::TextMeshPro>  _songNameText;

/// @brief Field _songRatingSection, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__songRatingSection, put=__cordl_internal_set__songRatingSection)) ::UnityW<::UnityEngine::GameObject>  _songRatingSection;

/// @brief Field _songUpVotesText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__songUpVotesText, put=__cordl_internal_set__songUpVotesText)) ::UnityW<::TMPro::TextMeshPro>  _songUpVotesText;

/// @brief Field _tagButtonPrefab, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__tagButtonPrefab, put=__cordl_internal_set__tagButtonPrefab)) ::UnityW<::VROSC::UIDataButton>  _tagButtonPrefab;

/// @brief Field _tagsButtons, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__tagsButtons, put=__cordl_internal_set__tagsButtons)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::UIDataButton>>*  _tagsButtons;

/// @brief Field _tagsList, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__tagsList, put=__cordl_internal_set__tagsList)) ::UnityW<::UnityEngine::Transform>  _tagsList;

/// @brief Field _upVoteButton, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__upVoteButton, put=__cordl_internal_set__upVoteButton)) ::UnityW<::VROSC::UIToggle>  _upVoteButton;

/// @brief Method Awake, addr 0x1756608, size 0x220, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ContributorButtonPressed, addr 0x17578b8, size 0x70, virtual false, abstract: false, final false
inline void ContributorButtonPressed(::System::Object*  data) ;

/// @brief Method FavoriteButtonToggled, addr 0x1757b68, size 0x1ac, virtual false, abstract: false, final false
inline void FavoriteButtonToggled(::VROSC::InputDevice*  device, bool  isOn) ;

static inline ::VROSC::SessionInfoPopup* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1756828, size 0x34c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SaveTemplateFailed, addr 0x1758238, size 0x204, virtual false, abstract: false, final false
inline void SaveTemplateFailed(::VROSC::Error  error) ;

/// @brief Method SaveTemplateSucceeded, addr 0x1757fe4, size 0x254, virtual false, abstract: false, final false
inline void SaveTemplateSucceeded() ;

/// @brief Method SetAsTemplateButtonClicked, addr 0x1757d14, size 0x2b0, virtual false, abstract: false, final false
inline void SetAsTemplateButtonClicked(::VROSC::ClickData*  clickData) ;

/// @brief Method Setup, addr 0x1756b74, size 0x8, virtual false, abstract: false, final false
inline void Setup(::VROSC::SessionsLibraryUI*  sessionsLibraryUI) ;

/// @brief Method SetupContributorButtons, addr 0x1756fa4, size 0x588, virtual false, abstract: false, final false
inline void SetupContributorButtons(::System::Collections::Generic::List_1<::StringW>*  contributorNames) ;

/// @brief Method SetupTagsButtons, addr 0x175752c, size 0x38c, virtual false, abstract: false, final false
inline void SetupTagsButtons(::System::Collections::Generic::List_1<::StringW>*  tags) ;

/// @brief Method TagButtonPressed, addr 0x175794c, size 0x70, virtual false, abstract: false, final false
inline void TagButtonPressed(::System::Object*  data) ;

/// @brief Method UpVoteButtonToggled, addr 0x17579bc, size 0x1ac, virtual false, abstract: false, final false
inline void UpVoteButtonToggled(::VROSC::InputDevice*  device, bool  isOn) ;

/// @brief Method UpdateInfo, addr 0x1756b7c, size 0x428, virtual false, abstract: false, final false
inline void UpdateInfo(::VROSC::SessionUIData*  sessionUIData) ;

/// @brief Method <FavoriteButtonToggled>b__28_0, addr 0x1758570, size 0x20, virtual false, abstract: false, final false
inline void _FavoriteButtonToggled_b__28_0() ;

/// @brief Method <FavoriteButtonToggled>b__28_1, addr 0x1758590, size 0x2c, virtual false, abstract: false, final false
inline void _FavoriteButtonToggled_b__28_1(::VROSC::Error  error) ;

/// @brief Method <FavoriteButtonToggled>b__28_2, addr 0x17585bc, size 0x20, virtual false, abstract: false, final false
inline void _FavoriteButtonToggled_b__28_2() ;

/// @brief Method <FavoriteButtonToggled>b__28_3, addr 0x17585dc, size 0x2c, virtual false, abstract: false, final false
inline void _FavoriteButtonToggled_b__28_3(::VROSC::Error  error) ;

/// @brief Method <UpVoteButtonToggled>b__27_0, addr 0x17584d8, size 0x20, virtual false, abstract: false, final false
inline void _UpVoteButtonToggled_b__27_0() ;

/// @brief Method <UpVoteButtonToggled>b__27_1, addr 0x17584f8, size 0x2c, virtual false, abstract: false, final false
inline void _UpVoteButtonToggled_b__27_1(::VROSC::Error  error) ;

/// @brief Method <UpVoteButtonToggled>b__27_2, addr 0x1758524, size 0x20, virtual false, abstract: false, final false
inline void _UpVoteButtonToggled_b__27_2() ;

/// @brief Method <UpVoteButtonToggled>b__27_3, addr 0x1758544, size 0x2c, virtual false, abstract: false, final false
inline void _UpVoteButtonToggled_b__27_3(::VROSC::Error  error) ;

constexpr ::UnityW<::VROSC::UIDataButton> const& __cordl_internal_get__contributorButtonPrefab() const;

constexpr ::UnityW<::VROSC::UIDataButton>& __cordl_internal_get__contributorButtonPrefab() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::UIDataButton>>* const& __cordl_internal_get__contributorButtons() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::UIDataButton>>*& __cordl_internal_get__contributorButtons() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__contributorsList() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__contributorsList() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__favoriteButton() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__favoriteButton() ;

constexpr int32_t const& __cordl_internal_get__maxContributors() const;

constexpr int32_t& __cordl_internal_get__maxContributors() ;

constexpr int32_t const& __cordl_internal_get__maxTags() const;

constexpr int32_t& __cordl_internal_get__maxTags() ;

constexpr ::VROSC::SessionUIData* const& __cordl_internal_get__sessionUIData() const;

constexpr ::VROSC::SessionUIData*& __cordl_internal_get__sessionUIData() ;

constexpr ::UnityW<::VROSC::SessionsLibraryUI> const& __cordl_internal_get__sessionsLibraryUI() const;

constexpr ::UnityW<::VROSC::SessionsLibraryUI>& __cordl_internal_get__sessionsLibraryUI() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__setAsTemplateButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__setAsTemplateButton() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__setAsTemplateErrorText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__setAsTemplateErrorText() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__songDescriptionText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__songDescriptionText() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__songDownloadsText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__songDownloadsText() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__songNameText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__songNameText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__songRatingSection() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__songRatingSection() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__songUpVotesText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__songUpVotesText() ;

constexpr ::UnityW<::VROSC::UIDataButton> const& __cordl_internal_get__tagButtonPrefab() const;

constexpr ::UnityW<::VROSC::UIDataButton>& __cordl_internal_get__tagButtonPrefab() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::UIDataButton>>* const& __cordl_internal_get__tagsButtons() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::UIDataButton>>*& __cordl_internal_get__tagsButtons() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__tagsList() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__tagsList() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__upVoteButton() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__upVoteButton() ;

constexpr void __cordl_internal_set__contributorButtonPrefab(::UnityW<::VROSC::UIDataButton>  value) ;

constexpr void __cordl_internal_set__contributorButtons(::System::Collections::Generic::List_1<::UnityW<::VROSC::UIDataButton>>*  value) ;

constexpr void __cordl_internal_set__contributorsList(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__favoriteButton(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__maxContributors(int32_t  value) ;

constexpr void __cordl_internal_set__maxTags(int32_t  value) ;

constexpr void __cordl_internal_set__sessionUIData(::VROSC::SessionUIData*  value) ;

constexpr void __cordl_internal_set__sessionsLibraryUI(::UnityW<::VROSC::SessionsLibraryUI>  value) ;

constexpr void __cordl_internal_set__setAsTemplateButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__setAsTemplateErrorText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__songDescriptionText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__songDownloadsText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__songNameText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__songRatingSection(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__songUpVotesText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__tagButtonPrefab(::UnityW<::VROSC::UIDataButton>  value) ;

constexpr void __cordl_internal_set__tagsButtons(::System::Collections::Generic::List_1<::UnityW<::VROSC::UIDataButton>>*  value) ;

constexpr void __cordl_internal_set__tagsList(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__upVoteButton(::UnityW<::VROSC::UIToggle>  value) ;

/// @brief Method .ctor, addr 0x175843c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionInfoPopup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionInfoPopup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionInfoPopup(SessionInfoPopup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionInfoPopup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionInfoPopup(SessionInfoPopup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1160};

/// @brief Field _songNameText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____songNameText;

/// @brief Field _songDescriptionText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____songDescriptionText;

/// @brief Field _contributorsList, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____contributorsList;

/// @brief Field _contributorButtonPrefab, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UIDataButton>  ____contributorButtonPrefab;

/// @brief Field _tagsList, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____tagsList;

/// @brief Field _tagButtonPrefab, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UIDataButton>  ____tagButtonPrefab;

/// @brief Field _songRatingSection, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____songRatingSection;

/// @brief Field _songUpVotesText, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____songUpVotesText;

/// @brief Field _songDownloadsText, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____songDownloadsText;

/// @brief Field _upVoteButton, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____upVoteButton;

/// @brief Field _favoriteButton, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____favoriteButton;

/// @brief Field _setAsTemplateButton, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____setAsTemplateButton;

/// @brief Field _setAsTemplateErrorText, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____setAsTemplateErrorText;

/// @brief Field _maxContributors, offset: 0x88, size: 0x4, def value: None
 int32_t  ____maxContributors;

/// @brief Field _maxTags, offset: 0x8c, size: 0x4, def value: None
 int32_t  ____maxTags;

/// @brief Field _sessionsLibraryUI, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::VROSC::SessionsLibraryUI>  ____sessionsLibraryUI;

/// @brief Field _sessionUIData, offset: 0x98, size: 0x8, def value: None
 ::VROSC::SessionUIData*  ____sessionUIData;

/// @brief Field _contributorButtons, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::UIDataButton>>*  ____contributorButtons;

/// @brief Field _tagsButtons, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::UIDataButton>>*  ____tagsButtons;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionInfoPopup, ____songNameText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionInfoPopup, ____songDescriptionText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionInfoPopup, ____contributorsList) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionInfoPopup, ____contributorButtonPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionInfoPopup, ____tagsList) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionInfoPopup, ____tagButtonPrefab) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionInfoPopup, ____songRatingSection) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionInfoPopup, ____songUpVotesText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionInfoPopup, ____songDownloadsText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionInfoPopup, ____upVoteButton) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionInfoPopup, ____favoriteButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionInfoPopup, ____setAsTemplateButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionInfoPopup, ____setAsTemplateErrorText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionInfoPopup, ____maxContributors) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionInfoPopup, ____maxTags) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionInfoPopup, ____sessionsLibraryUI) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionInfoPopup, ____sessionUIData) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionInfoPopup, ____contributorButtons) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionInfoPopup, ____tagsButtons) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionInfoPopup, 0xb0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SessionInfoPopup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionInfoPopup*, "VROSC", "SessionInfoPopup");
