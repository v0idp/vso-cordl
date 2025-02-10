#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/RemoteConfigRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RemoteConfigRequest)
namespace Newtonsoft::Json::Linq {
class JObject;
}
// Forward declare root types
namespace Unity::Services::RemoteConfig {
struct RemoteConfigRequest;
}
// Write type traits
MARK_VAL_T(::Unity::Services::RemoteConfig::RemoteConfigRequest);
// Dependencies 
namespace Unity::Services::RemoteConfig {
// Is value type: true
// CS Name: Unity.Services.RemoteConfig.RemoteConfigRequest
struct CORDL_TYPE RemoteConfigRequest {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RemoteConfigRequest() ;

// Ctor Parameters [CppParam { name: "projectId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isDebugBuild", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "configType", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "playerId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "analyticsUserId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "configAssignmentHash", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "key", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "schemaId", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "customUserId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "environmentId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "packageVersion", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "originService", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "attributionMetadata", ty: "::Newtonsoft::Json::Linq::JObject*", modifiers: "", def_value: None }]
constexpr RemoteConfigRequest(::StringW  projectId, ::StringW  userId, bool  isDebugBuild, ::StringW  configType, ::StringW  playerId, ::StringW  analyticsUserId, ::StringW  configAssignmentHash, ::ArrayW<::StringW,::Array<::StringW>*>  key, ::ArrayW<::StringW,::Array<::StringW>*>  type, ::ArrayW<::StringW,::Array<::StringW>*>  schemaId, ::StringW  customUserId, ::StringW  environmentId, ::StringW  packageVersion, ::StringW  originService, ::Newtonsoft::Json::Linq::JObject*  attributionMetadata) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12220};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field projectId, offset: 0x0, size: 0x8, def value: None
 ::StringW  projectId;

/// @brief Field userId, offset: 0x8, size: 0x8, def value: None
 ::StringW  userId;

/// @brief Field isDebugBuild, offset: 0x10, size: 0x1, def value: None
 bool  isDebugBuild;

/// @brief Field configType, offset: 0x18, size: 0x8, def value: None
 ::StringW  configType;

/// @brief Field playerId, offset: 0x20, size: 0x8, def value: None
 ::StringW  playerId;

/// @brief Field analyticsUserId, offset: 0x28, size: 0x8, def value: None
 ::StringW  analyticsUserId;

/// @brief Field configAssignmentHash, offset: 0x30, size: 0x8, def value: None
 ::StringW  configAssignmentHash;

/// @brief Field key, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::StringW,::Array<::StringW>*>  key;

/// @brief Field type, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::StringW,::Array<::StringW>*>  type;

/// @brief Field schemaId, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::StringW,::Array<::StringW>*>  schemaId;

/// @brief Field customUserId, offset: 0x50, size: 0x8, def value: None
 ::StringW  customUserId;

/// @brief Field environmentId, offset: 0x58, size: 0x8, def value: None
 ::StringW  environmentId;

/// @brief Field packageVersion, offset: 0x60, size: 0x8, def value: None
 ::StringW  packageVersion;

/// @brief Field originService, offset: 0x68, size: 0x8, def value: None
 ::StringW  originService;

/// @brief Field attributionMetadata, offset: 0x70, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JObject*  attributionMetadata;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::RemoteConfig::RemoteConfigRequest, projectId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RemoteConfigRequest, userId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RemoteConfigRequest, isDebugBuild) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RemoteConfigRequest, configType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RemoteConfigRequest, playerId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RemoteConfigRequest, analyticsUserId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RemoteConfigRequest, configAssignmentHash) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RemoteConfigRequest, key) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RemoteConfigRequest, type) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RemoteConfigRequest, schemaId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RemoteConfigRequest, customUserId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RemoteConfigRequest, environmentId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RemoteConfigRequest, packageVersion) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RemoteConfigRequest, originService) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RemoteConfigRequest, attributionMetadata) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::RemoteConfig::RemoteConfigRequest, 0x78>, "Size mismatch!");

} // namespace end def Unity::Services::RemoteConfig
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::RemoteConfig::RemoteConfigRequest, "Unity.Services.RemoteConfig", "RemoteConfigRequest");
