#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/Generated/IPlayerNamesApi.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPlayerNamesApi)
// Forward declare root types
namespace Unity::Services::Authentication::Generated {
class IPlayerNamesApi;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::Generated::IPlayerNamesApi);
// Dependencies 
namespace Unity::Services::Authentication::Generated {
// Is value type: false
// CS Name: Unity.Services.Authentication.Generated.IPlayerNamesApi
class CORDL_TYPE IPlayerNamesApi {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IPlayerNamesApi", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPlayerNamesApi(IPlayerNamesApi const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11594};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Authentication::Generated
NEED_NO_BOX(::Unity::Services::Authentication::Generated::IPlayerNamesApi);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::Generated::IPlayerNamesApi*, "Unity.Services.Authentication.Generated", "IPlayerNamesApi");
