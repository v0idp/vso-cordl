#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/SessionTokenComponent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SessionTokenComponent)
namespace Unity::Services::Authentication {
class IAuthenticationCache;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class SessionTokenComponent;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::SessionTokenComponent);
// Dependencies System.Object
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.SessionTokenComponent
class CORDL_TYPE SessionTokenComponent : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_SessionToken, put=set_SessionToken)) ::StringW  SessionToken;

/// @brief Field m_Cache, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Cache, put=__cordl_internal_set_m_Cache)) ::Unity::Services::Authentication::IAuthenticationCache*  m_Cache;

/// @brief Method Clear, addr 0x2e93b84, size 0xbc, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GetSessionToken, addr 0x2e97f90, size 0xc0, virtual false, abstract: false, final false
inline ::StringW GetSessionToken() ;

/// @brief Method Migrate, addr 0x2e94d28, size 0xbc, virtual false, abstract: false, final false
inline void Migrate() ;

static inline ::Unity::Services::Authentication::SessionTokenComponent* New_ctor(::Unity::Services::Authentication::IAuthenticationCache*  cache) ;

/// @brief Method SetSessionToken, addr 0x2e98050, size 0xc8, virtual false, abstract: false, final false
inline void SetSessionToken(::StringW  sessionToken) ;

constexpr ::Unity::Services::Authentication::IAuthenticationCache* const& __cordl_internal_get_m_Cache() const;

constexpr ::Unity::Services::Authentication::IAuthenticationCache*& __cordl_internal_get_m_Cache() ;

constexpr void __cordl_internal_set_m_Cache(::Unity::Services::Authentication::IAuthenticationCache*  value) ;

/// @brief Method .ctor, addr 0x2e965f4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Authentication::IAuthenticationCache*  cache) ;

/// @brief Method get_SessionToken, addr 0x2e93380, size 0x4, virtual false, abstract: false, final false
inline ::StringW get_SessionToken() ;

/// @brief Method set_SessionToken, addr 0x2e949ac, size 0x4, virtual false, abstract: false, final false
inline void set_SessionToken(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionTokenComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionTokenComponent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionTokenComponent(SessionTokenComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionTokenComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionTokenComponent(SessionTokenComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11538};

/// @brief Field m_Cache, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::Authentication::IAuthenticationCache*  ___m_Cache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::SessionTokenComponent, ___m_Cache) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::SessionTokenComponent, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::SessionTokenComponent);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::SessionTokenComponent*, "Unity.Services.Authentication", "SessionTokenComponent");
