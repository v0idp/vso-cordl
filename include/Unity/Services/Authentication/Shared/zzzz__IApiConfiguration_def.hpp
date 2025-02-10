#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/Shared/IApiConfiguration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IApiConfiguration)
// Forward declare root types
namespace Unity::Services::Authentication::Shared {
class IApiConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::Shared::IApiConfiguration);
// Dependencies 
namespace Unity::Services::Authentication::Shared {
// Is value type: false
// CS Name: Unity.Services.Authentication.Shared.IApiConfiguration
class CORDL_TYPE IApiConfiguration {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IApiConfiguration", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IApiConfiguration(IApiConfiguration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11592};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Authentication::Shared
NEED_NO_BOX(::Unity::Services::Authentication::Shared::IApiConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::Shared::IApiConfiguration*, "Unity.Services.Authentication.Shared", "IApiConfiguration");
