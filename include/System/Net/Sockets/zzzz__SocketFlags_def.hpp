#pragma once
// IWYU pragma private; include "System/Net/Sockets/SocketFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SocketFlags)
// Forward declare root types
namespace System::Net::Sockets {
struct SocketFlags;
}
// Write type traits
MARK_VAL_T(::System::Net::Sockets::SocketFlags);
// Dependencies 
namespace System::Net::Sockets {
// Is value type: true
// CS Name: System.Net.Sockets.SocketFlags
struct CORDL_TYPE SocketFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SocketFlags_Unwrapped
enum struct __SocketFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_OutOfBand = static_cast<int32_t>(0x1),
__E_Peek = static_cast<int32_t>(0x2),
__E_DontRoute = static_cast<int32_t>(0x4),
__E_MaxIOVectorLength = static_cast<int32_t>(0x10),
__E_Truncated = static_cast<int32_t>(0x100),
__E_ControlDataTruncated = static_cast<int32_t>(0x200),
__E_Broadcast = static_cast<int32_t>(0x400),
__E_Multicast = static_cast<int32_t>(0x800),
__E_Partial = static_cast<int32_t>(0x8000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SocketFlags_Unwrapped () const noexcept {
return static_cast<__SocketFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SocketFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SocketFlags(int32_t  value__) noexcept;

/// @brief Field Broadcast value: I32(1024)
static ::System::Net::Sockets::SocketFlags const Broadcast;

/// @brief Field ControlDataTruncated value: I32(512)
static ::System::Net::Sockets::SocketFlags const ControlDataTruncated;

/// @brief Field DontRoute value: I32(4)
static ::System::Net::Sockets::SocketFlags const DontRoute;

/// @brief Field MaxIOVectorLength value: I32(16)
static ::System::Net::Sockets::SocketFlags const MaxIOVectorLength;

/// @brief Field Multicast value: I32(2048)
static ::System::Net::Sockets::SocketFlags const Multicast;

/// @brief Field None value: I32(0)
static ::System::Net::Sockets::SocketFlags const None;

/// @brief Field OutOfBand value: I32(1)
static ::System::Net::Sockets::SocketFlags const OutOfBand;

/// @brief Field Partial value: I32(32768)
static ::System::Net::Sockets::SocketFlags const Partial;

/// @brief Field Peek value: I32(2)
static ::System::Net::Sockets::SocketFlags const Peek;

/// @brief Field Truncated value: I32(256)
static ::System::Net::Sockets::SocketFlags const Truncated;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7992};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Sockets::SocketFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::SocketFlags, 0x4>, "Size mismatch!");

} // namespace end def System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketFlags, "System.Net.Sockets", "SocketFlags");
