#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/IComponentRegistry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IComponentRegistry)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class IComponentRegistry;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::IComponentRegistry);
// Dependencies 
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.IComponentRegistry
class CORDL_TYPE IComponentRegistry {
public:
// Declarations
/// @brief Method GetServiceComponent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename TComponent>
inline TComponent GetServiceComponent() ;

/// @brief Method RegisterServiceComponent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename TComponent>
inline void RegisterServiceComponent(TComponent  component) ;

/// @brief Method ResetProvidedComponents, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ResetProvidedComponents(::System::Collections::Generic::IDictionary_2<int32_t,::Unity::Services::Core::Internal::IServiceComponent*>*  componentTypeHashToInstance) ;

// Ctor Parameters [CppParam { name: "", ty: "IComponentRegistry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IComponentRegistry(IComponentRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11977};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::IComponentRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::IComponentRegistry*, "Unity.Services.Core.Internal", "IComponentRegistry");
