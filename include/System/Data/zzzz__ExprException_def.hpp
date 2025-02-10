#pragma once
// IWYU pragma private; include "System/Data/ExprException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExprException)
namespace System::Data {
class EvaluateException;
}
namespace System::Data {
class InvalidExpressionException;
}
namespace System::Data {
class OperatorInfo;
}
namespace System::Data {
class SyntaxErrorException;
}
namespace System::Data {
struct Tokens;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class OverflowException;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class ExprException;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::ExprException);
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.ExprException
class CORDL_TYPE ExprException : public ::System::Object {
public:
// Declarations
/// @brief Method AggregateArgument, addr 0x2a734c4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* AggregateArgument() ;

/// @brief Method AggregateUnbound, addr 0x2a670f8, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* AggregateUnbound(::StringW  expr) ;

/// @brief Method AmbiguousBinop, addr 0x2a6f77c, size 0xcc, virtual false, abstract: false, final false
static inline ::System::Exception* AmbiguousBinop(int32_t  op, ::System::Type*  type1, ::System::Type*  type2) ;

/// @brief Method ArgumentType, addr 0x2a745ac, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentType(::StringW  function, int32_t  arg, ::System::Type*  type) ;

/// @brief Method ArgumentTypeInteger, addr 0x2a74674, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentTypeInteger(::StringW  function, int32_t  arg) ;

/// @brief Method BindFailure, addr 0x2a74718, size 0x50, virtual false, abstract: false, final false
static inline ::System::Data::EvaluateException* BindFailure(::StringW  relationName) ;

/// @brief Method ComputeNotAggregate, addr 0x2a67788, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ComputeNotAggregate(::StringW  expr) ;

/// @brief Method DatatypeConvertion, addr 0x2a74450, size 0x8c, virtual false, abstract: false, final false
static inline ::System::Exception* DatatypeConvertion(::System::Type*  type1, ::System::Type*  type2) ;

/// @brief Method DatavalueConvertion, addr 0x2a71fe4, size 0x8c, virtual false, abstract: false, final false
static inline ::System::Exception* DatavalueConvertion(::System::Object*  value, ::System::Type*  type, ::System::Exception*  innerException) ;

/// @brief Method EvalNoContext, addr 0x2a676d4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* EvalNoContext() ;

/// @brief Method ExpressionTooComplex, addr 0x2a73504, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTooComplex() ;

/// @brief Method ExpressionUnbound, addr 0x2a74768, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionUnbound(::StringW  expr) ;

/// @brief Method FilterConvertion, addr 0x2a72190, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* FilterConvertion(::StringW  expr) ;

/// @brief Method FunctionArgumentCount, addr 0x2a74400, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* FunctionArgumentCount(::StringW  name) ;

/// @brief Method FunctionArgumentOutOfRange, addr 0x2a74398, size 0x68, virtual false, abstract: false, final false
static inline ::System::Exception* FunctionArgumentOutOfRange(::StringW  arg, ::StringW  func) ;

/// @brief Method InWithoutList, addr 0x2a7456c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* InWithoutList() ;

/// @brief Method InWithoutParentheses, addr 0x2a6f3b4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* InWithoutParentheses() ;

/// @brief Method InvalidDate, addr 0x2a73d40, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidDate(::StringW  date) ;

/// @brief Method InvalidHoursArgument, addr 0x2a74808, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidHoursArgument() ;

/// @brief Method InvalidIsSyntax, addr 0x2a6d4a0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidIsSyntax() ;

/// @brief Method InvalidMinutesArgument, addr 0x2a74848, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidMinutesArgument() ;

/// @brief Method InvalidName, addr 0x2a744dc, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidName(::StringW  name) ;

/// @brief Method InvalidNameBracketing, addr 0x2a73cf0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidNameBracketing(::StringW  name) ;

/// @brief Method InvalidPattern, addr 0x2a70120, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidPattern(::StringW  pat) ;

/// @brief Method InvalidString, addr 0x2a73dbc, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidString(::StringW  str) ;

/// @brief Method InvalidTimeZoneRange, addr 0x2a74888, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidTimeZoneRange() ;

/// @brief Method InvalidType, addr 0x2a747b8, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidType(::StringW  typeName) ;

/// @brief Method InvokeArgument, addr 0x2a7214c, size 0x44, virtual false, abstract: false, final false
static inline ::System::Exception* InvokeArgument() ;

/// @brief Method LookupArgument, addr 0x2a72cf0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* LookupArgument() ;

/// @brief Method MismatchKindandTimeSpan, addr 0x2a748c8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* MismatchKindandTimeSpan() ;

/// @brief Method MissingOperand, addr 0x2a7274c, size 0x8c, virtual false, abstract: false, final false
static inline ::System::Exception* MissingOperand(::System::Data::OperatorInfo*  before) ;

/// @brief Method MissingOperandBefore, addr 0x2a73238, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* MissingOperandBefore(::StringW  op) ;

/// @brief Method MissingOperator, addr 0x2a72a40, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* MissingOperator(::StringW  token) ;

/// @brief Method MissingRightParen, addr 0x2a72a00, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* MissingRightParen() ;

/// @brief Method NYI, addr 0x2a742f8, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* NYI(::StringW  moreinfo) ;

/// @brief Method NonConstantArgument, addr 0x2a7452c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* NonConstantArgument() ;

/// @brief Method Overflow, addr 0x2a6f474, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* Overflow(::System::Type*  type) ;

/// @brief Method SyntaxError, addr 0x2a72e94, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* SyntaxError() ;

/// @brief Method TooManyRightParentheses, addr 0x2a731b8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* TooManyRightParentheses() ;

/// @brief Method TypeMismatch, addr 0x2a74348, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* TypeMismatch(::StringW  expr) ;

/// @brief Method TypeMismatchInBinop, addr 0x2a6d7f4, size 0xcc, virtual false, abstract: false, final false
static inline ::System::Exception* TypeMismatchInBinop(int32_t  op, ::System::Type*  type1, ::System::Type*  type2) ;

/// @brief Method UnboundName, addr 0x2a671a8, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* UnboundName(::StringW  name) ;

/// @brief Method UndefinedFunction, addr 0x2a66e44, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* UndefinedFunction(::StringW  name) ;

/// @brief Method UnknownToken, addr 0x2a73544, size 0x110, virtual false, abstract: false, final false
static inline ::System::Exception* UnknownToken(::System::Data::Tokens  tokExpected, ::System::Data::Tokens  tokCurr, int32_t  position) ;

/// @brief Method UnknownToken, addr 0x2a73420, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Exception* UnknownToken(::StringW  token, int32_t  position) ;

/// @brief Method UnresolvedRelation, addr 0x2a67148, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* UnresolvedRelation(::StringW  name, ::StringW  expr) ;

/// @brief Method UnsupportedDataType, addr 0x2a70f90, size 0x74, virtual false, abstract: false, final false
static inline ::System::Exception* UnsupportedDataType(::System::Type*  type) ;

/// @brief Method UnsupportedOperator, addr 0x2a6f3f4, size 0x80, virtual false, abstract: false, final false
static inline ::System::Exception* UnsupportedOperator(int32_t  op) ;

/// @brief Method _Eval, addr 0x2a74228, size 0x68, virtual false, abstract: false, final false
static inline ::System::Data::EvaluateException* _Eval(::StringW  error) ;

/// @brief Method _Eval, addr 0x2a74290, size 0x68, virtual false, abstract: false, final false
static inline ::System::Data::EvaluateException* _Eval(::StringW  error, ::System::Exception*  innerException) ;

/// @brief Method _Expr, addr 0x2a74158, size 0x68, virtual false, abstract: false, final false
static inline ::System::Data::InvalidExpressionException* _Expr(::StringW  error) ;

/// @brief Method _Overflow, addr 0x2a740f0, size 0x68, virtual false, abstract: false, final false
static inline ::System::OverflowException* _Overflow(::StringW  error) ;

/// @brief Method _Syntax, addr 0x2a741c0, size 0x68, virtual false, abstract: false, final false
static inline ::System::Data::SyntaxErrorException* _Syntax(::StringW  error) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExprException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExprException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExprException(ExprException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExprException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExprException(ExprException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8151};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::ExprException, 0x10>, "Size mismatch!");

} // namespace end def System::Data
NEED_NO_BOX(::System::Data::ExprException);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ExprException*, "System.Data", "ExprException");
