#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Strings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Strings)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions {
class Strings;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Strings);
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Strings
class CORDL_TYPE Strings : public ::System::Object {
public:
// Declarations
/// @brief Method AmbiguousJump, addr 0x29ade78, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW AmbiguousJump(::System::Object*  p0) ;

/// @brief Method AmbiguousMatchInExpandoObject, addr 0x29a8f5c, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW AmbiguousMatchInExpandoObject(::System::Object*  p0) ;

/// @brief Method BinaryOperatorNotDefined, addr 0x29ab8f4, size 0x64, virtual false, abstract: false, final false
static inline ::StringW BinaryOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method BinderNotCompatibleWithCallSite, addr 0x29a9408, size 0x64, virtual false, abstract: false, final false
static inline ::StringW BinderNotCompatibleWithCallSite(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method CannotAutoInitializeValueTypeMemberThroughProperty, addr 0x29ac208, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW CannotAutoInitializeValueTypeMemberThroughProperty(::System::Object*  p0) ;

/// @brief Method CoercionOperatorNotDefined, addr 0x29ab73c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW CoercionOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method DuplicateVariable, addr 0x29ab1ac, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW DuplicateVariable(::System::Object*  p0) ;

/// @brief Method DynamicBinderResultNotAssignable, addr 0x29a979c, size 0x64, virtual false, abstract: false, final false
static inline ::StringW DynamicBinderResultNotAssignable(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method DynamicBindingNeedsRestrictions, addr 0x29a94e8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW DynamicBindingNeedsRestrictions(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method DynamicObjectResultNotAssignable, addr 0x29a95d8, size 0x140, virtual false, abstract: false, final false
static inline ::StringW DynamicObjectResultNotAssignable(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3) ;

/// @brief Method ExpressionTypeCannotInitializeArrayType, addr 0x29ac45c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeCannotInitializeArrayType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchAssignment, addr 0x29ac60c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchAssignment(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchConstructorParameter, addr 0x29aee74, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchConstructorParameter(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchLabel, addr 0x29ac6e4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchLabel(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchMethodParameter, addr 0x29aeab0, size 0x64, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchMethodParameter(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method ExpressionTypeDoesNotMatchParameter, addr 0x29aebd4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchParameter(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchReturn, addr 0x29ac534, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchReturn(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeNotInvocable, addr 0x29ac7bc, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeNotInvocable(::System::Object*  p0) ;

/// @brief Method ExtensionNodeMustOverrideProperty, addr 0x29ab4e4, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW ExtensionNodeMustOverrideProperty(::System::Object*  p0) ;

/// @brief Method FieldInfoNotDefinedForType, addr 0x29ac964, size 0x64, virtual false, abstract: false, final false
static inline ::StringW FieldInfoNotDefinedForType(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method GenericMethodWithArgsDoesNotExistOnType, addr 0x29ad830, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW GenericMethodWithArgsDoesNotExistOnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method IncorrectNumberOfMethodCallArguments, addr 0x29aeda4, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW IncorrectNumberOfMethodCallArguments(::System::Object*  p0) ;

/// @brief Method IncorrectTypeForTypeAs, addr 0x29ac2d0, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW IncorrectTypeForTypeAs(::System::Object*  p0) ;

/// @brief Method InstanceAndMethodTypeMismatch, addr 0x29ad260, size 0x64, virtual false, abstract: false, final false
static inline ::StringW InstanceAndMethodTypeMismatch(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method InstanceFieldNotDefinedForType, addr 0x29ac884, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW InstanceFieldNotDefinedForType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method InstancePropertyNotDefinedForType, addr 0x29ad180, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW InstancePropertyNotDefinedForType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method InvalidLvalue, addr 0x29ae198, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW InvalidLvalue(::System::Object*  p0) ;

/// @brief Method InvalidMetaObjectCreated, addr 0x29a8ea4, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW InvalidMetaObjectCreated(::System::Object*  p0) ;

/// @brief Method InvalidNullValue, addr 0x29af138, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW InvalidNullValue(::System::Object*  p0) ;

/// @brief Method InvalidObjectType, addr 0x29af23c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW InvalidObjectType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method KeyDoesNotExistInExpando, addr 0x29a90ec, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW KeyDoesNotExistInExpando(::System::Object*  p0) ;

/// @brief Method LabelTargetAlreadyDefined, addr 0x29adb80, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW LabelTargetAlreadyDefined(::System::Object*  p0) ;

/// @brief Method LabelTargetUndefined, addr 0x29adc38, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW LabelTargetUndefined(::System::Object*  p0) ;

/// @brief Method LogicalOperatorMustHaveBooleanOperators, addr 0x29ad680, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW LogicalOperatorMustHaveBooleanOperators(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MemberNotFieldOrProperty, addr 0x29acca0, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW MemberNotFieldOrProperty(::System::Object*  p0) ;

/// @brief Method MethodContainsGenericParameters, addr 0x29acd68, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW MethodContainsGenericParameters(::System::Object*  p0) ;

/// @brief Method MethodIsGeneric, addr 0x29ace30, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW MethodIsGeneric(::System::Object*  p0) ;

/// @brief Method MethodWithArgsDoesNotExistOnType, addr 0x29ad758, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW MethodWithArgsDoesNotExistOnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MethodWithMoreThanOneMatch, addr 0x29ad908, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW MethodWithMoreThanOneMatch(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MustRewriteChildToSameType, addr 0x29ae414, size 0x64, virtual false, abstract: false, final false
static inline ::StringW MustRewriteChildToSameType(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method MustRewriteToSameNode, addr 0x29ae32c, size 0x64, virtual false, abstract: false, final false
static inline ::StringW MustRewriteToSameNode(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method MustRewriteWithoutMethod, addr 0x29ae4f4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW MustRewriteWithoutMethod(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method NonLocalJumpWithValue, addr 0x29ae0b8, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW NonLocalJumpWithValue(::System::Object*  p0) ;

/// @brief Method OperandTypesDoNotMatchParameters, addr 0x29abaac, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW OperandTypesDoNotMatchParameters(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method OutOfRange, addr 0x29adab8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW OutOfRange(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method OverloadOperatorTypeDoesNotMatchConversionType, addr 0x29abb84, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW OverloadOperatorTypeDoesNotMatchConversionType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ParameterExpressionNotValidAsDelegate, addr 0x29acfc0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ParameterExpressionNotValidAsDelegate(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method PropertyDoesNotHaveAccessor, addr 0x29acef8, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW PropertyDoesNotHaveAccessor(::System::Object*  p0) ;

/// @brief Method PropertyNotDefinedForType, addr 0x29ad0a0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW PropertyNotDefinedForType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ReferenceEqualityNotDefined, addr 0x29ab9d4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ReferenceEqualityNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method SameKeyExistsInExpando, addr 0x29a9034, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW SameKeyExistsInExpando(::System::Object*  p0) ;

/// @brief Method TypeContainsGenericParameters, addr 0x29ae7fc, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW TypeContainsGenericParameters(::System::Object*  p0) ;

/// @brief Method TypeIsGeneric, addr 0x29ae8e8, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW TypeIsGeneric(::System::Object*  p0) ;

/// @brief Method TypeParameterIsNotDelegate, addr 0x29a9c70, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW TypeParameterIsNotDelegate(::System::Object*  p0) ;

/// @brief Method UnaryOperatorNotDefined, addr 0x29ab814, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW UnaryOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UnhandledBinary, addr 0x29ad340, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW UnhandledBinary(::System::Object*  p0) ;

/// @brief Method UnhandledUnary, addr 0x29ad408, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW UnhandledUnary(::System::Object*  p0) ;

/// @brief Method UserDefinedOpMustHaveConsistentTypes, addr 0x29ad4d0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW UserDefinedOpMustHaveConsistentTypes(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UserDefinedOpMustHaveValidReturnType, addr 0x29ad5a8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW UserDefinedOpMustHaveValidReturnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UserDefinedOperatorMustBeStatic, addr 0x29ab5ac, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW UserDefinedOperatorMustBeStatic(::System::Object*  p0) ;

/// @brief Method UserDefinedOperatorMustNotBeVoid, addr 0x29ab674, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW UserDefinedOperatorMustNotBeVoid(::System::Object*  p0) ;

/// @brief Method VariableMustNotBeByRef, addr 0x29ab0a0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW VariableMustNotBeByRef(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method get_AccessorsCannotHaveByRefArgs, addr 0x29a9ee8, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_AccessorsCannotHaveByRefArgs() ;

/// @brief Method get_AccessorsCannotHaveVarArgs, addr 0x29a9e14, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_AccessorsCannotHaveVarArgs() ;

/// @brief Method get_ArgumentCannotBeOfTypeVoid, addr 0x29ad9f8, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentCannotBeOfTypeVoid() ;

/// @brief Method get_ArgumentMustBeArray, addr 0x29abd38, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustBeArray() ;

/// @brief Method get_ArgumentMustBeArrayIndexType, addr 0x29abfc4, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustBeArrayIndexType() ;

/// @brief Method get_ArgumentMustBeBoolean, addr 0x29abe0c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustBeBoolean() ;

/// @brief Method get_ArgumentMustBeInteger, addr 0x29abee0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustBeInteger() ;

/// @brief Method get_ArgumentMustBeSingleDimensionalArrayType, addr 0x29ac098, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustBeSingleDimensionalArrayType() ;

/// @brief Method get_ArgumentMustNotHaveValueType, addr 0x29aac9c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustNotHaveValueType() ;

/// @brief Method get_ArgumentTypesMustMatch, addr 0x29ac15c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentTypesMustMatch() ;

/// @brief Method get_BindingCannotBeNull, addr 0x29a9884, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_BindingCannotBeNull() ;

/// @brief Method get_BodyOfCatchMustHaveSameTypeAsBodyOfTry, addr 0x29ab438, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_BodyOfCatchMustHaveSameTypeAsBodyOfTry() ;

/// @brief Method get_BothAccessorsMustBeStatic, addr 0x29aa6e0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_BothAccessorsMustBeStatic() ;

/// @brief Method get_BoundsCannotBeLessThanOne, addr 0x29aa1e8, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_BoundsCannotBeLessThanOne() ;

/// @brief Method get_CoalesceUsedOnNonNullType, addr 0x29ac3a0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_CoalesceUsedOnNonNullType() ;

/// @brief Method get_CollectionModifiedWhileEnumerating, addr 0x29a91bc, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_CollectionModifiedWhileEnumerating() ;

/// @brief Method get_CollectionReadOnly, addr 0x29a9280, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_CollectionReadOnly() ;

/// @brief Method get_ControlCannotEnterExpression, addr 0x29ae00c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ControlCannotEnterExpression() ;

/// @brief Method get_ControlCannotEnterTry, addr 0x29adf48, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ControlCannotEnterTry() ;

/// @brief Method get_ControlCannotLeaveFilterTest, addr 0x29addcc, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ControlCannotLeaveFilterTest() ;

/// @brief Method get_ControlCannotLeaveFinally, addr 0x29add08, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ControlCannotLeaveFinally() ;

/// @brief Method get_ConversionIsNotSupportedForArithmeticTypes, addr 0x29abc64, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ConversionIsNotSupportedForArithmeticTypes() ;

/// @brief Method get_EnumerationIsDone, addr 0x29ae740, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_EnumerationIsDone() ;

/// @brief Method get_ExpressionMustBeReadable, addr 0x29aef98, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ExpressionMustBeReadable() ;

/// @brief Method get_ExpressionMustBeWriteable, addr 0x29aabc8, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ExpressionMustBeWriteable() ;

/// @brief Method get_FaultCannotHaveCatchOrFinally, addr 0x29ab2b0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_FaultCannotHaveCatchOrFinally() ;

/// @brief Method get_FirstArgumentMustBeCallSite, addr 0x29a9d40, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_FirstArgumentMustBeCallSite() ;

/// @brief Method get_IncorrectNumberOfConstructorArguments, addr 0x29ae9dc, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_IncorrectNumberOfConstructorArguments() ;

/// @brief Method get_IncorrectNumberOfIndexes, addr 0x29aca4c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_IncorrectNumberOfIndexes() ;

/// @brief Method get_IncorrectNumberOfLambdaArguments, addr 0x29aece8, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_IncorrectNumberOfLambdaArguments() ;

/// @brief Method get_IncorrectNumberOfLambdaDeclarationParameters, addr 0x29acb10, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_IncorrectNumberOfLambdaDeclarationParameters() ;

/// @brief Method get_IndexesOfSetGetMustMatch, addr 0x29a9bc4, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_IndexesOfSetGetMustMatch() ;

/// @brief Method get_InvalidArgumentValue, addr 0x29af07c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_InvalidArgumentValue() ;

/// @brief Method get_InvalidUnboxType, addr 0x29aaaf4, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_InvalidUnboxType() ;

/// @brief Method get_LabelMustBeVoidOrHaveExpression, addr 0x29aae34, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_LabelMustBeVoidOrHaveExpression() ;

/// @brief Method get_LabelTypeMustBeVoid, addr 0x29aaf08, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_LabelTypeMustBeVoid() ;

/// @brief Method get_LambdaTypeMustBeDerivedFromSystemDelegate, addr 0x29acbe4, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_LambdaTypeMustBeDerivedFromSystemDelegate() ;

/// @brief Method get_MustBeReducible, addr 0x29aad60, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_MustBeReducible() ;

/// @brief Method get_MustReduceToDifferent, addr 0x29a9344, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_MustReduceToDifferent() ;

/// @brief Method get_NoOrInvalidRuleProduced, addr 0x29aa114, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_NoOrInvalidRuleProduced() ;

/// @brief Method get_NonAbstractConstructorRequired, addr 0x29ae628, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_NonAbstractConstructorRequired() ;

/// @brief Method get_OnlyStaticFieldsHaveNullInstance, addr 0x29aa7b4, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_OnlyStaticFieldsHaveNullInstance() ;

/// @brief Method get_OnlyStaticMethodsHaveNullInstance, addr 0x29aa94c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_OnlyStaticMethodsHaveNullInstance() ;

/// @brief Method get_OnlyStaticPropertiesHaveNullInstance, addr 0x29aa888, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_OnlyStaticPropertiesHaveNullInstance() ;

/// @brief Method get_PropertyCannotHaveRefType, addr 0x29a9af0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_PropertyCannotHaveRefType() ;

/// @brief Method get_PropertyTypeCannotBeVoid, addr 0x29aaa20, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_PropertyTypeCannotBeVoid() ;

/// @brief Method get_PropertyTypeMustMatchGetter, addr 0x29aa538, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_PropertyTypeMustMatchGetter() ;

/// @brief Method get_PropertyTypeMustMatchSetter, addr 0x29aa60c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_PropertyTypeMustMatchSetter() ;

/// @brief Method get_QuotedExpressionMustBeLambda, addr 0x29aafdc, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_QuotedExpressionMustBeLambda() ;

/// @brief Method get_ReducedNotCompatible, addr 0x29a9948, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ReducedNotCompatible() ;

/// @brief Method get_ReducibleMustOverrideReduce, addr 0x29a8df8, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ReducibleMustOverrideReduce() ;

/// @brief Method get_RethrowRequiresCatch, addr 0x29ae268, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_RethrowRequiresCatch() ;

/// @brief Method get_SetterHasNoParams, addr 0x29a9a1c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_SetterHasNoParams() ;

/// @brief Method get_SetterMustBeVoid, addr 0x29aa464, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_SetterMustBeVoid() ;

/// @brief Method get_TryMustHaveCatchFinallyOrFault, addr 0x29ab374, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_TryMustHaveCatchFinallyOrFault() ;

/// @brief Method get_TypeMustBeDerivedFromSystemDelegate, addr 0x29aa050, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_TypeMustBeDerivedFromSystemDelegate() ;

/// @brief Method get_TypeMustNotBeByRef, addr 0x29aa2bc, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_TypeMustNotBeByRef() ;

/// @brief Method get_TypeMustNotBePointer, addr 0x29aa390, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_TypeMustNotBePointer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Strings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Strings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Strings(Strings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Strings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Strings(Strings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9170};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Strings, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::Strings);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Strings*, "System.Linq.Expressions", "Strings");
