#pragma once
// IWYU pragma private; include "System/Xml/XmlDeclaration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlDeclaration)
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml {
class XmlDeclaration;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlDeclaration);
// Dependencies System.Xml.XmlLinkedNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlDeclaration
class CORDL_TYPE XmlDeclaration : public ::System::Xml::XmlLinkedNode {
public:
// Declarations
 __declspec(property(get=get_Encoding, put=set_Encoding)) ::StringW  Encoding;

 __declspec(property(get=get_InnerText, put=set_InnerText)) ::StringW  InnerText;

 __declspec(property(get=get_LocalName)) ::StringW  LocalName;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NodeType)) ::System::Xml::XmlNodeType  NodeType;

 __declspec(property(get=get_Standalone, put=set_Standalone)) ::StringW  Standalone;

 __declspec(property(get=get_Value, put=set_Value)) ::StringW  Value;

 __declspec(property(get=get_Version, put=set_Version)) ::StringW  Version;

/// @brief Field encoding, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_encoding, put=__cordl_internal_set_encoding)) ::StringW  encoding;

/// @brief Field standalone, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_standalone, put=__cordl_internal_set_standalone)) ::StringW  standalone;

/// @brief Field version, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) ::StringW  version;

/// @brief Method CloneNode, addr 0x2c28a9c, size 0x3c, virtual true, abstract: false, final false
inline ::System::Xml::XmlNode* CloneNode(bool  deep) ;

/// @brief Method IsValidXmlVersion, addr 0x2c282e0, size 0x7c, virtual false, abstract: false, final false
inline bool IsValidXmlVersion(::StringW  ver) ;

static inline ::System::Xml::XmlDeclaration* New_ctor(::StringW  version, ::StringW  encoding, ::StringW  standalone, ::System::Xml::XmlDocument*  doc) ;

/// @brief Method WriteContentTo, addr 0x2c28b3c, size 0x4, virtual true, abstract: false, final false
inline void WriteContentTo(::System::Xml::XmlWriter*  w) ;

/// @brief Method WriteTo, addr 0x2c28ad8, size 0x64, virtual true, abstract: false, final false
inline void WriteTo(::System::Xml::XmlWriter*  w) ;

constexpr ::StringW const& __cordl_internal_get_encoding() const;

constexpr ::StringW& __cordl_internal_get_encoding() ;

constexpr ::StringW const& __cordl_internal_get_standalone() const;

constexpr ::StringW& __cordl_internal_get_standalone() ;

constexpr ::StringW const& __cordl_internal_get_version() const;

constexpr ::StringW& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_encoding(::StringW  value) ;

constexpr void __cordl_internal_set_standalone(::StringW  value) ;

constexpr void __cordl_internal_set_version(::StringW  value) ;

/// @brief Method .ctor, addr 0x2c28154, size 0x18c, virtual false, abstract: false, final false
inline void _ctor(::StringW  version, ::StringW  encoding, ::StringW  standalone, ::System::Xml::XmlDocument*  doc) ;

/// @brief Method get_Encoding, addr 0x2c28510, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Encoding() ;

/// @brief Method get_InnerText, addr 0x2c28540, size 0x174, virtual true, abstract: false, final false
inline ::StringW get_InnerText() ;

/// @brief Method get_LocalName, addr 0x2c28a88, size 0xc, virtual true, abstract: false, final false
inline ::StringW get_LocalName() ;

/// @brief Method get_Name, addr 0x2c28a48, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NodeType, addr 0x2c28a94, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_Standalone, addr 0x2c28518, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Standalone() ;

/// @brief Method get_Value, addr 0x2c28520, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Method get_Version, addr 0x2c28500, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Version() ;

/// @brief Method set_Encoding, addr 0x2c2835c, size 0x68, virtual false, abstract: false, final false
inline void set_Encoding(::StringW  value) ;

/// @brief Method set_InnerText, addr 0x2c286b4, size 0x17c, virtual true, abstract: false, final false
inline void set_InnerText(::StringW  value) ;

/// @brief Method set_Standalone, addr 0x2c283c4, size 0x13c, virtual false, abstract: false, final false
inline void set_Standalone(::StringW  value) ;

/// @brief Method set_Value, addr 0x2c28530, size 0x10, virtual true, abstract: false, final false
inline void set_Value(::StringW  value) ;

/// @brief Method set_Version, addr 0x2c28508, size 0x8, virtual false, abstract: false, final false
inline void set_Version(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlDeclaration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlDeclaration", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlDeclaration(XmlDeclaration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlDeclaration", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlDeclaration(XmlDeclaration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5492};

/// @brief Field version, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___version;

/// @brief Field encoding, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___encoding;

/// @brief Field standalone, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___standalone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlDeclaration, ___version) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDeclaration, ___encoding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDeclaration, ___standalone) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlDeclaration, 0x38>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::XmlDeclaration);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDeclaration*, "System.Xml", "XmlDeclaration");
