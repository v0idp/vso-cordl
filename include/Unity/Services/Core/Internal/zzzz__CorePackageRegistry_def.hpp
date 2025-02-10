#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/CorePackageRegistry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CorePackageRegistry)
namespace Unity::Services::Core::Internal {
struct CoreRegistration;
}
namespace Unity::Services::Core::Internal {
class IPackageRegistry;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class CorePackageRegistry;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::CorePackageRegistry);
// Dependencies System.Object
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.CorePackageRegistry
class CORDL_TYPE CorePackageRegistry : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Registry, put=set_Registry)) ::Unity::Services::Core::Internal::IPackageRegistry*  Registry;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::Unity::Services::Core::Internal::CorePackageRegistry*  _Instance_k__BackingField;

/// @brief Field <Registry>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Registry_k__BackingField, put=__cordl_internal_set__Registry_k__BackingField)) ::Unity::Services::Core::Internal::IPackageRegistry*  _Registry_k__BackingField;

/// @brief Method Lock, addr 0x2e9e1c8, size 0x8c, virtual false, abstract: false, final false
inline void Lock() ;

static inline ::Unity::Services::Core::Internal::CorePackageRegistry* New_ctor() ;

/// @brief Method Register, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TPackage>
inline ::Unity::Services::Core::Internal::CoreRegistration Register(TPackage  package) ;

constexpr ::Unity::Services::Core::Internal::IPackageRegistry* const& __cordl_internal_get__Registry_k__BackingField() const;

constexpr ::Unity::Services::Core::Internal::IPackageRegistry*& __cordl_internal_get__Registry_k__BackingField() ;

constexpr void __cordl_internal_set__Registry_k__BackingField(::Unity::Services::Core::Internal::IPackageRegistry*  value) ;

/// @brief Method .ctor, addr 0x2e9dfbc, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Services::Core::Internal::CorePackageRegistry* getStaticF__Instance_k__BackingField() ;

/// @brief Method get_Instance, addr 0x2e9df18, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Services::Core::Internal::CorePackageRegistry* get_Instance() ;

/// @brief Method get_Registry, addr 0x2e9dfac, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Core::Internal::IPackageRegistry* get_Registry() ;

static inline void setStaticF__Instance_k__BackingField(::Unity::Services::Core::Internal::CorePackageRegistry*  value) ;

/// @brief Method set_Instance, addr 0x2e9df60, size 0x4c, virtual false, abstract: false, final false
static inline void set_Instance(::Unity::Services::Core::Internal::CorePackageRegistry*  value) ;

/// @brief Method set_Registry, addr 0x2e9dfb4, size 0x8, virtual false, abstract: false, final false
inline void set_Registry(::Unity::Services::Core::Internal::IPackageRegistry*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CorePackageRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CorePackageRegistry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CorePackageRegistry(CorePackageRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CorePackageRegistry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CorePackageRegistry(CorePackageRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11979};

/// @brief Field <Registry>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::IPackageRegistry*  ____Registry_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::CorePackageRegistry, ____Registry_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::CorePackageRegistry, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::CorePackageRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::CorePackageRegistry*, "Unity.Services.Core.Internal", "CorePackageRegistry");
