#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_normalizedString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_string_def.hpp"
CORDL_MODULE_EXPORT(Datatype_normalizedString)
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_normalizedString;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_normalizedString);
// Dependencies System.Xml.Schema.Datatype_string
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.Datatype_normalizedString
class CORDL_TYPE Datatype_normalizedString : public ::System::Xml::Schema::Datatype_string {
public:
// Declarations
 __declspec(property(get=get_BuiltInWhitespaceFacet)) ::System::Xml::Schema::XmlSchemaWhiteSpace  BuiltInWhitespaceFacet;

 __declspec(property(get=get_HasValueFacets)) bool  HasValueFacets;

 __declspec(property(get=get_TypeCode)) ::System::Xml::Schema::XmlTypeCode  TypeCode;

static inline ::System::Xml::Schema::Datatype_normalizedString* New_ctor() ;

/// @brief Method .ctor, addr 0x2c97ea8, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BuiltInWhitespaceFacet, addr 0x2c9fa0c, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() ;

/// @brief Method get_HasValueFacets, addr 0x2c9fa14, size 0x8, virtual true, abstract: false, final false
inline bool get_HasValueFacets() ;

/// @brief Method get_TypeCode, addr 0x2c9fa04, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::Schema::XmlTypeCode get_TypeCode() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Datatype_normalizedString() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Datatype_normalizedString", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Datatype_normalizedString(Datatype_normalizedString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_normalizedString", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Datatype_normalizedString(Datatype_normalizedString const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5752};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_normalizedString, 0x38>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_normalizedString);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_normalizedString*, "System.Xml.Schema", "Datatype_normalizedString");
