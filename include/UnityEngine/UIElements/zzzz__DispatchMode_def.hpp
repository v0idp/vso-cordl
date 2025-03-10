#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DispatchMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DispatchMode)
// Forward declare root types
namespace UnityEngine::UIElements {
struct DispatchMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::DispatchMode);
// Dependencies 
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.DispatchMode
struct CORDL_TYPE DispatchMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DispatchMode_Unwrapped
enum struct __DispatchMode_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x1),
__E_Queued = static_cast<int32_t>(0x1),
__E_Immediate = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DispatchMode_Unwrapped () const noexcept {
return static_cast<__DispatchMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DispatchMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DispatchMode(int32_t  value__) noexcept;

/// @brief Field Default value: I32(1)
static ::UnityEngine::UIElements::DispatchMode const Default;

/// @brief Field Immediate value: I32(2)
static ::UnityEngine::UIElements::DispatchMode const Immediate;

/// @brief Field Queued value: I32(1)
static ::UnityEngine::UIElements::DispatchMode const Queued;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3958};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DispatchMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DispatchMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DispatchMode, "UnityEngine.UIElements", "DispatchMode");
