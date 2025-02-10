#pragma once
// IWYU pragma private; include "Newtonsoft/Json/ReferenceLoopHandling.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReferenceLoopHandling)
// Forward declare root types
namespace Newtonsoft::Json {
struct ReferenceLoopHandling;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::ReferenceLoopHandling);
// Dependencies 
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.ReferenceLoopHandling
struct CORDL_TYPE ReferenceLoopHandling {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ReferenceLoopHandling_Unwrapped
enum struct __ReferenceLoopHandling_Unwrapped : int32_t {
__E_Error = static_cast<int32_t>(0x0),
__E_Ignore = static_cast<int32_t>(0x1),
__E_Serialize = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ReferenceLoopHandling_Unwrapped () const noexcept {
return static_cast<__ReferenceLoopHandling_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ReferenceLoopHandling() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReferenceLoopHandling(int32_t  value__) noexcept;

/// @brief Field Error value: I32(0)
static ::Newtonsoft::Json::ReferenceLoopHandling const Error;

/// @brief Field Ignore value: I32(1)
static ::Newtonsoft::Json::ReferenceLoopHandling const Ignore;

/// @brief Field Serialize value: I32(2)
static ::Newtonsoft::Json::ReferenceLoopHandling const Serialize;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9695};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::ReferenceLoopHandling, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::ReferenceLoopHandling, 0x4>, "Size mismatch!");

} // namespace end def Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::ReferenceLoopHandling, "Newtonsoft.Json", "ReferenceLoopHandling");
