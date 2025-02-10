#pragma once
// IWYU pragma private; include "System/IO/Compression/MatchState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MatchState)
// Forward declare root types
namespace System::IO::Compression {
struct MatchState;
}
// Write type traits
MARK_VAL_T(::System::IO::Compression::MatchState);
// Dependencies 
namespace System::IO::Compression {
// Is value type: true
// CS Name: System.IO.Compression.MatchState
struct CORDL_TYPE MatchState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MatchState_Unwrapped
enum struct __MatchState_Unwrapped : int32_t {
__E_HasSymbol = static_cast<int32_t>(0x1),
__E_HasMatch = static_cast<int32_t>(0x2),
__E_HasSymbolAndMatch = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MatchState_Unwrapped () const noexcept {
return static_cast<__MatchState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MatchState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MatchState(int32_t  value__) noexcept;

/// @brief Field HasMatch value: I32(2)
static ::System::IO::Compression::MatchState const HasMatch;

/// @brief Field HasSymbol value: I32(1)
static ::System::IO::Compression::MatchState const HasSymbol;

/// @brief Field HasSymbolAndMatch value: I32(3)
static ::System::IO::Compression::MatchState const HasSymbolAndMatch;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11286};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::MatchState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::MatchState, 0x4>, "Size mismatch!");

} // namespace end def System::IO::Compression
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::MatchState, "System.IO.Compression", "MatchState");
