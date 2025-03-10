#pragma once
// IWYU pragma private; include "System/Net/Sockets/SocketOptionLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SocketOptionLevel)
// Forward declare root types
namespace System::Net::Sockets {
struct SocketOptionLevel;
}
// Write type traits
MARK_VAL_T(::System::Net::Sockets::SocketOptionLevel);
// Dependencies 
namespace System::Net::Sockets {
// Is value type: true
// CS Name: System.Net.Sockets.SocketOptionLevel
struct CORDL_TYPE SocketOptionLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SocketOptionLevel_Unwrapped
enum struct __SocketOptionLevel_Unwrapped : int32_t {
__E_Socket = static_cast<int32_t>(0xffff),
__E_IP = static_cast<int32_t>(0x0),
__E_IPv6 = static_cast<int32_t>(0x29),
__E_Tcp = static_cast<int32_t>(0x6),
__E_Udp = static_cast<int32_t>(0x11),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SocketOptionLevel_Unwrapped () const noexcept {
return static_cast<__SocketOptionLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SocketOptionLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SocketOptionLevel(int32_t  value__) noexcept;

/// @brief Field IP value: I32(0)
static ::System::Net::Sockets::SocketOptionLevel const IP;

/// @brief Field IPv6 value: I32(41)
static ::System::Net::Sockets::SocketOptionLevel const IPv6;

/// @brief Field Socket value: I32(65535)
static ::System::Net::Sockets::SocketOptionLevel const Socket;

/// @brief Field Tcp value: I32(6)
static ::System::Net::Sockets::SocketOptionLevel const Tcp;

/// @brief Field Udp value: I32(17)
static ::System::Net::Sockets::SocketOptionLevel const Udp;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7993};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Sockets::SocketOptionLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::SocketOptionLevel, 0x4>, "Size mismatch!");

} // namespace end def System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketOptionLevel, "System.Net.Sockets", "SocketOptionLevel");
