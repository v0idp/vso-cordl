#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/ConfigResponse.hpp"
#include "Unity/Services/RemoteConfig/zzzz__ConfigOrigin_impl.hpp"
#include "Unity/Services/RemoteConfig/zzzz__ConfigRequestStatus_impl.hpp"
#include "Unity/Services/RemoteConfig/zzzz__ConfigResponse_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JObject_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
// Ctor Parameters [CppParam { name: "requestOrigin", ty: "::Unity::Services::RemoteConfig::ConfigOrigin", modifiers: "", def_value: Some("{}") }, CppParam { name: "status", ty: "::Unity::Services::RemoteConfig::ConfigRequestStatus", modifiers: "", def_value: Some("{}") }, CppParam { name: "body", ty: "::Newtonsoft::Json::Linq::JObject*", modifiers: "", def_value: Some("{}") }, CppParam { name: "headers", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::RemoteConfig::ConfigResponse::ConfigResponse(::Unity::Services::RemoteConfig::ConfigOrigin  requestOrigin, ::Unity::Services::RemoteConfig::ConfigRequestStatus  status, ::Newtonsoft::Json::Linq::JObject*  body, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers) noexcept  {
this->requestOrigin = requestOrigin;
this->status = status;
this->body = body;
this->headers = headers;
}
// Ctor Parameters []
constexpr ::Unity::Services::RemoteConfig::ConfigResponse::ConfigResponse()   {
}
