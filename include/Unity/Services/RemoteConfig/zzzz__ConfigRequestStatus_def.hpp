#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/ConfigRequestStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConfigRequestStatus)
// Forward declare root types
namespace Unity::Services::RemoteConfig {
struct ConfigRequestStatus;
}
// Write type traits
MARK_VAL_T(::Unity::Services::RemoteConfig::ConfigRequestStatus);
// Dependencies 
namespace Unity::Services::RemoteConfig {
// Is value type: true
// CS Name: Unity.Services.RemoteConfig.ConfigRequestStatus
struct CORDL_TYPE ConfigRequestStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConfigRequestStatus_Unwrapped
enum struct __ConfigRequestStatus_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Failed = static_cast<int32_t>(0x1),
__E_Success = static_cast<int32_t>(0x2),
__E_Pending = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConfigRequestStatus_Unwrapped () const noexcept {
return static_cast<__ConfigRequestStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConfigRequestStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConfigRequestStatus(int32_t  value__) noexcept;

/// @brief Field Failed value: I32(1)
static ::Unity::Services::RemoteConfig::ConfigRequestStatus const Failed;

/// @brief Field None value: I32(0)
static ::Unity::Services::RemoteConfig::ConfigRequestStatus const None;

/// @brief Field Pending value: I32(3)
static ::Unity::Services::RemoteConfig::ConfigRequestStatus const Pending;

/// @brief Field Success value: I32(2)
static ::Unity::Services::RemoteConfig::ConfigRequestStatus const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12218};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigRequestStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::RemoteConfig::ConfigRequestStatus, 0x4>, "Size mismatch!");

} // namespace end def Unity::Services::RemoteConfig
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::RemoteConfig::ConfigRequestStatus, "Unity.Services.RemoteConfig", "ConfigRequestStatus");
