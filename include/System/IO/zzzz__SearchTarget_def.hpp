#pragma once
// IWYU pragma private; include "System/IO/SearchTarget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SearchTarget)
// Forward declare root types
namespace System::IO {
struct SearchTarget;
}
// Write type traits
MARK_VAL_T(::System::IO::SearchTarget);
// Dependencies 
namespace System::IO {
// Is value type: true
// CS Name: System.IO.SearchTarget
struct CORDL_TYPE SearchTarget {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SearchTarget_Unwrapped
enum struct __SearchTarget_Unwrapped : int32_t {
__E_Files = static_cast<int32_t>(0x1),
__E_Directories = static_cast<int32_t>(0x2),
__E_Both = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SearchTarget_Unwrapped () const noexcept {
return static_cast<__SearchTarget_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SearchTarget() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SearchTarget(int32_t  value__) noexcept;

/// @brief Field Both value: I32(3)
static ::System::IO::SearchTarget const Both;

/// @brief Field Directories value: I32(2)
static ::System::IO::SearchTarget const Directories;

/// @brief Field Files value: I32(1)
static ::System::IO::SearchTarget const Files;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3259};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::SearchTarget, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::SearchTarget, 0x4>, "Size mismatch!");

} // namespace end def System::IO
DEFINE_IL2CPP_ARG_TYPE(::System::IO::SearchTarget, "System.IO", "SearchTarget");
