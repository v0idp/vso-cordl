#pragma once
// IWYU pragma private; include "System/Xml/ElementProperties.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ElementProperties)
// Forward declare root types
namespace System::Xml {
struct ElementProperties;
}
// Write type traits
MARK_VAL_T(::System::Xml::ElementProperties);
// Dependencies 
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.ElementProperties
struct CORDL_TYPE ElementProperties {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __ElementProperties_Unwrapped
enum struct __ElementProperties_Unwrapped : uint32_t {
__E_DEFAULT = static_cast<uint32_t>(0x0u),
__E_URI_PARENT = static_cast<uint32_t>(0x1u),
__E_BOOL_PARENT = static_cast<uint32_t>(0x2u),
__E_NAME_PARENT = static_cast<uint32_t>(0x4u),
__E_EMPTY = static_cast<uint32_t>(0x8u),
__E_NO_ENTITIES = static_cast<uint32_t>(0x10u),
__E_HEAD = static_cast<uint32_t>(0x20u),
__E_BLOCK_WS = static_cast<uint32_t>(0x40u),
__E_HAS_NS = static_cast<uint32_t>(0x80u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ElementProperties_Unwrapped () const noexcept {
return static_cast<__ElementProperties_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ElementProperties() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ElementProperties(uint32_t  value__) noexcept;

/// @brief Field BLOCK_WS value: U32(64)
static ::System::Xml::ElementProperties const BLOCK_WS;

/// @brief Field BOOL_PARENT value: U32(2)
static ::System::Xml::ElementProperties const BOOL_PARENT;

/// @brief Field DEFAULT value: U32(0)
static ::System::Xml::ElementProperties const DEFAULT;

/// @brief Field EMPTY value: U32(8)
static ::System::Xml::ElementProperties const EMPTY;

/// @brief Field HAS_NS value: U32(128)
static ::System::Xml::ElementProperties const HAS_NS;

/// @brief Field HEAD value: U32(32)
static ::System::Xml::ElementProperties const HEAD;

/// @brief Field NAME_PARENT value: U32(4)
static ::System::Xml::ElementProperties const NAME_PARENT;

/// @brief Field NO_ENTITIES value: U32(16)
static ::System::Xml::ElementProperties const NO_ENTITIES;

/// @brief Field URI_PARENT value: U32(1)
static ::System::Xml::ElementProperties const URI_PARENT;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5400};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::ElementProperties, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::ElementProperties, 0x4>, "Size mismatch!");

} // namespace end def System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::ElementProperties, "System.Xml", "ElementProperties");
