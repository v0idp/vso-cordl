#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/Shared/ApiConfiguration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Authentication/Shared/zzzz__IApiConfiguration_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ApiConfiguration)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
// Forward declare root types
namespace Unity::Services::Authentication::Shared {
class ApiConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::Shared::ApiConfiguration);
// Dependencies System.Object, Unity.Services.Authentication.Shared.IApiConfiguration
namespace Unity::Services::Authentication::Shared {
// Is value type: false
// CS Name: Unity.Services.Authentication.Shared.ApiConfiguration
class CORDL_TYPE ApiConfiguration : public ::System::Object {
public:
// Declarations
 __declspec(property(put=set_ApiKey)) ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  ApiKey;

 __declspec(property(put=set_ApiKeyPrefix)) ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  ApiKeyPrefix;

 __declspec(property(put=set_BasePath)) ::StringW  BasePath;

 __declspec(property(put=set_DefaultHeaders)) ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  DefaultHeaders;

 __declspec(property(put=set_Timeout)) int32_t  Timeout;

 __declspec(property(put=set_UserAgent)) ::StringW  UserAgent;

/// @brief Field <DefaultHeaders>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__DefaultHeaders_k__BackingField, put=__cordl_internal_set__DefaultHeaders_k__BackingField)) ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  _DefaultHeaders_k__BackingField;

/// @brief Field <Timeout>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Timeout_k__BackingField, put=__cordl_internal_set__Timeout_k__BackingField)) int32_t  _Timeout_k__BackingField;

/// @brief Field <UserAgent>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__UserAgent_k__BackingField, put=__cordl_internal_set__UserAgent_k__BackingField)) ::StringW  _UserAgent_k__BackingField;

/// @brief Field _apiKey, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__apiKey, put=__cordl_internal_set__apiKey)) ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  _apiKey;

/// @brief Field _apiKeyPrefix, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__apiKeyPrefix, put=__cordl_internal_set__apiKeyPrefix)) ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  _apiKeyPrefix;

/// @brief Field _basePath, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__basePath, put=__cordl_internal_set__basePath)) ::StringW  _basePath;

/// @brief Field _dateTimeFormat, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__dateTimeFormat, put=__cordl_internal_set__dateTimeFormat)) ::StringW  _dateTimeFormat;

/// @brief Field _tempFolderPath, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__tempFolderPath, put=__cordl_internal_set__tempFolderPath)) ::StringW  _tempFolderPath;

/// @brief Convert operator to "::Unity::Services::Authentication::Shared::IApiConfiguration"
constexpr operator  ::Unity::Services::Authentication::Shared::IApiConfiguration*() noexcept;

static inline ::Unity::Services::Authentication::Shared::ApiConfiguration* New_ctor() ;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* const& __cordl_internal_get__DefaultHeaders_k__BackingField() const;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*& __cordl_internal_get__DefaultHeaders_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Timeout_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Timeout_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__UserAgent_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__UserAgent_k__BackingField() ;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* const& __cordl_internal_get__apiKey() const;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*& __cordl_internal_get__apiKey() ;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* const& __cordl_internal_get__apiKeyPrefix() const;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*& __cordl_internal_get__apiKeyPrefix() ;

constexpr ::StringW const& __cordl_internal_get__basePath() const;

constexpr ::StringW& __cordl_internal_get__basePath() ;

constexpr ::StringW const& __cordl_internal_get__dateTimeFormat() const;

constexpr ::StringW& __cordl_internal_get__dateTimeFormat() ;

constexpr ::StringW const& __cordl_internal_get__tempFolderPath() const;

constexpr ::StringW& __cordl_internal_get__tempFolderPath() ;

constexpr void __cordl_internal_set__DefaultHeaders_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__Timeout_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__UserAgent_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__apiKey(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__apiKeyPrefix(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__basePath(::StringW  value) ;

constexpr void __cordl_internal_set__dateTimeFormat(::StringW  value) ;

constexpr void __cordl_internal_set__tempFolderPath(::StringW  value) ;

/// @brief Method .ctor, addr 0x2e967a0, size 0x194, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Services::Authentication::Shared::IApiConfiguration"
constexpr ::Unity::Services::Authentication::Shared::IApiConfiguration* i___Unity__Services__Authentication__Shared__IApiConfiguration() noexcept;

/// @brief Method set_ApiKey, addr 0x2e9a348, size 0x5c, virtual true, abstract: false, final false
inline void set_ApiKey(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method set_ApiKeyPrefix, addr 0x2e9a2ec, size 0x5c, virtual true, abstract: false, final false
inline void set_ApiKeyPrefix(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method set_BasePath, addr 0x2e9a2cc, size 0x8, virtual true, abstract: false, final false
inline void set_BasePath(::StringW  value) ;

/// @brief Method set_DefaultHeaders, addr 0x2e9a2d4, size 0x8, virtual true, abstract: false, final false
inline void set_DefaultHeaders(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method set_Timeout, addr 0x2e9a2dc, size 0x8, virtual true, abstract: false, final false
inline void set_Timeout(int32_t  value) ;

/// @brief Method set_UserAgent, addr 0x2e9a2e4, size 0x8, virtual true, abstract: false, final false
inline void set_UserAgent(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ApiConfiguration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ApiConfiguration", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ApiConfiguration(ApiConfiguration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ApiConfiguration", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ApiConfiguration(ApiConfiguration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11590};

/// @brief Field <DefaultHeaders>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  ____DefaultHeaders_k__BackingField;

/// @brief Field <Timeout>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____Timeout_k__BackingField;

/// @brief Field <UserAgent>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____UserAgent_k__BackingField;

/// @brief Field _basePath, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____basePath;

/// @brief Field _apiKey, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  ____apiKey;

/// @brief Field _apiKeyPrefix, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  ____apiKeyPrefix;

/// @brief Field _dateTimeFormat, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____dateTimeFormat;

/// @brief Field _tempFolderPath, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____tempFolderPath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::Shared::ApiConfiguration, ____DefaultHeaders_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::Shared::ApiConfiguration, ____Timeout_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::Shared::ApiConfiguration, ____UserAgent_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::Shared::ApiConfiguration, ____basePath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::Shared::ApiConfiguration, ____apiKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::Shared::ApiConfiguration, ____apiKeyPrefix) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::Shared::ApiConfiguration, ____dateTimeFormat) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::Shared::ApiConfiguration, ____tempFolderPath) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::Shared::ApiConfiguration, 0x50>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication::Shared
NEED_NO_BOX(::Unity::Services::Authentication::Shared::ApiConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::Shared::ApiConfiguration*, "Unity.Services.Authentication.Shared", "ApiConfiguration");
