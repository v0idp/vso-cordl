#pragma once
// IWYU pragma private; include "Internal/Cryptography/Pal/GeneralNameType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GeneralNameType)
// Forward declare root types
namespace Internal::Cryptography::Pal {
struct GeneralNameType;
}
// Write type traits
MARK_VAL_T(::Internal::Cryptography::Pal::GeneralNameType);
// Dependencies 
namespace Internal::Cryptography::Pal {
// Is value type: true
// CS Name: Internal.Cryptography.Pal.GeneralNameType
struct CORDL_TYPE GeneralNameType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GeneralNameType_Unwrapped
enum struct __GeneralNameType_Unwrapped : int32_t {
__E_OtherName = static_cast<int32_t>(0x0),
__E_Rfc822Name = static_cast<int32_t>(0x1),
__E_Email = static_cast<int32_t>(0x1),
__E_DnsName = static_cast<int32_t>(0x2),
__E_X400Address = static_cast<int32_t>(0x3),
__E_DirectoryName = static_cast<int32_t>(0x4),
__E_EdiPartyName = static_cast<int32_t>(0x5),
__E_UniformResourceIdentifier = static_cast<int32_t>(0x6),
__E_IPAddress = static_cast<int32_t>(0x7),
__E_RegisteredId = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GeneralNameType_Unwrapped () const noexcept {
return static_cast<__GeneralNameType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GeneralNameType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GeneralNameType(int32_t  value__) noexcept;

/// @brief Field DirectoryName value: I32(4)
static ::Internal::Cryptography::Pal::GeneralNameType const DirectoryName;

/// @brief Field DnsName value: I32(2)
static ::Internal::Cryptography::Pal::GeneralNameType const DnsName;

/// @brief Field EdiPartyName value: I32(5)
static ::Internal::Cryptography::Pal::GeneralNameType const EdiPartyName;

/// @brief Field Email value: I32(1)
static ::Internal::Cryptography::Pal::GeneralNameType const Email;

/// @brief Field IPAddress value: I32(7)
static ::Internal::Cryptography::Pal::GeneralNameType const IPAddress;

/// @brief Field OtherName value: I32(0)
static ::Internal::Cryptography::Pal::GeneralNameType const OtherName;

/// @brief Field RegisteredId value: I32(8)
static ::Internal::Cryptography::Pal::GeneralNameType const RegisteredId;

/// @brief Field Rfc822Name value: I32(1)
static ::Internal::Cryptography::Pal::GeneralNameType const Rfc822Name;

/// @brief Field UniformResourceIdentifier value: I32(6)
static ::Internal::Cryptography::Pal::GeneralNameType const UniformResourceIdentifier;

/// @brief Field X400Address value: I32(3)
static ::Internal::Cryptography::Pal::GeneralNameType const X400Address;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7424};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Internal::Cryptography::Pal::GeneralNameType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Internal::Cryptography::Pal::GeneralNameType, 0x4>, "Size mismatch!");

} // namespace end def Internal::Cryptography::Pal
DEFINE_IL2CPP_ARG_TYPE(::Internal::Cryptography::Pal::GeneralNameType, "Internal.Cryptography.Pal", "GeneralNameType");
