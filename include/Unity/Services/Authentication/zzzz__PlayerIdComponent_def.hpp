#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/PlayerIdComponent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Authentication/Internal/zzzz__IPlayerId_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayerIdComponent)
namespace System {
template<typename T>
class Action_1;
}
namespace Unity::Services::Authentication {
class IAuthenticationCache;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class PlayerIdComponent;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::PlayerIdComponent);
// Dependencies System.Object, Unity.Services.Authentication.Internal.IPlayerId, Unity.Services.Core.Internal.IServiceComponent
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.PlayerIdComponent
class CORDL_TYPE PlayerIdComponent : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_PlayerId, put=set_PlayerId)) ::StringW  PlayerId;

/// @brief Field PlayerIdChanged, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerIdChanged, put=__cordl_internal_set_PlayerIdChanged)) ::System::Action_1<::StringW>*  PlayerIdChanged;

/// @brief Field m_Cache, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Cache, put=__cordl_internal_set_m_Cache)) ::Unity::Services::Authentication::IAuthenticationCache*  m_Cache;

/// @brief Convert operator to "::Unity::Services::Authentication::Internal::IPlayerId"
constexpr operator  ::Unity::Services::Authentication::Internal::IPlayerId*() noexcept;

/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr operator  ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

/// @brief Method Clear, addr 0x2e93df0, size 0xbc, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GetPlayerId, addr 0x2e97cc8, size 0xc0, virtual false, abstract: false, final false
inline ::StringW GetPlayerId() ;

static inline ::Unity::Services::Authentication::PlayerIdComponent* New_ctor(::Unity::Services::Authentication::IAuthenticationCache*  cache) ;

/// @brief Method SetPlayerId, addr 0x2e97d88, size 0x114, virtual false, abstract: false, final false
inline void SetPlayerId(::StringW  playerId) ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_PlayerIdChanged() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_PlayerIdChanged() ;

constexpr ::Unity::Services::Authentication::IAuthenticationCache* const& __cordl_internal_get_m_Cache() const;

constexpr ::Unity::Services::Authentication::IAuthenticationCache*& __cordl_internal_get_m_Cache() ;

constexpr void __cordl_internal_set_PlayerIdChanged(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_m_Cache(::Unity::Services::Authentication::IAuthenticationCache*  value) ;

/// @brief Method .ctor, addr 0x2e965a4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Authentication::IAuthenticationCache*  cache) ;

/// @brief Method add_PlayerIdChanged, addr 0x2e93684, size 0xb0, virtual true, abstract: false, final true
inline void add_PlayerIdChanged(::System::Action_1<::StringW>*  value) ;

/// @brief Method get_PlayerId, addr 0x2e97cc4, size 0x4, virtual true, abstract: false, final true
inline ::StringW get_PlayerId() ;

/// @brief Convert to "::Unity::Services::Authentication::Internal::IPlayerId"
constexpr ::Unity::Services::Authentication::Internal::IPlayerId* i___Unity__Services__Authentication__Internal__IPlayerId() noexcept;

/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

/// @brief Method remove_PlayerIdChanged, addr 0x2e97c14, size 0xb0, virtual true, abstract: false, final true
inline void remove_PlayerIdChanged(::System::Action_1<::StringW>*  value) ;

/// @brief Method set_PlayerId, addr 0x2e949a8, size 0x4, virtual false, abstract: false, final false
inline void set_PlayerId(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerIdComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerIdComponent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerIdComponent(PlayerIdComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerIdComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerIdComponent(PlayerIdComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11533};

/// @brief Field PlayerIdChanged, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___PlayerIdChanged;

/// @brief Field m_Cache, offset: 0x18, size: 0x8, def value: None
 ::Unity::Services::Authentication::IAuthenticationCache*  ___m_Cache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::PlayerIdComponent, ___PlayerIdChanged) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::PlayerIdComponent, ___m_Cache) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::PlayerIdComponent, 0x20>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::PlayerIdComponent);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::PlayerIdComponent*, "Unity.Services.Authentication", "PlayerIdComponent");
