#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/LockedComponentRegistry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IComponentRegistry_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LockedComponentRegistry)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace Unity::Services::Core::Internal {
class IComponentRegistry;
}
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class LockedComponentRegistry;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::LockedComponentRegistry);
// Dependencies System.Object, Unity.Services.Core.Internal.IComponentRegistry
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.LockedComponentRegistry
class CORDL_TYPE LockedComponentRegistry : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Registry)) ::Unity::Services::Core::Internal::IComponentRegistry*  Registry;

/// @brief Field <Registry>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Registry_k__BackingField, put=__cordl_internal_set__Registry_k__BackingField)) ::Unity::Services::Core::Internal::IComponentRegistry*  _Registry_k__BackingField;

/// @brief Convert operator to "::Unity::Services::Core::Internal::IComponentRegistry"
constexpr operator  ::Unity::Services::Core::Internal::IComponentRegistry*() noexcept;

/// @brief Method GetServiceComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TComponent>
inline TComponent GetServiceComponent() ;

static inline ::Unity::Services::Core::Internal::LockedComponentRegistry* New_ctor(::Unity::Services::Core::Internal::IComponentRegistry*  registryToLock) ;

/// @brief Method RegisterServiceComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TComponent>
inline void RegisterServiceComponent(TComponent  component) ;

/// @brief Method ResetProvidedComponents, addr 0x2e9decc, size 0x4c, virtual true, abstract: false, final true
inline void ResetProvidedComponents(::System::Collections::Generic::IDictionary_2<int32_t,::Unity::Services::Core::Internal::IServiceComponent*>*  componentTypeHashToInstance) ;

constexpr ::Unity::Services::Core::Internal::IComponentRegistry* const& __cordl_internal_get__Registry_k__BackingField() const;

constexpr ::Unity::Services::Core::Internal::IComponentRegistry*& __cordl_internal_get__Registry_k__BackingField() ;

constexpr void __cordl_internal_set__Registry_k__BackingField(::Unity::Services::Core::Internal::IComponentRegistry*  value) ;

/// @brief Method .ctor, addr 0x2e9dea4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Core::Internal::IComponentRegistry*  registryToLock) ;

/// @brief Method get_Registry, addr 0x2e9de9c, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Core::Internal::IComponentRegistry* get_Registry() ;

/// @brief Convert to "::Unity::Services::Core::Internal::IComponentRegistry"
constexpr ::Unity::Services::Core::Internal::IComponentRegistry* i___Unity__Services__Core__Internal__IComponentRegistry() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LockedComponentRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LockedComponentRegistry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LockedComponentRegistry(LockedComponentRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LockedComponentRegistry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LockedComponentRegistry(LockedComponentRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11978};

/// @brief Field <Registry>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::IComponentRegistry*  ____Registry_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::LockedComponentRegistry, ____Registry_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::LockedComponentRegistry, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::LockedComponentRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::LockedComponentRegistry*, "Unity.Services.Core.Internal", "LockedComponentRegistry");
