#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/IServiceComponent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IServiceComponent)
// Forward declare root types
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::IServiceComponent);
// Dependencies 
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.IServiceComponent
class CORDL_TYPE IServiceComponent {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IServiceComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IServiceComponent(IServiceComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11997};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::IServiceComponent);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::IServiceComponent*, "Unity.Services.Core.Internal", "IServiceComponent");
