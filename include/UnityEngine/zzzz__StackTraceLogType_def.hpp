#pragma once
// IWYU pragma private; include "UnityEngine/StackTraceLogType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StackTraceLogType)
// Forward declare root types
namespace UnityEngine {
struct StackTraceLogType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::StackTraceLogType);
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.StackTraceLogType
struct CORDL_TYPE StackTraceLogType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StackTraceLogType_Unwrapped
enum struct __StackTraceLogType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ScriptOnly = static_cast<int32_t>(0x1),
__E_Full = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StackTraceLogType_Unwrapped () const noexcept {
return static_cast<__StackTraceLogType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StackTraceLogType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StackTraceLogType(int32_t  value__) noexcept;

/// @brief Field Full value: I32(2)
static ::UnityEngine::StackTraceLogType const Full;

/// @brief Field None value: I32(0)
static ::UnityEngine::StackTraceLogType const None;

/// @brief Field ScriptOnly value: I32(1)
static ::UnityEngine::StackTraceLogType const ScriptOnly;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8390};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::StackTraceLogType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::StackTraceLogType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::StackTraceLogType, "UnityEngine", "StackTraceLogType");
