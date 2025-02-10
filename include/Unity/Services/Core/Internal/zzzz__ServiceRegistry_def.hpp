#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/ServiceRegistry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceRegistry_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ServiceRegistry)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class ServiceRegistry;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::ServiceRegistry);
// Dependencies System.Object, Unity.Services.Core.Internal.IServiceRegistry
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.ServiceRegistry
class CORDL_TYPE ServiceRegistry : public ::System::Object {
public:
// Declarations
/// @brief Field <ServiceTypeHashToInstance>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ServiceTypeHashToInstance_k__BackingField, put=__cordl_internal_set__ServiceTypeHashToInstance_k__BackingField)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Object*>*  _ServiceTypeHashToInstance_k__BackingField;

/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceRegistry"
constexpr operator  ::Unity::Services::Core::Internal::IServiceRegistry*() noexcept;

static inline ::Unity::Services::Core::Internal::ServiceRegistry* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Object*>* const& __cordl_internal_get__ServiceTypeHashToInstance_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Object*>*& __cordl_internal_get__ServiceTypeHashToInstance_k__BackingField() ;

constexpr void __cordl_internal_set__ServiceTypeHashToInstance_k__BackingField(::System::Collections::Generic::Dictionary_2<int32_t,::System::Object*>*  value) ;

/// @brief Method .ctor, addr 0x2e9e414, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Services::Core::Internal::IServiceRegistry"
constexpr ::Unity::Services::Core::Internal::IServiceRegistry* i___Unity__Services__Core__Internal__IServiceRegistry() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServiceRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServiceRegistry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServiceRegistry(ServiceRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServiceRegistry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServiceRegistry(ServiceRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12004};

/// @brief Field <ServiceTypeHashToInstance>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::System::Object*>*  ____ServiceTypeHashToInstance_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::ServiceRegistry, ____ServiceTypeHashToInstance_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::ServiceRegistry, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::ServiceRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::ServiceRegistry*, "Unity.Services.Core.Internal", "ServiceRegistry");
