#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/ConfigResponse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/RemoteConfig/zzzz__ConfigOrigin_def.hpp"
#include "Unity/Services/RemoteConfig/zzzz__ConfigRequestStatus_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ConfigResponse)
namespace Newtonsoft::Json::Linq {
class JObject;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Unity::Services::RemoteConfig {
struct ConfigResponse;
}
// Write type traits
MARK_VAL_T(::Unity::Services::RemoteConfig::ConfigResponse);
// Dependencies Unity.Services.RemoteConfig.ConfigOrigin, Unity.Services.RemoteConfig.ConfigRequestStatus
namespace Unity::Services::RemoteConfig {
// Is value type: true
// CS Name: Unity.Services.RemoteConfig.ConfigResponse
struct CORDL_TYPE ConfigResponse {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ConfigResponse() ;

// Ctor Parameters [CppParam { name: "requestOrigin", ty: "::Unity::Services::RemoteConfig::ConfigOrigin", modifiers: "", def_value: None }, CppParam { name: "status", ty: "::Unity::Services::RemoteConfig::ConfigRequestStatus", modifiers: "", def_value: None }, CppParam { name: "body", ty: "::Newtonsoft::Json::Linq::JObject*", modifiers: "", def_value: None }, CppParam { name: "headers", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None }]
constexpr ConfigResponse(::Unity::Services::RemoteConfig::ConfigOrigin  requestOrigin, ::Unity::Services::RemoteConfig::ConfigRequestStatus  status, ::Newtonsoft::Json::Linq::JObject*  body, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12219};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field requestOrigin, offset: 0x0, size: 0x4, def value: None
 ::Unity::Services::RemoteConfig::ConfigOrigin  requestOrigin;

/// @brief Field status, offset: 0x4, size: 0x4, def value: None
 ::Unity::Services::RemoteConfig::ConfigRequestStatus  status;

/// @brief Field body, offset: 0x8, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JObject*  body;

/// @brief Field headers, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigResponse, requestOrigin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigResponse, status) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigResponse, body) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::ConfigResponse, headers) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::RemoteConfig::ConfigResponse, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::RemoteConfig
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::RemoteConfig::ConfigResponse, "Unity.Services.RemoteConfig", "ConfigResponse");
