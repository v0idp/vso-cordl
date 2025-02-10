#pragma once
// IWYU pragma private; include "VROSC/SetupInputManagerState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
CORDL_MODULE_EXPORT(SetupInputManagerState)
namespace System {
class Object;
}
namespace VROSC {
class InputManager;
}
// Forward declare root types
namespace VROSC {
class SetupInputManagerState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SetupInputManagerState);
// Dependencies System.Object, VROSC.IState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SetupInputManagerState
class CORDL_TYPE SetupInputManagerState : public ::System::Object {
public:
// Declarations
/// @brief Field _inputManager, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputManager, put=__cordl_internal_set__inputManager)) ::UnityW<::VROSC::InputManager>  _inputManager;

/// @brief Convert operator to "::VROSC::IState"
constexpr operator  ::VROSC::IState*() noexcept;

static inline ::VROSC::SetupInputManagerState* New_ctor(::VROSC::InputManager*  inputManager) ;

/// @brief Method OnEnter, addr 0x16fa20c, size 0x1c, virtual true, abstract: false, final true
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x16fa228, size 0x4, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method Tick, addr 0x16fa22c, size 0x4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateData, addr 0x16fa230, size 0x4, virtual true, abstract: false, final true
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

constexpr ::UnityW<::VROSC::InputManager> const& __cordl_internal_get__inputManager() const;

constexpr ::UnityW<::VROSC::InputManager>& __cordl_internal_get__inputManager() ;

constexpr void __cordl_internal_set__inputManager(::UnityW<::VROSC::InputManager>  value) ;

/// @brief Method .ctor, addr 0x16fa1e4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::VROSC::InputManager*  inputManager) ;

/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* i___VROSC__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetupInputManagerState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetupInputManagerState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetupInputManagerState(SetupInputManagerState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetupInputManagerState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetupInputManagerState(SetupInputManagerState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{813};

/// @brief Field _inputManager, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::InputManager>  ____inputManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SetupInputManagerState, ____inputManager) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SetupInputManagerState, 0x18>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SetupInputManagerState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SetupInputManagerState*, "VROSC", "SetupInputManagerState");
