#pragma once
// IWYU pragma private; include "System/UriHostNameType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UriHostNameType)
// Forward declare root types
namespace System {
struct UriHostNameType;
}
// Write type traits
MARK_VAL_T(::System::UriHostNameType);
// Dependencies 
namespace System {
// Is value type: true
// CS Name: System.UriHostNameType
struct CORDL_TYPE UriHostNameType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UriHostNameType_Unwrapped
enum struct __UriHostNameType_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Basic = static_cast<int32_t>(0x1),
__E_Dns = static_cast<int32_t>(0x2),
__E_IPv4 = static_cast<int32_t>(0x3),
__E_IPv6 = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UriHostNameType_Unwrapped () const noexcept {
return static_cast<__UriHostNameType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UriHostNameType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UriHostNameType(int32_t  value__) noexcept;

/// @brief Field Basic value: I32(1)
static ::System::UriHostNameType const Basic;

/// @brief Field Dns value: I32(2)
static ::System::UriHostNameType const Dns;

/// @brief Field IPv4 value: I32(3)
static ::System::UriHostNameType const IPv4;

/// @brief Field IPv6 value: I32(4)
static ::System::UriHostNameType const IPv6;

/// @brief Field Unknown value: I32(0)
static ::System::UriHostNameType const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7452};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::UriHostNameType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::UriHostNameType, 0x4>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::UriHostNameType, "System", "UriHostNameType");
