#pragma once
// IWYU pragma private; include "VROSC/DashboardTutorialHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DashboardTutorialHelper)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class DashboardWidgetButtonTutorialHelper;
}
namespace VROSC {
class Interactable;
}
namespace VROSC {
struct TutorialEvent;
}
// Forward declare root types
namespace VROSC {
class DashboardTutorialHelper;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DashboardTutorialHelper);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DashboardTutorialHelper
class CORDL_TYPE DashboardTutorialHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _boardButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__boardButton, put=__cordl_internal_set__boardButton)) ::UnityW<::VROSC::DashboardWidgetButtonTutorialHelper>  _boardButton;

/// @brief Field _disabledInteractables, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__disabledInteractables, put=__cordl_internal_set__disabledInteractables)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>*  _disabledInteractables;

/// @brief Field _empadsButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__empadsButton, put=__cordl_internal_set__empadsButton)) ::UnityW<::VROSC::DashboardWidgetButtonTutorialHelper>  _empadsButton;

/// @brief Field _interactablesParent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactablesParent, put=__cordl_internal_set__interactablesParent)) ::UnityW<::UnityEngine::GameObject>  _interactablesParent;

/// @brief Field _libraryButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__libraryButton, put=__cordl_internal_set__libraryButton)) ::UnityW<::VROSC::DashboardWidgetButtonTutorialHelper>  _libraryButton;

/// @brief Field _looperButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__looperButton, put=__cordl_internal_set__looperButton)) ::UnityW<::VROSC::DashboardWidgetButtonTutorialHelper>  _looperButton;

/// @brief Method BoardButtonClicked, addr 0x170099c, size 0x110, virtual false, abstract: false, final false
inline void BoardButtonClicked() ;

/// @brief Method BoardOpenedAgain, addr 0x1700fdc, size 0x10c, virtual false, abstract: false, final false
inline void BoardOpenedAgain() ;

/// @brief Method DisableAllInteractables, addr 0x170040c, size 0x158, virtual false, abstract: false, final false
inline void DisableAllInteractables() ;

/// @brief Method DisableBoardButton, addr 0x1700728, size 0xc, virtual false, abstract: false, final false
inline void DisableBoardButton() ;

/// @brief Method EmpadsButtonPressed, addr 0x1700da4, size 0x11c, virtual false, abstract: false, final false
inline void EmpadsButtonPressed() ;

/// @brief Method EnableBoardButton, addr 0x1700564, size 0xc, virtual false, abstract: false, final false
inline void EnableBoardButton() ;

/// @brief Method EnableEmpadsButton, addr 0x1700734, size 0xc, virtual false, abstract: false, final false
inline void EnableEmpadsButton() ;

/// @brief Method EnableLibraryButton, addr 0x17008b0, size 0xd4, virtual false, abstract: false, final false
inline void EnableLibraryButton() ;

/// @brief Method EnableLooperButton, addr 0x17007c4, size 0xd4, virtual false, abstract: false, final false
inline void EnableLooperButton() ;

/// @brief Method LibraryButtonPressed, addr 0x1700ec0, size 0x11c, virtual false, abstract: false, final false
inline void LibraryButtonPressed() ;

/// @brief Method LooperButtonPressed, addr 0x1700c88, size 0x11c, virtual false, abstract: false, final false
inline void LooperButtonPressed() ;

static inline ::VROSC::DashboardTutorialHelper* New_ctor() ;

/// @brief Method ResetAll, addr 0x17005a0, size 0x188, virtual false, abstract: false, final false
inline void ResetAll() ;

/// @brief Method SetButtonDisabledShared, addr 0x1700aac, size 0x160, virtual false, abstract: false, final false
inline void SetButtonDisabledShared(::VROSC::DashboardWidgetButtonTutorialHelper*  button, bool  disable) ;

/// @brief Method Start, addr 0x170004c, size 0x180, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartBoardButtonBlinking, addr 0x1700570, size 0x18, virtual false, abstract: false, final false
inline void StartBoardButtonBlinking() ;

/// @brief Method StartLibraryButtonBlinking, addr 0x1700984, size 0x18, virtual false, abstract: false, final false
inline void StartLibraryButtonBlinking() ;

/// @brief Method StartLooperButtonBlinking, addr 0x1700898, size 0x18, virtual false, abstract: false, final false
inline void StartLooperButtonBlinking() ;

/// @brief Method StopBoardButtonBlinking, addr 0x1700588, size 0x18, virtual false, abstract: false, final false
inline void StopBoardButtonBlinking() ;

/// @brief Method TutorialEventTriggered, addr 0x17001cc, size 0x240, virtual false, abstract: false, final false
inline void TutorialEventTriggered(::VROSC::TutorialEvent  tutorialEvent) ;

constexpr ::UnityW<::VROSC::DashboardWidgetButtonTutorialHelper> const& __cordl_internal_get__boardButton() const;

constexpr ::UnityW<::VROSC::DashboardWidgetButtonTutorialHelper>& __cordl_internal_get__boardButton() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>* const& __cordl_internal_get__disabledInteractables() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>*& __cordl_internal_get__disabledInteractables() ;

constexpr ::UnityW<::VROSC::DashboardWidgetButtonTutorialHelper> const& __cordl_internal_get__empadsButton() const;

constexpr ::UnityW<::VROSC::DashboardWidgetButtonTutorialHelper>& __cordl_internal_get__empadsButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__interactablesParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__interactablesParent() ;

constexpr ::UnityW<::VROSC::DashboardWidgetButtonTutorialHelper> const& __cordl_internal_get__libraryButton() const;

constexpr ::UnityW<::VROSC::DashboardWidgetButtonTutorialHelper>& __cordl_internal_get__libraryButton() ;

constexpr ::UnityW<::VROSC::DashboardWidgetButtonTutorialHelper> const& __cordl_internal_get__looperButton() const;

constexpr ::UnityW<::VROSC::DashboardWidgetButtonTutorialHelper>& __cordl_internal_get__looperButton() ;

constexpr void __cordl_internal_set__boardButton(::UnityW<::VROSC::DashboardWidgetButtonTutorialHelper>  value) ;

constexpr void __cordl_internal_set__disabledInteractables(::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>*  value) ;

constexpr void __cordl_internal_set__empadsButton(::UnityW<::VROSC::DashboardWidgetButtonTutorialHelper>  value) ;

constexpr void __cordl_internal_set__interactablesParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__libraryButton(::UnityW<::VROSC::DashboardWidgetButtonTutorialHelper>  value) ;

constexpr void __cordl_internal_set__looperButton(::UnityW<::VROSC::DashboardWidgetButtonTutorialHelper>  value) ;

/// @brief Method .ctor, addr 0x17010e8, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DashboardTutorialHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DashboardTutorialHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DashboardTutorialHelper(DashboardTutorialHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DashboardTutorialHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DashboardTutorialHelper(DashboardTutorialHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{843};

/// @brief Field _interactablesParent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____interactablesParent;

/// @brief Field _boardButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::DashboardWidgetButtonTutorialHelper>  ____boardButton;

/// @brief Field _empadsButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::DashboardWidgetButtonTutorialHelper>  ____empadsButton;

/// @brief Field _looperButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::DashboardWidgetButtonTutorialHelper>  ____looperButton;

/// @brief Field _libraryButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::DashboardWidgetButtonTutorialHelper>  ____libraryButton;

/// @brief Field _disabledInteractables, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>*  ____disabledInteractables;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DashboardTutorialHelper, ____interactablesParent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardTutorialHelper, ____boardButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardTutorialHelper, ____empadsButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardTutorialHelper, ____looperButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardTutorialHelper, ____libraryButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::DashboardTutorialHelper, ____disabledInteractables) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DashboardTutorialHelper, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DashboardTutorialHelper);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DashboardTutorialHelper*, "VROSC", "DashboardTutorialHelper");
