#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionPhase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionPhase)
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputActionPhase;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::InputActionPhase);
// Dependencies 
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionPhase
struct CORDL_TYPE InputActionPhase {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputActionPhase_Unwrapped
enum struct __InputActionPhase_Unwrapped : int32_t {
__E_Disabled = static_cast<int32_t>(0x0),
__E_Waiting = static_cast<int32_t>(0x1),
__E_Started = static_cast<int32_t>(0x2),
__E_Performed = static_cast<int32_t>(0x3),
__E_Canceled = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputActionPhase_Unwrapped () const noexcept {
return static_cast<__InputActionPhase_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputActionPhase() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputActionPhase(int32_t  value__) noexcept;

/// @brief Field Canceled value: I32(4)
static ::UnityEngine::InputSystem::InputActionPhase const Canceled;

/// @brief Field Disabled value: I32(0)
static ::UnityEngine::InputSystem::InputActionPhase const Disabled;

/// @brief Field Performed value: I32(3)
static ::UnityEngine::InputSystem::InputActionPhase const Performed;

/// @brief Field Started value: I32(2)
static ::UnityEngine::InputSystem::InputActionPhase const Started;

/// @brief Field Waiting value: I32(1)
static ::UnityEngine::InputSystem::InputActionPhase const Waiting;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4751};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionPhase, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionPhase, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionPhase, "UnityEngine.InputSystem", "InputActionPhase");
