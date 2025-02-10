#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/EqualInstruction_EqualCharLiftedToNull.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__EqualInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EqualInstruction_EqualCharLiftedToNull)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class EqualInstruction_EqualCharLiftedToNull;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EqualInstruction_EqualCharLiftedToNull);
// Dependencies System.Linq.Expressions.Interpreter.EqualInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.EqualInstruction/EqualCharLiftedToNull
class CORDL_TYPE EqualInstruction_EqualCharLiftedToNull : public ::System::Linq::Expressions::Interpreter::EqualInstruction {
public:
// Declarations
static inline ::GlobalNamespace::EqualInstruction_EqualCharLiftedToNull* New_ctor() ;

/// @brief Method Run, addr 0x29c2630, size 0xe8, virtual true, abstract: false, final false
inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame) ;

/// @brief Method .ctor, addr 0x29c17e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EqualInstruction_EqualCharLiftedToNull() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EqualInstruction_EqualCharLiftedToNull", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EqualInstruction_EqualCharLiftedToNull(EqualInstruction_EqualCharLiftedToNull && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EqualInstruction_EqualCharLiftedToNull", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EqualInstruction_EqualCharLiftedToNull(EqualInstruction_EqualCharLiftedToNull const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9271};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EqualInstruction_EqualCharLiftedToNull, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EqualInstruction_EqualCharLiftedToNull);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EqualInstruction_EqualCharLiftedToNull*, "System.Linq.Expressions.Interpreter", "EqualInstruction/EqualCharLiftedToNull");
