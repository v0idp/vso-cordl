#pragma once
// IWYU pragma private; include "Firebase/Firestore/ServerTimestampBehavior.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ServerTimestampBehavior)
// Forward declare root types
namespace Firebase::Firestore {
struct ServerTimestampBehavior;
}
// Write type traits
MARK_VAL_T(::Firebase::Firestore::ServerTimestampBehavior);
// Dependencies 
namespace Firebase::Firestore {
// Is value type: true
// CS Name: Firebase.Firestore.ServerTimestampBehavior
struct CORDL_TYPE ServerTimestampBehavior {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ServerTimestampBehavior_Unwrapped
enum struct __ServerTimestampBehavior_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Estimate = static_cast<int32_t>(0x1),
__E_Previous = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ServerTimestampBehavior_Unwrapped () const noexcept {
return static_cast<__ServerTimestampBehavior_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ServerTimestampBehavior() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ServerTimestampBehavior(int32_t  value__) noexcept;

/// @brief Field Estimate value: I32(1)
static ::Firebase::Firestore::ServerTimestampBehavior const Estimate;

/// @brief Field None value: I32(0)
static ::Firebase::Firestore::ServerTimestampBehavior const None;

/// @brief Field Previous value: I32(2)
static ::Firebase::Firestore::ServerTimestampBehavior const Previous;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11196};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::ServerTimestampBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::ServerTimestampBehavior, 0x4>, "Size mismatch!");

} // namespace end def Firebase::Firestore
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::ServerTimestampBehavior, "Firebase.Firestore", "ServerTimestampBehavior");
