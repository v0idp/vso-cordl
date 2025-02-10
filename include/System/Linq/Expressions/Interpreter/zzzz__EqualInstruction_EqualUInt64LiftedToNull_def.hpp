#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/EqualInstruction_EqualUInt64LiftedToNull.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__EqualInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EqualInstruction_EqualUInt64LiftedToNull)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class EqualInstruction_EqualUInt64LiftedToNull;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EqualInstruction_EqualUInt64LiftedToNull);
// Dependencies System.Linq.Expressions.Interpreter.EqualInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.EqualInstruction/EqualUInt64LiftedToNull
class CORDL_TYPE EqualInstruction_EqualUInt64LiftedToNull : public ::System::Linq::Expressions::Interpreter::EqualInstruction {
public:
// Declarations
static inline ::GlobalNamespace::EqualInstruction_EqualUInt64LiftedToNull* New_ctor() ;

/// @brief Method Run, addr 0x29c2ba0, size 0xe8, virtual true, abstract: false, final false
inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame) ;

/// @brief Method .ctor, addr 0x29c1814, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EqualInstruction_EqualUInt64LiftedToNull() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EqualInstruction_EqualUInt64LiftedToNull", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EqualInstruction_EqualUInt64LiftedToNull(EqualInstruction_EqualUInt64LiftedToNull && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EqualInstruction_EqualUInt64LiftedToNull", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EqualInstruction_EqualUInt64LiftedToNull(EqualInstruction_EqualUInt64LiftedToNull const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9277};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EqualInstruction_EqualUInt64LiftedToNull, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EqualInstruction_EqualUInt64LiftedToNull);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EqualInstruction_EqualUInt64LiftedToNull*, "System.Linq.Expressions.Interpreter", "EqualInstruction/EqualUInt64LiftedToNull");
