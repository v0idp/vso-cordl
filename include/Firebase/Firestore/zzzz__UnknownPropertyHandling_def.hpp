#pragma once
// IWYU pragma private; include "Firebase/Firestore/UnknownPropertyHandling.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnknownPropertyHandling)
// Forward declare root types
namespace Firebase::Firestore {
struct UnknownPropertyHandling;
}
// Write type traits
MARK_VAL_T(::Firebase::Firestore::UnknownPropertyHandling);
// Dependencies 
namespace Firebase::Firestore {
// Is value type: true
// CS Name: Firebase.Firestore.UnknownPropertyHandling
struct CORDL_TYPE UnknownPropertyHandling {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UnknownPropertyHandling_Unwrapped
enum struct __UnknownPropertyHandling_Unwrapped : int32_t {
__E_Ignore = static_cast<int32_t>(0x0),
__E_Warn = static_cast<int32_t>(0x1),
__E_Throw = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnknownPropertyHandling_Unwrapped () const noexcept {
return static_cast<__UnknownPropertyHandling_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UnknownPropertyHandling() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnknownPropertyHandling(int32_t  value__) noexcept;

/// @brief Field Ignore value: I32(0)
static ::Firebase::Firestore::UnknownPropertyHandling const Ignore;

/// @brief Field Throw value: I32(2)
static ::Firebase::Firestore::UnknownPropertyHandling const Throw;

/// @brief Field Warn value: I32(1)
static ::Firebase::Firestore::UnknownPropertyHandling const Warn;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11190};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::UnknownPropertyHandling, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::UnknownPropertyHandling, 0x4>, "Size mismatch!");

} // namespace end def Firebase::Firestore
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::UnknownPropertyHandling, "Firebase.Firestore", "UnknownPropertyHandling");
