#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/OrInstruction_OrInt64.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__OrInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OrInstruction_OrInt64)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class OrInstruction_OrInt64;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OrInstruction_OrInt64);
// Dependencies System.Linq.Expressions.Interpreter.OrInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.OrInstruction/OrInt64
class CORDL_TYPE OrInstruction_OrInt64 : public ::System::Linq::Expressions::Interpreter::OrInstruction {
public:
// Declarations
static inline ::GlobalNamespace::OrInstruction_OrInt64* New_ctor() ;

/// @brief Method Run, addr 0x29ee3f4, size 0x100, virtual true, abstract: false, final false
inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame) ;

/// @brief Method .ctor, addr 0x29ee0e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OrInstruction_OrInt64() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OrInstruction_OrInt64", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrInstruction_OrInt64(OrInstruction_OrInt64 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrInstruction_OrInt64", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrInstruction_OrInt64(OrInstruction_OrInt64 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9502};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OrInstruction_OrInt64, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OrInstruction_OrInt64);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OrInstruction_OrInt64*, "System.Linq.Expressions.Interpreter", "OrInstruction/OrInt64");
