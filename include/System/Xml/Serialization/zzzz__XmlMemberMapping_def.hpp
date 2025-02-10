#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlMemberMapping.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XmlMemberMapping)
// Forward declare root types
namespace System::Xml::Serialization {
class XmlMemberMapping;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlMemberMapping);
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlMemberMapping
class CORDL_TYPE XmlMemberMapping : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlMemberMapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlMemberMapping", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlMemberMapping(XmlMemberMapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlMemberMapping", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlMemberMapping(XmlMemberMapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5623};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlMemberMapping, 0x10>, "Size mismatch!");

} // namespace end def System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlMemberMapping);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlMemberMapping*, "System.Xml.Serialization", "XmlMemberMapping");
