#pragma once
// IWYU pragma private; include "VROSC/SetupInstrumentsState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
CORDL_MODULE_EXPORT(SetupInstrumentsState)
namespace System {
class Object;
}
namespace VROSC {
class InstrumentHub;
}
// Forward declare root types
namespace VROSC {
class SetupInstrumentsState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SetupInstrumentsState);
// Dependencies System.Object, VROSC.IState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SetupInstrumentsState
class CORDL_TYPE SetupInstrumentsState : public ::System::Object {
public:
// Declarations
/// @brief Field _instrumentHub, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrumentHub, put=__cordl_internal_set__instrumentHub)) ::UnityW<::VROSC::InstrumentHub>  _instrumentHub;

/// @brief Convert operator to "::VROSC::IState"
constexpr operator  ::VROSC::IState*() noexcept;

static inline ::VROSC::SetupInstrumentsState* New_ctor(::VROSC::InstrumentHub*  instrumentHub) ;

/// @brief Method OnEnter, addr 0x16fa25c, size 0x1c, virtual true, abstract: false, final true
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x16fa278, size 0x4, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method Tick, addr 0x16fa27c, size 0x4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateData, addr 0x16fa280, size 0x4, virtual true, abstract: false, final true
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

constexpr ::UnityW<::VROSC::InstrumentHub> const& __cordl_internal_get__instrumentHub() const;

constexpr ::UnityW<::VROSC::InstrumentHub>& __cordl_internal_get__instrumentHub() ;

constexpr void __cordl_internal_set__instrumentHub(::UnityW<::VROSC::InstrumentHub>  value) ;

/// @brief Method .ctor, addr 0x16fa234, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::VROSC::InstrumentHub*  instrumentHub) ;

/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* i___VROSC__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetupInstrumentsState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetupInstrumentsState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetupInstrumentsState(SetupInstrumentsState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetupInstrumentsState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetupInstrumentsState(SetupInstrumentsState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{814};

/// @brief Field _instrumentHub, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::InstrumentHub>  ____instrumentHub;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SetupInstrumentsState, ____instrumentHub) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SetupInstrumentsState, 0x18>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SetupInstrumentsState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SetupInstrumentsState*, "VROSC", "SetupInstrumentsState");
