#pragma once
// IWYU pragma private; include "VROSC/LoopEditorModeSelectorUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoopEditorModeSelectorUI)
namespace VROSC {
class LoopEditorModeUI;
}
namespace VROSC {
class LoopEditorUI;
}
namespace VROSC {
class UIToggleGroup;
}
// Forward declare root types
namespace VROSC {
class LoopEditorModeSelectorUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopEditorModeSelectorUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopEditorModeSelectorUI
class CORDL_TYPE LoopEditorModeSelectorUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _currentState, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentState, put=__cordl_internal_set__currentState)) ::UnityW<::VROSC::LoopEditorModeUI>  _currentState;

/// @brief Field _loopEditorUI, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopEditorUI, put=__cordl_internal_set__loopEditorUI)) ::UnityW<::VROSC::LoopEditorUI>  _loopEditorUI;

/// @brief Field _modes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__modes, put=__cordl_internal_set__modes)) ::ArrayW<::UnityW<::VROSC::LoopEditorModeUI>,::Array<::UnityW<::VROSC::LoopEditorModeUI>>*>  _modes;

/// @brief Field _toggles, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggles, put=__cordl_internal_set__toggles)) ::UnityW<::VROSC::UIToggleGroup>  _toggles;

/// @brief Method Awake, addr 0x1893d68, size 0xe0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FillSpinner, addr 0x1893e48, size 0x128, virtual false, abstract: false, final false
inline void FillSpinner() ;

static inline ::VROSC::LoopEditorModeSelectorUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1893f70, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetState, addr 0x1893cac, size 0xbc, virtual false, abstract: false, final false
inline void SetState(int32_t  state) ;

/// @brief Method Setup, addr 0x1892c58, size 0x78, virtual false, abstract: false, final false
inline void Setup(::VROSC::LoopEditorUI*  loopEditorUI) ;

constexpr ::UnityW<::VROSC::LoopEditorModeUI> const& __cordl_internal_get__currentState() const;

constexpr ::UnityW<::VROSC::LoopEditorModeUI>& __cordl_internal_get__currentState() ;

constexpr ::UnityW<::VROSC::LoopEditorUI> const& __cordl_internal_get__loopEditorUI() const;

constexpr ::UnityW<::VROSC::LoopEditorUI>& __cordl_internal_get__loopEditorUI() ;

constexpr ::ArrayW<::UnityW<::VROSC::LoopEditorModeUI>,::Array<::UnityW<::VROSC::LoopEditorModeUI>>*> const& __cordl_internal_get__modes() const;

constexpr ::ArrayW<::UnityW<::VROSC::LoopEditorModeUI>,::Array<::UnityW<::VROSC::LoopEditorModeUI>>*>& __cordl_internal_get__modes() ;

constexpr ::UnityW<::VROSC::UIToggleGroup> const& __cordl_internal_get__toggles() const;

constexpr ::UnityW<::VROSC::UIToggleGroup>& __cordl_internal_get__toggles() ;

constexpr void __cordl_internal_set__currentState(::UnityW<::VROSC::LoopEditorModeUI>  value) ;

constexpr void __cordl_internal_set__loopEditorUI(::UnityW<::VROSC::LoopEditorUI>  value) ;

constexpr void __cordl_internal_set__modes(::ArrayW<::UnityW<::VROSC::LoopEditorModeUI>,::Array<::UnityW<::VROSC::LoopEditorModeUI>>*>  value) ;

constexpr void __cordl_internal_set__toggles(::UnityW<::VROSC::UIToggleGroup>  value) ;

/// @brief Method .ctor, addr 0x1894048, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopEditorModeSelectorUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopEditorModeSelectorUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopEditorModeSelectorUI(LoopEditorModeSelectorUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopEditorModeSelectorUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopEditorModeSelectorUI(LoopEditorModeSelectorUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{643};

/// @brief Field _toggles, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggleGroup>  ____toggles;

/// @brief Field _modes, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::LoopEditorModeUI>,::Array<::UnityW<::VROSC::LoopEditorModeUI>>*>  ____modes;

/// @brief Field _currentState, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopEditorModeUI>  ____currentState;

/// @brief Field _loopEditorUI, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopEditorUI>  ____loopEditorUI;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopEditorModeSelectorUI, ____toggles) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorModeSelectorUI, ____modes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorModeSelectorUI, ____currentState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorModeSelectorUI, ____loopEditorUI) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopEditorModeSelectorUI, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopEditorModeSelectorUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopEditorModeSelectorUI*, "VROSC", "LoopEditorModeSelectorUI");
