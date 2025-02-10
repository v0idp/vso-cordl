#pragma once
// IWYU pragma private; include "Unity/Services/Core/Telemetry/Internal/IDiagnosticsComponentProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDiagnosticsComponentProvider)
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class IDiagnosticsComponentProvider;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider);
// Dependencies 
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Telemetry.Internal.IDiagnosticsComponentProvider
class CORDL_TYPE IDiagnosticsComponentProvider {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IDiagnosticsComponentProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDiagnosticsComponentProvider(IDiagnosticsComponentProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11960};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*, "Unity.Services.Core.Telemetry.Internal", "IDiagnosticsComponentProvider");
