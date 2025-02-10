#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRScreenshotType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRScreenshotType)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRScreenshotType;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRScreenshotType);
// Dependencies 
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.EVRScreenshotType
struct CORDL_TYPE EVRScreenshotType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EVRScreenshotType_Unwrapped
enum struct __EVRScreenshotType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Mono = static_cast<int32_t>(0x1),
__E_Stereo = static_cast<int32_t>(0x2),
__E_Cubemap = static_cast<int32_t>(0x3),
__E_MonoPanorama = static_cast<int32_t>(0x4),
__E_StereoPanorama = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRScreenshotType_Unwrapped () const noexcept {
return static_cast<__EVRScreenshotType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EVRScreenshotType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRScreenshotType(int32_t  value__) noexcept;

/// @brief Field Cubemap value: I32(3)
static ::OVR::OpenVR::EVRScreenshotType const Cubemap;

/// @brief Field Mono value: I32(1)
static ::OVR::OpenVR::EVRScreenshotType const Mono;

/// @brief Field MonoPanorama value: I32(4)
static ::OVR::OpenVR::EVRScreenshotType const MonoPanorama;

/// @brief Field None value: I32(0)
static ::OVR::OpenVR::EVRScreenshotType const None;

/// @brief Field Stereo value: I32(2)
static ::OVR::OpenVR::EVRScreenshotType const Stereo;

/// @brief Field StereoPanorama value: I32(5)
static ::OVR::OpenVR::EVRScreenshotType const StereoPanorama;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7174};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::EVRScreenshotType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRScreenshotType, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRScreenshotType, "OVR.OpenVR", "EVRScreenshotType");
