#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRComponentProperty.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRComponentProperty)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRComponentProperty;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRComponentProperty);
// Dependencies 
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.EVRComponentProperty
struct CORDL_TYPE EVRComponentProperty {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EVRComponentProperty_Unwrapped
enum struct __EVRComponentProperty_Unwrapped : int32_t {
__E_IsStatic = static_cast<int32_t>(0x1),
__E_IsVisible = static_cast<int32_t>(0x2),
__E_IsTouched = static_cast<int32_t>(0x4),
__E_IsPressed = static_cast<int32_t>(0x8),
__E_IsScrolled = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRComponentProperty_Unwrapped () const noexcept {
return static_cast<__EVRComponentProperty_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EVRComponentProperty() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRComponentProperty(int32_t  value__) noexcept;

/// @brief Field IsPressed value: I32(8)
static ::OVR::OpenVR::EVRComponentProperty const IsPressed;

/// @brief Field IsScrolled value: I32(16)
static ::OVR::OpenVR::EVRComponentProperty const IsScrolled;

/// @brief Field IsStatic value: I32(1)
static ::OVR::OpenVR::EVRComponentProperty const IsStatic;

/// @brief Field IsTouched value: I32(4)
static ::OVR::OpenVR::EVRComponentProperty const IsTouched;

/// @brief Field IsVisible value: I32(2)
static ::OVR::OpenVR::EVRComponentProperty const IsVisible;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7199};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::EVRComponentProperty, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRComponentProperty, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRComponentProperty, "OVR.OpenVR", "EVRComponentProperty");
