#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/RemoteConfigRequest.hpp"
#include "Unity/Services/RemoteConfig/zzzz__RemoteConfigRequest_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JObject_def.hpp"
// Ctor Parameters [CppParam { name: "projectId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "isDebugBuild", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "configType", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "playerId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "analyticsUserId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "configAssignmentHash", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "key", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "schemaId", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "customUserId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "environmentId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "packageVersion", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "originService", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "attributionMetadata", ty: "::Newtonsoft::Json::Linq::JObject*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::RemoteConfig::RemoteConfigRequest::RemoteConfigRequest(::StringW  projectId, ::StringW  userId, bool  isDebugBuild, ::StringW  configType, ::StringW  playerId, ::StringW  analyticsUserId, ::StringW  configAssignmentHash, ::ArrayW<::StringW,::Array<::StringW>*>  key, ::ArrayW<::StringW,::Array<::StringW>*>  type, ::ArrayW<::StringW,::Array<::StringW>*>  schemaId, ::StringW  customUserId, ::StringW  environmentId, ::StringW  packageVersion, ::StringW  originService, ::Newtonsoft::Json::Linq::JObject*  attributionMetadata) noexcept  {
this->projectId = projectId;
this->userId = userId;
this->isDebugBuild = isDebugBuild;
this->configType = configType;
this->playerId = playerId;
this->analyticsUserId = analyticsUserId;
this->configAssignmentHash = configAssignmentHash;
this->key = key;
this->type = type;
this->schemaId = schemaId;
this->customUserId = customUserId;
this->environmentId = environmentId;
this->packageVersion = packageVersion;
this->originService = originService;
this->attributionMetadata = attributionMetadata;
}
// Ctor Parameters []
constexpr ::Unity::Services::RemoteConfig::RemoteConfigRequest::RemoteConfigRequest()   {
}
