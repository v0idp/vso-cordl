#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/CoreRegistry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/zzzz__ServicesType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CoreRegistry)
namespace Unity::Services::Core::Internal {
struct CoreRegistration;
}
namespace Unity::Services::Core::Internal {
class IComponentRegistry;
}
namespace Unity::Services::Core::Internal {
class IPackageRegistry;
}
namespace Unity::Services::Core::Internal {
class IServiceRegistry;
}
namespace Unity::Services::Core {
class InitializationOptions;
}
namespace Unity::Services::Core {
struct ServicesType;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class CoreRegistry;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::CoreRegistry);
// Dependencies System.Object, Unity.Services.Core.ServicesType
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.CoreRegistry
class CORDL_TYPE CoreRegistry : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ComponentRegistry, put=set_ComponentRegistry)) ::Unity::Services::Core::Internal::IComponentRegistry*  ComponentRegistry;

 __declspec(property(get=get_Options, put=set_Options)) ::Unity::Services::Core::InitializationOptions*  Options;

 __declspec(property(get=get_PackageRegistry, put=set_PackageRegistry)) ::Unity::Services::Core::Internal::IPackageRegistry*  PackageRegistry;

 __declspec(property(put=set_ServiceRegistry)) ::Unity::Services::Core::Internal::IServiceRegistry*  ServiceRegistry;

 __declspec(property(get=get_Type, put=set_Type)) ::Unity::Services::Core::ServicesType  Type;

/// @brief Field <ComponentRegistry>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ComponentRegistry_k__BackingField, put=__cordl_internal_set__ComponentRegistry_k__BackingField)) ::Unity::Services::Core::Internal::IComponentRegistry*  _ComponentRegistry_k__BackingField;

/// @brief Field <InstanceId>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__InstanceId_k__BackingField, put=__cordl_internal_set__InstanceId_k__BackingField)) ::StringW  _InstanceId_k__BackingField;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::Unity::Services::Core::Internal::CoreRegistry*  _Instance_k__BackingField;

/// @brief Field <Options>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Options_k__BackingField, put=__cordl_internal_set__Options_k__BackingField)) ::Unity::Services::Core::InitializationOptions*  _Options_k__BackingField;

/// @brief Field <PackageRegistry>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__PackageRegistry_k__BackingField, put=__cordl_internal_set__PackageRegistry_k__BackingField)) ::Unity::Services::Core::Internal::IPackageRegistry*  _PackageRegistry_k__BackingField;

/// @brief Field <ServiceRegistry>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__ServiceRegistry_k__BackingField, put=__cordl_internal_set__ServiceRegistry_k__BackingField)) ::Unity::Services::Core::Internal::IServiceRegistry*  _ServiceRegistry_k__BackingField;

/// @brief Field <Type>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Type_k__BackingField, put=__cordl_internal_set__Type_k__BackingField)) ::Unity::Services::Core::ServicesType  _Type_k__BackingField;

/// @brief Method GetServiceComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TComponent>
inline TComponent GetServiceComponent() ;

/// @brief Method LockComponentRegistration, addr 0x2e9e494, size 0x8c, virtual false, abstract: false, final false
inline void LockComponentRegistration() ;

static inline ::Unity::Services::Core::Internal::CoreRegistry* New_ctor(::Unity::Services::Core::Internal::IPackageRegistry*  packageRegistry, ::Unity::Services::Core::ServicesType  type, ::StringW  instanceId) ;

/// @brief Method RegisterPackage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TPackage>
inline ::Unity::Services::Core::Internal::CoreRegistration RegisterPackage(TPackage  package) ;

/// @brief Method RegisterServiceComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TComponent>
inline void RegisterServiceComponent(TComponent  component) ;

constexpr ::Unity::Services::Core::Internal::IComponentRegistry* const& __cordl_internal_get__ComponentRegistry_k__BackingField() const;

constexpr ::Unity::Services::Core::Internal::IComponentRegistry*& __cordl_internal_get__ComponentRegistry_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__InstanceId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__InstanceId_k__BackingField() ;

constexpr ::Unity::Services::Core::InitializationOptions* const& __cordl_internal_get__Options_k__BackingField() const;

constexpr ::Unity::Services::Core::InitializationOptions*& __cordl_internal_get__Options_k__BackingField() ;

constexpr ::Unity::Services::Core::Internal::IPackageRegistry* const& __cordl_internal_get__PackageRegistry_k__BackingField() const;

constexpr ::Unity::Services::Core::Internal::IPackageRegistry*& __cordl_internal_get__PackageRegistry_k__BackingField() ;

constexpr ::Unity::Services::Core::Internal::IServiceRegistry* const& __cordl_internal_get__ServiceRegistry_k__BackingField() const;

constexpr ::Unity::Services::Core::Internal::IServiceRegistry*& __cordl_internal_get__ServiceRegistry_k__BackingField() ;

constexpr ::Unity::Services::Core::ServicesType const& __cordl_internal_get__Type_k__BackingField() const;

constexpr ::Unity::Services::Core::ServicesType& __cordl_internal_get__Type_k__BackingField() ;

constexpr void __cordl_internal_set__ComponentRegistry_k__BackingField(::Unity::Services::Core::Internal::IComponentRegistry*  value) ;

constexpr void __cordl_internal_set__InstanceId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Options_k__BackingField(::Unity::Services::Core::InitializationOptions*  value) ;

constexpr void __cordl_internal_set__PackageRegistry_k__BackingField(::Unity::Services::Core::Internal::IPackageRegistry*  value) ;

constexpr void __cordl_internal_set__ServiceRegistry_k__BackingField(::Unity::Services::Core::Internal::IServiceRegistry*  value) ;

constexpr void __cordl_internal_set__Type_k__BackingField(::Unity::Services::Core::ServicesType  value) ;

/// @brief Method .ctor, addr 0x2e9e364, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Core::Internal::IPackageRegistry*  packageRegistry, ::Unity::Services::Core::ServicesType  type, ::StringW  instanceId) ;

static inline ::Unity::Services::Core::Internal::CoreRegistry* getStaticF__Instance_k__BackingField() ;

/// @brief Method get_ComponentRegistry, addr 0x2e9e34c, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Core::Internal::IComponentRegistry* get_ComponentRegistry() ;

/// @brief Method get_Instance, addr 0x2e9e288, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Services::Core::Internal::CoreRegistry* get_Instance() ;

/// @brief Method get_Options, addr 0x2e9e32c, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Core::InitializationOptions* get_Options() ;

/// @brief Method get_PackageRegistry, addr 0x2e9e33c, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Core::Internal::IPackageRegistry* get_PackageRegistry() ;

/// @brief Method get_Type, addr 0x2e9e31c, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Core::ServicesType get_Type() ;

static inline void setStaticF__Instance_k__BackingField(::Unity::Services::Core::Internal::CoreRegistry*  value) ;

/// @brief Method set_ComponentRegistry, addr 0x2e9e354, size 0x8, virtual false, abstract: false, final false
inline void set_ComponentRegistry(::Unity::Services::Core::Internal::IComponentRegistry*  value) ;

/// @brief Method set_Instance, addr 0x2e9e2d0, size 0x4c, virtual false, abstract: false, final false
static inline void set_Instance(::Unity::Services::Core::Internal::CoreRegistry*  value) ;

/// @brief Method set_Options, addr 0x2e9e334, size 0x8, virtual false, abstract: false, final false
inline void set_Options(::Unity::Services::Core::InitializationOptions*  value) ;

/// @brief Method set_PackageRegistry, addr 0x2e9e344, size 0x8, virtual false, abstract: false, final false
inline void set_PackageRegistry(::Unity::Services::Core::Internal::IPackageRegistry*  value) ;

/// @brief Method set_ServiceRegistry, addr 0x2e9e35c, size 0x8, virtual false, abstract: false, final false
inline void set_ServiceRegistry(::Unity::Services::Core::Internal::IServiceRegistry*  value) ;

/// @brief Method set_Type, addr 0x2e9e324, size 0x8, virtual false, abstract: false, final false
inline void set_Type(::Unity::Services::Core::ServicesType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CoreRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoreRegistry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CoreRegistry(CoreRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoreRegistry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoreRegistry(CoreRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11981};

/// @brief Field <InstanceId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____InstanceId_k__BackingField;

/// @brief Field <Type>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::Unity::Services::Core::ServicesType  ____Type_k__BackingField;

/// @brief Field <Options>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Core::InitializationOptions*  ____Options_k__BackingField;

/// @brief Field <PackageRegistry>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::IPackageRegistry*  ____PackageRegistry_k__BackingField;

/// @brief Field <ComponentRegistry>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::IComponentRegistry*  ____ComponentRegistry_k__BackingField;

/// @brief Field <ServiceRegistry>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::IServiceRegistry*  ____ServiceRegistry_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::CoreRegistry, ____InstanceId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreRegistry, ____Type_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreRegistry, ____Options_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreRegistry, ____PackageRegistry_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreRegistry, ____ComponentRegistry_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreRegistry, ____ServiceRegistry_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::CoreRegistry, 0x40>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::CoreRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::CoreRegistry*, "Unity.Services.Core.Internal", "CoreRegistry");
