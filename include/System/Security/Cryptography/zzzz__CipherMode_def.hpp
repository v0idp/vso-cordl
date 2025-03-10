#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CipherMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CipherMode)
// Forward declare root types
namespace System::Security::Cryptography {
struct CipherMode;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::CipherMode);
// Dependencies 
namespace System::Security::Cryptography {
// Is value type: true
// CS Name: System.Security.Cryptography.CipherMode
struct CORDL_TYPE CipherMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CipherMode_Unwrapped
enum struct __CipherMode_Unwrapped : int32_t {
__E_CBC = static_cast<int32_t>(0x1),
__E_ECB = static_cast<int32_t>(0x2),
__E_OFB = static_cast<int32_t>(0x3),
__E_CFB = static_cast<int32_t>(0x4),
__E_CTS = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CipherMode_Unwrapped () const noexcept {
return static_cast<__CipherMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CipherMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CipherMode(int32_t  value__) noexcept;

/// @brief Field CBC value: I32(1)
static ::System::Security::Cryptography::CipherMode const CBC;

/// @brief Field CFB value: I32(4)
static ::System::Security::Cryptography::CipherMode const CFB;

/// @brief Field CTS value: I32(5)
static ::System::Security::Cryptography::CipherMode const CTS;

/// @brief Field ECB value: I32(2)
static ::System::Security::Cryptography::CipherMode const ECB;

/// @brief Field OFB value: I32(3)
static ::System::Security::Cryptography::CipherMode const OFB;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2621};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::CipherMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::CipherMode, 0x4>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CipherMode, "System.Security.Cryptography", "CipherMode");
