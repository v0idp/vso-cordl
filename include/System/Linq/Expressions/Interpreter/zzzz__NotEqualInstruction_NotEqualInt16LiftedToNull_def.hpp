#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NotEqualInstruction_NotEqualInt16LiftedToNull.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NotEqualInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NotEqualInstruction_NotEqualInt16LiftedToNull)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualInt16LiftedToNull;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NotEqualInstruction_NotEqualInt16LiftedToNull);
// Dependencies System.Linq.Expressions.Interpreter.NotEqualInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt16LiftedToNull
class CORDL_TYPE NotEqualInstruction_NotEqualInt16LiftedToNull : public ::System::Linq::Expressions::Interpreter::NotEqualInstruction {
public:
// Declarations
static inline ::GlobalNamespace::NotEqualInstruction_NotEqualInt16LiftedToNull* New_ctor() ;

/// @brief Method Run, addr 0x29ea648, size 0xe8, virtual true, abstract: false, final false
inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame) ;

/// @brief Method .ctor, addr 0x29e9994, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NotEqualInstruction_NotEqualInt16LiftedToNull() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NotEqualInstruction_NotEqualInt16LiftedToNull", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NotEqualInstruction_NotEqualInt16LiftedToNull(NotEqualInstruction_NotEqualInt16LiftedToNull && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotEqualInstruction_NotEqualInt16LiftedToNull", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotEqualInstruction_NotEqualInt16LiftedToNull(NotEqualInstruction_NotEqualInt16LiftedToNull const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9473};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NotEqualInstruction_NotEqualInt16LiftedToNull, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NotEqualInstruction_NotEqualInt16LiftedToNull);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NotEqualInstruction_NotEqualInt16LiftedToNull*, "System.Linq.Expressions.Interpreter", "NotEqualInstruction/NotEqualInt16LiftedToNull");
