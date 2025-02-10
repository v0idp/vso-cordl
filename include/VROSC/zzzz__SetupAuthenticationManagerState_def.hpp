#pragma once
// IWYU pragma private; include "VROSC/SetupAuthenticationManagerState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
CORDL_MODULE_EXPORT(SetupAuthenticationManagerState)
namespace System {
class Object;
}
namespace VROSC {
class AuthenticationManager;
}
// Forward declare root types
namespace VROSC {
class SetupAuthenticationManagerState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SetupAuthenticationManagerState);
// Dependencies System.Object, VROSC.IState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SetupAuthenticationManagerState
class CORDL_TYPE SetupAuthenticationManagerState : public ::System::Object {
public:
// Declarations
/// @brief Field _authenticationManager, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__authenticationManager, put=__cordl_internal_set__authenticationManager)) ::UnityW<::VROSC::AuthenticationManager>  _authenticationManager;

/// @brief Convert operator to "::VROSC::IState"
constexpr operator  ::VROSC::IState*() noexcept;

static inline ::VROSC::SetupAuthenticationManagerState* New_ctor(::VROSC::AuthenticationManager*  authenticationManager) ;

/// @brief Method OnEnter, addr 0x16fa0b0, size 0x1c, virtual true, abstract: false, final true
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x16fa0cc, size 0x4, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method Tick, addr 0x16fa0d0, size 0x4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateData, addr 0x16fa0d4, size 0x4, virtual true, abstract: false, final true
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

constexpr ::UnityW<::VROSC::AuthenticationManager> const& __cordl_internal_get__authenticationManager() const;

constexpr ::UnityW<::VROSC::AuthenticationManager>& __cordl_internal_get__authenticationManager() ;

constexpr void __cordl_internal_set__authenticationManager(::UnityW<::VROSC::AuthenticationManager>  value) ;

/// @brief Method .ctor, addr 0x16fa088, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::VROSC::AuthenticationManager*  authenticationManager) ;

/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* i___VROSC__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetupAuthenticationManagerState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetupAuthenticationManagerState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetupAuthenticationManagerState(SetupAuthenticationManagerState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetupAuthenticationManagerState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetupAuthenticationManagerState(SetupAuthenticationManagerState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{811};

/// @brief Field _authenticationManager, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::AuthenticationManager>  ____authenticationManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SetupAuthenticationManagerState, ____authenticationManager) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SetupAuthenticationManagerState, 0x18>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SetupAuthenticationManagerState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SetupAuthenticationManagerState*, "VROSC", "SetupAuthenticationManagerState");
