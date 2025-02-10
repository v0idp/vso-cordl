#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AuthenticationState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticationState)
// Forward declare root types
namespace Unity::Services::Authentication {
struct AuthenticationState;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Authentication::AuthenticationState);
// Dependencies 
namespace Unity::Services::Authentication {
// Is value type: true
// CS Name: Unity.Services.Authentication.AuthenticationState
struct CORDL_TYPE AuthenticationState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AuthenticationState_Unwrapped
enum struct __AuthenticationState_Unwrapped : int32_t {
__E_SignedOut = static_cast<int32_t>(0x0),
__E_SigningIn = static_cast<int32_t>(0x1),
__E_Authorized = static_cast<int32_t>(0x2),
__E_Refreshing = static_cast<int32_t>(0x3),
__E_Expired = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AuthenticationState_Unwrapped () const noexcept {
return static_cast<__AuthenticationState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AuthenticationState(int32_t  value__) noexcept;

/// @brief Field Authorized value: I32(2)
static ::Unity::Services::Authentication::AuthenticationState const Authorized;

/// @brief Field Expired value: I32(4)
static ::Unity::Services::Authentication::AuthenticationState const Expired;

/// @brief Field Refreshing value: I32(3)
static ::Unity::Services::Authentication::AuthenticationState const Refreshing;

/// @brief Field SignedOut value: I32(0)
static ::Unity::Services::Authentication::AuthenticationState const SignedOut;

/// @brief Field SigningIn value: I32(1)
static ::Unity::Services::Authentication::AuthenticationState const SigningIn;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11522};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::AuthenticationState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::AuthenticationState, 0x4>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::AuthenticationState, "Unity.Services.Authentication", "AuthenticationState");
