#pragma once
// IWYU pragma private; include "System/Xml/XmlTokenizedType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTokenizedType)
// Forward declare root types
namespace System::Xml {
struct XmlTokenizedType;
}
// Write type traits
MARK_VAL_T(::System::Xml::XmlTokenizedType);
// Dependencies 
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlTokenizedType
struct CORDL_TYPE XmlTokenizedType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlTokenizedType_Unwrapped
enum struct __XmlTokenizedType_Unwrapped : int32_t {
__E_CDATA = static_cast<int32_t>(0x0),
__E_ID = static_cast<int32_t>(0x1),
__E_IDREF = static_cast<int32_t>(0x2),
__E_IDREFS = static_cast<int32_t>(0x3),
__E_ENTITY = static_cast<int32_t>(0x4),
__E_ENTITIES = static_cast<int32_t>(0x5),
__E_NMTOKEN = static_cast<int32_t>(0x6),
__E_NMTOKENS = static_cast<int32_t>(0x7),
__E_NOTATION = static_cast<int32_t>(0x8),
__E_ENUMERATION = static_cast<int32_t>(0x9),
__E_QName = static_cast<int32_t>(0xa),
__E_NCName = static_cast<int32_t>(0xb),
__E_None = static_cast<int32_t>(0xc),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlTokenizedType_Unwrapped () const noexcept {
return static_cast<__XmlTokenizedType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlTokenizedType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XmlTokenizedType(int32_t  value__) noexcept;

/// @brief Field CDATA value: I32(0)
static ::System::Xml::XmlTokenizedType const CDATA;

/// @brief Field ENTITIES value: I32(5)
static ::System::Xml::XmlTokenizedType const ENTITIES;

/// @brief Field ENTITY value: I32(4)
static ::System::Xml::XmlTokenizedType const ENTITY;

/// @brief Field ENUMERATION value: I32(9)
static ::System::Xml::XmlTokenizedType const ENUMERATION;

/// @brief Field IDREF value: I32(2)
static ::System::Xml::XmlTokenizedType const IDREF;

/// @brief Field IDREFS value: I32(3)
static ::System::Xml::XmlTokenizedType const IDREFS;

/// @brief Field NCName value: I32(11)
static ::System::Xml::XmlTokenizedType const NCName;

/// @brief Field NMTOKEN value: I32(6)
static ::System::Xml::XmlTokenizedType const NMTOKEN;

/// @brief Field NMTOKENS value: I32(7)
static ::System::Xml::XmlTokenizedType const NMTOKENS;

/// @brief Field NOTATION value: I32(8)
static ::System::Xml::XmlTokenizedType const NOTATION;

/// @brief Field None value: I32(12)
static ::System::Xml::XmlTokenizedType const None;

/// @brief Field QName value: I32(10)
static ::System::Xml::XmlTokenizedType const QName;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5537};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field ID value: I32(1)
static ::System::Xml::XmlTokenizedType const _cordl_ID;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlTokenizedType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlTokenizedType, 0x4>, "Size mismatch!");

} // namespace end def System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTokenizedType, "System.Xml", "XmlTokenizedType");
