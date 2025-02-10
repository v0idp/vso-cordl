#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/PlayerNameComponent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlayerNameComponent)
namespace Unity::Services::Authentication {
class IAuthenticationCache;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class PlayerNameComponent;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::PlayerNameComponent);
// Dependencies System.Object
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.PlayerNameComponent
class CORDL_TYPE PlayerNameComponent : public ::System::Object {
public:
// Declarations
/// @brief Field m_Cache, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Cache, put=__cordl_internal_set_m_Cache)) ::Unity::Services::Authentication::IAuthenticationCache*  m_Cache;

/// @brief Method Clear, addr 0x2e9374c, size 0xbc, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::Unity::Services::Authentication::PlayerNameComponent* New_ctor(::Unity::Services::Authentication::IAuthenticationCache*  cache) ;

constexpr ::Unity::Services::Authentication::IAuthenticationCache* const& __cordl_internal_get_m_Cache() const;

constexpr ::Unity::Services::Authentication::IAuthenticationCache*& __cordl_internal_get_m_Cache() ;

constexpr void __cordl_internal_set_m_Cache(::Unity::Services::Authentication::IAuthenticationCache*  value) ;

/// @brief Method .ctor, addr 0x2e965cc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Authentication::IAuthenticationCache*  cache) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerNameComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerNameComponent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerNameComponent(PlayerNameComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerNameComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerNameComponent(PlayerNameComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11534};

/// @brief Field m_Cache, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::Authentication::IAuthenticationCache*  ___m_Cache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::PlayerNameComponent, ___m_Cache) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::PlayerNameComponent, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::PlayerNameComponent);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::PlayerNameComponent*, "Unity.Services.Authentication", "PlayerNameComponent");
