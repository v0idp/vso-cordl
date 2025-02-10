#pragma once
// IWYU pragma private; include "Unity/Services/Core/Telemetry/Internal/IMetricsFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IMetricsFactory)
namespace Unity::Services::Core::Telemetry::Internal {
class IMetrics;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class IMetricsFactory;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::IMetricsFactory);
// Dependencies Unity.Services.Core.Internal.IServiceComponent
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Telemetry.Internal.IMetricsFactory
class CORDL_TYPE IMetricsFactory {
public:
// Declarations
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr operator  ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

/// @brief Method Create, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Unity::Services::Core::Telemetry::Internal::IMetrics* Create(::StringW  packageName) ;

/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IMetricsFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMetricsFactory(IMetricsFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11963};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::IMetricsFactory);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*, "Unity.Services.Core.Telemetry.Internal", "IMetricsFactory");
