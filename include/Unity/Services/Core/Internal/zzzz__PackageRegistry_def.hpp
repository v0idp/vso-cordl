#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/PackageRegistry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IPackageRegistry_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PackageRegistry)
namespace Unity::Services::Core::Internal {
struct CoreRegistration;
}
namespace Unity::Services::Core::Internal {
class DependencyTree;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class PackageRegistry;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::PackageRegistry);
// Dependencies System.Object, Unity.Services.Core.Internal.IPackageRegistry
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.PackageRegistry
class CORDL_TYPE PackageRegistry : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Tree, put=set_Tree)) ::Unity::Services::Core::Internal::DependencyTree*  Tree;

/// @brief Field <Tree>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Tree_k__BackingField, put=__cordl_internal_set__Tree_k__BackingField)) ::Unity::Services::Core::Internal::DependencyTree*  _Tree_k__BackingField;

/// @brief Convert operator to "::Unity::Services::Core::Internal::IPackageRegistry"
constexpr operator  ::Unity::Services::Core::Internal::IPackageRegistry*() noexcept;

/// @brief Method AddComponentDependencyToPackage, addr 0x2ea2044, size 0x10c, virtual false, abstract: false, final false
inline void AddComponentDependencyToPackage(int32_t  componentTypeHash, int32_t  packageTypeHash) ;

static inline ::Unity::Services::Core::Internal::PackageRegistry* New_ctor(::Unity::Services::Core::Internal::DependencyTree*  tree) ;

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

constexpr ::Unity::Services::Core::Internal::DependencyTree* const& __cordl_internal_get__Tree_k__BackingField() const;

constexpr ::Unity::Services::Core::Internal::DependencyTree*& __cordl_internal_get__Tree_k__BackingField() ;

constexpr void __cordl_internal_set__Tree_k__BackingField(::Unity::Services::Core::Internal::DependencyTree*  value) ;

/// @brief Method .ctor, addr 0x2e9e1a0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Core::Internal::DependencyTree*  tree) ;

/// @brief Method get_Tree, addr 0x2ea2034, size 0x8, virtual true, abstract: false, final true
inline ::Unity::Services::Core::Internal::DependencyTree* get_Tree() ;

/// @brief Convert to "::Unity::Services::Core::Internal::IPackageRegistry"
constexpr ::Unity::Services::Core::Internal::IPackageRegistry* i___Unity__Services__Core__Internal__IPackageRegistry() noexcept;

/// @brief Method set_Tree, addr 0x2ea203c, size 0x8, virtual true, abstract: false, final true
inline void set_Tree(::Unity::Services::Core::Internal::DependencyTree*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PackageRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PackageRegistry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PackageRegistry(PackageRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PackageRegistry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PackageRegistry(PackageRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12002};

/// @brief Field <Tree>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::DependencyTree*  ____Tree_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::PackageRegistry, ____Tree_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::PackageRegistry, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::PackageRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::PackageRegistry*, "Unity.Services.Core.Internal", "PackageRegistry");
