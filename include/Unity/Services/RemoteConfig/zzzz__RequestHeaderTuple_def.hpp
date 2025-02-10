#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/RequestHeaderTuple.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RequestHeaderTuple)
// Forward declare root types
namespace Unity::Services::RemoteConfig {
struct RequestHeaderTuple;
}
// Write type traits
MARK_VAL_T(::Unity::Services::RemoteConfig::RequestHeaderTuple);
// Dependencies 
namespace Unity::Services::RemoteConfig {
// Is value type: true
// CS Name: Unity.Services.RemoteConfig.RequestHeaderTuple
struct CORDL_TYPE RequestHeaderTuple {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RequestHeaderTuple() ;

// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }]
constexpr RequestHeaderTuple(::StringW  key, ::StringW  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12221};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key, offset: 0x0, size: 0x8, def value: None
 ::StringW  key;

/// @brief Field value, offset: 0x8, size: 0x8, def value: None
 ::StringW  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::RemoteConfig::RequestHeaderTuple, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RequestHeaderTuple, value) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::RemoteConfig::RequestHeaderTuple, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::RemoteConfig
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::RemoteConfig::RequestHeaderTuple, "Unity.Services.RemoteConfig", "RequestHeaderTuple");
