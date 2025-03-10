#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaUse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaUse)
// Forward declare root types
namespace System::Xml::Schema {
struct XmlSchemaUse;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::XmlSchemaUse);
// Dependencies 
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.XmlSchemaUse
struct CORDL_TYPE XmlSchemaUse {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlSchemaUse_Unwrapped
enum struct __XmlSchemaUse_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Optional = static_cast<int32_t>(0x1),
__E_Prohibited = static_cast<int32_t>(0x2),
__E_Required = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlSchemaUse_Unwrapped () const noexcept {
return static_cast<__XmlSchemaUse_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlSchemaUse() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XmlSchemaUse(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::System::Xml::Schema::XmlSchemaUse const None;

/// @brief Field Optional value: I32(1)
static ::System::Xml::Schema::XmlSchemaUse const Optional;

/// @brief Field Prohibited value: I32(2)
static ::System::Xml::Schema::XmlSchemaUse const Prohibited;

/// @brief Field Required value: I32(3)
static ::System::Xml::Schema::XmlSchemaUse const Required;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5930};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaUse, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaUse, 0x4>, "Size mismatch!");

} // namespace end def System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaUse, "System.Xml.Schema", "XmlSchemaUse");
