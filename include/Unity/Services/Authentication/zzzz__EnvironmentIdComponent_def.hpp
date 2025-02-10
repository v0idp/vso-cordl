#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/EnvironmentIdComponent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Authentication/Internal/zzzz__IEnvironmentId_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnvironmentIdComponent)
// Forward declare root types
namespace Unity::Services::Authentication {
class EnvironmentIdComponent;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::EnvironmentIdComponent);
// Dependencies System.Object, Unity.Services.Authentication.Internal.IEnvironmentId, Unity.Services.Core.Internal.IServiceComponent
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.EnvironmentIdComponent
class CORDL_TYPE EnvironmentIdComponent : public ::System::Object {
public:
// Declarations
 __declspec(property(put=set_EnvironmentId)) ::StringW  EnvironmentId;

/// @brief Field <EnvironmentId>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__EnvironmentId_k__BackingField, put=__cordl_internal_set__EnvironmentId_k__BackingField)) ::StringW  _EnvironmentId_k__BackingField;

/// @brief Convert operator to "::Unity::Services::Authentication::Internal::IEnvironmentId"
constexpr operator  ::Unity::Services::Authentication::Internal::IEnvironmentId*() noexcept;

/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr operator  ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

static inline ::Unity::Services::Authentication::EnvironmentIdComponent* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__EnvironmentId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__EnvironmentId_k__BackingField() ;

constexpr void __cordl_internal_set__EnvironmentId_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x2e9659c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Services::Authentication::Internal::IEnvironmentId"
constexpr ::Unity::Services::Authentication::Internal::IEnvironmentId* i___Unity__Services__Authentication__Internal__IEnvironmentId() noexcept;

/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

/// @brief Method set_EnvironmentId, addr 0x2e97c0c, size 0x8, virtual false, abstract: false, final false
inline void set_EnvironmentId(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentIdComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentIdComponent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentIdComponent(EnvironmentIdComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentIdComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentIdComponent(EnvironmentIdComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11532};

/// @brief Field <EnvironmentId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____EnvironmentId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::EnvironmentIdComponent, ____EnvironmentId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::EnvironmentIdComponent, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::EnvironmentIdComponent);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::EnvironmentIdComponent*, "Unity.Services.Authentication", "EnvironmentIdComponent");
