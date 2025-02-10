#pragma once
// IWYU pragma private; include "System/Linq/Expressions/AssignBinaryExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__BinaryExpression_def.hpp"
CORDL_MODULE_EXPORT(AssignBinaryExpression)
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class AssignBinaryExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::AssignBinaryExpression);
// Dependencies System.Linq.Expressions.BinaryExpression
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.AssignBinaryExpression
class CORDL_TYPE AssignBinaryExpression : public ::System::Linq::Expressions::BinaryExpression {
public:
// Declarations
 __declspec(property(get=get_NodeType)) ::System::Linq::Expressions::ExpressionType  NodeType;

 __declspec(property(get=get_Type)) ::System::Type*  Type;

static inline ::System::Linq::Expressions::AssignBinaryExpression* New_ctor(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right) ;

/// @brief Method .ctor, addr 0x29907fc, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right) ;

/// @brief Method get_NodeType, addr 0x2990820, size 0x8, virtual true, abstract: false, final true
inline ::System::Linq::Expressions::ExpressionType get_NodeType() ;

/// @brief Method get_Type, addr 0x2990800, size 0x20, virtual true, abstract: false, final true
inline ::System::Type* get_Type() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssignBinaryExpression() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssignBinaryExpression", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssignBinaryExpression(AssignBinaryExpression && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssignBinaryExpression", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssignBinaryExpression(AssignBinaryExpression const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9049};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::AssignBinaryExpression, 0x20>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::AssignBinaryExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::AssignBinaryExpression*, "System.Linq.Expressions", "AssignBinaryExpression");
