#pragma once
// IWYU pragma private; include "Unity/Services/Core/Configuration/Internal/ICloudProjectId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ICloudProjectId)
// Forward declare root types
namespace Unity::Services::Core::Configuration::Internal {
class ICloudProjectId;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Configuration::Internal::ICloudProjectId);
// Dependencies Unity.Services.Core.Internal.IServiceComponent
namespace Unity::Services::Core::Configuration::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Configuration.Internal.ICloudProjectId
class CORDL_TYPE ICloudProjectId {
public:
// Declarations
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr operator  ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

/// @brief Method GetCloudProjectId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetCloudProjectId() ;

/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ICloudProjectId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICloudProjectId(ICloudProjectId const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11967};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Core::Configuration::Internal
NEED_NO_BOX(::Unity::Services::Core::Configuration::Internal::ICloudProjectId);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Configuration::Internal::ICloudProjectId*, "Unity.Services.Core.Configuration.Internal", "ICloudProjectId");
