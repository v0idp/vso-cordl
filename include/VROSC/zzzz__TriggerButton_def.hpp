#pragma once
// IWYU pragma private; include "VROSC/TriggerButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TriggerButton)
// Forward declare root types
namespace VROSC {
struct TriggerButton;
}
// Write type traits
MARK_VAL_T(::VROSC::TriggerButton);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.TriggerButton
struct CORDL_TYPE TriggerButton {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TriggerButton_Unwrapped
enum struct __TriggerButton_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Trigger = static_cast<int32_t>(0x1),
__E_Grip = static_cast<int32_t>(0x2),
__E_AppMenuYB = static_cast<int32_t>(0x4),
__E_TouchpadXA = static_cast<int32_t>(0x8),
__E_MenuButton = static_cast<int32_t>(0x10),
__E_ThumbStickDown = static_cast<int32_t>(0x20),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TriggerButton_Unwrapped () const noexcept {
return static_cast<__TriggerButton_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TriggerButton() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TriggerButton(int32_t  value__) noexcept;

/// @brief Field AppMenuYB value: I32(4)
static ::VROSC::TriggerButton const AppMenuYB;

/// @brief Field Grip value: I32(2)
static ::VROSC::TriggerButton const Grip;

/// @brief Field MenuButton value: I32(16)
static ::VROSC::TriggerButton const MenuButton;

/// @brief Field None value: I32(0)
static ::VROSC::TriggerButton const None;

/// @brief Field ThumbStickDown value: I32(32)
static ::VROSC::TriggerButton const ThumbStickDown;

/// @brief Field TouchpadXA value: I32(8)
static ::VROSC::TriggerButton const TouchpadXA;

/// @brief Field Trigger value: I32(1)
static ::VROSC::TriggerButton const Trigger;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{595};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TriggerButton, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TriggerButton, 0x4>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TriggerButton, "VROSC", "TriggerButton");
