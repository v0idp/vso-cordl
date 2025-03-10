#pragma once
// IWYU pragma private; include "System/Security/Permissions/SecurityAction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SecurityAction)
// Forward declare root types
namespace System::Security::Permissions {
struct SecurityAction;
}
// Write type traits
MARK_VAL_T(::System::Security::Permissions::SecurityAction);
// Dependencies 
namespace System::Security::Permissions {
// Is value type: true
// CS Name: System.Security.Permissions.SecurityAction
struct CORDL_TYPE SecurityAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SecurityAction_Unwrapped
enum struct __SecurityAction_Unwrapped : int32_t {
__E_Demand = static_cast<int32_t>(0x2),
__E_Assert = static_cast<int32_t>(0x3),
__E_Deny = static_cast<int32_t>(0x4),
__E_PermitOnly = static_cast<int32_t>(0x5),
__E_LinkDemand = static_cast<int32_t>(0x6),
__E_InheritanceDemand = static_cast<int32_t>(0x7),
__E_RequestMinimum = static_cast<int32_t>(0x8),
__E_RequestOptional = static_cast<int32_t>(0x9),
__E_RequestRefuse = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SecurityAction_Unwrapped () const noexcept {
return static_cast<__SecurityAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SecurityAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SecurityAction(int32_t  value__) noexcept;

/// @brief Field Demand value: I32(2)
static ::System::Security::Permissions::SecurityAction const Demand;

/// @brief Field Deny value: I32(4)
static ::System::Security::Permissions::SecurityAction const Deny;

/// @brief Field InheritanceDemand value: I32(7)
static ::System::Security::Permissions::SecurityAction const InheritanceDemand;

/// @brief Field LinkDemand value: I32(6)
static ::System::Security::Permissions::SecurityAction const LinkDemand;

/// @brief Field PermitOnly value: I32(5)
static ::System::Security::Permissions::SecurityAction const PermitOnly;

/// @brief Field RequestMinimum value: I32(8)
static ::System::Security::Permissions::SecurityAction const RequestMinimum;

/// @brief Field RequestOptional value: I32(9)
static ::System::Security::Permissions::SecurityAction const RequestOptional;

/// @brief Field RequestRefuse value: I32(10)
static ::System::Security::Permissions::SecurityAction const RequestRefuse;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2607};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Assert value: I32(3)
static ::System::Security::Permissions::SecurityAction const _cordl_Assert;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Permissions::SecurityAction, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Permissions::SecurityAction, 0x4>, "Size mismatch!");

} // namespace end def System::Security::Permissions
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Permissions::SecurityAction, "System.Security.Permissions", "SecurityAction");
