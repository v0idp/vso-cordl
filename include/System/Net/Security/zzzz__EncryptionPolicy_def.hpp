#pragma once
// IWYU pragma private; include "System/Net/Security/EncryptionPolicy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EncryptionPolicy)
// Forward declare root types
namespace System::Net::Security {
struct EncryptionPolicy;
}
// Write type traits
MARK_VAL_T(::System::Net::Security::EncryptionPolicy);
// Dependencies 
namespace System::Net::Security {
// Is value type: true
// CS Name: System.Net.Security.EncryptionPolicy
struct CORDL_TYPE EncryptionPolicy {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EncryptionPolicy_Unwrapped
enum struct __EncryptionPolicy_Unwrapped : int32_t {
__E_RequireEncryption = static_cast<int32_t>(0x0),
__E_AllowNoEncryption = static_cast<int32_t>(0x1),
__E_NoEncryption = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EncryptionPolicy_Unwrapped () const noexcept {
return static_cast<__EncryptionPolicy_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EncryptionPolicy() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EncryptionPolicy(int32_t  value__) noexcept;

/// @brief Field AllowNoEncryption value: I32(1)
static ::System::Net::Security::EncryptionPolicy const AllowNoEncryption;

/// @brief Field NoEncryption value: I32(2)
static ::System::Net::Security::EncryptionPolicy const NoEncryption;

/// @brief Field RequireEncryption value: I32(0)
static ::System::Net::Security::EncryptionPolicy const RequireEncryption;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8009};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Security::EncryptionPolicy, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Security::EncryptionPolicy, 0x4>, "Size mismatch!");

} // namespace end def System::Net::Security
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::EncryptionPolicy, "System.Net.Security", "EncryptionPolicy");
