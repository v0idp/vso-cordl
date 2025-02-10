#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/WebRequestVerb.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebRequestVerb)
// Forward declare root types
namespace Unity::Services::Authentication {
struct WebRequestVerb;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Authentication::WebRequestVerb);
// Dependencies 
namespace Unity::Services::Authentication {
// Is value type: true
// CS Name: Unity.Services.Authentication.WebRequestVerb
struct CORDL_TYPE WebRequestVerb {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WebRequestVerb_Unwrapped
enum struct __WebRequestVerb_Unwrapped : int32_t {
__E_Delete = static_cast<int32_t>(0x0),
__E_Get = static_cast<int32_t>(0x1),
__E_Head = static_cast<int32_t>(0x2),
__E_Options = static_cast<int32_t>(0x3),
__E_Patch = static_cast<int32_t>(0x4),
__E_Post = static_cast<int32_t>(0x5),
__E_Put = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WebRequestVerb_Unwrapped () const noexcept {
return static_cast<__WebRequestVerb_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WebRequestVerb() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WebRequestVerb(int32_t  value__) noexcept;

/// @brief Field Delete value: I32(0)
static ::Unity::Services::Authentication::WebRequestVerb const Delete;

/// @brief Field Get value: I32(1)
static ::Unity::Services::Authentication::WebRequestVerb const Get;

/// @brief Field Head value: I32(2)
static ::Unity::Services::Authentication::WebRequestVerb const Head;

/// @brief Field Options value: I32(3)
static ::Unity::Services::Authentication::WebRequestVerb const Options;

/// @brief Field Patch value: I32(4)
static ::Unity::Services::Authentication::WebRequestVerb const Patch;

/// @brief Field Post value: I32(5)
static ::Unity::Services::Authentication::WebRequestVerb const Post;

/// @brief Field Put value: I32(6)
static ::Unity::Services::Authentication::WebRequestVerb const Put;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11581};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::WebRequestVerb, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::WebRequestVerb, 0x4>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::WebRequestVerb, "Unity.Services.Authentication", "WebRequestVerb");
