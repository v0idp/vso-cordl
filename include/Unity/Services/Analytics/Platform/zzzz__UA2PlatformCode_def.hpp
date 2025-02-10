#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Platform/UA2PlatformCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UA2PlatformCode)
// Forward declare root types
namespace Unity::Services::Analytics::Platform {
struct UA2PlatformCode;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Analytics::Platform::UA2PlatformCode);
// Dependencies 
namespace Unity::Services::Analytics::Platform {
// Is value type: true
// CS Name: Unity.Services.Analytics.Platform.UA2PlatformCode
struct CORDL_TYPE UA2PlatformCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UA2PlatformCode_Unwrapped
enum struct __UA2PlatformCode_Unwrapped : int32_t {
__E_UNKNOWN = static_cast<int32_t>(0x0),
__E_IOS = static_cast<int32_t>(0x1),
__E_IOS_MOBILE = static_cast<int32_t>(0x2),
__E_IOS_TABLET = static_cast<int32_t>(0x3),
__E_IOS_TV = static_cast<int32_t>(0x4),
__E_ANDROID = static_cast<int32_t>(0x5),
__E_ANDROID_MOBILE = static_cast<int32_t>(0x6),
__E_ANDROID_CONSOLE = static_cast<int32_t>(0x7),
__E_WINDOWS_MOBILE = static_cast<int32_t>(0x8),
__E_WINDOWS_TABLET = static_cast<int32_t>(0x9),
__E_BLACKBERRY_MOBILE = static_cast<int32_t>(0xa),
__E_BLACKBERRY_TABLET = static_cast<int32_t>(0xb),
__E_FACEBOOK = static_cast<int32_t>(0xc),
__E_AMAZON = static_cast<int32_t>(0xd),
__E_WEB = static_cast<int32_t>(0xe),
__E_PC_CLIENT = static_cast<int32_t>(0xf),
__E_MAC_CLIENT = static_cast<int32_t>(0x10),
__E_PS3 = static_cast<int32_t>(0x11),
__E_PS4 = static_cast<int32_t>(0x12),
__E_PSVITA = static_cast<int32_t>(0x13),
__E_XBOX360 = static_cast<int32_t>(0x14),
__E_XBOXONE = static_cast<int32_t>(0x15),
__E_WIIU = static_cast<int32_t>(0x16),
__E_SWITCH = static_cast<int32_t>(0x17),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UA2PlatformCode_Unwrapped () const noexcept {
return static_cast<__UA2PlatformCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UA2PlatformCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UA2PlatformCode(int32_t  value__) noexcept;

/// @brief Field AMAZON value: I32(13)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const AMAZON;

/// @brief Field ANDROID value: I32(5)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const ANDROID_PLATFORM;

/// @brief Field ANDROID_CONSOLE value: I32(7)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const ANDROID_CONSOLE;

/// @brief Field ANDROID_MOBILE value: I32(6)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const ANDROID_MOBILE;

/// @brief Field BLACKBERRY_MOBILE value: I32(10)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const BLACKBERRY_MOBILE;

/// @brief Field BLACKBERRY_TABLET value: I32(11)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const BLACKBERRY_TABLET;

/// @brief Field FACEBOOK value: I32(12)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const FACEBOOK;

/// @brief Field IOS value: I32(1)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const IOS;

/// @brief Field IOS_MOBILE value: I32(2)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const IOS_MOBILE;

/// @brief Field IOS_TABLET value: I32(3)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const IOS_TABLET;

/// @brief Field IOS_TV value: I32(4)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const IOS_TV;

/// @brief Field MAC_CLIENT value: I32(16)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const MAC_CLIENT;

/// @brief Field PC_CLIENT value: I32(15)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const PC_CLIENT;

/// @brief Field PS3 value: I32(17)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const PS3;

/// @brief Field PS4 value: I32(18)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const PS4;

/// @brief Field PSVITA value: I32(19)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const PSVITA;

/// @brief Field SWITCH value: I32(23)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const SWITCH;

/// @brief Field UNKNOWN value: I32(0)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const UNKNOWN;

/// @brief Field WEB value: I32(14)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const WEB;

/// @brief Field WIIU value: I32(22)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const WIIU;

/// @brief Field WINDOWS_MOBILE value: I32(8)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const WINDOWS_MOBILE;

/// @brief Field WINDOWS_TABLET value: I32(9)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const WINDOWS_TABLET;

/// @brief Field XBOX360 value: I32(20)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const XBOX360;

/// @brief Field XBOXONE value: I32(21)
static ::Unity::Services::Analytics::Platform::UA2PlatformCode const XBOXONE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11864};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Analytics::Platform::UA2PlatformCode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Platform::UA2PlatformCode, 0x4>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Platform
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Platform::UA2PlatformCode, "Unity.Services.Analytics.Platform", "UA2PlatformCode");
