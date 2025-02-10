#pragma once
// IWYU pragma private; include "System/Xml/Schema/SchemaCollectionCompiler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__BaseProcessor_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SchemaCollectionCompiler)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Stack;
}
namespace System::Xml::Schema {
class ContentValidator;
}
namespace System::Xml::Schema {
class ParticleContentValidator;
}
namespace System::Xml::Schema {
class SchemaInfo;
}
namespace System::Xml::Schema {
class ValidationEventHandler;
}
namespace System::Xml::Schema {
class XmlSchemaAll;
}
namespace System::Xml::Schema {
class XmlSchemaAnyAttribute;
}
namespace System::Xml::Schema {
class XmlSchemaAny;
}
namespace System::Xml::Schema {
class XmlSchemaAttributeGroup;
}
namespace System::Xml::Schema {
class XmlSchemaAttribute;
}
namespace System::Xml::Schema {
class XmlSchemaChoice;
}
namespace System::Xml::Schema {
class XmlSchemaComplexContentExtension;
}
namespace System::Xml::Schema {
class XmlSchemaComplexContentRestriction;
}
namespace System::Xml::Schema {
class XmlSchemaComplexContent;
}
namespace System::Xml::Schema {
class XmlSchemaComplexType;
}
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
namespace System::Xml::Schema {
struct XmlSchemaDerivationMethod;
}
namespace System::Xml::Schema {
class XmlSchemaElement;
}
namespace System::Xml::Schema {
class XmlSchemaGroupBase;
}
namespace System::Xml::Schema {
class XmlSchemaGroupRef;
}
namespace System::Xml::Schema {
class XmlSchemaGroup;
}
namespace System::Xml::Schema {
class XmlSchemaIdentityConstraint;
}
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable;
}
namespace System::Xml::Schema {
class XmlSchemaParticle;
}
namespace System::Xml::Schema {
class XmlSchemaSequence;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleContentExtension;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleContentRestriction;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml::Schema {
class XmlSchemaSubstitutionGroupV1Compat;
}
namespace System::Xml::Schema {
class XmlSchemaSubstitutionGroup;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System::Xml::Schema {
class SchemaCollectionCompiler;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::SchemaCollectionCompiler);
// Dependencies System.Xml.Schema.BaseProcessor
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.SchemaCollectionCompiler
class CORDL_TYPE SchemaCollectionCompiler : public ::System::Xml::Schema::BaseProcessor {
public:
// Declarations
/// @brief Field compileContentModel, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_compileContentModel, put=__cordl_internal_set_compileContentModel)) bool  compileContentModel;

/// @brief Field complexTypeStack, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_complexTypeStack, put=__cordl_internal_set_complexTypeStack)) ::System::Collections::Stack*  complexTypeStack;

/// @brief Field examplars, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_examplars, put=__cordl_internal_set_examplars)) ::System::Xml::Schema::XmlSchemaObjectTable*  examplars;

/// @brief Field schema, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_schema, put=__cordl_internal_set_schema)) ::System::Xml::Schema::XmlSchema*  schema;

/// @brief Method BuildParticleContentModel, addr 0x2b7b11c, size 0x4f4, virtual false, abstract: false, final false
inline void BuildParticleContentModel(::System::Xml::Schema::ParticleContentValidator*  contentValidator, ::System::Xml::Schema::XmlSchemaParticle*  particle) ;

/// @brief Method CalculateEffectiveTotalRange, addr 0x2b7a260, size 0x7d8, virtual false, abstract: false, final false
inline void CalculateEffectiveTotalRange(::System::Xml::Schema::XmlSchemaParticle*  particle, ::ByRef<::System::Decimal>  minOccurs, ::ByRef<::System::Decimal>  maxOccurs) ;

/// @brief Method CalculateSequenceRange, addr 0x2b7ac14, size 0x3bc, virtual false, abstract: false, final false
inline void CalculateSequenceRange(::System::Xml::Schema::XmlSchemaSequence*  sequence, ::ByRef<::System::Decimal>  minOccurs, ::ByRef<::System::Decimal>  maxOccurs) ;

/// @brief Method CannonicalizeAll, addr 0x2b78478, size 0x494, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeAll(::System::Xml::Schema::XmlSchemaAll*  all, bool  root, bool  substitution) ;

/// @brief Method CannonicalizeChoice, addr 0x2b7890c, size 0x500, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeChoice(::System::Xml::Schema::XmlSchemaChoice*  choice, bool  root, bool  substitution) ;

/// @brief Method CannonicalizeElement, addr 0x2b77de0, size 0x150, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeElement(::System::Xml::Schema::XmlSchemaElement*  element, bool  substitution) ;

/// @brief Method CannonicalizeGroupRef, addr 0x2b77f30, size 0x548, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeGroupRef(::System::Xml::Schema::XmlSchemaGroupRef*  groupRef, bool  root, bool  substitution) ;

/// @brief Method CannonicalizeParticle, addr 0x2b73fb8, size 0x24c, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeParticle(::System::Xml::Schema::XmlSchemaParticle*  particle, bool  root, bool  substitution) ;

/// @brief Method CannonicalizeSequence, addr 0x2b78e0c, size 0x4a0, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeSequence(::System::Xml::Schema::XmlSchemaSequence*  sequence, bool  root, bool  substitution) ;

/// @brief Method CheckParticleDerivation, addr 0x2b73a90, size 0x12c, virtual false, abstract: false, final false
inline void CheckParticleDerivation(::System::Xml::Schema::XmlSchemaComplexType*  complexType) ;

/// @brief Method CheckSubstitutionGroup, addr 0x2b73bbc, size 0x1d4, virtual false, abstract: false, final false
inline void CheckSubstitutionGroup(::System::Xml::Schema::XmlSchemaSubstitutionGroup*  substitutionGroup) ;

/// @brief Method CheckUnionType, addr 0x2b746f0, size 0x118, virtual false, abstract: false, final false
inline void CheckUnionType(::System::Xml::Schema::XmlSchemaSimpleType*  unionMember, ::System::Collections::ArrayList*  memberTypeDefinitions, ::System::Xml::Schema::XmlSchemaSimpleType*  parentType) ;

/// @brief Method Cleanup, addr 0x2b6b120, size 0xefc, virtual false, abstract: false, final false
inline void Cleanup() ;

/// @brief Method Cleanup, addr 0x2b6f5d0, size 0x610, virtual false, abstract: false, final false
static inline void Cleanup(::System::Xml::Schema::XmlSchema*  schema) ;

/// @brief Method CleanupAttribute, addr 0x2b6f5a0, size 0x30, virtual false, abstract: false, final false
static inline void CleanupAttribute(::System::Xml::Schema::XmlSchemaAttribute*  attribute) ;

/// @brief Method CleanupAttributeGroup, addr 0x2b6f0b4, size 0x3c, virtual false, abstract: false, final false
static inline void CleanupAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup*  attributeGroup) ;

/// @brief Method CleanupAttributes, addr 0x2b73d90, size 0xc4, virtual false, abstract: false, final false
static inline void CleanupAttributes(::System::Xml::Schema::XmlSchemaObjectCollection*  attributes) ;

/// @brief Method CleanupComplexType, addr 0x2b6f0f0, size 0x324, virtual false, abstract: false, final false
static inline void CleanupComplexType(::System::Xml::Schema::XmlSchemaComplexType*  complexType) ;

/// @brief Method CleanupElement, addr 0x2b6f42c, size 0x174, virtual false, abstract: false, final false
static inline void CleanupElement(::System::Xml::Schema::XmlSchemaElement*  element) ;

/// @brief Method CleanupGroup, addr 0x2b6f090, size 0x24, virtual false, abstract: false, final false
static inline void CleanupGroup(::System::Xml::Schema::XmlSchemaGroup*  group) ;

/// @brief Method CleanupParticle, addr 0x2b73e54, size 0x164, virtual false, abstract: false, final false
static inline void CleanupParticle(::System::Xml::Schema::XmlSchemaParticle*  particle) ;

/// @brief Method CleanupSimpleType, addr 0x2b6f414, size 0x18, virtual false, abstract: false, final false
static inline void CleanupSimpleType(::System::Xml::Schema::XmlSchemaSimpleType*  simpleType) ;

/// @brief Method Compile, addr 0x2b6c01c, size 0x2058, virtual false, abstract: false, final false
inline void Compile() ;

/// @brief Method CompileAnyAttributeIntersection, addr 0x2b7aff4, size 0x94, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaAnyAttribute* CompileAnyAttributeIntersection(::System::Xml::Schema::XmlSchemaAnyAttribute*  a, ::System::Xml::Schema::XmlSchemaAnyAttribute*  b) ;

/// @brief Method CompileAnyAttributeUnion, addr 0x2b7b088, size 0x94, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaAnyAttribute* CompileAnyAttributeUnion(::System::Xml::Schema::XmlSchemaAnyAttribute*  a, ::System::Xml::Schema::XmlSchemaAnyAttribute*  b) ;

/// @brief Method CompileAttribute, addr 0x2b72a18, size 0x92c, virtual false, abstract: false, final false
inline void CompileAttribute(::System::Xml::Schema::XmlSchemaAttribute*  xa) ;

/// @brief Method CompileAttributeGroup, addr 0x2b7012c, size 0x74c, virtual false, abstract: false, final false
inline void CompileAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup*  attributeGroup) ;

/// @brief Method CompileBaseMemberTypes, addr 0x2b74350, size 0x3a0, virtual false, abstract: false, final false
inline ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*,::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> CompileBaseMemberTypes(::System::Xml::Schema::XmlSchemaSimpleType*  simpleType) ;

/// @brief Method CompileCompexTypeElements, addr 0x2b739bc, size 0xd4, virtual false, abstract: false, final false
inline void CompileCompexTypeElements(::System::Xml::Schema::XmlSchemaComplexType*  complexType) ;

/// @brief Method CompileComplexContent, addr 0x2b76bd4, size 0xa2c, virtual false, abstract: false, final false
inline ::System::Xml::Schema::ContentValidator* CompileComplexContent(::System::Xml::Schema::XmlSchemaComplexType*  complexType) ;

/// @brief Method CompileComplexContentExtension, addr 0x2b74e6c, size 0x3c8, virtual false, abstract: false, final false
inline void CompileComplexContentExtension(::System::Xml::Schema::XmlSchemaComplexType*  complexType, ::System::Xml::Schema::XmlSchemaComplexContent*  complexContent, ::System::Xml::Schema::XmlSchemaComplexContentExtension*  complexExtension) ;

/// @brief Method CompileComplexContentRestriction, addr 0x2b75234, size 0x2d8, virtual false, abstract: false, final false
inline void CompileComplexContentRestriction(::System::Xml::Schema::XmlSchemaComplexType*  complexType, ::System::Xml::Schema::XmlSchemaComplexContent*  complexContent, ::System::Xml::Schema::XmlSchemaComplexContentRestriction*  complexRestriction) ;

/// @brief Method CompileComplexType, addr 0x2b70878, size 0xcd0, virtual false, abstract: false, final false
inline void CompileComplexType(::System::Xml::Schema::XmlSchemaComplexType*  complexType) ;

/// @brief Method CompileContentTypeParticle, addr 0x2b76a00, size 0x164, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaParticle* CompileContentTypeParticle(::System::Xml::Schema::XmlSchemaParticle*  particle, bool  substitution) ;

/// @brief Method CompileElement, addr 0x2b71e04, size 0xc14, virtual false, abstract: false, final false
inline void CompileElement(::System::Xml::Schema::XmlSchemaElement*  xe) ;

/// @brief Method CompileGroup, addr 0x2b70060, size 0xcc, virtual false, abstract: false, final false
inline void CompileGroup(::System::Xml::Schema::XmlSchemaGroup*  group) ;

/// @brief Method CompileIdentityConstraint, addr 0x2b73344, size 0x678, virtual false, abstract: false, final false
inline void CompileIdentityConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint*  xi) ;

/// @brief Method CompileLocalAttributes, addr 0x2b7550c, size 0x14f4, virtual false, abstract: false, final false
inline void CompileLocalAttributes(::System::Xml::Schema::XmlSchemaComplexType*  baseType, ::System::Xml::Schema::XmlSchemaComplexType*  derivedType, ::System::Xml::Schema::XmlSchemaObjectCollection*  attributes, ::System::Xml::Schema::XmlSchemaAnyAttribute*  anyAttribute, ::System::Xml::Schema::XmlSchemaDerivationMethod  derivedBy) ;

/// @brief Method CompileParticleElements, addr 0x2b7b610, size 0x254, virtual false, abstract: false, final false
inline void CompileParticleElements(::System::Xml::Schema::XmlSchemaComplexType*  complexType, ::System::Xml::Schema::XmlSchemaParticle*  particle) ;

/// @brief Method CompileSimpleContentExtension, addr 0x2b74808, size 0x240, virtual false, abstract: false, final false
inline void CompileSimpleContentExtension(::System::Xml::Schema::XmlSchemaComplexType*  complexType, ::System::Xml::Schema::XmlSchemaSimpleContentExtension*  simpleExtension) ;

/// @brief Method CompileSimpleContentRestriction, addr 0x2b74a48, size 0x424, virtual false, abstract: false, final false
inline void CompileSimpleContentRestriction(::System::Xml::Schema::XmlSchemaComplexType*  complexType, ::System::Xml::Schema::XmlSchemaSimpleContentRestriction*  simpleRestriction) ;

/// @brief Method CompileSimpleType, addr 0x2b71548, size 0x8bc, virtual false, abstract: false, final false
inline void CompileSimpleType(::System::Xml::Schema::XmlSchemaSimpleType*  simpleType) ;

/// @brief Method CompileSubstitutionGroup, addr 0x2b6fbe0, size 0x480, virtual false, abstract: false, final false
inline void CompileSubstitutionGroup(::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat*  substitutionGroup) ;

/// @brief Method Execute, addr 0x2b6ac3c, size 0x6c, virtual false, abstract: false, final false
inline bool Execute(::System::Xml::Schema::XmlSchema*  schema, ::System::Xml::Schema::SchemaInfo*  schemaInfo, bool  compileContentModel) ;

/// @brief Method GetAnySchemaType, addr 0x2b77600, size 0x164, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaType* GetAnySchemaType(::System::Xml::XmlQualifiedName*  name) ;

/// @brief Method GetComplexType, addr 0x2b77764, size 0xb4, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaComplexType* GetComplexType(::System::Xml::XmlQualifiedName*  name) ;

/// @brief Method GetMappingParticle, addr 0x2b7ab20, size 0xf4, virtual false, abstract: false, final false
inline int32_t GetMappingParticle(::System::Xml::Schema::XmlSchemaParticle*  particle, ::System::Xml::Schema::XmlSchemaObjectCollection*  collection) ;

/// @brief Method GetSchemaContentType, addr 0x2b76b64, size 0x70, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaContentType GetSchemaContentType(::System::Xml::Schema::XmlSchemaComplexType*  complexType, ::System::Xml::Schema::XmlSchemaComplexContent*  complexContent, ::System::Xml::Schema::XmlSchemaParticle*  particle) ;

/// @brief Method GetSimpleType, addr 0x2b74204, size 0x14c, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaSimpleType* GetSimpleType(::System::Xml::XmlQualifiedName*  name) ;

/// @brief Method IsAnyFromAny, addr 0x2b794e0, size 0x4c, virtual false, abstract: false, final false
inline bool IsAnyFromAny(::System::Xml::Schema::XmlSchemaAny*  derivedAny, ::System::Xml::Schema::XmlSchemaAny*  baseAny) ;

/// @brief Method IsElementFromAny, addr 0x2b79484, size 0x5c, virtual false, abstract: false, final false
inline bool IsElementFromAny(::System::Xml::Schema::XmlSchemaElement*  derivedElement, ::System::Xml::Schema::XmlSchemaAny*  baseAny) ;

/// @brief Method IsElementFromElement, addr 0x2b79370, size 0x114, virtual false, abstract: false, final false
inline bool IsElementFromElement(::System::Xml::Schema::XmlSchemaElement*  derivedElement, ::System::Xml::Schema::XmlSchemaElement*  baseElement) ;

/// @brief Method IsElementFromGroupBase, addr 0x2b79734, size 0x368, virtual false, abstract: false, final false
inline bool IsElementFromGroupBase(::System::Xml::Schema::XmlSchemaElement*  derivedElement, ::System::Xml::Schema::XmlSchemaGroupBase*  baseGroupBase, bool  skipEmptableOnly) ;

/// @brief Method IsGroupBaseFromAny, addr 0x2b7952c, size 0x208, virtual false, abstract: false, final false
inline bool IsGroupBaseFromAny(::System::Xml::Schema::XmlSchemaGroupBase*  derivedGroupBase, ::System::Xml::Schema::XmlSchemaAny*  baseAny) ;

/// @brief Method IsGroupBaseFromGroupBase, addr 0x2b79a9c, size 0x274, virtual false, abstract: false, final false
inline bool IsGroupBaseFromGroupBase(::System::Xml::Schema::XmlSchemaGroupBase*  derivedGroupBase, ::System::Xml::Schema::XmlSchemaGroupBase*  baseGroupBase, bool  skipEmptableOnly) ;

/// @brief Method IsParticleEmptiable, addr 0x2b792ac, size 0xc4, virtual false, abstract: false, final false
inline bool IsParticleEmptiable(::System::Xml::Schema::XmlSchemaParticle*  particle) ;

/// @brief Method IsSequenceFromAll, addr 0x2b79d10, size 0x30c, virtual false, abstract: false, final false
inline bool IsSequenceFromAll(::System::Xml::Schema::XmlSchemaSequence*  derivedSequence, ::System::Xml::Schema::XmlSchemaAll*  baseAll) ;

/// @brief Method IsSequenceFromChoice, addr 0x2b7a01c, size 0x200, virtual false, abstract: false, final false
inline bool IsSequenceFromChoice(::System::Xml::Schema::XmlSchemaSequence*  derivedSequence, ::System::Xml::Schema::XmlSchemaChoice*  baseChoice) ;

/// @brief Method IsValidOccurrenceRangeRestriction, addr 0x2b7a21c, size 0x44, virtual false, abstract: false, final false
inline bool IsValidOccurrenceRangeRestriction(::System::Xml::Schema::XmlSchemaParticle*  derivedParticle, ::System::Xml::Schema::XmlSchemaParticle*  baseParticle) ;

/// @brief Method IsValidOccurrenceRangeRestriction, addr 0x2b7aa38, size 0xe8, virtual false, abstract: false, final false
inline bool IsValidOccurrenceRangeRestriction(::System::Decimal  minOccurs, ::System::Decimal  maxOccurs, ::System::Decimal  baseMinOccurs, ::System::Decimal  baseMaxOccurs) ;

/// @brief Method IsValidRestriction, addr 0x2b77818, size 0x5c8, virtual false, abstract: false, final false
inline bool IsValidRestriction(::System::Xml::Schema::XmlSchemaParticle*  derivedParticle, ::System::Xml::Schema::XmlSchemaParticle*  baseParticle) ;

static inline ::System::Xml::Schema::SchemaCollectionCompiler* New_ctor(::System::Xml::XmlNameTable*  nameTable, ::System::Xml::Schema::ValidationEventHandler*  eventHandler) ;

/// @brief Method Output, addr 0x2b6e074, size 0x101c, virtual false, abstract: false, final false
inline void Output(::System::Xml::Schema::SchemaInfo*  schemaInfo) ;

/// @brief Method Prepare, addr 0x2b6aca8, size 0x478, virtual false, abstract: false, final false
inline void Prepare() ;

/// @brief Method PushComplexType, addr 0x2b7afd0, size 0x24, virtual false, abstract: false, final false
inline void PushComplexType(::System::Xml::Schema::XmlSchemaComplexType*  complexType) ;

constexpr bool const& __cordl_internal_get_compileContentModel() const;

constexpr bool& __cordl_internal_get_compileContentModel() ;

constexpr ::System::Collections::Stack* const& __cordl_internal_get_complexTypeStack() const;

constexpr ::System::Collections::Stack*& __cordl_internal_get_complexTypeStack() ;

constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& __cordl_internal_get_examplars() const;

constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_examplars() ;

constexpr ::System::Xml::Schema::XmlSchema* const& __cordl_internal_get_schema() const;

constexpr ::System::Xml::Schema::XmlSchema*& __cordl_internal_get_schema() ;

constexpr void __cordl_internal_set_compileContentModel(bool  value) ;

constexpr void __cordl_internal_set_complexTypeStack(::System::Collections::Stack*  value) ;

constexpr void __cordl_internal_set_examplars(::System::Xml::Schema::XmlSchemaObjectTable*  value) ;

constexpr void __cordl_internal_set_schema(::System::Xml::Schema::XmlSchema*  value) ;

/// @brief Method .ctor, addr 0x2b6ab8c, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::XmlNameTable*  nameTable, ::System::Xml::Schema::ValidationEventHandler*  eventHandler) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SchemaCollectionCompiler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SchemaCollectionCompiler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SchemaCollectionCompiler(SchemaCollectionCompiler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SchemaCollectionCompiler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SchemaCollectionCompiler(SchemaCollectionCompiler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5813};

/// @brief Field compileContentModel, offset: 0x40, size: 0x1, def value: None
 bool  ___compileContentModel;

/// @brief Field examplars, offset: 0x48, size: 0x8, def value: None
 ::System::Xml::Schema::XmlSchemaObjectTable*  ___examplars;

/// @brief Field complexTypeStack, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Stack*  ___complexTypeStack;

/// @brief Field schema, offset: 0x58, size: 0x8, def value: None
 ::System::Xml::Schema::XmlSchema*  ___schema;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::SchemaCollectionCompiler, ___compileContentModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaCollectionCompiler, ___examplars) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaCollectionCompiler, ___complexTypeStack) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaCollectionCompiler, ___schema) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SchemaCollectionCompiler, 0x60>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::SchemaCollectionCompiler);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaCollectionCompiler*, "System.Xml.Schema", "SchemaCollectionCompiler");
