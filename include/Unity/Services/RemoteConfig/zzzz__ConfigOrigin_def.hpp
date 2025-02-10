#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/ConfigOrigin.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConfigOrigin)
// Forward declare root types
namespace Unity::Services::RemoteConfig {
struct ConfigOrigin;
}
// Write type traits
MARK_VAL_T(::Unity::Services::RemoteConfig::ConfigOrigin);
// Dependencies 
namespace Unity::Services::RemoteConfig {
// Is value type: true
// CS Name: Unity.Services.RemoteConfig.ConfigOrigin
struct CORDL_TYPE ConfigOrigin {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConfigOrigin_Unwrapped
enum struct __ConfigOrigin_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Cached = static_cast<int32_t>(0x1),
__E_Remote = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConfigOrigin_Unwrapped () const noexcept {
return static_cast<__ConfigOrigin_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConfigOrigin() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConfigOrigin(int32_t  value__) noexcept;

/// @brief Field Cached value: I32(1)
static ::Unity::Services::RemoteConfig::ConfigOrigin const Cached;

/// @brief Field Default value: I32(0)
static ::Unity::Services::RemoteConfig::ConfigOrigin const Default;

/// @brief Field Remote value: I32(2)
static ::Unity::Services::RemoteConfig::ConfigOrigin const Remote;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12217};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigOrigin, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::RemoteConfig::ConfigOrigin, 0x4>, "Size mismatch!");

} // namespace end def Unity::Services::RemoteConfig
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::RemoteConfig::ConfigOrigin, "Unity.Services.RemoteConfig", "ConfigOrigin");
