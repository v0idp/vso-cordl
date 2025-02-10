#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRTrackedCameraFrameLayout.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRTrackedCameraFrameLayout)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRTrackedCameraFrameLayout;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRTrackedCameraFrameLayout);
// Dependencies 
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.EVRTrackedCameraFrameLayout
struct CORDL_TYPE EVRTrackedCameraFrameLayout {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EVRTrackedCameraFrameLayout_Unwrapped
enum struct __EVRTrackedCameraFrameLayout_Unwrapped : int32_t {
__E_Mono = static_cast<int32_t>(0x1),
__E_Stereo = static_cast<int32_t>(0x2),
__E_VerticalLayout = static_cast<int32_t>(0x10),
__E_HorizontalLayout = static_cast<int32_t>(0x20),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRTrackedCameraFrameLayout_Unwrapped () const noexcept {
return static_cast<__EVRTrackedCameraFrameLayout_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EVRTrackedCameraFrameLayout() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRTrackedCameraFrameLayout(int32_t  value__) noexcept;

/// @brief Field HorizontalLayout value: I32(32)
static ::OVR::OpenVR::EVRTrackedCameraFrameLayout const HorizontalLayout;

/// @brief Field Mono value: I32(1)
static ::OVR::OpenVR::EVRTrackedCameraFrameLayout const Mono;

/// @brief Field Stereo value: I32(2)
static ::OVR::OpenVR::EVRTrackedCameraFrameLayout const Stereo;

/// @brief Field VerticalLayout value: I32(16)
static ::OVR::OpenVR::EVRTrackedCameraFrameLayout const VerticalLayout;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7177};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::EVRTrackedCameraFrameLayout, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRTrackedCameraFrameLayout, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRTrackedCameraFrameLayout, "OVR.OpenVR", "EVRTrackedCameraFrameLayout");
