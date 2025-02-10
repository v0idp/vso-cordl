#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/LockedPackageRegistry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IPackageRegistry_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LockedPackageRegistry)
namespace Unity::Services::Core::Internal {
struct CoreRegistration;
}
namespace Unity::Services::Core::Internal {
class DependencyTree;
}
namespace Unity::Services::Core::Internal {
class IPackageRegistry;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class LockedPackageRegistry;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::LockedPackageRegistry);
// Dependencies System.Object, Unity.Services.Core.Internal.IPackageRegistry
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.LockedPackageRegistry
class CORDL_TYPE LockedPackageRegistry : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Registry)) ::Unity::Services::Core::Internal::IPackageRegistry*  Registry;

 __declspec(property(get=get_Tree)) ::Unity::Services::Core::Internal::DependencyTree*  Tree;

/// @brief Field <Registry>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Registry_k__BackingField, put=__cordl_internal_set__Registry_k__BackingField)) ::Unity::Services::Core::Internal::IPackageRegistry*  _Registry_k__BackingField;

/// @brief Convert operator to "::Unity::Services::Core::Internal::IPackageRegistry"
constexpr operator  ::Unity::Services::Core::Internal::IPackageRegistry*() noexcept;

static inline ::Unity::Services::Core::Internal::LockedPackageRegistry* New_ctor(::Unity::Services::Core::Internal::IPackageRegistry*  registryToLock) ;

/// @brief Method RegisterDependency, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TComponent>
inline void RegisterDependency(int32_t  packageTypeHash) ;

/// @brief Method RegisterOptionalDependency, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TComponent>
inline void RegisterOptionalDependency(int32_t  packageTypeHash) ;

/// @brief Method RegisterPackage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TPackage>
inline ::Unity::Services::Core::Internal::CoreRegistration RegisterPackage(TPackage  package) ;

/// @brief Method RegisterProvision, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TComponent>
inline void RegisterProvision(int32_t  packageTypeHash) ;

constexpr ::Unity::Services::Core::Internal::IPackageRegistry* const& __cordl_internal_get__Registry_k__BackingField() const;

constexpr ::Unity::Services::Core::Internal::IPackageRegistry*& __cordl_internal_get__Registry_k__BackingField() ;

constexpr void __cordl_internal_set__Registry_k__BackingField(::Unity::Services::Core::Internal::IPackageRegistry*  value) ;

/// @brief Method .ctor, addr 0x2e9e254, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Core::Internal::IPackageRegistry*  registryToLock) ;

/// @brief Method get_Registry, addr 0x2ea1f8c, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Core::Internal::IPackageRegistry* get_Registry() ;

/// @brief Method get_Tree, addr 0x2ea1f94, size 0xa0, virtual true, abstract: false, final true
inline ::Unity::Services::Core::Internal::DependencyTree* get_Tree() ;

/// @brief Convert to "::Unity::Services::Core::Internal::IPackageRegistry"
constexpr ::Unity::Services::Core::Internal::IPackageRegistry* i___Unity__Services__Core__Internal__IPackageRegistry() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LockedPackageRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LockedPackageRegistry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LockedPackageRegistry(LockedPackageRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LockedPackageRegistry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LockedPackageRegistry(LockedPackageRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12001};

/// @brief Field <Registry>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::IPackageRegistry*  ____Registry_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::LockedPackageRegistry, ____Registry_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::LockedPackageRegistry, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::LockedPackageRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::LockedPackageRegistry*, "Unity.Services.Core.Internal", "LockedPackageRegistry");
