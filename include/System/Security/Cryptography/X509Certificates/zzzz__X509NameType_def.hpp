#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509NameType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(X509NameType)
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X509NameType;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::X509Certificates::X509NameType);
// Dependencies 
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// CS Name: System.Security.Cryptography.X509Certificates.X509NameType
struct CORDL_TYPE X509NameType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __X509NameType_Unwrapped
enum struct __X509NameType_Unwrapped : int32_t {
__E_SimpleName = static_cast<int32_t>(0x0),
__E_EmailName = static_cast<int32_t>(0x1),
__E_UpnName = static_cast<int32_t>(0x2),
__E_DnsName = static_cast<int32_t>(0x3),
__E_DnsFromAlternativeName = static_cast<int32_t>(0x4),
__E_UrlName = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __X509NameType_Unwrapped () const noexcept {
return static_cast<__X509NameType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr X509NameType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr X509NameType(int32_t  value__) noexcept;

/// @brief Field DnsFromAlternativeName value: I32(4)
static ::System::Security::Cryptography::X509Certificates::X509NameType const DnsFromAlternativeName;

/// @brief Field DnsName value: I32(3)
static ::System::Security::Cryptography::X509Certificates::X509NameType const DnsName;

/// @brief Field EmailName value: I32(1)
static ::System::Security::Cryptography::X509Certificates::X509NameType const EmailName;

/// @brief Field SimpleName value: I32(0)
static ::System::Security::Cryptography::X509Certificates::X509NameType const SimpleName;

/// @brief Field UpnName value: I32(2)
static ::System::Security::Cryptography::X509Certificates::X509NameType const UpnName;

/// @brief Field UrlName value: I32(5)
static ::System::Security::Cryptography::X509Certificates::X509NameType const UrlName;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7538};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509NameType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509NameType, 0x4>, "Size mismatch!");

} // namespace end def System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509NameType, "System.Security.Cryptography.X509Certificates", "X509NameType");
