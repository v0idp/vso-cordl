#pragma once
// IWYU pragma private; include "VROSC/SetupNoteManagerState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
CORDL_MODULE_EXPORT(SetupNoteManagerState)
namespace System {
class Object;
}
namespace VROSC {
class NoteManager;
}
// Forward declare root types
namespace VROSC {
class SetupNoteManagerState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SetupNoteManagerState);
// Dependencies System.Object, VROSC.IState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SetupNoteManagerState
class CORDL_TYPE SetupNoteManagerState : public ::System::Object {
public:
// Declarations
/// @brief Field _noteManager, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteManager, put=__cordl_internal_set__noteManager)) ::UnityW<::VROSC::NoteManager>  _noteManager;

/// @brief Convert operator to "::VROSC::IState"
constexpr operator  ::VROSC::IState*() noexcept;

static inline ::VROSC::SetupNoteManagerState* New_ctor(::VROSC::NoteManager*  noteManager) ;

/// @brief Method OnEnter, addr 0x16fa34c, size 0x18, virtual true, abstract: false, final true
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x16fa364, size 0x4, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method Tick, addr 0x16fa368, size 0x4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateData, addr 0x16fa36c, size 0x4, virtual true, abstract: false, final true
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

constexpr ::UnityW<::VROSC::NoteManager> const& __cordl_internal_get__noteManager() const;

constexpr ::UnityW<::VROSC::NoteManager>& __cordl_internal_get__noteManager() ;

constexpr void __cordl_internal_set__noteManager(::UnityW<::VROSC::NoteManager>  value) ;

/// @brief Method .ctor, addr 0x16fa324, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::VROSC::NoteManager*  noteManager) ;

/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* i___VROSC__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetupNoteManagerState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetupNoteManagerState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetupNoteManagerState(SetupNoteManagerState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetupNoteManagerState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetupNoteManagerState(SetupNoteManagerState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{817};

/// @brief Field _noteManager, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteManager>  ____noteManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SetupNoteManagerState, ____noteManager) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SetupNoteManagerState, 0x18>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SetupNoteManagerState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SetupNoteManagerState*, "VROSC", "SetupNoteManagerState");
