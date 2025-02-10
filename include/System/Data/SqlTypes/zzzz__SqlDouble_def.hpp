#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlDouble.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SqlDouble)
namespace System::Data::SqlTypes {
struct SqlBoolean;
}
namespace System::Data::SqlTypes {
struct SqlByte;
}
namespace System::Data::SqlTypes {
struct SqlDecimal;
}
namespace System::Data::SqlTypes {
struct SqlInt16;
}
namespace System::Data::SqlTypes {
struct SqlInt32;
}
namespace System::Data::SqlTypes {
struct SqlInt64;
}
namespace System::Data::SqlTypes {
struct SqlMoney;
}
namespace System::Data::SqlTypes {
struct SqlSingle;
}
namespace System::Xml::Schema {
class XmlSchemaSet;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data::SqlTypes {
struct SqlDouble;
}
// Write type traits
MARK_VAL_T(::System::Data::SqlTypes::SqlDouble);
// Dependencies System.Data.SqlTypes.INullable, System.IComparable, System.Xml.Serialization.IXmlSerializable
namespace System::Data::SqlTypes {
// Is value type: true
// CS Name: System.Data.SqlTypes.SqlDouble
struct CORDL_TYPE SqlDouble {
public:
// Declarations
 __declspec(property(get=get_IsNull)) bool  IsNull;

/// @brief Field MaxValue, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_MaxValue, put=setStaticF_MaxValue)) ::System::Data::SqlTypes::SqlDouble  MaxValue;

/// @brief Field MinValue, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_MinValue, put=setStaticF_MinValue)) ::System::Data::SqlTypes::SqlDouble  MinValue;

/// @brief Field Null, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Null, put=setStaticF_Null)) ::System::Data::SqlTypes::SqlDouble  Null;

 __declspec(property(get=get_Value)) double_t  Value;

/// @brief Field Zero, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Zero, put=setStaticF_Zero)) ::System::Data::SqlTypes::SqlDouble  Zero;

/// @brief Convert operator to "::System::Data::SqlTypes::INullable"
constexpr operator  ::System::Data::SqlTypes::INullable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
constexpr operator  ::System::Xml::Serialization::IXmlSerializable*() ;

/// @brief Method CompareTo, addr 0x2ac33c4, size 0x160, virtual false, abstract: false, final false
inline int32_t CompareTo(::System::Data::SqlTypes::SqlDouble  value) ;

/// @brief Method CompareTo, addr 0x2ac32bc, size 0x108, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Object*  value) ;

/// @brief Method Equals, addr 0x2ac3524, size 0x140, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  value) ;

/// @brief Method GetHashCode, addr 0x2ac3664, size 0x94, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetXsdType, addr 0x2ac395c, size 0x8c, virtual false, abstract: false, final false
static inline ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet*  schemaSet) ;

/// @brief Method GreaterThan, addr 0x2ac31d8, size 0x84, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlDouble  x, ::System::Data::SqlTypes::SqlDouble  y) ;

/// @brief Method LessThan, addr 0x2ac3154, size 0x84, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlDouble  x, ::System::Data::SqlTypes::SqlDouble  y) ;

/// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x2ac36f8, size 0x8, virtual true, abstract: false, final true
inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema() ;

/// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x2ac3700, size 0x120, virtual true, abstract: false, final true
inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader*  reader) ;

/// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x2ac3820, size 0x13c, virtual true, abstract: false, final true
inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter*  writer) ;

/// @brief Method ToSqlSingle, addr 0x2ac325c, size 0x60, virtual false, abstract: false, final false
inline ::System::Data::SqlTypes::SqlSingle ToSqlSingle() ;

/// @brief Method ToString, addr 0x2ac2438, size 0x9c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x2ac233c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(bool  fNull) ;

/// @brief Method .ctor, addr 0x2ac2348, size 0x70, virtual false, abstract: false, final false
inline void _ctor(double_t  value) ;

static inline ::System::Data::SqlTypes::SqlDouble getStaticF_MaxValue() ;

static inline ::System::Data::SqlTypes::SqlDouble getStaticF_MinValue() ;

static inline ::System::Data::SqlTypes::SqlDouble getStaticF_Null() ;

static inline ::System::Data::SqlTypes::SqlDouble getStaticF_Zero() ;

/// @brief Method get_IsNull, addr 0x2ac23b8, size 0x10, virtual true, abstract: false, final true
inline bool get_IsNull() ;

/// @brief Method get_Value, addr 0x2ac23c8, size 0x4c, virtual false, abstract: false, final false
inline double_t get_Value() ;

/// @brief Convert to "::System::Data::SqlTypes::INullable"
constexpr ::System::Data::SqlTypes::INullable* i___System__Data__SqlTypes__INullable() ;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() ;

/// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable() ;

/// @brief Method op_Addition, addr 0x2ac257c, size 0x128, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlDouble op_Addition(::System::Data::SqlTypes::SqlDouble  x, ::System::Data::SqlTypes::SqlDouble  y) ;

/// @brief Method op_Division, addr 0x2ac28f4, size 0x15c, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlDouble op_Division(::System::Data::SqlTypes::SqlDouble  x, ::System::Data::SqlTypes::SqlDouble  y) ;

/// @brief Method op_Equality, addr 0x2ac2ecc, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlDouble  x, ::System::Data::SqlTypes::SqlDouble  y) ;

/// @brief Method op_GreaterThan, addr 0x2ac307c, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlDouble  x, ::System::Data::SqlTypes::SqlDouble  y) ;

/// @brief Method op_Implicit, addr 0x2ab88d8, size 0xcc, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlDouble op_Implicit___System__Data__SqlTypes__SqlDouble(::System::Data::SqlTypes::SqlByte  x) ;

/// @brief Method op_Implicit, addr 0x2ac12f4, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlDouble op_Implicit___System__Data__SqlTypes__SqlDouble(::System::Data::SqlTypes::SqlDecimal  x) ;

/// @brief Method op_Implicit, addr 0x2ac2a50, size 0xcc, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlDouble op_Implicit___System__Data__SqlTypes__SqlDouble(::System::Data::SqlTypes::SqlInt16  x) ;

/// @brief Method op_Implicit, addr 0x2ac2b1c, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlDouble op_Implicit___System__Data__SqlTypes__SqlDouble(::System::Data::SqlTypes::SqlInt32  x) ;

/// @brief Method op_Implicit, addr 0x2ac2be4, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlDouble op_Implicit___System__Data__SqlTypes__SqlDouble(::System::Data::SqlTypes::SqlInt64  x) ;

/// @brief Method op_Implicit, addr 0x2ac2d78, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlDouble op_Implicit___System__Data__SqlTypes__SqlDouble(::System::Data::SqlTypes::SqlMoney  x) ;

/// @brief Method op_Implicit, addr 0x2ac2cac, size 0xcc, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlDouble op_Implicit___System__Data__SqlTypes__SqlDouble(::System::Data::SqlTypes::SqlSingle  x) ;

/// @brief Method op_Implicit, addr 0x2ac2414, size 0x24, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlDouble op_Implicit___System__Data__SqlTypes__SqlDouble(double_t  x) ;

/// @brief Method op_LessThan, addr 0x2ac2fa4, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlDouble  x, ::System::Data::SqlTypes::SqlDouble  y) ;

/// @brief Method op_Multiply, addr 0x2ac27cc, size 0x128, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlDouble op_Multiply(::System::Data::SqlTypes::SqlDouble  x, ::System::Data::SqlTypes::SqlDouble  y) ;

/// @brief Method op_Subtraction, addr 0x2ac26a4, size 0x128, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlDouble op_Subtraction(::System::Data::SqlTypes::SqlDouble  x, ::System::Data::SqlTypes::SqlDouble  y) ;

/// @brief Method op_UnaryNegation, addr 0x2ac24d4, size 0xa8, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlDouble op_UnaryNegation(::System::Data::SqlTypes::SqlDouble  x) ;

static inline void setStaticF_MaxValue(::System::Data::SqlTypes::SqlDouble  value) ;

static inline void setStaticF_MinValue(::System::Data::SqlTypes::SqlDouble  value) ;

static inline void setStaticF_Null(::System::Data::SqlTypes::SqlDouble  value) ;

static inline void setStaticF_Zero(::System::Data::SqlTypes::SqlDouble  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SqlDouble() ;

// Ctor Parameters [CppParam { name: "m_fNotNull", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_value", ty: "double_t", modifiers: "", def_value: None }]
constexpr SqlDouble(bool  m_fNotNull, double_t  m_value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8221};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_fNotNull, offset: 0x0, size: 0x1, def value: None
 bool  m_fNotNull;

/// @brief Field m_value, offset: 0x8, size: 0x8, def value: None
 double_t  m_value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::SqlTypes::SqlDouble, m_fNotNull) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlDouble, m_value) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlDouble, 0x10>, "Size mismatch!");

} // namespace end def System::Data::SqlTypes
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlDouble, "System.Data.SqlTypes", "SqlDouble");
