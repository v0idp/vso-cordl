#pragma once
// IWYU pragma private; include "VROSC/SetupUiState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
CORDL_MODULE_EXPORT(SetupUiState)
namespace GlobalNamespace {
class PunchKeyboard;
}
namespace System {
class Object;
}
namespace VROSC {
class Dashboard;
}
namespace VROSC {
class SetupBeatCounterState;
}
namespace VROSC {
class UISchemeController;
}
// Forward declare root types
namespace VROSC {
class SetupUiState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SetupUiState);
// Dependencies System.Object, VROSC.IState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SetupUiState
class CORDL_TYPE SetupUiState : public ::System::Object {
public:
// Declarations
/// @brief Field _beatCounterState, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatCounterState, put=__cordl_internal_set__beatCounterState)) ::VROSC::SetupBeatCounterState*  _beatCounterState;

/// @brief Field _dashboardPrefab, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__dashboardPrefab, put=__cordl_internal_set__dashboardPrefab)) ::UnityW<::VROSC::Dashboard>  _dashboardPrefab;

/// @brief Field _keyboardPrefab, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__keyboardPrefab, put=__cordl_internal_set__keyboardPrefab)) ::UnityW<::GlobalNamespace::PunchKeyboard>  _keyboardPrefab;

/// @brief Field _uiSchemeController, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__uiSchemeController, put=__cordl_internal_set__uiSchemeController)) ::VROSC::UISchemeController*  _uiSchemeController;

/// @brief Convert operator to "::VROSC::IState"
constexpr operator  ::VROSC::IState*() noexcept;

static inline ::VROSC::SetupUiState* New_ctor(::VROSC::Dashboard*  dashboardPrefab, ::GlobalNamespace::PunchKeyboard*  keyboardPrefab, ::VROSC::UISchemeController*  uiSchemeController) ;

/// @brief Method OnEnter, addr 0x16fa444, size 0xd8, virtual true, abstract: false, final true
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x16fa51c, size 0xf0, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method Tick, addr 0x16fa60c, size 0x4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateData, addr 0x16fa610, size 0xb8, virtual true, abstract: false, final true
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

constexpr ::VROSC::SetupBeatCounterState* const& __cordl_internal_get__beatCounterState() const;

constexpr ::VROSC::SetupBeatCounterState*& __cordl_internal_get__beatCounterState() ;

constexpr ::UnityW<::VROSC::Dashboard> const& __cordl_internal_get__dashboardPrefab() const;

constexpr ::UnityW<::VROSC::Dashboard>& __cordl_internal_get__dashboardPrefab() ;

constexpr ::UnityW<::GlobalNamespace::PunchKeyboard> const& __cordl_internal_get__keyboardPrefab() const;

constexpr ::UnityW<::GlobalNamespace::PunchKeyboard>& __cordl_internal_get__keyboardPrefab() ;

constexpr ::VROSC::UISchemeController* const& __cordl_internal_get__uiSchemeController() const;

constexpr ::VROSC::UISchemeController*& __cordl_internal_get__uiSchemeController() ;

constexpr void __cordl_internal_set__beatCounterState(::VROSC::SetupBeatCounterState*  value) ;

constexpr void __cordl_internal_set__dashboardPrefab(::UnityW<::VROSC::Dashboard>  value) ;

constexpr void __cordl_internal_set__keyboardPrefab(::UnityW<::GlobalNamespace::PunchKeyboard>  value) ;

constexpr void __cordl_internal_set__uiSchemeController(::VROSC::UISchemeController*  value) ;

/// @brief Method .ctor, addr 0x16fa408, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::VROSC::Dashboard*  dashboardPrefab, ::GlobalNamespace::PunchKeyboard*  keyboardPrefab, ::VROSC::UISchemeController*  uiSchemeController) ;

/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* i___VROSC__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetupUiState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetupUiState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetupUiState(SetupUiState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetupUiState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetupUiState(SetupUiState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{820};

/// @brief Field _dashboardPrefab, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::Dashboard>  ____dashboardPrefab;

/// @brief Field _keyboardPrefab, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PunchKeyboard>  ____keyboardPrefab;

/// @brief Field _uiSchemeController, offset: 0x20, size: 0x8, def value: None
 ::VROSC::UISchemeController*  ____uiSchemeController;

/// @brief Field _beatCounterState, offset: 0x28, size: 0x8, def value: None
 ::VROSC::SetupBeatCounterState*  ____beatCounterState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SetupUiState, ____dashboardPrefab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SetupUiState, ____keyboardPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SetupUiState, ____uiSchemeController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SetupUiState, ____beatCounterState) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SetupUiState, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SetupUiState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SetupUiState*, "VROSC", "SetupUiState");
