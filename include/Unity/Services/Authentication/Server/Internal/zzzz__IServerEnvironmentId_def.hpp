#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/Server/Internal/IServerEnvironmentId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Authentication/Internal/zzzz__IEnvironmentId_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
CORDL_MODULE_EXPORT(IServerEnvironmentId)
// Forward declare root types
namespace Unity::Services::Authentication::Server::Internal {
class IServerEnvironmentId;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::Server::Internal::IServerEnvironmentId);
// Dependencies Unity.Services.Authentication.Internal.IEnvironmentId, Unity.Services.Core.Internal.IServiceComponent
namespace Unity::Services::Authentication::Server::Internal {
// Is value type: false
// CS Name: Unity.Services.Authentication.Server.Internal.IServerEnvironmentId
class CORDL_TYPE IServerEnvironmentId {
public:
// Declarations
/// @brief Convert operator to "::Unity::Services::Authentication::Internal::IEnvironmentId"
constexpr operator  ::Unity::Services::Authentication::Internal::IEnvironmentId*() noexcept;

/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr operator  ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

/// @brief Convert to "::Unity::Services::Authentication::Internal::IEnvironmentId"
constexpr ::Unity::Services::Authentication::Internal::IEnvironmentId* i___Unity__Services__Authentication__Internal__IEnvironmentId() noexcept;

/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IServerEnvironmentId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IServerEnvironmentId(IServerEnvironmentId const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11955};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Authentication::Server::Internal
NEED_NO_BOX(::Unity::Services::Authentication::Server::Internal::IServerEnvironmentId);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::Server::Internal::IServerEnvironmentId*, "Unity.Services.Authentication.Server.Internal", "IServerEnvironmentId");
