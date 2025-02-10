#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/LineInfoHandling.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LineInfoHandling)
// Forward declare root types
namespace Newtonsoft::Json::Linq {
struct LineInfoHandling;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Linq::LineInfoHandling);
// Dependencies 
namespace Newtonsoft::Json::Linq {
// Is value type: true
// CS Name: Newtonsoft.Json.Linq.LineInfoHandling
struct CORDL_TYPE LineInfoHandling {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LineInfoHandling_Unwrapped
enum struct __LineInfoHandling_Unwrapped : int32_t {
__E_Ignore = static_cast<int32_t>(0x0),
__E_Load = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LineInfoHandling_Unwrapped () const noexcept {
return static_cast<__LineInfoHandling_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LineInfoHandling() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LineInfoHandling(int32_t  value__) noexcept;

/// @brief Field Ignore value: I32(0)
static ::Newtonsoft::Json::Linq::LineInfoHandling const Ignore;

/// @brief Field Load value: I32(1)
static ::Newtonsoft::Json::Linq::LineInfoHandling const Load;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9884};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::LineInfoHandling, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::LineInfoHandling, 0x4>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::LineInfoHandling, "Newtonsoft.Json.Linq", "LineInfoHandling");
