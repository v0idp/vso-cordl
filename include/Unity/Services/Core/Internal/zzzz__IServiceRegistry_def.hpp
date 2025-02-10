#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/IServiceRegistry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IServiceRegistry)
// Forward declare root types
namespace Unity::Services::Core::Internal {
class IServiceRegistry;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::IServiceRegistry);
// Dependencies 
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.IServiceRegistry
class CORDL_TYPE IServiceRegistry {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IServiceRegistry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IServiceRegistry(IServiceRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12003};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::IServiceRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::IServiceRegistry*, "Unity.Services.Core.Internal", "IServiceRegistry");
