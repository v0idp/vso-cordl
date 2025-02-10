#pragma once
// IWYU pragma private; include "Firebase/Platform/IAppConfigExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAppConfigExtensions)
// Forward declare root types
namespace Firebase::Platform {
class IAppConfigExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Platform::IAppConfigExtensions);
// Dependencies 
namespace Firebase::Platform {
// Is value type: false
// CS Name: Firebase.Platform.IAppConfigExtensions
class CORDL_TYPE IAppConfigExtensions {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IAppConfigExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAppConfigExtensions(IAppConfigExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12198};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Firebase::Platform
NEED_NO_BOX(::Firebase::Platform::IAppConfigExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::IAppConfigExtensions*, "Firebase.Platform", "IAppConfigExtensions");
