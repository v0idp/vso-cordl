#pragma once
// IWYU pragma private; include "VROSC/WaitForUserToLoginState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
CORDL_MODULE_EXPORT(WaitForUserToLoginState)
namespace System {
class Object;
}
// Forward declare root types
namespace VROSC {
class WaitForUserToLoginState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::WaitForUserToLoginState);
// Dependencies System.Object, VROSC.IState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.WaitForUserToLoginState
class CORDL_TYPE WaitForUserToLoginState : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::VROSC::IState"
constexpr operator  ::VROSC::IState*() noexcept;

static inline ::VROSC::WaitForUserToLoginState* New_ctor() ;

/// @brief Method OnEnter, addr 0x183049c, size 0x4, virtual true, abstract: false, final true
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x18304a0, size 0x4, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method Tick, addr 0x18304a4, size 0x4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateData, addr 0x18304a8, size 0x4, virtual true, abstract: false, final true
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method .ctor, addr 0x1830494, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* i___VROSC__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaitForUserToLoginState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaitForUserToLoginState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaitForUserToLoginState(WaitForUserToLoginState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaitForUserToLoginState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaitForUserToLoginState(WaitForUserToLoginState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{319};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::WaitForUserToLoginState, 0x10>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::WaitForUserToLoginState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::WaitForUserToLoginState*, "VROSC", "WaitForUserToLoginState");
