#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AuthenticationCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Authentication/zzzz__IAuthenticationCache_def.hpp"
#include "Unity/Services/Authentication/zzzz__ICache_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AuthenticationCache)
namespace Unity::Services::Authentication {
class IProfile;
}
namespace Unity::Services::Core::Configuration::Internal {
class ICloudProjectId;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class AuthenticationCache;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::AuthenticationCache);
// Dependencies System.Object, Unity.Services.Authentication.IAuthenticationCache, Unity.Services.Authentication.ICache
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.AuthenticationCache
class CORDL_TYPE AuthenticationCache : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CloudProjectId)) ::StringW  CloudProjectId;

 __declspec(property(get=get_OldPrefix)) ::StringW  OldPrefix;

 __declspec(property(get=get_Prefix)) ::StringW  Prefix;

 __declspec(property(get=get_Profile)) ::StringW  Profile;

/// @brief Field m_CloudProjectId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CloudProjectId, put=__cordl_internal_set_m_CloudProjectId)) ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*  m_CloudProjectId;

/// @brief Field m_Profile, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Profile, put=__cordl_internal_set_m_Profile)) ::Unity::Services::Authentication::IProfile*  m_Profile;

/// @brief Convert operator to "::Unity::Services::Authentication::IAuthenticationCache"
constexpr operator  ::Unity::Services::Authentication::IAuthenticationCache*() noexcept;

/// @brief Convert operator to "::Unity::Services::Authentication::ICache"
constexpr operator  ::Unity::Services::Authentication::ICache*() noexcept;

/// @brief Method DeleteKey, addr 0x2e999f4, size 0x24, virtual true, abstract: false, final true
inline void DeleteKey(::StringW  key) ;

/// @brief Method GetKey, addr 0x2e999d8, size 0x1c, virtual false, abstract: false, final false
inline ::StringW GetKey(::StringW  key) ;

/// @brief Method GetOldKey, addr 0x2e99b18, size 0x4c, virtual false, abstract: false, final false
inline ::StringW GetOldKey(::StringW  key) ;

/// @brief Method GetString, addr 0x2e99a18, size 0x4c, virtual true, abstract: false, final true
inline ::StringW GetString(::StringW  key) ;

/// @brief Method HasKey, addr 0x2e999b4, size 0x24, virtual true, abstract: false, final true
inline bool HasKey(::StringW  key) ;

/// @brief Method Migrate, addr 0x2e99aa0, size 0x78, virtual true, abstract: false, final true
inline void Migrate(::StringW  key) ;

static inline ::Unity::Services::Authentication::AuthenticationCache* New_ctor(::Unity::Services::Core::Configuration::Internal::ICloudProjectId*  cloudProjectId, ::Unity::Services::Authentication::IProfile*  profile) ;

/// @brief Method SetString, addr 0x2e99a64, size 0x3c, virtual true, abstract: false, final true
inline void SetString(::StringW  key, ::StringW  value) ;

constexpr ::Unity::Services::Core::Configuration::Internal::ICloudProjectId* const& __cordl_internal_get_m_CloudProjectId() const;

constexpr ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*& __cordl_internal_get_m_CloudProjectId() ;

constexpr ::Unity::Services::Authentication::IProfile* const& __cordl_internal_get_m_Profile() const;

constexpr ::Unity::Services::Authentication::IProfile*& __cordl_internal_get_m_Profile() ;

constexpr void __cordl_internal_set_m_CloudProjectId(::Unity::Services::Core::Configuration::Internal::ICloudProjectId*  value) ;

constexpr void __cordl_internal_set_m_Profile(::Unity::Services::Authentication::IProfile*  value) ;

/// @brief Method .ctor, addr 0x2e96568, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Core::Configuration::Internal::ICloudProjectId*  cloudProjectId, ::Unity::Services::Authentication::IProfile*  profile) ;

/// @brief Method get_CloudProjectId, addr 0x2e997b0, size 0xa0, virtual true, abstract: false, final true
inline ::StringW get_CloudProjectId() ;

/// @brief Method get_OldPrefix, addr 0x2e99974, size 0x40, virtual false, abstract: false, final false
inline ::StringW get_OldPrefix() ;

/// @brief Method get_Prefix, addr 0x2e998f0, size 0x84, virtual false, abstract: false, final false
inline ::StringW get_Prefix() ;

/// @brief Method get_Profile, addr 0x2e99850, size 0xa0, virtual true, abstract: false, final true
inline ::StringW get_Profile() ;

/// @brief Convert to "::Unity::Services::Authentication::IAuthenticationCache"
constexpr ::Unity::Services::Authentication::IAuthenticationCache* i___Unity__Services__Authentication__IAuthenticationCache() noexcept;

/// @brief Convert to "::Unity::Services::Authentication::ICache"
constexpr ::Unity::Services::Authentication::ICache* i___Unity__Services__Authentication__ICache() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationCache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationCache(AuthenticationCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationCache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationCache(AuthenticationCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11582};

/// @brief Field m_CloudProjectId, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*  ___m_CloudProjectId;

/// @brief Field m_Profile, offset: 0x18, size: 0x8, def value: None
 ::Unity::Services::Authentication::IProfile*  ___m_Profile;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::AuthenticationCache, ___m_CloudProjectId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationCache, ___m_Profile) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::AuthenticationCache, 0x20>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::AuthenticationCache);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::AuthenticationCache*, "Unity.Services.Authentication", "AuthenticationCache");
