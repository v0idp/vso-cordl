#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Error.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Error)
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class Error;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Error);
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Error
class CORDL_TYPE Error : public ::System::Object {
public:
// Declarations
/// @brief Method AccessorsCannotHaveByRefArgs, addr 0x29a9e54, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* AccessorsCannotHaveByRefArgs(::StringW  paramName) ;

/// @brief Method AccessorsCannotHaveByRefArgs, addr 0x29a9f28, size 0x10, virtual false, abstract: false, final false
static inline ::System::Exception* AccessorsCannotHaveByRefArgs(::StringW  paramName, int32_t  index) ;

/// @brief Method AccessorsCannotHaveVarArgs, addr 0x29a9d80, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* AccessorsCannotHaveVarArgs(::StringW  paramName) ;

/// @brief Method AmbiguousJump, addr 0x29ade0c, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* AmbiguousJump(::System::Object*  p0) ;

/// @brief Method AmbiguousMatchInExpandoObject, addr 0x29a8ef0, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* AmbiguousMatchInExpandoObject(::System::Object*  p0) ;

/// @brief Method ArgumentCannotBeOfTypeVoid, addr 0x29ad964, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentCannotBeOfTypeVoid(::StringW  paramName) ;

/// @brief Method ArgumentMustBeArray, addr 0x29abca4, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeArray(::StringW  paramName) ;

/// @brief Method ArgumentMustBeArrayIndexType, addr 0x29abf30, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeArrayIndexType(::StringW  paramName) ;

/// @brief Method ArgumentMustBeBoolean, addr 0x29abd78, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeBoolean(::StringW  paramName) ;

/// @brief Method ArgumentMustBeInteger, addr 0x29abe4c, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeInteger(::StringW  paramName) ;

/// @brief Method ArgumentMustBeInteger, addr 0x29abf20, size 0x10, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeInteger(::StringW  paramName, int32_t  index) ;

/// @brief Method ArgumentMustBeSingleDimensionalArrayType, addr 0x29ac004, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeSingleDimensionalArrayType(::StringW  paramName) ;

/// @brief Method ArgumentMustNotHaveValueType, addr 0x29aac08, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustNotHaveValueType(::StringW  paramName) ;

/// @brief Method ArgumentOutOfRange, addr 0x29a6ed4, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentOutOfRange(::StringW  paramName) ;

/// @brief Method ArgumentTypesMustMatch, addr 0x29ac0d8, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentTypesMustMatch() ;

/// @brief Method BinaryOperatorNotDefined, addr 0x29ab870, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* BinaryOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method BinderNotCompatibleWithCallSite, addr 0x29a9384, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* BinderNotCompatibleWithCallSite(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method BindingCannotBeNull, addr 0x29a9800, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* BindingCannotBeNull() ;

/// @brief Method BodyOfCatchMustHaveSameTypeAsBodyOfTry, addr 0x29ab3b4, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* BodyOfCatchMustHaveSameTypeAsBodyOfTry() ;

/// @brief Method BothAccessorsMustBeStatic, addr 0x29aa64c, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* BothAccessorsMustBeStatic(::StringW  paramName) ;

/// @brief Method BoundsCannotBeLessThanOne, addr 0x29aa154, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* BoundsCannotBeLessThanOne(::StringW  paramName) ;

/// @brief Method CannotAutoInitializeValueTypeMemberThroughProperty, addr 0x29ac19c, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* CannotAutoInitializeValueTypeMemberThroughProperty(::System::Object*  p0) ;

/// @brief Method CoalesceUsedOnNonNullType, addr 0x29ac31c, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* CoalesceUsedOnNonNullType() ;

/// @brief Method CoercionOperatorNotDefined, addr 0x29ab6c0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* CoercionOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method CollectionModifiedWhileEnumerating, addr 0x29a9138, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* CollectionModifiedWhileEnumerating() ;

/// @brief Method CollectionReadOnly, addr 0x29a91fc, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* CollectionReadOnly() ;

/// @brief Method ControlCannotEnterExpression, addr 0x29adf88, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ControlCannotEnterExpression() ;

/// @brief Method ControlCannotEnterTry, addr 0x29adec4, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ControlCannotEnterTry() ;

/// @brief Method ControlCannotLeaveFilterTest, addr 0x29add48, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ControlCannotLeaveFilterTest() ;

/// @brief Method ControlCannotLeaveFinally, addr 0x29adc84, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ControlCannotLeaveFinally() ;

/// @brief Method ConversionIsNotSupportedForArithmeticTypes, addr 0x29abbe0, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ConversionIsNotSupportedForArithmeticTypes() ;

/// @brief Method DuplicateVariable, addr 0x29ab130, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* DuplicateVariable(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method DuplicateVariable, addr 0x29ab1f8, size 0x24, virtual false, abstract: false, final false
static inline ::System::Exception* DuplicateVariable(::System::Object*  p0, ::StringW  paramName, int32_t  index) ;

/// @brief Method DynamicBinderResultNotAssignable, addr 0x29a9718, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* DynamicBinderResultNotAssignable(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method DynamicBindingNeedsRestrictions, addr 0x29a946c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* DynamicBindingNeedsRestrictions(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method DynamicObjectResultNotAssignable, addr 0x29a9544, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* DynamicObjectResultNotAssignable(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3) ;

/// @brief Method EnumerationIsDone, addr 0x29ae6bc, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* EnumerationIsDone() ;

/// @brief Method ExpressionMustBeReadable, addr 0x29aef04, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionMustBeReadable(::StringW  paramName) ;

/// @brief Method ExpressionMustBeReadable, addr 0x29aefd8, size 0x10, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionMustBeReadable(::StringW  paramName, int32_t  index) ;

/// @brief Method ExpressionMustBeWriteable, addr 0x29aab34, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionMustBeWriteable(::StringW  paramName) ;

/// @brief Method ExpressionTypeCannotInitializeArrayType, addr 0x29ac3e0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeCannotInitializeArrayType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchAssignment, addr 0x29ac590, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchAssignment(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchConstructorParameter, addr 0x29aedf0, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName) ;

/// @brief Method ExpressionTypeDoesNotMatchConstructorParameter, addr 0x29aeed0, size 0x34, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName, int32_t  index) ;

/// @brief Method ExpressionTypeDoesNotMatchLabel, addr 0x29ac668, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchLabel(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchMethodParameter, addr 0x29aea1c, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchMethodParameter(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2, ::StringW  paramName) ;

/// @brief Method ExpressionTypeDoesNotMatchMethodParameter, addr 0x29aeb14, size 0x3c, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchMethodParameter(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2, ::StringW  paramName, int32_t  index) ;

/// @brief Method ExpressionTypeDoesNotMatchParameter, addr 0x29aeb50, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchParameter(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName) ;

/// @brief Method ExpressionTypeDoesNotMatchParameter, addr 0x29aec30, size 0x34, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchParameter(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName, int32_t  index) ;

/// @brief Method ExpressionTypeDoesNotMatchReturn, addr 0x29ac4b8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchReturn(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeNotInvocable, addr 0x29ac740, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeNotInvocable(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method ExtensionNodeMustOverrideProperty, addr 0x29ab478, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* ExtensionNodeMustOverrideProperty(::System::Object*  p0) ;

/// @brief Method FaultCannotHaveCatchOrFinally, addr 0x29ab21c, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* FaultCannotHaveCatchOrFinally(::StringW  paramName) ;

/// @brief Method FieldInfoNotDefinedForType, addr 0x29ac8e0, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* FieldInfoNotDefinedForType(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method FirstArgumentMustBeCallSite, addr 0x29a9cbc, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* FirstArgumentMustBeCallSite() ;

/// @brief Method GenericMethodWithArgsDoesNotExistOnType, addr 0x29ad7b4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* GenericMethodWithArgsDoesNotExistOnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method GetParamName, addr 0x29a9f38, size 0x94, virtual false, abstract: false, final false
static inline ::StringW GetParamName(::StringW  paramName, int32_t  index) ;

/// @brief Method IncorrectNumberOfConstructorArguments, addr 0x29ae958, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectNumberOfConstructorArguments() ;

/// @brief Method IncorrectNumberOfIndexes, addr 0x29ac9c8, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectNumberOfIndexes() ;

/// @brief Method IncorrectNumberOfLambdaArguments, addr 0x29aec64, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectNumberOfLambdaArguments() ;

/// @brief Method IncorrectNumberOfLambdaDeclarationParameters, addr 0x29aca8c, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectNumberOfLambdaDeclarationParameters() ;

/// @brief Method IncorrectNumberOfMethodCallArguments, addr 0x29aed28, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectNumberOfMethodCallArguments(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method IncorrectTypeForTypeAs, addr 0x29ac254, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectTypeForTypeAs(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method IndexesOfSetGetMustMatch, addr 0x29a9b30, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* IndexesOfSetGetMustMatch(::StringW  paramName) ;

/// @brief Method InstanceAndMethodTypeMismatch, addr 0x29ad1dc, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* InstanceAndMethodTypeMismatch(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method InstanceFieldNotDefinedForType, addr 0x29ac808, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* InstanceFieldNotDefinedForType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method InstancePropertyNotDefinedForType, addr 0x29ad0fc, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* InstancePropertyNotDefinedForType(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName) ;

/// @brief Method InvalidArgumentValue, addr 0x29aefe8, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidArgumentValue(::StringW  paramName) ;

/// @brief Method InvalidLvalue, addr 0x29ae104, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidLvalue(::System::Linq::Expressions::ExpressionType  p0) ;

/// @brief Method InvalidMetaObjectCreated, addr 0x29a8e38, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidMetaObjectCreated(::System::Object*  p0) ;

/// @brief Method InvalidNullValue, addr 0x29af0bc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidNullValue(::System::Type*  type, ::StringW  paramName) ;

/// @brief Method InvalidProgram, addr 0x29ae668, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidProgram() ;

/// @brief Method InvalidTypeException, addr 0x29af184, size 0xb8, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidTypeException(::System::Object*  value, ::System::Type*  type, ::StringW  paramName) ;

/// @brief Method InvalidUnboxType, addr 0x29aaa60, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidUnboxType(::StringW  paramName) ;

/// @brief Method KeyDoesNotExistInExpando, addr 0x29a9080, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* KeyDoesNotExistInExpando(::System::Object*  p0) ;

/// @brief Method LabelMustBeVoidOrHaveExpression, addr 0x29aada0, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* LabelMustBeVoidOrHaveExpression(::StringW  paramName) ;

/// @brief Method LabelTargetAlreadyDefined, addr 0x29adb14, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* LabelTargetAlreadyDefined(::System::Object*  p0) ;

/// @brief Method LabelTargetUndefined, addr 0x29adbcc, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* LabelTargetUndefined(::System::Object*  p0) ;

/// @brief Method LabelTypeMustBeVoid, addr 0x29aae74, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* LabelTypeMustBeVoid(::StringW  paramName) ;

/// @brief Method LambdaTypeMustBeDerivedFromSystemDelegate, addr 0x29acb50, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* LambdaTypeMustBeDerivedFromSystemDelegate(::StringW  paramName) ;

/// @brief Method LogicalOperatorMustHaveBooleanOperators, addr 0x29ad604, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* LogicalOperatorMustHaveBooleanOperators(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MemberNotFieldOrProperty, addr 0x29acc24, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* MemberNotFieldOrProperty(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method MethodContainsGenericParameters, addr 0x29accec, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* MethodContainsGenericParameters(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method MethodIsGeneric, addr 0x29acdb4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* MethodIsGeneric(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method MethodWithArgsDoesNotExistOnType, addr 0x29ad6dc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* MethodWithArgsDoesNotExistOnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MethodWithMoreThanOneMatch, addr 0x29ad88c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* MethodWithMoreThanOneMatch(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MustBeReducible, addr 0x29aacdc, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* MustBeReducible() ;

/// @brief Method MustReduceToDifferent, addr 0x29a92c0, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* MustReduceToDifferent() ;

/// @brief Method MustRewriteChildToSameType, addr 0x29ae390, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* MustRewriteChildToSameType(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method MustRewriteToSameNode, addr 0x29ae2a8, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* MustRewriteToSameNode(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method MustRewriteWithoutMethod, addr 0x29ae478, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* MustRewriteWithoutMethod(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method NoOrInvalidRuleProduced, addr 0x29aa090, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* NoOrInvalidRuleProduced() ;

/// @brief Method NonAbstractConstructorRequired, addr 0x29ae5a4, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* NonAbstractConstructorRequired() ;

/// @brief Method NonLocalJumpWithValue, addr 0x29ae04c, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* NonLocalJumpWithValue(::System::Object*  p0) ;

/// @brief Method NotSupported, addr 0x29ae550, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* NotSupported() ;

/// @brief Method OnlyStaticFieldsHaveNullInstance, addr 0x29aa720, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* OnlyStaticFieldsHaveNullInstance(::StringW  paramName) ;

/// @brief Method OnlyStaticMethodsHaveNullInstance, addr 0x29aa8c8, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* OnlyStaticMethodsHaveNullInstance() ;

/// @brief Method OnlyStaticPropertiesHaveNullInstance, addr 0x29aa7f4, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* OnlyStaticPropertiesHaveNullInstance(::StringW  paramName) ;

/// @brief Method OperandTypesDoNotMatchParameters, addr 0x29aba30, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* OperandTypesDoNotMatchParameters(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method OutOfRange, addr 0x29ada38, size 0x80, virtual false, abstract: false, final false
static inline ::System::Exception* OutOfRange(::StringW  paramName, ::System::Object*  p1) ;

/// @brief Method OverloadOperatorTypeDoesNotMatchConversionType, addr 0x29abb08, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* OverloadOperatorTypeDoesNotMatchConversionType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ParameterExpressionNotValidAsDelegate, addr 0x29acf44, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* ParameterExpressionNotValidAsDelegate(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method PropertyCannotHaveRefType, addr 0x29a9a5c, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyCannotHaveRefType(::StringW  paramName) ;

/// @brief Method PropertyDoesNotHaveAccessor, addr 0x29ace7c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyDoesNotHaveAccessor(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method PropertyNotDefinedForType, addr 0x29ad01c, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyNotDefinedForType(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName) ;

/// @brief Method PropertyTypeCannotBeVoid, addr 0x29aa98c, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyTypeCannotBeVoid(::StringW  paramName) ;

/// @brief Method PropertyTypeMustMatchGetter, addr 0x29aa4a4, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyTypeMustMatchGetter(::StringW  paramName) ;

/// @brief Method PropertyTypeMustMatchSetter, addr 0x29aa578, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyTypeMustMatchSetter(::StringW  paramName) ;

/// @brief Method QuotedExpressionMustBeLambda, addr 0x29aaf48, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* QuotedExpressionMustBeLambda(::StringW  paramName) ;

/// @brief Method ReducedNotCompatible, addr 0x29a98c4, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ReducedNotCompatible() ;

/// @brief Method ReducibleMustOverrideReduce, addr 0x29a8d74, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ReducibleMustOverrideReduce() ;

/// @brief Method ReferenceEqualityNotDefined, addr 0x29ab958, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* ReferenceEqualityNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method RethrowRequiresCatch, addr 0x29ae1e4, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* RethrowRequiresCatch() ;

/// @brief Method SameKeyExistsInExpando, addr 0x29a8fa8, size 0x8c, virtual false, abstract: false, final false
static inline ::System::Exception* SameKeyExistsInExpando(::System::Object*  key) ;

/// @brief Method SetterHasNoParams, addr 0x29a9988, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* SetterHasNoParams(::StringW  paramName) ;

/// @brief Method SetterMustBeVoid, addr 0x29aa3d0, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* SetterMustBeVoid(::StringW  paramName) ;

/// @brief Method TryMustHaveCatchFinallyOrFault, addr 0x29ab2f0, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* TryMustHaveCatchFinallyOrFault() ;

/// @brief Method TypeContainsGenericParameters, addr 0x29ae780, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* TypeContainsGenericParameters(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method TypeContainsGenericParameters, addr 0x29ae848, size 0x24, virtual false, abstract: false, final false
static inline ::System::Exception* TypeContainsGenericParameters(::System::Object*  p0, ::StringW  paramName, int32_t  index) ;

/// @brief Method TypeIsGeneric, addr 0x29ae86c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* TypeIsGeneric(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method TypeIsGeneric, addr 0x29ae934, size 0x24, virtual false, abstract: false, final false
static inline ::System::Exception* TypeIsGeneric(::System::Object*  p0, ::StringW  paramName, int32_t  index) ;

/// @brief Method TypeMustBeDerivedFromSystemDelegate, addr 0x29a9fcc, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* TypeMustBeDerivedFromSystemDelegate() ;

/// @brief Method TypeMustNotBeByRef, addr 0x29aa228, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* TypeMustNotBeByRef(::StringW  paramName) ;

/// @brief Method TypeMustNotBePointer, addr 0x29aa2fc, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* TypeMustNotBePointer(::StringW  paramName) ;

/// @brief Method TypeParameterIsNotDelegate, addr 0x29a9c04, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* TypeParameterIsNotDelegate(::System::Object*  p0) ;

/// @brief Method UnaryOperatorNotDefined, addr 0x29ab798, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* UnaryOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UnhandledBinary, addr 0x29ad2c4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* UnhandledBinary(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method UnhandledUnary, addr 0x29ad38c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* UnhandledUnary(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method UserDefinedOpMustHaveConsistentTypes, addr 0x29ad454, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* UserDefinedOpMustHaveConsistentTypes(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UserDefinedOpMustHaveValidReturnType, addr 0x29ad52c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* UserDefinedOpMustHaveValidReturnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UserDefinedOperatorMustBeStatic, addr 0x29ab530, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* UserDefinedOperatorMustBeStatic(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method UserDefinedOperatorMustNotBeVoid, addr 0x29ab5f8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* UserDefinedOperatorMustNotBeVoid(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method VariableMustNotBeByRef, addr 0x29ab01c, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* VariableMustNotBeByRef(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName) ;

/// @brief Method VariableMustNotBeByRef, addr 0x29ab0fc, size 0x34, virtual false, abstract: false, final false
static inline ::System::Exception* VariableMustNotBeByRef(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName, int32_t  index) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Error() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Error(Error && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Error(Error const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9106};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Error, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::Error);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Error*, "System.Linq.Expressions", "Error");
