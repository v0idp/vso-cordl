#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CryptoStreamMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CryptoStreamMode)
// Forward declare root types
namespace System::Security::Cryptography {
struct CryptoStreamMode;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::CryptoStreamMode);
// Dependencies 
namespace System::Security::Cryptography {
// Is value type: true
// CS Name: System.Security.Cryptography.CryptoStreamMode
struct CORDL_TYPE CryptoStreamMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CryptoStreamMode_Unwrapped
enum struct __CryptoStreamMode_Unwrapped : int32_t {
__E_Read = static_cast<int32_t>(0x0),
__E_Write = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CryptoStreamMode_Unwrapped () const noexcept {
return static_cast<__CryptoStreamMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CryptoStreamMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CryptoStreamMode(int32_t  value__) noexcept;

/// @brief Field Read value: I32(0)
static ::System::Security::Cryptography::CryptoStreamMode const Read;

/// @brief Field Write value: I32(1)
static ::System::Security::Cryptography::CryptoStreamMode const Write;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2614};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::CryptoStreamMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::CryptoStreamMode, 0x4>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CryptoStreamMode, "System.Security.Cryptography", "CryptoStreamMode");
