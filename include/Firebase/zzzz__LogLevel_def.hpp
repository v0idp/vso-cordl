#pragma once
// IWYU pragma private; include "Firebase/LogLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogLevel)
// Forward declare root types
namespace Firebase {
struct LogLevel;
}
// Write type traits
MARK_VAL_T(::Firebase::LogLevel);
// Dependencies 
namespace Firebase {
// Is value type: true
// CS Name: Firebase.LogLevel
struct CORDL_TYPE LogLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LogLevel_Unwrapped
enum struct __LogLevel_Unwrapped : int32_t {
__E_Verbose = static_cast<int32_t>(0x0),
__E_Debug = static_cast<int32_t>(0x1),
__E_Info = static_cast<int32_t>(0x2),
__E_Warning = static_cast<int32_t>(0x3),
__E_Error = static_cast<int32_t>(0x4),
__E_Assert = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LogLevel_Unwrapped () const noexcept {
return static_cast<__LogLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LogLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LogLevel(int32_t  value__) noexcept;

/// @brief Field Debug value: I32(1)
static ::Firebase::LogLevel const Debug;

/// @brief Field Error value: I32(4)
static ::Firebase::LogLevel const Error;

/// @brief Field Info value: I32(2)
static ::Firebase::LogLevel const Info;

/// @brief Field Verbose value: I32(0)
static ::Firebase::LogLevel const Verbose;

/// @brief Field Warning value: I32(3)
static ::Firebase::LogLevel const Warning;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11821};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Assert value: I32(5)
static ::Firebase::LogLevel const _cordl_Assert;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Firebase::LogLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::LogLevel, 0x4>, "Size mismatch!");

} // namespace end def Firebase
DEFINE_IL2CPP_ARG_TYPE(::Firebase::LogLevel, "Firebase", "LogLevel");
