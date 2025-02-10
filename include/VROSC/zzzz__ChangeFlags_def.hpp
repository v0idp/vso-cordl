#pragma once
// IWYU pragma private; include "VROSC/ChangeFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChangeFlags)
// Forward declare root types
namespace VROSC {
struct ChangeFlags;
}
// Write type traits
MARK_VAL_T(::VROSC::ChangeFlags);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.ChangeFlags
struct CORDL_TYPE ChangeFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ChangeFlags_Unwrapped
enum struct __ChangeFlags_Unwrapped : int32_t {
__E_NoChange = static_cast<int32_t>(0x0),
__E_Changed = static_cast<int32_t>(0x1),
__E_CriticalChange = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ChangeFlags_Unwrapped () const noexcept {
return static_cast<__ChangeFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ChangeFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ChangeFlags(int32_t  value__) noexcept;

/// @brief Field Changed value: I32(1)
static ::VROSC::ChangeFlags const Changed;

/// @brief Field CriticalChange value: I32(2)
static ::VROSC::ChangeFlags const CriticalChange;

/// @brief Field NoChange value: I32(0)
static ::VROSC::ChangeFlags const NoChange;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{420};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ChangeFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ChangeFlags, 0x4>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ChangeFlags, "VROSC", "ChangeFlags");
