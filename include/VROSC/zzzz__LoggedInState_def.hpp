#pragma once
// IWYU pragma private; include "VROSC/LoggedInState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
CORDL_MODULE_EXPORT(LoggedInState)
namespace System {
class Object;
}
// Forward declare root types
namespace VROSC {
class LoggedInState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoggedInState);
// Dependencies System.Object, VROSC.IState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoggedInState
class CORDL_TYPE LoggedInState : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::VROSC::IState"
constexpr operator  ::VROSC::IState*() noexcept;

static inline ::VROSC::LoggedInState* New_ctor() ;

/// @brief Method OnEnter, addr 0x182f108, size 0x4, virtual true, abstract: false, final true
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x182f10c, size 0x4, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method Tick, addr 0x182f110, size 0x4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateData, addr 0x182f114, size 0x4, virtual true, abstract: false, final true
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method .ctor, addr 0x182d044, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* i___VROSC__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoggedInState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoggedInState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoggedInState(LoggedInState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoggedInState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoggedInState(LoggedInState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{314};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::LoggedInState, 0x10>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoggedInState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoggedInState*, "VROSC", "LoggedInState");
