#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DSAParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DSAParameters)
// Forward declare root types
namespace System::Security::Cryptography {
struct DSAParameters;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::DSAParameters);
// Dependencies 
namespace System::Security::Cryptography {
// Is value type: true
// CS Name: System.Security.Cryptography.DSAParameters
struct CORDL_TYPE DSAParameters {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DSAParameters() ;

// Ctor Parameters [CppParam { name: "P", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "Q", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "G", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "Y", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "J", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "X", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "Seed", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "Counter", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DSAParameters(::ArrayW<uint8_t,::Array<uint8_t>*>  P, ::ArrayW<uint8_t,::Array<uint8_t>*>  Q, ::ArrayW<uint8_t,::Array<uint8_t>*>  G, ::ArrayW<uint8_t,::Array<uint8_t>*>  Y, ::ArrayW<uint8_t,::Array<uint8_t>*>  J, ::ArrayW<uint8_t,::Array<uint8_t>*>  X, ::ArrayW<uint8_t,::Array<uint8_t>*>  Seed, int32_t  Counter) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2630};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field P, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  P;

/// @brief Field Q, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  Q;

/// @brief Field G, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  G;

/// @brief Field Y, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  Y;

/// @brief Field J, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  J;

/// @brief Field X, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  X;

/// @brief Field Seed, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  Seed;

/// @brief Field Counter, offset: 0x38, size: 0x4, def value: None
 int32_t  Counter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::DSAParameters, P) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DSAParameters, Q) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DSAParameters, G) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DSAParameters, Y) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DSAParameters, J) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DSAParameters, X) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DSAParameters, Seed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DSAParameters, Counter) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::DSAParameters, 0x40>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DSAParameters, "System.Security.Cryptography", "DSAParameters");
