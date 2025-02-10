#pragma once
// IWYU pragma private; include "VROSC/IState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IState)
namespace System {
class Object;
}
// Forward declare root types
namespace VROSC {
class IState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::IState);
// Dependencies 
namespace VROSC {
// Is value type: false
// CS Name: VROSC.IState
class CORDL_TYPE IState {
public:
// Declarations
/// @brief Method OnEnter, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnExit() ;

/// @brief Method Tick, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method UpdateData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

// Ctor Parameters [CppParam { name: "", ty: "IState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IState(IState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{823};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VROSC
NEED_NO_BOX(::VROSC::IState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IState*, "VROSC", "IState");
