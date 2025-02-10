#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ModuloInstruction_ModuloUInt64.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__ModuloInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModuloInstruction_ModuloUInt64)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class ModuloInstruction_ModuloUInt64;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ModuloInstruction_ModuloUInt64);
// Dependencies System.Linq.Expressions.Interpreter.ModuloInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloUInt64
class CORDL_TYPE ModuloInstruction_ModuloUInt64 : public ::System::Linq::Expressions::Interpreter::ModuloInstruction {
public:
// Declarations
static inline ::GlobalNamespace::ModuloInstruction_ModuloUInt64* New_ctor() ;

/// @brief Method Run, addr 0x29e5c14, size 0x14c, virtual true, abstract: false, final false
inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame) ;

/// @brief Method .ctor, addr 0x29e544c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModuloInstruction_ModuloUInt64() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModuloInstruction_ModuloUInt64", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ModuloInstruction_ModuloUInt64(ModuloInstruction_ModuloUInt64 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModuloInstruction_ModuloUInt64", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModuloInstruction_ModuloUInt64(ModuloInstruction_ModuloUInt64 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9427};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ModuloInstruction_ModuloUInt64, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ModuloInstruction_ModuloUInt64);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ModuloInstruction_ModuloUInt64*, "System.Linq.Expressions.Interpreter", "ModuloInstruction/ModuloUInt64");
