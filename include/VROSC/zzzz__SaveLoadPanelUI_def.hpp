#pragma once
// IWYU pragma private; include "VROSC/SaveLoadPanelUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SaveLoadPanelUI)
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class UIToggle;
}
// Forward declare root types
namespace VROSC {
class SaveLoadPanelUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SaveLoadPanelUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SaveLoadPanelUI
class CORDL_TYPE SaveLoadPanelUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _songsLibraryButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__songsLibraryButton, put=__cordl_internal_set__songsLibraryButton)) ::UnityW<::VROSC::UIToggle>  _songsLibraryButton;

/// @brief Method Awake, addr 0x1746774, size 0x134, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::SaveLoadPanelUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17468a8, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x1746980, size 0x88, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ToggleSongsLibraryButtonPressed, addr 0x1746a08, size 0x64, virtual false, abstract: false, final false
inline void ToggleSongsLibraryButtonPressed(::VROSC::InputDevice*  inputDevice, bool  toggled) ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__songsLibraryButton() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__songsLibraryButton() ;

constexpr void __cordl_internal_set__songsLibraryButton(::UnityW<::VROSC::UIToggle>  value) ;

/// @brief Method .ctor, addr 0x1746a6c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadPanelUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadPanelUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveLoadPanelUI(SaveLoadPanelUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadPanelUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveLoadPanelUI(SaveLoadPanelUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1126};

/// @brief Field _songsLibraryButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____songsLibraryButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveLoadPanelUI, ____songsLibraryButton) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadPanelUI, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SaveLoadPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadPanelUI*, "VROSC", "SaveLoadPanelUI");
