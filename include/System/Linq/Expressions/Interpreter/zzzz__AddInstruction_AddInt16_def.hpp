#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/AddInstruction_AddInt16.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__AddInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AddInstruction_AddInt16)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class AddInstruction_AddInt16;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AddInstruction_AddInt16);
// Dependencies System.Linq.Expressions.Interpreter.AddInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.AddInstruction/AddInt16
class CORDL_TYPE AddInstruction_AddInt16 : public ::System::Linq::Expressions::Interpreter::AddInstruction {
public:
// Declarations
static inline ::GlobalNamespace::AddInstruction_AddInt16* New_ctor() ;

/// @brief Method Run, addr 0x29b8874, size 0x148, virtual true, abstract: false, final false
inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame) ;

/// @brief Method .ctor, addr 0x29b8834, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AddInstruction_AddInt16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AddInstruction_AddInt16", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AddInstruction_AddInt16(AddInstruction_AddInt16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddInstruction_AddInt16", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddInstruction_AddInt16(AddInstruction_AddInt16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9178};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AddInstruction_AddInt16, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AddInstruction_AddInt16);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AddInstruction_AddInt16*, "System.Linq.Expressions.Interpreter", "AddInstruction/AddInt16");
