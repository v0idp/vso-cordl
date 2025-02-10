#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/Shared/IApiClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IApiClient)
// Forward declare root types
namespace Unity::Services::Authentication::Shared {
class IApiClient;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::Shared::IApiClient);
// Dependencies 
namespace Unity::Services::Authentication::Shared {
// Is value type: false
// CS Name: Unity.Services.Authentication.Shared.IApiClient
class CORDL_TYPE IApiClient {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IApiClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IApiClient(IApiClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11591};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Authentication::Shared
NEED_NO_BOX(::Unity::Services::Authentication::Shared::IApiClient);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::Shared::IApiClient*, "Unity.Services.Authentication.Shared", "IApiClient");
