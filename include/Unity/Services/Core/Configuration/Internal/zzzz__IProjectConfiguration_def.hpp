#pragma once
// IWYU pragma private; include "Unity/Services/Core/Configuration/Internal/IProjectConfiguration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IProjectConfiguration)
// Forward declare root types
namespace Unity::Services::Core::Configuration::Internal {
class IProjectConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration);
// Dependencies Unity.Services.Core.Internal.IServiceComponent
namespace Unity::Services::Core::Configuration::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Configuration.Internal.IProjectConfiguration
class CORDL_TYPE IProjectConfiguration {
public:
// Declarations
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr operator  ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

/// @brief Method GetString, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetString(::StringW  key, ::StringW  defaultValue) ;

/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IProjectConfiguration", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IProjectConfiguration(IProjectConfiguration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11969};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Core::Configuration::Internal
NEED_NO_BOX(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*, "Unity.Services.Core.Configuration.Internal", "IProjectConfiguration");
