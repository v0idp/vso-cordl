#pragma once
// IWYU pragma private; include "NatSuite/Devices/FlashMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FlashMode)
// Forward declare root types
namespace NatSuite::Devices {
struct FlashMode;
}
// Write type traits
MARK_VAL_T(::NatSuite::Devices::FlashMode);
// Dependencies 
namespace NatSuite::Devices {
// Is value type: true
// CS Name: NatSuite.Devices.FlashMode
struct CORDL_TYPE FlashMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FlashMode_Unwrapped
enum struct __FlashMode_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_On = static_cast<int32_t>(0x1),
__E_Auto = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FlashMode_Unwrapped () const noexcept {
return static_cast<__FlashMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FlashMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FlashMode(int32_t  value__) noexcept;

/// @brief Field Auto value: I32(2)
static ::NatSuite::Devices::FlashMode const Auto;

/// @brief Field Off value: I32(0)
static ::NatSuite::Devices::FlashMode const Off;

/// @brief Field On value: I32(1)
static ::NatSuite::Devices::FlashMode const On;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1754};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Devices::FlashMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::FlashMode, 0x4>, "Size mismatch!");

} // namespace end def NatSuite::Devices
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::FlashMode, "NatSuite.Devices", "FlashMode");
