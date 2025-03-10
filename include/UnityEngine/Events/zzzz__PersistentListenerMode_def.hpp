#pragma once
// IWYU pragma private; include "UnityEngine/Events/PersistentListenerMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PersistentListenerMode)
// Forward declare root types
namespace UnityEngine::Events {
struct PersistentListenerMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Events::PersistentListenerMode);
// Dependencies 
namespace UnityEngine::Events {
// Is value type: true
// CS Name: UnityEngine.Events.PersistentListenerMode
struct CORDL_TYPE PersistentListenerMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PersistentListenerMode_Unwrapped
enum struct __PersistentListenerMode_Unwrapped : int32_t {
__E_EventDefined = static_cast<int32_t>(0x0),
__E_Void = static_cast<int32_t>(0x1),
__E_Object = static_cast<int32_t>(0x2),
__E_Int = static_cast<int32_t>(0x3),
__E_Float = static_cast<int32_t>(0x4),
__E_String = static_cast<int32_t>(0x5),
__E_Bool = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PersistentListenerMode_Unwrapped () const noexcept {
return static_cast<__PersistentListenerMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PersistentListenerMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PersistentListenerMode(int32_t  value__) noexcept;

/// @brief Field Bool value: I32(6)
static ::UnityEngine::Events::PersistentListenerMode const Bool;

/// @brief Field EventDefined value: I32(0)
static ::UnityEngine::Events::PersistentListenerMode const EventDefined;

/// @brief Field Float value: I32(4)
static ::UnityEngine::Events::PersistentListenerMode const Float;

/// @brief Field Int value: I32(3)
static ::UnityEngine::Events::PersistentListenerMode const Int;

/// @brief Field Object value: I32(2)
static ::UnityEngine::Events::PersistentListenerMode const Object;

/// @brief Field String value: I32(5)
static ::UnityEngine::Events::PersistentListenerMode const String;

/// @brief Field Void value: I32(1)
static ::UnityEngine::Events::PersistentListenerMode const Void;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8662};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Events::PersistentListenerMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::PersistentListenerMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::PersistentListenerMode, "UnityEngine.Events", "PersistentListenerMode");
