#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaSimpleTypeContent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaSimpleTypeContent)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSimpleTypeContent;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaSimpleTypeContent);
// Dependencies System.Xml.Schema.XmlSchemaAnnotated
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaSimpleTypeContent
class CORDL_TYPE XmlSchemaSimpleTypeContent : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
// Declarations
static inline ::System::Xml::Schema::XmlSchemaSimpleTypeContent* New_ctor() ;

/// @brief Method .ctor, addr 0x2bbbec4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlSchemaSimpleTypeContent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleTypeContent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSchemaSimpleTypeContent(XmlSchemaSimpleTypeContent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleTypeContent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSchemaSimpleTypeContent(XmlSchemaSimpleTypeContent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5923};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaSimpleTypeContent, 0x50>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSimpleTypeContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSimpleTypeContent*, "System.Xml.Schema", "XmlSchemaSimpleTypeContent");
