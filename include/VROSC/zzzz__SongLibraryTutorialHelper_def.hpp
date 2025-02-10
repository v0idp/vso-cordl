#pragma once
// IWYU pragma private; include "VROSC/SongLibraryTutorialHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SongLibraryTutorialHelper)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class Interactable;
}
namespace VROSC {
class TutorialBlinkingUIElement;
}
namespace VROSC {
struct TutorialEvent;
}
// Forward declare root types
namespace VROSC {
class SongLibraryTutorialHelper;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SongLibraryTutorialHelper);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SongLibraryTutorialHelper
class CORDL_TYPE SongLibraryTutorialHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _disabledInteractables, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__disabledInteractables, put=__cordl_internal_set__disabledInteractables)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>*  _disabledInteractables;

/// @brief Field _interactablesToDisable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactablesToDisable, put=__cordl_internal_set__interactablesToDisable)) ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  _interactablesToDisable;

/// @brief Field _saveAsButtonBlinker, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__saveAsButtonBlinker, put=__cordl_internal_set__saveAsButtonBlinker)) ::UnityW<::VROSC::TutorialBlinkingUIElement>  _saveAsButtonBlinker;

/// @brief Field _saveAsButtonInteractable, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__saveAsButtonInteractable, put=__cordl_internal_set__saveAsButtonInteractable)) ::UnityW<::VROSC::Interactable>  _saveAsButtonInteractable;

/// @brief Field _saveButtonBlinker, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__saveButtonBlinker, put=__cordl_internal_set__saveButtonBlinker)) ::UnityW<::VROSC::TutorialBlinkingUIElement>  _saveButtonBlinker;

/// @brief Field _saveButtonInteractable, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__saveButtonInteractable, put=__cordl_internal_set__saveButtonInteractable)) ::UnityW<::VROSC::Interactable>  _saveButtonInteractable;

/// @brief Field _songNameBlinker, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__songNameBlinker, put=__cordl_internal_set__songNameBlinker)) ::UnityW<::VROSC::TutorialBlinkingUIElement>  _songNameBlinker;

/// @brief Field _songNameInteractable, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__songNameInteractable, put=__cordl_internal_set__songNameInteractable)) ::UnityW<::VROSC::Interactable>  _songNameInteractable;

/// @brief Method DisableInteractables, addr 0x17039e0, size 0x134, virtual false, abstract: false, final false
inline void DisableInteractables() ;

static inline ::VROSC::SongLibraryTutorialHelper* New_ctor() ;

/// @brief Method ResetAll, addr 0x17037f8, size 0x1e8, virtual false, abstract: false, final false
inline void ResetAll() ;

/// @brief Method SaveAsButtonClicked, addr 0x1703fe0, size 0xf0, virtual false, abstract: false, final false
inline void SaveAsButtonClicked(bool  enabled) ;

/// @brief Method SaveButtonClicked, addr 0x1703e00, size 0xf0, virtual false, abstract: false, final false
inline void SaveButtonClicked(bool  enabled) ;

/// @brief Method SongNameClicked, addr 0x1703ef0, size 0xf0, virtual false, abstract: false, final false
inline void SongNameClicked(bool  enabled) ;

/// @brief Method Start, addr 0x17036d8, size 0xf4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartBlinkSaveButtons, addr 0x1703b14, size 0x2ec, virtual false, abstract: false, final false
inline void StartBlinkSaveButtons() ;

/// @brief Method TutorialEventTriggered, addr 0x17037cc, size 0x2c, virtual false, abstract: false, final false
inline void TutorialEventTriggered(::VROSC::TutorialEvent  tutorialEvent) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>* const& __cordl_internal_get__disabledInteractables() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>*& __cordl_internal_get__disabledInteractables() ;

constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*> const& __cordl_internal_get__interactablesToDisable() const;

constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>& __cordl_internal_get__interactablesToDisable() ;

constexpr ::UnityW<::VROSC::TutorialBlinkingUIElement> const& __cordl_internal_get__saveAsButtonBlinker() const;

constexpr ::UnityW<::VROSC::TutorialBlinkingUIElement>& __cordl_internal_get__saveAsButtonBlinker() ;

constexpr ::UnityW<::VROSC::Interactable> const& __cordl_internal_get__saveAsButtonInteractable() const;

constexpr ::UnityW<::VROSC::Interactable>& __cordl_internal_get__saveAsButtonInteractable() ;

constexpr ::UnityW<::VROSC::TutorialBlinkingUIElement> const& __cordl_internal_get__saveButtonBlinker() const;

constexpr ::UnityW<::VROSC::TutorialBlinkingUIElement>& __cordl_internal_get__saveButtonBlinker() ;

constexpr ::UnityW<::VROSC::Interactable> const& __cordl_internal_get__saveButtonInteractable() const;

constexpr ::UnityW<::VROSC::Interactable>& __cordl_internal_get__saveButtonInteractable() ;

constexpr ::UnityW<::VROSC::TutorialBlinkingUIElement> const& __cordl_internal_get__songNameBlinker() const;

constexpr ::UnityW<::VROSC::TutorialBlinkingUIElement>& __cordl_internal_get__songNameBlinker() ;

constexpr ::UnityW<::VROSC::Interactable> const& __cordl_internal_get__songNameInteractable() const;

constexpr ::UnityW<::VROSC::Interactable>& __cordl_internal_get__songNameInteractable() ;

constexpr void __cordl_internal_set__disabledInteractables(::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>*  value) ;

constexpr void __cordl_internal_set__interactablesToDisable(::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  value) ;

constexpr void __cordl_internal_set__saveAsButtonBlinker(::UnityW<::VROSC::TutorialBlinkingUIElement>  value) ;

constexpr void __cordl_internal_set__saveAsButtonInteractable(::UnityW<::VROSC::Interactable>  value) ;

constexpr void __cordl_internal_set__saveButtonBlinker(::UnityW<::VROSC::TutorialBlinkingUIElement>  value) ;

constexpr void __cordl_internal_set__saveButtonInteractable(::UnityW<::VROSC::Interactable>  value) ;

constexpr void __cordl_internal_set__songNameBlinker(::UnityW<::VROSC::TutorialBlinkingUIElement>  value) ;

constexpr void __cordl_internal_set__songNameInteractable(::UnityW<::VROSC::Interactable>  value) ;

/// @brief Method .ctor, addr 0x17040d0, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SongLibraryTutorialHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SongLibraryTutorialHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SongLibraryTutorialHelper(SongLibraryTutorialHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SongLibraryTutorialHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SongLibraryTutorialHelper(SongLibraryTutorialHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{847};

/// @brief Field _interactablesToDisable, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  ____interactablesToDisable;

/// @brief Field _saveButtonBlinker, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::TutorialBlinkingUIElement>  ____saveButtonBlinker;

/// @brief Field _songNameBlinker, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::TutorialBlinkingUIElement>  ____songNameBlinker;

/// @brief Field _saveAsButtonBlinker, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::TutorialBlinkingUIElement>  ____saveAsButtonBlinker;

/// @brief Field _saveButtonInteractable, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::Interactable>  ____saveButtonInteractable;

/// @brief Field _songNameInteractable, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::Interactable>  ____songNameInteractable;

/// @brief Field _saveAsButtonInteractable, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::Interactable>  ____saveAsButtonInteractable;

/// @brief Field _disabledInteractables, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>*  ____disabledInteractables;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SongLibraryTutorialHelper, ____interactablesToDisable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SongLibraryTutorialHelper, ____saveButtonBlinker) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SongLibraryTutorialHelper, ____songNameBlinker) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SongLibraryTutorialHelper, ____saveAsButtonBlinker) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SongLibraryTutorialHelper, ____saveButtonInteractable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SongLibraryTutorialHelper, ____songNameInteractable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SongLibraryTutorialHelper, ____saveAsButtonInteractable) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::SongLibraryTutorialHelper, ____disabledInteractables) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SongLibraryTutorialHelper, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SongLibraryTutorialHelper);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SongLibraryTutorialHelper*, "VROSC", "SongLibraryTutorialHelper");
