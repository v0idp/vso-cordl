#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/Internal/IEnvironmentId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
CORDL_MODULE_EXPORT(IEnvironmentId)
// Forward declare root types
namespace Unity::Services::Authentication::Internal {
class IEnvironmentId;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::Internal::IEnvironmentId);
// Dependencies Unity.Services.Core.Internal.IServiceComponent
namespace Unity::Services::Authentication::Internal {
// Is value type: false
// CS Name: Unity.Services.Authentication.Internal.IEnvironmentId
class CORDL_TYPE IEnvironmentId {
public:
// Declarations
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr operator  ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IEnvironmentId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEnvironmentId(IEnvironmentId const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11957};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Authentication::Internal
NEED_NO_BOX(::Unity::Services::Authentication::Internal::IEnvironmentId);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::Internal::IEnvironmentId*, "Unity.Services.Authentication.Internal", "IEnvironmentId");
