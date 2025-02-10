#pragma once
// IWYU pragma private; include "NatSuite/Devices/FrameOrientation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrameOrientation)
// Forward declare root types
namespace NatSuite::Devices {
struct FrameOrientation;
}
// Write type traits
MARK_VAL_T(::NatSuite::Devices::FrameOrientation);
// Dependencies 
namespace NatSuite::Devices {
// Is value type: true
// CS Name: NatSuite.Devices.FrameOrientation
struct CORDL_TYPE FrameOrientation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FrameOrientation_Unwrapped
enum struct __FrameOrientation_Unwrapped : int32_t {
__E_LandscapeLeft = static_cast<int32_t>(0x0),
__E_Portrait = static_cast<int32_t>(0x1),
__E_LandscapeRight = static_cast<int32_t>(0x2),
__E_PortraitUpsideDown = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FrameOrientation_Unwrapped () const noexcept {
return static_cast<__FrameOrientation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FrameOrientation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FrameOrientation(int32_t  value__) noexcept;

/// @brief Field LandscapeLeft value: I32(0)
static ::NatSuite::Devices::FrameOrientation const LandscapeLeft;

/// @brief Field LandscapeRight value: I32(2)
static ::NatSuite::Devices::FrameOrientation const LandscapeRight;

/// @brief Field Portrait value: I32(1)
static ::NatSuite::Devices::FrameOrientation const Portrait;

/// @brief Field PortraitUpsideDown value: I32(3)
static ::NatSuite::Devices::FrameOrientation const PortraitUpsideDown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1755};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Devices::FrameOrientation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::FrameOrientation, 0x4>, "Size mismatch!");

} // namespace end def NatSuite::Devices
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::FrameOrientation, "NatSuite.Devices", "FrameOrientation");
