#pragma once
// IWYU pragma private; include "VROSC/TutorialCompletedState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
CORDL_MODULE_EXPORT(TutorialCompletedState)
namespace System {
class Object;
}
// Forward declare root types
namespace VROSC {
class TutorialCompletedState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TutorialCompletedState);
// Dependencies System.Object, VROSC.IState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TutorialCompletedState
class CORDL_TYPE TutorialCompletedState : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::VROSC::IState"
constexpr operator  ::VROSC::IState*() noexcept;

static inline ::VROSC::TutorialCompletedState* New_ctor() ;

/// @brief Method OnEnter, addr 0x1706948, size 0x4, virtual true, abstract: false, final true
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x170694c, size 0x4, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method Tick, addr 0x1706950, size 0x4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateData, addr 0x1706954, size 0x4, virtual true, abstract: false, final true
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method .ctor, addr 0x1706940, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* i___VROSC__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TutorialCompletedState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TutorialCompletedState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TutorialCompletedState(TutorialCompletedState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TutorialCompletedState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TutorialCompletedState(TutorialCompletedState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{855};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::TutorialCompletedState, 0x10>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TutorialCompletedState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialCompletedState*, "VROSC", "TutorialCompletedState");
