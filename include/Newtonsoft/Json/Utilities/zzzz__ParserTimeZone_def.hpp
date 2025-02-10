#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/ParserTimeZone.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParserTimeZone)
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
struct ParserTimeZone;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Utilities::ParserTimeZone);
// Dependencies 
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// CS Name: Newtonsoft.Json.Utilities.ParserTimeZone
struct CORDL_TYPE ParserTimeZone {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ParserTimeZone_Unwrapped
enum struct __ParserTimeZone_Unwrapped : int32_t {
__E_Unspecified = static_cast<int32_t>(0x0),
__E_Utc = static_cast<int32_t>(0x1),
__E_LocalWestOfUtc = static_cast<int32_t>(0x2),
__E_LocalEastOfUtc = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ParserTimeZone_Unwrapped () const noexcept {
return static_cast<__ParserTimeZone_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ParserTimeZone() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ParserTimeZone(int32_t  value__) noexcept;

/// @brief Field LocalEastOfUtc value: I32(3)
static ::Newtonsoft::Json::Utilities::ParserTimeZone const LocalEastOfUtc;

/// @brief Field LocalWestOfUtc value: I32(2)
static ::Newtonsoft::Json::Utilities::ParserTimeZone const LocalWestOfUtc;

/// @brief Field Unspecified value: I32(0)
static ::Newtonsoft::Json::Utilities::ParserTimeZone const Unspecified;

/// @brief Field Utc value: I32(1)
static ::Newtonsoft::Json::Utilities::ParserTimeZone const Utc;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9714};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Utilities::ParserTimeZone, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::ParserTimeZone, 0x4>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ParserTimeZone, "Newtonsoft.Json.Utilities", "ParserTimeZone");
