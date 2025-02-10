#pragma once
// IWYU pragma private; include "VROSC/SetupBeatCounterState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
CORDL_MODULE_EXPORT(SetupBeatCounterState)
namespace System {
class Object;
}
namespace VROSC {
class BeatCounterUI;
}
namespace VROSC {
class BeatCounter;
}
// Forward declare root types
namespace VROSC {
class SetupBeatCounterState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SetupBeatCounterState);
// Dependencies System.Object, VROSC.IState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SetupBeatCounterState
class CORDL_TYPE SetupBeatCounterState : public ::System::Object {
public:
// Declarations
/// @brief Field _beatCounter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatCounter, put=__cordl_internal_set__beatCounter)) ::UnityW<::VROSC::BeatCounter>  _beatCounter;

/// @brief Field _beatCounterUI, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatCounterUI, put=__cordl_internal_set__beatCounterUI)) ::UnityW<::VROSC::BeatCounterUI>  _beatCounterUI;

/// @brief Convert operator to "::VROSC::IState"
constexpr operator  ::VROSC::IState*() noexcept;

static inline ::VROSC::SetupBeatCounterState* New_ctor(::VROSC::BeatCounter*  beatCounter) ;

/// @brief Method OnEnter, addr 0x16fa100, size 0x24, virtual true, abstract: false, final true
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x16fa124, size 0x4, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method Tick, addr 0x16fa128, size 0x4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateData, addr 0x16fa12c, size 0xb8, virtual true, abstract: false, final true
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

constexpr ::UnityW<::VROSC::BeatCounter> const& __cordl_internal_get__beatCounter() const;

constexpr ::UnityW<::VROSC::BeatCounter>& __cordl_internal_get__beatCounter() ;

constexpr ::UnityW<::VROSC::BeatCounterUI> const& __cordl_internal_get__beatCounterUI() const;

constexpr ::UnityW<::VROSC::BeatCounterUI>& __cordl_internal_get__beatCounterUI() ;

constexpr void __cordl_internal_set__beatCounter(::UnityW<::VROSC::BeatCounter>  value) ;

constexpr void __cordl_internal_set__beatCounterUI(::UnityW<::VROSC::BeatCounterUI>  value) ;

/// @brief Method .ctor, addr 0x16fa0d8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::VROSC::BeatCounter*  beatCounter) ;

/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* i___VROSC__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetupBeatCounterState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetupBeatCounterState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetupBeatCounterState(SetupBeatCounterState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetupBeatCounterState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetupBeatCounterState(SetupBeatCounterState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{812};

/// @brief Field _beatCounter, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::BeatCounter>  ____beatCounter;

/// @brief Field _beatCounterUI, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::BeatCounterUI>  ____beatCounterUI;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SetupBeatCounterState, ____beatCounter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SetupBeatCounterState, ____beatCounterUI) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SetupBeatCounterState, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SetupBeatCounterState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SetupBeatCounterState*, "VROSC", "SetupBeatCounterState");
