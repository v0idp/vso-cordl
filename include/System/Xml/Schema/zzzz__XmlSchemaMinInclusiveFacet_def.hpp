#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaMinInclusiveFacet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaFacet_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaMinInclusiveFacet)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaMinInclusiveFacet;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaMinInclusiveFacet);
// Dependencies System.Xml.Schema.XmlSchemaFacet
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaMinInclusiveFacet
class CORDL_TYPE XmlSchemaMinInclusiveFacet : public ::System::Xml::Schema::XmlSchemaFacet {
public:
// Declarations
static inline ::System::Xml::Schema::XmlSchemaMinInclusiveFacet* New_ctor() ;

/// @brief Method .ctor, addr 0x2bb1270, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlSchemaMinInclusiveFacet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaMinInclusiveFacet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSchemaMinInclusiveFacet(XmlSchemaMinInclusiveFacet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaMinInclusiveFacet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSchemaMinInclusiveFacet(XmlSchemaMinInclusiveFacet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5885};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaMinInclusiveFacet, 0x60>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaMinInclusiveFacet);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaMinInclusiveFacet*, "System.Xml.Schema", "XmlSchemaMinInclusiveFacet");
