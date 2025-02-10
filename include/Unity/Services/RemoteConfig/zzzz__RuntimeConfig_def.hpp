#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/RuntimeConfig.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/RemoteConfig/zzzz__ConfigOrigin_def.hpp"
#include "Unity/Services/RemoteConfig/zzzz__ConfigRequestStatus_def.hpp"
#include "Unity/Services/RemoteConfig/zzzz__ConfigResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RuntimeConfig)
namespace Newtonsoft::Json::Linq {
class JObject;
}
namespace Newtonsoft::Json::Linq {
class JProperty;
}
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Unity::Services::RemoteConfig {
struct ConfigOrigin;
}
namespace Unity::Services::RemoteConfig {
struct ConfigResponse;
}
namespace Unity::Services::RemoteConfig {
class RuntimeConfig___c;
}
// Forward declare root types
namespace Unity::Services::RemoteConfig {
class RuntimeConfig;
}
namespace Unity::Services::RemoteConfig {
class RuntimeConfig___c;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::RemoteConfig::RuntimeConfig);
MARK_REF_PTR_T(::Unity::Services::RemoteConfig::RuntimeConfig___c);
// Dependencies System.Object
namespace Unity::Services::RemoteConfig {
// Is value type: false
// CS Name: Unity.Services.RemoteConfig.RuntimeConfig/<>c
class CORDL_TYPE RuntimeConfig___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Unity::Services::RemoteConfig::RuntimeConfig___c*  __9;

/// @brief Field <>9__34_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__34_0, put=setStaticF___9__34_0)) ::System::Func_2<::Newtonsoft::Json::Linq::JProperty*,::StringW>*  __9__34_0;

static inline ::Unity::Services::RemoteConfig::RuntimeConfig___c* New_ctor() ;

/// @brief Method <GetKeys>b__34_0, addr 0x2eab7a8, size 0x18, virtual false, abstract: false, final false
inline ::StringW _GetKeys_b__34_0(::Newtonsoft::Json::Linq::JProperty*  prop) ;

/// @brief Method .ctor, addr 0x2eab7a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Services::RemoteConfig::RuntimeConfig___c* getStaticF___9() ;

static inline ::System::Func_2<::Newtonsoft::Json::Linq::JProperty*,::StringW>* getStaticF___9__34_0() ;

static inline void setStaticF___9(::Unity::Services::RemoteConfig::RuntimeConfig___c*  value) ;

static inline void setStaticF___9__34_0(::System::Func_2<::Newtonsoft::Json::Linq::JProperty*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeConfig___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeConfig___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeConfig___c(RuntimeConfig___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeConfig___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeConfig___c(RuntimeConfig___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12230};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::RemoteConfig::RuntimeConfig___c, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::RemoteConfig
// Dependencies System.Object, Unity.Services.RemoteConfig.ConfigOrigin, Unity.Services.RemoteConfig.ConfigRequestStatus, Unity.Services.RemoteConfig.ConfigResponse
namespace Unity::Services::RemoteConfig {
// Is value type: false
// CS Name: Unity.Services.RemoteConfig.RuntimeConfig
class CORDL_TYPE RuntimeConfig : public ::System::Object {
public:
// Declarations
using __c = ::Unity::Services::RemoteConfig::RuntimeConfig___c;

/// @brief Field ConfigResponse, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get_ConfigResponse, put=__cordl_internal_set_ConfigResponse)) ::Unity::Services::RemoteConfig::ConfigResponse  ConfigResponse;

/// @brief Field FetchCompleted, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_FetchCompleted, put=__cordl_internal_set_FetchCompleted)) ::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*  FetchCompleted;

/// @brief Field RequestStatus, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_RequestStatus, put=__cordl_internal_set_RequestStatus)) ::Unity::Services::RemoteConfig::ConfigRequestStatus  RequestStatus;

/// @brief Field <assignmentId>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__assignmentId_k__BackingField, put=__cordl_internal_set__assignmentId_k__BackingField)) ::StringW  _assignmentId_k__BackingField;

/// @brief Field _config, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__config, put=__cordl_internal_set__config)) ::Newtonsoft::Json::Linq::JObject*  _config;

/// @brief Field <configAssignmentHash>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__configAssignmentHash_k__BackingField, put=__cordl_internal_set__configAssignmentHash_k__BackingField)) ::StringW  _configAssignmentHash_k__BackingField;

/// @brief Field <environmentId>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__environmentId_k__BackingField, put=__cordl_internal_set__environmentId_k__BackingField)) ::StringW  _environmentId_k__BackingField;

/// @brief Field <origin>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__origin_k__BackingField, put=__cordl_internal_set__origin_k__BackingField)) ::Unity::Services::RemoteConfig::ConfigOrigin  _origin_k__BackingField;

 __declspec(property(put=set_assignmentId)) ::StringW  assignmentId;

 __declspec(property(put=set_configAssignmentHash)) ::StringW  configAssignmentHash;

/// @brief Field configType, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_configType, put=__cordl_internal_set_configType)) ::StringW  configType;

 __declspec(property(put=set_environmentId)) ::StringW  environmentId;

 __declspec(property(put=set_origin)) ::Unity::Services::RemoteConfig::ConfigOrigin  origin;

/// @brief Field rawDateSettings, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_rawDateSettings, put=__cordl_internal_set_rawDateSettings)) ::Newtonsoft::Json::JsonSerializerSettings*  rawDateSettings;

/// @brief Method GetKeys, addr 0x2ea9da8, size 0x1d0, virtual false, abstract: false, final false
inline ::ArrayW<::StringW,::Array<::StringW>*> GetKeys() ;

/// @brief Method GetString, addr 0x2eab514, size 0x230, virtual false, abstract: false, final false
inline ::StringW GetString(::StringW  key, ::StringW  defaultValue) ;

/// @brief Method HandleConfigResponse, addr 0x2ea90a0, size 0x2e8, virtual false, abstract: false, final false
inline void HandleConfigResponse(::Unity::Services::RemoteConfig::ConfigResponse  configResponse) ;

static inline ::Unity::Services::RemoteConfig::RuntimeConfig* New_ctor(::StringW  configType) ;

constexpr ::Unity::Services::RemoteConfig::ConfigResponse const& __cordl_internal_get_ConfigResponse() const;

constexpr ::Unity::Services::RemoteConfig::ConfigResponse& __cordl_internal_get_ConfigResponse() ;

constexpr ::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>* const& __cordl_internal_get_FetchCompleted() const;

constexpr ::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*& __cordl_internal_get_FetchCompleted() ;

constexpr ::Unity::Services::RemoteConfig::ConfigRequestStatus const& __cordl_internal_get_RequestStatus() const;

constexpr ::Unity::Services::RemoteConfig::ConfigRequestStatus& __cordl_internal_get_RequestStatus() ;

constexpr ::StringW const& __cordl_internal_get__assignmentId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__assignmentId_k__BackingField() ;

constexpr ::Newtonsoft::Json::Linq::JObject* const& __cordl_internal_get__config() const;

constexpr ::Newtonsoft::Json::Linq::JObject*& __cordl_internal_get__config() ;

constexpr ::StringW const& __cordl_internal_get__configAssignmentHash_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__configAssignmentHash_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__environmentId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__environmentId_k__BackingField() ;

constexpr ::Unity::Services::RemoteConfig::ConfigOrigin const& __cordl_internal_get__origin_k__BackingField() const;

constexpr ::Unity::Services::RemoteConfig::ConfigOrigin& __cordl_internal_get__origin_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_configType() const;

constexpr ::StringW& __cordl_internal_get_configType() ;

constexpr ::Newtonsoft::Json::JsonSerializerSettings* const& __cordl_internal_get_rawDateSettings() const;

constexpr ::Newtonsoft::Json::JsonSerializerSettings*& __cordl_internal_get_rawDateSettings() ;

constexpr void __cordl_internal_set_ConfigResponse(::Unity::Services::RemoteConfig::ConfigResponse  value) ;

constexpr void __cordl_internal_set_FetchCompleted(::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*  value) ;

constexpr void __cordl_internal_set_RequestStatus(::Unity::Services::RemoteConfig::ConfigRequestStatus  value) ;

constexpr void __cordl_internal_set__assignmentId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__config(::Newtonsoft::Json::Linq::JObject*  value) ;

constexpr void __cordl_internal_set__configAssignmentHash_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__environmentId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__origin_k__BackingField(::Unity::Services::RemoteConfig::ConfigOrigin  value) ;

constexpr void __cordl_internal_set_configType(::StringW  value) ;

constexpr void __cordl_internal_set_rawDateSettings(::Newtonsoft::Json::JsonSerializerSettings*  value) ;

/// @brief Method .ctor, addr 0x2ea77a0, size 0xe8, virtual false, abstract: false, final false
inline void _ctor(::StringW  configType) ;

/// @brief Method set_assignmentId, addr 0x2eab504, size 0x8, virtual false, abstract: false, final false
inline void set_assignmentId(::StringW  value) ;

/// @brief Method set_configAssignmentHash, addr 0x2eab50c, size 0x8, virtual false, abstract: false, final false
inline void set_configAssignmentHash(::StringW  value) ;

/// @brief Method set_environmentId, addr 0x2eab4fc, size 0x8, virtual false, abstract: false, final false
inline void set_environmentId(::StringW  value) ;

/// @brief Method set_origin, addr 0x2eab4f4, size 0x8, virtual false, abstract: false, final false
inline void set_origin(::Unity::Services::RemoteConfig::ConfigOrigin  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeConfig(RuntimeConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeConfig(RuntimeConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12231};

/// @brief Field <origin>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Unity::Services::RemoteConfig::ConfigOrigin  ____origin_k__BackingField;

/// @brief Field <environmentId>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____environmentId_k__BackingField;

/// @brief Field <assignmentId>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____assignmentId_k__BackingField;

/// @brief Field <configAssignmentHash>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____configAssignmentHash_k__BackingField;

/// @brief Field configType, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___configType;

/// @brief Field ConfigResponse, offset: 0x38, size: 0x18, def value: None
 ::Unity::Services::RemoteConfig::ConfigResponse  ___ConfigResponse;

/// @brief Field RequestStatus, offset: 0x50, size: 0x4, def value: None
 ::Unity::Services::RemoteConfig::ConfigRequestStatus  ___RequestStatus;

/// @brief Field _config, offset: 0x58, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JObject*  ____config;

/// @brief Field rawDateSettings, offset: 0x60, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonSerializerSettings*  ___rawDateSettings;

/// @brief Field FetchCompleted, offset: 0x68, size: 0x8, def value: None
 ::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*  ___FetchCompleted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::RemoteConfig::RuntimeConfig, ____origin_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RuntimeConfig, ____environmentId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RuntimeConfig, ____assignmentId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RuntimeConfig, ____configAssignmentHash_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RuntimeConfig, ___configType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RuntimeConfig, ___ConfigResponse) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RuntimeConfig, ___RequestStatus) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RuntimeConfig, ____config) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RuntimeConfig, ___rawDateSettings) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RuntimeConfig, ___FetchCompleted) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::RemoteConfig::RuntimeConfig, 0x70>, "Size mismatch!");

} // namespace end def Unity::Services::RemoteConfig
NEED_NO_BOX(::Unity::Services::RemoteConfig::RuntimeConfig);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::RemoteConfig::RuntimeConfig*, "Unity.Services.RemoteConfig", "RuntimeConfig");
NEED_NO_BOX(::Unity::Services::RemoteConfig::RuntimeConfig___c);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::RemoteConfig::RuntimeConfig___c*, "Unity.Services.RemoteConfig", "RuntimeConfig/<>c");
