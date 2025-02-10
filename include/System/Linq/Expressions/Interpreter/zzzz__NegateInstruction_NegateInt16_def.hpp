#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NegateInstruction_NegateInt16.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NegateInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NegateInstruction_NegateInt16)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class NegateInstruction_NegateInt16;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NegateInstruction_NegateInt16);
// Dependencies System.Linq.Expressions.Interpreter.NegateInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NegateInstruction/NegateInt16
class CORDL_TYPE NegateInstruction_NegateInt16 : public ::System::Linq::Expressions::Interpreter::NegateInstruction {
public:
// Declarations
static inline ::GlobalNamespace::NegateInstruction_NegateInt16* New_ctor() ;

/// @brief Method Run, addr 0x29e80ac, size 0xa4, virtual true, abstract: false, final false
inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame) ;

/// @brief Method .ctor, addr 0x29e8084, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NegateInstruction_NegateInt16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NegateInstruction_NegateInt16", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NegateInstruction_NegateInt16(NegateInstruction_NegateInt16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NegateInstruction_NegateInt16", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NegateInstruction_NegateInt16(NegateInstruction_NegateInt16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9447};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NegateInstruction_NegateInt16, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NegateInstruction_NegateInt16);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NegateInstruction_NegateInt16*, "System.Linq.Expressions.Interpreter", "NegateInstruction/NegateInt16");
